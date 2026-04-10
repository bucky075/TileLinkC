// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_noc_fifo.h for the primary calling header

#include "Vtb_noc_fifo.h"
#include "Vtb_noc_fifo__Syms.h"

//==========

VL_CTOR_IMP(Vtb_noc_fifo) {
    Vtb_noc_fifo__Syms* __restrict vlSymsp = __VlSymsp = new Vtb_noc_fifo__Syms(this, name());
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__noc_params_pkg, Vtb_noc_fifo_noc_params_pkg);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtb_noc_fifo::__Vconfigure(Vtb_noc_fifo__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vtb_noc_fifo::~Vtb_noc_fifo() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtb_noc_fifo::_initial__TOP__1(Vtb_noc_fifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_fifo::_initial__TOP__1\n"); );
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp1[5];
    // Body
    __Vtemp1[0U] = 0x756c7473U;
    __Vtemp1[1U] = 0x2e726573U;
    __Vtemp1[2U] = 0x6669666fU;
    __Vtemp1[3U] = 0x6c74732fU;
    __Vtemp1[4U] = 0x72657375U;
    vlTOPp->tb_noc_fifo__DOT__results_fd = VL_FOPEN_NN(
                                                       VL_CVT_PACK_STR_NW(5, __Vtemp1)
                                                       , 
                                                       std::string("w"));
}

void Vtb_noc_fifo::_settle__TOP__4(Vtb_noc_fifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_fifo::_settle__TOP__4\n"); );
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb_noc_fifo__DOT__full = (4U == (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt));
    vlTOPp->tb_noc_fifo__DOT__empty = (0U == (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt));
}

void Vtb_noc_fifo::_eval_initial(Vtb_noc_fifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_fifo::_eval_initial\n"); );
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__noc_params_pkg._initial__TOP__noc_params_pkg__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_noc_fifo__DOT__rst_n 
        = vlTOPp->__VinpClk__TOP__tb_noc_fifo__DOT__rst_n;
}

void Vtb_noc_fifo::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_fifo::final\n"); );
    // Variables
    Vtb_noc_fifo__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtb_noc_fifo::_eval_settle(Vtb_noc_fifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_fifo::_eval_settle\n"); );
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void Vtb_noc_fifo::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_fifo::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    tb_noc_fifo__DOT__rst_n = VL_RAND_RESET_I(1);
    tb_noc_fifo__DOT__push = VL_RAND_RESET_I(1);
    tb_noc_fifo__DOT__pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_fifo__DOT__din);
    tb_noc_fifo__DOT__full = VL_RAND_RESET_I(1);
    tb_noc_fifo__DOT__empty = VL_RAND_RESET_I(1);
    tb_noc_fifo__DOT__results_fd = 0;
    tb_noc_fifo__DOT__cycle = 0;
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_fifo__DOT__dut__DOT__mem[__Vi0]);
    }}
    tb_noc_fifo__DOT__dut__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_fifo__DOT__dut__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_fifo__DOT__dut__DOT__cnt = VL_RAND_RESET_I(3);
    tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_push = VL_RAND_RESET_I(1);
    tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_pop = VL_RAND_RESET_I(1);
    tb_noc_fifo__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    __Vdly__tb_noc_fifo__DOT__cycle = 0;
    __VinpClk__TOP__tb_noc_fifo__DOT__rst_n = VL_RAND_RESET_I(1);
    __Vchglast__TOP__tb_noc_fifo__DOT__rst_n = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
