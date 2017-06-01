`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:45:37 05/31/2017
// Design Name:   Concatenacion
// Module Name:   D:/FPGA/P4-TD/Proyecto4/Concatenacion_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Concatenacion
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Concatenacion_tb;

	// Inputs
	reg [27:0] output_jump;
	reg [31:0] PC;

	// Outputs
	wire [31:0] output_concat;

	// Instantiate the Unit Under Test (UUT)
	Concatenacion uut (
		.output_jump(output_jump), 
		.PC(PC), 
		.output_concat(output_concat)
	);

	initial begin
		// Initialize Inputs
		output_jump = 0;
		PC = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		// Add stimulus here
		PC = 32'hABCDEF00;
		output_jump = 32'h11111111;
		
		#10;
		PC = 32'hABCDEF00;
		output_jump = 32'h22222222;
		
		#10 $finish;
		
	end
      
endmodule

