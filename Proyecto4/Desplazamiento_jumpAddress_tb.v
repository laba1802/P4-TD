`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:49:43 05/24/2017
// Design Name:   Desplazamiento_jumpAddress
// Module Name:   D:/FPGA/P4-TD/Proyecto4/Desplazamiento_jumpAddress_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Desplazamiento_jumpAddress
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Desplazamiento_jumpAddress_tb;

	// Inputs
	reg [25:0] jumpAddress;

	// Outputs
	wire [27:0] output_jump;

	// Instantiate the Unit Under Test (UUT)
	Desplazamiento_jumpAddress uut (
		.jumpAddress(jumpAddress), 
		.output_jump(output_jump)
	);

	initial begin
		// Initialize Inputs
		jumpAddress = 0;

		// Wait 100 ns for global reset to finish
		#100;
      jumpAddress = 26'hFFFFFFF;  
		// Add stimulus here
		#10;
		jumpAddress = 26'hABCDF11;
		
		#10 $finish;

	end
      
endmodule

