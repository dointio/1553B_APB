`include "mydefines.v"

module xchecker_reg #(
    parameter DW = 32,
    parameter SIGNAL_NAME = ""
)
(   
    input clk,
    input [DW-1 : 0] data_i
);

`ifdef PLATFORM_SIM
CHECK_X_REG:
    assert property (@(posedge clk)((^(data_i)) !== 1'bx))
    else $fatal("Error!", SIGNAL_NAME, ", detected a X value after posedge clk!\n");
`endif
endmodule


