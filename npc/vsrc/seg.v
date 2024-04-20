module seg(
  input clk,
  input rst,
	input	 [3:0]	data,
  output reg [7:0] o_seg0,
  output reg [7:0] o_seg1,
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
assign segs[8] = 8'b11111111;
assign segs[9] = 8'b11110111;



always @ (data) begin
	
	case (data)
		4'b0000:	o_seg0 = ~segs[0];
		4'b0001:	o_seg0 = ~segs[1];
		4'b0010:	o_seg0 = ~segs[2];
		4'b0011:	o_seg0 = ~segs[3];
		4'b0100:	o_seg0 = ~segs[4];
		4'b0101:	o_seg0 = ~segs[5];
		4'b0110:	o_seg0 = ~segs[6];
		4'b0111:	o_seg0 = ~segs[7];
		//4'b1000:	o_seg0 = ~segs[8];
	//	4'b1001:	o_seg0 = ~segs[9];
	/*	
		4'b1010;	o_seg0 = ~segs[3'd7];
		4'b1010;	o_seg0 = ~segs[3'd7];
		4'b1010;	o_seg0 = ~segs[3'd7];
		4'b1010;	o_seg0 = ~segs[3'd7];
		4'b1010;	o_seg0 = ~segs[3'd7];
		4'b1010;	o_seg0 = ~segs[3'd7];
		4'b1010;	o_seg0 = ~segs[3'd7];
*/
		default: begin 
			o_seg0 = ~8'b0;
			o_seg1 = ~8'b0;
		end
	endcase
end //always end

/*assign o_seg0 = ~segs[offset + 3'd0];
assign o_seg1 = ~segs[offset + 3'd1];
assign o_seg2 = ~segs[offset + 3'd2];
assign o_seg3 = ~segs[offset + 3'd3];
assign o_seg4 = ~segs[offset + 3'd4];
assign o_seg5 = ~segs[offset + 3'd5];
assign o_seg6 = ~segs[offset + 3'd6];
assign o_seg7 = ~segs[offset + 3'd7];
*/
endmodule
