// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tl_end_to_end.h for the primary calling header

#include "Vtb_tl_end_to_end__pch.h"

void Vtb_tl_end_to_end___024root___eval_triggers_vec__act(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___eval_triggers_vec__act\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.rst_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

bool Vtb_tl_end_to_end___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___trigger_anySet__act\n"); );
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

void Vtb_tl_end_to_end___024root___nba_sequent__TOP__0(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___nba_sequent__TOP__0\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__cycle 
        = vlSelfRef.tb_tl_end_to_end__DOT__cycle;
}

void Vtb_tl_end_to_end___024root___nba_sequent__TOP__1(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___nba_sequent__TOP__1\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_tb_tl_end_to_end__DOT__client__DOT__calc_beats__0__Vfuncout;
    __Vfunc_tb_tl_end_to_end__DOT__client__DOT__calc_beats__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_tl_end_to_end__DOT__client__DOT__calc_beats__0__size;
    __Vfunc_tb_tl_end_to_end__DOT__client__DOT__calc_beats__0__size = 0;
    IData/*31:0*/ __Vfunc_tb_tl_end_to_end__DOT__client__DOT__calc_beats__0__bytes;
    __Vfunc_tb_tl_end_to_end__DOT__client__DOT__calc_beats__0__bytes = 0;
    VlWide<4>/*127:0*/ __Vfunc_build_flit__2__Vfuncout;
    VL_ZERO_W(128, __Vfunc_build_flit__2__Vfuncout);
    QData/*35:0*/ __Vfunc_build_flit__2__hdr;
    __Vfunc_build_flit__2__hdr = 0;
    VlWide<3>/*91:0*/ __Vfunc_build_flit__2__payload;
    VL_ZERO_W(92, __Vfunc_build_flit__2__payload);
    VlWide<4>/*127:0*/ __Vfunc_build_flit__2__f;
    VL_ZERO_W(128, __Vfunc_build_flit__2__f);
    QData/*35:0*/ __Vfunc_extract_hdr__4__Vfuncout;
    __Vfunc_extract_hdr__4__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_extract_hdr__4__flit;
    VL_ZERO_W(128, __Vfunc_extract_hdr__4__flit);
    QData/*35:0*/ __Vfunc_extract_hdr__4__hdr;
    __Vfunc_extract_hdr__4__hdr = 0;
    IData/*31:0*/ __Vdly__tb_tl_end_to_end__DOT__client__DOT__beat_index;
    __Vdly__tb_tl_end_to_end__DOT__client__DOT__beat_index = 0;
    CData/*1:0*/ __Vdly__tb_tl_end_to_end__DOT__client__DOT__state;
    __Vdly__tb_tl_end_to_end__DOT__client__DOT__state = 0;
    IData/*31:0*/ __Vdly__tb_tl_end_to_end__DOT__client__DOT__total_beats;
    __Vdly__tb_tl_end_to_end__DOT__client__DOT__total_beats = 0;
    CData/*0:0*/ __Vdly__tb_tl_end_to_end__DOT__manager__DOT__a_has_reg;
    __Vdly__tb_tl_end_to_end__DOT__manager__DOT__a_has_reg = 0;
    CData/*0:0*/ __Vdly__tb_tl_end_to_end__DOT__manager__DOT__present_a;
    __Vdly__tb_tl_end_to_end__DOT__manager__DOT__present_a = 0;
    // Body
    __Vdly__tb_tl_end_to_end__DOT__client__DOT__beat_index 
        = vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__beat_index;
    __Vdly__tb_tl_end_to_end__DOT__client__DOT__total_beats 
        = vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__total_beats;
    __Vdly__tb_tl_end_to_end__DOT__client__DOT__state 
        = vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__state;
    __Vdly__tb_tl_end_to_end__DOT__manager__DOT__a_has_reg 
        = vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_has_reg;
    __Vdly__tb_tl_end_to_end__DOT__manager__DOT__present_a 
        = vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__present_a;
    vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[0U] 
        = vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[0U];
    vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[1U] 
        = vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[1U];
    vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[2U] 
        = vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[2U];
    vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[3U] 
        = vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[3U];
    vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[4U] 
        = vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[4U];
    vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[5U] 
        = vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[5U];
    vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[6U] 
        = vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[6U];
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_pulse) {
            __Vdly__tb_tl_end_to_end__DOT__manager__DOT__present_a = 1U;
        } else if (vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__present_a) {
            __Vdly__tb_tl_end_to_end__DOT__manager__DOT__present_a = 0U;
        }
        vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_pulse = 0U;
        if (vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_valid) {
            __Vdly__tb_tl_end_to_end__DOT__manager__DOT__a_has_reg = 1U;
            vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_payload_reg[0U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit[0U];
            vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_payload_reg[1U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit[1U];
            vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_payload_reg[2U] 
                = (0x0fffffffU & vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit[2U]);
            __Vfunc_extract_hdr__4__flit[0U] = vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit[0U];
            __Vfunc_extract_hdr__4__flit[1U] = vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit[1U];
            __Vfunc_extract_hdr__4__flit[2U] = vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit[2U];
            __Vfunc_extract_hdr__4__flit[3U] = vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit[3U];
            __Vfunc_extract_hdr__4__hdr = (0x0000000fffffffffULL 
                                           & (((QData)((IData)(__Vfunc_extract_hdr__4__flit[3U])) 
                                               << 4U) 
                                              | ((QData)((IData)(__Vfunc_extract_hdr__4__flit[2U])) 
                                                 >> 0x0000001cU)));
            __Vfunc_extract_hdr__4__Vfuncout = __Vfunc_extract_hdr__4__hdr;
            vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_hdr_reg 
                = __Vfunc_extract_hdr__4__Vfuncout;
            vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_pulse = 1U;
        } else if (vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_has_reg) {
            __Vdly__tb_tl_end_to_end__DOT__manager__DOT__a_has_reg = 0U;
        }
        vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_valid = 0U;
        if ((0U == (IData)(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__state))) {
            if (vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg_valid) {
                __Vfunc_tb_tl_end_to_end__DOT__client__DOT__calc_beats__0__size 
                    = (0x0000000fU & (vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[6U] 
                                      >> 9U));
                __Vfunc_tb_tl_end_to_end__DOT__client__DOT__calc_beats__0__bytes 
                    = ((IData)(1U) << (IData)(__Vfunc_tb_tl_end_to_end__DOT__client__DOT__calc_beats__0__size));
                __Vfunc_tb_tl_end_to_end__DOT__client__DOT__calc_beats__0__Vfuncout 
                    = VL_DIVS_III(32, __Vfunc_tb_tl_end_to_end__DOT__client__DOT__calc_beats__0__bytes, (IData)(0x00000010U));
                __Vdly__tb_tl_end_to_end__DOT__client__DOT__beat_index = 0U;
                __Vdly__tb_tl_end_to_end__DOT__client__DOT__state = 1U;
                __Vdly__tb_tl_end_to_end__DOT__client__DOT__total_beats 
                    = __Vfunc_tb_tl_end_to_end__DOT__client__DOT__calc_beats__0__Vfuncout;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__state))) {
            vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__unnamedblk1__DOT__hdr 
                = ((0x000000001fffffffULL & vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__unnamedblk1__DOT__hdr) 
                   | ((QData)((IData)((3U | (0x00000078U 
                                             & (vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[4U] 
                                                >> 0x0000000eU))))) 
                      << 0x0000001dU));
            vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__unnamedblk1__DOT__hdr 
                = ((0x0000000fe00003ffULL & vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__unnamedblk1__DOT__hdr) 
                   | ((QData)((IData)((0x0000ff00U 
                                       & (vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[6U] 
                                          << 7U)))) 
                      << 0x0000000aU));
            vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_valid = 1U;
            vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__unnamedblk1__DOT__hdr 
                = ((0x0000000ffffffc00ULL & vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__unnamedblk1__DOT__hdr) 
                   | (IData)((IData)(((0x000003fcU 
                                       & (vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[6U] 
                                          << 1U)) | 
                                      (((0U == vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__beat_index) 
                                        << 1U) | (vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__beat_index 
                                                  == 
                                                  (vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__total_beats 
                                                   - (IData)(1U))))))));
            __Vfunc_build_flit__2__payload[0U] = vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[0U];
            __Vfunc_build_flit__2__payload[1U] = vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[1U];
            __Vfunc_build_flit__2__payload[2U] = (0x0fffffffU 
                                                  & vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[2U]);
            __Vfunc_build_flit__2__hdr = vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__unnamedblk1__DOT__hdr;
            __Vfunc_build_flit__2__f[0U] = __Vfunc_build_flit__2__payload[0U];
            __Vfunc_build_flit__2__f[1U] = __Vfunc_build_flit__2__payload[1U];
            __Vfunc_build_flit__2__f[2U] = (((IData)(__Vfunc_build_flit__2__hdr) 
                                             << 0x0000001cU) 
                                            | __Vfunc_build_flit__2__payload[2U]);
            __Vfunc_build_flit__2__f[3U] = (((IData)(__Vfunc_build_flit__2__hdr) 
                                             >> 4U) 
                                            | ((IData)(
                                                       (__Vfunc_build_flit__2__hdr 
                                                        >> 0x00000020U)) 
                                               << 0x0000001cU));
            __Vfunc_build_flit__2__Vfuncout[0U] = __Vfunc_build_flit__2__f[0U];
            __Vfunc_build_flit__2__Vfuncout[1U] = __Vfunc_build_flit__2__f[1U];
            __Vfunc_build_flit__2__Vfuncout[2U] = __Vfunc_build_flit__2__f[2U];
            __Vfunc_build_flit__2__Vfuncout[3U] = __Vfunc_build_flit__2__f[3U];
            vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit[0U] 
                = __Vfunc_build_flit__2__Vfuncout[0U];
            vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit[1U] 
                = __Vfunc_build_flit__2__Vfuncout[1U];
            vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit[2U] 
                = __Vfunc_build_flit__2__Vfuncout[2U];
            vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit[3U] 
                = __Vfunc_build_flit__2__Vfuncout[3U];
            if ((vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__beat_index 
                 == (vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__total_beats 
                     - (IData)(1U)))) {
                __Vdly__tb_tl_end_to_end__DOT__client__DOT__state = 0U;
            }
            __Vdly__tb_tl_end_to_end__DOT__client__DOT__beat_index 
                = ((IData)(1U) + vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__beat_index);
        } else {
            __Vdly__tb_tl_end_to_end__DOT__client__DOT__state = 0U;
        }
        if (((IData)(vlSelfRef.tb_tl_end_to_end__DOT__a_valid) 
             & (IData)(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_ready))) {
            vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[0U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__a_bits[0U];
            vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[1U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__a_bits[1U];
            vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[2U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__a_bits[2U];
            vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[3U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__a_bits[3U];
            vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[4U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__a_bits[4U];
            vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[5U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__a_bits[5U];
            vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[6U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__a_bits[6U];
            vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg_valid = 1U;
        } else if ((0U == (IData)(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__state))) {
            vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg_valid = 0U;
        }
    } else {
        __Vdly__tb_tl_end_to_end__DOT__manager__DOT__a_has_reg = 0U;
        __Vdly__tb_tl_end_to_end__DOT__manager__DOT__present_a = 0U;
        vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[0U] = 0U;
        vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[1U] = 0U;
        vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[2U] = 0U;
        vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[3U] = 0U;
        vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[4U] = 0U;
        vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[5U] = 0U;
        vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[6U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_payload_reg[0U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_payload_reg[1U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_payload_reg[2U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_hdr_reg = 0ULL;
        vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_pulse = 0U;
        __Vdly__tb_tl_end_to_end__DOT__client__DOT__state = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_valid = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit[0U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit[1U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit[2U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit[3U] = 0U;
        __Vdly__tb_tl_end_to_end__DOT__client__DOT__total_beats = 0U;
        __Vdly__tb_tl_end_to_end__DOT__client__DOT__beat_index = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg_valid = 0U;
    }
    vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_has_reg 
        = __Vdly__tb_tl_end_to_end__DOT__manager__DOT__a_has_reg;
    vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__present_a 
        = __Vdly__tb_tl_end_to_end__DOT__manager__DOT__present_a;
    vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__beat_index 
        = __Vdly__tb_tl_end_to_end__DOT__client__DOT__beat_index;
    vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__total_beats 
        = __Vdly__tb_tl_end_to_end__DOT__client__DOT__total_beats;
    vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__state 
        = __Vdly__tb_tl_end_to_end__DOT__client__DOT__state;
    vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_ready 
        = ((~ (IData)(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg_valid)) 
           & (0U == (IData)(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__state)));
}

void Vtb_tl_end_to_end___024root___nba_sequent__TOP__2(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___nba_sequent__TOP__2\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__cycle 
            = ((IData)(1U) + vlSelfRef.tb_tl_end_to_end__DOT__cycle);
        if (VL_UNLIKELY((vlSelfRef.tb_tl_end_to_end__DOT__d_valid))) {
            __Vtemp_1[0U] = vlSelfRef.tb_tl_end_to_end__DOT__d_bits[0U];
            __Vtemp_1[1U] = vlSelfRef.tb_tl_end_to_end__DOT__d_bits[1U];
            __Vtemp_1[2U] = vlSelfRef.tb_tl_end_to_end__DOT__d_bits[2U];
            __Vtemp_1[3U] = vlSelfRef.tb_tl_end_to_end__DOT__d_bits[3U];
            VL_WRITEF_NX("Received D response: %x\n",0,
                         128,__Vtemp_1.data());
            VL_FINISH_MT("tb/tb_tl_end_to_end.sv", 167, "");
        }
        if ((5U == vlSelfRef.tb_tl_end_to_end__DOT__cycle)) {
            vlSelfRef.tb_tl_end_to_end__DOT__a_valid = 1U;
            vlSelfRef.tb_tl_end_to_end__DOT__a_bits[0U] = 0x44556677U;
            vlSelfRef.tb_tl_end_to_end__DOT__a_bits[1U] = 0x00112233U;
            vlSelfRef.tb_tl_end_to_end__DOT__a_bits[2U] = 0xcafebabeU;
            vlSelfRef.tb_tl_end_to_end__DOT__a_bits[3U] = 0xdeadbeefU;
            vlSelfRef.tb_tl_end_to_end__DOT__a_bits[4U] = 0x0003fffeU;
            vlSelfRef.tb_tl_end_to_end__DOT__a_bits[5U] = 0U;
            vlSelfRef.tb_tl_end_to_end__DOT__a_bits[6U] = 0x00000954U;
        } else {
            vlSelfRef.tb_tl_end_to_end__DOT__a_valid = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__cycle = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__a_valid = 0U;
    }
    vlSelfRef.tb_tl_end_to_end__DOT__cycle = vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__cycle;
}

void Vtb_tl_end_to_end___024root___nba_sequent__TOP__3(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___nba_sequent__TOP__3\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*35:0*/ __Vfunc_extract_hdr__3__Vfuncout;
    __Vfunc_extract_hdr__3__Vfuncout = 0;
    VlWide<4>/*127:0*/ __Vfunc_extract_hdr__3__flit;
    VL_ZERO_W(128, __Vfunc_extract_hdr__3__flit);
    QData/*35:0*/ __Vfunc_extract_hdr__3__hdr;
    __Vfunc_extract_hdr__3__hdr = 0;
    VlWide<4>/*127:0*/ __Vfunc_build_flit__6__Vfuncout;
    VL_ZERO_W(128, __Vfunc_build_flit__6__Vfuncout);
    QData/*35:0*/ __Vfunc_build_flit__6__hdr;
    __Vfunc_build_flit__6__hdr = 0;
    VlWide<3>/*91:0*/ __Vfunc_build_flit__6__payload;
    VL_ZERO_W(92, __Vfunc_build_flit__6__payload);
    VlWide<4>/*127:0*/ __Vfunc_build_flit__6__f;
    VL_ZERO_W(128, __Vfunc_build_flit__6__f);
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.tb_tl_end_to_end__DOT__d_valid = 0U;
        if (vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_valid) {
            __Vfunc_extract_hdr__3__flit[0U] = vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[0U];
            __Vfunc_extract_hdr__3__flit[1U] = vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[1U];
            __Vfunc_extract_hdr__3__flit[2U] = vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[2U];
            __Vfunc_extract_hdr__3__flit[3U] = vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[3U];
            __Vfunc_extract_hdr__3__hdr = (0x0000000fffffffffULL 
                                           & (((QData)((IData)(__Vfunc_extract_hdr__3__flit[3U])) 
                                               << 4U) 
                                              | ((QData)((IData)(__Vfunc_extract_hdr__3__flit[2U])) 
                                                 >> 0x0000001cU)));
            __Vfunc_extract_hdr__3__Vfuncout = __Vfunc_extract_hdr__3__hdr;
            vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__unnamedblk2__DOT__hdr 
                = __Vfunc_extract_hdr__3__Vfuncout;
            if ((3U == (7U & (IData)((vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__unnamedblk2__DOT__hdr 
                                      >> 0x0000001aU))))) {
                vlSelfRef.tb_tl_end_to_end__DOT__d_valid = 1U;
                vlSelfRef.tb_tl_end_to_end__DOT__d_bits[4U] 
                    = ((0x000003ffU & vlSelfRef.tb_tl_end_to_end__DOT__d_bits[4U]) 
                       | (0x0fffffffU & (((0x00000f00U 
                                           & (vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[6U] 
                                              >> 1U)) 
                                          | (0x000000ffU 
                                             & (IData)(
                                                       (vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__unnamedblk2__DOT__hdr 
                                                        >> 0x00000012U)))) 
                                         << 0x0000000aU)));
                vlSelfRef.tb_tl_end_to_end__DOT__d_bits[0U] 
                    = vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[0U];
                vlSelfRef.tb_tl_end_to_end__DOT__d_bits[1U] 
                    = vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[1U];
                vlSelfRef.tb_tl_end_to_end__DOT__d_bits[2U] 
                    = (0x0fffffffU & vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[2U]);
                vlSelfRef.tb_tl_end_to_end__DOT__d_bits[3U] = 0U;
                vlSelfRef.tb_tl_end_to_end__DOT__d_bits[4U] 
                    = ((0x0ffffc00U & vlSelfRef.tb_tl_end_to_end__DOT__d_bits[4U]) 
                       | (0x000003fcU & ((IData)((vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__unnamedblk2__DOT__hdr 
                                                  >> 0x0000000aU)) 
                                         << 2U)));
            }
        }
        vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_valid = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[0U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[1U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[2U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[3U] = 0U;
        if (vlSelfRef.tb_tl_end_to_end__DOT__m_d_valid) {
            vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_valid = 1U;
            vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__unnamedblk1__DOT__ohdr 
                = ((0x000000001fffffffULL & vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__unnamedblk1__DOT__ohdr) 
                   | ((QData)((IData)((5U | (0x00000078U 
                                             & (vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[4U] 
                                                << 1U))))) 
                      << 0x0000001dU));
            vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__unnamedblk1__DOT__ohdr 
                = ((0x0000000fe0000000ULL & vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__unnamedblk1__DOT__ohdr) 
                   | (IData)((IData)((0x0c000003U | 
                                      ((0x03fffc00U 
                                        & (vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[4U] 
                                           << 8U)) 
                                       | (0x000003fcU 
                                          & (vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[4U] 
                                             >> 8U)))))));
            vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__payload[0U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[0U];
            vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__payload[1U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[1U];
            vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__payload[2U] 
                = (0x0fffffffU & vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[2U]);
            __Vfunc_build_flit__6__payload[0U] = vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__payload[0U];
            __Vfunc_build_flit__6__payload[1U] = vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__payload[1U];
            __Vfunc_build_flit__6__payload[2U] = vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__payload[2U];
            __Vfunc_build_flit__6__hdr = vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__unnamedblk1__DOT__ohdr;
            __Vfunc_build_flit__6__f[0U] = __Vfunc_build_flit__6__payload[0U];
            __Vfunc_build_flit__6__f[1U] = __Vfunc_build_flit__6__payload[1U];
            __Vfunc_build_flit__6__f[2U] = (((IData)(__Vfunc_build_flit__6__hdr) 
                                             << 0x0000001cU) 
                                            | __Vfunc_build_flit__6__payload[2U]);
            __Vfunc_build_flit__6__f[3U] = (((IData)(__Vfunc_build_flit__6__hdr) 
                                             >> 4U) 
                                            | ((IData)(
                                                       (__Vfunc_build_flit__6__hdr 
                                                        >> 0x00000020U)) 
                                               << 0x0000001cU));
            __Vfunc_build_flit__6__Vfuncout[0U] = __Vfunc_build_flit__6__f[0U];
            __Vfunc_build_flit__6__Vfuncout[1U] = __Vfunc_build_flit__6__f[1U];
            __Vfunc_build_flit__6__Vfuncout[2U] = __Vfunc_build_flit__6__f[2U];
            __Vfunc_build_flit__6__Vfuncout[3U] = __Vfunc_build_flit__6__f[3U];
            vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[0U] 
                = __Vfunc_build_flit__6__Vfuncout[0U];
            vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[1U] 
                = __Vfunc_build_flit__6__Vfuncout[1U];
            vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[2U] 
                = __Vfunc_build_flit__6__Vfuncout[2U];
            vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[3U] 
                = __Vfunc_build_flit__6__Vfuncout[3U];
        }
        vlSelfRef.tb_tl_end_to_end__DOT__m_d_valid = 0U;
        if (vlSelfRef.tb_tl_end_to_end__DOT__m_a_valid) {
            vlSelfRef.tb_tl_end_to_end__DOT__m_d_valid = 1U;
            vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[4U] 
                = ((0x000003ffU & vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[4U]) 
                   | (0x0fffffffU & (((0x00000f00U 
                                       & (vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[6U] 
                                          >> 1U)) | 
                                      (0x000000ffU 
                                       & (vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[6U] 
                                          >> 1U))) 
                                     << 0x0000000aU)));
            vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[0U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[0U];
            vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[1U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[1U];
            vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[2U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[2U];
            vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[3U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[3U];
            vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[4U] 
                = ((0x0ffffc00U & vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[4U]) 
                   | (0x000003fcU & (vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[6U] 
                                     << 1U)));
        }
    } else {
        vlSelfRef.tb_tl_end_to_end__DOT__d_valid = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__d_bits[0U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__d_bits[1U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__d_bits[2U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__d_bits[3U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__d_bits[4U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_valid = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[0U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[1U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[2U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit[3U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__m_d_valid = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[0U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[1U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[2U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[3U] = 0U;
        vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits[4U] = 0U;
    }
    vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[0U] 
        = vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[0U];
    vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[1U] 
        = vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[1U];
    vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[2U] 
        = vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[2U];
    vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[3U] 
        = vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[3U];
    vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[4U] 
        = vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[4U];
    vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[5U] 
        = vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[5U];
    vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg[6U] 
        = vlSelfRef.__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg[6U];
    vlSelfRef.tb_tl_end_to_end__DOT__m_a_valid = 0U;
    vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[0U] = 0U;
    vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[1U] = 0U;
    vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[2U] = 0U;
    vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[3U] = 0U;
    vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[4U] = 0U;
    vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[5U] = 0U;
    vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[6U] = 0U;
    if (vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__present_a) {
        if ((0U == (7U & (IData)((vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_hdr_reg 
                                  >> 0x0000001aU))))) {
            vlSelfRef.tb_tl_end_to_end__DOT__m_a_valid = 1U;
            vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[6U] 
                = (0x000001ffU & vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[6U]);
            vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[4U] 
                = ((0x0001ffffU & vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[4U]) 
                   | ((IData)((((QData)((IData)((0x000000ffU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_hdr_reg 
                                                            >> 0x00000012U))))) 
                                << 0x00000030U) | (QData)((IData)(
                                                                  (0x0000000fU 
                                                                   & (IData)(
                                                                             (vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_hdr_reg 
                                                                              >> 0x00000020U))))))) 
                      << 0x00000011U));
            vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[5U] 
                = (((IData)((((QData)((IData)((0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_hdr_reg 
                                                          >> 0x00000012U))))) 
                              << 0x00000030U) | (QData)((IData)(
                                                                (0x0000000fU 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_hdr_reg 
                                                                            >> 0x00000020U))))))) 
                    >> 0x0000000fU) | ((IData)(((((QData)((IData)(
                                                                  (0x000000ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_hdr_reg 
                                                                              >> 0x00000012U))))) 
                                                  << 0x00000030U) 
                                                 | (QData)((IData)(
                                                                   (0x0000000fU 
                                                                    & (IData)(
                                                                              (vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_hdr_reg 
                                                                               >> 0x00000020U)))))) 
                                                >> 0x00000020U)) 
                                       << 0x00000011U));
            vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[6U] 
                = ((0x0007fe00U & vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[6U]) 
                   | (0x0007ffffU & ((IData)(((((QData)((IData)(
                                                                (0x000000ffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_hdr_reg 
                                                                            >> 0x00000012U))))) 
                                                << 0x00000030U) 
                                               | (QData)((IData)(
                                                                 (0x0000000fU 
                                                                  & (IData)(
                                                                            (vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_hdr_reg 
                                                                             >> 0x00000020U)))))) 
                                              >> 0x00000020U)) 
                                     >> 0x0000000fU)));
            vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[0U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_payload_reg[0U];
            vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[1U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_payload_reg[1U];
            vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[2U] 
                = vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_payload_reg[2U];
            vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[3U] = 0U;
            vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[4U] 
                = (0xfffe0000U & vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits[4U]);
        } else {
            vlSelfRef.tb_tl_end_to_end__DOT__m_a_valid = 0U;
        }
    }
}

void Vtb_tl_end_to_end___024root___eval_nba(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___eval_nba\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_tl_end_to_end___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_tl_end_to_end___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_tl_end_to_end___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_tl_end_to_end___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_tl_end_to_end___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_tl_end_to_end___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_tl_end_to_end___024root___eval_phase__act(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___eval_phase__act\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_tl_end_to_end___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_tl_end_to_end___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_tl_end_to_end___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtb_tl_end_to_end___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_tl_end_to_end___024root___eval_phase__nba(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___eval_phase__nba\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_tl_end_to_end___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_tl_end_to_end___024root___eval_nba(vlSelf);
        Vtb_tl_end_to_end___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_tl_end_to_end___024root___eval(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___eval\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_tl_end_to_end___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_tl_end_to_end.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_tl_end_to_end___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb/tb_tl_end_to_end.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtb_tl_end_to_end___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_tl_end_to_end___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_tl_end_to_end___024root___eval_debug_assertions(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___eval_debug_assertions\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
}
#endif  // VL_DEBUG
