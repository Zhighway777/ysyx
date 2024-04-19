module fast_fadd4(
	input		[3:0]		a,
	input		[3:0]		b,
	input						cin,
	output					cout,
	output	[3:0]		sum
);

wire	[3:0]		g, p;
wire	[4:0]		c;

assign	c[0] = cin;
assign	p = a ^ b;
assign	g = a & b;
assign	c[1] = g[0] | (p[0] & c[0]);
assign	c[2] = g[1] | (p[1] & (g[0] | (p[0] & c[0])));
assign	c[3] = g[2] | (p[2] & (g[1] | (p[1] & (g[0] | (p[0] & c[0])))));
assign	c[4] = g[3] | (p[3] & (g[2] | (p[2] & (g[1] | (p[1] & (g[0] | (p[0] & c[0])))))));

assign sum = p ^ c[3:0];
assign cout = c[4];

endmodule
