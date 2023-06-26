// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_1553_decoder__Syms.h"


void Vtb_1553_decoder___024root__trace_chg_sub_0(Vtb_1553_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_1553_decoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_1553_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_1553_decoder___024root*>(voidSelf);
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_1553_decoder___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_1553_decoder___024root__trace_chg_sub_0(Vtb_1553_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->tb_1553_decoder__DOT__tb_din),2);
        bufp->chgSData(oldp+1,(vlSelf->tb_1553_decoder__DOT__tb_tdata),16);
        bufp->chgBit(oldp+2,(vlSelf->tb_1553_decoder__DOT__tb_tvalid));
        bufp->chgCData(oldp+3,(vlSelf->tb_1553_decoder__DOT__tb_tuser),8);
        bufp->chgBit(oldp+4,(vlSelf->tb_1553_decoder__DOT__tb_tready));
        bufp->chgWData(oldp+5,(vlSelf->tb_1553_decoder__DOT__data_expand),1600);
        bufp->chgSData(oldp+55,(vlSelf->tb_1553_decoder__DOT__data),16);
        bufp->chgWData(oldp+56,(vlSelf->tb_1553_decoder__DOT__reg_data),2000);
        bufp->chgBit(oldp+119,(vlSelf->tb_1553_decoder__DOT__parity_gen));
        bufp->chgIData(oldp+120,(vlSelf->tb_1553_decoder__DOT__xor_index),32);
        bufp->chgIData(oldp+121,(vlSelf->tb_1553_decoder__DOT__cycle_index),32);
        bufp->chgIData(oldp+122,(vlSelf->tb_1553_decoder__DOT__pos_counter),32);
        bufp->chgIData(oldp+123,(vlSelf->tb_1553_decoder__DOT__delay_counter),32);
        bufp->chgIData(oldp+124,(vlSelf->tb_1553_decoder__DOT__dut__DOT__bit_slice_index),32);
        bufp->chgQData(oldp+125,(vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data),40);
        bufp->chgBit(oldp+127,(vlSelf->tb_1553_decoder__DOT__dut__DOT__parity_bit));
        bufp->chgBit(oldp+128,(vlSelf->tb_1553_decoder__DOT__dut__DOT__delay_bit));
        bufp->chgCData(oldp+129,(vlSelf->tb_1553_decoder__DOT__dut__DOT__state),5);
        bufp->chgSData(oldp+130,(vlSelf->tb_1553_decoder__DOT__dut__DOT__data),16);
        bufp->chgCData(oldp+131,(vlSelf->tb_1553_decoder__DOT__dut__DOT__cmd),8);
        bufp->chgCData(oldp+132,(vlSelf->tb_1553_decoder__DOT__dut__DOT__p_diff),2);
        bufp->chgCData(oldp+133,(vlSelf->tb_1553_decoder__DOT__dut__DOT__skip_counter),7);
        bufp->chgSData(oldp+134,(vlSelf->tb_1553_decoder__DOT__dut__DOT__pause_counter),9);
        bufp->chgCData(oldp+135,(vlSelf->tb_1553_decoder__DOT__dut__DOT__trans_counter),6);
    }
    bufp->chgBit(oldp+136,(vlSelf->tb_1553_decoder__DOT__tb_data_clk));
    bufp->chgBit(oldp+137,(vlSelf->tb_1553_decoder__DOT__tb_rst));
    bufp->chgBit(oldp+138,((1U & (~ (IData)(vlSelf->tb_1553_decoder__DOT__tb_rst)))));
}

void Vtb_1553_decoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root__trace_cleanup\n"); );
    // Init
    Vtb_1553_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_1553_decoder___024root*>(voidSelf);
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
