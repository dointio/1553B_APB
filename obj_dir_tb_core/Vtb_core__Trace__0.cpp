// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_core__Syms.h"


void Vtb_core___024root__trace_chg_sub_0(Vtb_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_core___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_core___024root*>(voidSelf);
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_core___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_core___024root__trace_chg_sub_0(Vtb_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U & (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_data_count))));
        bufp->chgCData(oldp+1,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_data_count),8);
        bufp->chgBit(oldp+2,((1U & (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_data_count))));
        bufp->chgCData(oldp+3,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_data_count),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+4,(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_ready));
        bufp->chgBit(oldp+5,(vlSelf->tb_core__DOT__dut__DOT__mstring_to_char_ready));
        bufp->chgBit(oldp+6,(vlSelf->tb_core__DOT__dut__DOT__mout_char_fifo_ready));
        bufp->chgBit(oldp+7,(vlSelf->tb_core__DOT__dut__DOT__muart_char_ready));
        bufp->chgBit(oldp+8,(vlSelf->tb_core__DOT__dut__DOT__min_char_fifo_ready));
        bufp->chgBit(oldp+9,(vlSelf->tb_core__DOT__dut__DOT__mfifo_encoder_ready));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+10,(vlSelf->tb_core__DOT__tb_din),2);
        bufp->chgCData(oldp+11,(vlSelf->tb_core__DOT__dut__DOT__tx_1553),2);
        bufp->chgBit(oldp+12,(vlSelf->tb_core__DOT__tb_en_dout));
        bufp->chgBit(oldp+13,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__reg_txd));
        bufp->chgWData(oldp+14,(vlSelf->tb_core__DOT__data_expand),800);
        bufp->chgSData(oldp+39,(vlSelf->tb_core__DOT__data),16);
        bufp->chgWData(oldp+40,(vlSelf->tb_core__DOT__reg_data),1000);
        bufp->chgBit(oldp+72,(vlSelf->tb_core__DOT__parity_gen));
        bufp->chgIData(oldp+73,(vlSelf->tb_core__DOT__xor_index),32);
        bufp->chgIData(oldp+74,(vlSelf->tb_core__DOT__cycle_index),32);
        bufp->chgIData(oldp+75,(vlSelf->tb_core__DOT__pos_counter),32);
        bufp->chgIData(oldp+76,(vlSelf->tb_core__DOT__delay_counter),32);
        bufp->chgBit(oldp+77,((1U & (IData)(vlSelf->tb_core__DOT__tb_din))));
        bufp->chgBit(oldp+78,((1U & ((IData)(vlSelf->tb_core__DOT__tb_din) 
                                     >> 1U))));
        bufp->chgBit(oldp+79,((1U & (IData)(vlSelf->tb_core__DOT__dut__DOT__tx_1553))));
        bufp->chgBit(oldp+80,((1U & ((IData)(vlSelf->tb_core__DOT__dut__DOT__tx_1553) 
                                     >> 1U))));
        bufp->chgSData(oldp+81,(vlSelf->tb_core__DOT__dut__DOT__m1553_decoder_data),16);
        bufp->chgBit(oldp+82,(vlSelf->tb_core__DOT__dut__DOT__m1553_decoder_valid));
        bufp->chgCData(oldp+83,(vlSelf->tb_core__DOT__dut__DOT__m1553_decoder_user),8);
        bufp->chgBit(oldp+84,((1U & (~ (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_wr_full)))));
        bufp->chgSData(oldp+85,(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_data),16);
        bufp->chgBit(oldp+86,(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_valid));
        bufp->chgCData(oldp+87,(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_user),8);
        bufp->chgWData(oldp+88,(vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__r_m_axis_tdata),168);
        bufp->chgBit(oldp+94,(vlSelf->tb_core__DOT__dut__DOT__mstring_encoder_valid));
        bufp->chgCData(oldp+95,(((IData)(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_valid)
                                  ? ((0x14U >= (0x1fU 
                                                & (IData)(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__counter)))
                                      ? vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer
                                     [(0x1fU & (IData)(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__counter))]
                                      : 0U) : 0U)),8);
        bufp->chgBit(oldp+96,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_valid));
        bufp->chgCData(oldp+97,(vlSelf->tb_core__DOT__dut__DOT__outgoing_char_fifo__DOT__reg_data_buffer
                                [0U]),8);
        bufp->chgBit(oldp+98,((1U & (IData)(vlSelf->tb_core__DOT__dut__DOT__outgoing_char_fifo__DOT__reg_valid_buffer))));
        bufp->chgCData(oldp+99,(vlSelf->tb_core__DOT__dut__DOT__muart_char_data),8);
        bufp->chgBit(oldp+100,(vlSelf->tb_core__DOT__dut__DOT__muart_char_valid));
        bufp->chgCData(oldp+101,(vlSelf->tb_core__DOT__dut__DOT__incomming_char_fifo__DOT__reg_data_buffer
                                 [0U]),8);
        bufp->chgBit(oldp+102,((1U & (IData)(vlSelf->tb_core__DOT__dut__DOT__incomming_char_fifo__DOT__reg_valid_buffer))));
        bufp->chgWData(oldp+103,(vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_data),168);
        bufp->chgBit(oldp+109,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_valid));
        bufp->chgBit(oldp+110,(vlSelf->tb_core__DOT__dut__DOT__mchar_to_string_ready));
        bufp->chgSData(oldp+111,(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_data),16);
        bufp->chgBit(oldp+112,(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_valid));
        bufp->chgCData(oldp+113,(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user),8);
        bufp->chgBit(oldp+114,((1U & (~ (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_wr_full)))));
        bufp->chgSData(oldp+115,(((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_encoder_valid)
                                   ? ((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_valid)
                                       ? (0xffffU & 
                                          (vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_data 
                                           >> 0xcU))
                                       : 0U) : 0U)),16);
        bufp->chgBit(oldp+116,(vlSelf->tb_core__DOT__dut__DOT__mfifo_encoder_valid));
        bufp->chgCData(oldp+117,(((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_encoder_valid)
                                   ? ((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_valid)
                                       ? (0xffU & (vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_data 
                                                   >> 2U))
                                       : 0U) : 0U)),8);
        bufp->chgBit(oldp+118,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_tx__DOT__r_uart_ena));
        bufp->chgBit(oldp+119,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_rx__DOT__r_uart_ena));
        bufp->chgBit(oldp+120,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_hold_rx));
        bufp->chgIData(oldp+121,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_rx__DOT__counter),27);
        bufp->chgIData(oldp+122,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_baud_gen_tx__DOT__counter),27);
        bufp->chgSData(oldp+123,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_rx__DOT__reg_data),10);
        bufp->chgBit(oldp+124,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_rx__DOT__parity_bit));
        bufp->chgCData(oldp+125,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_rx__DOT__state),3);
        bufp->chgCData(oldp+126,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_rx__DOT__uart_state),2);
        bufp->chgCData(oldp+127,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_rx__DOT__data),8);
        bufp->chgCData(oldp+128,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_rx__DOT__trans_counter),4);
        bufp->chgCData(oldp+129,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_rx__DOT__prev_trans_counter),4);
        bufp->chgBit(oldp+130,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_rx__DOT__p_rxd));
        bufp->chgBit(oldp+131,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_rx__DOT__trans_fin));
        bufp->chgSData(oldp+132,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__reg_data),10);
        bufp->chgBit(oldp+133,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__parity_bit));
        bufp->chgCData(oldp+134,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__state),3);
        bufp->chgCData(oldp+135,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__data),8);
        bufp->chgCData(oldp+136,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_counter),4);
        bufp->chgCData(oldp+137,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__prev_trans_counter),4);
        bufp->chgBit(oldp+138,(vlSelf->tb_core__DOT__dut__DOT__axis_uart__DOT__uart_tx__DOT__trans_fin));
        bufp->chgCData(oldp+139,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[0]),8);
        bufp->chgCData(oldp+140,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[1]),8);
        bufp->chgCData(oldp+141,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[2]),8);
        bufp->chgCData(oldp+142,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[3]),8);
        bufp->chgCData(oldp+143,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[4]),8);
        bufp->chgCData(oldp+144,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[5]),8);
        bufp->chgCData(oldp+145,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[6]),8);
        bufp->chgCData(oldp+146,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[7]),8);
        bufp->chgCData(oldp+147,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[8]),8);
        bufp->chgCData(oldp+148,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[9]),8);
        bufp->chgCData(oldp+149,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[10]),8);
        bufp->chgCData(oldp+150,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[11]),8);
        bufp->chgCData(oldp+151,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[12]),8);
        bufp->chgCData(oldp+152,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[13]),8);
        bufp->chgCData(oldp+153,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[14]),8);
        bufp->chgCData(oldp+154,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[15]),8);
        bufp->chgCData(oldp+155,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[16]),8);
        bufp->chgCData(oldp+156,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[17]),8);
        bufp->chgCData(oldp+157,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[18]),8);
        bufp->chgCData(oldp+158,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[19]),8);
        bufp->chgCData(oldp+159,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__reg_data_buffer[20]),8);
        bufp->chgCData(oldp+160,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__counter),6);
        bufp->chgCData(oldp+161,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__index),6);
        bufp->chgBit(oldp+162,(vlSelf->tb_core__DOT__dut__DOT__char_to_string__DOT__p_m_axis_tready));
        bufp->chgCData(oldp+163,(((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_valid)
                                   ? ((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_valid)
                                       ? (3U & (vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_data 
                                                >> 0xaU))
                                       : 0U) : 0U)),2);
        bufp->chgBit(oldp+164,(((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_valid) 
                                & ((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_valid) 
                                   & vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_data))));
        bufp->chgBit(oldp+165,(((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_valid) 
                                & ((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_valid) 
                                   & (vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_data 
                                      >> 1U)))));
        bufp->chgIData(oldp+166,((0xc00U | (((IData)(vlSelf->tb_core__DOT__dut__DOT__m1553_decoder_data) 
                                             << 0xcU) 
                                            | ((IData)(vlSelf->tb_core__DOT__dut__DOT__m1553_decoder_user) 
                                               << 2U)))),32);
        bufp->chgBit(oldp+167,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_wr_full));
        bufp->chgBit(oldp+168,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_valid));
        bufp->chgBit(oldp+169,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_empty));
        bufp->chgIData(oldp+170,(((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_valid)
                                   ? vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_data
                                   : 0U)),32);
        bufp->chgBit(oldp+171,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_control__DOT__r_rd_valid));
        bufp->chgIData(oldp+172,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_rd_data),32);
        bufp->chgCData(oldp+173,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_gr_tail),8);
        bufp->chgBit(oldp+174,(((~ (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__s_wr_full)) 
                                & ((IData)(vlSelf->tb_core__DOT__dut__DOT__m1553_decoder_valid) 
                                   & (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_wr_rstn)))));
        bufp->chgCData(oldp+175,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_gr_head),8);
        bufp->chgCData(oldp+176,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state),2);
        bufp->chgCData(oldp+177,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__head),8);
        bufp->chgCData(oldp+178,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__tail),8);
        bufp->chgCData(oldp+179,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_head),8);
        bufp->chgCData(oldp+180,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail),8);
        bufp->chgCData(oldp+181,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_head),8);
        bufp->chgCData(oldp+182,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_tail),8);
        bufp->chgCData(oldp+183,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_head),8);
        bufp->chgCData(oldp+184,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__wr_tail),8);
        bufp->chgBit(oldp+185,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem));
        bufp->chgBit(oldp+186,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_rstn));
        bufp->chgBit(oldp+187,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_wr_rstn));
        bufp->chgBit(oldp+188,(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_fwft_count));
        bufp->chgCData(oldp+189,(((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_encoder_valid)
                                   ? ((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_valid)
                                       ? (3U & (vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_data 
                                                >> 0xaU))
                                       : 0U) : 0U)),2);
        bufp->chgBit(oldp+190,(((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_encoder_valid) 
                                & ((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_valid) 
                                   & vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_data))));
        bufp->chgBit(oldp+191,(((IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_encoder_valid) 
                                & ((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_valid) 
                                   & (vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_data 
                                      >> 1U)))));
        bufp->chgIData(oldp+192,((0xc00U | (((IData)(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_data) 
                                             << 0xcU) 
                                            | ((IData)(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_user) 
                                               << 2U)))),32);
        bufp->chgBit(oldp+193,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_wr_full));
        bufp->chgBit(oldp+194,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_valid));
        bufp->chgBit(oldp+195,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_empty));
        bufp->chgIData(oldp+196,(((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_valid)
                                   ? vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_data
                                   : 0U)),32);
        bufp->chgBit(oldp+197,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_control__DOT__r_rd_valid));
        bufp->chgIData(oldp+198,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_rd_data),32);
        bufp->chgCData(oldp+199,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_gr_tail),8);
        bufp->chgBit(oldp+200,(((~ (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__s_wr_full)) 
                                & ((IData)(vlSelf->tb_core__DOT__dut__DOT__mstring_decoder_valid) 
                                   & (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_wr_rstn)))));
        bufp->chgCData(oldp+201,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_gr_head),8);
        bufp->chgCData(oldp+202,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__read_state),2);
        bufp->chgCData(oldp+203,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__head),8);
        bufp->chgCData(oldp+204,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__tail),8);
        bufp->chgCData(oldp+205,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_head),8);
        bufp->chgCData(oldp+206,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail),8);
        bufp->chgCData(oldp+207,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_head),8);
        bufp->chgCData(oldp+208,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__next_tail),8);
        bufp->chgCData(oldp+209,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_head),8);
        bufp->chgCData(oldp+210,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__wr_tail),8);
        bufp->chgBit(oldp+211,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem));
        bufp->chgBit(oldp+212,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_rstn));
        bufp->chgBit(oldp+213,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_wr_rstn));
        bufp->chgBit(oldp+214,(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_fwft_count));
        bufp->chgCData(oldp+215,(vlSelf->tb_core__DOT__dut__DOT__incomming_char_fifo__DOT__index),3);
        bufp->chgCData(oldp+216,(vlSelf->tb_core__DOT__dut__DOT__incomming_char_fifo__DOT__index_shift),3);
        bufp->chgCData(oldp+217,(vlSelf->tb_core__DOT__dut__DOT__incomming_char_fifo__DOT__index_check),3);
        bufp->chgCData(oldp+218,(vlSelf->tb_core__DOT__dut__DOT__incomming_char_fifo__DOT__reg_data_buffer[0]),8);
        bufp->chgCData(oldp+219,(vlSelf->tb_core__DOT__dut__DOT__incomming_char_fifo__DOT__reg_data_buffer[1]),8);
        bufp->chgCData(oldp+220,(vlSelf->tb_core__DOT__dut__DOT__incomming_char_fifo__DOT__reg_data_buffer[2]),8);
        bufp->chgCData(oldp+221,(vlSelf->tb_core__DOT__dut__DOT__incomming_char_fifo__DOT__reg_data_buffer[3]),8);
        bufp->chgCData(oldp+222,(vlSelf->tb_core__DOT__dut__DOT__incomming_char_fifo__DOT__reg_valid_buffer),4);
        bufp->chgIData(oldp+223,(vlSelf->tb_core__DOT__dut__DOT__mil1553_decoder__DOT__bit_slice_index),32);
        bufp->chgQData(oldp+224,(vlSelf->tb_core__DOT__dut__DOT__mil1553_decoder__DOT__reg_data),40);
        bufp->chgBit(oldp+226,(vlSelf->tb_core__DOT__dut__DOT__mil1553_decoder__DOT__parity_bit));
        bufp->chgBit(oldp+227,(vlSelf->tb_core__DOT__dut__DOT__mil1553_decoder__DOT__delay_bit));
        bufp->chgCData(oldp+228,(vlSelf->tb_core__DOT__dut__DOT__mil1553_decoder__DOT__state),5);
        bufp->chgSData(oldp+229,(vlSelf->tb_core__DOT__dut__DOT__mil1553_decoder__DOT__data),16);
        bufp->chgCData(oldp+230,(vlSelf->tb_core__DOT__dut__DOT__mil1553_decoder__DOT__cmd),8);
        bufp->chgCData(oldp+231,(vlSelf->tb_core__DOT__dut__DOT__mil1553_decoder__DOT__p_diff),2);
        bufp->chgCData(oldp+232,(vlSelf->tb_core__DOT__dut__DOT__mil1553_decoder__DOT__skip_counter),6);
        bufp->chgCData(oldp+233,(vlSelf->tb_core__DOT__dut__DOT__mil1553_decoder__DOT__pause_counter),8);
        bufp->chgCData(oldp+234,(vlSelf->tb_core__DOT__dut__DOT__mil1553_decoder__DOT__trans_counter),6);
        bufp->chgIData(oldp+235,(vlSelf->tb_core__DOT__dut__DOT__mil1553_encoder__DOT__xor_index),32);
        bufp->chgIData(oldp+236,(vlSelf->tb_core__DOT__dut__DOT__mil1553_encoder__DOT__cycle_index),32);
        bufp->chgQData(oldp+237,(vlSelf->tb_core__DOT__dut__DOT__mil1553_encoder__DOT__reg_data),40);
        bufp->chgBit(oldp+239,(vlSelf->tb_core__DOT__dut__DOT__mil1553_encoder__DOT__parity_bit));
        bufp->chgCData(oldp+240,(vlSelf->tb_core__DOT__dut__DOT__mil1553_encoder__DOT__state),3);
        bufp->chgSData(oldp+241,(vlSelf->tb_core__DOT__dut__DOT__mil1553_encoder__DOT__data),16);
        bufp->chgSData(oldp+242,(vlSelf->tb_core__DOT__dut__DOT__mil1553_encoder__DOT__r_data),16);
        bufp->chgCData(oldp+243,(vlSelf->tb_core__DOT__dut__DOT__mil1553_encoder__DOT__cmd),8);
        bufp->chgCData(oldp+244,(vlSelf->tb_core__DOT__dut__DOT__mil1553_encoder__DOT__skip_counter),6);
        bufp->chgCData(oldp+245,(vlSelf->tb_core__DOT__dut__DOT__mil1553_encoder__DOT__pause_counter),8);
        bufp->chgCData(oldp+246,(vlSelf->tb_core__DOT__dut__DOT__mil1553_encoder__DOT__trans_counter),6);
        bufp->chgCData(oldp+247,(vlSelf->tb_core__DOT__dut__DOT__mil1553_encoder__DOT__prev_trans_counter),6);
        bufp->chgCData(oldp+248,(vlSelf->tb_core__DOT__dut__DOT__outgoing_char_fifo__DOT__index),3);
        bufp->chgCData(oldp+249,(vlSelf->tb_core__DOT__dut__DOT__outgoing_char_fifo__DOT__index_shift),3);
        bufp->chgCData(oldp+250,(vlSelf->tb_core__DOT__dut__DOT__outgoing_char_fifo__DOT__index_check),3);
        bufp->chgCData(oldp+251,(vlSelf->tb_core__DOT__dut__DOT__outgoing_char_fifo__DOT__reg_data_buffer[0]),8);
        bufp->chgCData(oldp+252,(vlSelf->tb_core__DOT__dut__DOT__outgoing_char_fifo__DOT__reg_data_buffer[1]),8);
        bufp->chgCData(oldp+253,(vlSelf->tb_core__DOT__dut__DOT__outgoing_char_fifo__DOT__reg_data_buffer[2]),8);
        bufp->chgCData(oldp+254,(vlSelf->tb_core__DOT__dut__DOT__outgoing_char_fifo__DOT__reg_data_buffer[3]),8);
        bufp->chgCData(oldp+255,(vlSelf->tb_core__DOT__dut__DOT__outgoing_char_fifo__DOT__reg_valid_buffer),4);
        bufp->chgBit(oldp+256,(vlSelf->tb_core__DOT__dut__DOT__string_decoder__DOT__p_m_axis_tready));
        bufp->chgBit(oldp+257,(vlSelf->tb_core__DOT__dut__DOT__string_decoder__DOT__force_s_axis_tready));
        bufp->chgBit(oldp+258,(vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__m_axis_tlast));
        bufp->chgIData(oldp+259,(vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__m_axis_tkeep),21);
        bufp->chgBit(oldp+260,(vlSelf->tb_core__DOT__dut__DOT__string_encoder__DOT__p_m_axis_tready));
        bufp->chgCData(oldp+261,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[0]),8);
        bufp->chgCData(oldp+262,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[1]),8);
        bufp->chgCData(oldp+263,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[2]),8);
        bufp->chgCData(oldp+264,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[3]),8);
        bufp->chgCData(oldp+265,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[4]),8);
        bufp->chgCData(oldp+266,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[5]),8);
        bufp->chgCData(oldp+267,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[6]),8);
        bufp->chgCData(oldp+268,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[7]),8);
        bufp->chgCData(oldp+269,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[8]),8);
        bufp->chgCData(oldp+270,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[9]),8);
        bufp->chgCData(oldp+271,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[10]),8);
        bufp->chgCData(oldp+272,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[11]),8);
        bufp->chgCData(oldp+273,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[12]),8);
        bufp->chgCData(oldp+274,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[13]),8);
        bufp->chgCData(oldp+275,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[14]),8);
        bufp->chgCData(oldp+276,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[15]),8);
        bufp->chgCData(oldp+277,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[16]),8);
        bufp->chgCData(oldp+278,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[17]),8);
        bufp->chgCData(oldp+279,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[18]),8);
        bufp->chgCData(oldp+280,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[19]),8);
        bufp->chgCData(oldp+281,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_data_buffer[20]),8);
        bufp->chgCData(oldp+282,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__reg_m_axis_tdata),8);
        bufp->chgCData(oldp+283,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__counter),6);
        bufp->chgCData(oldp+284,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__index),6);
        bufp->chgCData(oldp+285,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[0]),8);
        bufp->chgCData(oldp+286,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[1]),8);
        bufp->chgCData(oldp+287,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[2]),8);
        bufp->chgCData(oldp+288,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[3]),8);
        bufp->chgCData(oldp+289,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[4]),8);
        bufp->chgCData(oldp+290,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[5]),8);
        bufp->chgCData(oldp+291,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[6]),8);
        bufp->chgCData(oldp+292,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[7]),8);
        bufp->chgCData(oldp+293,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[8]),8);
        bufp->chgCData(oldp+294,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[9]),8);
        bufp->chgCData(oldp+295,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[10]),8);
        bufp->chgCData(oldp+296,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[11]),8);
        bufp->chgCData(oldp+297,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[12]),8);
        bufp->chgCData(oldp+298,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[13]),8);
        bufp->chgCData(oldp+299,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[14]),8);
        bufp->chgCData(oldp+300,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[15]),8);
        bufp->chgCData(oldp+301,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[16]),8);
        bufp->chgCData(oldp+302,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[17]),8);
        bufp->chgCData(oldp+303,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[18]),8);
        bufp->chgCData(oldp+304,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[19]),8);
        bufp->chgCData(oldp+305,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__split_s_axis_tdata[20]),8);
        bufp->chgBit(oldp+306,(vlSelf->tb_core__DOT__dut__DOT__string_to_char__DOT__genblk1__DOT__p_m_axis_tready));
    }
    bufp->chgBit(oldp+307,(vlSelf->tb_core__DOT__tb_data_clk));
    bufp->chgBit(oldp+308,(vlSelf->tb_core__DOT__tb_rst));
    bufp->chgBit(oldp+309,((1U & (~ (IData)(vlSelf->tb_core__DOT__tb_rst)))));
    bufp->chgBit(oldp+310,((((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail) 
                             != (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_head)) 
                            & (((IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem) 
                                | (IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_decoder_ready)) 
                               & (IData)(vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_rstn)))));
    bufp->chgBit(oldp+311,((((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_tail) 
                             != (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_head)) 
                            & (((IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__rd_ctrl_mem) 
                                | (IData)(vlSelf->tb_core__DOT__dut__DOT__mfifo_encoder_ready)) 
                               & (IData)(vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_rd_rstn)))));
}

void Vtb_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_cleanup\n"); );
    // Init
    Vtb_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_core___024root*>(voidSelf);
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
