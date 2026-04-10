// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_noc_wrr_arbiter__Syms.h"


void Vtb_noc_wrr_arbiter::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp = static_cast<Vtb_noc_wrr_arbiter__Syms*>(userp);
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtb_noc_wrr_arbiter::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp = static_cast<Vtb_noc_wrr_arbiter__Syms*>(userp);
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__WEIGHTS[0]),32);
            tracep->chgIData(oldp+1,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__WEIGHTS[1]),32);
            tracep->chgIData(oldp+2,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__WEIGHTS[2]),32);
            tracep->chgIData(oldp+3,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__WEIGHTS[3]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+4,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[0]),32);
            tracep->chgIData(oldp+5,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[1]),32);
            tracep->chgIData(oldp+6,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[2]),32);
            tracep->chgIData(oldp+7,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[3]),32);
            tracep->chgCData(oldp+8,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr),2);
            tracep->chgIData(oldp+9,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__i),32);
            tracep->chgBit(oldp+10,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk4__DOT__found_grant));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+11,(vlTOPp->tb_noc_wrr_arbiter__DOT__rst_n));
            tracep->chgCData(oldp+12,(vlTOPp->tb_noc_wrr_arbiter__DOT__req),4);
            tracep->chgCData(oldp+13,(vlTOPp->tb_noc_wrr_arbiter__DOT__hold),4);
            tracep->chgSData(oldp+14,(vlTOPp->tb_noc_wrr_arbiter__DOT__age[0]),16);
            tracep->chgSData(oldp+15,(vlTOPp->tb_noc_wrr_arbiter__DOT__age[1]),16);
            tracep->chgSData(oldp+16,(vlTOPp->tb_noc_wrr_arbiter__DOT__age[2]),16);
            tracep->chgSData(oldp+17,(vlTOPp->tb_noc_wrr_arbiter__DOT__age[3]),16);
            tracep->chgIData(oldp+18,(vlTOPp->tb_noc_wrr_arbiter__DOT__cycle),32);
            tracep->chgIData(oldp+19,(vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[0]),32);
            tracep->chgIData(oldp+20,(vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[1]),32);
            tracep->chgIData(oldp+21,(vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[2]),32);
            tracep->chgIData(oldp+22,(vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[3]),32);
            tracep->chgIData(oldp+23,(vlTOPp->tb_noc_wrr_arbiter__DOT__i),32);
            tracep->chgSData(oldp+24,(vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[0]),16);
            tracep->chgSData(oldp+25,(vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[1]),16);
            tracep->chgSData(oldp+26,(vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[2]),16);
            tracep->chgSData(oldp+27,(vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[3]),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+28,(vlTOPp->tb_noc_wrr_arbiter__DOT__grant),4);
            tracep->chgIData(oldp+29,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+30,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__k),32);
            tracep->chgIData(oldp+31,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx),32);
        }
        tracep->chgBit(oldp+32,(vlTOPp->clk));
    }
}

void Vtb_noc_wrr_arbiter::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp = static_cast<Vtb_noc_wrr_arbiter__Syms*>(userp);
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}
