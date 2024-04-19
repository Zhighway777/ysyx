#include "verilated.h"
#include "verilated_vcd_c.h"
//modify here
#define VSIMNAME Valu
#include "../alu/Valu.h"

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
	for (int j = 0; j <=7; j++) {
		top->sel = j;
		step_and_dump_wave();
	
		top->data_a=0b1110; top->data_b =0b0001; step_and_dump_wave();    
		for (int i = 14; i < 16; i++)	{
			top->data_a =  i;	//0000 ~ 1111 for readability
			step_and_dump_wave();
		}
	
		top->data_a=0b1111; top->data_b = 0b0000; step_and_dump_wave();
		for (int i = 0; i < 2; i++)	{
			top->data_b = (0b0000 + i);
			step_and_dump_wave();
		}
	}
   sim_exit();
}
