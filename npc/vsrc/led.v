module led(
  input clk,
  input rst,
  input [2:0] data,
//  input [15:0] sw,
  output [15:0] ledr
);


assign ledr[15] = (data != 3'b000 ) ? 1'b1 : 1'b0;

/*******mux41********
	mux41_t my_mux41(
		.y(sw[1:0]),
	
		.x0(sw[3:2]),
		.x1(sw[5:4]),
		.x2(sw[7:6]),
		.x3(sw[9:8]),
		
		.f(ledr[1:0])
	);
*******************/
endmodule