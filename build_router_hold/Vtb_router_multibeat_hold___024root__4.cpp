// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_router_multibeat_hold.h for the primary calling header

#include "Vtb_router_multibeat_hold__pch.h"

void Vtb_router_multibeat_hold___024root___nba_sequent__TOP__5(Vtb_router_multibeat_hold___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root___nba_sequent__TOP__5\n"); );
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vfunc_build_flit__0__Vfuncout;
    VL_ZERO_W(128, __Vfunc_build_flit__0__Vfuncout);
    QData/*35:0*/ __Vfunc_build_flit__0__hdr;
    __Vfunc_build_flit__0__hdr = 0;
    VlWide<3>/*91:0*/ __Vfunc_build_flit__0__payload;
    VL_ZERO_W(92, __Vfunc_build_flit__0__payload);
    VlWide<4>/*127:0*/ __Vfunc_build_flit__0__f;
    VL_ZERO_W(128, __Vfunc_build_flit__0__f);
    VlWide<4>/*127:0*/ __Vfunc_build_flit__1__Vfuncout;
    VL_ZERO_W(128, __Vfunc_build_flit__1__Vfuncout);
    QData/*35:0*/ __Vfunc_build_flit__1__hdr;
    __Vfunc_build_flit__1__hdr = 0;
    VlWide<3>/*91:0*/ __Vfunc_build_flit__1__payload;
    VL_ZERO_W(92, __Vfunc_build_flit__1__payload);
    VlWide<4>/*127:0*/ __Vfunc_build_flit__1__f;
    VL_ZERO_W(128, __Vfunc_build_flit__1__f);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.__Vdly__tb_router_multibeat_hold__DOT__cycle 
            = ((IData)(1U) + vlSelfRef.tb_router_multibeat_hold__DOT__cycle);
        if ((VL_LTES_III(32, 2U, vlSelfRef.tb_router_multibeat_hold__DOT__cycle) 
             & VL_GTES_III(32, 4U, vlSelfRef.tb_router_multibeat_hold__DOT__cycle))) {
            if ((0x00000010U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_ready))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__hdr 
                    = (4ULL | (QData)((IData)((((2U 
                                                 == vlSelfRef.tb_router_multibeat_hold__DOT__cycle) 
                                                << 1U) 
                                               | (4U 
                                                  == vlSelfRef.tb_router_multibeat_hold__DOT__cycle)))));
                VL_EXTENDS_WI(92,32, __Vtemp_2, vlSelfRef.tb_router_multibeat_hold__DOT__cycle);
                __Vfunc_build_flit__0__payload[0U] 
                    = __Vtemp_2[0U];
                __Vfunc_build_flit__0__payload[1U] 
                    = __Vtemp_2[1U];
                __Vfunc_build_flit__0__payload[2U] 
                    = (0x0fffffffU & __Vtemp_2[2U]);
                __Vfunc_build_flit__0__hdr = vlSelfRef.tb_router_multibeat_hold__DOT__hdr;
                vlSelfRef.tb_router_multibeat_hold__DOT__in_valid 
                    = (0x00000010U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__in_valid));
                __Vfunc_build_flit__0__f[0U] = __Vfunc_build_flit__0__payload[0U];
                __Vfunc_build_flit__0__f[1U] = __Vfunc_build_flit__0__payload[1U];
                __Vfunc_build_flit__0__f[2U] = (((IData)(__Vfunc_build_flit__0__hdr) 
                                                 << 0x0000001cU) 
                                                | __Vfunc_build_flit__0__payload[2U]);
                __Vfunc_build_flit__0__f[3U] = (((IData)(__Vfunc_build_flit__0__hdr) 
                                                 >> 4U) 
                                                | ((IData)(
                                                           (__Vfunc_build_flit__0__hdr 
                                                            >> 0x00000020U)) 
                                                   << 0x0000001cU));
                __Vfunc_build_flit__0__Vfuncout[0U] 
                    = __Vfunc_build_flit__0__f[0U];
                __Vfunc_build_flit__0__Vfuncout[1U] 
                    = __Vfunc_build_flit__0__f[1U];
                __Vfunc_build_flit__0__Vfuncout[2U] 
                    = __Vfunc_build_flit__0__f[2U];
                __Vfunc_build_flit__0__Vfuncout[3U] 
                    = __Vfunc_build_flit__0__f[3U];
                vlSelfRef.tb_router_multibeat_hold__DOT__in_flit[16U] 
                    = __Vfunc_build_flit__0__Vfuncout[0U];
                vlSelfRef.tb_router_multibeat_hold__DOT__in_flit[17U] 
                    = __Vfunc_build_flit__0__Vfuncout[1U];
                vlSelfRef.tb_router_multibeat_hold__DOT__in_flit[18U] 
                    = __Vfunc_build_flit__0__Vfuncout[2U];
                vlSelfRef.tb_router_multibeat_hold__DOT__in_flit[19U] 
                    = __Vfunc_build_flit__0__Vfuncout[3U];
            }
        } else {
            vlSelfRef.tb_router_multibeat_hold__DOT__in_valid 
                = (0x0fU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__in_valid));
        }
        if ((VL_LTES_III(32, 2U, vlSelfRef.tb_router_multibeat_hold__DOT__cycle) 
             & VL_GTES_III(32, 0x0000000aU, vlSelfRef.tb_router_multibeat_hold__DOT__cycle))) {
            if ((8U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_ready))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__hdr 
                    = ((1ULL & vlSelfRef.tb_router_multibeat_hold__DOT__hdr) 
                       | (0x0000000020040000ULL | ((QData)((IData)(
                                                                   (1U 
                                                                    | (0x000001feU 
                                                                       & (vlSelfRef.tb_router_multibeat_hold__DOT__cycle 
                                                                          << 1U))))) 
                                                   << 1U)));
                vlSelfRef.tb_router_multibeat_hold__DOT__hdr 
                    = (1ULL | vlSelfRef.tb_router_multibeat_hold__DOT__hdr);
                vlSelfRef.tb_router_multibeat_hold__DOT__in_valid 
                    = (8U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__in_valid));
                VL_EXTENDS_WI(92,32, __Vtemp_4, vlSelfRef.tb_router_multibeat_hold__DOT__cycle);
                __Vfunc_build_flit__1__payload[0U] 
                    = __Vtemp_4[0U];
                __Vfunc_build_flit__1__payload[1U] 
                    = __Vtemp_4[1U];
                __Vfunc_build_flit__1__payload[2U] 
                    = (0x0fffffffU & __Vtemp_4[2U]);
                __Vfunc_build_flit__1__hdr = vlSelfRef.tb_router_multibeat_hold__DOT__hdr;
                __Vfunc_build_flit__1__f[0U] = __Vfunc_build_flit__1__payload[0U];
                __Vfunc_build_flit__1__f[1U] = __Vfunc_build_flit__1__payload[1U];
                __Vfunc_build_flit__1__f[2U] = (((IData)(__Vfunc_build_flit__1__hdr) 
                                                 << 0x0000001cU) 
                                                | __Vfunc_build_flit__1__payload[2U]);
                __Vfunc_build_flit__1__f[3U] = (((IData)(__Vfunc_build_flit__1__hdr) 
                                                 >> 4U) 
                                                | ((IData)(
                                                           (__Vfunc_build_flit__1__hdr 
                                                            >> 0x00000020U)) 
                                                   << 0x0000001cU));
                __Vfunc_build_flit__1__Vfuncout[0U] 
                    = __Vfunc_build_flit__1__f[0U];
                __Vfunc_build_flit__1__Vfuncout[1U] 
                    = __Vfunc_build_flit__1__f[1U];
                __Vfunc_build_flit__1__Vfuncout[2U] 
                    = __Vfunc_build_flit__1__f[2U];
                __Vfunc_build_flit__1__Vfuncout[3U] 
                    = __Vfunc_build_flit__1__f[3U];
                vlSelfRef.tb_router_multibeat_hold__DOT__in_flit[12U] 
                    = __Vfunc_build_flit__1__Vfuncout[0U];
                vlSelfRef.tb_router_multibeat_hold__DOT__in_flit[13U] 
                    = __Vfunc_build_flit__1__Vfuncout[1U];
                vlSelfRef.tb_router_multibeat_hold__DOT__in_flit[14U] 
                    = __Vfunc_build_flit__1__Vfuncout[2U];
                vlSelfRef.tb_router_multibeat_hold__DOT__in_flit[15U] 
                    = __Vfunc_build_flit__1__Vfuncout[3U];
            }
        } else {
            vlSelfRef.tb_router_multibeat_hold__DOT__in_valid 
                = (0x17U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__in_valid));
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x0000001eU, vlSelfRef.tb_router_multibeat_hold__DOT__cycle)))) {
            VL_WRITEF_NX("Multibeat hold test complete.\n",0);
            VL_FINISH_MT("tb/tb_router_multibeat_hold.sv", 98, "");
        }
    } else {
        vlSelfRef.__Vdly__tb_router_multibeat_hold__DOT__cycle = 0U;
        vlSelfRef.tb_router_multibeat_hold__DOT__in_valid = 0U;
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__cycle 
        = vlSelfRef.__Vdly__tb_router_multibeat_hold__DOT__cycle;
}

void Vtb_router_multibeat_hold___024root___nba_sequent__TOP__6(Vtb_router_multibeat_hold___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root___nba_sequent__TOP__6\n"); );
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_ready 
        = ((((4U & ((~ ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid) 
                        >> 4U)) << 2U)) | ((2U & ((~ 
                                                   ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid) 
                                                    >> 3U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid) 
                                                  >> 2U))))) 
            << 2U) | ((2U & ((~ ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid) 
                                 >> 1U)) << 1U)) | 
                      (1U & (~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid)))));
}

void Vtb_router_multibeat_hold___024root___nba_sequent__TOP__0(Vtb_router_multibeat_hold___024root* vlSelf);
void Vtb_router_multibeat_hold___024root___nba_sequent__TOP__1(Vtb_router_multibeat_hold___024root* vlSelf);
void Vtb_router_multibeat_hold___024root___nba_sequent__TOP__2(Vtb_router_multibeat_hold___024root* vlSelf);
void Vtb_router_multibeat_hold___024root___nba_sequent__TOP__3(Vtb_router_multibeat_hold___024root* vlSelf);
void Vtb_router_multibeat_hold___024root___nba_sequent__TOP__4(Vtb_router_multibeat_hold___024root* vlSelf);

void Vtb_router_multibeat_hold___024root___eval_nba(Vtb_router_multibeat_hold___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root___eval_nba\n"); );
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_router_multibeat_hold___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_router_multibeat_hold___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vtb_router_multibeat_hold___024root___nba_sequent__TOP__2(vlSelf);
        Vtb_router_multibeat_hold___024root___nba_sequent__TOP__3(vlSelf);
        Vtb_router_multibeat_hold___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_router_multibeat_hold___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_router_multibeat_hold___024root___nba_sequent__TOP__6(vlSelf);
    }
}

void Vtb_router_multibeat_hold___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_router_multibeat_hold___024root___eval_triggers_vec__act(Vtb_router_multibeat_hold___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_router_multibeat_hold___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_router_multibeat_hold___024root___eval_phase__act(Vtb_router_multibeat_hold___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root___eval_phase__act\n"); );
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_router_multibeat_hold___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_router_multibeat_hold___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_router_multibeat_hold___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtb_router_multibeat_hold___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_router_multibeat_hold___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtb_router_multibeat_hold___024root___eval_phase__nba(Vtb_router_multibeat_hold___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root___eval_phase__nba\n"); );
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_router_multibeat_hold___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_router_multibeat_hold___024root___eval_nba(vlSelf);
        Vtb_router_multibeat_hold___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_router_multibeat_hold___024root___eval(Vtb_router_multibeat_hold___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root___eval\n"); );
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_router_multibeat_hold___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_router_multibeat_hold.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_router_multibeat_hold___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb/tb_router_multibeat_hold.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtb_router_multibeat_hold___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_router_multibeat_hold___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_router_multibeat_hold___024root___eval_debug_assertions(Vtb_router_multibeat_hold___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root___eval_debug_assertions\n"); );
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
