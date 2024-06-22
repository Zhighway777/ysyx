module ps2_seg(
  input clk,
	input	clrn,        
  input	[7:0] scan_code,    //PS2 key value
	input	[7:0]	asc_num,		//ascii of key value
	//input	[7:0]	key_times,	//numbers of press
	input key_released,

	output	reg	 [7:0] o_seg0, //key_val
  output	reg	 [7:0] o_seg1,	//key_val
  output	reg	 [7:0] o_seg2,	//ascii
  output	reg	 [7:0] o_seg3,	//ascii
  output [7:0] o_seg4,
  output [7:0] o_seg5,
  output	reg	[7:0] o_seg6,		//press_times
  output	reg	[7:0] o_seg7		//press_times

	);

wire [7:0] segs_hex [15:0];	//显示十六进制

assign segs_hex[0] = 8'b11111101;
assign segs_hex[1] = 8'b01100000;
assign segs_hex[2] = 8'b11011010;
assign segs_hex[3] = 8'b11110010;
assign segs_hex[4] = 8'b01100110;
assign segs_hex[5] = 8'b10110110;
assign segs_hex[6] = 8'b10111110;
assign segs_hex[7] = 8'b11100000;
assign segs_hex[8] = 8'b11111110;
assign segs_hex[9] = 8'b11110111;//9
assign segs_hex[10] = 8'b1110_1111;//a
assign segs_hex[11] = 8'b0011_1111;//b
assign segs_hex[12] = 8'b1001_1100;//c
assign segs_hex[13] = 8'b01111010;//d
assign segs_hex[14] = 8'b10011110;//e
assign segs_hex[15] = 8'b10001110; //f


reg [7:0] last_scan_code;
reg [7:0] key_times;
always @(posedge clk or negedge clrn) begin
	if(! clrn) begin
			o_seg0 <= ~8'b0;
			o_seg1 <= ~8'b0;
			o_seg2 <= ~8'b0;
			o_seg3 <= ~8'b0;
			o_seg6 <= ~8'b0;
			o_seg7 <= ~8'b0;
			last_scan_code <= 8'h00;
			key_times <= 8'h00;
	end else begin
		if (key_released) begin
			o_seg0 <= ~8'b0;
			o_seg1 <= ~8'b0;
			o_seg2 <= ~8'b0;
			o_seg3 <= ~8'b0;
		end else if (scan_code != last_scan_code)	begin
			key_times <= key_times +1;

			o_seg0 <= ~segs_hex[ scan_code[3:0] ];
			o_seg1 <= ~segs_hex[ scan_code[7:4] ];

			o_seg2 <= ~segs_hex[asc_num[3:0]];
			o_seg3 <= ~segs_hex[asc_num[7:4]];

			o_seg6 <= ~segs_hex[key_times[3:0]];
			o_seg7 <= ~segs_hex[key_times[7:4]];
			last_scan_code <= scan_code;
	
		end 
	end
	o_seg4 <= ~8'h00;
	o_seg5 <= ~8'h00;
end//always
endmodule
