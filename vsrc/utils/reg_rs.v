module reg_rs #(
    parameter DW = 1, 
    parameter RESET_VAL = 0//,
    //parameter REG_NAME = "reg_rs"
) (
    input clk,
    input rst_n,
    input [DW-1:0] data_i,
    output reg [DW-1:0] data_o
);
    always @(posedge clk) begin
        if (~rst_n) data_o <= RESET_VAL;
        else data_o <= data_i;
    end
endmodule

