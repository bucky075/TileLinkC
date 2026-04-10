// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_noc_router.h for the primary calling header

#include "Vtb_noc_router_noc_params_pkg.h"
#include "Vtb_noc_router__Syms.h"

//==========

VL_CTOR_IMP(Vtb_noc_router_noc_params_pkg) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtb_noc_router_noc_params_pkg::__Vconfigure(Vtb_noc_router__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtb_noc_router_noc_params_pkg::~Vtb_noc_router_noc_params_pkg() {
}

void Vtb_noc_router_noc_params_pkg::_initial__TOP__noc_params_pkg__1(Vtb_noc_router__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_noc_router_noc_params_pkg::_initial__TOP__noc_params_pkg__1\n"); );
    Vtb_noc_router* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[0U] = 4U;
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[1U] = 4U;
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[2U] = 4U;
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[3U] = 0x10U;
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[4U] = 8U;
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[5U] = 8U;
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[6U] = 0xcU;
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[7U] = 8U;
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[0U] = 0U;
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[1U] = 4U;
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[2U] = 3U;
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[3U] = 6U;
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[4U] = 2U;
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[5U] = 4U;
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[6U] = 5U;
    vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[7U] = 2U;
}

void Vtb_noc_router_noc_params_pkg::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_noc_router_noc_params_pkg::_ctor_var_reset\n"); );
    // Body
}
