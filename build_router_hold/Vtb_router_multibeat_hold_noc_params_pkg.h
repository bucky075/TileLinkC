// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_router_multibeat_hold.h for the primary calling header

#ifndef VERILATED_VTB_ROUTER_MULTIBEAT_HOLD_NOC_PARAMS_PKG_H_
#define VERILATED_VTB_ROUTER_MULTIBEAT_HOLD_NOC_PARAMS_PKG_H_  // guard

#include "verilated.h"


class Vtb_router_multibeat_hold__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_router_multibeat_hold_noc_params_pkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_router_multibeat_hold__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*31:0*/, 8> __PVT__VC_DEPTHS = {{
        4U, 4U, 4U, 0x00000010U,
        8U, 8U, 0x0000000cU, 8U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 8> __PVT__VC_WEIGHTS = {{
        0U, 4U, 3U, 6U,
        2U, 4U, 5U, 2U
    }};

    // CONSTRUCTORS
    Vtb_router_multibeat_hold_noc_params_pkg();
    ~Vtb_router_multibeat_hold_noc_params_pkg();
    void ctor(Vtb_router_multibeat_hold__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_router_multibeat_hold_noc_params_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
