`include "VX_tex_define.vh"

module VX_tex_unit #(  
    parameter CORE_ID = 0
) (
    input wire  clk,
    input wire  reset,    

    // Texture unit <-> Memory Unit
    VX_dcache_core_req_if dcache_req_if,
    VX_dcache_core_rsp_if dcache_rsp_if,

    // Inputs
    VX_tex_req_if   tex_req_if,
    VX_tex_csr_if   tex_csr_if,

    // Outputs
    VX_tex_rsp_if   tex_rsp_if
);

    localparam REQ_INFO_WIDTH_A = `TEX_FORMAT_BITS + `NR_BITS + 1;
    localparam REQ_INFO_WIDTH_M = (2 * `NUM_THREADS * `FIXED_FRAC) + REQ_INFO_WIDTH_A;

    `UNUSED_PARAM (CORE_ID)
    `UNUSED_VAR (reset)

    reg [`TEX_ADDR_BITS-1:0]   tex_addr   [`NUM_TEX_UNITS-1: 0]; 
    reg [`TEX_FORMAT_BITS-1:0] tex_format [`NUM_TEX_UNITS-1: 0];
    reg [`TEX_WIDTH_BITS-1:0]  tex_width  [`NUM_TEX_UNITS-1: 0];
    reg [`TEX_HEIGHT_BITS-1:0] tex_height [`NUM_TEX_UNITS-1: 0];
    reg [`TEX_STRIDE_BITS-1:0] tex_stride [`NUM_TEX_UNITS-1: 0];
    reg [`TEX_WRAP_BITS-1:0]   tex_wrap_u [`NUM_TEX_UNITS-1: 0];
    reg [`TEX_WRAP_BITS-1:0]   tex_wrap_v [`NUM_TEX_UNITS-1: 0];
    reg [`TEX_FILTER_BITS-1:0] tex_filter [`NUM_TEX_UNITS-1: 0];

    // CSRs programming

    for (genvar i = 0; i < `NUM_TEX_UNITS; ++i) begin
        always @(posedge clk ) begin        
            if (reset) begin
                tex_addr[i]   <= 0;
                tex_format[i] <= 0;
                tex_width[i]  <= 0;
                tex_height[i] <= 0;
                tex_stride[i] <= 0;
                tex_wrap_u[i] <= 0;
                tex_wrap_v[i] <= 0;
                tex_filter[i] <= 0;
            end begin
                if (tex_csr_if.write_enable) begin            
                    case (tex_csr_if.write_addr)
                        `CSR_TEX_ADDR(i)   : tex_addr[i]   <= tex_csr_if.write_data[`TEX_ADDR_BITS-1:0];
                        `CSR_TEX_FORMAT(i) : tex_format[i] <= tex_csr_if.write_data[`TEX_FORMAT_BITS-1:0];
                        `CSR_TEX_WIDTH(i)  : tex_width[i]  <= tex_csr_if.write_data[`TEX_WIDTH_BITS-1:0];
                        `CSR_TEX_HEIGHT(i) : tex_height[i] <= tex_csr_if.write_data[`TEX_HEIGHT_BITS-1:0];
                        `CSR_TEX_STRIDE(i) : tex_stride[i] <= tex_csr_if.write_data[`TEX_STRIDE_BITS-1:0];
                        `CSR_TEX_WRAP_U(i) : tex_wrap_u[i] <= tex_csr_if.write_data[`TEX_WRAP_BITS-1:0];
                        `CSR_TEX_WRAP_V(i) : tex_wrap_v[i] <= tex_csr_if.write_data[`TEX_WRAP_BITS-1:0];
                        `CSR_TEX_FILTER(i) : tex_filter[i] <= tex_csr_if.write_data[`TEX_FILTER_BITS-1:0];
                        default:
                            assert(tex_csr_if.write_addr >= `CSR_TEX_BEGIN(0) 
                                && tex_csr_if.write_addr < `CSR_TEX_BEGIN(`CSR_TEX_STATES));
                    endcase
                end
            end
        end
    end

    // address generation

    wire mem_req_valid;
    wire [`NW_BITS-1:0]     mem_req_wid;
    wire [`NUM_THREADS-1:0] mem_req_tmask;
    wire [31:0]             mem_req_PC;
    wire [`TEX_FILTER_BITS-1:0] mem_req_filter;
    wire [`TEX_STRIDE_BITS-1:0] mem_req_stride;
    wire [`NUM_THREADS-1:0][`FIXED_FRAC-1:0] mem_req_u;
    wire [`NUM_THREADS-1:0][`FIXED_FRAC-1:0] mem_req_v;
    wire [`NUM_THREADS-1:0][3:0][31:0] mem_req_addr;
    wire [REQ_INFO_WIDTH_A-1:0] mem_req_info;
    wire mem_req_ready;

    wire mem_rsp_valid;
    wire [`NW_BITS-1:0]     mem_rsp_wid;
    wire [`NUM_THREADS-1:0] mem_rsp_tmask;
    wire [31:0]             mem_rsp_PC;
    wire [`TEX_FILTER_BITS-1:0] mem_rsp_filter;    
    wire [`NUM_THREADS-1:0][3:0][31:0] mem_rsp_data;
    wire [REQ_INFO_WIDTH_M-1:0] mem_rsp_info;
    wire mem_rsp_ready;
                
    VX_tex_addr #(
        .REQ_INFO_WIDTH (REQ_INFO_WIDTH_A)
    ) _tex_addr (
        .clk            (clk),
        .reset          (reset),

        .valid_in       (tex_req_if.valid),
        .ready_in       (tex_req_if.ready),   

        .req_wid        (tex_req_if.wid), 
        .req_tmask      (tex_req_if.tmask),
        .req_PC         (tex_req_if.PC), 
        .req_info       ({tex_format[tex_req_if.unit], tex_req_if.rd, tex_req_if.wb}),

        .filter         (tex_filter[tex_req_if.unit]),
        .wrap_u         (tex_wrap_u[tex_req_if.unit]),
        .wrap_v         (tex_wrap_v[tex_req_if.unit]),        
        
        .base_addr      (tex_addr[tex_req_if.unit]),
        .log_stride     (tex_stride[tex_req_if.unit]),
        .log_width      (tex_width[tex_req_if.unit]),
        .log_height     (tex_height[tex_req_if.unit]),
        
        .coord_u        (tex_req_if.u),
        .coord_v        (tex_req_if.v),
        .lod            (tex_req_if.lod),

        .mem_req_valid  (mem_req_valid), 
        .mem_req_wid    (mem_req_wid),   
        .mem_req_tmask  (mem_req_tmask),         
        .mem_req_PC     (mem_req_PC), 
        .mem_req_filter (mem_req_filter), 
        .mem_req_stride (mem_req_stride),
        .mem_req_u      (mem_req_u),
        .mem_req_v      (mem_req_v),
        .mem_req_info   (mem_req_info),
        .mem_req_addr   (mem_req_addr),
        .mem_req_ready  (mem_req_ready)
    );

    // retrieve texel values from memory
    VX_tex_memory #(
        .CORE_ID        (CORE_ID),
        .REQ_INFO_WIDTH (REQ_INFO_WIDTH_M)
    ) tex_memory (
        .clk           (clk),
        .reset         (reset),

        // memory interface
        .dcache_req_if (dcache_req_if),
        .dcache_rsp_if (dcache_rsp_if),

        // inputs
        .req_valid (mem_req_valid),
        .req_wid   (mem_req_wid), 
        .req_tmask (mem_req_tmask), 
        .req_PC    (mem_req_PC), 
        .req_filter(mem_req_filter), 
        .req_stride(mem_req_stride),
        .req_addr  (mem_req_addr),
        .req_info  ({mem_req_u, mem_req_v, mem_req_info}),
        .req_ready (mem_req_ready),

        // outputs
        .rsp_valid (mem_rsp_valid),
        .rsp_wid   (mem_rsp_wid), 
        .rsp_tmask (mem_rsp_tmask), 
        .rsp_PC    (mem_rsp_PC),         
        .rsp_filter(mem_rsp_filter), 
        .rsp_data  (mem_rsp_data),
        .rsp_info  (mem_rsp_info),
        .rsp_ready (mem_rsp_ready)
    );

    // apply sampler

    wire [`TEX_FORMAT_BITS-1:0] rsp_format;
    wire [`NUM_THREADS-1:0][`FIXED_FRAC-1:0] rsp_u;
    wire [`NUM_THREADS-1:0][`FIXED_FRAC-1:0] rsp_v;
    wire [`NR_BITS-1:0]         rsp_rd;   
    wire                        rsp_wb;
    
    assign {rsp_format, rsp_u, rsp_v, rsp_rd, rsp_wb} = mem_rsp_info;

    VX_tex_sampler #(
        .CORE_ID (CORE_ID)
    ) tex_sampler (
        .clk        (clk),
        .reset      (reset),

        // inputs
        .req_valid  (mem_rsp_valid),  
        .req_wid    (mem_rsp_wid), 
        .req_tmask  (mem_rsp_tmask),         
        .req_PC     (mem_rsp_PC),
        .req_texels (mem_rsp_data),     
        .req_filter (mem_rsp_filter),     
        .req_format (rsp_format),  
        .req_u      (rsp_u),
        .req_v      (rsp_v),               
        .req_rd     (rsp_rd),
        .req_wb     (rsp_wb), 
        .req_ready  (mem_rsp_ready),

        // outputs
        .rsp_valid  (tex_rsp_if.valid),
        .rsp_wid    (tex_rsp_if.wid),
        .rsp_tmask  (tex_rsp_if.tmask),
        .rsp_PC     (tex_rsp_if.PC),
        .rsp_rd     (tex_rsp_if.rd),
        .rsp_wb     (tex_rsp_if.wb),
        .rsp_data   (tex_rsp_if.data),
        .rsp_ready  (tex_rsp_if.ready)
    );    

`ifdef DBG_PRINT_TEX
    for (genvar i = 0; i < `NUM_TEX_UNITS; ++i) begin    
        always @(posedge clk) begin        
            if (tex_csr_if.write_enable 
             && (tex_csr_if.write_addr >= `CSR_TEX_BEGIN(i) 
              && tex_csr_if.write_addr < `CSR_TEX_BEGIN(i+1))) begin
                $display("%t: core%0d-tex_csr: csr_tex%d_addr, csr_data=%0h", $time, CORE_ID, i, tex_addr[i]);
                $display("%t: core%0d-tex_csr: csr_tex%d_format, csr_data=%0h", $time, CORE_ID, i, tex_format[i]);
                $display("%t: core%0d-tex_csr: csr_tex%d_width, csr_data=%0h", $time, CORE_ID, i, tex_width[i]);
                $display("%t: core%0d-tex_csr: csr_tex%d_height, csr_data=%0h", $time, CORE_ID, i, tex_height[i]);
                $display("%t: core%0d-tex_csr: csr_tex%d_stride, csr_data=%0h", $time, CORE_ID, i, tex_stride[i]);
                $display("%t: core%0d-tex_csr: csr_tex%d_wrap_u, csr_data=%0h", $time, CORE_ID, i, tex_wrap_u[i]);
                $display("%t: core%0d-tex_csr: csr_tex%d_wrap_v, csr_data=%0h", $time, CORE_ID, i, tex_wrap_v[i]);
                $display("%t: core%0d-tex_csr: csr_tex%d_filter, csr_data=%0h", $time, CORE_ID, i, tex_filter[i]);
            end
        end
    end
`endif

endmodule