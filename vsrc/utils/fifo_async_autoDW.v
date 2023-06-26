module fifo_async_autoDW #(
    parameter integer DW_W = 64,
    parameter integer DW_R = 32,
    parameter integer SIZE = 256*8 //r: unit:byte
)
(
    clk_w,
    clk_r,
    rst_n,

    w_req,
    data_i,
    full,

    r_req,
    data_o,
    empty,

    w_cnt,
    r_cnt
);
`include "mydefines.v"
// `include "myfuncs.v"
function integer myclog2;
    input integer n;
begin
    myclog2 = 0;
    for(n=n-1; n>0; n = n>>1) begin
        myclog2 = myclog2 + 1;
    end
end
endfunction

localparam integer DW_W_BYTE = (DW_W+7)/8;
localparam integer DW_R_BYTE = (DW_R+7)/8;
localparam integer WCNT_W = myclog2((SIZE+DW_W_BYTE-1)/DW_W_BYTE);
localparam integer RCNT_W = myclog2((SIZE+DW_W_BYTE-1)/DW_R_BYTE);
localparam integer PTR_W = myclog2(SIZE);

input clk_w;
input clk_r;
input rst_n;

input w_req;
input [DW_W-1:0] data_i;
output full;

input r_req;
output [DW_R-1:0] data_o;
output empty;

output [WCNT_W-1:0] w_cnt;
output [RCNT_W-1:0] r_cnt;

reg [7:0] data_r [SIZE-1:0];
reg [PTR_W:0] w_ptr;
reg [PTR_W:0] r_ptr;

wire [PTR_W:0] byte_cnt = (w_ptr>r_ptr) ? (w_ptr-r_ptr) : ({(PTR_W+1){1'b1}}-r_ptr+w_ptr+1);
assign full = ((SIZE[PTR_W:0])-byte_cnt)<DW_W_BYTE[PTR_W:0];
assign empty = (byte_cnt)< DW_R_BYTE[PTR_W:0];

wire [7:0] data_i_buf[DW_W_BYTE-1:0];
genvar i;
generate
for(i=0; i<DW_W_BYTE; i=i+1) begin
assign data_i_buf[i] =  data_i[(i+1)*8-1:i*8]; 
end
endgenerate

always@(posedge clk_w) begin
    integer j;
    if(~rst_n) begin
        w_ptr <= 0;
    end
    else if(w_req & ~full) begin
        for(j=0; j<DW_W_BYTE; j=j+1) begin
            data_r[{j[PTR_W:0]+w_ptr}[PTR_W-1:0]] <= data_i_buf[j]; 
        end
        w_ptr <= w_ptr+DW_W_BYTE[PTR_W:0];
    end
end

always@(posedge clk_r) begin
    if(~rst_n) begin
       r_ptr <= 0;
    end
    else if(r_req & ~empty) begin
        r_ptr <= r_ptr+DW_R_BYTE[PTR_W:0];
    end
end


generate
for(i=0; i<DW_R_BYTE; i=i+1) begin
assign data_o[(i+1)*8-1:i*8] = data_r[{i[PTR_W:0]+r_ptr}[PTR_W-1:0]]; 
end
endgenerate

assign w_cnt = byte_cnt/DW_W_BYTE;
assign r_cnt = byte_cnt/DW_R_BYTE;
endmodule

