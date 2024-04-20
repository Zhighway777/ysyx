module seg_hex( 
  input rst,
	input	 [7:0] bit_sel,
  output	reg	 [7:0] o_seg0,
  output	reg	 [7:0] o_seg1,
  output [7:0] o_seg2,
  output [7:0] o_seg3,
  output [7:0] o_seg4,
  output [7:0] o_seg5,
  output [7:0] o_seg6,
  output [7:0] o_seg7
);

wire [7:0] segs [15:0];

assign segs[0] = 8'b11111101;
assign segs[1] = 8'b01100000;
assign segs[2] = 8'b11011010;
assign segs[3] = 8'b11110010;
assign segs[4] = 8'b01100110;
assign segs[5] = 8'b10110110;
assign segs[6] = 8'b10111110;
assign segs[7] = 8'b11100000;
assign segs[8] = 8'b11111110;
assign segs[9] = 8'b11110111;//9
assign segs[10] = 8'b1110_1101;//a
assign segs[11] = 8'b0011_1111;//b
assign segs[12] = 8'b1001_1100;//c
assign segs[13] = 8'b01111010;//d
assign segs[14] = 8'b10011110;//e
assign segs[15] = 8'b10001110; //f

always @(*) begin
        case(bit_sel[3:0])
            4'b0000: o_seg0 = ~segs[0];
            4'b0001: o_seg0 = ~segs[1];
            4'b0010: o_seg0 = ~segs[2];
            4'b0011: o_seg0 = ~segs[3];
            4'b0100: o_seg0 = ~segs[4];
            4'b0101: o_seg0 = ~segs[5];
            4'b0110: o_seg0 = ~segs[6];
            4'b0111: o_seg0 = ~segs[7];
            4'b1000: o_seg0 = ~segs[8];
            4'b1001: o_seg0 = ~segs[9];
            4'b1010: o_seg0 = ~segs[10];
            4'b1011: o_seg0 = ~segs[11];
            4'b1100: o_seg0 = ~segs[12];
            4'b1101: o_seg0 = ~segs[13];
            4'b1110: o_seg0 = ~segs[14];
            4'b1111: o_seg0 = ~segs[15];
            default: o_seg0 = ~8'b0; // 默认情况，熄灭所有段
        endcase
				case(bit_sel[7:4])
				    4'b0000: o_seg1 = ~segs[0];
            4'b0001: o_seg1 = ~segs[1];
            4'b0010: o_seg1 = ~segs[2];
            4'b0011: o_seg1 = ~segs[3];
            4'b0100: o_seg1 = ~segs[4];
            4'b0101: o_seg1 = ~segs[5];
            4'b0110: o_seg1 = ~segs[6];
            4'b0111: o_seg1 = ~segs[7];
            4'b1000: o_seg1 = ~segs[8];
            4'b1001: o_seg1 = ~segs[9];
            4'b1010: o_seg1 = ~segs[10];
            4'b1011: o_seg1 = ~segs[11];
            4'b1100: o_seg1 = ~segs[12];
            4'b1101: o_seg1 = ~segs[13];
            4'b1110: o_seg1 = ~segs[14];
            4'b1111: o_seg1 = ~segs[15];
            default: o_seg1 = ~8'b0; // 默认情况，熄灭所有段
				endcase
    end

assign o_seg2 = ~8'b0; // 重复这一行并修改相应的segX和位模式
assign o_seg3 = ~8'b0;
assign o_seg4 = ~8'b0;
assign o_seg5 = ~8'b0;
assign o_seg6 = ~8'b0;
assign o_seg7 = ~8'b0;

endmodule
