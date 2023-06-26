`include "mydefines.v"
module splt_me # (
    parameter AW = 32,
    parameter DW = 64,
    parameter FIFO_DP = 4,
    parameter FIFO_CUT_READY = 1,
    parameter ALLOW_0CYCL_RSP = 1,
    parameter SPLT_NUM = 4,
    parameter ALLOW_DIFF = 1, //r: allow cmd to diff device before current rsp.
    parameter VLD_MSK_PAYLOAD = 0, //r: for un cmd splt channel, payload = all_0;
    parameter USR_W = 1 
) (
    input  [SPLT_NUM-1:0] i_icb_splt_sel,   //r: channel select logic is outer!!!

    input  i_icb_cmd_vld, 
    output i_icb_cmd_rdy, 
    input  [1-1:0]    i_icb_cmd_read, 
    input  [AW-1:0]   i_icb_cmd_addr, 
    input  [DW-1:0]   i_icb_cmd_wdata, 
    input  [DW/8-1:0] i_icb_cmd_wmask,
    //   input  [1:0]      i_icb_cmd_burst,
    //   input  [1:0]      i_icb_cmd_beat,
    //   input             i_icb_cmd_lock,
    //   input             i_icb_cmd_excl,
    //   input  [1:0]      i_icb_cmd_size,
    input  [USR_W-1:0]i_icb_cmd_usr,

    output i_icb_rsp_vld, 
    input  i_icb_rsp_rdy, 
    output i_icb_rsp_err,
    //   output i_icb_rsp_excl_ok,
    output [DW-1:0] i_icb_rsp_rdata, 
    output [USR_W-1:0] i_icb_rsp_usr, 
    
    input  [SPLT_NUM*1-1:0]    o_bus_icb_cmd_rdy, 
    output [SPLT_NUM*1-1:0]    o_bus_icb_cmd_vld, 
    output [SPLT_NUM*1-1:0]    o_bus_icb_cmd_read, 
    output [SPLT_NUM*AW-1:0]   o_bus_icb_cmd_addr, 
    output [SPLT_NUM*DW-1:0]   o_bus_icb_cmd_wdata, 
    output [SPLT_NUM*DW/8-1:0] o_bus_icb_cmd_wmask,
    //   output [SPLT_NUM*2-1:0]    o_bus_icb_cmd_burst,
    //   output [SPLT_NUM*2-1:0]    o_bus_icb_cmd_beat,
    //   output [SPLT_NUM*1-1:0]    o_bus_icb_cmd_lock,
    //   output [SPLT_NUM*1-1:0]    o_bus_icb_cmd_excl,
    //   output [SPLT_NUM*2-1:0]    o_bus_icb_cmd_size,
    output [SPLT_NUM*USR_W-1:0]o_bus_icb_cmd_usr,

    input  [SPLT_NUM*1-1:0]  o_bus_icb_rsp_vld, 
    output [SPLT_NUM*1-1:0]  o_bus_icb_rsp_rdy, 
    input  [SPLT_NUM*1-1:0]  o_bus_icb_rsp_err,
    //   input  [SPLT_NUM*1-1:0]  o_bus_icb_rsp_excl_ok,
    input  [SPLT_NUM*DW-1:0] o_bus_icb_rsp_rdata, 
    input  [SPLT_NUM*USR_W-1:0] o_bus_icb_rsp_usr, 

    input  clk,  
    input  rst
);
    
localparam TRUE_CUT_READY = (ALLOW_0CYCL_RSP != 0) ? 1 : FIFO_CUT_READY;

genvar i;
generate 
    if(SPLT_NUM == 1) begin : one_chal
        assign i_icb_cmd_rdy     = o_bus_icb_cmd_rdy; 
        assign o_bus_icb_cmd_vld = i_icb_cmd_vld; 
        assign o_bus_icb_cmd_read  = i_icb_cmd_read ; 
        assign o_bus_icb_cmd_addr  = i_icb_cmd_addr ; 
        assign o_bus_icb_cmd_wdata = i_icb_cmd_wdata; 
        assign o_bus_icb_cmd_wmask = i_icb_cmd_wmask;
        // assign o_bus_icb_cmd_burst = i_icb_cmd_burst;
        // assign o_bus_icb_cmd_beat  = i_icb_cmd_beat ;
        // assign o_bus_icb_cmd_lock  = i_icb_cmd_lock ;
        // assign o_bus_icb_cmd_excl  = i_icb_cmd_excl ;
        // assign o_bus_icb_cmd_size  = i_icb_cmd_size ;
        assign o_bus_icb_cmd_usr   = i_icb_cmd_usr  ;

        assign o_bus_icb_rsp_rdy = i_icb_rsp_rdy; 
        assign i_icb_rsp_vld     = o_bus_icb_rsp_vld; 
        assign i_icb_rsp_err       = o_bus_icb_rsp_err  ;
        // assign i_icb_rsp_excl_ok   = o_bus_icb_rsp_excl_ok  ;
        assign i_icb_rsp_rdata     = o_bus_icb_rsp_rdata;
        assign i_icb_rsp_usr       = o_bus_icb_rsp_usr;
    end
    else begin : more_chal

        wire [SPLT_NUM-1:0] o_icb_cmd_vld;
        wire [SPLT_NUM-1:0] o_icb_cmd_rdy;
        wire [SPLT_NUM-1:0] o_icb_cmd_read; 
        wire [AW-1:0]       o_icb_cmd_addr [SPLT_NUM-1:0]; 
        wire [DW-1:0]       o_icb_cmd_wdata[SPLT_NUM-1:0]; 
        wire [DW/8-1:0]     o_icb_cmd_wmask[SPLT_NUM-1:0];
        // wire [1:0]       o_icb_cmd_burst[SPLT_NUM-1:0];
        // wire [1:0]       o_icb_cmd_beat [SPLT_NUM-1:0];
        // wire [SPLT_NUM-1:0]   o_icb_cmd_lock ;
        // wire [SPLT_NUM-1:0]   o_icb_cmd_excl ;
        // wire [1:0]       o_icb_cmd_size [SPLT_NUM-1:0];
        wire [USR_W-1:0]    o_icb_cmd_usr  [SPLT_NUM-1:0];

        wire [SPLT_NUM-1:0] o_icb_rsp_vld; 
        wire [SPLT_NUM-1:0] o_icb_rsp_rdy; 
        wire [SPLT_NUM-1:0] o_icb_rsp_err  ;
        // wire [SPLT_NUM-1:0] o_icb_rsp_excl_ok  ;
        wire [DW-1:0]       o_icb_rsp_rdata  [SPLT_NUM-1:0];
        wire [USR_W-1:0]    o_icb_rsp_usr    [SPLT_NUM-1:0];

        wire [SPLT_NUM-1:0] rsp_sel;

        wire cmd_vld_mid;
        wire cmd_rdy_mid;
        wire rsp_vld_mid;
        wire rsp_rdy_mid;

        wire fifo_unfull;
        wire fifo_unempty;
        wire [SPLT_NUM-1:0] fifo_data_i;
        wire [SPLT_NUM-1:0] fifo_data_o;
        wire fifo_bypass;
        wire req_handshake = i_icb_cmd_vld & i_icb_cmd_rdy;
        wire rsp_handshake = i_icb_rsp_vld & i_icb_rsp_rdy;

        wire cmd_diff_branch;
        if(ALLOW_DIFF == 0) begin
            assign cmd_diff_branch = fifo_unempty & (fifo_data_o != i_icb_splt_sel);
        end
        else begin
            assign cmd_diff_branch = 1'b0;
        end

        for(i=0; i<SPLT_NUM; i=i+1) begin : map_bus_arry;
            assign o_icb_cmd_rdy[i]                         = o_bus_icb_cmd_rdy[i]; 
            assign o_bus_icb_cmd_vld[i]                     = o_icb_cmd_vld[i];
            assign o_bus_icb_cmd_read [i]                   = o_icb_cmd_read [i];
            assign o_bus_icb_cmd_addr [(i+1)*AW-1 : i*AW]   = o_icb_cmd_addr [i];
            assign o_bus_icb_cmd_wdata[(i+1)*DW-1 : i*DW]   = o_icb_cmd_wdata[i];
            assign o_bus_icb_cmd_wmask[(i+1)*(DW/8)-1 : i*(DW/8)] = o_icb_cmd_wmask[i];
            // assign o_bus_icb_cmd_burst[(i+1)*2     -1 : i*2     ] = o_icb_cmd_burst[i];
            // assign o_bus_icb_cmd_beat [(i+1)*2     -1 : i*2     ] = o_icb_cmd_beat [i];
            // assign o_bus_icb_cmd_lock [i] = o_icb_cmd_lock[i];
            // assign o_bus_icb_cmd_excl [i] = o_icb_cmd_excl[i];
            // assign o_bus_icb_cmd_size [(i+1)*2     -1 : i*2     ] = o_icb_cmd_size [i];
            assign o_bus_icb_cmd_usr[(i+1)*USR_W -1 : i*USR_W ] = o_icb_cmd_usr[i];

            assign o_bus_icb_rsp_rdy [i]        = o_icb_rsp_rdy[i]; 
            assign o_icb_rsp_vld[i]             = o_bus_icb_rsp_vld[i]; 
            assign o_icb_rsp_err[i]             = o_bus_icb_rsp_err[i];
            // assign o_icb_rsp_excl_ok[i]         = o_bus_icb_rsp_excl_ok[i];
            assign o_icb_rsp_rdata[i]           = o_bus_icb_rsp_rdata[(i+1)*DW-1:i*DW];
            assign o_icb_rsp_usr[i]             = o_bus_icb_rsp_usr  [(i+1)*USR_W-1:i*USR_W];
        end
        
        assign cmd_vld_mid = i_icb_cmd_vld & fifo_unfull & (~cmd_diff_branch);
        assign i_icb_cmd_rdy = cmd_rdy_mid & fifo_unfull & (~cmd_diff_branch);

        for(i = 0; i < SPLT_NUM; i = i+1) begin:o_icb_cmd_vld_gen
            assign o_icb_cmd_vld[i] = i_icb_splt_sel[i] & cmd_vld_mid;
            if(VLD_MSK_PAYLOAD == 0) begin: no_vld_msk_payload
                assign o_icb_cmd_read [i] = i_icb_cmd_read ;
                assign o_icb_cmd_addr [i] = i_icb_cmd_addr ;
                assign o_icb_cmd_wdata[i] = i_icb_cmd_wdata;
                assign o_icb_cmd_wmask[i] = i_icb_cmd_wmask;
                // assign o_icb_cmd_burst[i] = i_icb_cmd_burst;
                // assign o_icb_cmd_beat [i] = i_icb_cmd_beat ;
                // assign o_icb_cmd_lock [i] = i_icb_cmd_lock ;
                // assign o_icb_cmd_excl [i] = i_icb_cmd_excl ;
                // assign o_icb_cmd_size [i] = i_icb_cmd_size ;
                assign o_icb_cmd_usr  [i] = i_icb_cmd_usr  ;
            end
            else begin: vld_msk_payload
                assign o_icb_cmd_read [i] = {1    {o_icb_cmd_vld[i]}} & i_icb_cmd_read ;
                assign o_icb_cmd_addr [i] = {AW   {o_icb_cmd_vld[i]}} & i_icb_cmd_addr ;
                assign o_icb_cmd_wdata[i] = {DW   {o_icb_cmd_vld[i]}} & i_icb_cmd_wdata;
                assign o_icb_cmd_wmask[i] = {DW/8 {o_icb_cmd_vld[i]}} & i_icb_cmd_wmask;
                // assign o_icb_cmd_burst[i] = {2    {o_icb_cmd_vld[i]}} & i_icb_cmd_burst;
                // assign o_icb_cmd_beat [i] = {2    {o_icb_cmd_vld[i]}} & i_icb_cmd_beat ;
                // assign o_icb_cmd_lock [i] = {1    {o_icb_cmd_vld[i]}} & i_icb_cmd_lock ;
                // assign o_icb_cmd_excl [i] = {1    {o_icb_cmd_vld[i]}} & i_icb_cmd_excl ;
                // assign o_icb_cmd_size [i] = {2    {o_icb_cmd_vld[i]}} & i_icb_cmd_size ;
                assign o_icb_cmd_usr  [i] = {USR_W{o_icb_cmd_vld[i]}} & i_icb_cmd_usr  ;
            end
        end//}

        // reg buf_sel1;
        // always @ (*) begin : sel_o_apb_cmd_rdy_PROC
        //     buf_sel1 = 1'b0;
        //     for(i = 0; i < SPLT_NUM; i = i+1) begin//{
        //         buf_sel1 = buf_sel1 | (i_icb_splt_sel[i] & o_icb_cmd_rdy[i]);
        //     end//}
        // end
        // assign cmd_rdy_mid = buf_sel1;

        assign cmd_rdy_mid = |(i_icb_splt_sel & o_icb_cmd_rdy);

        assign fifo_data_i = i_icb_splt_sel;
        if(ALLOW_0CYCL_RSP != 0) begin:allow_0cycle
            assign fifo_bypass = ~fifo_unempty & req_handshake & rsp_handshake;
            assign rsp_sel = fifo_unempty ? fifo_data_o : fifo_data_i;
            assign i_icb_rsp_vld = rsp_vld_mid;
            assign rsp_rdy_mid = i_icb_rsp_rdy;
        end
        else begin : no_allow_0cycyle
            assign fifo_bypass = 1'b0;
            assign rsp_sel = fifo_unempty ? fifo_data_o : {SPLT_NUM{1'b0}};
            assign i_icb_rsp_vld = rsp_vld_mid & fifo_unempty;
            assign rsp_rdy_mid = i_icb_rsp_rdy & fifo_unempty;
        end
        
        fifo_simple #(
            .CUT_READY    (TRUE_CUT_READY),
            .ZEROOUT_WHENEMPTY  (0),
            .DP           (FIFO_DP),
            .DW           (SPLT_NUM)
        )fifo_inst(
            .clk          (clk),
            .rst          (rst),

            .w_req        (req_handshake & ~fifo_bypass),
            .unfull       (fifo_unfull),
            .data_i       (fifo_data_i),
            .r_req        (rsp_handshake & ~fifo_bypass),
            .unempty      (fifo_unempty),
            .data_o       (fifo_data_o)
        );

        for(i=0; i<SPLT_NUM; i=i+1) begin:rsp_chal
            assign o_icb_rsp_rdy[i] = rsp_rdy_mid & rsp_sel[i];
        end

        assign rsp_vld_mid = |(o_icb_rsp_vld & rsp_sel);
        assign i_icb_rsp_err = |(o_icb_rsp_err & rsp_sel);
        // assign i_icb_rsp_excl_ok = |(o_icb_rsp_excl_ok & rsp_sel);

        reg [DW-1 : 0] buf_rdata;
        reg [USR_W-1 : 0] buf_usr;
        always@* begin:rsp_chal_2
            integer j;
            buf_rdata = 0;
            buf_usr = 0;
            for(j=0; j< SPLT_NUM; j=j+1) begin
                buf_rdata = buf_rdata | ({DW{rsp_sel[j]}} & o_icb_rsp_rdata[j]);
                buf_usr = buf_usr | ({USR_W{rsp_sel[j]}} & o_icb_rsp_usr[j]);
            end
        end
        assign i_icb_rsp_rdata = buf_rdata;
        assign i_icb_rsp_usr = buf_usr;
    end
endgenerate

endmodule

