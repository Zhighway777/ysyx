// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadd_sub_4.h for the primary calling header

#ifndef VERILATED_VADD_SUB_4___024ROOT_H_
#define VERILATED_VADD_SUB_4___024ROOT_H_  // guard

#include "verilated.h"

class Vadd_sub_4__Syms;

class Vadd_sub_4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(cin,0,0);
    VL_OUT8(out_s,3,0);
    VL_OUT8(out_c,0,0);
    VL_OUT8(zero,0,0);
    VL_OUT8(overflow,0,0);
    CData/*3:0*/ add_sub_4__DOT__t_add_cin;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vadd_sub_4__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vadd_sub_4___024root(Vadd_sub_4__Syms* symsp, const char* v__name);
    ~Vadd_sub_4___024root();
    VL_UNCOPYABLE(Vadd_sub_4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
