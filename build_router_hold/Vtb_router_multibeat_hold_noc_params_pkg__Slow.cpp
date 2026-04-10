// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_router_multibeat_hold.h for the primary calling header

#include "Vtb_router_multibeat_hold__pch.h"

// Parameter definitions for Vtb_router_multibeat_hold_noc_params_pkg
constexpr VlUnpacked<IData/*31:0*/, 8> Vtb_router_multibeat_hold_noc_params_pkg::__PVT__VC_DEPTHS;
constexpr VlUnpacked<IData/*31:0*/, 8> Vtb_router_multibeat_hold_noc_params_pkg::__PVT__VC_WEIGHTS;


void Vtb_router_multibeat_hold_noc_params_pkg___ctor_var_reset(Vtb_router_multibeat_hold_noc_params_pkg* vlSelf);

Vtb_router_multibeat_hold_noc_params_pkg::Vtb_router_multibeat_hold_noc_params_pkg() = default;
Vtb_router_multibeat_hold_noc_params_pkg::~Vtb_router_multibeat_hold_noc_params_pkg() = default;

void Vtb_router_multibeat_hold_noc_params_pkg::ctor(Vtb_router_multibeat_hold__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_router_multibeat_hold_noc_params_pkg___ctor_var_reset(this);
}

void Vtb_router_multibeat_hold_noc_params_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_router_multibeat_hold_noc_params_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
