// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_noc_mesh.h for the primary calling header

#include "Vtb_noc_mesh.h"
#include "Vtb_noc_mesh__Syms.h"

//==========

void Vtb_noc_mesh::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_noc_mesh::eval\n"); );
    Vtb_noc_mesh__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtb_noc_mesh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("tb/tb_noc_mesh.sv", 3, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtb_noc_mesh::_eval_initial_loop(Vtb_noc_mesh__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
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
            VL_FATAL_MT("tb/tb_noc_mesh.sv", 3, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtb_noc_mesh::_sequent__TOP__1(Vtb_noc_mesh__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_mesh::_sequent__TOP__1\n"); );
    Vtb_noc_mesh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vfunc_tb_noc_mesh__DOT__make_flit__0__Vfuncout[4];
    WData/*127:0*/ __Vfunc_build_flit__1__Vfuncout[4];
    WData/*127:0*/ __Vfunc_build_flit__1__f[4];
    WData/*127:0*/ __Vfunc_tb_noc_mesh__DOT__make_flit__2__Vfuncout[4];
    WData/*127:0*/ __Vfunc_build_flit__3__Vfuncout[4];
    WData/*127:0*/ __Vfunc_build_flit__3__f[4];
    WData/*127:0*/ __Vfunc_tb_noc_mesh__DOT__make_flit__4__Vfuncout[4];
    WData/*127:0*/ __Vfunc_build_flit__5__Vfuncout[4];
    WData/*127:0*/ __Vfunc_build_flit__5__f[4];
    WData/*127:0*/ __Vfunc_tb_noc_mesh__DOT__make_flit__6__Vfuncout[4];
    WData/*127:0*/ __Vfunc_build_flit__7__Vfuncout[4];
    WData/*127:0*/ __Vfunc_build_flit__7__f[4];
    IData/*31:0*/ __Vdly__tb_noc_mesh__DOT__cycle;
    QData/*47:0*/ __Vfunc_tb_noc_mesh__DOT__make_flit__0__h;
    QData/*47:0*/ __Vfunc_build_flit__1__hdr;
    QData/*47:0*/ __Vfunc_tb_noc_mesh__DOT__make_flit__2__h;
    QData/*47:0*/ __Vfunc_build_flit__3__hdr;
    QData/*47:0*/ __Vfunc_tb_noc_mesh__DOT__make_flit__4__h;
    QData/*47:0*/ __Vfunc_build_flit__5__hdr;
    QData/*47:0*/ __Vfunc_tb_noc_mesh__DOT__make_flit__6__h;
    QData/*47:0*/ __Vfunc_build_flit__7__hdr;
    // Body
    __Vdly__tb_noc_mesh__DOT__cycle = vlTOPp->tb_noc_mesh__DOT__cycle;
    __Vdly__tb_noc_mesh__DOT__cycle = ((IData)(1U) 
                                       + vlTOPp->tb_noc_mesh__DOT__cycle);
    if ((0U == vlTOPp->tb_noc_mesh__DOT__cycle)) {
        vlTOPp->tb_noc_mesh__DOT__rst_n = 0U;
        vlTOPp->tb_noc_mesh__DOT__local_in_valid = 0U;
        vlTOPp->tb_noc_mesh__DOT__local_out_ready = 0xffffU;
    }
    if ((5U == vlTOPp->tb_noc_mesh__DOT__cycle)) {
        vlTOPp->tb_noc_mesh__DOT__rst_n = 1U;
    }
    if ((0x14U == vlTOPp->tb_noc_mesh__DOT__cycle)) {
        __Vfunc_tb_noc_mesh__DOT__make_flit__0__h = 
            (0xfffffffffffULL & __Vfunc_tb_noc_mesh__DOT__make_flit__0__h);
        __Vfunc_tb_noc_mesh__DOT__make_flit__0__h = 
            (0x50000000000ULL | (0xf0ffffffffffULL 
                                 & __Vfunc_tb_noc_mesh__DOT__make_flit__0__h));
        vlTOPp->tb_noc_mesh__DOT__local_in_valid = 
            (1U | (IData)(vlTOPp->tb_noc_mesh__DOT__local_in_valid));
        __Vfunc_tb_noc_mesh__DOT__make_flit__0__h = 
            (0x111100ULL | (0xff00000000ffULL & __Vfunc_tb_noc_mesh__DOT__make_flit__0__h));
        __Vfunc_tb_noc_mesh__DOT__make_flit__0__h = 
            (0x60ULL | (0xffffffffff1fULL & __Vfunc_tb_noc_mesh__DOT__make_flit__0__h));
        __Vfunc_tb_noc_mesh__DOT__make_flit__0__h = 
            (0xffffffffffe3ULL & __Vfunc_tb_noc_mesh__DOT__make_flit__0__h);
        __Vfunc_tb_noc_mesh__DOT__make_flit__0__h = 
            (2ULL | __Vfunc_tb_noc_mesh__DOT__make_flit__0__h);
        __Vfunc_tb_noc_mesh__DOT__make_flit__0__h = 
            (1ULL | __Vfunc_tb_noc_mesh__DOT__make_flit__0__h);
        __Vfunc_build_flit__1__hdr = __Vfunc_tb_noc_mesh__DOT__make_flit__0__h;
        __Vfunc_build_flit__1__f[0U] = 0xabcdabcdU;
        __Vfunc_build_flit__1__f[1U] = 0xabcdabcdU;
        __Vfunc_build_flit__1__f[2U] = (0xffff0000U 
                                        & ((IData)(__Vfunc_build_flit__1__hdr) 
                                           << 0x10U));
        __Vfunc_build_flit__1__f[3U] = ((0xffffU & 
                                         ((IData)(__Vfunc_build_flit__1__hdr) 
                                          >> 0x10U)) 
                                        | (0xffff0000U 
                                           & ((IData)(
                                                      (__Vfunc_build_flit__1__hdr 
                                                       >> 0x20U)) 
                                              << 0x10U)));
        __Vfunc_build_flit__1__Vfuncout[0U] = __Vfunc_build_flit__1__f[0U];
        __Vfunc_build_flit__1__Vfuncout[1U] = __Vfunc_build_flit__1__f[1U];
        __Vfunc_build_flit__1__Vfuncout[2U] = __Vfunc_build_flit__1__f[2U];
        __Vfunc_build_flit__1__Vfuncout[3U] = __Vfunc_build_flit__1__f[3U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__0__Vfuncout[0U] 
            = __Vfunc_build_flit__1__Vfuncout[0U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__0__Vfuncout[1U] 
            = __Vfunc_build_flit__1__Vfuncout[1U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__0__Vfuncout[2U] 
            = __Vfunc_build_flit__1__Vfuncout[2U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__0__Vfuncout[3U] 
            = __Vfunc_build_flit__1__Vfuncout[3U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[0U] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__0__Vfuncout[0U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[1U] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__0__Vfuncout[1U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[2U] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__0__Vfuncout[2U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[3U] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__0__Vfuncout[3U];
    }
    if ((0x15U == vlTOPp->tb_noc_mesh__DOT__cycle)) {
        vlTOPp->tb_noc_mesh__DOT__local_in_valid = 
            (0xfffeU & (IData)(vlTOPp->tb_noc_mesh__DOT__local_in_valid));
    }
    if ((0x28U == vlTOPp->tb_noc_mesh__DOT__cycle)) {
        __Vfunc_tb_noc_mesh__DOT__make_flit__2__h = 
            (0x100000000000ULL | (0xfffffffffffULL 
                                  & __Vfunc_tb_noc_mesh__DOT__make_flit__2__h));
        __Vfunc_tb_noc_mesh__DOT__make_flit__2__h = 
            (0xf0000000000ULL | __Vfunc_tb_noc_mesh__DOT__make_flit__2__h);
        vlTOPp->tb_noc_mesh__DOT__local_in_valid = 
            (2U | (IData)(vlTOPp->tb_noc_mesh__DOT__local_in_valid));
        __Vfunc_tb_noc_mesh__DOT__make_flit__2__h = 
            (0x200100ULL | (0xff00000000ffULL & __Vfunc_tb_noc_mesh__DOT__make_flit__2__h));
        vlTOPp->tb_noc_mesh__DOT__local_in_valid = 
            (4U | (IData)(vlTOPp->tb_noc_mesh__DOT__local_in_valid));
        __Vfunc_tb_noc_mesh__DOT__make_flit__2__h = 
            (0x60ULL | (0xffffffffff1fULL & __Vfunc_tb_noc_mesh__DOT__make_flit__2__h));
        vlTOPp->tb_noc_mesh__DOT__local_in_valid = 
            (8U | (IData)(vlTOPp->tb_noc_mesh__DOT__local_in_valid));
        __Vfunc_tb_noc_mesh__DOT__make_flit__2__h = 
            (0xffffffffffe3ULL & __Vfunc_tb_noc_mesh__DOT__make_flit__2__h);
        __Vfunc_tb_noc_mesh__DOT__make_flit__2__h = 
            (2ULL | __Vfunc_tb_noc_mesh__DOT__make_flit__2__h);
        __Vfunc_tb_noc_mesh__DOT__make_flit__2__h = 
            (1ULL | __Vfunc_tb_noc_mesh__DOT__make_flit__2__h);
        __Vfunc_build_flit__3__hdr = __Vfunc_tb_noc_mesh__DOT__make_flit__2__h;
        __Vfunc_build_flit__3__f[0U] = 0xabcdabcdU;
        __Vfunc_build_flit__3__f[1U] = 0xabcdabcdU;
        __Vfunc_build_flit__3__f[2U] = (0xffff0000U 
                                        & ((IData)(__Vfunc_build_flit__3__hdr) 
                                           << 0x10U));
        __Vfunc_build_flit__3__f[3U] = ((0xffffU & 
                                         ((IData)(__Vfunc_build_flit__3__hdr) 
                                          >> 0x10U)) 
                                        | (0xffff0000U 
                                           & ((IData)(
                                                      (__Vfunc_build_flit__3__hdr 
                                                       >> 0x20U)) 
                                              << 0x10U)));
        __Vfunc_build_flit__3__Vfuncout[0U] = __Vfunc_build_flit__3__f[0U];
        __Vfunc_build_flit__3__Vfuncout[1U] = __Vfunc_build_flit__3__f[1U];
        __Vfunc_build_flit__3__Vfuncout[2U] = __Vfunc_build_flit__3__f[2U];
        __Vfunc_build_flit__3__Vfuncout[3U] = __Vfunc_build_flit__3__f[3U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__2__Vfuncout[0U] 
            = __Vfunc_build_flit__3__Vfuncout[0U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__2__Vfuncout[1U] 
            = __Vfunc_build_flit__3__Vfuncout[1U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__2__Vfuncout[2U] 
            = __Vfunc_build_flit__3__Vfuncout[2U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__2__Vfuncout[3U] 
            = __Vfunc_build_flit__3__Vfuncout[3U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[4U] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__2__Vfuncout[0U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[5U] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__2__Vfuncout[1U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[6U] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__2__Vfuncout[2U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[7U] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__2__Vfuncout[3U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__4__h = 
            (0x200000000000ULL | (0xfffffffffffULL 
                                  & __Vfunc_tb_noc_mesh__DOT__make_flit__4__h));
        __Vfunc_tb_noc_mesh__DOT__make_flit__4__h = 
            (0xf0000000000ULL | __Vfunc_tb_noc_mesh__DOT__make_flit__4__h);
        __Vfunc_tb_noc_mesh__DOT__make_flit__4__h = 
            (0x200200ULL | (0xff00000000ffULL & __Vfunc_tb_noc_mesh__DOT__make_flit__4__h));
        __Vfunc_tb_noc_mesh__DOT__make_flit__4__h = 
            (0x80ULL | (0xffffffffff1fULL & __Vfunc_tb_noc_mesh__DOT__make_flit__4__h));
        __Vfunc_tb_noc_mesh__DOT__make_flit__4__h = 
            (0xffffffffffe3ULL & __Vfunc_tb_noc_mesh__DOT__make_flit__4__h);
        __Vfunc_tb_noc_mesh__DOT__make_flit__4__h = 
            (2ULL | __Vfunc_tb_noc_mesh__DOT__make_flit__4__h);
        __Vfunc_tb_noc_mesh__DOT__make_flit__4__h = 
            (1ULL | __Vfunc_tb_noc_mesh__DOT__make_flit__4__h);
        __Vfunc_build_flit__5__hdr = __Vfunc_tb_noc_mesh__DOT__make_flit__4__h;
        __Vfunc_build_flit__5__f[0U] = 0xabcdabcdU;
        __Vfunc_build_flit__5__f[1U] = 0xabcdabcdU;
        __Vfunc_build_flit__5__f[2U] = (0xffff0000U 
                                        & ((IData)(__Vfunc_build_flit__5__hdr) 
                                           << 0x10U));
        __Vfunc_build_flit__5__f[3U] = ((0xffffU & 
                                         ((IData)(__Vfunc_build_flit__5__hdr) 
                                          >> 0x10U)) 
                                        | (0xffff0000U 
                                           & ((IData)(
                                                      (__Vfunc_build_flit__5__hdr 
                                                       >> 0x20U)) 
                                              << 0x10U)));
        __Vfunc_build_flit__5__Vfuncout[0U] = __Vfunc_build_flit__5__f[0U];
        __Vfunc_build_flit__5__Vfuncout[1U] = __Vfunc_build_flit__5__f[1U];
        __Vfunc_build_flit__5__Vfuncout[2U] = __Vfunc_build_flit__5__f[2U];
        __Vfunc_build_flit__5__Vfuncout[3U] = __Vfunc_build_flit__5__f[3U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__4__Vfuncout[0U] 
            = __Vfunc_build_flit__5__Vfuncout[0U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__4__Vfuncout[1U] 
            = __Vfunc_build_flit__5__Vfuncout[1U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__4__Vfuncout[2U] 
            = __Vfunc_build_flit__5__Vfuncout[2U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__4__Vfuncout[3U] 
            = __Vfunc_build_flit__5__Vfuncout[3U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[8U] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__4__Vfuncout[0U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[9U] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__4__Vfuncout[1U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[0xaU] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__4__Vfuncout[2U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[0xbU] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__4__Vfuncout[3U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__6__h = 
            (0x300000000000ULL | (0xfffffffffffULL 
                                  & __Vfunc_tb_noc_mesh__DOT__make_flit__6__h));
        __Vfunc_tb_noc_mesh__DOT__make_flit__6__h = 
            (0xf0000000000ULL | __Vfunc_tb_noc_mesh__DOT__make_flit__6__h);
        __Vfunc_tb_noc_mesh__DOT__make_flit__6__h = 
            (0x200300ULL | (0xff00000000ffULL & __Vfunc_tb_noc_mesh__DOT__make_flit__6__h));
        __Vfunc_tb_noc_mesh__DOT__make_flit__6__h = 
            (0x60ULL | (0xffffffffff1fULL & __Vfunc_tb_noc_mesh__DOT__make_flit__6__h));
        __Vfunc_tb_noc_mesh__DOT__make_flit__6__h = 
            (0xffffffffffe3ULL & __Vfunc_tb_noc_mesh__DOT__make_flit__6__h);
        __Vfunc_tb_noc_mesh__DOT__make_flit__6__h = 
            (2ULL | __Vfunc_tb_noc_mesh__DOT__make_flit__6__h);
        __Vfunc_tb_noc_mesh__DOT__make_flit__6__h = 
            (1ULL | __Vfunc_tb_noc_mesh__DOT__make_flit__6__h);
        __Vfunc_build_flit__7__hdr = __Vfunc_tb_noc_mesh__DOT__make_flit__6__h;
        __Vfunc_build_flit__7__f[0U] = 0xabcdabcdU;
        __Vfunc_build_flit__7__f[1U] = 0xabcdabcdU;
        __Vfunc_build_flit__7__f[2U] = (0xffff0000U 
                                        & ((IData)(__Vfunc_build_flit__7__hdr) 
                                           << 0x10U));
        __Vfunc_build_flit__7__f[3U] = ((0xffffU & 
                                         ((IData)(__Vfunc_build_flit__7__hdr) 
                                          >> 0x10U)) 
                                        | (0xffff0000U 
                                           & ((IData)(
                                                      (__Vfunc_build_flit__7__hdr 
                                                       >> 0x20U)) 
                                              << 0x10U)));
        __Vfunc_build_flit__7__Vfuncout[0U] = __Vfunc_build_flit__7__f[0U];
        __Vfunc_build_flit__7__Vfuncout[1U] = __Vfunc_build_flit__7__f[1U];
        __Vfunc_build_flit__7__Vfuncout[2U] = __Vfunc_build_flit__7__f[2U];
        __Vfunc_build_flit__7__Vfuncout[3U] = __Vfunc_build_flit__7__f[3U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__6__Vfuncout[0U] 
            = __Vfunc_build_flit__7__Vfuncout[0U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__6__Vfuncout[1U] 
            = __Vfunc_build_flit__7__Vfuncout[1U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__6__Vfuncout[2U] 
            = __Vfunc_build_flit__7__Vfuncout[2U];
        __Vfunc_tb_noc_mesh__DOT__make_flit__6__Vfuncout[3U] 
            = __Vfunc_build_flit__7__Vfuncout[3U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[0xcU] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__6__Vfuncout[0U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[0xdU] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__6__Vfuncout[1U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[0xeU] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__6__Vfuncout[2U];
        vlTOPp->tb_noc_mesh__DOT__local_in_flit[0xfU] 
            = __Vfunc_tb_noc_mesh__DOT__make_flit__6__Vfuncout[3U];
    }
    if ((0x29U == vlTOPp->tb_noc_mesh__DOT__cycle)) {
        vlTOPp->tb_noc_mesh__DOT__local_in_valid = 
            (0xfffdU & (IData)(vlTOPp->tb_noc_mesh__DOT__local_in_valid));
        vlTOPp->tb_noc_mesh__DOT__local_in_valid = 
            (0xfffbU & (IData)(vlTOPp->tb_noc_mesh__DOT__local_in_valid));
        vlTOPp->tb_noc_mesh__DOT__local_in_valid = 
            (0xfff7U & (IData)(vlTOPp->tb_noc_mesh__DOT__local_in_valid));
    }
    if ((VL_LTS_III(1,32,32, 0x3cU, vlTOPp->tb_noc_mesh__DOT__cycle) 
         & VL_GTS_III(1,32,32, 0x64U, vlTOPp->tb_noc_mesh__DOT__cycle))) {
        vlTOPp->tb_noc_mesh__DOT__local_out_ready = 
            ((0xffdfU & (IData)(vlTOPp->tb_noc_mesh__DOT__local_out_ready)) 
             | ((0U != VL_MODDIVS_III(32, vlTOPp->tb_noc_mesh__DOT__cycle, (IData)(3U))) 
                << 5U));
    }
    if (VL_UNLIKELY((0xc8U == vlTOPp->tb_noc_mesh__DOT__cycle))) {
        VL_WRITEF("Mesh test complete\n");
        VL_FINISH_MT("tb/tb_noc_mesh.sv", 97, "");
    }
    vlTOPp->tb_noc_mesh__DOT__cycle = __Vdly__tb_noc_mesh__DOT__cycle;
}

void Vtb_noc_mesh::_eval(Vtb_noc_mesh__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_mesh::_eval\n"); );
    Vtb_noc_mesh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_noc_mesh__DOT__rst_n 
        = vlTOPp->__VinpClk__TOP__tb_noc_mesh__DOT__rst_n;
    vlTOPp->__VinpClk__TOP__tb_noc_mesh__DOT__rst_n 
        = vlTOPp->tb_noc_mesh__DOT__rst_n;
}

VL_INLINE_OPT QData Vtb_noc_mesh::_change_request(Vtb_noc_mesh__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_mesh::_change_request\n"); );
    Vtb_noc_mesh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtb_noc_mesh::_change_request_1(Vtb_noc_mesh__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_mesh::_change_request_1\n"); );
    Vtb_noc_mesh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->tb_noc_mesh__DOT__rst_n ^ vlTOPp->__Vchglast__TOP__tb_noc_mesh__DOT__rst_n));
    VL_DEBUG_IF( if(__req && ((vlTOPp->tb_noc_mesh__DOT__rst_n ^ vlTOPp->__Vchglast__TOP__tb_noc_mesh__DOT__rst_n))) VL_DBG_MSGF("        CHANGE: tb/tb_noc_mesh.sv:12: tb_noc_mesh.rst_n\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__tb_noc_mesh__DOT__rst_n 
        = vlTOPp->tb_noc_mesh__DOT__rst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vtb_noc_mesh::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_mesh::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
