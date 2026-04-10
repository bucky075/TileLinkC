// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_noc_wrr_arbiter.h for the primary calling header

#include "Vtb_noc_wrr_arbiter.h"
#include "Vtb_noc_wrr_arbiter__Syms.h"

//==========

VL_CTOR_IMP(Vtb_noc_wrr_arbiter) {
    Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp = __VlSymsp = new Vtb_noc_wrr_arbiter__Syms(this, name());
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtb_noc_wrr_arbiter::__Vconfigure(Vtb_noc_wrr_arbiter__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vtb_noc_wrr_arbiter::~Vtb_noc_wrr_arbiter() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtb_noc_wrr_arbiter::_initial__TOP__1(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_wrr_arbiter::_initial__TOP__1\n"); );
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__WEIGHTS[0U] = 1U;
    vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__WEIGHTS[1U] = 1U;
    vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__WEIGHTS[2U] = 1U;
    vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__WEIGHTS[3U] = 1U;
}

void Vtb_noc_wrr_arbiter::_settle__TOP__4(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_wrr_arbiter::_settle__TOP__4\n"); );
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[0U] 
        = vlTOPp->tb_noc_wrr_arbiter__DOT__age[0U];
    vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[1U] 
        = vlTOPp->tb_noc_wrr_arbiter__DOT__age[1U];
    vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[2U] 
        = vlTOPp->tb_noc_wrr_arbiter__DOT__age[2U];
    vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[3U] 
        = vlTOPp->tb_noc_wrr_arbiter__DOT__age[3U];
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

void Vtb_noc_wrr_arbiter::_eval_initial(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_wrr_arbiter::_eval_initial\n"); );
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_noc_wrr_arbiter__DOT__rst_n 
        = vlTOPp->__VinpClk__TOP__tb_noc_wrr_arbiter__DOT__rst_n;
}

void Vtb_noc_wrr_arbiter::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_wrr_arbiter::final\n"); );
    // Variables
    Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtb_noc_wrr_arbiter::_eval_settle(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_wrr_arbiter::_eval_settle\n"); );
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtb_noc_wrr_arbiter::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_wrr_arbiter::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    tb_noc_wrr_arbiter__DOT__rst_n = VL_RAND_RESET_I(1);
    tb_noc_wrr_arbiter__DOT__req = VL_RAND_RESET_I(4);
    tb_noc_wrr_arbiter__DOT__hold = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            tb_noc_wrr_arbiter__DOT__age[__Vi0] = VL_RAND_RESET_I(16);
    }}
    tb_noc_wrr_arbiter__DOT__grant = VL_RAND_RESET_I(4);
    tb_noc_wrr_arbiter__DOT__cycle = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            tb_noc_wrr_arbiter__DOT__grant_count[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[__Vi0] = VL_RAND_RESET_I(16);
    }}
    tb_noc_wrr_arbiter__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[__Vi0] = VL_RAND_RESET_I(32);
    }}
    tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr = VL_RAND_RESET_I(2);
    tb_noc_wrr_arbiter__DOT__dut__DOT__i = VL_RAND_RESET_I(32);
    tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk1__DOT__j = 0;
    tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__k = 0;
    tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx = 0;
    tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk4__DOT__found_grant = 0;
    __Vdly__tb_noc_wrr_arbiter__DOT__cycle = VL_RAND_RESET_I(32);
    __Vdly__tb_noc_wrr_arbiter__DOT__req = VL_RAND_RESET_I(4);
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v0 = 0;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v4 = 0;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v5 = 0;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v6 = 0;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v7 = 0;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v4 = 0;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v5 = 0;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v6 = 0;
    __Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v7 = 0;
    __VinpClk__TOP__tb_noc_wrr_arbiter__DOT__rst_n = VL_RAND_RESET_I(1);
    __Vchglast__TOP__tb_noc_wrr_arbiter__DOT__rst_n = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
