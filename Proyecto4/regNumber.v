`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:27:39 06/07/2017 
// Design Name: 
// Module Name:    regNumber 
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
module regNumber(
	 input clk,
    input  [31:0] x,
	 input flag,
    output [31:0] number
    );

	 reg [7:0] keycode_reg;
	 reg [31:0] number_reg, number_ant, number_temp;
	 reg flag_change;
	 	 
	 initial begin
		number_reg = 0;
		number_ant = 0;
		flag_change = 0;
	 end	 
	 
	 always @ (posedge clk) begin
		if(~flag & number_ant != x) begin
			number_reg = number_reg << 8;
			number_reg[7:0] = x[7:0];
			number_ant = x;
		end
	 end

	 assign number = number_reg;
	 
endmodule
