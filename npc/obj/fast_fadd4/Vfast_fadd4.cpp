// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfast_fadd4.h"
#include "Vfast_fadd4__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfast_fadd4::Vfast_fadd4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfast_fadd4__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , cin{vlSymsp->TOP.cin}
    , cout{vlSymsp->TOP.cout}
    , sum{vlSymsp->TOP.sum}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfast_fadd4::Vfast_fadd4(const char* _vcname__)
    : Vfast_fadd4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfast_fadd4::~Vfast_fadd4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfast_fadd4___024root___eval_debug_assertions(Vfast_fadd4___024root* vlSelf);
#endif  // VL_DEBUG
void Vfast_fadd4___024root___eval_static(Vfast_fadd4___024root* vlSelf);
void Vfast_fadd4___024root___eval_initial(Vfast_fadd4___024root* vlSelf);
void Vfast_fadd4___024root___eval_settle(Vfast_fadd4___024root* vlSelf);
void Vfast_fadd4___024root___eval(Vfast_fadd4___024root* vlSelf);

void Vfast_fadd4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfast_fadd4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfast_fadd4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfast_fadd4___024root___eval_static(&(vlSymsp->TOP));
        Vfast_fadd4___024root___eval_initial(&(vlSymsp->TOP));
        Vfast_fadd4___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfast_fadd4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfast_fadd4::eventsPending() { return false; }

uint64_t Vfast_fadd4::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfast_fadd4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfast_fadd4___024root___eval_final(Vfast_fadd4___024root* vlSelf);

VL_ATTR_COLD void Vfast_fadd4::final() {
    Vfast_fadd4___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfast_fadd4::hierName() const { return vlSymsp->name(); }
const char* Vfast_fadd4::modelName() const { return "Vfast_fadd4"; }
unsigned Vfast_fadd4::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vfast_fadd4::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfast_fadd4___024root__trace_init_top(Vfast_fadd4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfast_fadd4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfast_fadd4___024root*>(voidSelf);
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vfast_fadd4___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vfast_fadd4___024root__trace_register(Vfast_fadd4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfast_fadd4::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfast_fadd4::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfast_fadd4___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
