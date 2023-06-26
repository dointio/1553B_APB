// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_1553_decoder__Syms.h"


VL_ATTR_COLD void Vtb_1553_decoder___024root__trace_init_sub__TOP__0(Vtb_1553_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_1553_decoder ");
    tracep->declBit(c+137,"tb_data_clk", false,-1);
    tracep->declBit(c+138,"tb_rst", false,-1);
    tracep->declBus(c+1,"tb_din", false,-1, 1,0);
    tracep->declBus(c+2,"tb_tdata", false,-1, 15,0);
    tracep->declBit(c+3,"tb_tvalid", false,-1);
    tracep->declBus(c+4,"tb_tuser", false,-1, 7,0);
    tracep->declBit(c+5,"tb_tready", false,-1);
    tracep->declBus(c+140,"CLK_PERIOD", false,-1, 31,0);
    tracep->declBus(c+141,"RST_PERIOD", false,-1, 31,0);
    tracep->declBus(c+142,"CLK_SPEED_HZ", false,-1, 31,0);
    tracep->declBus(c+143,"BITS_PER_TRANS", false,-1, 31,0);
    tracep->declBus(c+144,"DELAY_COUNT", false,-1, 31,0);
    tracep->declBus(c+145,"CYCLES_PER_MHZ", false,-1, 31,0);
    tracep->declBus(c+145,"BIT_RATE_PER_MHZ", false,-1, 31,0);
    tracep->declBus(c+146,"SYNC_PULSE_LEN", false,-1, 31,0);
    tracep->declArray(c+147,"BIT_PATTERN", false,-1, 99,0);
    tracep->declArray(c+151,"SYNTH_CLK", false,-1, 1999,0);
    tracep->declArray(c+214,"sync_cmd_stat", false,-1, 299,0);
    tracep->declArray(c+224,"sync_data", false,-1, 299,0);
    tracep->declArray(c+6,"data_expand", false,-1, 1599,0);
    tracep->declBus(c+56,"data", false,-1, 15,0);
    tracep->declArray(c+57,"reg_data", false,-1, 1999,0);
    tracep->declBit(c+120,"parity_gen", false,-1);
    tracep->declBus(c+121,"xor_index", false,-1, 31,0);
    tracep->declBus(c+122,"cycle_index", false,-1, 31,0);
    tracep->declBus(c+123,"pos_counter", false,-1, 31,0);
    tracep->declBus(c+124,"delay_counter", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+142,"clock_speed", false,-1, 31,0);
    tracep->declBus(c+234,"sample_rate", false,-1, 31,0);
    tracep->declBus(c+144,"bit_slice_offset", false,-1, 31,0);
    tracep->declBus(c+144,"invert_data", false,-1, 31,0);
    tracep->declBus(c+144,"sample_select", false,-1, 31,0);
    tracep->declBit(c+137,"aclk", false,-1);
    tracep->declBit(c+139,"arstn", false,-1);
    tracep->declBus(c+2,"m_axis_tdata", false,-1, 15,0);
    tracep->declBit(c+3,"m_axis_tvalid", false,-1);
    tracep->declBus(c+4,"m_axis_tuser", false,-1, 7,0);
    tracep->declBit(c+5,"m_axis_tready", false,-1);
    tracep->declBus(c+1,"diff", false,-1, 1,0);
    tracep->declBus(c+235,"base_1553_clock_rate", false,-1, 31,0);
    tracep->declBus(c+236,"samples_per_mhz", false,-1, 31,0);
    tracep->declBus(c+145,"cycles_per_mhz", false,-1, 31,0);
    tracep->declBus(c+237,"delay_time", false,-1, 31,0);
    tracep->declBus(c+238,"samples_to_skip", false,-1, 31,0);
    tracep->declBus(c+239,"round_sample_select", false,-1, 31,0);
    tracep->declBus(c+236,"bit_rate_per_mhz", false,-1, 31,0);
    tracep->declBus(c+240,"round_bit_slice_offset", false,-1, 31,0);
    tracep->declBus(c+241,"sync_pulse_len", false,-1, 31,0);
    tracep->declBus(c+242,"bits_per_trans", false,-1, 31,0);
    tracep->declBus(c+243,"synth_bits_per_trans", false,-1, 31,0);
    tracep->declBus(c+244,"diff_wait", false,-1, 4,0);
    tracep->declBus(c+245,"data_cap", false,-1, 4,0);
    tracep->declBus(c+246,"data_reduce", false,-1, 4,0);
    tracep->declBus(c+247,"parity_gen", false,-1, 4,0);
    tracep->declBus(c+248,"trans", false,-1, 4,0);
    tracep->declBus(c+249,"error", false,-1, 4,0);
    tracep->declBus(c+250,"sync_cmd_stat", false,-1, 5,0);
    tracep->declBus(c+251,"sync_data", false,-1, 5,0);
    tracep->declBus(c+252,"cmd_data", false,-1, 2,0);
    tracep->declBus(c+253,"cmd_cmnd", false,-1, 2,0);
    tracep->declBus(c+254,"bit_pattern", false,-1, 1,0);
    tracep->declQuad(c+255,"synth_clk", false,-1, 39,0);
    tracep->declBus(c+125,"bit_slice_index", false,-1, 31,0);
    tracep->declQuad(c+126,"reg_data", false,-1, 39,0);
    tracep->declBit(c+128,"parity_bit", false,-1);
    tracep->declBit(c+129,"delay_bit", false,-1);
    tracep->declBus(c+130,"state", false,-1, 4,0);
    tracep->declBus(c+131,"data", false,-1, 15,0);
    tracep->declBus(c+132,"cmd", false,-1, 7,0);
    tracep->declBus(c+133,"p_diff", false,-1, 1,0);
    tracep->declBus(c+134,"skip_counter", false,-1, 6,0);
    tracep->declBus(c+135,"pause_counter", false,-1, 8,0);
    tracep->declBus(c+136,"trans_counter", false,-1, 5,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_1553_decoder___024root__trace_init_top(Vtb_1553_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root__trace_init_top\n"); );
    // Body
    Vtb_1553_decoder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_1553_decoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_1553_decoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_1553_decoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_1553_decoder___024root__trace_register(Vtb_1553_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_1553_decoder___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_1553_decoder___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_1553_decoder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_1553_decoder___024root__trace_full_sub_0(Vtb_1553_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_1553_decoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root__trace_full_top_0\n"); );
    // Init
    Vtb_1553_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_1553_decoder___024root*>(voidSelf);
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_1553_decoder___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<63>/*2015:0*/ Vtb_1553_decoder__ConstPool__CONST_h46785170_0;
extern const VlWide<10>/*319:0*/ Vtb_1553_decoder__ConstPool__CONST_h802132dd_0;
extern const VlWide<10>/*319:0*/ Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0;

VL_ATTR_COLD void Vtb_1553_decoder___024root__trace_full_sub_0(Vtb_1553_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h06ea1bbb__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb_1553_decoder__DOT__tb_din),2);
    bufp->fullSData(oldp+2,(vlSelf->tb_1553_decoder__DOT__tb_tdata),16);
    bufp->fullBit(oldp+3,(vlSelf->tb_1553_decoder__DOT__tb_tvalid));
    bufp->fullCData(oldp+4,(vlSelf->tb_1553_decoder__DOT__tb_tuser),8);
    bufp->fullBit(oldp+5,(vlSelf->tb_1553_decoder__DOT__tb_tready));
    bufp->fullWData(oldp+6,(vlSelf->tb_1553_decoder__DOT__data_expand),1600);
    bufp->fullSData(oldp+56,(vlSelf->tb_1553_decoder__DOT__data),16);
    bufp->fullWData(oldp+57,(vlSelf->tb_1553_decoder__DOT__reg_data),2000);
    bufp->fullBit(oldp+120,(vlSelf->tb_1553_decoder__DOT__parity_gen));
    bufp->fullIData(oldp+121,(vlSelf->tb_1553_decoder__DOT__xor_index),32);
    bufp->fullIData(oldp+122,(vlSelf->tb_1553_decoder__DOT__cycle_index),32);
    bufp->fullIData(oldp+123,(vlSelf->tb_1553_decoder__DOT__pos_counter),32);
    bufp->fullIData(oldp+124,(vlSelf->tb_1553_decoder__DOT__delay_counter),32);
    bufp->fullIData(oldp+125,(vlSelf->tb_1553_decoder__DOT__dut__DOT__bit_slice_index),32);
    bufp->fullQData(oldp+126,(vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data),40);
    bufp->fullBit(oldp+128,(vlSelf->tb_1553_decoder__DOT__dut__DOT__parity_bit));
    bufp->fullBit(oldp+129,(vlSelf->tb_1553_decoder__DOT__dut__DOT__delay_bit));
    bufp->fullCData(oldp+130,(vlSelf->tb_1553_decoder__DOT__dut__DOT__state),5);
    bufp->fullSData(oldp+131,(vlSelf->tb_1553_decoder__DOT__dut__DOT__data),16);
    bufp->fullCData(oldp+132,(vlSelf->tb_1553_decoder__DOT__dut__DOT__cmd),8);
    bufp->fullCData(oldp+133,(vlSelf->tb_1553_decoder__DOT__dut__DOT__p_diff),2);
    bufp->fullCData(oldp+134,(vlSelf->tb_1553_decoder__DOT__dut__DOT__skip_counter),7);
    bufp->fullSData(oldp+135,(vlSelf->tb_1553_decoder__DOT__dut__DOT__pause_counter),9);
    bufp->fullCData(oldp+136,(vlSelf->tb_1553_decoder__DOT__dut__DOT__trans_counter),6);
    bufp->fullBit(oldp+137,(vlSelf->tb_1553_decoder__DOT__tb_data_clk));
    bufp->fullBit(oldp+138,(vlSelf->tb_1553_decoder__DOT__tb_rst));
    bufp->fullBit(oldp+139,((1U & (~ (IData)(vlSelf->tb_1553_decoder__DOT__tb_rst)))));
    bufp->fullIData(oldp+140,(0xaU),32);
    bufp->fullIData(oldp+141,(0x3e8U),32);
    bufp->fullIData(oldp+142,(0x5f5e100U),32);
    bufp->fullIData(oldp+143,(0x7d0U),32);
    bufp->fullIData(oldp+144,(0U),32);
    bufp->fullIData(oldp+145,(0x64U),32);
    bufp->fullIData(oldp+146,(0x12cU),32);
    __Vtemp_h06ea1bbb__0[0U] = 0U;
    __Vtemp_h06ea1bbb__0[1U] = 0xfffc0000U;
    __Vtemp_h06ea1bbb__0[2U] = 0xffffffffU;
    __Vtemp_h06ea1bbb__0[3U] = 0xfU;
    bufp->fullWData(oldp+147,(__Vtemp_h06ea1bbb__0),100);
    bufp->fullWData(oldp+151,(Vtb_1553_decoder__ConstPool__CONST_h46785170_0),2000);
    bufp->fullWData(oldp+214,(Vtb_1553_decoder__ConstPool__CONST_h802132dd_0),300);
    bufp->fullWData(oldp+224,(Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0),300);
    bufp->fullIData(oldp+234,(0x1e8480U),32);
    bufp->fullIData(oldp+235,(0xf4240U),32);
    bufp->fullIData(oldp+236,(2U),32);
    bufp->fullIData(oldp+237,(0x190U),32);
    bufp->fullIData(oldp+238,(0x32U),32);
    bufp->fullIData(oldp+239,(0x19U),32);
    bufp->fullIData(oldp+240,(0U),32);
    bufp->fullIData(oldp+241,(6U),32);
    bufp->fullIData(oldp+242,(0x14U),32);
    bufp->fullIData(oldp+243,(0x28U),32);
    bufp->fullCData(oldp+244,(1U),5);
    bufp->fullCData(oldp+245,(3U),5);
    bufp->fullCData(oldp+246,(7U),5);
    bufp->fullCData(oldp+247,(0xfU),5);
    bufp->fullCData(oldp+248,(0x1fU),5);
    bufp->fullCData(oldp+249,(0U),5);
    bufp->fullCData(oldp+250,(7U),6);
    bufp->fullCData(oldp+251,(0x38U),6);
    bufp->fullCData(oldp+252,(2U),3);
    bufp->fullCData(oldp+253,(4U),3);
    bufp->fullCData(oldp+254,(2U),2);
    bufp->fullQData(oldp+255,(0xaaaaaaaaaaULL),40);
}
