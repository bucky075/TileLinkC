// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_noc_router.h for the primary calling header

#include "Vtb_noc_router.h"
#include "Vtb_noc_router__Syms.h"

VL_INLINE_OPT void Vtb_noc_router::_sequent__TOP__9(Vtb_noc_router__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_router::_sequent__TOP__9\n"); );
    Vtb_noc_router* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec = 0ULL;
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (1ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (2ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (4ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (8ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x10ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x20ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x40ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x80ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x100ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x200ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x400ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x800ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x1000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x2000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x4000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x8000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x10000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x20000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x40000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x80000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x100000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x200000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x400000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x800000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x1000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x2000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x4000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x8000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x10000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x20000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x40000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x80000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x100000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x200000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x400000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x800000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x1000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x2000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x4000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
            = (0x8000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec);
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__j = 0x28U;
    if ((0ULL == vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k = 0U;
        {
            while (VL_GTS_III(1,32,32, 0x28U, vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k)) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx 
                    = VL_MODDIV_III(32, ((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__rr_ptr) 
                                         + vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k), (IData)(0x28U));
                if ((((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)) 
                      & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec 
                                 >> (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)))) 
                     & (0U != ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))
                                ? vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit
                               [(0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)]
                                : 0U)))) {
                    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT____Vlvbound5 = 1U;
                    if (VL_LIKELY((0x27U >= (0x3fU 
                                             & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)))) {
                        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                            = (((~ (1ULL << (0x3fU 
                                             & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))) 
                                & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec) 
                               | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT____Vlvbound5)) 
                                  << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)));
                    }
                    goto __Vlabel1;
                }
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k);
            }
            __Vlabel1: ;
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec = 0ULL;
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (1ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (2ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (4ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (8ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x10ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x20ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x40ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x80ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x100ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x200ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x400ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x800ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x1000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x2000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x4000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x8000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x10000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x20000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x40000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x80000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x100000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x200000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x400000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x800000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x1000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x2000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x4000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x8000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x10000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x20000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x40000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x80000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x100000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x200000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x400000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x800000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x1000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x2000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x4000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
            = (0x8000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec);
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__j = 0x28U;
    if ((0ULL == vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k = 0U;
        {
            while (VL_GTS_III(1,32,32, 0x28U, vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k)) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx 
                    = VL_MODDIV_III(32, ((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__rr_ptr) 
                                         + vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k), (IData)(0x28U));
                if ((((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)) 
                      & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec 
                                 >> (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)))) 
                     & (0U != ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))
                                ? vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit
                               [(0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)]
                                : 0U)))) {
                    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT____Vlvbound5 = 1U;
                    if (VL_LIKELY((0x27U >= (0x3fU 
                                             & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)))) {
                        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                            = (((~ (1ULL << (0x3fU 
                                             & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))) 
                                & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec) 
                               | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT____Vlvbound5)) 
                                  << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)));
                    }
                    goto __Vlabel2;
                }
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k);
            }
            __Vlabel2: ;
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec = 0ULL;
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (1ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (2ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (4ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (8ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x10ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x20ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x40ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x80ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x100ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x200ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x400ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x800ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x1000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x2000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x4000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x8000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x10000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x20000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x40000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x80000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x100000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x200000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x400000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x800000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x1000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x2000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x4000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x8000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x10000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x20000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x40000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x80000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x100000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x200000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x400000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x800000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x1000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x2000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x4000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
            = (0x8000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec);
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__j = 0x28U;
    if ((0ULL == vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k = 0U;
        {
            while (VL_GTS_III(1,32,32, 0x28U, vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k)) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx 
                    = VL_MODDIV_III(32, ((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__rr_ptr) 
                                         + vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k), (IData)(0x28U));
                if ((((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)) 
                      & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec 
                                 >> (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)))) 
                     & (0U != ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))
                                ? vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit
                               [(0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)]
                                : 0U)))) {
                    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT____Vlvbound5 = 1U;
                    if (VL_LIKELY((0x27U >= (0x3fU 
                                             & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)))) {
                        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                            = (((~ (1ULL << (0x3fU 
                                             & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))) 
                                & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec) 
                               | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT____Vlvbound5)) 
                                  << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)));
                    }
                    goto __Vlabel3;
                }
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k);
            }
            __Vlabel3: ;
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec = 0ULL;
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (1ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (2ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (4ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (8ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x10ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x20ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x40ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x80ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x100ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x200ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x400ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x800ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x1000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x2000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x4000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x8000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x10000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x20000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x40000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x80000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x100000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x200000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x400000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x800000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x1000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x2000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x4000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x8000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x10000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x20000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x40000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x80000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x100000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x200000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x400000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x800000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x1000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x2000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x4000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
            = (0x8000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec);
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__j = 0x28U;
    if ((0ULL == vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k = 0U;
        {
            while (VL_GTS_III(1,32,32, 0x28U, vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k)) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx 
                    = VL_MODDIV_III(32, ((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__rr_ptr) 
                                         + vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k), (IData)(0x28U));
                if ((((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)) 
                      & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__req_vec 
                                 >> (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)))) 
                     & (0U != ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))
                                ? vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit
                               [(0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)]
                                : 0U)))) {
                    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT____Vlvbound5 = 1U;
                    if (VL_LIKELY((0x27U >= (0x3fU 
                                             & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)))) {
                        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                            = (((~ (1ULL << (0x3fU 
                                             & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))) 
                                & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec) 
                               | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT____Vlvbound5)) 
                                  << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)));
                    }
                    goto __Vlabel4;
                }
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k);
            }
            __Vlabel4: ;
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec = 0ULL;
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (1ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (2ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (4ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (8ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x10ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x20ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x40ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x80ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x100ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x200ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x400ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x800ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x1000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x2000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x4000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x8000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x10000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x20000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x40000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x80000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x100000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x200000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x400000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x800000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x1000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x2000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x4000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x8000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x10000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x20000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x40000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x80000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x100000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x200000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x400000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x800000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x1000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x2000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x4000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
            = (0x8000000000ULL | vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec);
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__j = 0x28U;
    if ((0ULL == vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec)) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k = 0U;
        {
            while (VL_GTS_III(1,32,32, 0x28U, vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k)) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx 
                    = VL_MODDIV_III(32, ((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__rr_ptr) 
                                         + vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k), (IData)(0x28U));
                if ((((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)) 
                      & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__req_vec 
                                 >> (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)))) 
                     & (0U != ((0x27U >= (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))
                                ? vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit
                               [(0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)]
                                : 0U)))) {
                    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT____Vlvbound5 = 1U;
                    if (VL_LIKELY((0x27U >= (0x3fU 
                                             & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)))) {
                        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                            = (((~ (1ULL << (0x3fU 
                                             & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))) 
                                & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec) 
                               | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT____Vlvbound5)) 
                                  << (0x3fU & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)));
                    }
                    goto __Vlabel5;
                }
                vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k);
            }
            __Vlabel5: ;
        }
    }
    vlTOPp->tb_noc_router__DOT__out_valid = (0x1eU 
                                             & (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (1U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] = 0U;
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] = 0U;
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] = 0U;
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] = 0U;
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[1U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[2U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[3U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[4U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[5U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[6U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[7U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[8U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[9U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xaU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xbU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xcU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xdU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xeU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xfU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x10U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x11U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x12U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x13U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x14U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x15U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x16U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x17U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x18U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x19U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x20U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x21U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x22U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x23U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x24U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x25U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x26U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x27U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x28U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x29U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x30U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x31U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x32U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x33U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x34U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x35U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x36U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x37U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x38U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x39U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x40U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x41U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x42U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x43U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x44U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x45U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x46U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x47U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x48U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x49U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x50U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x51U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x52U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x53U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x54U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x55U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x56U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x57U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x58U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x59U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x60U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x61U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x62U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x63U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x64U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x65U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x66U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x67U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x68U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x69U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x70U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x71U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x72U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x73U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x74U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x75U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x76U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x77U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x78U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x79U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x80U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x81U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x82U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x83U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x84U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x85U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x86U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x87U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x88U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x89U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x90U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x91U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x92U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x93U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x94U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x95U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x96U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x97U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x98U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x99U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[1U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[2U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[3U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9fU];
    }
    vlTOPp->tb_noc_router__DOT__out_valid = (0x1dU 
                                             & (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (2U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] = 0U;
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] = 0U;
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] = 0U;
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] = 0U;
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[1U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[2U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[3U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[4U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[5U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[6U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[7U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[8U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[9U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xaU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xbU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xcU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xdU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xeU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xfU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x10U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x11U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x12U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x13U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x14U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x15U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x16U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x17U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x18U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x19U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x20U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x21U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x22U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x23U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x24U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x25U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x26U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x27U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x28U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x29U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x30U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x31U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x32U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x33U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x34U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x35U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x36U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x37U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x38U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x39U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x40U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x41U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x42U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x43U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x44U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x45U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x46U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x47U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x48U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x49U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x50U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x51U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x52U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x53U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x54U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x55U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x56U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x57U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x58U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x59U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x60U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x61U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x62U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x63U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x64U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x65U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x66U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x67U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x68U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x69U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x70U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x71U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x72U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x73U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x74U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x75U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x76U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x77U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x78U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x79U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x80U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x81U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x82U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x83U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x84U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x85U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x86U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x87U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x88U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x89U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x90U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x91U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x92U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x93U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x94U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x95U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x96U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x97U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x98U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x99U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[4U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[5U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[6U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[7U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9fU];
    }
    vlTOPp->tb_noc_router__DOT__out_valid = (0x1bU 
                                             & (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (4U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] = 0U;
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] = 0U;
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] = 0U;
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] = 0U;
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[1U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[2U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[3U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[4U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[5U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[6U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[7U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[8U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[9U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xaU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xbU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xcU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xdU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xeU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xfU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x10U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x11U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x12U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x13U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x14U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x15U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x16U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x17U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x18U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x19U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x20U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x21U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x22U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x23U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x24U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x25U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x26U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x27U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x28U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x29U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x30U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x31U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x32U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x33U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x34U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x35U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x36U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x37U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x38U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x39U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x40U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x41U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x42U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x43U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x44U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x45U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x46U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x47U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x48U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x49U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x50U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x51U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x52U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x53U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x54U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x55U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x56U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x57U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x58U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x59U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x60U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x61U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x62U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x63U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x64U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x65U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x66U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x67U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x68U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x69U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x70U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x71U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x72U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x73U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x74U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x75U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x76U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x77U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x78U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x79U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x80U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x81U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x82U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x83U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x84U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x85U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x86U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x87U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x88U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x89U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x90U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x91U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x92U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x93U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x94U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x95U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x96U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x97U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x98U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x99U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[8U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[9U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xaU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xbU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9fU];
    }
    vlTOPp->tb_noc_router__DOT__out_valid = (0x17U 
                                             & (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (8U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] = 0U;
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] = 0U;
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] = 0U;
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] = 0U;
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[1U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[2U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[3U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[4U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[5U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[6U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[7U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[8U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[9U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xaU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xbU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xcU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xdU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xeU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xfU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x10U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x11U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x12U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x13U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x14U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x15U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x16U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x17U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x18U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x19U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x20U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x21U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x22U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x23U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x24U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x25U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x26U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x27U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x28U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x29U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x30U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x31U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x32U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x33U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x34U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x35U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x36U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x37U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x38U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x39U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x40U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x41U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x42U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x43U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x44U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x45U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x46U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x47U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x48U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x49U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x50U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x51U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x52U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x53U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x54U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x55U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x56U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x57U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x58U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x59U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x60U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x61U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x62U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x63U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x64U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x65U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x66U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x67U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x68U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x69U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x70U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x71U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x72U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x73U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x74U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x75U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x76U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x77U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x78U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x79U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x80U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x81U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x82U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x83U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x84U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x85U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x86U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x87U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x88U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x89U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x90U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x91U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x92U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x93U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x94U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x95U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x96U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x97U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x98U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x99U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xcU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xdU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xeU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0xfU] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9fU];
    }
    vlTOPp->tb_noc_router__DOT__out_valid = (0xfU & (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT__out_valid = (0x10U 
                                                 | (IData)(vlTOPp->tb_noc_router__DOT__out_valid));
    }
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] = 0U;
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] = 0U;
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] = 0U;
    vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] = 0U;
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[1U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[2U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[3U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[4U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[5U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[6U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[7U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[8U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[9U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xaU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xbU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xcU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xdU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xeU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0xfU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x10U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x11U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x12U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x13U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x14U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x15U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x16U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x17U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x18U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x19U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x1fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x20U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x21U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x22U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x23U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x24U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x25U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x26U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x27U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x28U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x29U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x2fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x30U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x31U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x32U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x33U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x34U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x35U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x36U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x37U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x38U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x39U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x3fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x40U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x41U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x42U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x43U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x44U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x45U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x46U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x47U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x48U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x49U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x4fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x50U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x51U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x52U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x53U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x54U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x55U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x56U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x57U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x58U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x59U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x5fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x60U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x61U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x62U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x63U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x64U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x65U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x66U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x67U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x68U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x69U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x6fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x70U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x71U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x72U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x73U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x74U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x75U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x76U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x77U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x78U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x79U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x7fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x80U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x81U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x82U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x83U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x84U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x85U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x86U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x87U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x88U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x89U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x8fU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x90U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x91U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x92U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x93U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x94U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x95U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x96U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x97U];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x98U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x99U];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9aU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9bU];
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x10U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9cU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x11U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9dU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x12U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9eU];
        vlTOPp->tb_noc_router__DOT____Vcellout__dut__out_flit[0x13U] 
            = vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_dout[0x9fU];
    }
}

VL_INLINE_OPT void Vtb_noc_router::_sequent__TOP__10(Vtb_noc_router__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_router::_sequent__TOP__10\n"); );
    Vtb_noc_router* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vfunc_tb_noc_router__DOT__make_flit__0__Vfuncout[4];
    WData/*127:0*/ __Vfunc_build_flit__1__Vfuncout[4];
    WData/*127:0*/ __Vfunc_build_flit__1__f[4];
    QData/*47:0*/ __Vfunc_tb_noc_router__DOT__make_flit__0__h;
    QData/*47:0*/ __Vfunc_build_flit__1__hdr;
    // Body
    vlTOPp->__Vdly__tb_noc_router__DOT__cycle = ((IData)(1U) 
                                                 + vlTOPp->tb_noc_router__DOT__cycle);
    if ((0U == vlTOPp->tb_noc_router__DOT__cycle)) {
        vlTOPp->tb_noc_router__DOT__rst_n = 0U;
        vlTOPp->tb_noc_router__DOT__in_valid = 0U;
        vlTOPp->tb_noc_router__DOT__out_ready = 0x1fU;
    }
    if ((5U == vlTOPp->tb_noc_router__DOT__cycle)) {
        vlTOPp->tb_noc_router__DOT__rst_n = 1U;
    }
    if ((0xaU == vlTOPp->tb_noc_router__DOT__cycle)) {
        __Vfunc_tb_noc_router__DOT__make_flit__0__h 
            = (0xfffffffffffULL & __Vfunc_tb_noc_router__DOT__make_flit__0__h);
        __Vfunc_tb_noc_router__DOT__make_flit__0__h 
            = (0x10000000000ULL | (0xf0ffffffffffULL 
                                   & __Vfunc_tb_noc_router__DOT__make_flit__0__h));
        vlTOPp->tb_noc_router__DOT__in_valid = (0x10U 
                                                | (IData)(vlTOPp->tb_noc_router__DOT__in_valid));
        __Vfunc_tb_noc_router__DOT__make_flit__0__h 
            = (0x123400ULL | (0xff00000000ffULL & __Vfunc_tb_noc_router__DOT__make_flit__0__h));
        __Vfunc_tb_noc_router__DOT__make_flit__0__h 
            = (0x60ULL | (0xffffffffff1fULL & __Vfunc_tb_noc_router__DOT__make_flit__0__h));
        __Vfunc_tb_noc_router__DOT__make_flit__0__h 
            = (0xffffffffffe3ULL & __Vfunc_tb_noc_router__DOT__make_flit__0__h);
        __Vfunc_tb_noc_router__DOT__make_flit__0__h 
            = (2ULL | __Vfunc_tb_noc_router__DOT__make_flit__0__h);
        __Vfunc_tb_noc_router__DOT__make_flit__0__h 
            = (1ULL | __Vfunc_tb_noc_router__DOT__make_flit__0__h);
        __Vfunc_build_flit__1__hdr = __Vfunc_tb_noc_router__DOT__make_flit__0__h;
        __Vfunc_build_flit__1__f[0U] = 0xcafebabeU;
        __Vfunc_build_flit__1__f[1U] = 0U;
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
        __Vfunc_tb_noc_router__DOT__make_flit__0__Vfuncout[0U] 
            = __Vfunc_build_flit__1__Vfuncout[0U];
        __Vfunc_tb_noc_router__DOT__make_flit__0__Vfuncout[1U] 
            = __Vfunc_build_flit__1__Vfuncout[1U];
        __Vfunc_tb_noc_router__DOT__make_flit__0__Vfuncout[2U] 
            = __Vfunc_build_flit__1__Vfuncout[2U];
        __Vfunc_tb_noc_router__DOT__make_flit__0__Vfuncout[3U] 
            = __Vfunc_build_flit__1__Vfuncout[3U];
        vlTOPp->tb_noc_router__DOT__in_flit[0x10U] 
            = __Vfunc_tb_noc_router__DOT__make_flit__0__Vfuncout[0U];
        vlTOPp->tb_noc_router__DOT__in_flit[0x11U] 
            = __Vfunc_tb_noc_router__DOT__make_flit__0__Vfuncout[1U];
        vlTOPp->tb_noc_router__DOT__in_flit[0x12U] 
            = __Vfunc_tb_noc_router__DOT__make_flit__0__Vfuncout[2U];
        vlTOPp->tb_noc_router__DOT__in_flit[0x13U] 
            = __Vfunc_tb_noc_router__DOT__make_flit__0__Vfuncout[3U];
    }
    if ((0xbU == vlTOPp->tb_noc_router__DOT__cycle)) {
        vlTOPp->tb_noc_router__DOT__in_valid = (0xfU 
                                                & (IData)(vlTOPp->tb_noc_router__DOT__in_valid));
    }
    if (VL_UNLIKELY((0x32U == vlTOPp->tb_noc_router__DOT__cycle))) {
        VL_WRITEF("Router test complete\n");
        VL_FINISH_MT("tb/tb_noc_router.sv", 72, "");
    }
    vlTOPp->tb_noc_router__DOT__cycle = vlTOPp->__Vdly__tb_noc_router__DOT__cycle;
}

VL_INLINE_OPT void Vtb_noc_router::_sequent__TOP__11(Vtb_noc_router__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_router::_sequent__TOP__11\n"); );
    Vtb_noc_router* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffffeULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffffdULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffffbULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffff7ULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffffefULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffffdfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffffbfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffff7fULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffeffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffdffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffbffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffff7ffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffefffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffdfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffbfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffff7fffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffeffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffdffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffbffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffff7ffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffefffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffdfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffbfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffff7fffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffeffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffdffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffbffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfff7ffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffefffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffdfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffbfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xff7fffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfeffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfdffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfbffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xf7ffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xefffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xdfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xbfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0x7fffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound13)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffffeULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffffdULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffffbULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffff7ULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffffefULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffffdfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffffbfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffff7fULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffeffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffdffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffbffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffff7ffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffefffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffdfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffbfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffff7fffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffeffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffdffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffbffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffff7ffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffefffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffdfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffbfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffff7fffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffeffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffdffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffbffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfff7ffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffefffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffdfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffbfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xff7fffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfeffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfdffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfbffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xf7ffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xefffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xdfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xbfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0x7fffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((2U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound20)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffffeULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffffdULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffffbULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffff7ULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffffefULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffffdfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffffbfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffff7fULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffeffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffdffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffbffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffff7ffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffefffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffdfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffbfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffff7fffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffeffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffdffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffbffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffff7ffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffefffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffdfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffbfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffff7fffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffeffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffdffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffbffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfff7ffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffefffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffdfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffbfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xff7fffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfeffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfdffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfbffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xf7ffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xefffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xdfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xbfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0x7fffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((4U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound27)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffffeULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffffdULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffffbULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffff7ULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffffefULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffffdfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffffbfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffff7fULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffeffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffdffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffbffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffff7ffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffefffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffdfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffbfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffff7fffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffeffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffdffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffbffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffff7ffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffefffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffdfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffbfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffff7fffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffeffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffdffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffbffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfff7ffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffefffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffdfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffbfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xff7fffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfeffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfdffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfbffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xf7ffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xefffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xdfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xbfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0x7fffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((8U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound34)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffffeULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffffdULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffffbULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffff7ULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffffefULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffffdfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffffbfULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffff7fULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffeffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffdffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffffbffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffff7ffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffefffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffdfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffffbfffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffff7fffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffeffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffdffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffffbffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffff7ffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffefffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffdfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffffbfffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffff7fffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffeffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffdffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfffbffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfff7ffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffefffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffdfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xffbfffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xff7fffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfeffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfdffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xfbffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xf7ffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xefffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xdfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0xbfffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
        = (0x7fffffffffULL & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop);
    if ((1U & (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 1U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 2U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 3U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 4U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 5U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 6U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 7U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 8U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 9U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xaU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xbU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xcU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xdU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xeU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0xfU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 1U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x10U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x11U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x12U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x13U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x14U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x15U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x16U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x17U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 2U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x18U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x19U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1aU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1bU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1cU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1dU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1eU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x1fU)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 3U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x20U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x21U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 1U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x22U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 2U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x23U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 3U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x24U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 4U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x25U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 5U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x26U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 6U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    if ((1U & (IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec 
                       >> 0x27U)))) {
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 4U;
        vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 7U;
        if ((0x10U & (IData)(vlTOPp->tb_noc_router__DOT__out_ready))) {
            vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41 = 1U;
            if ((0x27U >= (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                     << 3U) + (7U & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) {
                vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    = (((~ (1ULL << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                               << 3U) 
                                              + (7U 
                                                 & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv))))) 
                        & vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
                       | ((QData)((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT____Vlvbound41)) 
                          << (0x3fU & ((vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip 
                                        << 3U) + (7U 
                                                  & vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv)))));
            }
        }
    }
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push) 
           & (4U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 1U)) & (4U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 2U)) & (4U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 3U)) & (0x10U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 4U)) & (8U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 5U)) & (8U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 6U)) & (0xcU != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 7U)) & (8U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 8U)) & (4U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 9U)) & (4U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0xaU)) & (4U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0xbU)) & (0x10U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0xcU)) & (8U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0xdU)) & (8U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0xeU)) & (0xcU != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0xfU)) & (8U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x10U)) & (4U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x11U)) & (4U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x12U)) & (4U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x13U)) & (0x10U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x14U)) & (8U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x15U)) & (8U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x16U)) & (0xcU != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x17U)) & (8U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x18U)) & (4U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x19U)) & (4U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x1aU)) & (4U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x1bU)) & (0x10U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x1cU)) & (8U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x1dU)) & (8U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x1eU)) & (0xcU != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x1fU)) & (8U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x20U)) & (4U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x21U)) & (4U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x22U)) & (4U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x23U)) & (0x10U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x24U)) & (8U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x25U)) & (8U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x26U)) & (0xcU != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_push 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_push 
                    >> 0x27U)) & (8U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop) 
           & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 1U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 2U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 3U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 4U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 5U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 6U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 7U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 8U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 9U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0xaU)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0xbU)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0xcU)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0xdU)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0xeU)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0xfU)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x10U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x11U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x12U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x13U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x14U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x15U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x16U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x17U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x18U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x19U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x1aU)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x1bU)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x1cU)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x1dU)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x1eU)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x1fU)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x20U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x21U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x22U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x23U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x24U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x25U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x26U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used)));
    vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_pop 
        = ((IData)((vlTOPp->tb_noc_router__DOT__dut__DOT__fifo_pop 
                    >> 0x27U)) & (0U != (IData)(vlTOPp->tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used)));
}
