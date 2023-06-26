// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_1553_encoder__Syms.h"


void Vtb_1553_encoder___024root__trace_chg_sub_0(Vtb_1553_encoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_1553_encoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_1553_encoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_1553_encoder___024root*>(voidSelf);
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_1553_encoder___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_1553_encoder___024root__trace_chg_sub_0(Vtb_1553_encoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->tb_1553_encoder__DOT__tb_dout),2);
        bufp->chgBit(oldp+1,(vlSelf->tb_1553_encoder__DOT__tb_en_dout));
        bufp->chgSData(oldp+2,(vlSelf->tb_1553_encoder__DOT__tb_tdata),16);
        bufp->chgBit(oldp+3,(vlSelf->tb_1553_encoder__DOT__tb_tvalid));
        bufp->chgCData(oldp+4,(vlSelf->tb_1553_encoder__DOT__tb_tuser),8);
        bufp->chgIData(oldp+5,(vlSelf->tb_1553_encoder__DOT__dut__DOT__xor_index),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_1553_encoder__DOT__dut__DOT__cycle_index),32);
        bufp->chgQData(oldp+7,(vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data),40);
        bufp->chgBit(oldp+9,(vlSelf->tb_1553_encoder__DOT__dut__DOT__parity_bit));
        bufp->chgCData(oldp+10,(vlSelf->tb_1553_encoder__DOT__dut__DOT__state),3);
        bufp->chgSData(oldp+11,(vlSelf->tb_1553_encoder__DOT__dut__DOT__data),16);
        bufp->chgSData(oldp+12,(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data),16);
        bufp->chgCData(oldp+13,(vlSelf->tb_1553_encoder__DOT__dut__DOT__cmd),8);
        bufp->chgCData(oldp+14,(vlSelf->tb_1553_encoder__DOT__dut__DOT__skip_counter),5);
        bufp->chgCData(oldp+15,(vlSelf->tb_1553_encoder__DOT__dut__DOT__pause_counter),7);
        bufp->chgCData(oldp+16,(vlSelf->tb_1553_encoder__DOT__dut__DOT__trans_counter),6);
        bufp->chgCData(oldp+17,(vlSelf->tb_1553_encoder__DOT__dut__DOT__prev_trans_counter),6);
    }
    bufp->chgBit(oldp+18,(vlSelf->tb_1553_encoder__DOT__tb_data_clk));
    bufp->chgBit(oldp+19,(vlSelf->tb_1553_encoder__DOT__tb_rst));
    bufp->chgBit(oldp+20,(((~ (IData)(vlSelf->tb_1553_encoder__DOT__tb_rst)) 
                           & (1U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state)))));
    bufp->chgBit(oldp+21,((1U & (~ (IData)(vlSelf->tb_1553_encoder__DOT__tb_rst)))));
}

void Vtb_1553_encoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root__trace_cleanup\n"); );
    // Init
    Vtb_1553_encoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_1553_encoder___024root*>(voidSelf);
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
