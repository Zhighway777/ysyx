module fa_1(
	input		a,
	input		b, 
	input		c_in,
	output	s,
	output	c_out
);

assign s = a^b^c;
assign c_out =	a & b + (a^b) &c;

endmodule

