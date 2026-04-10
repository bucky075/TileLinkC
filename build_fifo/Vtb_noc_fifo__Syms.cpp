// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_noc_fifo__Syms.h"
#include "Vtb_noc_fifo.h"
#include "Vtb_noc_fifo_noc_params_pkg.h"



// FUNCTIONS
Vtb_noc_fifo__Syms::Vtb_noc_fifo__Syms(Vtb_noc_fifo* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__noc_params_pkg(Verilated::catName(topp->name(), "noc_params_pkg"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__noc_params_pkg = &TOP__noc_params_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__noc_params_pkg.__Vconfigure(this, true);
}
