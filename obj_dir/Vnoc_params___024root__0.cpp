// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnoc_params.h for the primary calling header

#include "Vnoc_params__pch.h"

void Vnoc_params___024root___eval_triggers_vec__act(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___eval_triggers_vec__act\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__rst_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tlc_noc_adapter__DOT__rst_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tlc_noc_adapter__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tlc_noc_adapter__DOT__clk__0 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tlc_noc_adapter__DOT__rst_n__0 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__rst_n;
}

bool Vnoc_params___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vnoc_params___024root___nba_sequent__TOP__0(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___nba_sequent__TOP__0\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter;
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_total_beats 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_total_beats;
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx;
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__send_state 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__send_state;
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_data 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_data;
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_size 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_size;
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_opcode 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_opcode;
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_param 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_param;
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low;
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_txn 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_txn;
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req;
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r;
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_valid_r 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_valid_r;
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[0U] 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[0U];
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[1U] 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[1U];
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[2U] 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[2U];
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_seen 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_seen;
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[0U] 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[0U];
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[1U] 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[1U];
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U] 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U];
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[3U] 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[3U];
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U] 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U];
    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid;
    if (vlSelfRef.tb_tlc_noc_adapter__DOT__rst_n) {
        if ((((~ (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid)) 
              & (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__a_valid)) 
             & (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__a_ready))) {
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[0U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[0U];
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[1U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[1U];
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[2U];
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[3U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[3U];
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U];
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid = 1U;
        }
    } else {
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid = 0U;
    }
}

void Vnoc_params___024root___nba_sequent__TOP__1(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___nba_sequent__TOP__1\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__tb_tlc_noc_adapter__DOT__state;
    __Vdly__tb_tlc_noc_adapter__DOT__state = 0;
    // Body
    __Vdly__tb_tlc_noc_adapter__DOT__state = vlSelfRef.tb_tlc_noc_adapter__DOT__state;
    if (vlSelfRef.tb_tlc_noc_adapter__DOT__rst_n) {
        if ((1U == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__state))) {
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[0U] = 0U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[1U] = 0U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[2U] = 0U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[3U] = 0U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U] = 0U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_valid = 1U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U] 
                = (0x02000000U | (0x007fffffU & vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U]));
            if (vlSelfRef.tb_tlc_noc_adapter__DOT__a_ready) {
                vlSelfRef.tb_tlc_noc_adapter__DOT__a_valid = 0U;
                __Vdly__tb_tlc_noc_adapter__DOT__state = 2U;
            }
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[2U] 
                = ((0x000001ffU & vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[2U]) 
                   | ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__addr) 
                      << 9U));
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[3U] 
                = (((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__addr) 
                    >> 0x00000017U) | ((IData)((vlSelfRef.tb_tlc_noc_adapter__DOT__addr 
                                                >> 0x00000020U)) 
                                       << 9U));
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U] 
                = ((0x03f00000U & vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U]) 
                   | (0x03ffffffU & (0x00003000U | 
                                     ((IData)((vlSelfRef.tb_tlc_noc_adapter__DOT__addr 
                                               >> 0x00000020U)) 
                                      >> 0x00000017U))));
        } else if ((2U == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__state))) {
            if (VL_UNLIKELY((vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r))) {
                VL_WRITEF_NX("GET response data = %x\n",0,
                             64,(((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_r[1U])) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_r[0U]))));
                __Vdly__tb_tlc_noc_adapter__DOT__state = 3U;
            }
        } else if ((3U == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__state))) {
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[0U] = 0U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[1U] = 0U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[2U] = 0U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[3U] = 0U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U] = 0U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_valid = 1U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U] 
                = (0x007fffffU & vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U]);
            if (vlSelfRef.tb_tlc_noc_adapter__DOT__a_ready) {
                vlSelfRef.tb_tlc_noc_adapter__DOT__a_valid = 0U;
                __Vdly__tb_tlc_noc_adapter__DOT__state = 4U;
            }
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U] 
                = (0x00003000U | (0x03f00fffU & vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U]));
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[2U] 
                = ((0x000001ffU & vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[2U]) 
                   | ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__addr) 
                      << 9U));
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[3U] 
                = (((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__addr) 
                    >> 0x00000017U) | ((IData)((vlSelfRef.tb_tlc_noc_adapter__DOT__addr 
                                                >> 0x00000020U)) 
                                       << 9U));
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U] 
                = ((0x03fffe00U & vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U]) 
                   | (0x03ffffffU & ((IData)((vlSelfRef.tb_tlc_noc_adapter__DOT__addr 
                                              >> 0x00000020U)) 
                                     >> 0x00000017U)));
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[0U] 
                = (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__data_write);
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[1U] 
                = (IData)((vlSelfRef.tb_tlc_noc_adapter__DOT__data_write 
                           >> 0x00000020U));
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[2U] 
                = (0x000001feU | vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[2U]);
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U] 
                = (0x03fff1ffU & vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U]);
        } else if ((4U == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__state))) {
            if (VL_UNLIKELY((vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r))) {
                VL_WRITEF_NX("PUT acknowledged\n",0);
                __Vdly__tb_tlc_noc_adapter__DOT__state = 5U;
            }
        } else if ((5U == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__state))) {
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[0U] = 0U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[1U] = 0U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[2U] = 0U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[3U] = 0U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U] = 0U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_valid = 1U;
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U] 
                = (0x02000000U | (0x007fffffU & vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U]));
            if (vlSelfRef.tb_tlc_noc_adapter__DOT__a_ready) {
                vlSelfRef.tb_tlc_noc_adapter__DOT__a_valid = 0U;
                __Vdly__tb_tlc_noc_adapter__DOT__state = 6U;
            }
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[2U] 
                = ((0x000001ffU & vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[2U]) 
                   | ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__addr) 
                      << 9U));
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[3U] 
                = (((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__addr) 
                    >> 0x00000017U) | ((IData)((vlSelfRef.tb_tlc_noc_adapter__DOT__addr 
                                                >> 0x00000020U)) 
                                       << 9U));
            vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U] 
                = ((0x03f00000U & vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U]) 
                   | (0x03ffffffU & (0x00003000U | 
                                     ((IData)((vlSelfRef.tb_tlc_noc_adapter__DOT__addr 
                                               >> 0x00000020U)) 
                                      >> 0x00000017U))));
        } else if ((6U == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__state))) {
            if (VL_UNLIKELY((vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r))) {
                VL_WRITEF_NX("GET2 response data = %x\n",0,
                             64,(((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_r[1U])) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_r[0U]))));
                if (((((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_r[1U])) 
                       << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_r[0U]))) 
                     == vlSelfRef.tb_tlc_noc_adapter__DOT__data_write)) {
                    VL_WRITEF_NX("PASS: Memory write/read verified\n",0);
                } else {
                    VL_WRITEF_NX("FAIL: Data mismatch\n",0);
                }
                __Vdly__tb_tlc_noc_adapter__DOT__state = 7U;
            }
        } else if (VL_UNLIKELY(((7U == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__state))))) {
            VL_FINISH_MT("tb/tb_tlc_noc_adapter.sv", 242, "");
        }
    } else {
        __Vdly__tb_tlc_noc_adapter__DOT__state = 1U;
    }
    vlSelfRef.tb_tlc_noc_adapter__DOT__state = __Vdly__tb_tlc_noc_adapter__DOT__state;
}

extern const VlWide<8>/*255:0*/ Vnoc_params__ConstPool__CONST_h9e67c271_0;
extern const VlWide<8>/*255:0*/ Vnoc_params__ConstPool__CONST_h1e479923_0;

void Vnoc_params___024root___nba_sequent__TOP__2(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___nba_sequent__TOP__2\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_expected;
    tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_expected = 0;
    IData/*31:0*/ __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__Vfuncout;
    __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__size;
    __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__size = 0;
    IData/*31:0*/ __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__bytes;
    __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__bytes = 0;
    IData/*31:0*/ __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__beats;
    __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__beats = 0;
    IData/*25:0*/ __Vfunc_build_flit__2__hdr;
    __Vfunc_build_flit__2__hdr = 0;
    VlWide<8>/*229:0*/ __Vfunc_build_flit__2__payload;
    VL_ZERO_W(230, __Vfunc_build_flit__2__payload);
    VlWide<8>/*255:0*/ __Vfunc_build_flit__2__f;
    VL_ZERO_W(256, __Vfunc_build_flit__2__f);
    VlWide<8>/*255:0*/ __Vfunc_build_flit__3__Vfuncout;
    VL_ZERO_W(256, __Vfunc_build_flit__3__Vfuncout);
    IData/*25:0*/ __Vfunc_build_flit__3__hdr;
    __Vfunc_build_flit__3__hdr = 0;
    VlWide<8>/*229:0*/ __Vfunc_build_flit__3__payload;
    VL_ZERO_W(230, __Vfunc_build_flit__3__payload);
    VlWide<8>/*255:0*/ __Vfunc_build_flit__3__f;
    VL_ZERO_W(256, __Vfunc_build_flit__3__f);
    IData/*25:0*/ __Vfunc_extract_hdr__4__Vfuncout;
    __Vfunc_extract_hdr__4__Vfuncout = 0;
    VlWide<8>/*255:0*/ __Vfunc_extract_hdr__4__flit;
    VL_ZERO_W(256, __Vfunc_extract_hdr__4__flit);
    IData/*25:0*/ __Vfunc_extract_hdr__4__hdr;
    __Vfunc_extract_hdr__4__hdr = 0;
    IData/*31:0*/ __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__Vfuncout;
    __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__size;
    __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__size = 0;
    IData/*31:0*/ __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__bytes;
    __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__bytes = 0;
    IData/*31:0*/ __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__beats;
    __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__beats = 0;
    IData/*25:0*/ __Vfunc_extract_hdr__6__Vfuncout;
    __Vfunc_extract_hdr__6__Vfuncout = 0;
    VlWide<8>/*255:0*/ __Vfunc_extract_hdr__6__flit;
    VL_ZERO_W(256, __Vfunc_extract_hdr__6__flit);
    IData/*25:0*/ __Vfunc_extract_hdr__6__hdr;
    __Vfunc_extract_hdr__6__hdr = 0;
    CData/*2:0*/ __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__Vfuncout;
    __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__unnamedblk1__DOT__cand;
    __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__unnamedblk1__DOT__cand = 0;
    IData/*31:0*/ __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__start;
    __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__start = 0;
    IData/*31:0*/ __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__idx;
    __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__idx = 0;
    CData/*2:0*/ __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__result;
    __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__result = 0;
    VlWide<8>/*255:0*/ __Vfunc_build_flit__9__Vfuncout;
    VL_ZERO_W(256, __Vfunc_build_flit__9__Vfuncout);
    VlWide<8>/*229:0*/ __Vfunc_build_flit__9__payload;
    VL_ZERO_W(230, __Vfunc_build_flit__9__payload);
    VlWide<8>/*255:0*/ __Vfunc_build_flit__9__f;
    VL_ZERO_W(256, __Vfunc_build_flit__9__f);
    IData/*25:0*/ __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr;
    __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr = 0;
    IData/*25:0*/ __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr;
    __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr = 0;
    VlWide<5>/*153:0*/ __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r;
    VL_ZERO_W(154, __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r);
    VlWide<5>/*153:0*/ __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r;
    VL_ZERO_W(154, __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r);
    IData/*25:0*/ __Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr;
    __Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr = 0;
    IData/*25:0*/ __VdlyMask__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr;
    __VdlyMask__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr = 0;
    QData/*63:0*/ __VdlyVal__tb_tlc_noc_adapter__DOT__manager_i__DOT__mem__v0;
    __VdlyVal__tb_tlc_noc_adapter__DOT__manager_i__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_tlc_noc_adapter__DOT__manager_i__DOT__mem__v0;
    __VdlyDim0__tb_tlc_noc_adapter__DOT__manager_i__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_tlc_noc_adapter__DOT__manager_i__DOT__mem__v1;
    __VdlyDim0__tb_tlc_noc_adapter__DOT__manager_i__DOT__mem__v1 = 0;
    // Body
    if (vlSelfRef.tb_tlc_noc_adapter__DOT__rst_n) {
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r = 0U;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_valid_r = 0U;
        if (vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_valid_reg) {
            __Vfunc_extract_hdr__4__flit[0U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[0U];
            __Vfunc_extract_hdr__4__flit[1U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[1U];
            __Vfunc_extract_hdr__4__flit[2U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[2U];
            __Vfunc_extract_hdr__4__flit[3U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[3U];
            __Vfunc_extract_hdr__4__flit[4U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[4U];
            __Vfunc_extract_hdr__4__flit[5U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[5U];
            __Vfunc_extract_hdr__4__flit[6U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[6U];
            __Vfunc_extract_hdr__4__flit[7U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[7U];
            __Vfunc_extract_hdr__4__hdr = (__Vfunc_extract_hdr__4__flit[7U] 
                                           >> 6U);
            __Vfunc_extract_hdr__4__Vfuncout = __Vfunc_extract_hdr__4__hdr;
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_hdr 
                = __Vfunc_extract_hdr__4__Vfuncout;
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[0U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[0U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[1U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[1U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[2U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[2U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[3U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[3U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[4U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[4U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[5U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[5U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[6U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[6U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[7U] 
                = (0x0000003fU & vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[7U]);
            if ((3U == (7U & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_hdr 
                              >> 0x00000010U)))) {
                if ((2U & vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_hdr)) {
                    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[0U] = 0U;
                    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[1U] = 0U;
                    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[2U] = 0U;
                    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_seen = 0U;
                    tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_expected 
                        = (0x0000001fU & ([&]() {
                                __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__size 
                                    = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_size_accum;
                                __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__bytes 
                                    = VL_SHIFTL_III(32,32,32, (IData)(1U), __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__size);
                                __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__beats 
                                    = VL_DIVS_III(32, 
                                                  ((IData)(7U) 
                                                   + __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__bytes), (IData)(8U));
                                if (VL_GTS_III(32, 1U, __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__beats)) {
                                    __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__beats = 1U;
                                }
                                if (VL_LTS_III(32, 0x00000010U, __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__beats)) {
                                    __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__beats = 0x00000010U;
                                }
                                __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__Vfuncout 
                                    = __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__beats;
                            }(), __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__5__Vfuncout));
                    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_size_accum 
                        = (0x000000ffU & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[2U] 
                                          >> 8U));
                }
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[0U] 
                    = (IData)((((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[1U])) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[0U]))));
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[1U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[1U])) 
                                 << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[0U]))) 
                               >> 0x00000020U));
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[2U] 
                    = ((0x0000ffffU & vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[2U]) 
                       | (0x003fffffU & (((0x00000038U 
                                           & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[2U] 
                                              >> 0x0000000dU)) 
                                          | (7U & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[2U] 
                                                   >> 0x00000013U))) 
                                         << 0x00000010U)));
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[2U] 
                    = ((0x003fff00U & vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[2U]) 
                       | (0x000000fcU & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_hdr 
                                         >> 8U)));
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_seen 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_seen)));
                if ((1U & vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_hdr)) {
                    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_r[0U] 
                        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[0U];
                    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_r[1U] 
                        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[1U];
                    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_r[2U] 
                        = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[2U];
                    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r = 1U;
                    tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_expected = 0U;
                    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_seen = 0U;
                }
            } else if ((1U == (7U & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_hdr 
                                     >> 0x00000010U)))) {
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[0U] = 0U;
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[1U] = 0U;
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[2U] = 0U;
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[3U] = 0U;
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[4U] = 0U;
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[4U] 
                    = (0x007fffffU & vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[4U]);
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_valid_r = 1U;
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[0U] 
                    = (IData)((((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[1U])) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[0U]))));
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[1U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[1U])) 
                                 << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload[0U]))) 
                               >> 0x00000020U));
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[4U] 
                    = ((0x03fff1ffU & vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[4U]) 
                       | (0x00000e00U & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__resp_hdr 
                                         >> 4U)));
            }
        }
        if (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r) {
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r = 0U;
        }
        if (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_valid_r) {
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_valid_r = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[0U] = 0U;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[1U] = 0U;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[2U] = 0U;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_seen = 0U;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r = 0U;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_valid_r = 0U;
        tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_expected = 0U;
        vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_r[0U] = 0U;
        vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_r[1U] = 0U;
        vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_r[2U] = 0U;
        __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[0U] = 0U;
        __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[1U] = 0U;
        __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[2U] = 0U;
        __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[3U] = 0U;
        __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[4U] = 0U;
        __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[0U] = 0xffffffffU;
        __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[1U] = 0xffffffffU;
        __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[2U] = 0xffffffffU;
        __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[3U] = 0xffffffffU;
        __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[4U] = 0x03ffffffU;
    }
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_valid_r 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_valid_r;
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[0U] 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[0U];
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[1U] 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[1U];
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[2U] 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[2U];
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_seen 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_seen;
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r;
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[0U] 
        = ((__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[0U] 
            & __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[0U]) 
           | (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[0U] 
              & (~ __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[0U])));
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[1U] 
        = ((__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[1U] 
            & __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[1U]) 
           | (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[1U] 
              & (~ __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[1U])));
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[2U] 
        = ((__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[2U] 
            & __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[2U]) 
           | (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[2U] 
              & (~ __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[2U])));
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[3U] 
        = ((__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[3U] 
            & __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[3U]) 
           | (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[3U] 
              & (~ __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[3U])));
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[4U] 
        = ((__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[4U] 
            & __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[4U]) 
           | (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[4U] 
              & (~ __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[4U])));
    __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[0U] = 0U;
    __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[1U] = 0U;
    __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[2U] = 0U;
    __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[3U] = 0U;
    __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r[4U] = 0U;
    if (vlSelfRef.tb_tlc_noc_adapter__DOT__rst_n) {
        if (vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_valid_reg) {
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_valid_reg = 0U;
            VL_ASSIGN_W(256, vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg, Vnoc_params__ConstPool__CONST_h9e67c271_0);
        }
        if ((((~ (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req)) 
              & (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_valid_r)) 
             & (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__noc_req_ready))) {
            __Vfunc_extract_hdr__6__flit[0U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[0U];
            __Vfunc_extract_hdr__6__flit[1U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[1U];
            __Vfunc_extract_hdr__6__flit[2U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[2U];
            __Vfunc_extract_hdr__6__flit[3U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[3U];
            __Vfunc_extract_hdr__6__flit[4U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[4U];
            __Vfunc_extract_hdr__6__flit[5U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[5U];
            __Vfunc_extract_hdr__6__flit[6U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[6U];
            __Vfunc_extract_hdr__6__flit[7U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[7U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[0U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[0U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[1U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[1U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[2U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[2U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[3U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[3U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[4U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[4U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[5U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[5U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[6U] 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[6U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[7U] 
                = (0x0000003fU & vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[7U]);
            __Vfunc_extract_hdr__6__hdr = (__Vfunc_extract_hdr__6__flit[7U] 
                                           >> 6U);
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req = 1U;
            __Vfunc_extract_hdr__6__Vfuncout = __Vfunc_extract_hdr__6__hdr;
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_data 
                = (((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[1U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[0U])));
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_hdr 
                = __Vfunc_extract_hdr__6__Vfuncout;
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_size 
                = (0x000000ffU & (vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[2U] 
                                  >> 8U));
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_opcode 
                = (7U & (vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[2U] 
                         >> 0x00000010U));
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_param 
                = (7U & (vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[2U] 
                         >> 0x00000013U));
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low 
                = (((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[4U])) 
                    << 0x00000024U) | (((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[3U])) 
                                        << 4U) | ((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[2U])) 
                                                  >> 0x0000001cU)));
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_txn 
                = ((vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[5U] 
                    << 4U) | (vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload[4U] 
                              >> 0x0000001cU));
        }
        if (vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req) {
            __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__start 
                = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__sink_alloc_ptr;
            __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__idx = 0xffffffffU;
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 8U, vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__i)) {
                    __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__unnamedblk1__DOT__cand = 0U;
                    __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__unnamedblk1__DOT__cand 
                        = VL_MODDIVS_III(32, (__Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__start 
                                              + vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__i), (IData)(8U));
                    if ((1U & (~ ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__sink_in_use) 
                                  >> (7U & __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__unnamedblk1__DOT__cand))))) {
                        __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__idx 
                            = __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__unnamedblk1__DOT__cand;
                        goto __Vlabel0;
                    }
                    vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__i 
                        = ((IData)(1U) + vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__i);
                }
                __Vlabel0: ;
            }
            __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__result 
                = ((0xffffffffU == __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__idx)
                    ? 0U : (7U & __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__idx));
            __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__Vfuncout 
                = __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__result;
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__chosen_sink 
                = __Vfunc_tb_tlc_noc_adapter__DOT__manager_i__DOT__alloc_sink__7__Vfuncout;
            if ((1U & (~ ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__sink_in_use) 
                          >> (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__chosen_sink))))) {
                vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__sink_in_use 
                    = ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__sink_in_use) 
                       | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__chosen_sink))));
                vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__sink_alloc_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__chosen_sink)));
            }
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr = 0U;
            __Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr 
                = ((0x0007ffffU & __Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr) 
                   | (0x00280000U | (0x01c00000U & 
                                     (vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__in_hdr 
                                      << 9U))));
            __VdlyMask__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr 
                = (0x03f80000U | __VdlyMask__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr);
            __Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr 
                = ((0x03f803ffU & __Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr) 
                   | (0x00030000U | ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__chosen_sink) 
                                     << 0x0000000aU)));
            __VdlyMask__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr 
                = (0x0007fc00U | __VdlyMask__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr);
            __Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr 
                = (3U | __Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr);
            __VdlyMask__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr 
                = (3U | __VdlyMask__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr);
            VL_ASSIGN_W(230, vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload, Vnoc_params__ConstPool__CONST_h1e479923_0);
            if ((4U == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_opcode))) {
                vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr_word 
                    = (IData)((vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low 
                               >> 3U));
                if ((0x00000400U <= vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr_word)) {
                    vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr_word 
                        = (0x000003ffU & vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr_word);
                }
                vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[0U] 
                    = (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__mem
                              [(0x000003ffU & vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr_word)]);
                vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[1U] 
                    = (IData)((vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__mem
                               [(0x000003ffU & vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr_word)] 
                               >> 0x00000020U));
                vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[2U] 
                    = (0x00010000U | (0xfff8ffffU & vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[2U]));
            } else if (((0U == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_opcode)) 
                        | (1U == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_opcode)))) {
                vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk4__DOT__addr_word_w 
                    = (IData)((vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low 
                               >> 3U));
                if ((0x00000400U <= vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk4__DOT__addr_word_w)) {
                    vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk4__DOT__addr_word_w 
                        = (0x000003ffU & vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk4__DOT__addr_word_w);
                }
                __VdlyVal__tb_tlc_noc_adapter__DOT__manager_i__DOT__mem__v0 
                    = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_data;
                __VdlyDim0__tb_tlc_noc_adapter__DOT__manager_i__DOT__mem__v0 
                    = (0x000003ffU & vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk4__DOT__addr_word_w);
                vlSelfRef.__VdlyCommitQueuetb_tlc_noc_adapter__DOT__manager_i__DOT__mem.enqueue(__VdlyVal__tb_tlc_noc_adapter__DOT__manager_i__DOT__mem__v0, (IData)(__VdlyDim0__tb_tlc_noc_adapter__DOT__manager_i__DOT__mem__v0));
                vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[2U] 
                    = (0xfff8ffffU & vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[2U]);
            } else {
                vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[2U] 
                    = (0xfff8ffffU & vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[2U]);
            }
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[2U] 
                = ((0xffff00ffU & vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[2U]) 
                   | ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_size) 
                      << 8U));
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[2U] 
                = ((0x0007ffffU & vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[2U]) 
                   | (((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low) 
                       << 0x0000001cU) | (((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__chosen_sink) 
                                           << 0x00000019U) 
                                          | ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_param) 
                                             << 0x00000013U))));
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[3U] 
                = (((0x0007ffffU & ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low) 
                                    >> 4U)) | ((0x0007ffffU 
                                                & ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__chosen_sink) 
                                                   >> 7U)) 
                                               | ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_param) 
                                                  >> 0x0000000dU))) 
                   | ((0x0ff80000U & ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low) 
                                      >> 4U)) | ((IData)(
                                                         (vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low 
                                                          >> 0x00000020U)) 
                                                 << 0x0000001cU)));
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[4U] 
                = ((0xf0000000U & vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[4U]) 
                   | ((0x0007ffffU & ((IData)((vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low 
                                               >> 0x00000020U)) 
                                      >> 4U)) | (0x0ff80000U 
                                                 & ((IData)(
                                                            (vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low 
                                                             >> 0x00000020U)) 
                                                    >> 4U))));
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[4U] 
                = ((0x0fffffffU & vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[4U]) 
                   | (vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_txn 
                      << 0x0000001cU));
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[5U] 
                = ((0xf0000000U & vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[5U]) 
                   | (vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_txn 
                      >> 4U));
            __Vfunc_build_flit__9__payload[0U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[0U];
            __Vfunc_build_flit__9__payload[1U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[1U];
            __Vfunc_build_flit__9__payload[2U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[2U];
            __Vfunc_build_flit__9__payload[3U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[3U];
            __Vfunc_build_flit__9__payload[4U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[4U];
            __Vfunc_build_flit__9__payload[5U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[5U];
            __Vfunc_build_flit__9__payload[6U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[6U];
            __Vfunc_build_flit__9__payload[7U] = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload[7U];
            __Vfunc_build_flit__9__f[0U] = __Vfunc_build_flit__9__payload[0U];
            __Vfunc_build_flit__9__f[1U] = __Vfunc_build_flit__9__payload[1U];
            __Vfunc_build_flit__9__f[2U] = __Vfunc_build_flit__9__payload[2U];
            __Vfunc_build_flit__9__f[3U] = __Vfunc_build_flit__9__payload[3U];
            __Vfunc_build_flit__9__f[4U] = __Vfunc_build_flit__9__payload[4U];
            __Vfunc_build_flit__9__f[5U] = __Vfunc_build_flit__9__payload[5U];
            __Vfunc_build_flit__9__f[6U] = __Vfunc_build_flit__9__payload[6U];
            __Vfunc_build_flit__9__f[7U] = __Vfunc_build_flit__9__payload[7U];
            __Vfunc_build_flit__9__Vfuncout[0U] = __Vfunc_build_flit__9__f[0U];
            __Vfunc_build_flit__9__Vfuncout[1U] = __Vfunc_build_flit__9__f[1U];
            __Vfunc_build_flit__9__Vfuncout[2U] = __Vfunc_build_flit__9__f[2U];
            __Vfunc_build_flit__9__Vfuncout[3U] = __Vfunc_build_flit__9__f[3U];
            __Vfunc_build_flit__9__Vfuncout[4U] = __Vfunc_build_flit__9__f[4U];
            __Vfunc_build_flit__9__Vfuncout[5U] = __Vfunc_build_flit__9__f[5U];
            __Vfunc_build_flit__9__Vfuncout[6U] = __Vfunc_build_flit__9__f[6U];
            __Vfunc_build_flit__9__Vfuncout[7U] = __Vfunc_build_flit__9__f[7U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[0U] 
                = __Vfunc_build_flit__9__Vfuncout[0U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[1U] 
                = __Vfunc_build_flit__9__Vfuncout[1U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[2U] 
                = __Vfunc_build_flit__9__Vfuncout[2U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[3U] 
                = __Vfunc_build_flit__9__Vfuncout[3U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[4U] 
                = __Vfunc_build_flit__9__Vfuncout[4U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[5U] 
                = __Vfunc_build_flit__9__Vfuncout[5U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[6U] 
                = __Vfunc_build_flit__9__Vfuncout[6U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg[7U] 
                = __Vfunc_build_flit__9__Vfuncout[7U];
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_valid_reg = 1U;
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req = 0U;
        vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__sink_alloc_ptr = 0U;
        vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__sink_in_use = 0U;
        vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_valid_reg = 0U;
        VL_ASSIGN_W(256, vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg, Vnoc_params__ConstPool__CONST_h9e67c271_0);
        vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000400U, vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__i)) {
            __VdlyDim0__tb_tlc_noc_adapter__DOT__manager_i__DOT__mem__v1 
                = (0x000003ffU & vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_tlc_noc_adapter__DOT__manager_i__DOT__mem.enqueue(0ULL, (IData)(__VdlyDim0__tb_tlc_noc_adapter__DOT__manager_i__DOT__mem__v1));
            vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__i);
        }
    }
    vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_data 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_data;
    vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_size 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_size;
    vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_opcode 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_opcode;
    vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_param 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_param;
    vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low;
    vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_txn 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_txn;
    vlSelfRef.__VdlyCommitQueuetb_tlc_noc_adapter__DOT__manager_i__DOT__mem.commit(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__mem);
    vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr 
        = ((__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr 
            & __VdlyMask__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr) 
           | (vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr 
              & (~ __VdlyMask__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr)));
    __VdlyMask__tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr = 0U;
    if (vlSelfRef.tb_tlc_noc_adapter__DOT__rst_n) {
        vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_valid_r = 0U;
        if ((0U == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__send_state))) {
            if (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid) {
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr = 0U;
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter 
                    = ((IData)(1U) + vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter);
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_total_beats 
                    = (0x0000001fU & ([&]() {
                            __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__size 
                                = (0x000000ffU & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U] 
                                                  >> 0x0000000cU));
                            __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__bytes 
                                = VL_SHIFTL_III(32,32,32, (IData)(1U), __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__size);
                            __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__beats 
                                = VL_DIVS_III(32, ((IData)(7U) 
                                                   + __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__bytes), (IData)(8U));
                            if (VL_GTS_III(32, 1U, __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__beats)) {
                                __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__beats = 1U;
                            }
                            if (VL_LTS_III(32, 0x00000010U, __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__beats)) {
                                __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__beats = 0x00000010U;
                            }
                            __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__Vfuncout 
                                = __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__beats;
                        }(), __Vfunc_tb_tlc_noc_adapter__DOT__client_i__DOT__size_to_beats__0__Vfuncout));
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx = 0U;
                __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr 
                    = ((0x0007ffffU & __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr) 
                       | (0x00180000U | (0x03c00000U 
                                         & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U] 
                                            << 0x0000000dU))));
                __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr 
                    = (0x03f80000U | __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr);
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__send_state = 1U;
                __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr 
                    = ((0x03f803ffU & __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr) 
                       | (0x0000e000U & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U] 
                                         << 4U)));
                __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr 
                    = (0x0007fc00U | __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr);
                __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr 
                    = ((0x03fffc03U & __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr) 
                       | (0x000003fcU & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U] 
                                         >> 0x0000000aU)));
                __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr 
                    = (0x000003fcU | __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr);
            }
        } else if ((1U == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__send_state))) {
            VL_ASSIGN_W(230, vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload, Vnoc_params__ConstPool__CONST_h1e479923_0);
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[0U] 
                = (IData)((((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[1U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[0U]))));
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[1U] 
                = (IData)(((((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[1U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[0U]))) 
                           >> 0x00000020U));
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[2U] 
                = ((0xffff0000U & vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[2U]) 
                   | ((0x0000ff00U & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U] 
                                      >> 4U)) | (0x000000ffU 
                                                 & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U] 
                                                    >> 1U))));
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[2U] 
                = ((0xfe00ffffU & vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[2U]) 
                   | (((0x000001c0U & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U] 
                                       >> 3U)) | ((0x00000038U 
                                                   & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U] 
                                                      >> 0x00000011U)) 
                                                  | (7U 
                                                     & (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U] 
                                                        >> 0x00000017U)))) 
                      << 0x00000010U));
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[2U] 
                = ((0x01ffffffU & vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[2U]) 
                   | ((IData)((((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U])) 
                                << 0x00000037U) | (
                                                   ((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[3U])) 
                                                    << 0x00000017U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U])) 
                                                      >> 9U)))) 
                      << 0x0000001cU));
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[3U] 
                = ((0x01ffffffU & ((IData)((((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U])) 
                                             << 0x00000037U) 
                                            | (((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[3U])) 
                                                << 0x00000017U) 
                                               | ((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U])) 
                                                  >> 9U)))) 
                                   >> 4U)) | ((0x0e000000U 
                                               & ((IData)(
                                                          (((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U])) 
                                                            << 0x00000037U) 
                                                           | (((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[3U])) 
                                                               << 0x00000017U) 
                                                              | ((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U])) 
                                                                 >> 9U)))) 
                                                  >> 4U)) 
                                              | ((IData)(
                                                         ((((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U])) 
                                                            << 0x00000037U) 
                                                           | (((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[3U])) 
                                                               << 0x00000017U) 
                                                              | ((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U])) 
                                                                 >> 9U))) 
                                                          >> 0x00000020U)) 
                                                 << 0x0000001cU)));
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[4U] 
                = ((0x01ffffffU & ((IData)(((((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U])) 
                                              << 0x00000037U) 
                                             | (((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[3U])) 
                                                 << 0x00000017U) 
                                                | ((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U])) 
                                                   >> 9U))) 
                                            >> 0x00000020U)) 
                                   >> 4U)) | ((0x0e000000U 
                                               & ((IData)(
                                                          ((((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U])) 
                                                             << 0x00000037U) 
                                                            | (((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[3U])) 
                                                                << 0x00000017U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U])) 
                                                                  >> 9U))) 
                                                           >> 0x00000020U)) 
                                                  >> 4U)) 
                                              | ((vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter 
                                                  - (IData)(1U)) 
                                                 << 0x0000001cU)));
            vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[5U] 
                = ((0xf0000000U & vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[5U]) 
                   | ((0x01ffffffU & ((vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter 
                                       - (IData)(1U)) 
                                      >> 4U)) | (0x0e000000U 
                                                 & ((vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter 
                                                     - (IData)(1U)) 
                                                    >> 4U))));
            __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr 
                = ((0x03fffffdU & __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr) 
                   | ((0U == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx)) 
                      << 1U));
            __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr 
                = (2U | __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr);
            __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr 
                = ((0x03fffffeU & __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr) 
                   | ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx) 
                      == ((IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_total_beats) 
                          - (IData)(1U))));
            __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr 
                = (1U | __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr);
            __Vfunc_build_flit__2__payload[0U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[0U];
            __Vfunc_build_flit__2__payload[1U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[1U];
            __Vfunc_build_flit__2__payload[2U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[2U];
            __Vfunc_build_flit__2__payload[3U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[3U];
            __Vfunc_build_flit__2__payload[4U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[4U];
            __Vfunc_build_flit__2__payload[5U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[5U];
            __Vfunc_build_flit__2__payload[6U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[6U];
            __Vfunc_build_flit__2__payload[7U] = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[7U];
            __Vfunc_build_flit__2__hdr = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr;
            __Vfunc_build_flit__2__f[0U] = __Vfunc_build_flit__2__payload[0U];
            __Vfunc_build_flit__2__f[1U] = __Vfunc_build_flit__2__payload[1U];
            __Vfunc_build_flit__2__f[2U] = __Vfunc_build_flit__2__payload[2U];
            __Vfunc_build_flit__2__f[3U] = __Vfunc_build_flit__2__payload[3U];
            __Vfunc_build_flit__2__f[4U] = __Vfunc_build_flit__2__payload[4U];
            __Vfunc_build_flit__2__f[5U] = __Vfunc_build_flit__2__payload[5U];
            __Vfunc_build_flit__2__f[6U] = __Vfunc_build_flit__2__payload[6U];
            __Vfunc_build_flit__2__f[7U] = ((__Vfunc_build_flit__2__hdr 
                                             << 6U) 
                                            | __Vfunc_build_flit__2__payload[7U]);
            if (vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req) {
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_valid_r = 0U;
            } else {
                __Vfunc_build_flit__3__payload[0U] 
                    = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[0U];
                __Vfunc_build_flit__3__payload[1U] 
                    = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[1U];
                __Vfunc_build_flit__3__payload[2U] 
                    = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[2U];
                __Vfunc_build_flit__3__payload[3U] 
                    = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[3U];
                __Vfunc_build_flit__3__payload[4U] 
                    = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[4U];
                __Vfunc_build_flit__3__payload[5U] 
                    = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[5U];
                __Vfunc_build_flit__3__payload[6U] 
                    = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[6U];
                __Vfunc_build_flit__3__payload[7U] 
                    = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload[7U];
                __Vfunc_build_flit__3__hdr = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr;
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_valid_r = 1U;
                __Vfunc_build_flit__3__f[0U] = __Vfunc_build_flit__3__payload[0U];
                __Vfunc_build_flit__3__f[1U] = __Vfunc_build_flit__3__payload[1U];
                __Vfunc_build_flit__3__f[2U] = __Vfunc_build_flit__3__payload[2U];
                __Vfunc_build_flit__3__f[3U] = __Vfunc_build_flit__3__payload[3U];
                __Vfunc_build_flit__3__f[4U] = __Vfunc_build_flit__3__payload[4U];
                __Vfunc_build_flit__3__f[5U] = __Vfunc_build_flit__3__payload[5U];
                __Vfunc_build_flit__3__f[6U] = __Vfunc_build_flit__3__payload[6U];
                __Vfunc_build_flit__3__f[7U] = ((__Vfunc_build_flit__3__hdr 
                                                 << 6U) 
                                                | __Vfunc_build_flit__3__payload[7U]);
                if ((((IData)(1U) + (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx)) 
                     < (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_total_beats))) {
                    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx)));
                } else {
                    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid = 0U;
                    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_total_beats = 0U;
                    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx = 0U;
                    vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__send_state = 0U;
                }
                __Vfunc_build_flit__3__Vfuncout[0U] 
                    = __Vfunc_build_flit__3__f[0U];
                __Vfunc_build_flit__3__Vfuncout[1U] 
                    = __Vfunc_build_flit__3__f[1U];
                __Vfunc_build_flit__3__Vfuncout[2U] 
                    = __Vfunc_build_flit__3__f[2U];
                __Vfunc_build_flit__3__Vfuncout[3U] 
                    = __Vfunc_build_flit__3__f[3U];
                __Vfunc_build_flit__3__Vfuncout[4U] 
                    = __Vfunc_build_flit__3__f[4U];
                __Vfunc_build_flit__3__Vfuncout[5U] 
                    = __Vfunc_build_flit__3__f[5U];
                __Vfunc_build_flit__3__Vfuncout[6U] 
                    = __Vfunc_build_flit__3__f[6U];
                __Vfunc_build_flit__3__Vfuncout[7U] 
                    = __Vfunc_build_flit__3__f[7U];
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[0U] 
                    = __Vfunc_build_flit__3__Vfuncout[0U];
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[1U] 
                    = __Vfunc_build_flit__3__Vfuncout[1U];
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[2U] 
                    = __Vfunc_build_flit__3__Vfuncout[2U];
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[3U] 
                    = __Vfunc_build_flit__3__Vfuncout[3U];
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[4U] 
                    = __Vfunc_build_flit__3__Vfuncout[4U];
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[5U] 
                    = __Vfunc_build_flit__3__Vfuncout[5U];
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[6U] 
                    = __Vfunc_build_flit__3__Vfuncout[6U];
                vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r[7U] 
                    = __Vfunc_build_flit__3__Vfuncout[7U];
            }
        } else {
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__send_state = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter = 0U;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__send_state = 0U;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_total_beats = 0U;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx = 0U;
        vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_valid_r = 0U;
        VL_ASSIGN_W(256, vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r, Vnoc_params__ConstPool__CONST_h9e67c271_0);
    }
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[0U] 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[0U];
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[1U] 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[1U];
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U] 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U];
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[3U] 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[3U];
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U] 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U];
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter;
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_total_beats 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_total_beats;
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx;
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr 
        = ((__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr 
            & __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr) 
           | (vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr 
              & (~ __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr)));
    __VdlyMask__tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr = 0U;
    vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req;
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__send_state 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__send_state;
    vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid 
        = vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid;
    vlSelfRef.tb_tlc_noc_adapter__DOT__noc_req_ready 
        = (1U & (~ (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req)));
    vlSelfRef.tb_tlc_noc_adapter__DOT__a_ready = ((~ (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid)) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__send_state)));
}

void Vnoc_params___024root___eval_nba(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___eval_nba\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_total_beats 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_total_beats;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__send_state 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__send_state;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_data 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_data;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_size 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_size;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_opcode 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_opcode;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_param 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_param;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_txn 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__req_txn;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_valid_r 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__b_valid_r;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[0U] 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[0U];
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[1U] 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[1U];
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[2U] 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum[2U];
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_seen 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_seen;
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[0U] 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[0U];
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[1U] 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[1U];
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U] 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U];
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[3U] 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[3U];
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U] 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U];
        vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid 
            = vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid;
        if (vlSelfRef.tb_tlc_noc_adapter__DOT__rst_n) {
            if ((((~ (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid)) 
                  & (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__a_valid)) 
                 & (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__a_ready))) {
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[0U] 
                    = vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[0U];
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[1U] 
                    = vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[1U];
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[2U] 
                    = vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[2U];
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[3U] 
                    = vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[3U];
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf[4U] 
                    = vlSelfRef.tb_tlc_noc_adapter__DOT__a_bits[4U];
                vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid = 1U;
            }
        } else {
            vlSelfRef.__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid = 0U;
        }
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vnoc_params___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vnoc_params___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vnoc_params___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnoc_params___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vnoc_params___024root___eval_phase__act(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___eval_phase__act\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vnoc_params___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnoc_params___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vnoc_params___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vnoc_params___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vnoc_params___024root___eval_phase__nba(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___eval_phase__nba\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vnoc_params___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vnoc_params___024root___eval_nba(vlSelf);
        Vnoc_params___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vnoc_params___024root___eval(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___eval\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vnoc_params___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_tlc_noc_adapter.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vnoc_params___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb/tb_tlc_noc_adapter.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vnoc_params___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vnoc_params___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vnoc_params___024root___eval_debug_assertions(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___eval_debug_assertions\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
