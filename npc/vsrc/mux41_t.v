module mux41_t(
	input		[1:0]	x0, 
	input		[1:0]	x1, 
	input		[1:0]	x2, 
	input		[1:0]	x3, 
	input		[1:0]	y,
	output	[1:0]	f
);

assign f = y[1] ? (y[0] ? x3 : x2) : (y[0] ? x1 : x0);

endmodule

		  
