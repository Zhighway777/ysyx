module ps2_seg(
  input	rst;        
  input	[7:0] key_num;    //PS2 key value
	input	[7:0]	asc_num;		//ascii of key value
	input	[7:0]	key_times;	//numbers of press
  output	reg	 [7:0] o_seg0,
  output	reg	 [7:0] o_seg1,
  output	reg	 [7:0] o_seg2,
  output	reg	 [7:0] o_seg3,
  output [7:0] o_seg4,
  output [7:0] o_seg5,
  output	reg	[7:0] o_seg6,
  output	reg	[7:0] o_seg7

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
assign segs_hex[10] = 8'b1110_1101;//a
assign segs_hex[11] = 8'b0011_1111;//b
assign segs_hex[12] = 8'b1001_1100;//c
assign segs_hex[13] = 8'b01111010;//d
assign segs_hex[14] = 8'b10011110;//e
assign segs_hex[15] = 8'b10001110; //f


always @(*) begin
	o_seg0 = ~segs_hex[ key_num[3:0] ];
	o_seg1 = ~segs_hex[ key_num[7:4] ];

	o_seg2 = ~segs_hex[asc_num[3:0]];
	o_seg3 = ~segs_hex[asc_num[7:4]];

	o_seg6 = ~segs_hex[key_times[3:0]];
	o_seg7 = ~segs_hex[key_times[7:4]];

end

endmodule
