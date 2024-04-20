// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrandom.h for the primary calling header

#ifndef VERILATED_VRANDOM___024ROOT_H_
#define VERILATED_VRANDOM___024ROOT_H_  // guard

#include "verilated.h"

class Vrandom__Syms;

class Vrandom___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_OUT8(rand_num,7,0);
    CData/*0:0*/ random__DOT__left_in;
    CData/*7:0*/ random__DOT__Q;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrandom__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrandom___024root(Vrandom__Syms* symsp, const char* v__name);
    ~Vrandom___024root();
    VL_UNCOPYABLE(Vrandom___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
