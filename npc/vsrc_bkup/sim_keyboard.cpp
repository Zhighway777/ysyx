#include "verilated_vcd_c.h"
#include "Vkeyboard_sim.h"
#include "verilated.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vkeyboard_sim* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vkeyboard_sim;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

void send_keyboard_code(uint8_t code) { 
    top->code = code;
	 	step_and_dump_wave();
}

int main() {
  sim_init();
// 初始化仿真输入
    top->clk = 0;
    top->clrn = 0;
    top->nextdata_n = 1;

    // 仿真时钟周期
    const int clock_period = 10;
     // 运行仿真若干时钟周期
    for (unsigned int i = 0; i < 420; i++) {
        // 每5个时间单位（即5纳秒）翻转一次时钟信号
        if (i % (clock_period / 2) == 0) {
            top->clk = !top->clk;
						step_and_dump_wave();
        }

        // 仿真行为
        if (i == 20) top->clrn = 1; // 释放复位信号

        // 按下Shift键
        if (i == 40) send_keyboard_code(0x12); // press 'Shift'
        if (i == 60) top->nextdata_n = 0; // read data
        if (i == 80) top->nextdata_n = 1;

        // 按下W键
        if (i == 100) send_keyboard_code(0x1D); // press 'W'
        if (i == 120) send_keyboard_code(0x1D); // keep pressing 'W'
        if (i == 140) send_keyboard_code(0x1D); // keep pressing 'W'
        if (i == 160) top->nextdata_n = 0; // read data
        if (i == 180) top->nextdata_n = 1;

        // 释放W键
        if (i == 200) send_keyboard_code(0xF0); // release 'W'
        if (i == 220) top->nextdata_n = 0; // read data
        if (i == 240) top->nextdata_n = 1;

        // 释放W键
        if (i == 260) send_keyboard_code(0x1D); // release 'W'
        if (i == 280) top->nextdata_n = 0; // read data
        if (i == 300) top->nextdata_n = 1;

				 // 释放Shift键
        if (i == 320) send_keyboard_code(0xF0); 
        if (i == 340) top->nextdata_n = 0; // read data
        if (i == 360) top->nextdata_n = 1;

        // 释放Shift键
        if (i == 380) send_keyboard_code(0x12);
        if (i == 400) top->nextdata_n = 0; // read data
        if (i == 420) top->nextdata_n = 1;

        step_and_dump_wave(); // 执行一个仿真时间步，并记录波形    
		}   
  sim_exit();
	return 0;
}
