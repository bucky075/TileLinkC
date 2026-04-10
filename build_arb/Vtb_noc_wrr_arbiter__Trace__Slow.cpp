// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_noc_wrr_arbiter__Syms.h"


//======================

void Vtb_noc_wrr_arbiter::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtb_noc_wrr_arbiter::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp = static_cast<Vtb_noc_wrr_arbiter__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtb_noc_wrr_arbiter::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtb_noc_wrr_arbiter::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp = static_cast<Vtb_noc_wrr_arbiter__Syms*>(userp);
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtb_noc_wrr_arbiter::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp = static_cast<Vtb_noc_wrr_arbiter__Syms*>(userp);
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+33,"clk", false,-1);
        tracep->declBit(c+33,"tb_noc_wrr_arbiter clk", false,-1);
        tracep->declBus(c+34,"tb_noc_wrr_arbiter N", false,-1, 31,0);
        tracep->declBit(c+12,"tb_noc_wrr_arbiter rst_n", false,-1);
        tracep->declBus(c+13,"tb_noc_wrr_arbiter req", false,-1, 3,0);
        tracep->declBus(c+14,"tb_noc_wrr_arbiter hold", false,-1, 3,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+15+i*1,"tb_noc_wrr_arbiter age", true,(i+0), 15,0);}}
        tracep->declBus(c+29,"tb_noc_wrr_arbiter grant", false,-1, 3,0);
        tracep->declBus(c+19,"tb_noc_wrr_arbiter cycle", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+20+i*1,"tb_noc_wrr_arbiter grant_count", true,(i+0), 31,0);}}
        tracep->declBus(c+24,"tb_noc_wrr_arbiter i", false,-1, 31,0);
        tracep->declBus(c+34,"tb_noc_wrr_arbiter dut N", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1+i*1,"tb_noc_wrr_arbiter dut WEIGHTS", true,(i+0), 31,0);}}
        tracep->declBus(c+35,"tb_noc_wrr_arbiter dut AGE_THRESHOLD", false,-1, 31,0);
        tracep->declBus(c+36,"tb_noc_wrr_arbiter dut AGE_BOOST", false,-1, 31,0);
        tracep->declBit(c+33,"tb_noc_wrr_arbiter dut clk", false,-1);
        tracep->declBit(c+12,"tb_noc_wrr_arbiter dut rst_n", false,-1);
        tracep->declBus(c+13,"tb_noc_wrr_arbiter dut req", false,-1, 3,0);
        tracep->declBus(c+14,"tb_noc_wrr_arbiter dut hold", false,-1, 3,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+25+i*1,"tb_noc_wrr_arbiter dut age", true,(i+0), 15,0);}}
        tracep->declBus(c+29,"tb_noc_wrr_arbiter dut grant", false,-1, 3,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+5+i*1,"tb_noc_wrr_arbiter dut deficit", true,(i+0), 31,0);}}
        tracep->declBus(c+9,"tb_noc_wrr_arbiter dut rr_ptr", false,-1, 1,0);
        tracep->declBus(c+10,"tb_noc_wrr_arbiter dut i", false,-1, 31,0);
        tracep->declBus(c+30,"tb_noc_wrr_arbiter dut unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+31,"tb_noc_wrr_arbiter dut unnamedblk2 k", false,-1, 31,0);
        tracep->declBus(c+32,"tb_noc_wrr_arbiter dut unnamedblk2 unnamedblk3 idx", false,-1, 31,0);
        tracep->declBit(c+11,"tb_noc_wrr_arbiter dut unnamedblk4 found_grant", false,-1);
    }
}

void Vtb_noc_wrr_arbiter::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtb_noc_wrr_arbiter::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp = static_cast<Vtb_noc_wrr_arbiter__Syms*>(userp);
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtb_noc_wrr_arbiter::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp = static_cast<Vtb_noc_wrr_arbiter__Syms*>(userp);
    Vtb_noc_wrr_arbiter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__WEIGHTS[0]),32);
        tracep->fullIData(oldp+2,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__WEIGHTS[1]),32);
        tracep->fullIData(oldp+3,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__WEIGHTS[2]),32);
        tracep->fullIData(oldp+4,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__WEIGHTS[3]),32);
        tracep->fullIData(oldp+5,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[0]),32);
        tracep->fullIData(oldp+6,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[1]),32);
        tracep->fullIData(oldp+7,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[2]),32);
        tracep->fullIData(oldp+8,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[3]),32);
        tracep->fullCData(oldp+9,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr),2);
        tracep->fullIData(oldp+10,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__i),32);
        tracep->fullBit(oldp+11,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk4__DOT__found_grant));
        tracep->fullBit(oldp+12,(vlTOPp->tb_noc_wrr_arbiter__DOT__rst_n));
        tracep->fullCData(oldp+13,(vlTOPp->tb_noc_wrr_arbiter__DOT__req),4);
        tracep->fullCData(oldp+14,(vlTOPp->tb_noc_wrr_arbiter__DOT__hold),4);
        tracep->fullSData(oldp+15,(vlTOPp->tb_noc_wrr_arbiter__DOT__age[0]),16);
        tracep->fullSData(oldp+16,(vlTOPp->tb_noc_wrr_arbiter__DOT__age[1]),16);
        tracep->fullSData(oldp+17,(vlTOPp->tb_noc_wrr_arbiter__DOT__age[2]),16);
        tracep->fullSData(oldp+18,(vlTOPp->tb_noc_wrr_arbiter__DOT__age[3]),16);
        tracep->fullIData(oldp+19,(vlTOPp->tb_noc_wrr_arbiter__DOT__cycle),32);
        tracep->fullIData(oldp+20,(vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[0]),32);
        tracep->fullIData(oldp+21,(vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[1]),32);
        tracep->fullIData(oldp+22,(vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[2]),32);
        tracep->fullIData(oldp+23,(vlTOPp->tb_noc_wrr_arbiter__DOT__grant_count[3]),32);
        tracep->fullIData(oldp+24,(vlTOPp->tb_noc_wrr_arbiter__DOT__i),32);
        tracep->fullSData(oldp+25,(vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[0]),16);
        tracep->fullSData(oldp+26,(vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[1]),16);
        tracep->fullSData(oldp+27,(vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[2]),16);
        tracep->fullSData(oldp+28,(vlTOPp->tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[3]),16);
        tracep->fullCData(oldp+29,(vlTOPp->tb_noc_wrr_arbiter__DOT__grant),4);
        tracep->fullIData(oldp+30,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+31,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__k),32);
        tracep->fullIData(oldp+32,(vlTOPp->tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx),32);
        tracep->fullBit(oldp+33,(vlTOPp->clk));
        tracep->fullIData(oldp+34,(4U),32);
        tracep->fullIData(oldp+35,(0x200U),32);
        tracep->fullIData(oldp+36,(8U),32);
    }
}
