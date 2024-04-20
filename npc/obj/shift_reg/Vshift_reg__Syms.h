// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSHIFT_REG__SYMS_H_
#define VERILATED_VSHIFT_REG__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vshift_reg.h"

// INCLUDE MODULE CLASSES
#include "Vshift_reg___024root.h"

// SYMS CLASS (contains all model state)
class Vshift_reg__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vshift_reg* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vshift_reg___024root           TOP;

    // CONSTRUCTORS
    Vshift_reg__Syms(VerilatedContext* contextp, const char* namep, Vshift_reg* modelp);
    ~Vshift_reg__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
