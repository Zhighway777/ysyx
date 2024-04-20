module random(
	input clk,
	output [7:0] rand_num
);

reg				left_in;
reg [7:0] Q;

initial begin
				Q	= 8'b0000_0001;
	left_in = 1'b0;	
end	

assign rand_num = Q;

	always @ (posedge clk) begin
	
		if ( |Q == 0) begin
			Q <= 8'b0000_0001;
		end else begin
			left_in <= Q[0] ^ Q[2] ^ Q[3] ^ Q[4];
			Q <= {left_in, Q[7:1]};
				
		end

	end


endmodule
