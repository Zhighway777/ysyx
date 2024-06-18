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

wire ready, overflow, sampling;
wire [15:0] led_data;
wire [7:0]	scan_code;
wire [7:0]	ascii_code;
wire [7:0]	key_count;
wire				key_released;
reg					nextdata_n;
wire				clrn;
assign clrn = !rst;//clrn default is high

ps2_keyboard my_ps2_kbd(
		//input
		.clk(clk),
		.clrn(clrn),
		.ps2_clk(ps2_clk),
		.ps2_data(ps2_data),
		.nextdata_n(nextdata_n),
		//output
		.data(scan_code),
		.ready(ready),
		.overflow(overflow),
		.sampling(sampling)
);

ps2_ascii my_ps2_decoder(
		.clk(clk),
		.clrn(clrn),
		.scan_code(scan_code),

		.tx_out(ascii_code),
		.key_released(key_released)
);

assign led_data[2:0] = {ready, overflow, sampling};
led my_led(
    .clk(clk),
    .rst(rst),
//    .btn(btn),
    .data_in(led_data),
    
		.ledr(ledr)
);



ps2_seg my_seg( 
		.clk(clk), 
		.clrn(clrn),
		.scan_code(scan_code),
		.asc_num(ascii_code),
		.key_released(key_released),

    .o_seg0(seg0),
	  .o_seg1(seg1),
    .o_seg2(seg2),
    .o_seg3(seg3),
    .o_seg4(seg4),
    .o_seg5(seg5),
    .o_seg6(seg6),
    .o_seg7(seg7) 
);

always @(posedge clk or negedge rst) begin
        if (!rst) begin
            nextdata_n <= 1'b1;  // 初始状态为高
        end else begin
            if (ready) begin
                nextdata_n <= 1'b0;  // 当 ready 为高时，读取下一个数据
            end else begin
                nextdata_n <= 1'b1;  // 否则保持高电平
            end
        end
 end



endmodule

//assign VGA_CLK = clk;


