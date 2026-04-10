// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_noc_mesh.h for the primary calling header

#ifndef _VTB_NOC_MESH_NOC_WRR_ARBITER__N28_A200_AB8_H_
#define _VTB_NOC_MESH_NOC_WRR_ARBITER__N28_A200_AB8_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtb_noc_mesh__Syms;

//----------

VL_MODULE(Vtb_noc_mesh_noc_wrr_arbiter__N28_A200_AB8) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN64(req,39,0);
    VL_IN64(hold,39,0);
    VL_OUT64(grant,39,0);
    VL_IN16(age[40],15,0);
    
    // INTERNAL VARIABLES
  private:
    Vtb_noc_mesh__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtb_noc_mesh_noc_wrr_arbiter__N28_A200_AB8);  ///< Copying not allowed
  public:
    Vtb_noc_mesh_noc_wrr_arbiter__N28_A200_AB8(const char* name = "TOP");
    ~Vtb_noc_mesh_noc_wrr_arbiter__N28_A200_AB8();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtb_noc_mesh__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
