// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_1553_decoder.h for the primary calling header

#include "verilated.h"

#include "Vtb_1553_decoder___024root.h"

VL_ATTR_COLD void Vtb_1553_decoder___024root___eval_initial__TOP(Vtb_1553_decoder___024root* vlSelf);
VlCoroutine Vtb_1553_decoder___024root___eval_initial__TOP__0(Vtb_1553_decoder___024root* vlSelf);
VlCoroutine Vtb_1553_decoder___024root___eval_initial__TOP__1(Vtb_1553_decoder___024root* vlSelf);
VlCoroutine Vtb_1553_decoder___024root___eval_initial__TOP__2(Vtb_1553_decoder___024root* vlSelf);

void Vtb_1553_decoder___024root___eval_initial(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___eval_initial\n"); );
    // Body
    Vtb_1553_decoder___024root___eval_initial__TOP(vlSelf);
    Vtb_1553_decoder___024root___eval_initial__TOP__0(vlSelf);
    Vtb_1553_decoder___024root___eval_initial__TOP__1(vlSelf);
    Vtb_1553_decoder___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigrprev__TOP__tb_1553_decoder__DOT__tb_data_clk 
        = vlSelf->tb_1553_decoder__DOT__tb_data_clk;
}

VL_INLINE_OPT VlCoroutine Vtb_1553_decoder___024root___eval_initial__TOP__0(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__tb_rst = 1U;
    co_await vlSelf->__VdlySched.delay(0xf4240ULL, 
                                       "../vtb/tb_1553_decoder.v", 
                                       77);
    vlSelf->tb_1553_decoder__DOT__tb_rst = 0U;
}

VL_INLINE_OPT VlCoroutine Vtb_1553_decoder___024root___eval_initial__TOP__1(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___eval_initial__TOP__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x3b9aca00ULL, 
                                       "../vtb/tb_1553_decoder.v", 
                                       157);
    VL_WRITEF("END SIMULATION\n");
    VL_FINISH_MT("../vtb/tb_1553_decoder.v", 159, "");
}

VL_INLINE_OPT VlCoroutine Vtb_1553_decoder___024root___eval_initial__TOP__2(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        vlSelf->__Vdlyvval__tb_1553_decoder__DOT__tb_data_clk__v0 
            = (1U & (~ (IData)(vlSelf->tb_1553_decoder__DOT__tb_data_clk)));
        vlSelf->__Vdlyvset__tb_1553_decoder__DOT__tb_data_clk__v0 = 1U;
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           "../vtb/tb_1553_decoder.v", 
                                           96);
    }
}

void Vtb_1553_decoder___024root___eval_act(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__0__PROF__axis_1553_decoder__l325(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__0__PROF__axis_1553_decoder__l325\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__trans_counter 
        = vlSelf->tb_1553_decoder__DOT__dut__DOT__trans_counter;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__1__PROF__axis_1553_decoder__l171(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__1__PROF__axis_1553_decoder__l171\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tvalid 
        = vlSelf->tb_1553_decoder__DOT__tb_tvalid;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__2__PROF__tb_1553_decoder__l110(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__2__PROF__tb_1553_decoder__l110\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_decoder__DOT__parity_gen 
        = vlSelf->tb_1553_decoder__DOT__parity_gen;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__3__PROF__tb_1553_decoder__l109(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__3__PROF__tb_1553_decoder__l109\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x3eU)) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[__Vilp] 
            = vlSelf->tb_1553_decoder__DOT__reg_data[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__4__PROF__tb_1553_decoder__l108(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__4__PROF__tb_1553_decoder__l108\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x31U)) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[__Vilp] 
            = vlSelf->tb_1553_decoder__DOT__data_expand[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__5__PROF__tb_1553_decoder__l107(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__5__PROF__tb_1553_decoder__l107\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_decoder__DOT__data = vlSelf->tb_1553_decoder__DOT__data;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__6__PROF__tb_1553_decoder__l106(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__6__PROF__tb_1553_decoder__l106\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_decoder__DOT__delay_counter 
        = vlSelf->tb_1553_decoder__DOT__delay_counter;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__7__PROF__tb_1553_decoder__l105(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__7__PROF__tb_1553_decoder__l105\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_decoder__DOT__pos_counter 
        = vlSelf->tb_1553_decoder__DOT__pos_counter;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__8__PROF__axis_1553_decoder__l170(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__8__PROF__axis_1553_decoder__l170\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tdata 
        = vlSelf->tb_1553_decoder__DOT__tb_tdata;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__9__PROF__axis_1553_decoder__l147(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__9__PROF__axis_1553_decoder__l147\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__pause_counter 
        = vlSelf->tb_1553_decoder__DOT__dut__DOT__pause_counter;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__10__PROF__axis_1553_decoder__l204(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__10__PROF__axis_1553_decoder__l204\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__delay_bit 
        = vlSelf->tb_1553_decoder__DOT__dut__DOT__delay_bit;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__11__PROF__axis_1553_decoder__l203(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__11__PROF__axis_1553_decoder__l203\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__parity_bit 
        = vlSelf->tb_1553_decoder__DOT__dut__DOT__parity_bit;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__12__PROF__axis_1553_decoder__l201(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__12__PROF__axis_1553_decoder__l201\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data 
        = vlSelf->tb_1553_decoder__DOT__dut__DOT__data;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__13__PROF__axis_1553_decoder__l200(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__13__PROF__axis_1553_decoder__l200\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state 
        = vlSelf->tb_1553_decoder__DOT__dut__DOT__state;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__14__PROF__axis_1553_decoder__l172(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__14__PROF__axis_1553_decoder__l172\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tuser 
        = vlSelf->tb_1553_decoder__DOT__tb_tuser;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__15__PROF__axis_1553_decoder__l287(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__15__PROF__axis_1553_decoder__l287\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__skip_counter 
        = vlSelf->tb_1553_decoder__DOT__dut__DOT__skip_counter;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__16__PROF__axis_1553_decoder__l324(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__16__PROF__axis_1553_decoder__l324\n"); );
    // Body
    vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__reg_data 
        = vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__17__PROF__axis_1553_decoder__l323(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__17__PROF__axis_1553_decoder__l323\n"); );
    // Body
    if (vlSelf->tb_1553_decoder__DOT__tb_rst) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__trans_counter = 0x27U;
    } else if ((3U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
        if ((0x19U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__skip_counter))) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__trans_counter 
                = (0x3fU & ((IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__trans_counter) 
                            - (IData)(1U)));
        }
        if ((0U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__trans_counter))) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__trans_counter = 0U;
        }
    } else {
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__trans_counter = 0x27U;
    }
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__18__PROF__axis_1553_decoder__l169(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__18__PROF__axis_1553_decoder__l169\n"); );
    // Body
    if (vlSelf->tb_1553_decoder__DOT__tb_rst) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tvalid = 0U;
    } else {
        vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tvalid 
            = vlSelf->tb_1553_decoder__DOT__tb_tvalid;
        if ((0x1fU == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tvalid = 1U;
        } else if (vlSelf->tb_1553_decoder__DOT__tb_tready) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tvalid = 0U;
        }
    }
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__19__PROF__axis_1553_decoder__l169(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__19__PROF__axis_1553_decoder__l169\n"); );
    // Body
    if (vlSelf->tb_1553_decoder__DOT__tb_rst) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tdata = 0U;
    } else {
        vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tdata 
            = vlSelf->tb_1553_decoder__DOT__tb_tdata;
        if ((0x1fU == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tdata 
                = vlSelf->tb_1553_decoder__DOT__dut__DOT__data;
        } else if (vlSelf->tb_1553_decoder__DOT__tb_tready) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tdata = 0U;
        }
    }
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__20__PROF__axis_1553_decoder__l146(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__20__PROF__axis_1553_decoder__l146\n"); );
    // Body
    if (vlSelf->tb_1553_decoder__DOT__tb_rst) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__pause_counter = 0x18fU;
    } else if (((3U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state)) 
                | (1U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state)))) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__pause_counter = 0x18fU;
        if (((1U & (IData)(vlSelf->tb_1553_decoder__DOT__tb_din)) 
             == (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__tb_din) 
                       >> 1U)))) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__pause_counter 
                = (0x1ffU & ((IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__pause_counter) 
                             - (IData)(1U)));
            if ((0U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__pause_counter))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__pause_counter = 0U;
            }
        }
    } else {
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__pause_counter = 0x18fU;
    }
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__21__PROF__axis_1553_decoder__l169(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__21__PROF__axis_1553_decoder__l169\n"); );
    // Body
    if (vlSelf->tb_1553_decoder__DOT__tb_rst) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tuser = 0U;
    } else {
        vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tuser 
            = vlSelf->tb_1553_decoder__DOT__tb_tuser;
        if ((0x1fU == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tuser 
                = vlSelf->tb_1553_decoder__DOT__dut__DOT__cmd;
        } else if (vlSelf->tb_1553_decoder__DOT__tb_tready) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tuser = 0U;
        }
    }
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__22__PROF__axis_1553_decoder__l285(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__22__PROF__axis_1553_decoder__l285\n"); );
    // Body
    if (vlSelf->tb_1553_decoder__DOT__tb_rst) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__skip_counter = 0U;
    } else if (((1U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state)) 
                | (3U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state)))) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__skip_counter 
            = (0x7fU & VL_MODDIV_III(32, ((IData)(1U) 
                                          + (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__skip_counter)), (IData)(0x32U)));
        if (((1U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state)) 
             & ((1U & (IData)(vlSelf->tb_1553_decoder__DOT__tb_din)) 
                == (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__tb_din) 
                          >> 1U))))) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__skip_counter 
                = vlSelf->tb_1553_decoder__DOT__dut__DOT__skip_counter;
        }
        if (((0U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__pause_counter)) 
             & ((1U & (IData)(vlSelf->tb_1553_decoder__DOT__tb_din)) 
                == (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__tb_din) 
                          >> 1U))))) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__skip_counter = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__p_diff)) 
                   & (IData)(vlSelf->tb_1553_decoder__DOT__tb_din)))) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__skip_counter = 0U;
        }
        if ((IData)(((~ ((IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__p_diff) 
                         >> 1U)) & ((IData)(vlSelf->tb_1553_decoder__DOT__tb_din) 
                                    >> 1U)))) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__skip_counter = 0U;
        }
    } else {
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__skip_counter 
            = ((0U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))
                ? 0U : (0x7fU & VL_MODDIV_III(32, ((IData)(1U) 
                                                   + (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__skip_counter)), (IData)(0x32U))));
    }
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__23__PROF__axis_1553_decoder__l323(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__23__PROF__axis_1553_decoder__l323\n"); );
    // Body
    if (vlSelf->tb_1553_decoder__DOT__tb_rst) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__reg_data = 0xaaaaaaaaaaULL;
    } else if ((3U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
        if ((0x19U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__skip_counter))) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__reg_data 
                = ((0xfffffffffeULL & (vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                       << 1U)) | (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__p_diff)))));
        }
        if (((0U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__pause_counter)) 
             & ((1U & (IData)(vlSelf->tb_1553_decoder__DOT__tb_din)) 
                == (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__tb_din) 
                          >> 1U))))) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__reg_data = 0xaaaaaaaaaaULL;
        }
    } else if ((0x1fU == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__reg_data = 0xaaaaaaaaaaULL;
    } else if ((0U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__reg_data = 0xaaaaaaaaaaULL;
    }
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__24__PROF__axis_1553_decoder__l171(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__24__PROF__axis_1553_decoder__l171\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__tb_tvalid = vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tvalid;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__25__PROF__axis_1553_decoder__l170(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__25__PROF__axis_1553_decoder__l170\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__tb_tdata = vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tdata;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__26__PROF__axis_1553_decoder__l172(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__26__PROF__axis_1553_decoder__l172\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__tb_tuser = vlSelf->__Vdly__tb_1553_decoder__DOT__tb_tuser;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__30__PROF__tb_1553_decoder__l103(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__30__PROF__tb_1553_decoder__l103\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__tb_tready = (1U & 
                                               (~ (IData)(vlSelf->tb_1553_decoder__DOT__tb_rst)));
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__31__PROF__axis_1553_decoder__l199(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__31__PROF__axis_1553_decoder__l199\n"); );
    // Body
    if (vlSelf->tb_1553_decoder__DOT__tb_rst) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 0U;
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data = 0U;
        vlSelf->tb_1553_decoder__DOT__dut__DOT__cmd = 0U;
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__parity_bit = 0U;
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__delay_bit = 0U;
    } else if ((0x10U & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 1U;
    } else if ((8U & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
        if ((4U & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
            if ((2U & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
                if ((1U & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
                    vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 0x1fU;
                    vlSelf->tb_1553_decoder__DOT__dut__DOT__cmd 
                        = ((0xfeU & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__cmd)) 
                           | (1U & (~ ((~ VL_REDXOR_16(vlSelf->tb_1553_decoder__DOT__dut__DOT__data)) 
                                       ^ (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__parity_bit)))));
                } else {
                    vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 1U;
                }
            } else {
                vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 1U;
            }
        } else {
            vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 1U;
        }
    } else if ((4U & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
        if ((2U & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
                vlSelf->tb_1553_decoder__DOT__dut__DOT__bit_slice_index = 0x10U;
                vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 0xfU;
                vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data 
                    = ((0xfff8U & (IData)(vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data)) 
                       | ((4U & ((IData)((vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                          >> 6U)) << 2U)) 
                          | ((2U & ((IData)((vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                             >> 4U)) 
                                    << 1U)) | (1U & (IData)(
                                                            (vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                                             >> 2U))))));
                vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__parity_bit 
                    = (1U & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data));
                vlSelf->tb_1553_decoder__DOT__dut__DOT__cmd 
                    = ((0xf9U & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__cmd)) 
                       | ((IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__delay_bit) 
                          << 2U));
                vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data 
                    = ((0xffc7U & (IData)(vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data)) 
                       | ((0x20U & ((IData)((vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                             >> 0xcU)) 
                                    << 5U)) | ((0x10U 
                                                & ((IData)(
                                                           (vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                                            >> 0xaU)) 
                                                   << 4U)) 
                                               | (8U 
                                                  & ((IData)(
                                                             (vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                                              >> 8U)) 
                                                     << 3U)))));
                vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data 
                    = ((0xfe3fU & (IData)(vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data)) 
                       | ((0x100U & ((IData)((vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                              >> 0x12U)) 
                                     << 8U)) | ((0x80U 
                                                 & ((IData)(
                                                            (vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                                             >> 0x10U)) 
                                                    << 7U)) 
                                                | (0x40U 
                                                   & ((IData)(
                                                              (vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                                               >> 0xeU)) 
                                                      << 6U)))));
                vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data 
                    = ((0xf1ffU & (IData)(vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data)) 
                       | ((0x800U & ((IData)((vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                              >> 0x18U)) 
                                     << 0xbU)) | ((0x400U 
                                                   & ((IData)(
                                                              (vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                                               >> 0x16U)) 
                                                      << 0xaU)) 
                                                  | (0x200U 
                                                     & ((IData)(
                                                                (vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                                                 >> 0x14U)) 
                                                        << 9U)))));
                vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data 
                    = ((0x8fffU & (IData)(vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data)) 
                       | ((0x4000U & ((IData)((vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                               >> 0x1eU)) 
                                      << 0xeU)) | (
                                                   (0x2000U 
                                                    & ((IData)(
                                                               (vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                                                >> 0x1cU)) 
                                                       << 0xdU)) 
                                                   | (0x1000U 
                                                      & ((IData)(
                                                                 (vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                                                  >> 0x1aU)) 
                                                         << 0xcU)))));
                vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data 
                    = ((0x7fffU & (IData)(vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data)) 
                       | (0x8000U & ((IData)((vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                              >> 0x20U)) 
                                     << 0xfU)));
            } else {
                vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 1U;
            }
        } else {
            vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 1U;
        }
    } else if ((2U & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 3U;
            if ((0U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__trans_counter))) {
                if ((7U == (0x3fU & (IData)((vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                             >> 0x22U))))) {
                    vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 7U;
                    vlSelf->tb_1553_decoder__DOT__dut__DOT__cmd 
                        = (0x80U | (0x1fU & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__cmd)));
                }
                if ((0x38U == (0x3fU & (IData)((vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
                                                >> 0x22U))))) {
                    vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 7U;
                    vlSelf->tb_1553_decoder__DOT__dut__DOT__cmd 
                        = (0x40U | (0x1fU & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__cmd)));
                }
            }
            if ((0U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__pause_counter))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 1U;
                vlSelf->tb_1553_decoder__DOT__dut__DOT__cmd = 0U;
            }
        } else {
            vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 1U;
        }
    } else if ((1U & (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 1U;
        vlSelf->tb_1553_decoder__DOT__dut__DOT__cmd = 0U;
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data = 0U;
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__parity_bit = 0U;
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__delay_bit = 0U;
        if ((0U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__pause_counter))) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__delay_bit = 1U;
        }
        if ((((IData)(vlSelf->tb_1553_decoder__DOT__tb_din) 
              ^ ((IData)(vlSelf->tb_1553_decoder__DOT__tb_din) 
                 >> 1U)) & (0U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__skip_counter)))) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 3U;
        }
    } else {
        vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state = 1U;
    }
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__32__PROF__axis_1553_decoder__l285(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__32__PROF__axis_1553_decoder__l285\n"); );
    // Body
    if (vlSelf->tb_1553_decoder__DOT__tb_rst) {
        vlSelf->tb_1553_decoder__DOT__dut__DOT__p_diff = 3U;
    } else {
        vlSelf->tb_1553_decoder__DOT__dut__DOT__p_diff 
            = vlSelf->tb_1553_decoder__DOT__tb_din;
        if ((1U & (~ ((1U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state)) 
                      | (3U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state)))))) {
            if ((0U == (IData)(vlSelf->tb_1553_decoder__DOT__dut__DOT__state))) {
                vlSelf->tb_1553_decoder__DOT__dut__DOT__p_diff = 3U;
            }
        }
    }
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__35__PROF__axis_1553_decoder__l203(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__35__PROF__axis_1553_decoder__l203\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__dut__DOT__parity_bit 
        = vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__parity_bit;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__36__PROF__axis_1553_decoder__l204(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__36__PROF__axis_1553_decoder__l204\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__dut__DOT__delay_bit 
        = vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__delay_bit;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__37__PROF__axis_1553_decoder__l201(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__37__PROF__axis_1553_decoder__l201\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__dut__DOT__data = vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__data;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__38__PROF__axis_1553_decoder__l324(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__38__PROF__axis_1553_decoder__l324\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__dut__DOT__reg_data 
        = vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__reg_data;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__39__PROF__axis_1553_decoder__l325(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__39__PROF__axis_1553_decoder__l325\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__dut__DOT__trans_counter 
        = vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__trans_counter;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__40__PROF__axis_1553_decoder__l147(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__40__PROF__axis_1553_decoder__l147\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__dut__DOT__pause_counter 
        = vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__pause_counter;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__41__PROF__axis_1553_decoder__l287(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__41__PROF__axis_1553_decoder__l287\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__dut__DOT__skip_counter 
        = vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__skip_counter;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__43__PROF__axis_1553_decoder__l200(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__43__PROF__axis_1553_decoder__l200\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__dut__DOT__state = vlSelf->__Vdly__tb_1553_decoder__DOT__dut__DOT__state;
}

extern const VlWide<63>/*2015:0*/ Vtb_1553_decoder__ConstPool__CONST_h46785170_0;
extern const VlWide<10>/*319:0*/ Vtb_1553_decoder__ConstPool__CONST_h802132dd_0;
extern const VlWide<10>/*319:0*/ Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0;

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__45__PROF__tb_1553_decoder__l102(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__45__PROF__tb_1553_decoder__l102\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->tb_1553_decoder__DOT__tb_rst) {
        vlSelf->tb_1553_decoder__DOT__tb_din = 3U;
        vlSelf->__Vdly__tb_1553_decoder__DOT__pos_counter = 0U;
        vlSelf->__Vdly__tb_1553_decoder__DOT__delay_counter = 0U;
        vlSelf->__Vdly__tb_1553_decoder__DOT__data = 0xffffU;
        __Vilp = 0U;
        while ((__Vilp <= 0x31U)) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        __Vilp = 0U;
        while ((__Vilp <= 0x3eU)) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->__Vdly__tb_1553_decoder__DOT__parity_gen = 0U;
    } else if ((0U == vlSelf->tb_1553_decoder__DOT__pos_counter)) {
        vlSelf->tb_1553_decoder__DOT__xor_index = 0x10U;
        vlSelf->__Vdly__tb_1553_decoder__DOT__pos_counter = 0U;
        if ((0U != vlSelf->tb_1553_decoder__DOT__delay_counter)) {
            vlSelf->tb_1553_decoder__DOT__tb_din = 3U;
        }
        vlSelf->__Vdly__tb_1553_decoder__DOT__parity_gen 
            = (1U & (~ VL_REDXOR_16(vlSelf->tb_1553_decoder__DOT__data)));
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0U;
        while (VL_GTS_III(32, 0x64U, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & (IData)(vlSelf->tb_1553_decoder__DOT__data));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0x64U;
        while (VL_GTS_III(32, 0xc8U, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__data) 
                         >> 1U));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0xc8U;
        while (VL_GTS_III(32, 0x12cU, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__data) 
                         >> 2U));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0x12cU;
        while (VL_GTS_III(32, 0x190U, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__data) 
                         >> 3U));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0x190U;
        while (VL_GTS_III(32, 0x1f4U, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__data) 
                         >> 4U));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0x1f4U;
        while (VL_GTS_III(32, 0x258U, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__data) 
                         >> 5U));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0x258U;
        while (VL_GTS_III(32, 0x2bcU, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__data) 
                         >> 6U));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0x2bcU;
        while (VL_GTS_III(32, 0x320U, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__data) 
                         >> 7U));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0x320U;
        while (VL_GTS_III(32, 0x384U, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__data) 
                         >> 8U));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0x384U;
        while (VL_GTS_III(32, 0x3e8U, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__data) 
                         >> 9U));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0x3e8U;
        while (VL_GTS_III(32, 0x44cU, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__data) 
                         >> 0xaU));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0x44cU;
        while (VL_GTS_III(32, 0x4b0U, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__data) 
                         >> 0xbU));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0x4b0U;
        while (VL_GTS_III(32, 0x514U, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__data) 
                         >> 0xcU));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0x514U;
        while (VL_GTS_III(32, 0x578U, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__data) 
                         >> 0xdU));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0x578U;
        while (VL_GTS_III(32, 0x5dcU, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__data) 
                         >> 0xeU));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->tb_1553_decoder__DOT__cycle_index = 0x5dcU;
        while (VL_GTS_III(32, 0x640U, vlSelf->tb_1553_decoder__DOT__cycle_index)) {
            vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0 
                = (1U & ((IData)(vlSelf->tb_1553_decoder__DOT__data) 
                         >> 0xfU));
            if (VL_LIKELY((0x63fU >= (0x7ffU & vlSelf->tb_1553_decoder__DOT__cycle_index)))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[(0x3fU 
                                                                   & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                                                      >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->tb_1553_decoder__DOT__cycle_index))) 
                        & vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[
                        (0x3fU & (vlSelf->tb_1553_decoder__DOT__cycle_index 
                                  >> 5U))]) | ((IData)(vlSelf->tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0) 
                                               << (0x1fU 
                                                   & vlSelf->tb_1553_decoder__DOT__cycle_index)));
            }
            vlSelf->tb_1553_decoder__DOT__cycle_index 
                = ((IData)(1U) + vlSelf->tb_1553_decoder__DOT__cycle_index);
        }
        vlSelf->__Vdly__tb_1553_decoder__DOT__delay_counter 
            = (vlSelf->tb_1553_decoder__DOT__delay_counter 
               - (IData)(1U));
        if ((0U == vlSelf->tb_1553_decoder__DOT__delay_counter)) {
            vlSelf->__Vdly__tb_1553_decoder__DOT__data 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb_1553_decoder__DOT__data)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__delay_counter = 0U;
            vlSelf->__Vdly__tb_1553_decoder__DOT__pos_counter = 0x7cfU;
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0U] 
                   ^ (- (IData)((IData)(vlSelf->tb_1553_decoder__DOT__parity_gen))));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[1U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[1U] 
                   ^ (- (IData)((IData)(vlSelf->tb_1553_decoder__DOT__parity_gen))));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[2U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[2U] 
                   ^ (- (IData)((IData)(vlSelf->tb_1553_decoder__DOT__parity_gen))));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[3U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[3U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0U] 
                       << 4U) | (0xfU & (- (IData)((IData)(vlSelf->tb_1553_decoder__DOT__parity_gen))))));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[4U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[4U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[1U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[5U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[5U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[1U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[2U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[6U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[6U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[2U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[3U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[7U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[7U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[3U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[4U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[8U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[8U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[4U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[5U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[9U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[9U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[5U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[6U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0xaU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0xaU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[6U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[7U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0xbU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0xbU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[7U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[8U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0xcU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0xcU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[8U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[9U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0xdU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0xdU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[9U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0xaU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0xeU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0xeU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0xaU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0xbU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0xfU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0xfU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0xbU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0xcU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x10U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x10U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0xcU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0xdU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x11U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x11U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0xdU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0xeU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x12U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x12U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0xeU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0xfU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x13U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x13U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0xfU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x10U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x14U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x14U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x10U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x11U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x15U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x15U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x11U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x12U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x16U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x16U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x12U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x13U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x17U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x17U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x13U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x14U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x18U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x18U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x14U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x15U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x19U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x19U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x15U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x16U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x1aU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x1aU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x16U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x17U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x1bU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x1bU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x17U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x18U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x1cU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x1cU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x18U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x19U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x1dU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x1dU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x19U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x1aU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x1eU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x1eU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x1aU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x1bU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x1fU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x1fU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x1bU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x1cU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x20U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x20U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x1cU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x1dU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x21U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x21U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x1dU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x1eU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x22U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x22U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x1eU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x1fU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x23U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x23U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x1fU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x20U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x24U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x24U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x20U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x21U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x25U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x25U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x21U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x22U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x26U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x26U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x22U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x23U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x27U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x27U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x23U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x24U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x28U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x28U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x24U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x25U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x29U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x29U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x25U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x26U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x2aU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x2aU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x26U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x27U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x2bU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x2bU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x27U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x28U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x2cU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x2cU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x28U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x29U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x2dU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x2dU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x29U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x2aU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x2eU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x2eU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x2aU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x2bU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x2fU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x2fU] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x2bU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x2cU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x30U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x30U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x2cU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x2dU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x31U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x31U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x2dU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x2eU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x32U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x32U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x2eU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x2fU] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x33U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x33U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x2fU] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x30U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x34U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x34U] 
                   ^ ((vlSelf->tb_1553_decoder__DOT__data_expand[0x30U] 
                       >> 0x1cU) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x31U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x35U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x35U] 
                   ^ ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[0U] 
                       << 4U) | (vlSelf->tb_1553_decoder__DOT__data_expand[0x31U] 
                                 >> 0x1cU)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x36U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x36U] 
                   ^ ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[0U] 
                       >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[1U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x37U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x37U] 
                   ^ ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[1U] 
                       >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[2U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x38U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x38U] 
                   ^ ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[2U] 
                       >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[3U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x39U] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x39U] 
                   ^ ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[3U] 
                       >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[4U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x3aU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x3aU] 
                   ^ ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[4U] 
                       >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[5U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x3bU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x3bU] 
                   ^ ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[5U] 
                       >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[6U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x3cU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x3cU] 
                   ^ ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[6U] 
                       >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[7U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x3dU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x3dU] 
                   ^ ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[7U] 
                       >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[8U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x3eU] 
                = (Vtb_1553_decoder__ConstPool__CONST_h46785170_0[0x3eU] 
                   ^ ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[8U] 
                       >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[9U] 
                                    << 4U)));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x35U] 
                = ((0xfU & vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x35U]) 
                   | (Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[0U] 
                      << 4U));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x36U] 
                = ((Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[0U] 
                    >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[1U] 
                                 << 4U));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x37U] 
                = ((Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[1U] 
                    >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[2U] 
                                 << 4U));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x38U] 
                = ((Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[2U] 
                    >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[3U] 
                                 << 4U));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x39U] 
                = ((Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[3U] 
                    >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[4U] 
                                 << 4U));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x3aU] 
                = ((Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[4U] 
                    >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[5U] 
                                 << 4U));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x3bU] 
                = ((Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[5U] 
                    >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[6U] 
                                 << 4U));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x3cU] 
                = ((Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[6U] 
                    >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[7U] 
                                 << 4U));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x3dU] 
                = ((Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[7U] 
                    >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[8U] 
                                 << 4U));
            vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x3eU] 
                = (0xffffU & ((Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[8U] 
                               >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h0606f90c_0[9U] 
                                            << 4U)));
            if ((1U & VL_REDXOR_16(vlSelf->tb_1553_decoder__DOT__data))) {
                vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x35U] 
                    = ((0xfU & vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x35U]) 
                       | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[0U] 
                          << 4U));
                vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x36U] 
                    = ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[0U] 
                        >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[1U] 
                                     << 4U));
                vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x37U] 
                    = ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[1U] 
                        >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[2U] 
                                     << 4U));
                vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x38U] 
                    = ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[2U] 
                        >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[3U] 
                                     << 4U));
                vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x39U] 
                    = ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[3U] 
                        >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[4U] 
                                     << 4U));
                vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x3aU] 
                    = ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[4U] 
                        >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[5U] 
                                     << 4U));
                vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x3bU] 
                    = ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[5U] 
                        >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[6U] 
                                     << 4U));
                vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x3cU] 
                    = ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[6U] 
                        >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[7U] 
                                     << 4U));
                vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x3dU] 
                    = ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[7U] 
                        >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[8U] 
                                     << 4U));
                vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[0x3eU] 
                    = (0xffffU & ((Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[8U] 
                                   >> 0x1cU) | (Vtb_1553_decoder__ConstPool__CONST_h802132dd_0[9U] 
                                                << 4U)));
            }
        }
    } else {
        vlSelf->tb_1553_decoder__DOT__tb_din = ((2U 
                                                 & (IData)(vlSelf->tb_1553_decoder__DOT__tb_din)) 
                                                | ((0x7cfU 
                                                    >= 
                                                    (0x7ffU 
                                                     & vlSelf->tb_1553_decoder__DOT__pos_counter)) 
                                                   & (vlSelf->tb_1553_decoder__DOT__reg_data[
                                                      (0x3fU 
                                                       & (vlSelf->tb_1553_decoder__DOT__pos_counter 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tb_1553_decoder__DOT__pos_counter))));
        vlSelf->tb_1553_decoder__DOT__tb_din = ((1U 
                                                 & (IData)(vlSelf->tb_1553_decoder__DOT__tb_din)) 
                                                | (2U 
                                                   & ((~ 
                                                       ((0x7cfU 
                                                         >= 
                                                         (0x7ffU 
                                                          & vlSelf->tb_1553_decoder__DOT__pos_counter)) 
                                                        & (vlSelf->tb_1553_decoder__DOT__reg_data[
                                                           (0x3fU 
                                                            & (vlSelf->tb_1553_decoder__DOT__pos_counter 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & vlSelf->tb_1553_decoder__DOT__pos_counter)))) 
                                                      << 1U)));
        vlSelf->__Vdly__tb_1553_decoder__DOT__pos_counter 
            = (vlSelf->tb_1553_decoder__DOT__pos_counter 
               - (IData)(1U));
    }
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__47__PROF__tb_1553_decoder__l105(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__47__PROF__tb_1553_decoder__l105\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__pos_counter = vlSelf->__Vdly__tb_1553_decoder__DOT__pos_counter;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__48__PROF__tb_1553_decoder__l106(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__48__PROF__tb_1553_decoder__l106\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__delay_counter = vlSelf->__Vdly__tb_1553_decoder__DOT__delay_counter;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__49__PROF__tb_1553_decoder__l107(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__49__PROF__tb_1553_decoder__l107\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__data = vlSelf->__Vdly__tb_1553_decoder__DOT__data;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__50__PROF__tb_1553_decoder__l108(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__50__PROF__tb_1553_decoder__l108\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x31U)) {
        vlSelf->tb_1553_decoder__DOT__data_expand[__Vilp] 
            = vlSelf->__Vdly__tb_1553_decoder__DOT__data_expand[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__51__PROF__tb_1553_decoder__l109(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__51__PROF__tb_1553_decoder__l109\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x3eU)) {
        vlSelf->tb_1553_decoder__DOT__reg_data[__Vilp] 
            = vlSelf->__Vdly__tb_1553_decoder__DOT__reg_data[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__52__PROF__tb_1553_decoder__l110(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__52__PROF__tb_1553_decoder__l110\n"); );
    // Body
    vlSelf->tb_1553_decoder__DOT__parity_gen = vlSelf->__Vdly__tb_1553_decoder__DOT__parity_gen;
}

VL_INLINE_OPT void Vtb_1553_decoder___024root___nba_sequent__TOP__53__PROF__tb_1553_decoder__l94(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___nba_sequent__TOP__53__PROF__tb_1553_decoder__l94\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_1553_decoder__DOT__tb_data_clk__v0) {
        vlSelf->tb_1553_decoder__DOT__tb_data_clk = vlSelf->__Vdlyvval__tb_1553_decoder__DOT__tb_data_clk__v0;
        vlSelf->__Vdlyvset__tb_1553_decoder__DOT__tb_data_clk__v0 = 0U;
    }
}

void Vtb_1553_decoder___024root___eval_nba(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtb_1553_decoder___024root___nba_sequent__TOP__0__PROF__axis_1553_decoder__l325(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtb_1553_decoder___024root___nba_sequent__TOP__1__PROF__axis_1553_decoder__l171(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__2__PROF__tb_1553_decoder__l110(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__3__PROF__tb_1553_decoder__l109(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__4__PROF__tb_1553_decoder__l108(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__5__PROF__tb_1553_decoder__l107(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__6__PROF__tb_1553_decoder__l106(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__7__PROF__tb_1553_decoder__l105(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__8__PROF__axis_1553_decoder__l170(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__9__PROF__axis_1553_decoder__l147(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__10__PROF__axis_1553_decoder__l204(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__11__PROF__axis_1553_decoder__l203(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__12__PROF__axis_1553_decoder__l201(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__13__PROF__axis_1553_decoder__l200(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__14__PROF__axis_1553_decoder__l172(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__15__PROF__axis_1553_decoder__l287(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__16__PROF__axis_1553_decoder__l324(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__17__PROF__axis_1553_decoder__l323(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__18__PROF__axis_1553_decoder__l169(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__19__PROF__axis_1553_decoder__l169(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__20__PROF__axis_1553_decoder__l146(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__21__PROF__axis_1553_decoder__l169(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__22__PROF__axis_1553_decoder__l285(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__23__PROF__axis_1553_decoder__l323(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__24__PROF__axis_1553_decoder__l171(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__25__PROF__axis_1553_decoder__l170(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__26__PROF__axis_1553_decoder__l172(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__30__PROF__tb_1553_decoder__l103(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__31__PROF__axis_1553_decoder__l199(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__32__PROF__axis_1553_decoder__l285(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__35__PROF__axis_1553_decoder__l203(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__36__PROF__axis_1553_decoder__l204(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__37__PROF__axis_1553_decoder__l201(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__38__PROF__axis_1553_decoder__l324(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__39__PROF__axis_1553_decoder__l325(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__40__PROF__axis_1553_decoder__l147(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__41__PROF__axis_1553_decoder__l287(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__43__PROF__axis_1553_decoder__l200(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__45__PROF__tb_1553_decoder__l102(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__47__PROF__tb_1553_decoder__l105(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__48__PROF__tb_1553_decoder__l106(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__49__PROF__tb_1553_decoder__l107(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__50__PROF__tb_1553_decoder__l108(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__51__PROF__tb_1553_decoder__l109(vlSelf);
        Vtb_1553_decoder___024root___nba_sequent__TOP__52__PROF__tb_1553_decoder__l110(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtb_1553_decoder___024root___nba_sequent__TOP__53__PROF__tb_1553_decoder__l94(vlSelf);
    }
}

void Vtb_1553_decoder___024root___eval_triggers__act(Vtb_1553_decoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_1553_decoder___024root___dump_triggers__act(Vtb_1553_decoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_1553_decoder___024root___timing_resume(Vtb_1553_decoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_1553_decoder___024root___dump_triggers__nba(Vtb_1553_decoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_1553_decoder___024root___eval(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___eval\n"); );
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
            Vtb_1553_decoder___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_1553_decoder___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../vtb/tb_1553_decoder.v", 10, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb_1553_decoder___024root___timing_resume(vlSelf);
                Vtb_1553_decoder___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_1553_decoder___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../vtb/tb_1553_decoder.v", 10, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_1553_decoder___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_1553_decoder___024root___timing_resume(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtb_1553_decoder___024root___eval_debug_assertions(Vtb_1553_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_decoder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
