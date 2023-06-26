// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_1553_encoder.h for the primary calling header

#include "verilated.h"

#include "Vtb_1553_encoder___024root.h"

VL_ATTR_COLD void Vtb_1553_encoder___024root___eval_static__TOP(Vtb_1553_encoder___024root* vlSelf);

VL_ATTR_COLD void Vtb_1553_encoder___024root___eval_static(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___eval_static\n"); );
    // Body
    Vtb_1553_encoder___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_1553_encoder___024root___eval_static__TOP(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_1553_encoder__DOT__tb_data_clk = 0U;
    vlSelf->tb_1553_encoder__DOT__tb_rst = 0U;
    vlSelf->tb_1553_encoder__DOT__dut__DOT__state = 0U;
}

VL_ATTR_COLD void Vtb_1553_encoder___024root___eval_final(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_1553_encoder___024root___eval_settle(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_1553_encoder___024root___dump_triggers__act(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_1553_encoder.tb_data_clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_1553_encoder___024root___dump_triggers__nba(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_1553_encoder.tb_data_clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_1553_encoder___024root___ctor_var_reset(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_1553_encoder__DOT__tb_data_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_1553_encoder__DOT__tb_rst = VL_RAND_RESET_I(1);
    vlSelf->tb_1553_encoder__DOT__tb_dout = VL_RAND_RESET_I(2);
    vlSelf->tb_1553_encoder__DOT__tb_en_dout = VL_RAND_RESET_I(1);
    vlSelf->tb_1553_encoder__DOT__tb_tdata = VL_RAND_RESET_I(16);
    vlSelf->tb_1553_encoder__DOT__tb_tvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_1553_encoder__DOT__tb_tuser = VL_RAND_RESET_I(8);
    vlSelf->tb_1553_encoder__DOT__dut__DOT__xor_index = VL_RAND_RESET_I(32);
    vlSelf->tb_1553_encoder__DOT__dut__DOT__cycle_index = VL_RAND_RESET_I(32);
    vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data = VL_RAND_RESET_Q(40);
    vlSelf->tb_1553_encoder__DOT__dut__DOT__parity_bit = VL_RAND_RESET_I(1);
    vlSelf->tb_1553_encoder__DOT__dut__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_1553_encoder__DOT__dut__DOT__data = VL_RAND_RESET_I(16);
    vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data = VL_RAND_RESET_I(16);
    vlSelf->tb_1553_encoder__DOT__dut__DOT__cmd = VL_RAND_RESET_I(8);
    vlSelf->tb_1553_encoder__DOT__dut__DOT__skip_counter = VL_RAND_RESET_I(5);
    vlSelf->tb_1553_encoder__DOT__dut__DOT__pause_counter = VL_RAND_RESET_I(7);
    vlSelf->tb_1553_encoder__DOT__dut__DOT__trans_counter = VL_RAND_RESET_I(6);
    vlSelf->tb_1553_encoder__DOT__dut__DOT__prev_trans_counter = VL_RAND_RESET_I(6);
    vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__tb_1553_encoder__DOT__tb_data_clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__tb_1553_encoder__DOT__tb_data_clk__v0 = 0;
    vlSelf->__Vdly__tb_1553_encoder__DOT__tb_tdata = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__pause_counter = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__data = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__cmd = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__parity_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data = VL_RAND_RESET_Q(40);
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__r_data = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__trans_counter = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__skip_counter = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigrprev__TOP__tb_1553_encoder__DOT__tb_data_clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
