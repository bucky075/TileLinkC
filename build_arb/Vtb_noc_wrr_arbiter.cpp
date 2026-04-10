// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_noc_wrr_arbiter.h for the primary calling header

#include "Vtb_noc_wrr_arbiter.h"
#include "Vtb_noc_wrr_arbiter__Syms.h"

//==========

void Vtb_noc_wrr_arbiter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_noc_wrr_arbiter::eval\n"); );
    Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("tb/tb_noc_wrr_arbiter.sv", 3, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtb_noc_wrr_arbiter::_eval_initial_loop(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("tb/tb_noc_wrr_arbiter.sv", 3, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtb_noc_wrr_arbiter::_sequent__TOP__2(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_wrr_arbiter::_sequent__TOP__2\n"); );
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__tb_noc_wrr_arbiter__DOT__cycle 
        = vlTOPp->tb_noc_wrr_arbiter__DOT__cycle;
    vlTOPp->__Vdly__tb_noc_wrr_arbiter__DOT__req = vlTOPp->tb_noc_wrr_arbiter__DOT__req;
    vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v4 = 0U;
    vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v5 = 0U;
    vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v6 = 0U;
    vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v7 = 0U;
    vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v4 = 0U;
    vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v5 = 0U;
    vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v6 = 0U;
    vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v7 = 0U;
    vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v0 = 0U;
}

VL_INLINE_OPT void Vtb_noc_wrr_arbiter::_sequent__TOP__3(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_wrr_arbiter::_sequent__TOP__3\n"); );
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v0;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v1;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v2;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v3;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v4;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v5;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v6;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v7;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v8;
    CData/*1:0*/ __Vdly__tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v12;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v13;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v14;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v15;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v0;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v1;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v2;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v3;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v4;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v5;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v6;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v7;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v12;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v13;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v14;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v15;
    // Body
    __Vdly__tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr 
        = vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr;
    vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__i = 4U;
    if (vlTOPp->tb_noc_wrr_arbiter__DOT__rst_n) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__i = 4U;
    }
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v12 = 0U;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v13 = 0U;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v14 = 0U;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v15 = 0U;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v0 = 0U;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v1 = 0U;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v2 = 0U;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v3 = 0U;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v4 = 0U;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v5 = 0U;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v6 = 0U;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v7 = 0U;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v8 = 0U;
    if ((1U & (~ (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__rst_n)))) {
        __Vdly__tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr = 0U;
    }
    if (vlTOPp->tb_noc_wrr_arbiter__DOT__rst_n) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk4__DOT__found_grant = 0U;
        if ((1U & ((IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant) 
                   & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req)))) {
            vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk4__DOT__found_grant = 1U;
            __Vdly__tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr = 1U;
        }
        if ((2U & ((IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant) 
                   & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req)))) {
            vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk4__DOT__found_grant = 1U;
            __Vdly__tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr = 2U;
        }
        if ((4U & ((IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant) 
                   & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req)))) {
            vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk4__DOT__found_grant = 1U;
            __Vdly__tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr = 3U;
        }
        if ((8U & ((IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant) 
                   & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req)))) {
            vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk4__DOT__found_grant = 1U;
            __Vdly__tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr = 0U;
        }
        if ((1U & (~ (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk4__DOT__found_grant)))) {
            __Vdly__tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr 
                = vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr;
        }
    } else {
        __Vdly__tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr = 0U;
    }
    if (vlTOPp->tb_noc_wrr_arbiter__DOT__rst_n) {
        if ((1U & ((IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant) 
                   & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req)))) {
            if ((0U != vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                 [0U])) {
                __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v12 
                    = (vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                       [0U] - (IData)(1U));
                __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v12 = 1U;
            }
        }
        if ((2U & ((IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant) 
                   & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req)))) {
            if ((0U != vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                 [1U])) {
                __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v13 
                    = (vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                       [1U] - (IData)(1U));
                __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v13 = 1U;
            }
        }
        if ((4U & ((IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant) 
                   & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req)))) {
            if ((0U != vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                 [2U])) {
                __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v14 
                    = (vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                       [2U] - (IData)(1U));
                __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v14 = 1U;
            }
        }
        if ((8U & ((IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant) 
                   & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req)))) {
            if ((0U != vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                 [3U])) {
                __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v15 
                    = (vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                       [3U] - (IData)(1U));
                __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v15 = 1U;
            }
        }
    }
    if (vlTOPp->tb_noc_wrr_arbiter__DOT__rst_n) {
        if ((1U & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req))) {
            __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v0 
                = ((IData)(1U) + vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                   [0U]);
            __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v0 = 1U;
            if ((0x200U < vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age
                 [0U])) {
                __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v1 
                    = ((IData)(8U) + vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                       [0U]);
                __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v1 = 1U;
            }
        }
        if ((2U & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req))) {
            __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v2 
                = ((IData)(1U) + vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                   [1U]);
            __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v2 = 1U;
            if ((0x200U < vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age
                 [1U])) {
                __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v3 
                    = ((IData)(8U) + vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                       [1U]);
                __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v3 = 1U;
            }
        }
        if ((4U & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req))) {
            __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v4 
                = ((IData)(1U) + vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                   [2U]);
            __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v4 = 1U;
            if ((0x200U < vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age
                 [2U])) {
                __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v5 
                    = ((IData)(8U) + vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                       [2U]);
                __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v5 = 1U;
            }
        }
        if ((8U & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req))) {
            __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v6 
                = ((IData)(1U) + vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                   [3U]);
            __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v6 = 1U;
            if ((0x200U < vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age
                 [3U])) {
                __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v7 
                    = ((IData)(8U) + vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                       [3U]);
                __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v7 = 1U;
            }
        }
    } else {
        __Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v8 = 1U;
    }
    vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr 
        = __Vdly__tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr;
    if (__Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v0) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[0U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v0;
    }
    if (__Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v1) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[0U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v1;
    }
    if (__Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v2) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[1U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v2;
    }
    if (__Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v3) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[1U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v3;
    }
    if (__Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v4) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[2U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v4;
    }
    if (__Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v5) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[2U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v5;
    }
    if (__Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v6) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[3U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v6;
    }
    if (__Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v7) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[3U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v7;
    }
    if (__Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v8) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[0U] = 0U;
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[1U] = 0U;
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[2U] = 0U;
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[3U] = 0U;
    }
    if (__Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v12) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[0U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v12;
    }
    if (__Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v13) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[1U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v13;
    }
    if (__Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v14) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[2U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v14;
    }
    if (__Vdlyvset__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v15) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[3U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__dut__DOT__deficit__v15;
    }
}

VL_INLINE_OPT void Vtb_noc_wrr_arbiter::_sequent__TOP__5(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_wrr_arbiter::_sequent__TOP__5\n"); );
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    SData/*15:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__age__v4;
    SData/*15:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__age__v5;
    SData/*15:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__age__v6;
    SData/*15:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__age__v7;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__grant_count__v4;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__grant_count__v5;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__grant_count__v6;
    IData/*31:0*/ __Vdlyvval__tb_noc_wrr_arbiter__DOT__grant_count__v7;
    // Body
    vlTOPp->__Vdly__tb_noc_wrr_arbiter__DOT__cycle 
        = ((IData)(1U) + vlTOPp->tb_noc_wrr_arbiter__DOT__cycle);
    if ((0U == vlTOPp->tb_noc_wrr_arbiter__DOT__cycle)) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__i = 4U;
        vlTOPp->tb_noc_wrr_arbiter__DOT__rst_n = 0U;
        vlTOPp->__Vdly__tb_noc_wrr_arbiter__DOT__req = 0U;
        vlTOPp->tb_noc_wrr_arbiter__DOT__hold = 0U;
        vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v0 = 1U;
    }
    if ((5U == vlTOPp->tb_noc_wrr_arbiter__DOT__cycle)) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__rst_n = 1U;
    }
    if (((0xaU <= vlTOPp->tb_noc_wrr_arbiter__DOT__cycle) 
         & (0x1eU > vlTOPp->tb_noc_wrr_arbiter__DOT__cycle))) {
        vlTOPp->__Vdly__tb_noc_wrr_arbiter__DOT__req = 1U;
    } else {
        if (((0x1eU <= vlTOPp->tb_noc_wrr_arbiter__DOT__cycle) 
             & (0x32U > vlTOPp->tb_noc_wrr_arbiter__DOT__cycle))) {
            vlTOPp->__Vdly__tb_noc_wrr_arbiter__DOT__req = 2U;
        } else {
            if (((0x32U <= vlTOPp->tb_noc_wrr_arbiter__DOT__cycle) 
                 & (0x46U > vlTOPp->tb_noc_wrr_arbiter__DOT__cycle))) {
                vlTOPp->__Vdly__tb_noc_wrr_arbiter__DOT__req = 4U;
            } else {
                if (((0x46U <= vlTOPp->tb_noc_wrr_arbiter__DOT__cycle) 
                     & (0x5aU > vlTOPp->tb_noc_wrr_arbiter__DOT__cycle))) {
                    vlTOPp->__Vdly__tb_noc_wrr_arbiter__DOT__req = 8U;
                } else {
                    if (((0x64U <= vlTOPp->tb_noc_wrr_arbiter__DOT__cycle) 
                         & (0xc8U > vlTOPp->tb_noc_wrr_arbiter__DOT__cycle))) {
                        vlTOPp->__Vdly__tb_noc_wrr_arbiter__DOT__req = 0xfU;
                    } else {
                        if (((0xdcU <= vlTOPp->tb_noc_wrr_arbiter__DOT__cycle) 
                             & (0x104U > vlTOPp->tb_noc_wrr_arbiter__DOT__cycle))) {
                            vlTOPp->__Vdly__tb_noc_wrr_arbiter__DOT__req = 0xfU;
                            vlTOPp->tb_noc_wrr_arbiter__DOT__hold = 2U;
                        } else {
                            vlTOPp->__Vdly__tb_noc_wrr_arbiter__DOT__req = 0U;
                            vlTOPp->tb_noc_wrr_arbiter__DOT__hold = 0U;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req))) {
        __Vdlyvval__tb_noc_wrr_arbiter__DOT__age__v4 
            = (0xffffU & ((IData)(1U) + vlTOPp->tb_noc_wrr_arbiter__DOT__age
                          [0U]));
        vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v4 = 1U;
    }
    if ((2U & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req))) {
        __Vdlyvval__tb_noc_wrr_arbiter__DOT__age__v5 
            = (0xffffU & ((IData)(1U) + vlTOPp->tb_noc_wrr_arbiter__DOT__age
                          [1U]));
        vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v5 = 1U;
    }
    if ((4U & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req))) {
        __Vdlyvval__tb_noc_wrr_arbiter__DOT__age__v6 
            = (0xffffU & ((IData)(1U) + vlTOPp->tb_noc_wrr_arbiter__DOT__age
                          [2U]));
        vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v6 = 1U;
    }
    if ((8U & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req))) {
        __Vdlyvval__tb_noc_wrr_arbiter__DOT__age__v7 
            = (0xffffU & ((IData)(1U) + vlTOPp->tb_noc_wrr_arbiter__DOT__age
                          [3U]));
        vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v7 = 1U;
    }
    if ((1U & ((IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant) 
               & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req)))) {
        __Vdlyvval__tb_noc_wrr_arbiter__DOT__grant_count__v4 
            = ((IData)(1U) + vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count
               [0U]);
        vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v4 = 1U;
    }
    if ((2U & ((IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant) 
               & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req)))) {
        __Vdlyvval__tb_noc_wrr_arbiter__DOT__grant_count__v5 
            = ((IData)(1U) + vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count
               [1U]);
        vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v5 = 1U;
    }
    if ((4U & ((IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant) 
               & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req)))) {
        __Vdlyvval__tb_noc_wrr_arbiter__DOT__grant_count__v6 
            = ((IData)(1U) + vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count
               [2U]);
        vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v6 = 1U;
    }
    if ((8U & ((IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant) 
               & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req)))) {
        __Vdlyvval__tb_noc_wrr_arbiter__DOT__grant_count__v7 
            = ((IData)(1U) + vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count
               [3U]);
        vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v7 = 1U;
    }
    vlTOPp->tb_noc_wrr_arbiter__DOT__i = 4U;
    if (VL_UNLIKELY((0x190U == vlTOPp->tb_noc_wrr_arbiter__DOT__cycle))) {
        VL_WRITEF("Arbiter Test Complete\n");
        vlTOPp->tb_noc_wrr_arbiter__DOT__i = 4U;
        VL_WRITEF("Port 0 grants = %0#\n",32,vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count
                  [0U]);
        VL_WRITEF("Port 1 grants = %0#\n",32,vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count
                  [1U]);
        VL_WRITEF("Port 2 grants = %0#\n",32,vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count
                  [2U]);
        VL_WRITEF("Port 3 grants = %0#\n",32,vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count
                  [3U]);
        VL_FINISH_MT("tb/tb_noc_wrr_arbiter.sv", 97, "");
    }
    vlTOPp->tb_noc_wrr_arbiter__DOT__cycle = vlTOPp->__Vdly__tb_noc_wrr_arbiter__DOT__cycle;
    vlTOPp->tb_noc_wrr_arbiter__DOT__req = vlTOPp->__Vdly__tb_noc_wrr_arbiter__DOT__req;
    if (vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v0) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[0U] = 0U;
        vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[1U] = 0U;
        vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[2U] = 0U;
        vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[3U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v4) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[0U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__grant_count__v4;
    }
    if (vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v5) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[1U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__grant_count__v5;
    }
    if (vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v6) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[2U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__grant_count__v6;
    }
    if (vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v7) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[3U] 
            = __Vdlyvval__tb_noc_wrr_arbiter__DOT__grant_count__v7;
    }
    if (vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v0) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__age[0U] = 0U;
        vlTOPp->tb_noc_wrr_arbiter__DOT__age[1U] = 0U;
        vlTOPp->tb_noc_wrr_arbiter__DOT__age[2U] = 0U;
        vlTOPp->tb_noc_wrr_arbiter__DOT__age[3U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v4) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__age[0U] = __Vdlyvval__tb_noc_wrr_arbiter__DOT__age__v4;
    }
    if (vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v5) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__age[1U] = __Vdlyvval__tb_noc_wrr_arbiter__DOT__age__v5;
    }
    if (vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v6) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__age[2U] = __Vdlyvval__tb_noc_wrr_arbiter__DOT__age__v6;
    }
    if (vlTOPp->__Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v7) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__age[3U] = __Vdlyvval__tb_noc_wrr_arbiter__DOT__age__v7;
    }
    vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[0U] 
        = vlTOPp->tb_noc_wrr_arbiter__DOT__age[0U];
    vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[1U] 
        = vlTOPp->tb_noc_wrr_arbiter__DOT__age[1U];
    vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[2U] 
        = vlTOPp->tb_noc_wrr_arbiter__DOT__age[2U];
    vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[3U] 
        = vlTOPp->tb_noc_wrr_arbiter__DOT__age[3U];
}

VL_INLINE_OPT void Vtb_noc_wrr_arbiter::_sequent__TOP__6(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_wrr_arbiter::_sequent__TOP__6\n"); );
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb_noc_wrr_arbiter__DOT__grant = 0U;
    if ((1U & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__hold))) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__grant = (1U 
                                                  | (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant));
    }
    if ((2U & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__hold))) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__grant = (2U 
                                                  | (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant));
    }
    if ((4U & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__hold))) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__grant = (4U 
                                                  | (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant));
    }
    if ((8U & (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__hold))) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__grant = (8U 
                                                  | (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant));
    }
    vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk1__DOT__j = 4U;
    if ((0U == (IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant))) {
        vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__k = 0U;
        {
            while (VL_GTS_III(1,32,32, 4U, vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__k)) {
                vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx 
                    = (3U & ((IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr) 
                             + vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__k));
                if ((((IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__req) 
                      >> (3U & vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)) 
                     & (0U != vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit
                        [(3U & vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)]))) {
                    vlTOPp->tb_noc_wrr_arbiter__DOT__grant 
                        = ((IData)(vlTOPp->tb_noc_wrr_arbiter__DOT__grant) 
                           | ((IData)(1U) << (3U & vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)));
                    goto __Vlabel1;
                }
                vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__k);
            }
            __Vlabel1: ;
        }
    }
}

void Vtb_noc_wrr_arbiter::_eval(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_wrr_arbiter::_eval\n"); );
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__tb_noc_wrr_arbiter__DOT__rst_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_noc_wrr_arbiter__DOT__rst_n)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__tb_noc_wrr_arbiter__DOT__rst_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_noc_wrr_arbiter__DOT__rst_n)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_noc_wrr_arbiter__DOT__rst_n 
        = vlTOPp->__VinpClk__TOP__tb_noc_wrr_arbiter__DOT__rst_n;
    vlTOPp->__VinpClk__TOP__tb_noc_wrr_arbiter__DOT__rst_n 
        = vlTOPp->tb_noc_wrr_arbiter__DOT__rst_n;
}

VL_INLINE_OPT QData Vtb_noc_wrr_arbiter::_change_request(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_wrr_arbiter::_change_request\n"); );
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtb_noc_wrr_arbiter::_change_request_1(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_wrr_arbiter::_change_request_1\n"); );
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->tb_noc_wrr_arbiter__DOT__rst_n ^ vlTOPp->__Vchglast__TOP__tb_noc_wrr_arbiter__DOT__rst_n));
    VL_DEBUG_IF( if(__req && ((vlTOPp->tb_noc_wrr_arbiter__DOT__rst_n ^ vlTOPp->__Vchglast__TOP__tb_noc_wrr_arbiter__DOT__rst_n))) VL_DBG_MSGF("        CHANGE: tb/tb_noc_wrr_arbiter.sv:9: tb_noc_wrr_arbiter.rst_n\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__tb_noc_wrr_arbiter__DOT__rst_n 
        = vlTOPp->tb_noc_wrr_arbiter__DOT__rst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vtb_noc_wrr_arbiter::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_wrr_arbiter::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
