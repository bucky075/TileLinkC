// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_noc_fifo.h for the primary calling header

#include "Vtb_noc_fifo.h"
#include "Vtb_noc_fifo__Syms.h"

//==========

void Vtb_noc_fifo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_noc_fifo::eval\n"); );
    Vtb_noc_fifo__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("tb/tb_noc_fifo.sv", 2, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtb_noc_fifo::_eval_initial_loop(Vtb_noc_fifo__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("tb/tb_noc_fifo.sv", 2, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtb_noc_fifo::_sequent__TOP__2(Vtb_noc_fifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_fifo::_sequent__TOP__2\n"); );
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__tb_noc_fifo__DOT__cycle = vlTOPp->tb_noc_fifo__DOT__cycle;
}

VL_INLINE_OPT void Vtb_noc_fifo::_sequent__TOP__3(Vtb_noc_fifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_fifo::_sequent__TOP__3\n"); );
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdlyvdim0__tb_noc_fifo__DOT__dut__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__tb_noc_fifo__DOT__dut__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__tb_noc_fifo__DOT__dut__DOT__mem__v1;
    WData/*127:0*/ __Vdlyvval__tb_noc_fifo__DOT__dut__DOT__mem__v0[4];
    // Body
    if ((1U & (~ (IData)(vlTOPp->tb_noc_fifo__DOT__rst_n)))) {
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__unnamedblk1__DOT__i = 4U;
    }
    __Vdlyvset__tb_noc_fifo__DOT__dut__DOT__mem__v0 = 0U;
    __Vdlyvset__tb_noc_fifo__DOT__dut__DOT__mem__v1 = 0U;
    if (vlTOPp->tb_noc_fifo__DOT__rst_n) {
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_push 
            = ((IData)(vlTOPp->tb_noc_fifo__DOT__push) 
               & (~ (IData)(vlTOPp->tb_noc_fifo__DOT__full)));
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_pop 
            = ((IData)(vlTOPp->tb_noc_fifo__DOT__pop) 
               & (~ (IData)(vlTOPp->tb_noc_fifo__DOT__empty)));
        if (vlTOPp->tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_push) {
            __Vdlyvval__tb_noc_fifo__DOT__dut__DOT__mem__v0[0U] 
                = vlTOPp->tb_noc_fifo__DOT__din[0U];
            __Vdlyvval__tb_noc_fifo__DOT__dut__DOT__mem__v0[1U] 
                = vlTOPp->tb_noc_fifo__DOT__din[1U];
            __Vdlyvval__tb_noc_fifo__DOT__dut__DOT__mem__v0[2U] 
                = vlTOPp->tb_noc_fifo__DOT__din[2U];
            __Vdlyvval__tb_noc_fifo__DOT__dut__DOT__mem__v0[3U] 
                = vlTOPp->tb_noc_fifo__DOT__din[3U];
            __Vdlyvset__tb_noc_fifo__DOT__dut__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tb_noc_fifo__DOT__dut__DOT__mem__v0 
                = vlTOPp->tb_noc_fifo__DOT__dut__DOT__wr_ptr;
            vlTOPp->tb_noc_fifo__DOT__dut__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__wr_ptr)));
        }
        if (vlTOPp->tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_pop) {
            vlTOPp->tb_noc_fifo__DOT__dut__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__rd_ptr)));
        }
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt = (7U 
                                                   & ((2U 
                                                       == 
                                                       (((IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_push) 
                                                         << 1U) 
                                                        | (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_pop)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt))
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (((IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_push) 
                                                          << 1U) 
                                                         | (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_pop)))
                                                        ? 
                                                       ((IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt) 
                                                        - (IData)(1U))
                                                        : (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt))));
    } else {
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__wr_ptr = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__rd_ptr = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt = 0U;
        __Vdlyvset__tb_noc_fifo__DOT__dut__DOT__mem__v1 = 1U;
    }
    if (__Vdlyvset__tb_noc_fifo__DOT__dut__DOT__mem__v0) {
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[__Vdlyvdim0__tb_noc_fifo__DOT__dut__DOT__mem__v0][0U] 
            = __Vdlyvval__tb_noc_fifo__DOT__dut__DOT__mem__v0[0U];
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[__Vdlyvdim0__tb_noc_fifo__DOT__dut__DOT__mem__v0][1U] 
            = __Vdlyvval__tb_noc_fifo__DOT__dut__DOT__mem__v0[1U];
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[__Vdlyvdim0__tb_noc_fifo__DOT__dut__DOT__mem__v0][2U] 
            = __Vdlyvval__tb_noc_fifo__DOT__dut__DOT__mem__v0[2U];
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[__Vdlyvdim0__tb_noc_fifo__DOT__dut__DOT__mem__v0][3U] 
            = __Vdlyvval__tb_noc_fifo__DOT__dut__DOT__mem__v0[3U];
    }
    if (__Vdlyvset__tb_noc_fifo__DOT__dut__DOT__mem__v1) {
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[0U][0U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[0U][1U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[0U][2U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[0U][3U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[1U][0U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[1U][1U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[1U][2U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[1U][3U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[2U][0U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[2U][1U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[2U][2U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[2U][3U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[3U][0U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[3U][1U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[3U][2U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[3U][3U] = 0U;
    }
    vlTOPp->tb_noc_fifo__DOT__full = (4U == (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt));
    vlTOPp->tb_noc_fifo__DOT__empty = (0U == (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt));
}

VL_INLINE_OPT void Vtb_noc_fifo::_sequent__TOP__5(Vtb_noc_fifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_fifo::_sequent__TOP__5\n"); );
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp9[4];
    // Body
    vlTOPp->__Vdly__tb_noc_fifo__DOT__cycle = ((IData)(1U) 
                                               + vlTOPp->tb_noc_fifo__DOT__cycle);
    if ((0U == vlTOPp->tb_noc_fifo__DOT__cycle)) {
        vlTOPp->tb_noc_fifo__DOT__rst_n = 0U;
        vlTOPp->tb_noc_fifo__DOT__push = 0U;
        vlTOPp->tb_noc_fifo__DOT__pop = 0U;
        vlTOPp->tb_noc_fifo__DOT__din[0U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__din[1U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__din[2U] = 0U;
        vlTOPp->tb_noc_fifo__DOT__din[3U] = 0U;
    }
    if ((5U == vlTOPp->tb_noc_fifo__DOT__cycle)) {
        vlTOPp->tb_noc_fifo__DOT__rst_n = 1U;
    }
    if (VL_UNLIKELY((VL_LTES_III(1,32,32, 0xaU, vlTOPp->tb_noc_fifo__DOT__cycle) 
                     & VL_GTS_III(1,32,32, 0xeU, vlTOPp->tb_noc_fifo__DOT__cycle)))) {
        vlTOPp->tb_noc_fifo__DOT__push = 1U;
        VL_EXTENDS_WI(128,32, __Vtemp9, vlTOPp->tb_noc_fifo__DOT__cycle);
        vlTOPp->tb_noc_fifo__DOT__din[0U] = __Vtemp9[0U];
        vlTOPp->tb_noc_fifo__DOT__din[1U] = __Vtemp9[1U];
        vlTOPp->tb_noc_fifo__DOT__din[2U] = __Vtemp9[2U];
        vlTOPp->tb_noc_fifo__DOT__din[3U] = __Vtemp9[3U];
        VL_FWRITEF(vlTOPp->tb_noc_fifo__DOT__results_fd,"Push %0d\n",
                   32,vlTOPp->tb_noc_fifo__DOT__cycle);
    } else {
        vlTOPp->tb_noc_fifo__DOT__push = 0U;
    }
    vlTOPp->tb_noc_fifo__DOT__pop = (VL_LTES_III(1,32,32, 0x14U, vlTOPp->tb_noc_fifo__DOT__cycle) 
                                     & VL_GTS_III(1,32,32, 0x18U, vlTOPp->tb_noc_fifo__DOT__cycle));
    if (VL_UNLIKELY((0x3cU == vlTOPp->tb_noc_fifo__DOT__cycle))) {
        VL_WRITEF("FIFO test complete\n");
        VL_FCLOSE_I(vlTOPp->tb_noc_fifo__DOT__results_fd); vlTOPp->tb_noc_fifo__DOT__results_fd = 0;
        VL_FINISH_MT("tb/tb_noc_fifo.sv", 44, "");
    }
    vlTOPp->tb_noc_fifo__DOT__cycle = vlTOPp->__Vdly__tb_noc_fifo__DOT__cycle;
}

void Vtb_noc_fifo::_eval(Vtb_noc_fifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_fifo::_eval\n"); );
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__tb_noc_fifo__DOT__rst_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_noc_fifo__DOT__rst_n)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_noc_fifo__DOT__rst_n 
        = vlTOPp->__VinpClk__TOP__tb_noc_fifo__DOT__rst_n;
    vlTOPp->__VinpClk__TOP__tb_noc_fifo__DOT__rst_n 
        = vlTOPp->tb_noc_fifo__DOT__rst_n;
}

VL_INLINE_OPT QData Vtb_noc_fifo::_change_request(Vtb_noc_fifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_fifo::_change_request\n"); );
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtb_noc_fifo::_change_request_1(Vtb_noc_fifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_fifo::_change_request_1\n"); );
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->tb_noc_fifo__DOT__rst_n ^ vlTOPp->__Vchglast__TOP__tb_noc_fifo__DOT__rst_n));
    VL_DEBUG_IF( if(__req && ((vlTOPp->tb_noc_fifo__DOT__rst_n ^ vlTOPp->__Vchglast__TOP__tb_noc_fifo__DOT__rst_n))) VL_DBG_MSGF("        CHANGE: tb/tb_noc_fifo.sv:6: tb_noc_fifo.rst_n\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__tb_noc_fifo__DOT__rst_n 
        = vlTOPp->tb_noc_fifo__DOT__rst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vtb_noc_fifo::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_fifo::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
