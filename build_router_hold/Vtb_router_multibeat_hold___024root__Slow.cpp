// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_router_multibeat_hold.h for the primary calling header

#include "Vtb_router_multibeat_hold__pch.h"

// Parameter definitions for Vtb_router_multibeat_hold___024root
constexpr VlUnpacked<IData/*31:0*/, 8> Vtb_router_multibeat_hold___024root::tb_router_multibeat_hold__DOT__dut__DOT__VC_QOS;
constexpr VlUnpacked<IData/*31:0*/, 8> Vtb_router_multibeat_hold___024root::tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__WEIGHTS;
constexpr VlUnpacked<IData/*31:0*/, 8> Vtb_router_multibeat_hold___024root::tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__WEIGHTS;
constexpr VlUnpacked<IData/*31:0*/, 8> Vtb_router_multibeat_hold___024root::tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__WEIGHTS;
constexpr VlUnpacked<IData/*31:0*/, 8> Vtb_router_multibeat_hold___024root::tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__WEIGHTS;
constexpr VlUnpacked<IData/*31:0*/, 8> Vtb_router_multibeat_hold___024root::tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__WEIGHTS;


void Vtb_router_multibeat_hold___024root___ctor_var_reset(Vtb_router_multibeat_hold___024root* vlSelf);

Vtb_router_multibeat_hold___024root::Vtb_router_multibeat_hold___024root(Vtb_router_multibeat_hold__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_router_multibeat_hold___024root___ctor_var_reset(this);
}

void Vtb_router_multibeat_hold___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_router_multibeat_hold___024root::~Vtb_router_multibeat_hold___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
