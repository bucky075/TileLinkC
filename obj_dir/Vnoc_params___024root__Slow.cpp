// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnoc_params.h for the primary calling header

#include "Vnoc_params__pch.h"

void Vnoc_params___024root___ctor_var_reset(Vnoc_params___024root* vlSelf);

Vnoc_params___024root::Vnoc_params___024root(Vnoc_params__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vnoc_params___024root___ctor_var_reset(this);
}

void Vnoc_params___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vnoc_params___024root::~Vnoc_params___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
