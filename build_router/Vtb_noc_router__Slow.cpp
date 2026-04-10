// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_noc_router.h for the primary calling header

#include "Vtb_noc_router.h"
#include "Vtb_noc_router__Syms.h"

//==========

VL_CTOR_IMP(Vtb_noc_router) {
    Vtb_noc_router__Syms* __restrict vlSymsp = __VlSymsp = new Vtb_noc_router__Syms(this, name());
    Vtb_noc_router* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__noc_params_pkg, Vtb_noc_router_noc_params_pkg);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtb_noc_router::__Vconfigure(Vtb_noc_router__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vtb_noc_router::~Vtb_noc_router() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtb_noc_router::_settle__TOP__1(Vtb_noc_router__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_router::_settle__TOP__1\n"); );
    Vtb_noc_router* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__age_vec[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__age_vec[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__age_vec[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__age_vec[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__age_vec[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[0U] 
        = ((0xffffff00U & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[0U]) 
           | (7U & ((IData)(4U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used))));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[0U] 
        = ((0xffff00ffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[0U]) 
           | (0x700U & (((IData)(4U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)) 
                        << 8U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[0U] 
        = ((0xff00ffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[0U]) 
           | (0x70000U & (((IData)(4U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)) 
                          << 0x10U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[0U] 
        = ((0xffffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[0U]) 
           | (0x1f000000U & (((IData)(0x10U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)) 
                             << 0x18U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[1U] 
        = ((0xffffff00U & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[1U]) 
           | (0xfU & ((IData)(8U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used))));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[1U] 
        = ((0xffff00ffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[1U]) 
           | (0xf00U & (((IData)(8U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)) 
                        << 8U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[1U] 
        = ((0xff00ffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[1U]) 
           | (0xf0000U & (((IData)(0xcU) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)) 
                          << 0x10U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[1U] 
        = ((0xffffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[1U]) 
           | (0xf000000U & (((IData)(8U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)) 
                            << 0x18U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[2U] 
        = ((0xffffff00U & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[2U]) 
           | (7U & ((IData)(4U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used))));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[2U] 
        = ((0xffff00ffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[2U]) 
           | (0x700U & (((IData)(4U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)) 
                        << 8U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[2U] 
        = ((0xff00ffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[2U]) 
           | (0x70000U & (((IData)(4U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)) 
                          << 0x10U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[2U] 
        = ((0xffffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[2U]) 
           | (0x1f000000U & (((IData)(0x10U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)) 
                             << 0x18U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[3U] 
        = ((0xffffff00U & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[3U]) 
           | (0xfU & ((IData)(8U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used))));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[3U] 
        = ((0xffff00ffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[3U]) 
           | (0xf00U & (((IData)(8U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)) 
                        << 8U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[3U] 
        = ((0xff00ffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[3U]) 
           | (0xf0000U & (((IData)(0xcU) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)) 
                          << 0x10U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[3U] 
        = ((0xffffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[3U]) 
           | (0xf000000U & (((IData)(8U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)) 
                            << 0x18U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[4U] 
        = ((0xffffff00U & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[4U]) 
           | (7U & ((IData)(4U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used))));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[4U] 
        = ((0xffff00ffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[4U]) 
           | (0x700U & (((IData)(4U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)) 
                        << 8U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[4U] 
        = ((0xff00ffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[4U]) 
           | (0x70000U & (((IData)(4U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)) 
                          << 0x10U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[4U] 
        = ((0xffffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[4U]) 
           | (0x1f000000U & (((IData)(0x10U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)) 
                             << 0x18U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[5U] 
        = ((0xffffff00U & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[5U]) 
           | (0xfU & ((IData)(8U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used))));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[5U] 
        = ((0xffff00ffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[5U]) 
           | (0xf00U & (((IData)(8U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)) 
                        << 8U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[5U] 
        = ((0xff00ffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[5U]) 
           | (0xf0000U & (((IData)(0xcU) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)) 
                          << 0x10U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[5U] 
        = ((0xffffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[5U]) 
           | (0xf000000U & (((IData)(8U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)) 
                            << 0x18U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[6U] 
        = ((0xffffff00U & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[6U]) 
           | (7U & ((IData)(4U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used))));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[6U] 
        = ((0xffff00ffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[6U]) 
           | (0x700U & (((IData)(4U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)) 
                        << 8U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[6U] 
        = ((0xff00ffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[6U]) 
           | (0x70000U & (((IData)(4U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)) 
                          << 0x10U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[6U] 
        = ((0xffffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[6U]) 
           | (0x1f000000U & (((IData)(0x10U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)) 
                             << 0x18U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[7U] 
        = ((0xffffff00U & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[7U]) 
           | (0xfU & ((IData)(8U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used))));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[7U] 
        = ((0xffff00ffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[7U]) 
           | (0xf00U & (((IData)(8U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)) 
                        << 8U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[7U] 
        = ((0xff00ffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[7U]) 
           | (0xf0000U & (((IData)(0xcU) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)) 
                          << 0x10U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[7U] 
        = ((0xffffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[7U]) 
           | (0xf000000U & (((IData)(8U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)) 
                            << 0x18U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[8U] 
        = ((0xffffff00U & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[8U]) 
           | (7U & ((IData)(4U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used))));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[8U] 
        = ((0xffff00ffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[8U]) 
           | (0x700U & (((IData)(4U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)) 
                        << 8U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[8U] 
        = ((0xff00ffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[8U]) 
           | (0x70000U & (((IData)(4U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)) 
                          << 0x10U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[8U] 
        = ((0xffffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[8U]) 
           | (0x1f000000U & (((IData)(0x10U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)) 
                             << 0x18U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[9U] 
        = ((0xffffff00U & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[9U]) 
           | (0xfU & ((IData)(8U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used))));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[9U] 
        = ((0xffff00ffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[9U]) 
           | (0xf00U & (((IData)(8U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)) 
                        << 8U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[9U] 
        = ((0xff00ffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[9U]) 
           | (0xf0000U & (((IData)(0xcU) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)) 
                          << 0x10U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[9U] 
        = ((0xffffffU & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_free[9U]) 
           | (0xf000000U & (((IData)(8U) - (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)) 
                            << 0x18U)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfffffffffeULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | (IData)((IData)((4U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)))));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfffffffffdULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((4U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)))) 
              << 1U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfffffffffbULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((4U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)))) 
              << 2U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfffffffff7ULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((0x10U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)))) 
              << 3U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xffffffffefULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((8U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)))) 
              << 4U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xffffffffdfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((8U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)))) 
              << 5U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xffffffffbfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((0xcU == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)))) 
              << 6U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xffffffff7fULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((8U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)))) 
              << 7U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfffffffeffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((4U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)))) 
              << 8U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfffffffdffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((4U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)))) 
              << 9U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfffffffbffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((4U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)))) 
              << 0xaU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfffffff7ffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((0x10U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)))) 
              << 0xbU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xffffffefffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((8U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)))) 
              << 0xcU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xffffffdfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((8U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)))) 
              << 0xdU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xffffffbfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((0xcU == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)))) 
              << 0xeU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xffffff7fffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((8U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)))) 
              << 0xfU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfffffeffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((4U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)))) 
              << 0x10U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfffffdffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((4U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)))) 
              << 0x11U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfffffbffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((4U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)))) 
              << 0x12U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfffff7ffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((0x10U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)))) 
              << 0x13U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xffffefffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((8U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)))) 
              << 0x14U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xffffdfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((8U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)))) 
              << 0x15U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xffffbfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((0xcU == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)))) 
              << 0x16U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xffff7fffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((8U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)))) 
              << 0x17U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfffeffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((4U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)))) 
              << 0x18U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfffdffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((4U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)))) 
              << 0x19U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfffbffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((4U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)))) 
              << 0x1aU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfff7ffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((0x10U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)))) 
              << 0x1bU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xffefffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((8U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)))) 
              << 0x1cU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xffdfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((8U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)))) 
              << 0x1dU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xffbfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((0xcU == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)))) 
              << 0x1eU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xff7fffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((8U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)))) 
              << 0x1fU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfeffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((4U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)))) 
              << 0x20U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfdffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((4U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)))) 
              << 0x21U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xfbffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((4U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)))) 
              << 0x22U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xf7ffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((0x10U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)))) 
              << 0x23U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xefffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((8U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)))) 
              << 0x24U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xdfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((8U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)))) 
              << 0x25U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0xbfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((0xcU == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)))) 
              << 0x26U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
        = ((0x7fffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full) 
           | ((QData)((IData)((8U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)))) 
              << 0x27U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfffffffffeULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | (IData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)))));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfffffffffdULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)))) 
              << 1U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfffffffffbULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)))) 
              << 2U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfffffffff7ULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)))) 
              << 3U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xffffffffefULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)))) 
              << 4U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xffffffffdfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)))) 
              << 5U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xffffffffbfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)))) 
              << 6U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xffffffff7fULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)))) 
              << 7U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfffffffeffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)))) 
              << 8U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfffffffdffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)))) 
              << 9U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfffffffbffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)))) 
              << 0xaU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfffffff7ffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)))) 
              << 0xbU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xffffffefffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)))) 
              << 0xcU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xffffffdfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)))) 
              << 0xdU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xffffffbfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)))) 
              << 0xeU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xffffff7fffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)))) 
              << 0xfU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfffffeffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)))) 
              << 0x10U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfffffdffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)))) 
              << 0x11U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfffffbffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)))) 
              << 0x12U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfffff7ffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)))) 
              << 0x13U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xffffefffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)))) 
              << 0x14U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xffffdfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)))) 
              << 0x15U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xffffbfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)))) 
              << 0x16U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xffff7fffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)))) 
              << 0x17U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfffeffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)))) 
              << 0x18U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfffdffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)))) 
              << 0x19U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfffbffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)))) 
              << 0x1aU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfff7ffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)))) 
              << 0x1bU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xffefffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)))) 
              << 0x1cU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xffdfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)))) 
              << 0x1dU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xffbfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)))) 
              << 0x1eU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xff7fffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)))) 
              << 0x1fU));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfeffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)))) 
              << 0x20U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfdffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)))) 
              << 0x21U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xfbffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)))) 
              << 0x22U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xf7ffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)))) 
              << 0x23U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xefffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)))) 
              << 0x24U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xdfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)))) 
              << 0x25U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0xbfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)))) 
              << 0x26U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
        = ((0x7fffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty) 
           | ((QData)((IData)((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)))) 
              << 0x27U));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[1U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[2U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[3U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[4U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[5U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[6U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[7U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[8U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[9U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xaU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xbU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xcU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xdU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xeU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xfU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x10U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x11U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x12U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x13U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x14U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x15U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x16U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x17U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x18U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x19U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1aU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1bU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1cU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1dU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1eU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1fU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x20U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x21U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x22U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x23U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x24U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x25U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x26U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x27U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x28U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x29U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2aU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2bU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2cU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2dU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2eU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2fU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x30U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x31U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x32U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x33U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x34U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x35U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x36U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x37U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x38U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x39U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3aU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3bU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3cU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3dU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3eU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3fU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x40U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x41U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x42U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x43U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x44U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x45U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x46U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x47U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x48U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x49U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4aU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4bU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4cU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4dU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4eU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4fU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x50U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x51U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x52U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x53U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x54U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x55U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x56U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x57U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x58U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x59U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5aU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5bU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5cU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5dU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5eU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5fU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x60U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x61U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x62U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x63U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x64U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x65U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x66U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x67U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x68U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x69U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6aU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6bU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6cU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6dU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6eU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6fU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x70U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x71U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x72U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x73U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x74U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x75U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x76U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x77U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x78U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x79U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7aU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7bU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7cU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7dU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7eU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7fU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x80U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x81U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x82U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x83U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x84U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x85U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x86U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x87U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x88U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x89U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8aU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8bU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8cU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8dU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8eU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8fU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x90U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x91U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x92U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x93U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x94U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x95U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x96U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x97U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x98U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x99U] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9aU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9bU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg[3U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9cU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[0U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9dU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[1U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9eU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[2U];
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9fU] 
        = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg[3U];
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT____Vcellinp__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__age[__Vilp] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__age_vec
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT____Vcellinp__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__age[__Vilp] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__age_vec
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT____Vcellinp__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__age[__Vilp] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__age_vec
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT____Vcellinp__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__age[__Vilp] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__age_vec
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT____Vcellinp__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__age[__Vilp] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__age_vec
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT____Vcellinp__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__age[__Vilp] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__age_vec
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT____Vcellinp__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__age[__Vilp] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__age_vec
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT____Vcellinp__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__age[__Vilp] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__age_vec
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT____Vcellinp__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__age[__Vilp] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__age_vec
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT____Vcellinp__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__age[__Vilp] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__age_vec
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->tb_noc_router__DOT__in_ready = (0x1eU & (IData)(vlTOPp->tb_noc_router__DOT__in_ready));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfffffffffeULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[1U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[2U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[3U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfffffffffdULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[4U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[5U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[6U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[7U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfffffffffbULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[8U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[9U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0xaU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0xbU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfffffffff7ULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0xcU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0xdU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0xeU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0xfU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xffffffffefULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x10U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x11U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x12U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x13U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xffffffffdfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x14U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x15U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x16U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x17U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xffffffffbfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x18U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x19U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x1aU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x1bU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xffffffff7fULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x1cU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x1dU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x1eU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x1fU] = 0U;
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__in_valid))) {
        vlTOPp->__Vfunc_extract_hdr__2__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[0U];
        vlTOPp->__Vfunc_extract_hdr__2__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[1U];
        vlTOPp->__Vfunc_extract_hdr__2__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[2U];
        vlTOPp->__Vfunc_extract_hdr__2__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[3U];
        vlTOPp->__Vfunc_extract_hdr__2__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__2__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__2__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__2__Vfuncout = vlTOPp->__Vfunc_extract_hdr__2__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__2__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc 
            = (7U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__hdr 
                             >> 5U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound4 
            = (1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
                                >> (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc)))));
        vlTOPp->tb_noc_router__DOT__in_ready = ((0x1eU 
                                                 & (IData)(vlTOPp->tb_noc_router__DOT__in_ready)) 
                                                | (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound4));
        if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
                              >> (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc)))))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound5 = 1U;
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                = (vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                   | ((QData)((IData)(1U)) << (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc)));
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[0U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[0U];
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[1U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[1U];
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[2U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[2U];
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[3U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[3U];
            VL_ASSIGNSEL_WIIW(128,(0x3ffU & (vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc 
                                             << 7U)), vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din, vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6);
        }
    }
    vlTOPp->tb_noc_router__DOT__in_ready = (0x1dU & (IData)(vlTOPp->tb_noc_router__DOT__in_ready));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfffffffeffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x20U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x21U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x22U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x23U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfffffffdffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x24U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x25U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x26U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x27U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfffffffbffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x28U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x29U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x2aU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x2bU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfffffff7ffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x2cU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x2dU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x2eU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x2fU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xffffffefffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x30U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x31U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x32U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x33U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xffffffdfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x34U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x35U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x36U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x37U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xffffffbfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x38U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x39U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x3aU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x3bU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xffffff7fffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x3cU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x3dU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x3eU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x3fU] = 0U;
    if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__in_valid))) {
        vlTOPp->__Vfunc_extract_hdr__2__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[4U];
        vlTOPp->__Vfunc_extract_hdr__2__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[5U];
        vlTOPp->__Vfunc_extract_hdr__2__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[6U];
        vlTOPp->__Vfunc_extract_hdr__2__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[7U];
        vlTOPp->__Vfunc_extract_hdr__2__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__2__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__2__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__2__Vfuncout = vlTOPp->__Vfunc_extract_hdr__2__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__2__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc 
            = (7U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__hdr 
                             >> 5U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound4 
            = (1U & (~ ((0x27U >= (0x3fU & ((IData)(8U) 
                                            + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc)))) 
                        & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
                                   >> (0x3fU & ((IData)(8U) 
                                                + (7U 
                                                   & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))))));
        vlTOPp->tb_noc_router__DOT__in_ready = ((0x1dU 
                                                 & (IData)(vlTOPp->tb_noc_router__DOT__in_ready)) 
                                                | ((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound4) 
                                                   << 1U));
        if ((1U & (~ ((0x27U >= (0x3fU & ((IData)(8U) 
                                          + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc)))) 
                      & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
                                 >> (0x3fU & ((IData)(8U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))))))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound5 = 1U;
            if ((0x27U >= (0x3fU & ((IData)(8U) + (7U 
                                                   & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    = (((~ (1ULL << (0x3fU & ((IData)(8U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound5)) 
                          << (0x3fU & ((IData)(8U) 
                                       + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc)))));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[0U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[4U];
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[1U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[5U];
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[2U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[6U];
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[3U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[7U];
            if ((0x13ffU >= (0x1fffU & ((IData)(0x400U) 
                                        + (0x3ffU & 
                                           (vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc 
                                            << 7U)))))) {
                VL_ASSIGNSEL_WIIW(128,(0x1fffU & ((IData)(0x400U) 
                                                  + 
                                                  (0x3ffU 
                                                   & (vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc 
                                                      << 7U)))), vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din, vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6);
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__in_ready = (0x1bU & (IData)(vlTOPp->tb_noc_router__DOT__in_ready));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfffffeffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x40U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x41U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x42U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x43U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfffffdffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x44U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x45U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x46U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x47U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfffffbffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x48U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x49U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x4aU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x4bU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfffff7ffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x4cU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x4dU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x4eU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x4fU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xffffefffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x50U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x51U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x52U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x53U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xffffdfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x54U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x55U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x56U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x57U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xffffbfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x58U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x59U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x5aU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x5bU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xffff7fffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x5cU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x5dU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x5eU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x5fU] = 0U;
    if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__in_valid))) {
        vlTOPp->__Vfunc_extract_hdr__2__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[8U];
        vlTOPp->__Vfunc_extract_hdr__2__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[9U];
        vlTOPp->__Vfunc_extract_hdr__2__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[0xaU];
        vlTOPp->__Vfunc_extract_hdr__2__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[0xbU];
        vlTOPp->__Vfunc_extract_hdr__2__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__2__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__2__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__2__Vfuncout = vlTOPp->__Vfunc_extract_hdr__2__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__2__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc 
            = (7U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__hdr 
                             >> 5U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound4 
            = (1U & (~ ((0x27U >= (0x3fU & ((IData)(0x10U) 
                                            + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc)))) 
                        & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
                                   >> (0x3fU & ((IData)(0x10U) 
                                                + (7U 
                                                   & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))))));
        vlTOPp->tb_noc_router__DOT__in_ready = ((0x1bU 
                                                 & (IData)(vlTOPp->tb_noc_router__DOT__in_ready)) 
                                                | ((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound4) 
                                                   << 2U));
        if ((1U & (~ ((0x27U >= (0x3fU & ((IData)(0x10U) 
                                          + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc)))) 
                      & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
                                 >> (0x3fU & ((IData)(0x10U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))))))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound5 = 1U;
            if ((0x27U >= (0x3fU & ((IData)(0x10U) 
                                    + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    = (((~ (1ULL << (0x3fU & ((IData)(0x10U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound5)) 
                          << (0x3fU & ((IData)(0x10U) 
                                       + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc)))));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[0U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[8U];
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[1U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[9U];
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[2U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[0xaU];
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[3U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[0xbU];
            if ((0x13ffU >= (0x1fffU & ((IData)(0x800U) 
                                        + (0x3ffU & 
                                           (vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc 
                                            << 7U)))))) {
                VL_ASSIGNSEL_WIIW(128,(0x1fffU & ((IData)(0x800U) 
                                                  + 
                                                  (0x3ffU 
                                                   & (vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc 
                                                      << 7U)))), vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din, vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6);
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__in_ready = (0x17U & (IData)(vlTOPp->tb_noc_router__DOT__in_ready));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfffeffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x60U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x61U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x62U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x63U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfffdffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x64U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x65U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x66U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x67U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfffbffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x68U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x69U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x6aU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x6bU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfff7ffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x6cU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x6dU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x6eU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x6fU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xffefffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x70U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x71U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x72U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x73U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xffdfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x74U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x75U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x76U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x77U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xffbfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x78U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x79U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x7aU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x7bU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xff7fffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x7cU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x7dU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x7eU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x7fU] = 0U;
    if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__in_valid))) {
        vlTOPp->__Vfunc_extract_hdr__2__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[0xcU];
        vlTOPp->__Vfunc_extract_hdr__2__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[0xdU];
        vlTOPp->__Vfunc_extract_hdr__2__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[0xeU];
        vlTOPp->__Vfunc_extract_hdr__2__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[0xfU];
        vlTOPp->__Vfunc_extract_hdr__2__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__2__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__2__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__2__Vfuncout = vlTOPp->__Vfunc_extract_hdr__2__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__2__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc 
            = (7U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__hdr 
                             >> 5U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound4 
            = (1U & (~ ((0x27U >= (0x3fU & ((IData)(0x18U) 
                                            + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc)))) 
                        & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
                                   >> (0x3fU & ((IData)(0x18U) 
                                                + (7U 
                                                   & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))))));
        vlTOPp->tb_noc_router__DOT__in_ready = ((0x17U 
                                                 & (IData)(vlTOPp->tb_noc_router__DOT__in_ready)) 
                                                | ((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound4) 
                                                   << 3U));
        if ((1U & (~ ((0x27U >= (0x3fU & ((IData)(0x18U) 
                                          + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc)))) 
                      & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
                                 >> (0x3fU & ((IData)(0x18U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))))))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound5 = 1U;
            if ((0x27U >= (0x3fU & ((IData)(0x18U) 
                                    + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    = (((~ (1ULL << (0x3fU & ((IData)(0x18U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound5)) 
                          << (0x3fU & ((IData)(0x18U) 
                                       + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc)))));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[0U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[0xcU];
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[1U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[0xdU];
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[2U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[0xeU];
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[3U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[0xfU];
            if ((0x13ffU >= (0x1fffU & ((IData)(0xc00U) 
                                        + (0x3ffU & 
                                           (vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc 
                                            << 7U)))))) {
                VL_ASSIGNSEL_WIIW(128,(0x1fffU & ((IData)(0xc00U) 
                                                  + 
                                                  (0x3ffU 
                                                   & (vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc 
                                                      << 7U)))), vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din, vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6);
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__in_ready = (0xfU & (IData)(vlTOPp->tb_noc_router__DOT__in_ready));
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfeffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x80U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x81U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x82U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x83U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfdffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x84U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x85U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x86U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x87U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xfbffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x88U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x89U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x8aU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x8bU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xf7ffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x8cU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x8dU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x8eU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x8fU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xefffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x90U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x91U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x92U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x93U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xdfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x94U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x95U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x96U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x97U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0xbfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x98U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x99U] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x9aU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x9bU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
        = (0x7fffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x9cU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x9dU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x9eU] = 0U;
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din[0x9fU] = 0U;
    if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__in_valid))) {
        vlTOPp->__Vfunc_extract_hdr__2__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[0x10U];
        vlTOPp->__Vfunc_extract_hdr__2__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[0x11U];
        vlTOPp->__Vfunc_extract_hdr__2__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[0x12U];
        vlTOPp->__Vfunc_extract_hdr__2__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__in_flit[0x13U];
        vlTOPp->__Vfunc_extract_hdr__2__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__2__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__2__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__2__Vfuncout = vlTOPp->__Vfunc_extract_hdr__2__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__2__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc 
            = (7U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__hdr 
                             >> 5U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound4 
            = (1U & (~ ((0x27U >= (0x3fU & ((IData)(0x20U) 
                                            + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc)))) 
                        & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
                                   >> (0x3fU & ((IData)(0x20U) 
                                                + (7U 
                                                   & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))))));
        vlTOPp->tb_noc_router__DOT__in_ready = ((0xfU 
                                                 & (IData)(vlTOPp->tb_noc_router__DOT__in_ready)) 
                                                | ((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound4) 
                                                   << 4U));
        if ((1U & (~ ((0x27U >= (0x3fU & ((IData)(0x20U) 
                                          + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc)))) 
                      & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_full 
                                 >> (0x3fU & ((IData)(0x20U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))))))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound5 = 1U;
            if ((0x27U >= (0x3fU & ((IData)(0x20U) 
                                    + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    = (((~ (1ULL << (0x3fU & ((IData)(0x20U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound5)) 
                          << (0x3fU & ((IData)(0x20U) 
                                       + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc)))));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[0U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[0x10U];
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[1U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[0x11U];
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[2U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[0x12U];
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6[3U] 
                = vlTOPp->tb_noc_router__DOT__in_flit[0x13U];
            if ((0x13ffU >= (0x1fffU & ((IData)(0x1000U) 
                                        + (0x3ffU & 
                                           (vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc 
                                            << 7U)))))) {
                VL_ASSIGNSEL_WIIW(128,(0x1fffU & ((IData)(0x1000U) 
                                                  + 
                                                  (0x3ffU 
                                                   & (vlTOPp->tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc 
                                                      << 7U)))), vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_din, vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound6);
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfffffffffeULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfffffffffeULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfffffffffdULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfffffffffdULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfffffffffbULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfffffffffbULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfffffffff7ULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfffffffff7ULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xffffffffefULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xffffffffefULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xffffffffdfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xffffffffdfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xffffffffbfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xffffffffbfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xffffffff7fULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xffffffff7fULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfffffffeffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfffffffeffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfffffffdffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfffffffdffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfffffffbffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfffffffbffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfffffff7ffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfffffff7ffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xffffffefffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xffffffefffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xffffffdfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xffffffdfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xffffffbfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xffffffbfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xffffff7fffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xffffff7fffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfffffeffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfffffeffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfffffdffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfffffdffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfffffbffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfffffbffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfffff7ffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfffff7ffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xffffefffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xffffefffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xffffdfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xffffdfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xffffbfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xffffbfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xffff7fffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xffff7fffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfffeffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfffeffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfffdffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfffdffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfffbffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfffbffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfff7ffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfff7ffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xffefffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xffefffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xffdfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xffdfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xffbfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xffbfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xff7fffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xff7fffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfeffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfeffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfdffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfdffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xfbffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xfbffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xf7ffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xf7ffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xefffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xefffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xdfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xdfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0xbfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0xbfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
        = (0x7fffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
        = (0x7fffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0U;
    if ((1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty)))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[1U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[2U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[3U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 1U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 1U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[4U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[5U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[6U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[7U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 2U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 2U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[8U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[9U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xaU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xbU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 3U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 3U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xcU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xdU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xeU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xfU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 4U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 4U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x10U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x11U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x12U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x13U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 5U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 5U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x14U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x15U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x16U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x17U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 6U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 6U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x18U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x19U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1aU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1bU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 7U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 7U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1cU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1dU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1eU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1fU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 8U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 8U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x20U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x21U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x22U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x23U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 9U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 9U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x24U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x25U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x26U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x27U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xaU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xaU))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x28U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x29U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2aU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2bU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xbU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xbU))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2cU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2dU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2eU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2fU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xcU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xcU))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x30U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x31U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x32U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x33U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xdU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xdU))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x34U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x35U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x36U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x37U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xeU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xeU))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x38U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x39U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3aU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3bU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xfU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xfU))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3cU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3dU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3eU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3fU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x10U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x10U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x40U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x41U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x42U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x43U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x11U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x11U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x44U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x45U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x46U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x47U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x12U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x12U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x48U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x49U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4aU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4bU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x13U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x13U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4cU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4dU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4eU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4fU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x14U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x14U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x50U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x51U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x52U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x53U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x15U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x15U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x54U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x55U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x56U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x57U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x16U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x16U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x58U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x59U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5aU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5bU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x17U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x17U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5cU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5dU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5eU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5fU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x18U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x18U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x60U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x61U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x62U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x63U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x19U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x19U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x64U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x65U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x66U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x67U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1aU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1aU))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x68U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x69U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6aU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6bU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1bU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1bU))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6cU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6dU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6eU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6fU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1cU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1cU))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x70U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x71U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x72U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x73U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1dU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1dU))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x74U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x75U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x76U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x77U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1eU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1eU))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x78U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x79U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7aU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7bU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1fU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1fU))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7cU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7dU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7eU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7fU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x20U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x20U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x80U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x81U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x82U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x83U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x21U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x21U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x84U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x85U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x86U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x87U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x22U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x22U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x88U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x89U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8aU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8bU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x23U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x23U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8cU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8dU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8eU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8fU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x24U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x24U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x90U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x91U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x92U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x93U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x25U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x25U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x94U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x95U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x96U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x97U];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x26U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x26U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x98U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x99U];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9aU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9bU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x27U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x27U))))) {
        vlTOPp->__Vfunc_extract_hdr__3__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9cU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9dU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9eU];
        vlTOPp->__Vfunc_extract_hdr__3__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9fU];
        vlTOPp->__Vfunc_extract_hdr__3__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__3__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__3__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__3__Vfuncout = vlTOPp->__Vfunc_extract_hdr__3__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__3__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound10)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound11)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfffffffffeULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfffffffffeULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfffffffffdULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfffffffffdULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfffffffffbULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfffffffffbULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfffffffff7ULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfffffffff7ULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xffffffffefULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xffffffffefULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xffffffffdfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xffffffffdfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xffffffffbfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xffffffffbfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xffffffff7fULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xffffffff7fULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfffffffeffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfffffffeffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfffffffdffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfffffffdffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfffffffbffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfffffffbffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfffffff7ffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfffffff7ffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xffffffefffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xffffffefffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xffffffdfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xffffffdfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xffffffbfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xffffffbfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xffffff7fffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xffffff7fffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfffffeffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfffffeffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfffffdffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfffffdffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfffffbffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfffffbffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfffff7ffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfffff7ffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xffffefffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xffffefffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xffffdfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xffffdfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xffffbfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xffffbfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xffff7fffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xffff7fffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfffeffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfffeffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfffdffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfffdffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfffbffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfffbffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfff7ffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfff7ffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xffefffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xffefffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xffdfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xffdfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xffbfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xffbfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xff7fffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xff7fffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfeffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfeffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfdffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfdffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xfbffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xfbffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xf7ffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xf7ffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xefffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xefffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xdfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xdfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0xbfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0xbfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
        = (0x7fffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
        = (0x7fffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0U;
    if ((1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty)))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[1U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[2U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[3U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 1U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 1U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[4U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[5U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[6U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[7U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 2U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 2U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[8U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[9U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xaU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xbU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 3U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 3U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xcU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xdU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xeU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xfU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 4U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 4U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x10U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x11U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x12U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x13U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 5U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 5U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x14U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x15U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x16U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x17U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 6U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 6U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x18U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x19U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1aU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1bU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 7U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 7U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1cU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1dU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1eU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1fU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 8U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 8U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x20U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x21U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x22U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x23U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 9U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 9U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x24U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x25U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x26U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x27U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xaU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xaU))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x28U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x29U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2aU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2bU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xbU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xbU))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2cU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2dU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2eU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2fU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xcU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xcU))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x30U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x31U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x32U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x33U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xdU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xdU))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x34U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x35U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x36U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x37U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xeU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xeU))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x38U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x39U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3aU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3bU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xfU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xfU))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3cU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3dU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3eU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3fU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x10U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x10U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x40U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x41U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x42U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x43U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x11U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x11U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x44U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x45U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x46U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x47U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x12U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x12U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x48U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x49U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4aU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4bU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x13U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x13U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4cU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4dU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4eU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4fU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x14U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x14U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x50U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x51U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x52U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x53U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x15U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x15U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x54U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x55U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x56U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x57U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x16U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x16U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x58U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x59U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5aU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5bU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x17U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x17U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5cU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5dU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5eU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5fU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x18U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x18U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x60U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x61U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x62U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x63U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x19U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x19U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x64U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x65U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x66U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x67U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1aU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1aU))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x68U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x69U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6aU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6bU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1bU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1bU))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6cU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6dU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6eU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6fU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1cU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1cU))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x70U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x71U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x72U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x73U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1dU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1dU))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x74U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x75U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x76U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x77U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1eU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1eU))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x78U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x79U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7aU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7bU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1fU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1fU))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7cU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7dU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7eU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7fU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x20U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x20U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x80U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x81U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x82U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x83U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x21U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x21U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x84U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x85U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x86U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x87U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x22U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x22U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x88U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x89U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8aU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8bU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x23U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x23U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8cU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8dU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8eU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8fU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x24U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x24U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x90U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x91U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x92U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x93U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x25U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x25U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x94U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x95U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x96U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x97U];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x26U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x26U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x98U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x99U];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9aU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9bU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x27U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x27U))))) {
        vlTOPp->__Vfunc_extract_hdr__4__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9cU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9dU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9eU];
        vlTOPp->__Vfunc_extract_hdr__4__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9fU];
        vlTOPp->__Vfunc_extract_hdr__4__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__4__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__4__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__4__Vfuncout = vlTOPp->__Vfunc_extract_hdr__4__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__4__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((1U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound17)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound18)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfffffffffeULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfffffffffeULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfffffffffdULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfffffffffdULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfffffffffbULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfffffffffbULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfffffffff7ULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfffffffff7ULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xffffffffefULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xffffffffefULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xffffffffdfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xffffffffdfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xffffffffbfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xffffffffbfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xffffffff7fULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xffffffff7fULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfffffffeffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfffffffeffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfffffffdffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfffffffdffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfffffffbffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfffffffbffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfffffff7ffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfffffff7ffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xffffffefffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xffffffefffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xffffffdfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xffffffdfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xffffffbfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xffffffbfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xffffff7fffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xffffff7fffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfffffeffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfffffeffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfffffdffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfffffdffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfffffbffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfffffbffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfffff7ffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfffff7ffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xffffefffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xffffefffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xffffdfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xffffdfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xffffbfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xffffbfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xffff7fffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xffff7fffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfffeffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfffeffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfffdffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfffdffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfffbffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfffbffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfff7ffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfff7ffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xffefffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xffefffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xffdfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xffdfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xffbfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xffbfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xff7fffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xff7fffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfeffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfeffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfdffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfdffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xfbffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xfbffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xf7ffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xf7ffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xefffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xefffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xdfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xdfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0xbfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0xbfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
        = (0x7fffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
        = (0x7fffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec);
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0U;
    if ((1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty)))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[1U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[2U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[3U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 1U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 1U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[4U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[5U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[6U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[7U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 2U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 2U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[8U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[9U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xaU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xbU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 3U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 3U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xcU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xdU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xeU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xfU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 4U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 4U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x10U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x11U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x12U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x13U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 5U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 5U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x14U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x15U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x16U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x17U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 6U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 6U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x18U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x19U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1aU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1bU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 7U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 7U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1cU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1dU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1eU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1fU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 8U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 8U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x20U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x21U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x22U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x23U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 9U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 9U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x24U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x25U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x26U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x27U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xaU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xaU))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x28U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x29U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2aU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2bU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xbU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xbU))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2cU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2dU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2eU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2fU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xcU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xcU))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x30U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x31U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x32U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x33U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xdU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xdU))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x34U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x35U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x36U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x37U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xeU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xeU))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x38U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x39U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3aU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3bU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0xfU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0xfU))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3cU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3dU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3eU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3fU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x10U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x10U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x40U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x41U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x42U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x43U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x11U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x11U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x44U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x45U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x46U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x47U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x12U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x12U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x48U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x49U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4aU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4bU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x13U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x13U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4cU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4dU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4eU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4fU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x14U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x14U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x50U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x51U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x52U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x53U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x15U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x15U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x54U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x55U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x56U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x57U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x16U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x16U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x58U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x59U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5aU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5bU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x17U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x17U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5cU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5dU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5eU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5fU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x18U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x18U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x60U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x61U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x62U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x63U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x19U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x19U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x64U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x65U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x66U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x67U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1aU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1aU))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x68U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x69U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6aU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6bU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1bU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1bU))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6cU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6dU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6eU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6fU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1cU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1cU))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x70U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x71U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x72U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x73U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1dU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1dU))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x74U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x75U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x76U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x77U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1eU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1eU))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x78U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x79U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7aU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7bU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x1fU;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x1fU))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7cU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7dU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7eU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7fU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x20U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x20U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x80U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x81U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x82U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x83U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x21U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x21U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x84U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x85U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x86U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x87U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x22U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x22U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x88U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x89U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8aU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8bU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x23U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x23U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8cU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8dU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8eU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8fU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x24U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x24U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x90U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x91U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x92U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x93U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x25U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x25U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x94U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x95U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x96U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x97U];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x26U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x26U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x98U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x99U];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9aU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9bU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0x27U;
    if ((1U & (~ (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_empty 
                          >> 0x27U))))) {
        vlTOPp->__Vfunc_extract_hdr__5__flit[0U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9cU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[1U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9dU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[2U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9eU];
        vlTOPp->__Vfunc_extract_hdr__5__flit[3U] = 
            vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9fU];
        vlTOPp->__Vfunc_extract_hdr__5__hdr = (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlTOPp->__Vfunc_extract_hdr__5__flit[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->__Vfunc_extract_hdr__5__flit[2U])) 
                                                     >> 0x10U)));
        vlTOPp->__Vfunc_extract_hdr__5__Vfuncout = vlTOPp->__Vfunc_extract_hdr__5__hdr;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
            = vlTOPp->__Vfunc_extract_hdr__5__Vfuncout;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x 
            = (3U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                             >> 0x28U)));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y 
            = (3U & ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr 
                              >> 0x28U)) >> 2U));
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port 
            = (((0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x)) 
                & (0U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y)))
                ? 4U : ((0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                         ? ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x))
                             ? 2U : 3U) : ((0U < (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y))
                                            ? 1U : 0U)));
        if ((2U == (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24 = 1U;
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound24)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25 
                = (1U & (~ (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr)));
            if ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                    = (((~ (1ULL << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound25)) 
                          << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx)));
            }
        }
    }
}
