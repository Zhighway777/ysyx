//寄存器构造模块 可以快速构造多个寄存器
//WIDTH：输入和输出数据的位宽
//INIT：复位后输出的默认值
module SimReg #(parameter WIDTH = 4, parameter INIT = 0) 
(
  input wire clk,
  input wire reset,
  input wire [WIDTH-1:0] data_in,
  input wire write_enable,
  output reg [WIDTH-1:0] data_out
);

// 在上升时钟边缘或复位信号被触发时更新状态
always @(posedge clk or posedge reset) begin
  if (reset) begin
    // 当复位信号为高时，将输出重置为初始值
    data_out <= INIT;
  end
  else if (write_enable) begin
    // 仅当写使能信号为高时更新状态
    data_out <= data_in;
  end
end

endmodule
