// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtlc_mesh_adapter__Syms.h"


void Vtlc_mesh_adapter::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtlc_mesh_adapter__Syms* __restrict vlSymsp = static_cast<Vtlc_mesh_adapter__Syms*>(userp);
    Vtlc_mesh_adapter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
