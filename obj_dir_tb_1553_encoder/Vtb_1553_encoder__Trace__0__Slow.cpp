// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_1553_encoder__Syms.h"


VL_ATTR_COLD void Vtb_1553_encoder___024root__trace_init_sub__TOP__0(Vtb_1553_encoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_1553_encoder ");
    tracep->declBit(c+19,"tb_data_clk", false,-1);
    tracep->declBit(c+20,"tb_rst", false,-1);
    tracep->declBus(c+1,"tb_dout", false,-1, 1,0);
    tracep->declBit(c+2,"tb_en_dout", false,-1);
    tracep->declBus(c+3,"tb_tdata", false,-1, 15,0);
    tracep->declBit(c+4,"tb_tvalid", false,-1);
    tracep->declBus(c+5,"tb_tuser", false,-1, 7,0);
    tracep->declBit(c+21,"tb_tready", false,-1);
    tracep->declBus(c+23,"CLK_PERIOD", false,-1, 31,0);
    tracep->declBus(c+24,"RST_PERIOD", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+25,"clock_speed", false,-1, 31,0);
    tracep->declBus(c+26,"sample_rate", false,-1, 31,0);
    tracep->declBit(c+19,"aclk", false,-1);
    tracep->declBit(c+22,"arstn", false,-1);
    tracep->declBus(c+3,"s_axis_tdata", false,-1, 15,0);
    tracep->declBit(c+4,"s_axis_tvalid", false,-1);
    tracep->declBus(c+5,"s_axis_tuser", false,-1, 7,0);
    tracep->declBit(c+21,"s_axis_tready", false,-1);
    tracep->declBus(c+1,"diff", false,-1, 1,0);
    tracep->declBit(c+2,"en_diff", false,-1);
    tracep->declBus(c+27,"base_1553_clock_rate", false,-1, 31,0);
    tracep->declBus(c+28,"samples_per_mhz", false,-1, 31,0);
    tracep->declBus(c+29,"cycles_per_mhz", false,-1, 31,0);
    tracep->declBus(c+30,"samples_to_skip", false,-1, 31,0);
    tracep->declBus(c+28,"bit_rate_per_mhz", false,-1, 31,0);
    tracep->declBus(c+31,"delay_time", false,-1, 31,0);
    tracep->declBus(c+32,"sync_pulse_len", false,-1, 31,0);
    tracep->declBus(c+29,"bits_per_trans", false,-1, 31,0);
    tracep->declBus(c+33,"synth_bits_per_trans", false,-1, 31,0);
    tracep->declBus(c+34,"bit_pattern", false,-1, 1,0);
    tracep->declQuad(c+35,"synth_clk", false,-1, 39,0);
    tracep->declBus(c+37,"data_cap", false,-1, 2,0);
    tracep->declBus(c+38,"data_invert", false,-1, 2,0);
    tracep->declBus(c+39,"parity_gen", false,-1, 2,0);
    tracep->declBus(c+40,"process_data", false,-1, 31,0);
    tracep->declBus(c+41,"pause_ck", false,-1, 2,0);
    tracep->declBus(c+42,"trans", false,-1, 2,0);
    tracep->declBus(c+43,"error", false,-1, 2,0);
    tracep->declBus(c+44,"sync_cmd_stat", false,-1, 5,0);
    tracep->declBus(c+45,"sync_data", false,-1, 5,0);
    tracep->declBus(c+38,"cmd_data", false,-1, 2,0);
    tracep->declBus(c+46,"cmd_cmnd", false,-1, 2,0);
    tracep->declBus(c+47,"enable_diff_output", false,-1, 0,0);
    tracep->declBus(c+6,"xor_index", false,-1, 31,0);
    tracep->declBus(c+7,"cycle_index", false,-1, 31,0);
    tracep->declQuad(c+8,"reg_data", false,-1, 39,0);
    tracep->declBit(c+10,"parity_bit", false,-1);
    tracep->declBus(c+11,"state", false,-1, 2,0);
    tracep->declBus(c+12,"data", false,-1, 15,0);
    tracep->declBus(c+13,"r_data", false,-1, 15,0);
    tracep->declBus(c+14,"cmd", false,-1, 7,0);
    tracep->declBus(c+15,"skip_counter", false,-1, 4,0);
    tracep->declBus(c+16,"pause_counter", false,-1, 6,0);
    tracep->declBus(c+17,"trans_counter", false,-1, 5,0);
    tracep->declBus(c+18,"prev_trans_counter", false,-1, 5,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_1553_encoder___024root__trace_init_top(Vtb_1553_encoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root__trace_init_top\n"); );
    // Body
    Vtb_1553_encoder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_1553_encoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_1553_encoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_1553_encoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_1553_encoder___024root__trace_register(Vtb_1553_encoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_1553_encoder___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_1553_encoder___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_1553_encoder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_1553_encoder___024root__trace_full_sub_0(Vtb_1553_encoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_1553_encoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root__trace_full_top_0\n"); );
    // Init
    Vtb_1553_encoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_1553_encoder___024root*>(voidSelf);
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_1553_encoder___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_1553_encoder___024root__trace_full_sub_0(Vtb_1553_encoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb_1553_encoder__DOT__tb_dout),2);
    bufp->fullBit(oldp+2,(vlSelf->tb_1553_encoder__DOT__tb_en_dout));
    bufp->fullSData(oldp+3,(vlSelf->tb_1553_encoder__DOT__tb_tdata),16);
    bufp->fullBit(oldp+4,(vlSelf->tb_1553_encoder__DOT__tb_tvalid));
    bufp->fullCData(oldp+5,(vlSelf->tb_1553_encoder__DOT__tb_tuser),8);
    bufp->fullIData(oldp+6,(vlSelf->tb_1553_encoder__DOT__dut__DOT__xor_index),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_1553_encoder__DOT__dut__DOT__cycle_index),32);
    bufp->fullQData(oldp+8,(vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data),40);
    bufp->fullBit(oldp+10,(vlSelf->tb_1553_encoder__DOT__dut__DOT__parity_bit));
    bufp->fullCData(oldp+11,(vlSelf->tb_1553_encoder__DOT__dut__DOT__state),3);
    bufp->fullSData(oldp+12,(vlSelf->tb_1553_encoder__DOT__dut__DOT__data),16);
    bufp->fullSData(oldp+13,(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data),16);
    bufp->fullCData(oldp+14,(vlSelf->tb_1553_encoder__DOT__dut__DOT__cmd),8);
    bufp->fullCData(oldp+15,(vlSelf->tb_1553_encoder__DOT__dut__DOT__skip_counter),5);
    bufp->fullCData(oldp+16,(vlSelf->tb_1553_encoder__DOT__dut__DOT__pause_counter),7);
    bufp->fullCData(oldp+17,(vlSelf->tb_1553_encoder__DOT__dut__DOT__trans_counter),6);
    bufp->fullCData(oldp+18,(vlSelf->tb_1553_encoder__DOT__dut__DOT__prev_trans_counter),6);
    bufp->fullBit(oldp+19,(vlSelf->tb_1553_encoder__DOT__tb_data_clk));
    bufp->fullBit(oldp+20,(vlSelf->tb_1553_encoder__DOT__tb_rst));
    bufp->fullBit(oldp+21,(((~ (IData)(vlSelf->tb_1553_encoder__DOT__tb_rst)) 
                            & (1U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state)))));
    bufp->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->tb_1553_encoder__DOT__tb_rst)))));
    bufp->fullIData(oldp+23,(0x32U),32);
    bufp->fullIData(oldp+24,(0x64U),32);
    bufp->fullIData(oldp+25,(0x1312d00U),32);
    bufp->fullIData(oldp+26,(0x1e8480U),32);
    bufp->fullIData(oldp+27,(0xf4240U),32);
    bufp->fullIData(oldp+28,(2U),32);
    bufp->fullIData(oldp+29,(0x14U),32);
    bufp->fullIData(oldp+30,(9U),32);
    bufp->fullIData(oldp+31,(0x50U),32);
    bufp->fullIData(oldp+32,(6U),32);
    bufp->fullIData(oldp+33,(0x28U),32);
    bufp->fullCData(oldp+34,(2U),2);
    bufp->fullQData(oldp+35,(0xaaaaaaaaaaULL),40);
    bufp->fullCData(oldp+37,(1U),3);
    bufp->fullCData(oldp+38,(2U),3);
    bufp->fullCData(oldp+39,(3U),3);
    bufp->fullIData(oldp+40,(4U),32);
    bufp->fullCData(oldp+41,(5U),3);
    bufp->fullCData(oldp+42,(6U),3);
    bufp->fullCData(oldp+43,(0U),3);
    bufp->fullCData(oldp+44,(7U),6);
    bufp->fullCData(oldp+45,(0x38U),6);
    bufp->fullCData(oldp+46,(4U),3);
    bufp->fullBit(oldp+47,(1U));
}
