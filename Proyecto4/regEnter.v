`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:44:27 06/16/2017 
// Design Name: 
// Module Name:    regEnter 
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
module regEnter(
    input clk,
    input [31:0] x,
    input flag,
    output flag_enter,
    output mem_rd
    );
	 
	 localparam [7:0] enter = 8'h5A;
	 
	 reg [31:0] number_ant;
	 reg enter_reg, mem_rd_reg;
	 
	 initial begin
		mem_rd_reg = 0;
		number_ant = 0;
		enter_reg = 0;
	 end	
	 
	 always @ (posedge clk) begin
		if(~flag && number_ant != x) begin
			number_ant = x;
			if(x[7:0] == enter) begin
				enter_reg = 1;
				mem_rd_reg = 1;
			end else begin
				enter_reg = 0;
				mem_rd_reg = 0;
			end
		end
	end
	
	assign flag_enter = enter_reg;
	assign mem_rd = mem_rd_reg;


endmodule
