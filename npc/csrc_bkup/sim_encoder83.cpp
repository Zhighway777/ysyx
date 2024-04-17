#include "verilated.h"
#include "verilated_vcd_c.h"
//modify here
#define VSIMNAME Vencoder83
#include "../encoder83/Vencoder83.h"

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
	top->en=0b0; top->x =0b00000000; step_and_dump_wave();    
	for (int i = 0; i < 8; i++)	{
		top->x = (0b00000001 << i);	//0000,0001 for readability
		step_and_dump_wave();
	}

  top->en=0b1; ; top->x =0b00000000; step_and_dump_wave();    
	for (int i = 0; i < 8; i++)	{
		top->x = (0b00000001 << i);	//0000,0001 for readability
		step_and_dump_wave();
	}

  sim_exit();
}
