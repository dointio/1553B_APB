`include "mydefines.v"

module ltch #(
    parameter DW = 1,
    parameter LTCH_NAME = "ltch"
) (
    input en,
    input [DW-1:0] data_i,
    output reg [DW-1:0] data_o
);
/* verilator lint_off COMBDLY*/
/* verilator lint_off LATCH*/
    always @ * begin
        if (en) data_o <= data_i;
    end
/* verilator lint_on LATCH*/
/* verilator lint_on COMBDLY*/
`ifdef PLATFORM_SIM
    xchecker_logic #(
        .DW         (1),
        .SIGNAL_NAME    ({"en of ", LTCH_NAME})
    )xchecker_en(
        .data_i          (en)
    );
`endif

endmodule

