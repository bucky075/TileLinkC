// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_noc_fifo__Syms.h"


//======================

void Vtb_noc_fifo::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtb_noc_fifo::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_noc_fifo__Syms* __restrict vlSymsp = static_cast<Vtb_noc_fifo__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtb_noc_fifo::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtb_noc_fifo::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtb_noc_fifo__Syms* __restrict vlSymsp = static_cast<Vtb_noc_fifo__Syms*>(userp);
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtb_noc_fifo::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtb_noc_fifo__Syms* __restrict vlSymsp = static_cast<Vtb_noc_fifo__Syms*>(userp);
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+55,"clk", false,-1);
        tracep->declBit(c+55,"tb_noc_fifo clk", false,-1);
        tracep->declBit(c+46,"tb_noc_fifo rst_n", false,-1);
        tracep->declBit(c+47,"tb_noc_fifo push", false,-1);
        tracep->declBit(c+48,"tb_noc_fifo pop", false,-1);
        tracep->declArray(c+49,"tb_noc_fifo din", false,-1, 127,0);
        tracep->declArray(c+17,"tb_noc_fifo dout", false,-1, 127,0);
        tracep->declBit(c+21,"tb_noc_fifo full", false,-1);
        tracep->declBit(c+22,"tb_noc_fifo empty", false,-1);
        tracep->declBus(c+53,"tb_noc_fifo results_fd", false,-1, 31,0);
        tracep->declBus(c+54,"tb_noc_fifo cycle", false,-1, 31,0);
        tracep->declBus(c+56,"tb_noc_fifo dut WIDTH", false,-1, 31,0);
        tracep->declBus(c+57,"tb_noc_fifo dut DEPTH", false,-1, 31,0);
        tracep->declBit(c+55,"tb_noc_fifo dut clk", false,-1);
        tracep->declBit(c+46,"tb_noc_fifo dut rst_n", false,-1);
        tracep->declBit(c+47,"tb_noc_fifo dut push", false,-1);
        tracep->declArray(c+49,"tb_noc_fifo dut din", false,-1, 127,0);
        tracep->declBit(c+21,"tb_noc_fifo dut full", false,-1);
        tracep->declBit(c+48,"tb_noc_fifo dut pop", false,-1);
        tracep->declArray(c+17,"tb_noc_fifo dut dout", false,-1, 127,0);
        tracep->declBit(c+22,"tb_noc_fifo dut empty", false,-1);
        tracep->declBus(c+23,"tb_noc_fifo dut count", false,-1, 2,0);
        tracep->declBus(c+24,"tb_noc_fifo dut free_slots", false,-1, 2,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+25+i*4,"tb_noc_fifo dut mem", true,(i+0), 127,0);}}
        tracep->declBus(c+41,"tb_noc_fifo dut rd_ptr", false,-1, 1,0);
        tracep->declBus(c+42,"tb_noc_fifo dut wr_ptr", false,-1, 1,0);
        tracep->declBus(c+23,"tb_noc_fifo dut cnt", false,-1, 2,0);
        tracep->declBit(c+43,"tb_noc_fifo dut unnamedblk2 do_push", false,-1);
        tracep->declBit(c+44,"tb_noc_fifo dut unnamedblk2 do_pop", false,-1);
        tracep->declBus(c+45,"tb_noc_fifo dut unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+57,"noc_params_pkg MESH_X", false,-1, 31,0);
        tracep->declBus(c+57,"noc_params_pkg MESH_Y", false,-1, 31,0);
        tracep->declBus(c+58,"noc_params_pkg NUM_NODES", false,-1, 31,0);
        tracep->declBus(c+57,"noc_params_pkg NODE_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+56,"noc_params_pkg FLIT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+59,"noc_params_pkg NUM_VCS", false,-1, 31,0);
        tracep->declBus(c+60,"noc_params_pkg VC_ESCAPE", false,-1, 31,0);
        tracep->declBus(c+61,"noc_params_pkg VC_CTRL", false,-1, 31,0);
        tracep->declBus(c+62,"noc_params_pkg VC_SYS", false,-1, 31,0);
        tracep->declBus(c+63,"noc_params_pkg VC_REQ_H", false,-1, 31,0);
        tracep->declBus(c+57,"noc_params_pkg VC_REQ_L", false,-1, 31,0);
        tracep->declBus(c+64,"noc_params_pkg VC_RESP", false,-1, 31,0);
        tracep->declBus(c+65,"noc_params_pkg VC_IO_H", false,-1, 31,0);
        tracep->declBus(c+66,"noc_params_pkg VC_IO_L", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1+i*1,"noc_params_pkg VC_DEPTHS", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+9+i*1,"noc_params_pkg VC_WEIGHTS", true,(i+0), 31,0);}}
        tracep->declBus(c+67,"noc_params_pkg AGE_THRESHOLD", false,-1, 31,0);
        tracep->declBus(c+59,"noc_params_pkg AGE_BOOST", false,-1, 31,0);
        tracep->declBus(c+56,"noc_params_pkg TL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+58,"noc_params_pkg TL_BEAT_BYTES", false,-1, 31,0);
        tracep->declBus(c+68,"noc_params_pkg TL_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+59,"noc_params_pkg TL_SOURCE_WIDTH", false,-1, 31,0);
        tracep->declBus(c+59,"noc_params_pkg TL_SINK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+58,"noc_params_pkg TL_MAX_BEATS", false,-1, 31,0);
        tracep->declBus(c+69,"noc_params_pkg TXN_ID_WIDTH", false,-1, 31,0);
    }
}

void Vtb_noc_fifo::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtb_noc_fifo::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtb_noc_fifo__Syms* __restrict vlSymsp = static_cast<Vtb_noc_fifo__Syms*>(userp);
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtb_noc_fifo::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtb_noc_fifo__Syms* __restrict vlSymsp = static_cast<Vtb_noc_fifo__Syms*>(userp);
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*127:0*/ __Vtemp13[4];
    // Body
    {
        tracep->fullIData(oldp+1,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[0]),32);
        tracep->fullIData(oldp+2,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[1]),32);
        tracep->fullIData(oldp+3,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[2]),32);
        tracep->fullIData(oldp+4,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[3]),32);
        tracep->fullIData(oldp+5,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[4]),32);
        tracep->fullIData(oldp+6,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[5]),32);
        tracep->fullIData(oldp+7,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[6]),32);
        tracep->fullIData(oldp+8,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[7]),32);
        tracep->fullIData(oldp+9,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[0]),32);
        tracep->fullIData(oldp+10,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[1]),32);
        tracep->fullIData(oldp+11,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[2]),32);
        tracep->fullIData(oldp+12,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[3]),32);
        tracep->fullIData(oldp+13,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[4]),32);
        tracep->fullIData(oldp+14,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[5]),32);
        tracep->fullIData(oldp+15,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[6]),32);
        tracep->fullIData(oldp+16,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[7]),32);
        if ((0U == (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt))) {
            __Vtemp13[0U] = 0U;
            __Vtemp13[1U] = 0U;
            __Vtemp13[2U] = 0U;
            __Vtemp13[3U] = 0U;
        } else {
            __Vtemp13[0U] = vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem
                [vlTOPp->tb_noc_fifo__DOT__dut__DOT__rd_ptr][0U];
            __Vtemp13[1U] = vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem
                [vlTOPp->tb_noc_fifo__DOT__dut__DOT__rd_ptr][1U];
            __Vtemp13[2U] = vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem
                [vlTOPp->tb_noc_fifo__DOT__dut__DOT__rd_ptr][2U];
            __Vtemp13[3U] = vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem
                [vlTOPp->tb_noc_fifo__DOT__dut__DOT__rd_ptr][3U];
        }
        tracep->fullWData(oldp+17,(__Vtemp13),128);
        tracep->fullBit(oldp+21,((4U == (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt))));
        tracep->fullBit(oldp+22,((0U == (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt))));
        tracep->fullCData(oldp+23,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt),3);
        tracep->fullCData(oldp+24,((7U & ((IData)(4U) 
                                          - (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt)))),3);
        tracep->fullWData(oldp+25,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[0]),128);
        tracep->fullWData(oldp+29,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[1]),128);
        tracep->fullWData(oldp+33,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[2]),128);
        tracep->fullWData(oldp+37,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[3]),128);
        tracep->fullCData(oldp+41,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__rd_ptr),2);
        tracep->fullCData(oldp+42,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__wr_ptr),2);
        tracep->fullBit(oldp+43,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_push));
        tracep->fullBit(oldp+44,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_pop));
        tracep->fullIData(oldp+45,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+46,(vlTOPp->tb_noc_fifo__DOT__rst_n));
        tracep->fullBit(oldp+47,(vlTOPp->tb_noc_fifo__DOT__push));
        tracep->fullBit(oldp+48,(vlTOPp->tb_noc_fifo__DOT__pop));
        tracep->fullWData(oldp+49,(vlTOPp->tb_noc_fifo__DOT__din),128);
        tracep->fullIData(oldp+53,(vlTOPp->tb_noc_fifo__DOT__results_fd),32);
        tracep->fullIData(oldp+54,(vlTOPp->tb_noc_fifo__DOT__cycle),32);
        tracep->fullBit(oldp+55,(vlTOPp->clk));
        tracep->fullIData(oldp+56,(0x80U),32);
        tracep->fullIData(oldp+57,(4U),32);
        tracep->fullIData(oldp+58,(0x10U),32);
        tracep->fullIData(oldp+59,(8U),32);
        tracep->fullIData(oldp+60,(0U),32);
        tracep->fullIData(oldp+61,(1U),32);
        tracep->fullIData(oldp+62,(2U),32);
        tracep->fullIData(oldp+63,(3U),32);
        tracep->fullIData(oldp+64,(5U),32);
        tracep->fullIData(oldp+65,(6U),32);
        tracep->fullIData(oldp+66,(7U),32);
        tracep->fullIData(oldp+67,(0x200U),32);
        tracep->fullIData(oldp+68,(0x30U),32);
        tracep->fullIData(oldp+69,(0x20U),32);
    }
}
