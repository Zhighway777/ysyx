module top(
    input clk,
    input rst,
    input [4:0] btn,
    input [15:0] sw,
    input ps2_clk,
    input ps2_data,
    input uart_rx,
    output uart_tx,
    output [15:0] ledr,
    output VGA_CLK,
    output VGA_HSYNC,
    output VGA_VSYNC,
    output VGA_BLANK_N,
    output [7:0] VGA_R,
    output [7:0] VGA_G,
    output [7:0] VGA_B,
    output [7:0] seg0,    
		output [7:0] seg1,
    output [7:0] seg2,
    output [7:0] seg3,
    output [7:0] seg4,
    output [7:0] seg5,
    output [7:0] seg6,
    output [7:0] seg7
);


wire [7:0] key_num, asc_num, key_times;

seg_hex my_seg( 
    .rst(rst),
		.key_num(key_num),
		.asc_num(asc_num),
		.key_times(key_times),
    .o_seg0(seg0),
	  .o_seg1(seg1),
    .o_seg2(seg2),
    .o_seg3(seg3),
    .o_seg4(seg4),
    .o_seg5(seg5),
    .o_seg6(seg6),
    .o_seg7(seg7) 
);


ps2_keyboard(
		.clk(clk),
		.clrn(),
		.ps2_clk(),
		.ps2_data(),
		.data(),
		.ready(),
		.nextdata_n(),
		.overflow()
);




endmodule

//assign VGA_CLK = clk;


