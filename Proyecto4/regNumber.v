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
	 output flag_output,
	 output mem_wr,
    output [31:0] number
    );

	 reg [7:0] keycode_reg;
	 reg [31:0] number_reg, number_ant, number_temp, number_dec;
	 reg flag_ready, writeMem;
	 integer i, mult;
	 
	 localparam [7:0] one = 8'h16, two = 8'h1E, three = 8'h26, four = 8'h25, five = 8'h2E, six = 8'h36, seven = 8'h3D,
							eight = 8'h3E, nine = 8'h46, zero = 8'h45, plus = 8'h15, minus = 8'h1D, multiplication = 8'h24,
							division = 8'h2D, sen = 8'h2C, cos = 8'h35, and_logic = 8'h3C, or_logic = 8'h43, not_logic = 8'h44,
							nand_logic = 8'h4D, nor_logic = 8'h1C, xor_logic = 8'h1B, xnor_logic = 8'h23, enter = 8'h5A, 
							escape = 8'h76;
	 	 
	 initial begin
		number_reg = 0;
		number_ant = 0;
		number_temp = 0;
		flag_ready = 0;
		writeMem = 0;
	 end	 
	 
	 always @ (posedge clk) begin
		if(~flag && number_ant != x) begin
			
			if((x[7:0] == zero || x[7:0] == one || x[7:0] == two || x[7:0] == three || x[7:0] == four || x[7:0] == five || x[7:0] == six || x[7:0] == seven || x[7:0] == eight || x[7:0] == nine) && ~flag_ready) begin
				
				case(x[7:0])
					one: number_temp = 4'd1;
					two: number_temp = 4'd2;
					three: number_temp = 4'd3;
					four: number_temp = 4'd4;
					five: number_temp = 4'd5;
					six: number_temp = 4'd6;
					seven: number_temp = 4'd7;
					eight: number_temp = 4'd8;
					nine: number_temp = 4'd9;
					zero: number_temp = 4'd0;
					default: number_temp = 4'd0;
				endcase
				
				number_reg <= number_reg + number_reg + number_reg + number_reg + number_reg + number_reg + number_reg + number_reg + number_reg + number_reg + number_temp;
				
				number_ant = x;
				flag_ready = 0;
				
				
			end else if(x[7:0] == escape && ~flag_ready) begin
				number_reg <= 0;
			end else if(x[7:0] == enter) begin
				flag_ready = 0;
				writeMem = 0;
			end else begin
				flag_ready = 1;
				writeMem = 1;		
			end
		end
	 end

	 assign number = number_reg;
	 assign flag_output = flag_ready;
	 
endmodule