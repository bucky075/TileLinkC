// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_tl_end_to_end__Syms.h"


void Vtb_tl_end_to_end___024root__trace_chg_0_sub_0(Vtb_tl_end_to_end___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_tl_end_to_end___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root__trace_chg_0\n"); );
    // Body
    Vtb_tl_end_to_end___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tl_end_to_end___024root*>(voidSelf);
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_tl_end_to_end___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_tl_end_to_end___024root__trace_chg_0_sub_0(Vtb_tl_end_to_end___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root__trace_chg_0_sub_0\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_valid));
        bufp->chgWData(oldp+1,(vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit),128);
        bufp->chgBit(oldp+5,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_ready));
        bufp->chgCData(oldp+6,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__state),2);
        bufp->chgBit(oldp+7,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg_valid));
        bufp->chgIData(oldp+8,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__total_beats),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__beat_index),32);
        bufp->chgQData(oldp+10,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__unnamedblk1__DOT__hdr),36);
        bufp->chgBit(oldp+12,(vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_pulse));
        bufp->chgQData(oldp+13,(vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_hdr_reg),36);
        bufp->chgWData(oldp+15,(vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_payload_reg),92);
        bufp->chgBit(oldp+18,(vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_has_reg));
        bufp->chgBit(oldp+19,(vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__present_a));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+20,(vlSelfRef.tb_tl_end_to_end__DOT__a_valid));
        bufp->chgWData(oldp+21,(vlSelfRef.tb_tl_end_to_end__DOT__a_bits),211);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_tl_end_to_end__DOT__cycle),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+29,(vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_valid));
        bufp->chgWData(oldp+30,(vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit),128);
        bufp->chgBit(oldp+34,(vlSelfRef.tb_tl_end_to_end__DOT__d_valid));
        bufp->chgWData(oldp+35,(vlSelfRef.tb_tl_end_to_end__DOT__d_bits),156);
        bufp->chgBit(oldp+40,(vlSelfRef.tb_tl_end_to_end__DOT__m_a_valid));
        bufp->chgWData(oldp+41,(vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits),211);
        bufp->chgBit(oldp+48,(vlSelfRef.tb_tl_end_to_end__DOT__m_d_valid));
        bufp->chgWData(oldp+49,(vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits),156);
        bufp->chgWData(oldp+54,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg),211);
        bufp->chgQData(oldp+61,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__unnamedblk2__DOT__hdr),36);
        bufp->chgWData(oldp+63,(vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__payload),92);
        bufp->chgQData(oldp+66,(vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__unnamedblk1__DOT__ohdr),36);
    }
    bufp->chgBit(oldp+68,(vlSelfRef.clk));
    bufp->chgBit(oldp+69,(vlSelfRef.rst_n));
}

void Vtb_tl_end_to_end___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root__trace_cleanup\n"); );
    // Body
    Vtb_tl_end_to_end___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tl_end_to_end___024root*>(voidSelf);
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
