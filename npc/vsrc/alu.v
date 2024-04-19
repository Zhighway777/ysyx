module alu(
	input				[3:0]		data_a,
	input				[3:0]		data_b,
	input				[2:0]		sel,
	output reg	[3:0]		data_out,
	output reg					zero,
	output reg					overflow,
	output reg					carry
	);


	wire	[3:0]	add_out;
	reg					add_sub_sel;

	add_sub_4 my_addsub(
		.a(data_a),
		.b(data_b),
		.cin(add_sub_sel),
		.out_s(add_out),
		.out_c(carry),
		.zero(zero),
		.overflow(overflow)
	);
	always @(*) begin
		case (sel) 
		3'b000	:	begin //add
			data_out = add_out;	
			add_sub_sel = 1'b0;
		end
		3'b001	:	begin //sub
			data_out = add_out;
			add_sub_sel = 1'b1;
		end
		3'b010	: begin data_out = ~ data_a;					add_sub_sel = 1'bx; end //not A
		3'b011	:	begin data_out = data_a & data_b; 	add_sub_sel = 1'bx; end //A and B
		3'b100	:	begin data_out = data_a | data_b; 	add_sub_sel = 1'bx; end //A or B
		3'b101	:	begin data_out = data_a ^ data_b; 	add_sub_sel = 1'bx; end //A xor B
		3'b110	:	begin	//compel
			add_sub_sel = 1'b1;
			data_out = { {3{1'b0}} ,overflow ^ add_out[3]};
		end	
		3'b111	:begin //equal
			add_sub_sel = 1'b1;
			data_out = { {3{1'b0}}, zero};
		end
		default	: begin
			data_out = 4'b0000;	
			add_sub_sel = 1'b0;
		end

		endcase
	end //End always

endmodule

