// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tl_end_to_end.h for the primary calling header

#include "Vtb_tl_end_to_end__pch.h"

void Vtb_tl_end_to_end___024root___ctor_var_reset(Vtb_tl_end_to_end___024root* vlSelf);

Vtb_tl_end_to_end___024root::Vtb_tl_end_to_end___024root(Vtb_tl_end_to_end__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_tl_end_to_end___024root___ctor_var_reset(this);
}

void Vtb_tl_end_to_end___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_tl_end_to_end___024root::~Vtb_tl_end_to_end___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
