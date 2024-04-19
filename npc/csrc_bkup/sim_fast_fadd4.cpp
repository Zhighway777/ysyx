#include "verilated.h"
#include "verilated_vcd_c.h"
//modify here
#define VSIMNAME Vfast_fadd4
#include "../fast_fadd4/Vfast_fadd4.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static VSIMNAME* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
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
	top->a=0b1110; top->b =0b0001; top->cin = 0b0; step_and_dump_wave();    
	for (int i = 0; i < 16; i++)	{
		top->a =  i;	//0000 ~ 1111 for readability
		step_and_dump_wave();
	}
	
	top->a=0b1111; top->b = 0b0000; top->cin = 0b1; step_and_dump_wave();
	for (int i = 0; i < 16; i++)	{
		top->b = (0b0000 + i);
		step_and_dump_wave();
	}

  sim_exit();
}
