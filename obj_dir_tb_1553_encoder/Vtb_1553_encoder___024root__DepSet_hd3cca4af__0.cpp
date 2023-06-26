// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_1553_encoder.h for the primary calling header

#include "verilated.h"

#include "Vtb_1553_encoder___024root.h"

VL_ATTR_COLD void Vtb_1553_encoder___024root___eval_initial__TOP(Vtb_1553_encoder___024root* vlSelf);
VlCoroutine Vtb_1553_encoder___024root___eval_initial__TOP__0(Vtb_1553_encoder___024root* vlSelf);
VlCoroutine Vtb_1553_encoder___024root___eval_initial__TOP__1(Vtb_1553_encoder___024root* vlSelf);
VlCoroutine Vtb_1553_encoder___024root___eval_initial__TOP__2(Vtb_1553_encoder___024root* vlSelf);

void Vtb_1553_encoder___024root___eval_initial(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___eval_initial\n"); );
    // Body
    Vtb_1553_encoder___024root___eval_initial__TOP(vlSelf);
    Vtb_1553_encoder___024root___eval_initial__TOP__0(vlSelf);
    Vtb_1553_encoder___024root___eval_initial__TOP__1(vlSelf);
    Vtb_1553_encoder___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigrprev__TOP__tb_1553_encoder__DOT__tb_data_clk 
        = vlSelf->tb_1553_encoder__DOT__tb_data_clk;
}

VL_INLINE_OPT VlCoroutine Vtb_1553_encoder___024root___eval_initial__TOP__0(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->tb_1553_encoder__DOT__tb_rst = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       "../vtb/tb_1553_encoder.v", 
                                       46);
    vlSelf->tb_1553_encoder__DOT__tb_rst = 0U;
}

VL_INLINE_OPT VlCoroutine Vtb_1553_encoder___024root___eval_initial__TOP__1(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___eval_initial__TOP__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x3b9aca00ULL, 
                                       "../vtb/tb_1553_encoder.v", 
                                       84);
    VL_WRITEF("END SIMULATION\n");
    VL_FINISH_MT("../vtb/tb_1553_encoder.v", 86, "");
}

VL_INLINE_OPT VlCoroutine Vtb_1553_encoder___024root___eval_initial__TOP__2(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        vlSelf->__Vdlyvval__tb_1553_encoder__DOT__tb_data_clk__v0 
            = (1U & (~ (IData)(vlSelf->tb_1553_encoder__DOT__tb_data_clk)));
        vlSelf->__Vdlyvset__tb_1553_encoder__DOT__tb_data_clk__v0 = 1U;
        co_await vlSelf->__VdlySched.delay(0x61a8ULL, 
                                           "../vtb/tb_1553_encoder.v", 
                                           63);
    }
}

void Vtb_1553_encoder___024root___eval_act(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__0__PROF__axis_1553_encoder__l60(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__0__PROF__axis_1553_encoder__l60\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__pause_counter 
        = vlSelf->tb_1553_encoder__DOT__dut__DOT__pause_counter;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__1__PROF__tb_1553_encoder__l70(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__1__PROF__tb_1553_encoder__l70\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_encoder__DOT__tb_tdata 
        = vlSelf->tb_1553_encoder__DOT__tb_tdata;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__2__PROF__axis_1553_encoder__l189(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__2__PROF__axis_1553_encoder__l189\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__skip_counter 
        = vlSelf->tb_1553_encoder__DOT__dut__DOT__skip_counter;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__3__PROF__axis_1553_encoder__l181(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__3__PROF__axis_1553_encoder__l181\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__trans_counter 
        = vlSelf->tb_1553_encoder__DOT__dut__DOT__trans_counter;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__4__PROF__axis_1553_encoder__l78(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__4__PROF__axis_1553_encoder__l78\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__data 
        = vlSelf->tb_1553_encoder__DOT__dut__DOT__data;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__5__PROF__axis_1553_encoder__l79(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__5__PROF__axis_1553_encoder__l79\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__cmd 
        = vlSelf->tb_1553_encoder__DOT__dut__DOT__cmd;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__6__PROF__axis_1553_encoder__l113(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__6__PROF__axis_1553_encoder__l113\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__r_data 
        = vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__7__PROF__axis_1553_encoder__l106(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__7__PROF__axis_1553_encoder__l106\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
        = vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__8__PROF__axis_1553_encoder__l103(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__8__PROF__axis_1553_encoder__l103\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__parity_bit 
        = vlSelf->tb_1553_encoder__DOT__dut__DOT__parity_bit;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__9__PROF__axis_1553_encoder__l102(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__9__PROF__axis_1553_encoder__l102\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__state 
        = vlSelf->tb_1553_encoder__DOT__dut__DOT__state;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__12__PROF__axis_1553_encoder__l59(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__12__PROF__axis_1553_encoder__l59\n"); );
    // Body
    if (vlSelf->tb_1553_encoder__DOT__tb_rst) {
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__pause_counter = 0x4fU;
    } else if ((6U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state))) {
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__pause_counter = 0x4fU;
    } else {
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__pause_counter 
            = (0x7fU & ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__pause_counter) 
                        - (IData)(1U)));
        if ((0U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__pause_counter))) {
            vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__pause_counter = 0U;
        }
    }
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__13__PROF__tb_1553_encoder__l69(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__13__PROF__tb_1553_encoder__l69\n"); );
    // Body
    if (vlSelf->tb_1553_encoder__DOT__tb_rst) {
        vlSelf->__Vdly__tb_1553_encoder__DOT__tb_tdata = 0xffffU;
    } else if (((~ (IData)(vlSelf->tb_1553_encoder__DOT__tb_rst)) 
                & (1U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state)))) {
        vlSelf->__Vdly__tb_1553_encoder__DOT__tb_tdata 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb_1553_encoder__DOT__tb_tdata)));
    }
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__14__PROF__axis_1553_encoder__l77(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__14__PROF__axis_1553_encoder__l77\n"); );
    // Body
    if (vlSelf->tb_1553_encoder__DOT__tb_rst) {
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__data = 0U;
    } else if ((1U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state))) {
        if (vlSelf->tb_1553_encoder__DOT__tb_tvalid) {
            vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__data 
                = vlSelf->tb_1553_encoder__DOT__tb_tdata;
        }
    } else {
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__data 
            = ((6U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state))
                ? 0U : (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__data));
    }
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__15__PROF__axis_1553_encoder__l77(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__15__PROF__axis_1553_encoder__l77\n"); );
    // Body
    if (vlSelf->tb_1553_encoder__DOT__tb_rst) {
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__cmd = 0U;
    } else if ((1U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state))) {
        if (vlSelf->tb_1553_encoder__DOT__tb_tvalid) {
            vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__cmd 
                = vlSelf->tb_1553_encoder__DOT__tb_tuser;
        }
    } else {
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__cmd 
            = ((6U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state))
                ? 0U : (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__cmd));
    }
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__16__PROF__axis_1553_encoder__l101(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__16__PROF__axis_1553_encoder__l101\n"); );
    // Body
    if (vlSelf->tb_1553_encoder__DOT__tb_rst) {
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__state = 0U;
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__parity_bit = 0U;
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data = 0xaaaaaaaaaaULL;
    } else if ((1U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state))) {
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__state = 1U;
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data = 0xaaaaaaaaaaULL;
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__parity_bit = 0U;
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__r_data = 0U;
        if (vlSelf->tb_1553_encoder__DOT__tb_tvalid) {
            vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state))) {
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__state = 3U;
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__r_data 
            = vlSelf->tb_1553_encoder__DOT__dut__DOT__data;
        if ((2U & (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__cmd))) {
            vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__r_data 
                = (0xffffU & (~ (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__data)));
        }
    } else if ((3U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state))) {
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__state = 4U;
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__parity_bit 
            = (1U & VL_REDXOR_16(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data));
    } else if ((4U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state))) {
        vlSelf->tb_1553_encoder__DOT__dut__DOT__cycle_index = 0x22U;
        vlSelf->tb_1553_encoder__DOT__dut__DOT__xor_index = 0x10U;
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__state = 5U;
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0x3ffffffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(((2U == (7U & ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__cmd) 
                                                 >> 5U)))
                                    ? 0x38U : ((4U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__cmd) 
                                                    >> 5U)))
                                                ? 7U
                                                : 0U)))) 
                  << 0x22U));
        if ((1U & (~ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__cmd) 
                      >> 2U)))) {
            vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__state = 6U;
        }
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfffffffffcULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | (IData)((IData)((3U & (((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data) 
                                         ^ (- (IData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__parity_bit)))) 
                                        ^ (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__cmd)))))))));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 2U)) ^ (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfffffffffbULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 2U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 3U)) ^ (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfffffffff7ULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 3U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 4U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                         >> 1U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xffffffffefULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 4U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 5U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                         >> 1U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xffffffffdfULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 5U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 6U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                         >> 2U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xffffffffbfULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 6U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 7U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                         >> 2U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xffffffff7fULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 7U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 8U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                         >> 3U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfffffffeffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 8U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 9U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                         >> 3U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfffffffdffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 9U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0xaU)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                           >> 4U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfffffffbffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0xaU));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0xbU)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                           >> 4U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfffffff7ffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0xbU));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0xcU)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                           >> 5U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xffffffefffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0xcU));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0xdU)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                           >> 5U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xffffffdfffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0xdU));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0xeU)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                           >> 6U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xffffffbfffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0xeU));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0xfU)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                           >> 6U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xffffff7fffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0xfU));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x10U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 7U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfffffeffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x10U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x11U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 7U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfffffdffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x11U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x12U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 8U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfffffbffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x12U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x13U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 8U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfffff7ffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x13U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x14U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 9U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xffffefffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x14U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x15U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 9U)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xffffdfffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x15U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x16U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 0xaU)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xffffbfffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x16U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x17U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 0xaU)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xffff7fffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x17U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x18U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 0xbU)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfffeffffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x18U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x19U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 0xbU)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfffdffffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x19U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x1aU)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 0xcU)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfffbffffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x1aU));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x1bU)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 0xcU)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfff7ffffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x1bU));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x1cU)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 0xdU)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xffefffffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x1cU));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x1dU)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 0xdU)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xffdfffffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x1dU));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x1eU)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 0xeU)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xffbfffffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x1eU));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x1fU)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 0xeU)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xff7fffffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x1fU));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x20U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 0xfU)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfeffffffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x20U));
        vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0 
            = (1U & ((IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                              >> 0x21U)) ^ ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data) 
                                            >> 0xfU)));
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data 
            = ((0xfdffffffffULL & vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data) 
               | ((QData)((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0)) 
                  << 0x21U));
    } else if ((5U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state))) {
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__state = 5U;
        if ((0U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__pause_counter))) {
            vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__state = 6U;
        }
    } else if ((6U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state))) {
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__state = 6U;
        if ((((0U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__trans_counter)) 
              & (0U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__prev_trans_counter))) 
             & (9U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__skip_counter)))) {
            vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__state = 1U;
        }
    } else {
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__state = 1U;
    }
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__17__PROF__axis_1553_encoder__l180(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__17__PROF__axis_1553_encoder__l180\n"); );
    // Body
    vlSelf->tb_1553_encoder__DOT__tb_en_dout = ((~ (IData)(vlSelf->tb_1553_encoder__DOT__tb_rst)) 
                                                & (6U 
                                                   == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state)));
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__18__PROF__tb_1553_encoder__l70(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__18__PROF__tb_1553_encoder__l70\n"); );
    // Body
    vlSelf->tb_1553_encoder__DOT__tb_tdata = vlSelf->__Vdly__tb_1553_encoder__DOT__tb_tdata;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__20__PROF__axis_1553_encoder__l103(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__20__PROF__axis_1553_encoder__l103\n"); );
    // Body
    vlSelf->tb_1553_encoder__DOT__dut__DOT__parity_bit 
        = vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__parity_bit;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__21__PROF__axis_1553_encoder__l113(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__21__PROF__axis_1553_encoder__l113\n"); );
    // Body
    vlSelf->tb_1553_encoder__DOT__dut__DOT__r_data 
        = vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__r_data;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__22__PROF__axis_1553_encoder__l78(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__22__PROF__axis_1553_encoder__l78\n"); );
    // Body
    vlSelf->tb_1553_encoder__DOT__dut__DOT__data = vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__data;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__23__PROF__axis_1553_encoder__l79(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__23__PROF__axis_1553_encoder__l79\n"); );
    // Body
    vlSelf->tb_1553_encoder__DOT__dut__DOT__cmd = vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__cmd;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__24__PROF__axis_1553_encoder__l60(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__24__PROF__axis_1553_encoder__l60\n"); );
    // Body
    vlSelf->tb_1553_encoder__DOT__dut__DOT__pause_counter 
        = vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__pause_counter;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__28__PROF__tb_1553_encoder__l69(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__28__PROF__tb_1553_encoder__l69\n"); );
    // Body
    if (vlSelf->tb_1553_encoder__DOT__tb_rst) {
        vlSelf->tb_1553_encoder__DOT__tb_tuser = 0x8fU;
    }
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__29__PROF__tb_1553_encoder__l72(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__29__PROF__tb_1553_encoder__l72\n"); );
    // Body
    vlSelf->tb_1553_encoder__DOT__tb_tvalid = (1U & 
                                               (~ (IData)(vlSelf->tb_1553_encoder__DOT__tb_rst)));
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__30__PROF__axis_1553_encoder__l178(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__30__PROF__axis_1553_encoder__l178\n"); );
    // Body
    if (vlSelf->tb_1553_encoder__DOT__tb_rst) {
        vlSelf->tb_1553_encoder__DOT__tb_dout = 0U;
        vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__trans_counter = 0x27U;
        vlSelf->tb_1553_encoder__DOT__dut__DOT__prev_trans_counter = 0x27U;
    } else {
        vlSelf->tb_1553_encoder__DOT__dut__DOT__prev_trans_counter 
            = vlSelf->tb_1553_encoder__DOT__dut__DOT__trans_counter;
        if ((6U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__state))) {
            vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__skip_counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__skip_counter)));
            vlSelf->tb_1553_encoder__DOT__tb_dout = 
                ((2U & ((~ ((0x27U >= (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__trans_counter)) 
                            & (IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                                       >> (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__trans_counter))))) 
                        << 1U)) | ((0x27U >= (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__trans_counter)) 
                                   & (IData)((vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
                                              >> (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__trans_counter)))));
            if ((9U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__skip_counter))) {
                vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__trans_counter 
                    = (0x3fU & ((IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__trans_counter) 
                                - (IData)(1U)));
                vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__skip_counter = 0U;
            }
            if ((0U == (IData)(vlSelf->tb_1553_encoder__DOT__dut__DOT__trans_counter))) {
                vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__trans_counter = 0U;
            }
        } else {
            vlSelf->tb_1553_encoder__DOT__tb_dout = 0U;
            vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__skip_counter = 0U;
            vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__trans_counter = 0x27U;
            vlSelf->tb_1553_encoder__DOT__dut__DOT__prev_trans_counter = 0x27U;
        }
    }
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__35__PROF__axis_1553_encoder__l181(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__35__PROF__axis_1553_encoder__l181\n"); );
    // Body
    vlSelf->tb_1553_encoder__DOT__dut__DOT__trans_counter 
        = vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__trans_counter;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__36__PROF__axis_1553_encoder__l189(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__36__PROF__axis_1553_encoder__l189\n"); );
    // Body
    vlSelf->tb_1553_encoder__DOT__dut__DOT__skip_counter 
        = vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__skip_counter;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__37__PROF__axis_1553_encoder__l106(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__37__PROF__axis_1553_encoder__l106\n"); );
    // Body
    vlSelf->tb_1553_encoder__DOT__dut__DOT__reg_data 
        = vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__38__PROF__axis_1553_encoder__l102(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__38__PROF__axis_1553_encoder__l102\n"); );
    // Body
    vlSelf->tb_1553_encoder__DOT__dut__DOT__state = vlSelf->__Vdly__tb_1553_encoder__DOT__dut__DOT__state;
}

VL_INLINE_OPT void Vtb_1553_encoder___024root___nba_sequent__TOP__39__PROF__tb_1553_encoder__l61(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___nba_sequent__TOP__39__PROF__tb_1553_encoder__l61\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_1553_encoder__DOT__tb_data_clk__v0) {
        vlSelf->tb_1553_encoder__DOT__tb_data_clk = vlSelf->__Vdlyvval__tb_1553_encoder__DOT__tb_data_clk__v0;
        vlSelf->__Vdlyvset__tb_1553_encoder__DOT__tb_data_clk__v0 = 0U;
    }
}

void Vtb_1553_encoder___024root___eval_nba(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtb_1553_encoder___024root___nba_sequent__TOP__0__PROF__axis_1553_encoder__l60(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtb_1553_encoder___024root___nba_sequent__TOP__1__PROF__tb_1553_encoder__l70(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__2__PROF__axis_1553_encoder__l189(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__3__PROF__axis_1553_encoder__l181(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__4__PROF__axis_1553_encoder__l78(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__5__PROF__axis_1553_encoder__l79(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__6__PROF__axis_1553_encoder__l113(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__7__PROF__axis_1553_encoder__l106(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__8__PROF__axis_1553_encoder__l103(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__9__PROF__axis_1553_encoder__l102(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__12__PROF__axis_1553_encoder__l59(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__13__PROF__tb_1553_encoder__l69(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__14__PROF__axis_1553_encoder__l77(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__15__PROF__axis_1553_encoder__l77(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__16__PROF__axis_1553_encoder__l101(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__17__PROF__axis_1553_encoder__l180(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__18__PROF__tb_1553_encoder__l70(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__20__PROF__axis_1553_encoder__l103(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__21__PROF__axis_1553_encoder__l113(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__22__PROF__axis_1553_encoder__l78(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__23__PROF__axis_1553_encoder__l79(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__24__PROF__axis_1553_encoder__l60(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__28__PROF__tb_1553_encoder__l69(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__29__PROF__tb_1553_encoder__l72(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__30__PROF__axis_1553_encoder__l178(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__35__PROF__axis_1553_encoder__l181(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__36__PROF__axis_1553_encoder__l189(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__37__PROF__axis_1553_encoder__l106(vlSelf);
        Vtb_1553_encoder___024root___nba_sequent__TOP__38__PROF__axis_1553_encoder__l102(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtb_1553_encoder___024root___nba_sequent__TOP__39__PROF__tb_1553_encoder__l61(vlSelf);
    }
}

void Vtb_1553_encoder___024root___eval_triggers__act(Vtb_1553_encoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_1553_encoder___024root___dump_triggers__act(Vtb_1553_encoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_1553_encoder___024root___timing_resume(Vtb_1553_encoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_1553_encoder___024root___dump_triggers__nba(Vtb_1553_encoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_1553_encoder___024root___eval(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb_1553_encoder___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_1553_encoder___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../vtb/tb_1553_encoder.v", 10, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb_1553_encoder___024root___timing_resume(vlSelf);
                Vtb_1553_encoder___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_1553_encoder___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../vtb/tb_1553_encoder.v", 10, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_1553_encoder___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_1553_encoder___024root___timing_resume(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtb_1553_encoder___024root___eval_debug_assertions(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
