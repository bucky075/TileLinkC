// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_noc_router.h for the primary calling header

#include "Vtb_noc_router.h"
#include "Vtb_noc_router__Syms.h"

void Vtb_noc_router::_eval(Vtb_noc_router__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_router::_eval\n"); );
    Vtb_noc_router* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__tb_noc_router__DOT__rst_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_noc_router__DOT__rst_n)))) {
        vlTOPp->__Vm_traceActivity[1U] = 1U;
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__tb_noc_router__DOT__rst_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_noc_router__DOT__rst_n)))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_noc_router__DOT__rst_n 
        = vlTOPp->__VinpClk__TOP__tb_noc_router__DOT__rst_n;
    vlTOPp->__VinpClk__TOP__tb_noc_router__DOT__rst_n 
        = vlTOPp->tb_noc_router__DOT__rst_n;
}

VL_INLINE_OPT QData Vtb_noc_router::_change_request(Vtb_noc_router__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_router::_change_request\n"); );
    Vtb_noc_router* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtb_noc_router::_change_request_1(Vtb_noc_router__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_router::_change_request_1\n"); );
    Vtb_noc_router* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->tb_noc_router__DOT__rst_n ^ vlTOPp->__Vchglast__TOP__tb_noc_router__DOT__rst_n));
    VL_DEBUG_IF( if(__req && ((vlTOPp->tb_noc_router__DOT__rst_n ^ vlTOPp->__Vchglast__TOP__tb_noc_router__DOT__rst_n))) VL_DBG_MSGF("        CHANGE: tb/tb_noc_router.sv:10: tb_noc_router.rst_n\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__tb_noc_router__DOT__rst_n 
        = vlTOPp->tb_noc_router__DOT__rst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vtb_noc_router::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_router::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
