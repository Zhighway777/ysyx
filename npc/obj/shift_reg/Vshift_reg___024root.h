// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshift_reg.h for the primary calling header

#ifndef VERILATED_VSHIFT_REG___024ROOT_H_
#define VERILATED_VSHIFT_REG___024ROOT_H_  // guard

#include "verilated.h"

class Vshift_reg__Syms;

class Vshift_reg___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(contrl,2,0);
    VL_IN8(datain,0,0);
    VL_IN8(setdata,7,0);
    VL_OUT8(out,7,0);
    CData/*7:0*/ shift_reg__DOT__Q;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vshift_reg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vshift_reg___024root(Vshift_reg__Syms* symsp, const char* v__name);
    ~Vshift_reg___024root();
    VL_UNCOPYABLE(Vshift_reg___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
