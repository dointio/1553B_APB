/* verilator lint_off MULTITOP*/
/* verilator lint_off DECLFILENAME*/
//r: 有个问题，如果bypbuf的深度大于1，比如设置为2，假设下面情况：
//r: 前级不停，后级暂停一周期，bypbuf填入一个数据；
//r: 如果流水线再次平衡，则数据一直刘静bypbuf，当然这不影响性能。
//r: 但是，实际上，此时已经退化为1深度的bypbuf了，此时一旦后级再次停止一个周期，就会导致前级阻塞，而如果只是阻塞这一个周期，阻塞结束后，还是一个深度为1的bypbuf，除非前级能停止一个周期，等后级把bypbuf读空。
//r: 这样想来，实际bypbuf设置大深度的意义不大啊。。。。
module bypbuf # (
  parameter DP = 8,
  parameter DW = 32
) (
  input           clk,
  input           rst,

  input           i_vld,
  output          i_rdy,
  input  [DW-1:0] data_i,

  output          o_vld,
  input           o_rdy,
  output [DW-1:0] data_o
);


  wire          fifo_i_vld;
  wire          fifo_i_rdy;
  wire [DW-1:0] fifo_i_dat;
  
  wire          fifo_o_vld;
  wire          fifo_o_rdy;
  wire [DW-1:0] fifo_o_dat;
  
  fifo_simple # (
       .DP(DP),
       .DW(DW),
       .CUT_READY(1) 
  ) u_bypbuf_fifo(
    .clk      (clk),
    .rst      (rst),
    .w_req    (fifo_i_vld),
    .unfull   (fifo_i_rdy),
    .data_i   (fifo_i_dat),
    .unempty  (fifo_o_vld),
    .r_req    (fifo_o_rdy),
    .data_o   (fifo_o_dat)    
  );
  
   // This module is a super-weapon for timing fix,
   // but it is tricky, think it harder when you are reading, or contact Bob Hu
  
  assign i_rdy = fifo_i_rdy; //zxp：原本的
  // assign i_rdy = i_vld ? fifo_i_rdy : 1'b1;
  
  // The FIFO is bypassed when:
  //   * fifo is empty, and o_rdy is high
  wire byp = i_vld & o_rdy & (~fifo_o_vld);

  // FIFO o-ready just use the o_rdy
  assign fifo_o_rdy = o_rdy;
  
  // The output is valid if FIFO or input have valid
  assign o_vld = fifo_o_vld | i_vld;

  // The output data select the FIFO as high priority
  assign data_o = fifo_o_vld ? fifo_o_dat : data_i;

  assign fifo_i_dat  = data_i; 

  // Only pass to FIFO i-valid if FIFO is not bypassed
  assign fifo_i_vld = i_vld & (~byp);

endmodule 

/* verilator lint_on MULTITOP*/
/* verilator lint_on DECLFILENAME*/
