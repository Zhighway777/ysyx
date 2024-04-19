module add_sub_4(
	input		[3:0]		a, 
	input		[3:0]		b, 
	input						cin,
	output	[3:0]		out_s,
	output					out_c,
	output					zero,
	output					overflow
);

wire	 [3:0]	t_add_cin;
assign t_add_cin = ( {4{cin}} ^ b ) + { {3{1'b0}},cin};
assign {out_c, out_s} = a + t_add_cin;
assign zero = ~(| out_s);
assign overflow = (a[3] == t_add_cin[3]) && (out_s[3] != a[3]);

endmodule

/*
task check;  //测试任务
  input [3:0] results;  //ALU的结果预期正确输出
  input resultof, resultc, resultz;  //ALU的预期溢出，进位，零位
  begin
    if(outputs!=results)  //比较预期结果和测试单元输出的outputs
      begin               //出错时显示
        $display("Error:x=%h,y=%h,ctrl=%b,s should be %h,
          get %h", inputa, inputb, inputaluop, results, outputs);
      end
    //自行添加溢出，进位和零位的比较
  end
endtask
*/
