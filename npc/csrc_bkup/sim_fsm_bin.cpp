#include "verilated.h"
#include "verilated_vcd_c.h"
//modify here
#define VSIMNAME Vfsm_bin
#include "../fsm_bin/Vfsm_bin.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

//modify here
static VSIMNAME* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  //modify here
	top = new VSIMNAME;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main() {
  sim_init();
  top->clk = 0b1;

		top->clk = !(top->clk);step_and_dump_wave();top->clk = !(top->clk); top->in  = 0b0; top->rst = 0; step_and_dump_wave();
		top->clk = !(top->clk);step_and_dump_wave();top->clk = !(top->clk); top->in  = 0b0; top->rst = 0; step_and_dump_wave();
		top->clk = !(top->clk);step_and_dump_wave();	top->clk = !(top->clk); top->in  = 0b1; top->rst = 0; step_and_dump_wave();
		top->clk = !(top->clk);step_and_dump_wave();top->clk = !(top->clk); top->in  = 0b1; top->rst = 0; step_and_dump_wave();
		top->clk = !(top->clk);step_and_dump_wave();top->clk = !(top->clk); top->in  = 0b0; top->rst = 0; step_and_dump_wave();
		top->clk = !(top->clk);step_and_dump_wave();top->clk = !(top->clk); top->in  = 0b0; top->rst = 0; step_and_dump_wave();
		top->clk = !(top->clk);step_and_dump_wave();top->clk = !(top->clk); top->in  = 0b0; top->rst = 0; step_and_dump_wave();
		top->clk = !(top->clk);step_and_dump_wave();top->clk = !(top->clk); top->in  = 0b1; top->rst = 0; step_and_dump_wave();
		top->clk = !(top->clk);step_and_dump_wave();top->clk = !(top->clk); top->in  = 0b1; top->rst = 0; step_and_dump_wave();
		top->clk = !(top->clk);step_and_dump_wave();top->clk = !(top->clk); top->in  = 0b1; top->rst = 0; step_and_dump_wave();
		top->clk = !(top->clk);step_and_dump_wave();top->clk = !(top->clk); top->in  = 0b1; top->rst = 0; step_and_dump_wave();
		top->clk = !(top->clk);step_and_dump_wave();top->clk = !(top->clk); top->in  = 0b1; top->rst = 0; step_and_dump_wave();
		top->clk = !(top->clk);step_and_dump_wave();top->clk = !(top->clk); top->in  = 0b0; top->rst = 0; step_and_dump_wave();
		top->clk = !(top->clk);step_and_dump_wave();top->clk = !(top->clk); top->in  = 0b0; top->rst = 1; step_and_dump_wave();
		top->clk = !(top->clk);step_and_dump_wave();top->clk = !(top->clk); top->in  = 0b0; top->rst = 1; step_and_dump_wave();
		top->clk = !(top->clk);step_and_dump_wave();top->clk = !(top->clk); top->in  = 0b0; top->rst = 1; step_and_dump_wave();



  sim_exit();
}
