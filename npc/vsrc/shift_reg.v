module shift_reg(
	input			 [2:0]		contrl,
	input								datain,
	input		wire	[7:0]	setdata,
	input								clk,
	output	reg		[7:0]	out
);

reg[7:0] Q;

always@ (posedge clk) begin
	case(contrl) 
		3'b000 :begin						//clear
			Q <= 8'b0000_0000;	
		end
		3'b001 :begin			//setnumber
			Q <= setdata;
		end
	3'b010 :begin			//logic right shift
		Q <= {1'b0, Q[7:1]};
		end
	3'b011 :begin			//logic left shift
		Q <= { Q[6:0], 1'b0};
	
		end
			3'b100 :begin		//algrothim right shift
		Q <= {Q[7], Q[7:1]};

		end
	3'b101 :begin			//data in left and data out
			Q[7] <= datain;
			out <= Q;
		end
	3'b110 :begin			//cycle right
		Q <= {Q[0], Q[7:1]};

		end
	3'b111 :begin			//cycle left
		Q <= { Q[6:0],Q[7]};

		end
	default:begin
		Q <= 8'bxxxx_xxxx;
		end
	endcase
end

endmodule
