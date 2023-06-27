module Core_1553B
(
  input clk,
  input rst_n,

  input parity_set,

  input  r_fifo_rd,
  output r_fifo_unempty,
  output [23:0] r_fifo_data,
  
  input  w_fifo_wd,
  output w_fifo_unfull,
  input  [23:0] w_fifo_data,

  input  [1:0] rx_1553,
  output [1:0] tx_1553,
  output en_tx_1553
);
//1553 decoder m_axis (data output)
wire [15:0]   m1553_decoder_data;
wire          m1553_decoder_valid;
wire [ 7:0]   m1553_decoder_user;
wire          m1553_decoder_ready;
//1553 decoder m_axis (data output)
wire [15:0]   m1553_encoder_data;
wire          m1553_encoder_valid;
wire [ 7:0]   m1553_encoder_user;
wire          m1553_encoder_ready;
//fifo port


axis_1553_decoder mil1553_decoder (
  //clock and reset
  .aclk(clk),
  .arstn(rst_n),

  .parity_set   (parity_set),
  //master output
  .m_axis_tdata(m1553_decoder_data),
  .m_axis_tvalid(m1553_decoder_valid),
  .m_axis_tuser(m1553_decoder_user),
  .m_axis_tready(m1553_decoder_ready),
  //diff input
  .diff(rx_1553)
);

fifo_simple #(
  .DP           (32),
  .DW           (16+8),
  .CUT_READY    (1),
  .ZEROOUT_WHENEMPTY  (0)
) decoder_fifo (
  .clk        (clk),
  .rst_n      (rst_n),

  .w_req      (m1553_decoder_valid),
  .unfull     (m1553_decoder_ready),
  .data_i     ({m1553_decoder_user, m1553_decoder_data}),

  .r_req      (r_fifo_rd),
  .unempty    (r_fifo_unempty),
  .data_o     (r_fifo_data)
);

axis_1553_encoder mil1553_encoder (
  //clock and reset
  .aclk(clk),
  .arstn(rst_n),

  .parity_set   (parity_set),
  //slave input
  .s_axis_tdata(m1553_encoder_data),
  .s_axis_tvalid(m1553_encoder_valid),
  .s_axis_tuser(m1553_encoder_user),
  .s_axis_tready(m1553_encoder_ready),
  //diff output
  .diff(tx_1553),
  .en_diff(en_tx_1553)
);

fifo_simple #(
  .DP           (32),
  .DW           (16+8),
  .CUT_READY    (1),
  .ZEROOUT_WHENEMPTY  (0)
) encoder_fifo (
  .clk        (clk),
  .rst_n      (rst_n),

  .w_req      (w_fifo_wd),
  .unfull     (w_fifo_unfull),
  .data_i     (w_fifo_data),

  .r_req      (m1553_encoder_ready),
  .unempty    (m1553_encoder_valid),
  .data_o     ({m1553_encoder_user, m1553_encoder_data})
);


endmodule
