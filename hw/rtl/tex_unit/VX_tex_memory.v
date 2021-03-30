`include "VX_tex_define.vh"
module VX_tex_memory #(
    parameter CORE_ID        = 0,
    parameter REQ_INFO_WIDTH = 1
) (    
    input wire clk,
    input wire reset,

   // memory interface
    VX_dcache_core_req_if dcache_req_if,
    VX_dcache_core_rsp_if dcache_rsp_if,

    // inputs
    input wire                          req_valid,
    input wire [`NW_BITS-1:0]           req_wid,
    input wire [`NUM_THREADS-1:0]       req_tmask,
    input wire [31:0]                   req_PC,
    input wire [`TEX_FILTER_BITS-1:0]   req_filter,
    input wire [`TEX_STRIDE_BITS-1:0]   req_stride,
    input wire [`NUM_THREADS-1:0][3:0][31:0] req_addr,
    input wire [REQ_INFO_WIDTH-1:0]     req_info,
    output wire                         req_ready,

    // outputs
    output wire                         rsp_valid,
    output wire [`NW_BITS-1:0]          rsp_wid,
    output wire [`NUM_THREADS-1:0]      rsp_tmask,
    output wire [31:0]                  rsp_PC,
    output wire [`TEX_FILTER_BITS-1:0]  rsp_filter,
    output wire [`NUM_THREADS-1:0][3:0][31:0] rsp_data,
    output wire [REQ_INFO_WIDTH-1:0]    rsp_info,
    input wire                          rsp_ready    
);

    `UNUSED_PARAM (CORE_ID)

    localparam RSP_CTR_W = $clog2(`NUM_THREADS * 4 + 1);

    wire [3:0] dup_reqs;
    wire [3:0][`NUM_THREADS-1:0][29:0] req_addr_w;
    wire [3:0][`NUM_THREADS-1:0][1:0] align_offs;

    // reorder address into quads

    for (genvar i = 0; i < `NUM_THREADS; ++i) begin
        for (genvar j = 0; j < 4; ++j) begin
            assign req_addr_w[j][i] = req_addr[i][j][31:2];       
            assign align_offs[j][i] = req_addr[i][j][1:0];
        end
    end

    // find duplicate addresses

    for (genvar i = 0; i < 4; ++i) begin
        wire [`NUM_THREADS-1:0] addr_matches;
        for (genvar j = 0; j < `NUM_THREADS; j++) begin
            assign addr_matches[j] = (req_addr_w[i][0] == req_addr_w[i][j]) || ~req_tmask[j];
        end    
        assign dup_reqs[i] = req_tmask[0] && (& addr_matches);
    end

    // save request addresses into fifo 
    
    wire reqq_push, reqq_pop, reqq_empty, reqq_full;

    wire [3:0][`NUM_THREADS-1:0][29:0] q_req_addr;
    wire [`NW_BITS-1:0]         q_req_wid;
    wire [`NUM_THREADS-1:0]     q_req_tmask;
    wire [31:0]                 q_req_PC;
    wire [`TEX_FILTER_BITS-1:0] q_req_filter;
    wire [REQ_INFO_WIDTH-1:0]   q_req_info;
    wire [`TEX_STRIDE_BITS-1:0] q_req_stride;
    wire [3:0][`NUM_THREADS-1:0][1:0] q_align_offs;
    wire [3:0]                  q_dup_reqs;

    assign reqq_push = req_valid && req_ready;
    
    VX_fifo_queue #(
        .DATAW    ((`NUM_THREADS * 4 * 30) + `NW_BITS + `NUM_THREADS + 32 + REQ_INFO_WIDTH + `TEX_FILTER_BITS + `TEX_STRIDE_BITS + (4 * `NUM_THREADS * 2) + 4), 
        .SIZE     (`LSUQ_SIZE),
        .BUFFERED (1)
    ) req_queue (
        .clk        (clk),
        .reset      (reset),
        .push       (reqq_push),
        .pop        (reqq_pop),
        .data_in    ({req_addr_w, req_wid,   req_tmask,   req_PC,   req_info,   req_filter,   req_stride,   align_offs,   dup_reqs}),                
        .data_out   ({q_req_addr, q_req_wid, q_req_tmask, q_req_PC, q_req_info, q_req_filter, q_req_stride, q_align_offs, q_dup_reqs}),
        .empty      (reqq_empty),
        .full       (reqq_full),
        `UNUSED_PIN (alm_full),
        `UNUSED_PIN (alm_empty),
        `UNUSED_PIN (size)
    );   

    // can take more requests?
    assign req_ready = ~reqq_full;

    ///////////////////////////////////////////////////////////////////////////

    wire req_texel_valid;
    wire req_texel_sent, last_texel_sent;
    wire req_texel_dup;
    wire [`NUM_THREADS-1:0][29:0] req_texel_addr;
    reg [1:0] req_texel_idx;
    reg req_texels_done;

    always @(posedge clk) begin
        if (reset || last_texel_sent) begin
            req_texel_idx <= 0;
        end else if (req_texel_sent) begin
            req_texel_idx <= req_texel_idx + 1;
        end
    end

    always @(posedge clk) begin
        if (reset || reqq_pop) begin
            req_texels_done <= 0;
        end else if (last_texel_sent) begin
            req_texels_done <= 1;
        end
    end

    assign req_texel_valid = ~reqq_empty && ~req_texels_done;
    assign req_texel_addr  = q_req_addr[req_texel_idx];
    assign req_texel_dup   = q_dup_reqs[req_texel_idx];

    wire is_last_texel = (req_texel_idx == (q_req_filter ? 3 : 0));
    assign last_texel_sent = req_texel_sent && is_last_texel;

    // DCache Request

    reg [`NUM_THREADS-1:0] texel_sent_mask;
    wire [`NUM_THREADS-1:0] dcache_req_fire; 
    wire [`NUM_THREADS-1:0] req_dup_mask;   

    assign dcache_req_fire = dcache_req_if.valid & dcache_req_if.ready;    

    assign req_texel_sent = (&(dcache_req_if.ready | texel_sent_mask | ~q_req_tmask))
                     || (req_texel_dup & dcache_req_if.ready[0]);

    always @(posedge clk) begin
        if (reset || req_texel_sent) begin
            texel_sent_mask <= 0;
        end else begin
            texel_sent_mask <= texel_sent_mask | dcache_req_fire;            
        end
    end

    assign req_dup_mask = {{(`NUM_THREADS-1){~req_texel_dup}}, 1'b1};

    assign dcache_req_if.valid  = {`NUM_THREADS{req_texel_valid}} & q_req_tmask & req_dup_mask & ~texel_sent_mask;
    assign dcache_req_if.rw     = {`NUM_THREADS{1'b0}};
    assign dcache_req_if.addr   = req_texel_addr;
    assign dcache_req_if.byteen = {`NUM_THREADS{4'b1111}};
    assign dcache_req_if.data   = 'x;

`ifdef DBG_CACHE_REQ_INFO
    assign dcache_req_if.tag = {`NUM_THREADS{q_req_PC, q_req_wid, req_texel_idx}};
`else
    assign dcache_req_if.tag = {`NUM_THREADS{req_texel_idx}};
    `UNUSED_VAR (q_req_wid)
    `UNUSED_VAR (q_req_PC)
`endif

    // Dcache Response

    reg [3:0][`NUM_THREADS-1:0][31:0] rsp_texels, rsp_texels_n;
    wire [`NUM_THREADS-1:0][3:0][31:0] rsp_texels_qual;
    reg [`NUM_THREADS-1:0][31:0] rsp_data_qual;
    reg [RSP_CTR_W-1:0] rsp_rem_ctr; 
    wire [`NUM_THREADS-1:0] rsp_cur_tmask;    
    wire [RSP_CTR_W-1:0] rsp_max_cnt;
    wire [$clog2(`NUM_THREADS + 1)-1:0] rsp_cur_cnt;
    wire dcache_rsp_fire;
    wire [1:0] rsp_texel_idx;
    wire rsp_texel_dup;

    assign rsp_texel_idx = dcache_rsp_if.tag[1:0];   

    assign rsp_texel_dup = q_dup_reqs[rsp_texel_idx];

    assign dcache_rsp_fire = (| dcache_rsp_if.valid) && dcache_rsp_if.ready;

    assign rsp_cur_tmask = rsp_texel_dup ? q_req_tmask : dcache_rsp_if.valid;

    assign rsp_cur_cnt = $countones(rsp_cur_tmask);

    assign rsp_max_cnt = $countones(q_req_tmask) * (q_req_filter ? 4 : 1);

    for (genvar i = 0; i < `NUM_THREADS; i++) begin             
        wire [31:0] src_mask = {32{dcache_rsp_if.valid[i]}};
        wire [31:0] src_data = ((i == 0 || rsp_texel_dup) ? dcache_rsp_if.data[0] : dcache_rsp_if.data[i]) & src_mask;

        reg [31:0] rsp_data_shifted;
        always @(*) begin
            rsp_data_shifted[31:16] = src_data[31:16];
            rsp_data_shifted[15:0]  = q_align_offs[rsp_texel_idx][i][1] ? src_data[31:16] : src_data[15:0];
            rsp_data_shifted[7:0]   = q_align_offs[rsp_texel_idx][i][0] ? rsp_data_shifted[15:8] : rsp_data_shifted[7:0];
        end

        always @(*) begin
            case (q_req_stride)
            0: rsp_data_qual[i] = 32'(rsp_data_shifted[7:0]);
            1: rsp_data_qual[i] = 32'(rsp_data_shifted[15:0]);
            default: rsp_data_qual[i] = rsp_data_shifted;     
            endcase
        end        
    end

    always @(*) begin
        rsp_texels_n = rsp_texels;
        rsp_texels_n[rsp_texel_idx] |= rsp_data_qual;
    end

    always @(posedge clk) begin
        if (reset || reqq_pop) begin
            rsp_texels <= '0;
        end else if (dcache_rsp_fire) begin
            rsp_texels <= rsp_texels_n;
        end
    end

    always @(posedge clk) begin
        if (reset) begin
            rsp_rem_ctr <= 0;
        end else begin
            if ((| dcache_req_fire) && 0 == rsp_rem_ctr) begin
                rsp_rem_ctr <= rsp_max_cnt;
            end else if (dcache_rsp_fire) begin
                rsp_rem_ctr <= rsp_rem_ctr - RSP_CTR_W'(rsp_cur_cnt);
            end
        end
    end

    for (genvar i = 0; i < `NUM_THREADS; ++i) begin
        for (genvar j = 0; j < 4; ++j) begin
            assign rsp_texels_qual[i][j] = rsp_texels_n[j][i];
        end
    end

    wire stall_out = rsp_valid && ~rsp_ready;

    wire rsp_texels_done = dcache_rsp_fire && (rsp_rem_ctr == RSP_CTR_W'(rsp_cur_cnt));

    assign reqq_pop = rsp_texels_done && ~stall_out;
    
    VX_pipe_register #(
        .DATAW  (1 + `NW_BITS + `NUM_THREADS + 32 + `TEX_FILTER_BITS + (4 * `NUM_THREADS * 32) + REQ_INFO_WIDTH),
        .RESETW (1)
    ) rsp_pipe_reg (
        .clk      (clk),
        .reset    (reset),
        .enable   (~stall_out),
        .data_in  ({rsp_texels_done, q_req_wid, q_req_tmask, q_req_PC, q_req_filter, rsp_texels_qual, q_req_info}),
        .data_out ({rsp_valid,       rsp_wid,   rsp_tmask,   rsp_PC,   rsp_filter,   rsp_data,        rsp_info})
    );

    // Can accept new cache response?
    assign dcache_rsp_if.ready = ~stall_out || (rsp_rem_ctr != RSP_CTR_W'(rsp_cur_cnt));

`ifdef DBG_PRINT_TEX
   always @(posedge clk) begin        
        if ((| dcache_req_fire)) begin
            $write("%t: core%0d-tex-cache-req: wid=%0d, PC=%0h, tmask=%b, tag=%0h, addr=", 
                    $time, CORE_ID, q_req_wid, q_req_PC, dcache_req_fire, dcache_req_if.tag);
            `PRINT_ARRAY1D(req_texel_addr, `NUM_THREADS);
            $write(", is_dup=%b\n", req_texel_dup);
        end
        if (dcache_rsp_fire) begin
            $write("%t: core%0d-tex-cache-rsp: wid=%0d, PC=%0h, tmask=%b, tag=%0h, data=", 
                    $time, CORE_ID, q_req_wid, q_req_PC, dcache_rsp_if.valid, dcache_rsp_if.tag);
            `PRINT_ARRAY1D(rsp_data_qual, `NUM_THREADS);
            $write("\n");
        end
        if (rsp_valid && rsp_ready) begin
            $write("%t: core%0d-tex-mem-rsp: wid=%0d, PC=%0h, filter=%0d, data=", 
                    $time, CORE_ID, rsp_wid, rsp_PC, rsp_filter);
            `PRINT_ARRAY2D(rsp_data, 4, `NUM_THREADS);
            $write("\n");
        end
    end
`endif

endmodule
