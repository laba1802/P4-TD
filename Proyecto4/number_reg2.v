`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:32:42 06/08/2017
// Design Name:   regNumber
// Module Name:   D:/FPGA/P4-TD/Proyecto4/number_reg2.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: regNumber
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module number_reg2;

	// Inputs
	reg clk;
	reg [31:0] x;
	reg flag;
	reg [1:0] controller;
   

	// Outputs
	wire flagNumberOne;
	wire [31:0] direction;
	wire [31:0] number;

	// Instantiate the Unit Under Test (UUT)
	regNumber uut (
		.clk(clk),
		.controller(controller),
		.x(x),
		.flag(flag),
		.flagNumberOne(flagNumberOne),
		.direction(direction),
		.number(number)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		x = 0;
		flag = 0;
		controller = 0;

		// Wait 100 ns for global reset to finish
		#100;
      controller = 1;  
		// Add stimulus here
		x = 32'hF016;
		flag = 0;
		
		#40;
		x = 32'hF01E;
		
		#40;
		x = 32'hF016;
		
	end
	
	always begin
		#10  clk = ~clk;
	end
      
endmodule

