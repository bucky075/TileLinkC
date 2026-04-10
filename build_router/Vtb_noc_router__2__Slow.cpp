// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_noc_router.h for the primary calling header

#include "Vtb_noc_router.h"
#include "Vtb_noc_router__Syms.h"

void Vtb_noc_router::_settle__TOP__3(Vtb_noc_router__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_router::_settle__TOP__3\n"); );
    Vtb_noc_router* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_noc_router::_eval_initial(Vtb_noc_router__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_router::_eval_initial\n"); );
    Vtb_noc_router* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__noc_params_pkg._initial__TOP__noc_params_pkg__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_noc_router__DOT__rst_n 
        = vlTOPp->__VinpClk__TOP__tb_noc_router__DOT__rst_n;
}

void Vtb_noc_router::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_router::final\n"); );
    // Variables
    Vtb_noc_router__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtb_noc_router* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtb_noc_router::_eval_settle(Vtb_noc_router__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_router::_eval_settle\n"); );
    Vtb_noc_router* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vtb_noc_router::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_noc_router::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__rst_n = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__in_valid = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(640, tb_noc_router__DOT__in_flit);
    tb_noc_router__DOT__in_ready = VL_RAND_RESET_I(5);
    tb_noc_router__DOT__out_valid = VL_RAND_RESET_I(5);
    tb_noc_router__DOT__out_ready = VL_RAND_RESET_I(5);
    tb_noc_router__DOT__cycle = 0;
    VL_RAND_RESET_W(640, tb_noc_router__DOT____Vcellout__dut__out_flit);
    tb_noc_router__DOT__dut__DOT__fifo_push = VL_RAND_RESET_Q(40);
    tb_noc_router__DOT__dut__DOT__fifo_pop = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(5120, tb_noc_router__DOT__dut__DOT__fifo_din);
    VL_RAND_RESET_W(5120, tb_noc_router__DOT__dut__DOT__fifo_dout);
    tb_noc_router__DOT__dut__DOT__fifo_empty = VL_RAND_RESET_Q(40);
    tb_noc_router__DOT__dut__DOT__fifo_full = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(320, tb_noc_router__DOT__dut__DOT__fifo_free);
    tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__hdr = VL_RAND_RESET_Q(48);
    tb_noc_router__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk3__DOT__vc = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__req_vec = VL_RAND_RESET_Q(40);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__hold_vec = VL_RAND_RESET_Q(40);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__age_vec[__Vi0] = VL_RAND_RESET_I(16);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__grant_vec = VL_RAND_RESET_Q(40);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr = VL_RAND_RESET_Q(48);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            tb_noc_router__DOT__dut__DOT____Vcellinp__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__age[__Vi0] = VL_RAND_RESET_I(16);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__req_vec = VL_RAND_RESET_Q(40);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__hold_vec = VL_RAND_RESET_Q(40);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__age_vec[__Vi0] = VL_RAND_RESET_I(16);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__grant_vec = VL_RAND_RESET_Q(40);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr = VL_RAND_RESET_Q(48);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            tb_noc_router__DOT__dut__DOT____Vcellinp__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__age[__Vi0] = VL_RAND_RESET_I(16);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__req_vec = VL_RAND_RESET_Q(40);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__hold_vec = VL_RAND_RESET_Q(40);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__age_vec[__Vi0] = VL_RAND_RESET_I(16);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__grant_vec = VL_RAND_RESET_Q(40);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr = VL_RAND_RESET_Q(48);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            tb_noc_router__DOT__dut__DOT____Vcellinp__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__age[__Vi0] = VL_RAND_RESET_I(16);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__req_vec = VL_RAND_RESET_Q(40);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__hold_vec = VL_RAND_RESET_Q(40);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__age_vec[__Vi0] = VL_RAND_RESET_I(16);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__grant_vec = VL_RAND_RESET_Q(40);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr = VL_RAND_RESET_Q(48);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            tb_noc_router__DOT__dut__DOT____Vcellinp__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__age[__Vi0] = VL_RAND_RESET_I(16);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__req_vec = VL_RAND_RESET_Q(40);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__hold_vec = VL_RAND_RESET_Q(40);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__age_vec[__Vi0] = VL_RAND_RESET_I(16);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__grant_vec = VL_RAND_RESET_Q(40);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__idx = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__hdr = VL_RAND_RESET_Q(48);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dest_port = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_x = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__dst_y = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            tb_noc_router__DOT__dut__DOT____Vcellinp__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__age[__Vi0] = VL_RAND_RESET_I(16);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__ip = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__unnamedblk11__DOT__unnamedblk12__DOT__iv = 0;
    tb_noc_router__DOT__dut__DOT____Vlvbound4 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT____Vlvbound5 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT____Vlvbound6);
    tb_noc_router__DOT__dut__DOT____Vlvbound10 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT____Vlvbound11 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT____Vlvbound13 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT____Vlvbound17 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT____Vlvbound18 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT____Vlvbound20 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT____Vlvbound24 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT____Vlvbound25 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT____Vlvbound27 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT____Vlvbound31 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT____Vlvbound32 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT____Vlvbound34 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT____Vlvbound38 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT____Vlvbound39 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT____Vlvbound41 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(5);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<12; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT____Vlvbound1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(5);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<12; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT____Vlvbound1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(5);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<12; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT____Vlvbound1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(5);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<12; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT____Vlvbound1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(2);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(5);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<12; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT____Vlvbound1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem[__Vi0]);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__wr_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr = VL_RAND_RESET_I(3);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__used = VL_RAND_RESET_I(4);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_push = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__allow_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit[__Vi0] = VL_RAND_RESET_I(32);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__rr_ptr = VL_RAND_RESET_I(6);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__i = VL_RAND_RESET_I(32);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__j = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk4__DOT__m = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT____Vlvbound2 = VL_RAND_RESET_I(32);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT____Vlvbound5 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT____Vlvbound6 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit[__Vi0] = VL_RAND_RESET_I(32);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__rr_ptr = VL_RAND_RESET_I(6);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__i = VL_RAND_RESET_I(32);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__j = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk4__DOT__m = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT____Vlvbound2 = VL_RAND_RESET_I(32);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT____Vlvbound5 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT____Vlvbound6 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit[__Vi0] = VL_RAND_RESET_I(32);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__rr_ptr = VL_RAND_RESET_I(6);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__i = VL_RAND_RESET_I(32);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__j = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk4__DOT__m = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT____Vlvbound2 = VL_RAND_RESET_I(32);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT____Vlvbound5 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT____Vlvbound6 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit[__Vi0] = VL_RAND_RESET_I(32);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__rr_ptr = VL_RAND_RESET_I(6);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__i = VL_RAND_RESET_I(32);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__j = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk4__DOT__m = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT____Vlvbound2 = VL_RAND_RESET_I(32);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT____Vlvbound5 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT____Vlvbound6 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit[__Vi0] = VL_RAND_RESET_I(32);
    }}
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__rr_ptr = VL_RAND_RESET_I(6);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__i = VL_RAND_RESET_I(32);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__j = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk2__DOT__k = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk4__DOT__m = 0;
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT____Vlvbound2 = VL_RAND_RESET_I(32);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT____Vlvbound5 = VL_RAND_RESET_I(1);
    tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT____Vlvbound6 = VL_RAND_RESET_I(32);
    __Vfunc_extract_hdr__2__Vfuncout = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(128, __Vfunc_extract_hdr__2__flit);
    __Vfunc_extract_hdr__2__hdr = VL_RAND_RESET_Q(48);
    __Vfunc_extract_hdr__3__Vfuncout = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(128, __Vfunc_extract_hdr__3__flit);
    __Vfunc_extract_hdr__3__hdr = VL_RAND_RESET_Q(48);
    __Vfunc_extract_hdr__4__Vfuncout = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(128, __Vfunc_extract_hdr__4__flit);
    __Vfunc_extract_hdr__4__hdr = VL_RAND_RESET_Q(48);
    __Vfunc_extract_hdr__5__Vfuncout = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(128, __Vfunc_extract_hdr__5__flit);
    __Vfunc_extract_hdr__5__hdr = VL_RAND_RESET_Q(48);
    __Vfunc_extract_hdr__6__Vfuncout = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(128, __Vfunc_extract_hdr__6__flit);
    __Vfunc_extract_hdr__6__hdr = VL_RAND_RESET_Q(48);
    __Vfunc_extract_hdr__7__Vfuncout = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(128, __Vfunc_extract_hdr__7__flit);
    __Vfunc_extract_hdr__7__hdr = VL_RAND_RESET_Q(48);
    __Vdly__tb_noc_router__DOT__cycle = 0;
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__0__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__1__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__2__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__3__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__0__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__1__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__2__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__3__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__4__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__5__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__6__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvdim0__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem__v0);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(128, __Vdly__tb_noc_router__DOT__dut__DOT__GEN_PORT__BRA__4__KET____DOT__GEN_VC__BRA__7__KET____DOT__fifo_i__DOT__dout_reg);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v0 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v1 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v2 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v3 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v4 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v5 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v6 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v7 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v8 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v9 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v10 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v11 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v12 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v13 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v14 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v15 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v16 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v17 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v18 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v19 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v20 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v21 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v22 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v23 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v24 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v25 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v26 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v27 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v28 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v29 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v30 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v31 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v32 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v33 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v34 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v35 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v36 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v37 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v38 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v39 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v40 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v41 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v42 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v43 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v44 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v45 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v46 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v47 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v48 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v49 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v50 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v51 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v52 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v53 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v54 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v55 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v56 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v57 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v58 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v59 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v60 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v61 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v62 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v63 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v64 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v65 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v66 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v67 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v68 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v69 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v70 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v71 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v72 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v73 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v74 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v75 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v76 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v77 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v78 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v79 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v80 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v120 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v121 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v122 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v123 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v124 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v125 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v126 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v127 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v128 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v129 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v130 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v131 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v132 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v133 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v134 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v135 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v136 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v137 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v138 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v139 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v140 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v141 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v142 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v143 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v144 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v145 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v146 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v147 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v148 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v149 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v150 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v151 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v152 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v153 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v154 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v155 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v156 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v157 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v158 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__0__KET____DOT__arb_i__DOT__deficit__v159 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v0 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v1 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v2 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v3 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v4 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v5 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v6 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v7 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v8 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v9 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v10 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v11 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v12 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v13 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v14 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v15 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v16 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v17 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v18 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v19 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v20 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v21 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v22 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v23 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v24 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v25 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v26 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v27 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v28 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v29 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v30 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v31 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v32 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v33 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v34 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v35 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v36 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v37 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v38 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v39 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v40 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v41 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v42 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v43 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v44 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v45 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v46 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v47 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v48 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v49 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v50 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v51 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v52 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v53 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v54 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v55 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v56 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v57 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v58 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v59 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v60 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v61 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v62 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v63 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v64 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v65 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v66 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v67 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v68 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v69 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v70 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v71 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v72 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v73 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v74 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v75 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v76 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v77 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v78 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v79 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v80 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v120 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v121 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v122 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v123 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v124 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v125 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v126 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v127 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v128 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v129 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v130 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v131 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v132 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v133 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v134 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v135 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v136 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v137 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v138 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v139 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v140 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v141 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v142 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v143 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v144 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v145 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v146 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v147 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v148 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v149 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v150 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v151 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v152 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v153 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v154 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v155 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v156 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v157 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v158 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__1__KET____DOT__arb_i__DOT__deficit__v159 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v0 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v1 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v2 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v3 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v4 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v5 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v6 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v7 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v8 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v9 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v10 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v11 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v12 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v13 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v14 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v15 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v16 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v17 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v18 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v19 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v20 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v21 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v22 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v23 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v24 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v25 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v26 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v27 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v28 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v29 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v30 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v31 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v32 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v33 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v34 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v35 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v36 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v37 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v38 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v39 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v40 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v41 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v42 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v43 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v44 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v45 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v46 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v47 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v48 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v49 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v50 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v51 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v52 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v53 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v54 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v55 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v56 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v57 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v58 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v59 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v60 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v61 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v62 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v63 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v64 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v65 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v66 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v67 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v68 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v69 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v70 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v71 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v72 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v73 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v74 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v75 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v76 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v77 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v78 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v79 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v80 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v120 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v121 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v122 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v123 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v124 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v125 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v126 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v127 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v128 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v129 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v130 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v131 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v132 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v133 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v134 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v135 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v136 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v137 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v138 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v139 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v140 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v141 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v142 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v143 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v144 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v145 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v146 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v147 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v148 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v149 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v150 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v151 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v152 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v153 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v154 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v155 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v156 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v157 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v158 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__2__KET____DOT__arb_i__DOT__deficit__v159 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v0 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v1 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v1 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v2 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v2 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v3 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v3 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v4 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v4 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v5 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v5 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v6 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v6 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v7 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v7 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v8 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v8 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v9 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v9 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v10 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v10 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v11 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v11 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v12 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v12 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v13 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v13 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v14 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v14 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v15 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v15 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v16 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v16 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v17 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v17 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v18 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v18 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v19 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v19 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v20 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v20 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v21 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v21 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v22 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v22 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v23 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v23 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v24 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v24 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v25 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v25 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v26 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v26 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v27 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v27 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v28 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v28 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v29 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v29 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v30 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v30 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v31 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v31 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v32 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v32 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v33 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v33 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v34 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v34 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v35 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v35 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v36 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v36 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v37 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v37 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v38 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v38 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v39 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v39 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v40 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v40 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v41 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v41 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v42 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v42 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v43 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v43 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v44 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v44 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v45 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v45 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v46 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v46 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v47 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v47 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v48 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v48 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v49 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v49 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v50 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v50 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v51 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v51 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v52 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v52 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v53 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v53 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v54 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v54 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v55 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v55 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v56 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v56 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v57 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v57 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v58 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v58 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v59 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v59 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v60 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v60 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v61 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v61 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v62 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v62 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v63 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v63 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v64 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v64 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v65 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v65 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v66 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v66 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v67 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v67 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v68 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v68 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v69 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v69 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v70 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v70 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v71 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v71 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v72 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v72 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v73 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v73 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v74 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v74 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v75 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v75 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v76 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v76 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v77 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v77 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v78 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v78 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v79 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v79 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v80 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v120 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v120 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v121 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v121 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v122 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v122 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v123 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v123 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v124 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v124 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v125 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v125 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v126 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v126 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v127 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v127 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v128 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v128 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v129 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v129 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v130 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v130 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v131 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v131 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v132 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v132 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v133 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v133 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v134 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v134 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v135 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v135 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v136 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v136 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v137 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v137 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v138 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v138 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v139 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v139 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v140 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v140 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v141 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v141 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v142 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v142 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v143 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v143 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v144 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v144 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v145 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v145 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v146 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v146 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v147 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v147 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v148 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v148 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v149 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v149 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v150 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v150 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v151 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v151 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v152 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v152 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v153 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v153 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v154 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v154 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v155 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v155 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v156 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v156 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v157 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v157 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v158 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v158 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v159 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__3__KET____DOT__arb_i__DOT__deficit__v159 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v0 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v1 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v1 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v2 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v2 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v3 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v3 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v4 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v4 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v5 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v5 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v6 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v6 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v7 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v7 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v8 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v8 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v9 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v9 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v10 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v10 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v11 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v11 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v12 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v12 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v13 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v13 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v14 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v14 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v15 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v15 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v16 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v16 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v17 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v17 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v18 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v18 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v19 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v19 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v20 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v20 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v21 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v21 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v22 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v22 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v23 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v23 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v24 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v24 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v25 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v25 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v26 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v26 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v27 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v27 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v28 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v28 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v29 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v29 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v30 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v30 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v31 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v31 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v32 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v32 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v33 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v33 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v34 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v34 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v35 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v35 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v36 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v36 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v37 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v37 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v38 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v38 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v39 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v39 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v40 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v40 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v41 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v41 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v42 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v42 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v43 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v43 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v44 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v44 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v45 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v45 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v46 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v46 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v47 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v47 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v48 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v48 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v49 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v49 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v50 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v50 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v51 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v51 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v52 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v52 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v53 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v53 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v54 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v54 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v55 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v55 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v56 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v56 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v57 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v57 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v58 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v58 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v59 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v59 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v60 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v60 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v61 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v61 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v62 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v62 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v63 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v63 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v64 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v64 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v65 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v65 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v66 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v66 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v67 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v67 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v68 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v68 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v69 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v69 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v70 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v70 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v71 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v71 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v72 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v72 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v73 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v73 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v74 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v74 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v75 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v75 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v76 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v76 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v77 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v77 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v78 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v78 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v79 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v79 = 0;
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v80 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v120 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v120 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v121 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v121 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v122 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v122 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v123 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v123 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v124 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v124 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v125 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v125 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v126 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v126 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v127 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v127 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v128 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v128 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v129 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v129 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v130 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v130 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v131 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v131 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v132 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v132 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v133 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v133 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v134 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v134 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v135 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v135 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v136 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v136 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v137 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v137 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v138 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v138 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v139 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v139 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v140 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v140 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v141 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v141 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v142 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v142 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v143 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v143 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v144 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v144 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v145 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v145 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v146 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v146 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v147 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v147 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v148 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v148 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v149 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v149 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v150 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v150 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v151 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v151 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v152 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v152 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v153 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v153 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v154 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v154 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v155 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v155 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v156 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v156 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v157 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v157 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v158 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v158 = 0;
    __Vdlyvval__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v159 = VL_RAND_RESET_I(32);
    __Vdlyvset__tb_noc_router__DOT__dut__DOT__GEN_OUTPUT__BRA__4__KET____DOT__arb_i__DOT__deficit__v159 = 0;
    __VinpClk__TOP__tb_noc_router__DOT__rst_n = VL_RAND_RESET_I(1);
    __Vchglast__TOP__tb_noc_router__DOT__rst_n = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
