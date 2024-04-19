// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfast_fadd4.h for the primary calling header

#ifndef VERILATED_VFAST_FADD4___024ROOT_H_
#define VERILATED_VFAST_FADD4___024ROOT_H_  // guard

#include "verilated.h"

class Vfast_fadd4__Syms;

class Vfast_fadd4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    VL_OUT8(sum,3,0);
    CData/*3:0*/ fast_fadd4__DOT__g;
    CData/*3:0*/ fast_fadd4__DOT__p;
    CData/*4:0*/ fast_fadd4__DOT__c;
    CData/*4:0*/ __Vtrigrprev__TOP__fast_fadd4__DOT__c;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfast_fadd4__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfast_fadd4___024root(Vfast_fadd4__Syms* symsp, const char* v__name);
    ~Vfast_fadd4___024root();
    VL_UNCOPYABLE(Vfast_fadd4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
