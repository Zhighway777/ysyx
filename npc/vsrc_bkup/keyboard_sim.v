`timescale 1s / 1ms
module keyboard_sim(
	input clk,
	input clrn,
	input nextdata_n,
	input [7:0] code 
);
/* parameter */
//parameter [31:0] clock_period = 10;

/* ps2_keyboard interface signals */
//reg clrn;
/* verilator lint_off UNUSED */
wire [7:0] data;
wire ready;
wire overflow;
/* verilator lint_off UNUSED */
wire kbd_clk, kbd_data;
//reg nextdata_n;


ps2_keyboard_model model(
    .ps2_clk(kbd_clk),
    .ps2_data(kbd_data),
		.code(code)
	);


ps2_keyboard inst(
    .clk(clk),
    .clrn(clrn),
    .ps2_clk(kbd_clk),
    .ps2_data(kbd_data),
    .data(data),
    .ready(ready),
    .nextdata_n(nextdata_n),
    .overflow(overflow)
);
/*
initial begin // clock driver 
    clk = 0;
    forever
        #(clock_period/2) clk = ~clk;
end

initial begin
    //clrn = 1'b0;  #20;
    //clrn = 1'b1;  #20;
    model.kbd_sendcode(8'h12); // press 'Shift'
    #20 nextdata_n =1'b0; #20 nextdata_n =1'b1;//read data
    model.kbd_sendcode(8'h1D); // 'W'
    #20 nextdata_n =1'b0; #20 nextdata_n =1'b1; //read data
    model.kbd_sendcode(8'hF0); // release 'Shift'
    #20 nextdata_n =1'b0; #20 nextdata_n =1'b1; //read data
    model.kbd_sendcode(8'h1D); // press 'S'
    #20 model.kbd_sendcode(8'h12); // keep pressing 'S'
    #20 model.kbd_sendcode(8'h12); // keep pressing 'S'
    model.kbd_sendcode(8'hF0); // break code
    model.kbd_sendcode(8'h12); // release 'S'
    #20;
    $stop;
end
*/
endmodule
