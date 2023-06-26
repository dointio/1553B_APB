// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_core.h for the primary calling header

#include "verilated.h"

#include "Vtb_core___024root.h"

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__245__PROF__util_uart_baud_gen__l54(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__245__PROF__util_uart_baud_gen__l54\n"); );
    // Body
    if (vlSelf->tb_core__DOT__tb_rst) {
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_rx__DOT__counter = 0x2ebae40U;
        vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_rx__DOT__r_uart_ena = 0U;
    } else {
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_rx__DOT__counter 
            = ((IData)(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_hold_rx)
                ? 0x17d7840U : (0x7ffffffU & ((IData)(0xf4240U) 
                                              + vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_rx__DOT__counter)));
        vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_rx__DOT__r_uart_ena = 0U;
        if ((0x2ebae40U <= vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_rx__DOT__counter)) {
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_rx__DOT__counter 
                = (0x7ffffffU & VL_MODDIV_III(32, vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_rx__DOT__counter, (IData)(0x2ebae40U)));
            vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_rx__DOT__r_uart_ena = 1U;
        }
    }
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__246__PROF__util_axis_uart_rx__l205(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__246__PROF__util_axis_uart_rx__l205\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_rx__DOT__p_rxd 
        = ((IData)(vlSelf->tb_core__DOT__tb_rst) | (IData)(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__reg_txd));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__247__PROF__util_axis_1553_string_encoder__l76(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__247__PROF__util_axis_1553_string_encoder__l76\n"); );
    // Body
    if (vlSelf->tb_core__DOT__tb_rst) {
        vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[0U] = 0U;
        vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[1U] = 0U;
        vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[2U] = 0U;
        vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[3U] = 0U;
        vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[4U] = 0U;
        vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[5U] = 0U;
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__string_encoder__DOT__p_m_axis_tready = 0U;
        vlSelf->tb_core__DOT__dut__DOT__mstring_encoder_valid = 0U;
        vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__m_axis_tkeep = 0U;
        vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__m_axis_tlast = 0U;
    } else {
        if (vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_ready) {
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[0U] = 0U;
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[1U] = 0U;
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[2U] = 0U;
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[3U] = 0U;
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[4U] = 0U;
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[5U] = 0U;
            vlSelf->tb_core__DOT__dut__DOT__mstring_encoder_valid = 0U;
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__m_axis_tkeep = 0U;
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__m_axis_tlast = 0U;
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__string_encoder__DOT__p_m_axis_tready = 0U;
        }
        if (((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_valid) 
             & ((~ (IData)(vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__p_m_axis_tready)) 
                | (IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_ready)))) {
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__string_encoder__DOT__p_m_axis_tready 
                = vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_ready;
            vlSelf->tb_core__DOT__dut__DOT__mstring_encoder_valid = 1U;
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__m_axis_tlast = 1U;
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__m_axis_tkeep = 0x1fffffU;
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[4U] 
                = ((0xffU & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[4U]) 
                   | (((2U == (7U & ((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_user) 
                                     >> 5U))) ? 0x44415441U
                        : ((4U == (7U & ((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_user) 
                                         >> 5U))) ? 0x434d4453U
                            : 0x4e414e41U)) << 8U));
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[5U] 
                = (((2U == (7U & ((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_user) 
                                  >> 5U))) ? 0x44415441U
                     : ((4U == (7U & ((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_user) 
                                      >> 5U))) ? 0x434d4453U
                         : 0x4e414e41U)) >> 0x18U);
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[3U] 
                = (0x44300000U | (0xffffU & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[3U]));
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[4U] 
                = (0x3bU | (0xffffff00U & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[4U]));
            if ((4U & (IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_user))) {
                vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[3U] 
                    = (0x44310000U | (0xffffU & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[3U]));
            }
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[2U] 
                = (0x30000000U | (0xffffffU & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[2U]));
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[3U] 
                = (0x3b50U | (0xffff0000U & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[3U]));
            if ((1U & (IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_user))) {
                vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[2U] 
                    = (0x31000000U | (0xffffffU & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[2U]));
                vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[3U] 
                    = (0x50U | (0xffffff00U & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[3U]));
            }
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[2U] 
                = (0x3b4930U | (0xff000000U & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[2U]));
            if ((2U & (IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_user))) {
                vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[2U] 
                    = (0x4931U | (0xffff0000U & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[2U]));
            }
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[1U] 
                = (0x3b487800U | (0xffU & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[1U]));
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[1U] 
                = ((0xffffff00U & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[1U]) 
                   | (0xffU & ((0xaU > (0xfU & ((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_data) 
                                                >> 0xcU)))
                                ? ((IData)(0x30U) + 
                                   (0xfU & ((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_data) 
                                            >> 0xcU)))
                                : ((IData)(0x37U) + 
                                   (0xfU & ((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_data) 
                                            >> 0xcU))))));
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[0U] 
                = ((0xffffffU & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[0U]) 
                   | (((0xaU > (0xfU & ((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_data) 
                                        >> 8U))) ? 
                       ((IData)(0x30U) + (0xfU & ((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_data) 
                                                  >> 8U)))
                        : ((IData)(0x37U) + (0xfU & 
                                             ((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_data) 
                                              >> 8U)))) 
                      << 0x18U));
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[0U] 
                = ((0xff00ffffU & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[0U]) 
                   | (0xff0000U & (((0xaU > (0xfU & 
                                             ((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_data) 
                                              >> 4U)))
                                     ? ((IData)(0x30U) 
                                        + (0xfU & ((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_data) 
                                                   >> 4U)))
                                     : ((IData)(0x37U) 
                                        + (0xfU & ((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_data) 
                                                   >> 4U)))) 
                                   << 0x10U)));
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[0U] 
                = ((0xffff00ffU & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[0U]) 
                   | (0xff00U & (((0xaU > (0xfU & (IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_data)))
                                   ? ((IData)(0x30U) 
                                      + (0xfU & (IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_data)))
                                   : ((IData)(0x37U) 
                                      + (0xfU & (IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_data)))) 
                                 << 8U)));
            vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[0U] 
                = (0xdU | (0xffffff00U & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[0U]));
        }
    }
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__248__PROF__util_fifo_ctrl__l325(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__248__PROF__util_fifo_ctrl__l325\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_rstn 
        = (1U & (~ (IData)(vlSelf->tb_core__DOT__tb_rst)));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__249__PROF__util_fifo_ctrl__l320(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__249__PROF__util_fifo_ctrl__l320\n"); );
    // Body
    if (vlSelf->tb_core__DOT__tb_rst) {
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__tail = 0U;
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail = 0U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_gr_tail = 0U;
    } else if ((0U != (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state))) {
        if (((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem) 
             | (((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_head) 
                 != (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail)) 
                & (IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_encoder_ready)))) {
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__tail 
                = vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_tail;
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail 
                = vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_tail;
            vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_gr_tail 
                = ((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_tail) 
                   ^ (0x7fU & ((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_tail) 
                               >> 1U)));
        }
    }
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__250__PROF__util_fifo_ctrl__l174(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__250__PROF__util_fifo_ctrl__l174\n"); );
    // Body
    if (vlSelf->tb_core__DOT__tb_rst) {
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 0U;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_valid = 0U;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_empty = 1U;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem = 0U;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_fwft_count = 0U;
    } else if ((0U == (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state))) {
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 0U;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_empty = 1U;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_valid = 0U;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem = 0U;
        if (((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_head) 
             != (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail))) {
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 1U;
            vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem = 1U;
        }
    } else if ((1U == (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state))) {
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 1U;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_empty = 0U;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_valid = 1U;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem = 0U;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_fwft_count = 1U;
        if (vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_ready) {
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 2U;
            if (((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_head) 
                 == (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail))) {
                vlSelf->__Vdly__tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 0U;
                vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_fwft_count = 0U;
                vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_empty = 1U;
                vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_valid = 0U;
                vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem = 0U;
            }
        }
    } else if ((2U == (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state))) {
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 2U;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_empty = 0U;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_valid = 1U;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem = 0U;
        if ((((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_head) 
              == (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail)) 
             & (IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_ready))) {
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 0U;
            vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_fwft_count = 0U;
            vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_empty = 1U;
            vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_valid = 0U;
            vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem = 0U;
        }
    }
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__252__PROF__tb_core__l125(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__252__PROF__tb_core__l125\n"); );
    // Body
    vlSelf->tb_core__DOT__pos_counter = vlSelf->__Vdly__tb_core__DOT__pos_counter;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__253__PROF__tb_core__l126(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__253__PROF__tb_core__l126\n"); );
    // Body
    vlSelf->tb_core__DOT__delay_counter = vlSelf->__Vdly__tb_core__DOT__delay_counter;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__254__PROF__tb_core__l127(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__254__PROF__tb_core__l127\n"); );
    // Body
    vlSelf->tb_core__DOT__data = vlSelf->__Vdly__tb_core__DOT__data;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__255__PROF__tb_core__l128(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__255__PROF__tb_core__l128\n"); );
    // Body
    vlSelf->tb_core__DOT__data_expand[0U] = vlSelf->__Vdly__tb_core__DOT__data_expand[0U];
    vlSelf->tb_core__DOT__data_expand[1U] = vlSelf->__Vdly__tb_core__DOT__data_expand[1U];
    vlSelf->tb_core__DOT__data_expand[2U] = vlSelf->__Vdly__tb_core__DOT__data_expand[2U];
    vlSelf->tb_core__DOT__data_expand[3U] = vlSelf->__Vdly__tb_core__DOT__data_expand[3U];
    vlSelf->tb_core__DOT__data_expand[4U] = vlSelf->__Vdly__tb_core__DOT__data_expand[4U];
    vlSelf->tb_core__DOT__data_expand[5U] = vlSelf->__Vdly__tb_core__DOT__data_expand[5U];
    vlSelf->tb_core__DOT__data_expand[6U] = vlSelf->__Vdly__tb_core__DOT__data_expand[6U];
    vlSelf->tb_core__DOT__data_expand[7U] = vlSelf->__Vdly__tb_core__DOT__data_expand[7U];
    vlSelf->tb_core__DOT__data_expand[8U] = vlSelf->__Vdly__tb_core__DOT__data_expand[8U];
    vlSelf->tb_core__DOT__data_expand[9U] = vlSelf->__Vdly__tb_core__DOT__data_expand[9U];
    vlSelf->tb_core__DOT__data_expand[0xaU] = vlSelf->__Vdly__tb_core__DOT__data_expand[0xaU];
    vlSelf->tb_core__DOT__data_expand[0xbU] = vlSelf->__Vdly__tb_core__DOT__data_expand[0xbU];
    vlSelf->tb_core__DOT__data_expand[0xcU] = vlSelf->__Vdly__tb_core__DOT__data_expand[0xcU];
    vlSelf->tb_core__DOT__data_expand[0xdU] = vlSelf->__Vdly__tb_core__DOT__data_expand[0xdU];
    vlSelf->tb_core__DOT__data_expand[0xeU] = vlSelf->__Vdly__tb_core__DOT__data_expand[0xeU];
    vlSelf->tb_core__DOT__data_expand[0xfU] = vlSelf->__Vdly__tb_core__DOT__data_expand[0xfU];
    vlSelf->tb_core__DOT__data_expand[0x10U] = vlSelf->__Vdly__tb_core__DOT__data_expand[0x10U];
    vlSelf->tb_core__DOT__data_expand[0x11U] = vlSelf->__Vdly__tb_core__DOT__data_expand[0x11U];
    vlSelf->tb_core__DOT__data_expand[0x12U] = vlSelf->__Vdly__tb_core__DOT__data_expand[0x12U];
    vlSelf->tb_core__DOT__data_expand[0x13U] = vlSelf->__Vdly__tb_core__DOT__data_expand[0x13U];
    vlSelf->tb_core__DOT__data_expand[0x14U] = vlSelf->__Vdly__tb_core__DOT__data_expand[0x14U];
    vlSelf->tb_core__DOT__data_expand[0x15U] = vlSelf->__Vdly__tb_core__DOT__data_expand[0x15U];
    vlSelf->tb_core__DOT__data_expand[0x16U] = vlSelf->__Vdly__tb_core__DOT__data_expand[0x16U];
    vlSelf->tb_core__DOT__data_expand[0x17U] = vlSelf->__Vdly__tb_core__DOT__data_expand[0x17U];
    vlSelf->tb_core__DOT__data_expand[0x18U] = vlSelf->__Vdly__tb_core__DOT__data_expand[0x18U];
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__256__PROF__tb_core__l129(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__256__PROF__tb_core__l129\n"); );
    // Body
    vlSelf->tb_core__DOT__reg_data[0U] = vlSelf->__Vdly__tb_core__DOT__reg_data[0U];
    vlSelf->tb_core__DOT__reg_data[1U] = vlSelf->__Vdly__tb_core__DOT__reg_data[1U];
    vlSelf->tb_core__DOT__reg_data[2U] = vlSelf->__Vdly__tb_core__DOT__reg_data[2U];
    vlSelf->tb_core__DOT__reg_data[3U] = vlSelf->__Vdly__tb_core__DOT__reg_data[3U];
    vlSelf->tb_core__DOT__reg_data[4U] = vlSelf->__Vdly__tb_core__DOT__reg_data[4U];
    vlSelf->tb_core__DOT__reg_data[5U] = vlSelf->__Vdly__tb_core__DOT__reg_data[5U];
    vlSelf->tb_core__DOT__reg_data[6U] = vlSelf->__Vdly__tb_core__DOT__reg_data[6U];
    vlSelf->tb_core__DOT__reg_data[7U] = vlSelf->__Vdly__tb_core__DOT__reg_data[7U];
    vlSelf->tb_core__DOT__reg_data[8U] = vlSelf->__Vdly__tb_core__DOT__reg_data[8U];
    vlSelf->tb_core__DOT__reg_data[9U] = vlSelf->__Vdly__tb_core__DOT__reg_data[9U];
    vlSelf->tb_core__DOT__reg_data[0xaU] = vlSelf->__Vdly__tb_core__DOT__reg_data[0xaU];
    vlSelf->tb_core__DOT__reg_data[0xbU] = vlSelf->__Vdly__tb_core__DOT__reg_data[0xbU];
    vlSelf->tb_core__DOT__reg_data[0xcU] = vlSelf->__Vdly__tb_core__DOT__reg_data[0xcU];
    vlSelf->tb_core__DOT__reg_data[0xdU] = vlSelf->__Vdly__tb_core__DOT__reg_data[0xdU];
    vlSelf->tb_core__DOT__reg_data[0xeU] = vlSelf->__Vdly__tb_core__DOT__reg_data[0xeU];
    vlSelf->tb_core__DOT__reg_data[0xfU] = vlSelf->__Vdly__tb_core__DOT__reg_data[0xfU];
    vlSelf->tb_core__DOT__reg_data[0x10U] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x10U];
    vlSelf->tb_core__DOT__reg_data[0x11U] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x11U];
    vlSelf->tb_core__DOT__reg_data[0x12U] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x12U];
    vlSelf->tb_core__DOT__reg_data[0x13U] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x13U];
    vlSelf->tb_core__DOT__reg_data[0x14U] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x14U];
    vlSelf->tb_core__DOT__reg_data[0x15U] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x15U];
    vlSelf->tb_core__DOT__reg_data[0x16U] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x16U];
    vlSelf->tb_core__DOT__reg_data[0x17U] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x17U];
    vlSelf->tb_core__DOT__reg_data[0x18U] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x18U];
    vlSelf->tb_core__DOT__reg_data[0x19U] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x19U];
    vlSelf->tb_core__DOT__reg_data[0x1aU] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x1aU];
    vlSelf->tb_core__DOT__reg_data[0x1bU] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x1bU];
    vlSelf->tb_core__DOT__reg_data[0x1cU] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x1cU];
    vlSelf->tb_core__DOT__reg_data[0x1dU] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x1dU];
    vlSelf->tb_core__DOT__reg_data[0x1eU] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x1eU];
    vlSelf->tb_core__DOT__reg_data[0x1fU] = vlSelf->__Vdly__tb_core__DOT__reg_data[0x1fU];
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__257__PROF__tb_core__l130(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__257__PROF__tb_core__l130\n"); );
    // Body
    vlSelf->tb_core__DOT__parity_gen = vlSelf->__Vdly__tb_core__DOT__parity_gen;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__258__PROF__util_axis_uart_rx__l209(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__258__PROF__util_axis_uart_rx__l209\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_hold_rx 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_hold_rx;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__259__PROF__util_uart_baud_gen__l55(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__259__PROF__util_uart_baud_gen__l55\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_rx__DOT__counter 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_rx__DOT__counter;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__263__PROF__util_axis_1553_string_encoder__l78(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__263__PROF__util_axis_1553_string_encoder__l78\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__p_m_axis_tready 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__string_encoder__DOT__p_m_axis_tready;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__274__PROF__util_fifo_ctrl__l175(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__274__PROF__util_fifo_ctrl__l175\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__275__PROF__util_fifo_ctrl__l323(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__275__PROF__util_fifo_ctrl__l323\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__278__PROF__util_axis_uart_tx__l198(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__278__PROF__util_axis_uart_tx__l198\n"); );
    // Body
    if (vlSelf->tb_core__DOT__tb_rst) {
        vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_fin = 0U;
        vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__reg_txd = 1U;
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_counter = 0U;
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__prev_trans_counter = 0U;
    } else if ((4U == (IData)(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__state))) {
        if (vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_tx__DOT__r_uart_ena) {
            vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__reg_txd 
                = ((9U >= (IData)(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_counter)) 
                   & ((IData)(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__reg_data) 
                      >> (IData)(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_counter)));
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_counter)));
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__prev_trans_counter 
                = vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_counter;
        }
        if (((9U == (IData)(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_counter)) 
             & (9U == (IData)(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__prev_trans_counter)))) {
            vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_fin = 1U;
        }
        if ((9U == (IData)(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_counter))) {
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_counter = 9U;
        }
    } else {
        vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__reg_txd = 1U;
        vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_fin = 0U;
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_counter = 0U;
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__prev_trans_counter = 0U;
    }
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__279__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__279__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[0U] 
        = (0xffU & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[0U]);
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__280__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__280__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[1U] 
        = (0xffU & (vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[0U] 
                    >> 8U));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__281__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__281__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[2U] 
        = (0xffU & (vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[0U] 
                    >> 0x10U));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__282__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__282__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[3U] 
        = (vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[0U] 
           >> 0x18U);
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__283__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__283__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[4U] 
        = (0xffU & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[1U]);
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__284__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__284__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[5U] 
        = (0xffU & (vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[1U] 
                    >> 8U));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__285__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__285__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[6U] 
        = (0xffU & (vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[1U] 
                    >> 0x10U));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__286__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__286__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[7U] 
        = (vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[1U] 
           >> 0x18U);
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__287__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__287__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[8U] 
        = (0xffU & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[2U]);
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__288__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__288__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[9U] 
        = (0xffU & (vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[2U] 
                    >> 8U));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__289__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__289__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[0xaU] 
        = (0xffU & (vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[2U] 
                    >> 0x10U));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__290__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__290__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[0xbU] 
        = (vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[2U] 
           >> 0x18U);
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__291__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__291__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[0xcU] 
        = (0xffU & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[3U]);
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__292__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__292__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[0xdU] 
        = (0xffU & (vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[3U] 
                    >> 8U));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__293__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__293__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[0xeU] 
        = (0xffU & (vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[3U] 
                    >> 0x10U));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__294__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__294__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[0xfU] 
        = (vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[3U] 
           >> 0x18U);
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__295__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__295__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[0x10U] 
        = (0xffU & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[4U]);
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__296__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__296__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[0x11U] 
        = (0xffU & (vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[4U] 
                    >> 8U));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__297__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__297__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[0x12U] 
        = (0xffU & (vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[4U] 
                    >> 0x10U));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__298__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__298__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[0x13U] 
        = (vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[4U] 
           >> 0x18U);
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__299__PROF__util_axis_data_width_converter__l139(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__299__PROF__util_axis_data_width_converter__l139\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[0x14U] 
        = (0xffU & vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata[5U]);
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__300__PROF__util_fifo_ctrl__l174(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__300__PROF__util_fifo_ctrl__l174\n"); );
    // Body
    if (vlSelf->tb_core__DOT__tb_rst) {
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 0U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_valid = 0U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_empty = 1U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem = 0U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_fwft_count = 0U;
    } else if ((0U == (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state))) {
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 0U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_empty = 1U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_valid = 0U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem = 0U;
        if (((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_head) 
             != (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail))) {
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 1U;
            vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem = 1U;
        }
    } else if ((1U == (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state))) {
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 1U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_empty = 0U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_valid = 1U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem = 0U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_fwft_count = 1U;
        if (vlSelf->tb_core__DOT__dut__DOT__mfifo_encoder_ready) {
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 2U;
            if (((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_head) 
                 == (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail))) {
                vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 0U;
                vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_fwft_count = 0U;
                vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_empty = 1U;
                vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_valid = 0U;
                vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem = 0U;
            }
        }
    } else if ((2U == (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state))) {
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 2U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_empty = 0U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_valid = 1U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem = 0U;
        if ((((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_head) 
              == (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail)) 
             & (IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_encoder_ready))) {
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state = 0U;
            vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_fwft_count = 0U;
            vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_empty = 1U;
            vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_valid = 0U;
            vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem = 0U;
        }
    }
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__301__PROF__util_axis_fifo_ctrl__l98(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__301__PROF__util_axis_fifo_ctrl__l98\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_valid 
        = ((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_control__DOT__r_rd_valid) 
           | (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_valid));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__302__PROF__util_fifo_ctrl__l321(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__302__PROF__util_fifo_ctrl__l321\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_head 
        = ((IData)(vlSelf->tb_core__DOT__tb_rst) ? 0U
            : (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__head));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__303__PROF__util_axis_uart_tx__l114(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__303__PROF__util_axis_uart_tx__l114\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__reg_data 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__reg_data;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__306__PROF__util_axis_uart_tx__l201(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__306__PROF__util_axis_uart_tx__l201\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_counter 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_counter;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__307__PROF__util_axis_uart_tx__l202(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__307__PROF__util_axis_uart_tx__l202\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__prev_trans_counter 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__prev_trans_counter;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__308__PROF__util_axis_uart_tx__l112(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__308__PROF__util_axis_uart_tx__l112\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__state 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__state;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__313__PROF__util_fifo_ctrl__l175(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__313__PROF__util_fifo_ctrl__l175\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__314__PROF__util_fifo_ctrl__l323(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__314__PROF__util_fifo_ctrl__l323\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__317__PROF__util_axis_fifo_ctrl__l97(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__317__PROF__util_axis_fifo_ctrl__l97\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_data 
        = ((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_valid)
            ? ((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_valid)
                ? (0xffffU & (vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_data 
                              >> 0xcU)) : 0U) : 0U);
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__318__PROF__util_axis_fifo_ctrl__l101(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__318__PROF__util_axis_fifo_ctrl__l101\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_user 
        = ((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_valid)
            ? ((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_valid)
                ? (0xffU & (vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_data 
                            >> 2U)) : 0U) : 0U);
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__321__PROF__util_uart_baud_gen__l54(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__321__PROF__util_uart_baud_gen__l54\n"); );
    // Body
    if (vlSelf->tb_core__DOT__tb_rst) {
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_tx__DOT__counter = 0x2ebae40U;
        vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_tx__DOT__r_uart_ena = 0U;
    } else {
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_tx__DOT__counter 
            = (0x7ffffffU & ((IData)(0xf4240U) + vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_tx__DOT__counter));
        vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_tx__DOT__r_uart_ena = 0U;
        if ((0x2ebae40U <= vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_tx__DOT__counter)) {
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_tx__DOT__counter 
                = (0x7ffffffU & VL_MODDIV_III(32, vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_tx__DOT__counter, (IData)(0x2ebae40U)));
            vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_tx__DOT__r_uart_ena = 1U;
        }
    }
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__322__PROF__util_axis_fifo_ctrl__l98(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__322__PROF__util_axis_fifo_ctrl__l98\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__mfifo_encoder_valid 
        = ((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_control__DOT__r_rd_valid) 
           | (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_valid));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__323__PROF__util_fifo_ctrl__l321(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__323__PROF__util_fifo_ctrl__l321\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_head 
        = ((IData)(vlSelf->tb_core__DOT__tb_rst) ? 0U
            : (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__head));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__324__PROF__util_fifo_ctrl__l342(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__324__PROF__util_fifo_ctrl__l342\n"); );
    // Body
    if (vlSelf->tb_core__DOT__tb_rst) {
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__head = 0U;
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_head = 0U;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_gr_head = 0U;
    } else if (((((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__wr_tail) 
                  - (IData)(1U)) != (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_head)) 
                & (IData)(vlSelf->tb_core__DOT__dut__DOT__m1553_decoder_valid))) {
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__head 
            = vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_head;
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_head 
            = vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_head;
        vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_gr_head 
            = ((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_head) 
               ^ (0x7fU & ((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_head) 
                           >> 1U)));
    }
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__325__PROF__util_uart_baud_gen__l55(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__325__PROF__util_uart_baud_gen__l55\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_tx__DOT__counter 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_tx__DOT__counter;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__330__PROF__axis_1553_decoder__l82(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__330__PROF__axis_1553_decoder__l82\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__m1553_decoder_valid 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__m1553_decoder_valid;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__332__PROF__util_fifo_ctrl__l345(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__332__PROF__util_fifo_ctrl__l345\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_head 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_head;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__334__PROF__util_fifo_ctrl__l342(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__334__PROF__util_fifo_ctrl__l342\n"); );
    // Body
    if (vlSelf->tb_core__DOT__tb_rst) {
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__head = 0U;
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_head = 0U;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_gr_head = 0U;
    } else if (((((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__wr_tail) 
                  - (IData)(1U)) != (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_head)) 
                & (IData)(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_valid))) {
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__head 
            = vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_head;
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_head 
            = vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_head;
        vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_gr_head 
            = ((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_head) 
               ^ (0x7fU & ((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_head) 
                           >> 1U)));
    }
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__335__PROF__util_fifo_ctrl__l150(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__335__PROF__util_fifo_ctrl__l150\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_head 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__head)));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__336__PROF__util_fifo_ctrl__l343(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__336__PROF__util_fifo_ctrl__l343\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__wr_tail 
        = ((IData)(vlSelf->tb_core__DOT__tb_rst) ? 0U
            : (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__tail));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__339__PROF__util_fifo_ctrl__l345(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__339__PROF__util_fifo_ctrl__l345\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_head 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_head;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__342__PROF__util_fifo_ctrl__l322(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__342__PROF__util_fifo_ctrl__l322\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__tail 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__tail;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__344__PROF__util_fifo_ctrl__l150(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__344__PROF__util_fifo_ctrl__l150\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_head 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__head)));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__345__PROF__util_fifo_ctrl__l343(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__345__PROF__util_fifo_ctrl__l343\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__wr_tail 
        = ((IData)(vlSelf->tb_core__DOT__tb_rst) ? 0U
            : (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__tail));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__346__PROF__util_axis_1553_string_decoder__l77(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__346__PROF__util_axis_1553_string_decoder__l77\n"); );
    // Body
    if (vlSelf->tb_core__DOT__tb_rst) {
        vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_data = 0U;
        vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_valid = 0U;
        vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user = 0U;
        vlSelf->__Vdly__tb_core__DOT__dut__DOT__string_decoder__DOT__p_m_axis_tready = 0U;
        vlSelf->tb_core__DOT__dut__DOT__string_decoder__DOT__force_s_axis_tready = 0U;
    } else {
        vlSelf->tb_core__DOT__dut__DOT__string_decoder__DOT__force_s_axis_tready = 0U;
        if ((1U & (~ (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_wr_full)))) {
            vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_data = 0U;
            vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_valid = 0U;
            vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user = 0U;
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__string_decoder__DOT__p_m_axis_tready = 0U;
        }
        if (((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid) 
             & ((~ (IData)(vlSelf->tb_core__DOT__dut__DOT__string_decoder__DOT__p_m_axis_tready)) 
                | (~ (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_wr_full))))) {
            vlSelf->__Vdly__tb_core__DOT__dut__DOT__string_decoder__DOT__p_m_axis_tready 
                = (1U & (~ (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_wr_full)));
            vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_valid = 1U;
            vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user 
                = ((0x1fU & (IData)(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user)) 
                   | (((0x44415441U == ((vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[5U] 
                                         << 0x18U) 
                                        | (vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[4U] 
                                           >> 8U)))
                        ? 2U : ((0x434d4453U == ((vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[5U] 
                                                  << 0x18U) 
                                                 | (vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[4U] 
                                                    >> 8U)))
                                 ? 4U : 0U)) << 5U));
            vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_data 
                = ((0xfffU & (IData)(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_data)) 
                   | (0xf000U & (((0xaU > ((0xffU & 
                                            vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[1U]) 
                                           - (IData)(0x30U)))
                                   ? ((0xffU & vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[1U]) 
                                      - (IData)(0x30U))
                                   : ((0xffU & vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[1U]) 
                                      - (IData)(0x37U))) 
                                 << 0xcU)));
            if ((0xdU != (0xffU & vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[0U]))) {
                vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_valid = 0U;
                vlSelf->tb_core__DOT__dut__DOT__string_decoder__DOT__force_s_axis_tready = 1U;
            }
            vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user 
                = (0xfbU & (IData)(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user));
            vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_data 
                = ((0xf0ffU & (IData)(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_data)) 
                   | (0xf00U & (((0xaU > ((vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[0U] 
                                           >> 0x18U) 
                                          - (IData)(0x30U)))
                                  ? ((vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[0U] 
                                      >> 0x18U) - (IData)(0x30U))
                                  : ((vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[0U] 
                                      >> 0x18U) - (IData)(0x37U))) 
                                << 8U)));
            if ((0x4431U == (vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[3U] 
                             >> 0x10U))) {
                vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user 
                    = (4U | (IData)(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user));
            }
            vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_data 
                = ((0xff0fU & (IData)(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_data)) 
                   | (0xf0U & (((0xaU > ((0xffU & (
                                                   vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[0U] 
                                                   >> 0x10U)) 
                                         - (IData)(0x30U)))
                                 ? ((0xffU & (vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[0U] 
                                              >> 0x10U)) 
                                    - (IData)(0x30U))
                                 : ((0xffU & (vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[0U] 
                                              >> 0x10U)) 
                                    - (IData)(0x37U))) 
                               << 4U)));
            vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user 
                = (0xfeU & (IData)(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user));
            vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_data 
                = ((0xfff0U & (IData)(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_data)) 
                   | (0xfU & ((0xaU > ((0xffU & (vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[0U] 
                                                 >> 8U)) 
                                       - (IData)(0x30U)))
                               ? ((0xffU & (vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[0U] 
                                            >> 8U)) 
                                  - (IData)(0x30U))
                               : ((0xffU & (vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[0U] 
                                            >> 8U)) 
                                  - (IData)(0x37U)))));
            if ((0x5031U == (0xffffU & ((vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[3U] 
                                         << 8U) | (
                                                   vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[2U] 
                                                   >> 0x18U))))) {
                vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user 
                    = (1U | (IData)(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user));
            }
            vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user 
                = (0xfdU & (IData)(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user));
            if ((0x4931U == (0xffffU & vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[2U]))) {
                vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user 
                    = (2U | (IData)(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user));
            }
        }
    }
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__347__PROF__util_fifo_ctrl__l152(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__347__PROF__util_fifo_ctrl__l152\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_tail 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__tail)));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__348__PROF__util_fifo_ctrl__l146(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__348__PROF__util_fifo_ctrl__l146\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_wr_full 
        = (((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__wr_tail) 
            - (IData)(1U)) == (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_head));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__349__PROF__util_fifo_ctrl__l322(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__349__PROF__util_fifo_ctrl__l322\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__tail 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__tail;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__354__PROF__util_axis_1553_string_decoder__l81(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__354__PROF__util_axis_1553_string_decoder__l81\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__string_decoder__DOT__p_m_axis_tready 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__string_decoder__DOT__p_m_axis_tready;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__355__PROF__util_axis_char_to_string_converter__l81(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__355__PROF__util_axis_char_to_string_converter__l81\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid 
        = vlSelf->__Vdly__tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid;
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__357__PROF__util_fifo_ctrl__l152(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__357__PROF__util_fifo_ctrl__l152\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_tail 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__tail)));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__358__PROF__util_fifo_ctrl__l146(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__358__PROF__util_fifo_ctrl__l146\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_wr_full 
        = (((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__wr_tail) 
            - (IData)(1U)) == (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_head));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__359__PROF__util_axis_char_to_string_converter__l71(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__359__PROF__util_axis_char_to_string_converter__l71\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h3e1f1e26__0;
    // Body
    __Vtemp_h3e1f1e26__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                           ? 
                                                          vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                          [7U]
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                              ? 
                                                             vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                             [6U]
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                                 ? 
                                                                vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                                [5U]
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                                    ? 
                                                                   vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                                   [4U]
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                                       ? 
                                                                      vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                                      [3U]
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                                          ? 
                                                                         vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                                         [2U]
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                                             ? 
                                                                            vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                                            [1U]
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                                              ? 
                                                                             vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                                             [0U]
                                                                              : 0U)))))))))));
    __Vtemp_h3e1f1e26__0[1U] = (IData)(((((QData)((IData)(
                                                          ((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                            ? 
                                                           vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                           [7U]
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                               ? 
                                                              vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                              [6U]
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                                  ? 
                                                                 vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                                 [5U]
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                                     ? 
                                                                    vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                                    [4U]
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                                        ? 
                                                                       vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                                       [3U]
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                                           ? 
                                                                          vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                                          [2U]
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                                              ? 
                                                                             vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                                             [1U]
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                                               ? 
                                                                              vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                                              [0U]
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[0U] 
        = __Vtemp_h3e1f1e26__0[0U];
    vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[1U] 
        = __Vtemp_h3e1f1e26__0[1U];
    vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[2U] 
        = ((((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
              ? vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
             [0xbU] : 0U) << 0x18U) | ((((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                          ? vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                         [0xaU] : 0U) 
                                        << 0x10U) | 
                                       ((((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                           ? vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                          [9U] : 0U) 
                                         << 8U) | ((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                    ? 
                                                   vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                   [8U]
                                                    : 0U))));
    vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[3U] 
        = ((((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
              ? vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
             [0xfU] : 0U) << 0x18U) | ((((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                          ? vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                         [0xeU] : 0U) 
                                        << 0x10U) | 
                                       ((((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                           ? vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                          [0xdU] : 0U) 
                                         << 8U) | ((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                                    ? 
                                                   vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                                   [0xcU]
                                                    : 0U))));
    vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[4U] 
        = ((((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
              ? vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
             [0x13U] : 0U) << 0x18U) | ((((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                           ? vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                          [0x12U] : 0U) 
                                         << 0x10U) 
                                        | ((((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                              ? vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                             [0x11U]
                                              : 0U) 
                                            << 8U) 
                                           | ((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
                                               ? vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
                                              [0x10U]
                                               : 0U))));
    vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data[5U] 
        = ((IData)(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid)
            ? vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer
           [0x14U] : 0U);
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__360__PROF__util_axis_1553_string_decoder__l74(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__360__PROF__util_axis_1553_string_decoder__l74\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_ready 
        = (1U & ((~ (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_wr_full)) 
                 | (IData)(vlSelf->tb_core__DOT__dut__DOT__string_decoder__DOT__force_s_axis_tready)));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__361__PROF__tb_core__l115(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__361__PROF__tb_core__l115\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_core__DOT__tb_data_clk__v0) {
        vlSelf->tb_core__DOT__tb_data_clk = vlSelf->__Vdlyvval__tb_core__DOT__tb_data_clk__v0;
        vlSelf->__Vdlyvset__tb_core__DOT__tb_data_clk__v0 = 0U;
    }
}

void Vtb_core___024root___nba_sequent__TOP__0__PROF__util_uart_baud_gen__l55(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__1__PROF__util_uart_baud_gen__l55(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__2__PROF__axis_1553_encoder__l60(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__3__PROF__util_axis_uart_rx__l99(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__4__PROF__util_axis_uart_rx__l98(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__5__PROF__axis_1553_decoder__l215(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__6__PROF__axis_1553_decoder__l82(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__7__PROF__axis_1553_decoder__l81(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__8__PROF__axis_1553_encoder__l189(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__9__PROF__axis_1553_encoder__l181(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__10__PROF__util_axis_uart_tx__l95(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__11__PROF__tb_core__l130(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__12__PROF__tb_core__l129(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__13__PROF__tb_core__l128(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__14__PROF__tb_core__l127(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__15__PROF__tb_core__l126(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__16__PROF__tb_core__l125(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__17__PROF__util_axis_1553_string_decoder__l81(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__18__PROF__util_axis_char_to_string_converter__l82(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__19__PROF__util_axis_char_to_string_converter__l81(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__20__PROF__util_fifo_ctrl__l345(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__21__PROF__util_axis_uart_tx__l202(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__22__PROF__util_axis_uart_tx__l201(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__23__PROF__util_axis_char_to_string_converter__l83(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__24__PROF__util_axis_char_to_string_converter__l79(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__25__PROF__util_axis_char_to_string_converter__l79(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__26__PROF__util_axis_char_to_string_converter__l94(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__27__PROF__util_axis_char_to_string_converter__l99(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__28__PROF__axis_1553_decoder__l59(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__29__PROF__axis_1553_encoder__l113(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__30__PROF__axis_1553_encoder__l106(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__31__PROF__axis_1553_encoder__l103(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__32__PROF__axis_1553_encoder__l102(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__33__PROF__axis_1553_decoder__l111(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__34__PROF__axis_1553_decoder__l110(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__35__PROF__axis_1553_decoder__l108(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__36__PROF__axis_1553_decoder__l107(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__37__PROF__util_axis_tiny_fifo__l75(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__38__PROF__util_axis_tiny_fifo__l78(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__39__PROF__util_axis_tiny_fifo__l82(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__40__PROF__util_axis_tiny_fifo__l90(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__41__PROF__util_axis_tiny_fifo__l90(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__42__PROF__util_axis_tiny_fifo__l90(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__43__PROF__util_axis_tiny_fifo__l90(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__44__PROF__util_axis_tiny_fifo__l90(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__45__PROF__util_axis_tiny_fifo__l90(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__46__PROF__util_axis_uart_tx__l114(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__47__PROF__util_axis_uart_tx__l112(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__48__PROF__util_fifo_ctrl__l345(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__49__PROF__axis_1553_decoder__l83(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__50__PROF__util_fifo_mem__l61(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__51__PROF__util_axis_1553_string_encoder__l78(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__52__PROF__util_fifo_ctrl__l175(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__53__PROF__axis_1553_decoder__l179(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__54__PROF__axis_1553_decoder__l214(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__55__PROF__util_fifo_ctrl__l175(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__56__PROF__util_axis_uart_rx__l209(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__57__PROF__util_axis_uart_rx__l207(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__58__PROF__util_axis_uart_rx__l206(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__59__PROF__util_axis_uart_rx__l204(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__60__PROF__util_fifo_ctrl__l323(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__61__PROF__util_fifo_ctrl__l322(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__62__PROF__util_fifo_mem__l61(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__63__PROF__util_fifo_ctrl__l323(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__64__PROF__util_fifo_ctrl__l322(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__65__PROF__util_axis_uart_rx__l126(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__66__PROF__util_axis_uart_rx__l125(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__67__PROF__util_axis_uart_rx__l124(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__68__PROF__util_axis_data_width_converter__l158(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__69__PROF__util_axis_data_width_converter__l157(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__70__PROF__util_axis_data_width_converter__l153(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__71__PROF__util_axis_data_width_converter__l153(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__72__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__73__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__74__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__75__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__76__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__77__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__78__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__79__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__80__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__81__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__82__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__83__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__84__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__85__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__86__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__87__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__88__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__89__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__90__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__91__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__92__PROF__util_axis_data_width_converter__l173(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__93__PROF__util_axis_tiny_fifo__l75(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__94__PROF__util_axis_tiny_fifo__l78(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__95__PROF__util_axis_tiny_fifo__l82(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__96__PROF__util_axis_tiny_fifo__l90(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__97__PROF__util_axis_tiny_fifo__l90(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__98__PROF__util_axis_tiny_fifo__l90(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__99__PROF__util_axis_tiny_fifo__l90(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__100__PROF__util_axis_tiny_fifo__l90(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__101__PROF__util_axis_tiny_fifo__l90(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__102__PROF__axis_1553_encoder__l79(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__103__PROF__axis_1553_encoder__l78(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__104__PROF__util_axis_tiny_fifo__l74(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__105__PROF__util_axis_tiny_fifo__l74(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__106__PROF__util_axis_tiny_fifo__l74(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__107__PROF__util_axis_tiny_fifo__l74(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__108__PROF__util_axis_tiny_fifo__l74(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__109__PROF__util_axis_tiny_fifo__l74(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__125__PROF__axis_1553_encoder__l59(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__126__PROF__util_axis_uart_rx__l97(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__127__PROF__util_axis_uart_rx__l97(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__128__PROF__axis_1553_decoder__l213(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__129__PROF__axis_1553_decoder__l80(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__130__PROF__axis_1553_decoder__l80(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__131__PROF__util_axis_uart_tx__l94(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__132__PROF__util_axis_char_to_string_converter__l77(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__133__PROF__axis_1553_decoder__l58(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__134__PROF__axis_1553_encoder__l101(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__135__PROF__util_axis_tiny_fifo__l74(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__136__PROF__axis_1553_decoder__l80(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__137__PROF__util_fifo_mem__l59(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__138__PROF__axis_1553_decoder__l177(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__139__PROF__axis_1553_decoder__l213(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__140__PROF__util_fifo_mem__l59(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__141__PROF__util_axis_uart_rx__l123(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__142__PROF__util_axis_tiny_fifo__l74(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__143__PROF__axis_1553_encoder__l77(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__144__PROF__axis_1553_encoder__l77(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__145__PROF__util_axis_data_width_converter__l151(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__146__PROF__axis_1553_encoder__l180(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__147__PROF__util_axis_uart_tx__l111(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__148__PROF__util_axis_fifo_ctrl__l180(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__149__PROF__util_axis_fifo_ctrl__l180(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__150__PROF__util_fifo_mem__l68(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__151__PROF__util_axis_char_to_string_converter__l82(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__152__PROF__util_axis_char_to_string_converter__l83(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__153__PROF__util_axis_char_to_string_converter__l79(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__154__PROF__axis_1553_encoder__l103(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__155__PROF__axis_1553_encoder__l113(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__156__PROF__axis_1553_encoder__l60(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__158__PROF__util_axis_uart_rx__l99(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__159__PROF__util_axis_uart_rx__l98(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__160__PROF__util_axis_tiny_fifo__l75(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__161__PROF__util_axis_tiny_fifo__l78(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__163__PROF__axis_1553_decoder__l81(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__164__PROF__axis_1553_decoder__l83(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__172__PROF__util_axis_uart_rx__l126(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__173__PROF__util_axis_uart_rx__l125(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__176__PROF__util_axis_tiny_fifo__l78(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__178__PROF__axis_1553_encoder__l79(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__179__PROF__axis_1553_encoder__l78(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__184__PROF__util_axis_uart_tx__l95(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__185__PROF__util_axis_tiny_fifo__l75(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__191__PROF__util_fifo_mem__l61(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__195__PROF__axis_1553_encoder__l178(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__196__PROF__axis_1553_decoder__l106(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__197__PROF__util_fifo_ctrl__l347(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__198__PROF__axis_1553_decoder__l177(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__199__PROF__util_fifo_ctrl__l347(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__200__PROF__util_axis_uart_rx__l202(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__201__PROF__util_axis_data_width_converter__l151(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__202__PROF__util_fifo_mem__l68(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__203__PROF__util_fifo_ctrl__l325(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__204__PROF__util_fifo_ctrl__l320(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__207__PROF__axis_1553_encoder__l181(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__208__PROF__axis_1553_encoder__l189(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__209__PROF__axis_1553_encoder__l106(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__210__PROF__axis_1553_encoder__l102(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__212__PROF__axis_1553_decoder__l110(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__213__PROF__axis_1553_decoder__l111(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__214__PROF__axis_1553_decoder__l108(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__215__PROF__axis_1553_decoder__l214(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__216__PROF__axis_1553_decoder__l215(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__217__PROF__axis_1553_decoder__l59(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__218__PROF__axis_1553_decoder__l179(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__221__PROF__axis_1553_decoder__l107(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__225__PROF__util_axis_uart_rx__l204(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__226__PROF__util_axis_uart_rx__l206(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__227__PROF__util_axis_uart_rx__l207(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__229__PROF__util_axis_uart_rx__l124(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__233__PROF__util_axis_data_width_converter__l158(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__234__PROF__util_axis_data_width_converter__l157(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__235__PROF__util_axis_data_width_converter__l153(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__238__PROF__util_fifo_mem__l61(Vtb_core___024root* vlSelf);
void Vtb_core___024root___nba_sequent__TOP__244__PROF__tb_core__l123(Vtb_core___024root* vlSelf);
void Vtb_core___024root___act_sequent__TOP__0__PROF__axis_1553_encoder__l56(Vtb_core___024root* vlSelf);
void Vtb_core___024root___act_sequent__TOP__2__PROF__util_axis_uart_tx__l90(Vtb_core___024root* vlSelf);
void Vtb_core___024root___act_sequent__TOP__1__PROF__util_axis_char_to_string_converter__l63(Vtb_core___024root* vlSelf);
void Vtb_core___024root___act_sequent__TOP__4__PROF__util_axis_tiny_fifo__l66(Vtb_core___024root* vlSelf);
void Vtb_core___024root___act_sequent__TOP__3__PROF__util_axis_tiny_fifo__l66(Vtb_core___024root* vlSelf);
void Vtb_core___024root___act_sequent__TOP__5__PROF__util_axis_1553_string_encoder__l73(Vtb_core___024root* vlSelf);

void Vtb_core___024root___eval_nba(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtb_core___024root___nba_sequent__TOP__0__PROF__util_uart_baud_gen__l55(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vtb_core___024root___nba_sequent__TOP__1__PROF__util_uart_baud_gen__l55(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__2__PROF__axis_1553_encoder__l60(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__3__PROF__util_axis_uart_rx__l99(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__4__PROF__util_axis_uart_rx__l98(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__5__PROF__axis_1553_decoder__l215(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__6__PROF__axis_1553_decoder__l82(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__7__PROF__axis_1553_decoder__l81(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__8__PROF__axis_1553_encoder__l189(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__9__PROF__axis_1553_encoder__l181(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__10__PROF__util_axis_uart_tx__l95(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__11__PROF__tb_core__l130(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__12__PROF__tb_core__l129(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__13__PROF__tb_core__l128(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__14__PROF__tb_core__l127(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__15__PROF__tb_core__l126(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__16__PROF__tb_core__l125(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__17__PROF__util_axis_1553_string_decoder__l81(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__18__PROF__util_axis_char_to_string_converter__l82(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__19__PROF__util_axis_char_to_string_converter__l81(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__20__PROF__util_fifo_ctrl__l345(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__21__PROF__util_axis_uart_tx__l202(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__22__PROF__util_axis_uart_tx__l201(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__23__PROF__util_axis_char_to_string_converter__l83(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__24__PROF__util_axis_char_to_string_converter__l79(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__25__PROF__util_axis_char_to_string_converter__l79(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__26__PROF__util_axis_char_to_string_converter__l94(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__27__PROF__util_axis_char_to_string_converter__l99(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__28__PROF__axis_1553_decoder__l59(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__29__PROF__axis_1553_encoder__l113(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__30__PROF__axis_1553_encoder__l106(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__31__PROF__axis_1553_encoder__l103(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__32__PROF__axis_1553_encoder__l102(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__33__PROF__axis_1553_decoder__l111(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__34__PROF__axis_1553_decoder__l110(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__35__PROF__axis_1553_decoder__l108(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__36__PROF__axis_1553_decoder__l107(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__37__PROF__util_axis_tiny_fifo__l75(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__38__PROF__util_axis_tiny_fifo__l78(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__39__PROF__util_axis_tiny_fifo__l82(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__40__PROF__util_axis_tiny_fifo__l90(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__41__PROF__util_axis_tiny_fifo__l90(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__42__PROF__util_axis_tiny_fifo__l90(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__43__PROF__util_axis_tiny_fifo__l90(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__44__PROF__util_axis_tiny_fifo__l90(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__45__PROF__util_axis_tiny_fifo__l90(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__46__PROF__util_axis_uart_tx__l114(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__47__PROF__util_axis_uart_tx__l112(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__48__PROF__util_fifo_ctrl__l345(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__49__PROF__axis_1553_decoder__l83(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__50__PROF__util_fifo_mem__l61(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__51__PROF__util_axis_1553_string_encoder__l78(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__52__PROF__util_fifo_ctrl__l175(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__53__PROF__axis_1553_decoder__l179(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__54__PROF__axis_1553_decoder__l214(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__55__PROF__util_fifo_ctrl__l175(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__56__PROF__util_axis_uart_rx__l209(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__57__PROF__util_axis_uart_rx__l207(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__58__PROF__util_axis_uart_rx__l206(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__59__PROF__util_axis_uart_rx__l204(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__60__PROF__util_fifo_ctrl__l323(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__61__PROF__util_fifo_ctrl__l322(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__62__PROF__util_fifo_mem__l61(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__63__PROF__util_fifo_ctrl__l323(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__64__PROF__util_fifo_ctrl__l322(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__65__PROF__util_axis_uart_rx__l126(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__66__PROF__util_axis_uart_rx__l125(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__67__PROF__util_axis_uart_rx__l124(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__68__PROF__util_axis_data_width_converter__l158(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__69__PROF__util_axis_data_width_converter__l157(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__70__PROF__util_axis_data_width_converter__l153(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__71__PROF__util_axis_data_width_converter__l153(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__72__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__73__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__74__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__75__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__76__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__77__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__78__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__79__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__80__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__81__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__82__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__83__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__84__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__85__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__86__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__87__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__88__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__89__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__90__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__91__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__92__PROF__util_axis_data_width_converter__l173(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__93__PROF__util_axis_tiny_fifo__l75(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__94__PROF__util_axis_tiny_fifo__l78(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__95__PROF__util_axis_tiny_fifo__l82(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__96__PROF__util_axis_tiny_fifo__l90(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__97__PROF__util_axis_tiny_fifo__l90(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__98__PROF__util_axis_tiny_fifo__l90(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__99__PROF__util_axis_tiny_fifo__l90(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__100__PROF__util_axis_tiny_fifo__l90(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__101__PROF__util_axis_tiny_fifo__l90(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__102__PROF__axis_1553_encoder__l79(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__103__PROF__axis_1553_encoder__l78(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__104__PROF__util_axis_tiny_fifo__l74(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__105__PROF__util_axis_tiny_fifo__l74(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__106__PROF__util_axis_tiny_fifo__l74(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__107__PROF__util_axis_tiny_fifo__l74(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__108__PROF__util_axis_tiny_fifo__l74(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__109__PROF__util_axis_tiny_fifo__l74(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__125__PROF__axis_1553_encoder__l59(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__126__PROF__util_axis_uart_rx__l97(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__127__PROF__util_axis_uart_rx__l97(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__128__PROF__axis_1553_decoder__l213(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__129__PROF__axis_1553_decoder__l80(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__130__PROF__axis_1553_decoder__l80(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__131__PROF__util_axis_uart_tx__l94(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__132__PROF__util_axis_char_to_string_converter__l77(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__133__PROF__axis_1553_decoder__l58(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__134__PROF__axis_1553_encoder__l101(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__135__PROF__util_axis_tiny_fifo__l74(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__136__PROF__axis_1553_decoder__l80(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__137__PROF__util_fifo_mem__l59(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__138__PROF__axis_1553_decoder__l177(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__139__PROF__axis_1553_decoder__l213(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__140__PROF__util_fifo_mem__l59(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__141__PROF__util_axis_uart_rx__l123(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__142__PROF__util_axis_tiny_fifo__l74(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__143__PROF__axis_1553_encoder__l77(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__144__PROF__axis_1553_encoder__l77(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__145__PROF__util_axis_data_width_converter__l151(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__146__PROF__axis_1553_encoder__l180(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__147__PROF__util_axis_uart_tx__l111(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__148__PROF__util_axis_fifo_ctrl__l180(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__149__PROF__util_axis_fifo_ctrl__l180(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__150__PROF__util_fifo_mem__l68(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__151__PROF__util_axis_char_to_string_converter__l82(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__152__PROF__util_axis_char_to_string_converter__l83(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__153__PROF__util_axis_char_to_string_converter__l79(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__154__PROF__axis_1553_encoder__l103(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__155__PROF__axis_1553_encoder__l113(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__156__PROF__axis_1553_encoder__l60(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__158__PROF__util_axis_uart_rx__l99(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__159__PROF__util_axis_uart_rx__l98(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__160__PROF__util_axis_tiny_fifo__l75(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__161__PROF__util_axis_tiny_fifo__l78(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__163__PROF__axis_1553_decoder__l81(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__164__PROF__axis_1553_decoder__l83(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__172__PROF__util_axis_uart_rx__l126(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__173__PROF__util_axis_uart_rx__l125(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__176__PROF__util_axis_tiny_fifo__l78(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__178__PROF__axis_1553_encoder__l79(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__179__PROF__axis_1553_encoder__l78(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__184__PROF__util_axis_uart_tx__l95(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__185__PROF__util_axis_tiny_fifo__l75(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__191__PROF__util_fifo_mem__l61(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__195__PROF__axis_1553_encoder__l178(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__196__PROF__axis_1553_decoder__l106(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__197__PROF__util_fifo_ctrl__l347(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__198__PROF__axis_1553_decoder__l177(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__199__PROF__util_fifo_ctrl__l347(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__200__PROF__util_axis_uart_rx__l202(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__201__PROF__util_axis_data_width_converter__l151(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__202__PROF__util_fifo_mem__l68(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__203__PROF__util_fifo_ctrl__l325(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__204__PROF__util_fifo_ctrl__l320(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__207__PROF__axis_1553_encoder__l181(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__208__PROF__axis_1553_encoder__l189(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__209__PROF__axis_1553_encoder__l106(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__210__PROF__axis_1553_encoder__l102(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__212__PROF__axis_1553_decoder__l110(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__213__PROF__axis_1553_decoder__l111(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__214__PROF__axis_1553_decoder__l108(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__215__PROF__axis_1553_decoder__l214(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__216__PROF__axis_1553_decoder__l215(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__217__PROF__axis_1553_decoder__l59(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__218__PROF__axis_1553_decoder__l179(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__221__PROF__axis_1553_decoder__l107(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__225__PROF__util_axis_uart_rx__l204(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__226__PROF__util_axis_uart_rx__l206(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__227__PROF__util_axis_uart_rx__l207(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__229__PROF__util_axis_uart_rx__l124(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__233__PROF__util_axis_data_width_converter__l158(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__234__PROF__util_axis_data_width_converter__l157(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__235__PROF__util_axis_data_width_converter__l153(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__238__PROF__util_fifo_mem__l61(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__244__PROF__tb_core__l123(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__245__PROF__util_uart_baud_gen__l54(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__246__PROF__util_axis_uart_rx__l205(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__247__PROF__util_axis_1553_string_encoder__l76(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__248__PROF__util_fifo_ctrl__l325(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__249__PROF__util_fifo_ctrl__l320(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__250__PROF__util_fifo_ctrl__l174(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__252__PROF__tb_core__l125(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__253__PROF__tb_core__l126(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__254__PROF__tb_core__l127(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__255__PROF__tb_core__l128(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__256__PROF__tb_core__l129(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__257__PROF__tb_core__l130(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__258__PROF__util_axis_uart_rx__l209(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__259__PROF__util_uart_baud_gen__l55(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__263__PROF__util_axis_1553_string_encoder__l78(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__274__PROF__util_fifo_ctrl__l175(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__275__PROF__util_fifo_ctrl__l323(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__278__PROF__util_axis_uart_tx__l198(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__279__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__280__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__281__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__282__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__283__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__284__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__285__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__286__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__287__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__288__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__289__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__290__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__291__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__292__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__293__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__294__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__295__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__296__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__297__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__298__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__299__PROF__util_axis_data_width_converter__l139(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__300__PROF__util_fifo_ctrl__l174(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__301__PROF__util_axis_fifo_ctrl__l98(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__302__PROF__util_fifo_ctrl__l321(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__303__PROF__util_axis_uart_tx__l114(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__306__PROF__util_axis_uart_tx__l201(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__307__PROF__util_axis_uart_tx__l202(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__308__PROF__util_axis_uart_tx__l112(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__313__PROF__util_fifo_ctrl__l175(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__314__PROF__util_fifo_ctrl__l323(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__317__PROF__util_axis_fifo_ctrl__l97(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__318__PROF__util_axis_fifo_ctrl__l101(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__321__PROF__util_uart_baud_gen__l54(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__322__PROF__util_axis_fifo_ctrl__l98(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__323__PROF__util_fifo_ctrl__l321(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__324__PROF__util_fifo_ctrl__l342(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__325__PROF__util_uart_baud_gen__l55(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__330__PROF__axis_1553_decoder__l82(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__332__PROF__util_fifo_ctrl__l345(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__334__PROF__util_fifo_ctrl__l342(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__335__PROF__util_fifo_ctrl__l150(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__336__PROF__util_fifo_ctrl__l343(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__339__PROF__util_fifo_ctrl__l345(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__342__PROF__util_fifo_ctrl__l322(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__344__PROF__util_fifo_ctrl__l150(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__345__PROF__util_fifo_ctrl__l343(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__346__PROF__util_axis_1553_string_decoder__l77(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__347__PROF__util_fifo_ctrl__l152(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__348__PROF__util_fifo_ctrl__l146(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__349__PROF__util_fifo_ctrl__l322(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__354__PROF__util_axis_1553_string_decoder__l81(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__355__PROF__util_axis_char_to_string_converter__l81(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__357__PROF__util_fifo_ctrl__l152(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__358__PROF__util_fifo_ctrl__l146(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__359__PROF__util_axis_char_to_string_converter__l71(vlSelf);
        Vtb_core___024root___nba_sequent__TOP__360__PROF__util_axis_1553_string_decoder__l74(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtb_core___024root___nba_sequent__TOP__361__PROF__tb_core__l115(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtb_core___024root___act_sequent__TOP__0__PROF__axis_1553_encoder__l56(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vtb_core___024root___act_sequent__TOP__2__PROF__util_axis_uart_tx__l90(vlSelf);
        Vtb_core___024root___act_sequent__TOP__1__PROF__util_axis_char_to_string_converter__l63(vlSelf);
        Vtb_core___024root___act_sequent__TOP__4__PROF__util_axis_tiny_fifo__l66(vlSelf);
        Vtb_core___024root___act_sequent__TOP__3__PROF__util_axis_tiny_fifo__l66(vlSelf);
        Vtb_core___024root___act_sequent__TOP__5__PROF__util_axis_1553_string_encoder__l73(vlSelf);
    }
}

void Vtb_core___024root___eval_triggers__act(Vtb_core___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__act(Vtb_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_core___024root___timing_resume(Vtb_core___024root* vlSelf);
void Vtb_core___024root___eval_act(Vtb_core___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__nba(Vtb_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_core___024root___eval(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval\n"); );
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
            Vtb_core___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_core___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../vtb/tb_core.v", 15, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb_core___024root___timing_resume(vlSelf);
                Vtb_core___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_core___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../vtb/tb_core.v", 15, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_core___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_core___024root___timing_resume(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtb_core___024root___eval_debug_assertions(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
