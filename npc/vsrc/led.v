module led(
  input clk,
  input rst,
  input [15:0] data_in,
//  input [15:0] sw,
  output [15:0] ledr
);


assign ledr = data_in;


endmodule
