`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:26:23 06/09/2017 
// Design Name: 
// Module Name:    regOperation 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module regOperation(
	 input clk,
	 input controller,
    input  [31:0] x,
	 input flag,
	 output [1:0] direction,
    output [31:0] number
    );

	 reg [31:0] number_reg, number_ant, number_temp;
	 reg flag_ready;
	 
	 initial begin
		number_reg = 0;
		number_ant = 0;
		flag_ready = 0;
	 end	 
	 
	 always @ (posedge clk) begin
		if(controller == 0) flag_ready = 0;
		if(~flag & number_ant != x & controller == 2) begin
			flag_reagy = 1;
			number_reg = number_reg << 8;
			number_reg[7:0] = x[7:0];
			number_ant = x;
		end
	 end

	 assign number = number_reg;
	 assign flagNumberOne = flag_ready;
	 assign direction = 31'h400004;
	 
endmodule
