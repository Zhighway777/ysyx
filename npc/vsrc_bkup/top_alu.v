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

led my_led(
    .clk(clk),
    .rst(rst),
//    .btn(btn),
    .data(led_data),
    .ledr(ledr)
);


seg my_seg0(
    .clk(clk),
    .rst(rst),
		.data(out2seg0),
    .o_seg0(seg0),
	  .o_seg1(seg1),
    .o_seg2(seg2),
    .o_seg3(seg3),
    .o_seg4(seg4),
    .o_seg5(seg5),
    .o_seg6(seg6),
    .o_seg7(seg7) 
);


wire [3:0]out2seg0;

wire out_zero, out_of,out_carry;
wire [15:0]led_data= { {13{1'b0}}, out_carry, out_of, out_zero};

alu my_alu(
		.data_a(sw[3:0]),
		.data_b(sw[7:4]),
		.sel(sw[15:13]),
		.data_out( out2seg0),
		.zero(out_zero),		//zero 提示 led0
		.overflow(out_of),	//overflow flag led1
		.carry(out_carry)		//carry flag led2
);



endmodule

//assign VGA_CLK = clk;


