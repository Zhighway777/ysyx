module encoder83(
	input		[7:0]	x,
	input		en,
	output reg[2:0]y
);

 integer i;
	always @(x or en) begin
		if (en) begin
			y = 0;
			for (i = 0; i <= 7; i++)
				if(x[i] == 1) y = i[2:0];
		end

		else y = 0;
	end

endmodule
