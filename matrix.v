module matrix(a, b, c);

input[23:0] a;
input[23:0] b; 
wire [7:0] a_temp [2:0];
wire [7:0] b_temp [2:0];

wire [15:0] acc_temp [2:0];
wire [15:0] x [2:0];
output[15:0] c; 

assign {a_temp[2], a_temp[1], a_temp[0]}; 
assign {b_temp[2], b_temp[1], b_temp[0]}; 

CB u0{a_temp [0], b_temp[0], x[0], acc_temp[0]}; 
CB u1{a_temp [1], b_temp[1], x[1], acc_temp[1]}; 
CB u2{a_temp [2], b_temp[2], x[2], acc_temp[2]}; 
