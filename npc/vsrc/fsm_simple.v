module fsm_simple(
	input rst,
	input w,
	input clk,
	output reg z
);

parameter[3:0] S0 = 0, S1 = 1, S2 = 2, S3 = 3,
          S4 = 4, S5 = 5, S6 = 6, S7 = 7, S8 = 8;

wire [3:0] sdata_din, state_dout;
wire state_wen;


always@ (posedge clk, posedge rst) begin
	if(! rst) begin
		
	end else begin
		z <= 0;
	end
end

endmodule
