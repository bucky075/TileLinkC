// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnoc_params.h for the primary calling header

#include "Vnoc_params__pch.h"

VL_ATTR_COLD void Vnoc_params___024root___eval_static(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___eval_static\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__chosen_sink = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13532833148169316326ull);
    vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr_word = 0U;
    vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk4__DOT__addr_word_w = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tlc_noc_adapter__DOT__clk__0 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tlc_noc_adapter__DOT__rst_n__0 
        = vlSelfRef.tb_tlc_noc_adapter__DOT__rst_n;
}

VL_ATTR_COLD void Vnoc_params___024root___eval_static__TOP(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___eval_static__TOP\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__chosen_sink = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13532833148169316326ull);
    vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr_word = 0U;
    vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk4__DOT__addr_word_w = 0U;
}

VL_ATTR_COLD void Vnoc_params___024root___eval_initial(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___eval_initial\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tlc_noc_adapter__DOT__rst_n = 0U;
    vlSelfRef.tb_tlc_noc_adapter__DOT__a_valid = 0U;
    vlSelfRef.tb_tlc_noc_adapter__DOT__state = 0U;
    vlSelfRef.tb_tlc_noc_adapter__DOT__addr = 0x0000000000000020ULL;
    vlSelfRef.tb_tlc_noc_adapter__DOT__data_write = 0xdeadbeefcafebabeULL;
}

VL_ATTR_COLD void Vnoc_params___024root___eval_initial__TOP(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___eval_initial__TOP\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tlc_noc_adapter__DOT__rst_n = 0U;
    vlSelfRef.tb_tlc_noc_adapter__DOT__a_valid = 0U;
    vlSelfRef.tb_tlc_noc_adapter__DOT__state = 0U;
    vlSelfRef.tb_tlc_noc_adapter__DOT__addr = 0x0000000000000020ULL;
    vlSelfRef.tb_tlc_noc_adapter__DOT__data_write = 0xdeadbeefcafebabeULL;
}

VL_ATTR_COLD void Vnoc_params___024root___eval_final(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___eval_final\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnoc_params___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vnoc_params___024root___eval_phase__stl(Vnoc_params___024root* vlSelf);

VL_ATTR_COLD void Vnoc_params___024root___eval_settle(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___eval_settle\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vnoc_params___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_tlc_noc_adapter.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vnoc_params___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vnoc_params___024root___eval_triggers_vec__stl(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___eval_triggers_vec__stl\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vnoc_params___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnoc_params___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vnoc_params___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vnoc_params___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vnoc_params___024root___stl_sequent__TOP__0(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___stl_sequent__TOP__0\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tlc_noc_adapter__DOT__noc_req_ready 
        = (1U & (~ (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req)));
    vlSelfRef.tb_tlc_noc_adapter__DOT__a_ready = ((~ (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid)) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__send_state)));
}

VL_ATTR_COLD void Vnoc_params___024root___eval_stl(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___eval_stl\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        vlSelfRef.tb_tlc_noc_adapter__DOT__noc_req_ready 
            = (1U & (~ (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req)));
        vlSelfRef.tb_tlc_noc_adapter__DOT__a_ready 
            = ((~ (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid)) 
               & (0U == (IData)(vlSelfRef.tb_tlc_noc_adapter__DOT__client_i__DOT__send_state)));
    }
}

VL_ATTR_COLD bool Vnoc_params___024root___eval_phase__stl(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___eval_phase__stl\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vnoc_params___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnoc_params___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vnoc_params___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vnoc_params___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vnoc_params___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnoc_params___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vnoc_params___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_tlc_noc_adapter.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_tlc_noc_adapter.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vnoc_params___024root___ctor_var_reset(Vnoc_params___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnoc_params___024root___ctor_var_reset\n"); );
    Vnoc_params__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_tlc_noc_adapter__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3696583216416423335ull);
    vlSelf->tb_tlc_noc_adapter__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16181593982618499761ull);
    vlSelf->tb_tlc_noc_adapter__DOT__a_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5115307231080124342ull);
    VL_SCOPED_RAND_RESET_W(154, vlSelf->tb_tlc_noc_adapter__DOT__a_bits, __VscopeHash, 10809429041982707047ull);
    vlSelf->tb_tlc_noc_adapter__DOT__a_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6450562447677592328ull);
    vlSelf->tb_tlc_noc_adapter__DOT__noc_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15283381392650493534ull);
    vlSelf->tb_tlc_noc_adapter__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6724115963080757973ull);
    vlSelf->tb_tlc_noc_adapter__DOT__addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3415620479518366307ull);
    vlSelf->tb_tlc_noc_adapter__DOT__data_write = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2197051730015938957ull);
    vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__send_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9338932888838018908ull);
    VL_SCOPED_RAND_RESET_W(154, vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf, __VscopeHash, 3472994672479364645ull);
    vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6908257964815500781ull);
    vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__req_total_beats = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14588197811686437662ull);
    vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12604414823023217396ull);
    vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13497134072886956223ull);
    vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 10918678445155113572ull);
    VL_SCOPED_RAND_RESET_W(230, vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload, __VscopeHash, 2600891513245010792ull);
    vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__resp_hdr = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 12286883851690015919ull);
    VL_SCOPED_RAND_RESET_W(230, vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload, __VscopeHash, 2704741155053387821ull);
    VL_SCOPED_RAND_RESET_W(86, vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum, __VscopeHash, 7445445317639805620ull);
    vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__d_size_accum = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6560259788831178065ull);
    vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_seen = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 467755970267594734ull);
    vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_valid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4584871872476863875ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r, __VscopeHash, 3537002137469243710ull);
    vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14447932554815655458ull);
    VL_SCOPED_RAND_RESET_W(86, vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_r, __VscopeHash, 14088363681793131424ull);
    vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__b_valid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3909219216882449617ull);
    VL_SCOPED_RAND_RESET_W(154, vlSelf->tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r, __VscopeHash, 1276417967936242438ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 880719916373623365ull);
    }
    vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__sink_alloc_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14188960259660390001ull);
    vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__sink_in_use = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16762107272663585035ull);
    vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16418803304619074592ull);
    vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__in_hdr = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 6469795106160429514ull);
    VL_SCOPED_RAND_RESET_W(230, vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload, __VscopeHash, 5492091949274163714ull);
    vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__req_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13891307226459557628ull);
    vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__req_size = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13041708554177077620ull);
    vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__req_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8221936536069820584ull);
    vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__req_param = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11438924971827631507ull);
    vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17239617571472132544ull);
    vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__req_txn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17636128848259287617ull);
    vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 4201871341859202578ull);
    VL_SCOPED_RAND_RESET_W(230, vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload, __VscopeHash, 18133781950752220186ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg, __VscopeHash, 14223559227287644424ull);
    vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__out_valid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2733816850791884795ull);
    vlSelf->tb_tlc_noc_adapter__DOT__manager_i__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3903728481525270620ull);
    VL_ZERO_RESET_W(154, vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf);
    vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid = 0;
    vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter = 0;
    vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_total_beats = 0;
    vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx = 0;
    vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__send_state = 0;
    vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r = 0;
    vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_valid_r = 0;
    VL_ZERO_RESET_W(86, vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum);
    vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_seen = 0;
    vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req = 0;
    vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_data = 0;
    vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_size = 0;
    vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_opcode = 0;
    vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_param = 0;
    vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low = 0;
    vlSelf->__Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_txn = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_tlc_noc_adapter__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_tlc_noc_adapter__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
