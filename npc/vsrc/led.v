module led(
  input clk,
  input rst,
  input [4:0] btn,
  input [15:0] sw,
  output [15:0] ledr
);
//  reg [31:0] count;
//  reg [7:0] led; 

	mux41_t my_mux41(
		.y(sw[1:0]),
	
		.x0(sw[3:2]),
		.x1(sw[5:4]),
		.x2(sw[7:6]),
		.x3(sw[9:8]),
		
		.f(ledr[1:0])
	);
	
/*
	always @(posedge clk) begin
    if (rst) begin led <= 1; count <= 0; end
    else begin
      if (count == 0) led <= {led[6:0], led[7]};
      count <= (count >= 5000000 ? 32'b0 : count + 1);
    end
  end		
*/
//	assign ledr = {led[7:5], led[4:0] ^ btn, sw};
endmodule
