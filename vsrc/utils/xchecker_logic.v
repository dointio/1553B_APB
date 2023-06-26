`include "mydefines.v"

module xchecker_logic #(
    parameter DW = 32,
    parameter SIGNAL_NAME = ""
)
(   
    input [DW-1 : 0] data_i
);
`ifdef PLATFORM_SIM

always_comb begin : CHECK_X_LOGIC
    assert ((^(data_i)) !== 1'bx)
    else $fatal("Error!", SIGNAL_NAME, ", detected a X value after posedge clk!\n");
end
`endif

endmodule

