// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_router_multibeat_hold__pch.h"

Vtb_router_multibeat_hold__Syms::Vtb_router_multibeat_hold__Syms(VerilatedContext* contextp, const char* namep, Vtb_router_multibeat_hold* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(5368);
    // Setup sub module instances
    TOP__noc_params_pkg.ctor(this, "noc_params_pkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__noc_params_pkg = &TOP__noc_params_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__noc_params_pkg.__Vconfigure(true);
    // Setup scopes
}

Vtb_router_multibeat_hold__Syms::~Vtb_router_multibeat_hold__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__noc_params_pkg.dtor();
}
