module ps2_ascii(
	input clk,
	input clrn,
	input [7:0] scan_code,
	output	reg	[7:0] tx_out,
	output	reg	key_released
);

always@(posedge clk or negedge clrn) begin
	if (!clrn) begin
		tx_out<=8'h00;
		key_released<=0;
	end else begin
		if	(scan_code == 8'hF0)	begin
			key_released <= 1'b1;
		end else begin
			case (scan_code)    
					8'h1c: tx_out <= 8'h41;  //A
					8'h32: tx_out <= 8'h42;  //B
					8'h21: tx_out <= 8'h43;  //C
					8'h23: tx_out <= 8'h44;  //D
					8'h24: tx_out <= 8'h45;  //E
					8'h2b: tx_out <= 8'h46;  //F
					8'h34: tx_out <= 8'h47;  //G
					8'h33: tx_out <= 8'h48;  //H
					8'h43: tx_out <= 8'h49;  //I
					8'h3b: tx_out <= 8'h4a;  //J
					8'h42: tx_out <= 8'h4b;  //K
					8'h4b: tx_out <= 8'h4c;  //L
					8'h3a: tx_out <= 8'h4d;  //M
					8'h31: tx_out <= 8'h4e;  //N  
					8'h44: tx_out <= 8'h4f;  //O
					8'h4d: tx_out <= 8'h50;  //P
					8'h15: tx_out <= 8'h51;  //Q
					8'h2d: tx_out <= 8'h52;  //R
					8'h1b: tx_out <= 8'h53;  //S
					8'h2c: tx_out <= 8'h54;  //T
					8'h3c: tx_out <= 8'h55;  //U
					8'h2a: tx_out <= 8'h56;  //V
					8'h1d: tx_out <= 8'h57;  //W
					8'h22: tx_out <= 8'h58;  //X
					8'h35: tx_out <= 8'h59;  //Y
					8'h1a: tx_out <= 8'h5a;  //Z
					8'h45: tx_out <= 8'h30;
					8'h16: tx_out <= 8'h31;
					8'h1e: tx_out <= 8'h32;
					8'h26: tx_out <= 8'h33;
					8'h25: tx_out <= 8'h34;
					8'h2e: tx_out <= 8'h35;
					8'h36: tx_out <= 8'h36;
					8'h3d: tx_out <= 8'h37;
					8'h3e: tx_out <= 8'h38;
					8'h46: tx_out <= 8'h39;
			
					default: tx_out <= 8'h00;
				endcase
				key_released <= 0;
		end
	end
end//always

endmodule
