// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_noc_fifo__Syms.h"


void Vtb_noc_fifo::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vtb_noc_fifo__Syms* __restrict vlSymsp = static_cast<Vtb_noc_fifo__Syms*>(userp);
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtb_noc_fifo::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vtb_noc_fifo__Syms* __restrict vlSymsp = static_cast<Vtb_noc_fifo__Syms*>(userp);
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*127:0*/ __Vtemp17[4];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[0]),32);
            tracep->chgIData(oldp+1,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[1]),32);
            tracep->chgIData(oldp+2,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[2]),32);
            tracep->chgIData(oldp+3,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[3]),32);
            tracep->chgIData(oldp+4,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[4]),32);
            tracep->chgIData(oldp+5,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[5]),32);
            tracep->chgIData(oldp+6,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[6]),32);
            tracep->chgIData(oldp+7,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[7]),32);
            tracep->chgIData(oldp+8,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[0]),32);
            tracep->chgIData(oldp+9,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[1]),32);
            tracep->chgIData(oldp+10,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[2]),32);
            tracep->chgIData(oldp+11,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[3]),32);
            tracep->chgIData(oldp+12,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[4]),32);
            tracep->chgIData(oldp+13,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[5]),32);
            tracep->chgIData(oldp+14,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[6]),32);
            tracep->chgIData(oldp+15,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[7]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            if ((0U == (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt))) {
                __Vtemp17[0U] = 0U;
                __Vtemp17[1U] = 0U;
                __Vtemp17[2U] = 0U;
                __Vtemp17[3U] = 0U;
            } else {
                __Vtemp17[0U] = vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem
                    [vlTOPp->tb_noc_fifo__DOT__dut__DOT__rd_ptr][0U];
                __Vtemp17[1U] = vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem
                    [vlTOPp->tb_noc_fifo__DOT__dut__DOT__rd_ptr][1U];
                __Vtemp17[2U] = vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem
                    [vlTOPp->tb_noc_fifo__DOT__dut__DOT__rd_ptr][2U];
                __Vtemp17[3U] = vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem
                    [vlTOPp->tb_noc_fifo__DOT__dut__DOT__rd_ptr][3U];
            }
            tracep->chgWData(oldp+16,(__Vtemp17),128);
            tracep->chgBit(oldp+20,((4U == (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt))));
            tracep->chgBit(oldp+21,((0U == (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt))));
            tracep->chgCData(oldp+22,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt),3);
            tracep->chgCData(oldp+23,((7U & ((IData)(4U) 
                                             - (IData)(vlTOPp->tb_noc_fifo__DOT__dut__DOT__cnt)))),3);
            tracep->chgWData(oldp+24,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[0]),128);
            tracep->chgWData(oldp+28,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[1]),128);
            tracep->chgWData(oldp+32,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[2]),128);
            tracep->chgWData(oldp+36,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__mem[3]),128);
            tracep->chgCData(oldp+40,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__rd_ptr),2);
            tracep->chgCData(oldp+41,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__wr_ptr),2);
            tracep->chgBit(oldp+42,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_push));
            tracep->chgBit(oldp+43,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_pop));
            tracep->chgIData(oldp+44,(vlTOPp->tb_noc_fifo__DOT__dut__DOT__unnamedblk1__DOT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+45,(vlTOPp->tb_noc_fifo__DOT__rst_n));
            tracep->chgBit(oldp+46,(vlTOPp->tb_noc_fifo__DOT__push));
            tracep->chgBit(oldp+47,(vlTOPp->tb_noc_fifo__DOT__pop));
            tracep->chgWData(oldp+48,(vlTOPp->tb_noc_fifo__DOT__din),128);
            tracep->chgIData(oldp+52,(vlTOPp->tb_noc_fifo__DOT__results_fd),32);
            tracep->chgIData(oldp+53,(vlTOPp->tb_noc_fifo__DOT__cycle),32);
        }
        tracep->chgBit(oldp+54,(vlTOPp->clk));
    }
}

void Vtb_noc_fifo::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtb_noc_fifo__Syms* __restrict vlSymsp = static_cast<Vtb_noc_fifo__Syms*>(userp);
    Vtb_noc_fifo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
