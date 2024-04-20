module barrel_shifter(
	input [7:0]din,
	input [2:0]shamt,
	input l_r, //LEFT OR RIGHT
	input a_r,	//sign or not
	output reg	[7:0]dout
);
		reg [7:0]temp;

		always @(din or shamt or l_r or a_r) begin
			case({a_r, l_r})
        2'b00: begin
            temp = shamt[0] ? {{din[7]}, din[7:1]} : a;
            temp = shamt[1] ? {{2{temp[7]}}, temp[7:2]} : temp;
//             b = sext ? {{(8-WIDTH){din[WIDTH-1]}},a} : {8'b0, a};
             temp = shamt[2] ? {{4{temp[7]}}, temp[7:4]} : temp;
         
            end
        2'b01: begin
             temp = shamt[0] ? {8'b0, din[7:1]} : a;
             temp = shamt[1] ? {8'b0, temp[7:2]} : temp;
             temp = shamt[2] ? {8'b0, temp[7:4]} : temp;
        
       
            end
        2'b10, 2'b11: begin
             temp = shamt[0] ? {{din[30:0]}, 1'b0} : a;
             temp = shamt[1] ? {{temp[29:0]}, 2'b0} : temp;
             temp = shamt[2] ? {{temp[27:0]}, 4'b0} : temp;
      
     
            end			
				endcase
				dout = temp;
		end
		

endmodule

