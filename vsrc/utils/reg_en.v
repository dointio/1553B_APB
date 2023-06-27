module reg_en #(
    parameter DW = 1, 
    parameter REG_NAME = "reg_rs"
) (
    input clk,
    input en,
    input [DW-1:0] data_i,
    output reg [DW-1:0] data_o
);
    always @(posedge clk) begin
        if(en == 1'b1)
            data_o <= data_i;
    end
`ifdef PLATFORM_SIM
    xchecker_reg #(
        .DW             (1),
        .SIGNAL_NAME    ({"en of ", REG_NAME})
    )xchecker_en(
        .clk        (clk),
        .data_i      (en)
    );
`endif
endmodule
