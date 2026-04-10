// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tl_end_to_end.h for the primary calling header

#include "Vtb_tl_end_to_end__pch.h"

VL_ATTR_COLD void Vtb_tl_end_to_end___024root___eval_static__TOP(Vtb_tl_end_to_end___024root* vlSelf);
VL_ATTR_COLD void Vtb_tl_end_to_end___024root____Vm_traceActivitySetAll(Vtb_tl_end_to_end___024root* vlSelf);

VL_ATTR_COLD void Vtb_tl_end_to_end___024root___eval_static(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___eval_static\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_tl_end_to_end___024root___eval_static__TOP(vlSelf);
    Vtb_tl_end_to_end___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vtb_tl_end_to_end___024root___eval_static__TOP(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___eval_static__TOP\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_tl_end_to_end__DOT__client__DOT__unnamedblk1__DOT__hdr = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 17486479461968157241ull);
    vlSelf->tb_tl_end_to_end__DOT__client__DOT__unnamedblk2__DOT__hdr = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 16469266404289906568ull);
    vlSelf->tb_tl_end_to_end__DOT__manager__DOT__unnamedblk1__DOT__ohdr = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 5435130399347948854ull);
}

VL_ATTR_COLD void Vtb_tl_end_to_end___024root___eval_initial__TOP(Vtb_tl_end_to_end___024root* vlSelf);

VL_ATTR_COLD void Vtb_tl_end_to_end___024root___eval_initial(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___eval_initial\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_tl_end_to_end___024root___eval_initial__TOP(vlSelf);
    Vtb_tl_end_to_end___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtb_tl_end_to_end___024root___eval_initial__TOP(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___eval_initial__TOP\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tl_end_to_end__DOT__cycle = 0U;
}

VL_ATTR_COLD void Vtb_tl_end_to_end___024root___eval_final(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___eval_final\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tl_end_to_end___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_tl_end_to_end___024root___eval_phase__stl(Vtb_tl_end_to_end___024root* vlSelf);

VL_ATTR_COLD void Vtb_tl_end_to_end___024root___eval_settle(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___eval_settle\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_tl_end_to_end___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_tl_end_to_end.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_tl_end_to_end___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_tl_end_to_end___024root___eval_triggers_vec__stl(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___eval_triggers_vec__stl\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_tl_end_to_end___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tl_end_to_end___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_tl_end_to_end___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_tl_end_to_end___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_tl_end_to_end___024root___stl_sequent__TOP__0(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___stl_sequent__TOP__0\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tl_end_to_end__DOT__m_a_valid = 0U;
    vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_ready 
        = ((~ (IData)(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg_valid)) 
           & (0U == (IData)(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__state)));
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

VL_ATTR_COLD void Vtb_tl_end_to_end___024root___eval_stl(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___eval_stl\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_tl_end_to_end___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_tl_end_to_end___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_tl_end_to_end___024root___eval_phase__stl(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___eval_phase__stl\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_tl_end_to_end___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_tl_end_to_end___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_tl_end_to_end___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_tl_end_to_end___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_tl_end_to_end___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tl_end_to_end___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_tl_end_to_end___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_tl_end_to_end___024root____Vm_traceActivitySetAll(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root____Vm_traceActivitySetAll\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtb_tl_end_to_end___024root___ctor_var_reset(Vtb_tl_end_to_end___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root___ctor_var_reset\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->tb_tl_end_to_end__DOT__c_noc_out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3394515088411971968ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_tl_end_to_end__DOT__c_noc_out_flit, __VscopeHash, 11561892191013860687ull);
    vlSelf->tb_tl_end_to_end__DOT__m_noc_out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3735984996189927353ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_tl_end_to_end__DOT__m_noc_out_flit, __VscopeHash, 1872355072589634364ull);
    vlSelf->tb_tl_end_to_end__DOT__a_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15390389606128741820ull);
    VL_SCOPED_RAND_RESET_W(211, vlSelf->tb_tl_end_to_end__DOT__a_bits, __VscopeHash, 15936540610222604397ull);
    vlSelf->tb_tl_end_to_end__DOT__d_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15988861099657828716ull);
    VL_SCOPED_RAND_RESET_W(156, vlSelf->tb_tl_end_to_end__DOT__d_bits, __VscopeHash, 265367105075380484ull);
    vlSelf->tb_tl_end_to_end__DOT__m_a_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4852209231502944904ull);
    VL_SCOPED_RAND_RESET_W(211, vlSelf->tb_tl_end_to_end__DOT__m_a_bits, __VscopeHash, 479798247885752159ull);
    vlSelf->tb_tl_end_to_end__DOT__m_d_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2361221523797934543ull);
    VL_SCOPED_RAND_RESET_W(156, vlSelf->tb_tl_end_to_end__DOT__m_d_bits, __VscopeHash, 11103969538299369008ull);
    vlSelf->tb_tl_end_to_end__DOT__cycle = 0;
    vlSelf->tb_tl_end_to_end__DOT__client__DOT__a_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8216454844487184121ull);
    vlSelf->tb_tl_end_to_end__DOT__client__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12236421839282931122ull);
    VL_SCOPED_RAND_RESET_W(211, vlSelf->tb_tl_end_to_end__DOT__client__DOT__a_reg, __VscopeHash, 1627451762221178523ull);
    vlSelf->tb_tl_end_to_end__DOT__client__DOT__a_reg_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2184436822265050514ull);
    vlSelf->tb_tl_end_to_end__DOT__client__DOT__total_beats = 0;
    vlSelf->tb_tl_end_to_end__DOT__client__DOT__beat_index = 0;
    vlSelf->tb_tl_end_to_end__DOT__manager__DOT__a_pulse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1244316803861046567ull);
    vlSelf->tb_tl_end_to_end__DOT__manager__DOT__a_hdr_reg = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 15952665668760862628ull);
    VL_SCOPED_RAND_RESET_W(92, vlSelf->tb_tl_end_to_end__DOT__manager__DOT__a_payload_reg, __VscopeHash, 5429917063238947005ull);
    vlSelf->tb_tl_end_to_end__DOT__manager__DOT__a_has_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15240324023774428583ull);
    vlSelf->tb_tl_end_to_end__DOT__manager__DOT__present_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7205622807897002952ull);
    VL_SCOPED_RAND_RESET_W(92, vlSelf->tb_tl_end_to_end__DOT__manager__DOT__payload, __VscopeHash, 10055769492457984259ull);
    VL_ZERO_RESET_W(211, vlSelf->__Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg);
    vlSelf->__Vdly__tb_tl_end_to_end__DOT__cycle = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
