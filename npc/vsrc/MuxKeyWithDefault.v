//lut中(键值，数据) 给定一个键值，将会有一个输出数据与之匹配 类似于查找表
//用户需要自己定义1.键值对的数量2.键值的位宽3.输出数据的位宽
//WithDefault 还需要用户设置在输入键值与lut中均不匹配时的默认输出default
module MuxKeyWithDefault #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 1) i0 (out, key, default_out, lut);
endmodule
	
