`include "VX_tex_define.vh"

module VX_tex_addr #(
    parameter CORE_ID = 0,
    parameter REQ_INFO_WIDTH = 1
) (
    input wire  clk,
    input wire  reset,

    // handshake
    
    input wire  valid_in,
    output wire ready_in,

    // inputs

    input wire [`NW_BITS-1:0]           req_wid,
    input wire [`NUM_THREADS-1:0]       req_tmask,
    input wire [31:0]                   req_PC,
    input wire [REQ_INFO_WIDTH-1:0]     req_info,

    input wire [`TEX_FORMAT_BITS-1:0]   format,
    input wire [`TEX_FILTER_BITS-1:0]   filter,
    input wire [`TEX_WRAP_BITS-1:0]     wrap_u,
    input wire [`TEX_WRAP_BITS-1:0]     wrap_v,

    input wire [`TEX_ADDR_BITS-1:0]     base_addr,

    input wire [`NUM_THREADS-1:0][`TEX_MIPOFF_BITS-1:0] mip_offsets,    
    input wire [`NUM_THREADS-1:0][`TEX_WIDTH_BITS-1:0]  log_widths,
    input wire [`NUM_THREADS-1:0][`TEX_HEIGHT_BITS-1:0] log_heights,
    
    input wire [`NUM_THREADS-1:0][31:0] coord_u,
    input wire [`NUM_THREADS-1:0][31:0] coord_v,

    // outputs

    output wire                     mem_req_valid,  
    output wire [`NW_BITS-1:0]      mem_req_wid,
    output wire [`NUM_THREADS-1:0]  mem_req_tmask,
    output wire [31:0]              mem_req_PC,
    output wire [`TEX_FILTER_BITS-1:0] mem_req_filter,
    output wire [`TEX_STRIDE_BITS-1:0] mem_req_stride,
    output wire [`NUM_THREADS-1:0][3:0][31:0] mem_req_addr,
    output wire [`NUM_THREADS-1:0][`FIXED_FRAC-1:0] mem_req_u,
    output wire [`NUM_THREADS-1:0][`FIXED_FRAC-1:0] mem_req_v,
    output wire [REQ_INFO_WIDTH-1:0] mem_req_info,  
    input wire                      mem_req_ready
);

    `UNUSED_PARAM (CORE_ID)

    wire [`NUM_THREADS-1:0][1:0][`FIXED_FRAC-1:0] clamped_u;
    wire [`NUM_THREADS-1:0][1:0][`FIXED_FRAC-1:0] clamped_v;
    wire [`TEX_STRIDE_BITS-1:0] log_stride;

    // stride   

    VX_tex_stride #(
        .CORE_ID (CORE_ID)
    ) tex_stride (
        .format (format),
        .log_stride (log_stride)
    );

    // addressing mode

    for (genvar i = 0; i < `NUM_THREADS; ++i) begin

        wire [31:0] fu[1:0];
        wire [31:0] fv[1:0];

        assign fu[0] = coord_u[i] - (filter ? (`FIXED_HALF >> log_widths[i]) : 0); 
        assign fu[1] = coord_u[i] + (filter ? (`FIXED_HALF >> log_widths[i]) : 0);

        assign fv[0] = coord_v[i] - (filter ? (`FIXED_HALF >> log_heights[i]) : 0);        
        assign fv[1] = coord_v[i] + (filter ? (`FIXED_HALF >> log_heights[i]) : 0);        

        VX_tex_wrap #(
            .CORE_ID (CORE_ID)
        ) tex_wrap_u0 (
            .wrap_i  (wrap_u),
            .coord_i (fu[0]),
            .coord_o (clamped_u[i][0])
        );

        VX_tex_wrap #(
            .CORE_ID (CORE_ID)
        ) tex_wrap_u1 (
            .wrap_i  (wrap_u),
            .coord_i (fu[1]),
            .coord_o (clamped_u[i][1])
        );

        VX_tex_wrap #(
            .CORE_ID (CORE_ID)
        ) tex_wrap_v0 (
            .wrap_i  (wrap_v),
            .coord_i (fv[0]),
            .coord_o (clamped_v[i][0])
        );

        VX_tex_wrap #(
            .CORE_ID (CORE_ID)
        ) tex_wrap_v1 (
            .wrap_i  (wrap_v),
            .coord_i (fv[1]),
            .coord_o (clamped_v[i][1])
        );
    end
    
    // addresses generation

    wire [`NUM_THREADS-1:0][3:0][31:0] addr;

    for (genvar i = 0; i < `NUM_THREADS; ++i) begin

        wire [`FIXED_FRAC-1:0] x [1:0];
        wire [`FIXED_FRAC-1:0] y [1:0];        

        assign x[0] = clamped_u[i][0] >> ((`FIXED_FRAC) - log_widths[i]); 
        assign x[1] = clamped_u[i][1] >> ((`FIXED_FRAC) - log_widths[i]); 

        assign y[0] = clamped_v[i][0] >> ((`FIXED_FRAC) - log_heights[i]);         
        assign y[1] = clamped_v[i][1] >> ((`FIXED_FRAC) - log_heights[i]); 

        assign addr[i][0] = base_addr + 32'(mip_offsets[i]) + (32'(x[0]) + (32'(y[0]) << log_widths[i])) << log_stride;
        assign addr[i][1] = base_addr + 32'(mip_offsets[i]) + (32'(x[1]) + (32'(y[0]) << log_widths[i])) << log_stride;
        assign addr[i][2] = base_addr + 32'(mip_offsets[i]) + (32'(x[0]) + (32'(y[1]) << log_widths[i])) << log_stride;
        assign addr[i][3] = base_addr + 32'(mip_offsets[i]) + (32'(x[1]) + (32'(y[1]) << log_widths[i])) << log_stride;
    end

    wire [`NUM_THREADS-1:0][`FIXED_FRAC-1:0] u0, v0;
    for (genvar i = 0; i < `NUM_THREADS; ++i) begin
        assign u0[i] = clamped_u[i][0];
        assign v0[i] = clamped_v[i][0];
    end

    wire stall_out = mem_req_valid && ~mem_req_ready;

    VX_pipe_register #(
        .DATAW  (1 + `NW_BITS + `NUM_THREADS + 32 + `TEX_FILTER_BITS + `TEX_STRIDE_BITS + (`NUM_THREADS * 4 * 32) + (2*`NUM_THREADS * `FIXED_FRAC) + REQ_INFO_WIDTH),
        .RESETW (1)
    ) pipe_reg (
        .clk      (clk),
        .reset    (reset),
        .enable   (~stall_out),
        .data_in  ({valid_in,      req_wid,     req_tmask,     req_PC,     filter,         log_stride,     addr,         u0,        v0,        req_info}),
        .data_out ({mem_req_valid, mem_req_wid, mem_req_tmask, mem_req_PC, mem_req_filter, mem_req_stride, mem_req_addr, mem_req_u, mem_req_v, mem_req_info})
    );

    assign ready_in = ~stall_out;

 `ifdef DBG_PRINT_TEX   
    always @(posedge clk) begin
        if (mem_req_valid && mem_req_ready) begin
            $write("%t: core%0d-tex-addr: wid=%0d, PC=%0h, tmask=%b, filter=%0d, tride=%0d, addr=", 
                    $time, CORE_ID, mem_req_wid, mem_req_PC, mem_req_tmask, mem_req_filter, mem_req_stride);
            `PRINT_ARRAY2D(mem_req_addr, 4, `NUM_THREADS);
            $write("\n");
        end
    end
`endif

endmodule