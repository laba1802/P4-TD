`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:38:34 05/24/2017
// Design Name:   Desplazamiento_imm
// Module Name:   D:/FPGA/P4-TD/Proyecto4/Desplazamiento_imm_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Desplazamiento_imm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Desplazamiento_imm_tb;

	// Inputs
	reg [31:0] immediate;

	// Outputs
	wire [31:0] output_imm;

	// Instantiate the Unit Under Test (UUT)
	Desplazamiento_imm uut (
		.immediate(immediate), 
		.output_imm(output_imm)
	);

	initial begin
		// Initialize Inputs
		immediate = 0;

		// Wait 100 ns for global reset to finish
		#100;
      immediate = 32'hFFFFFFFF;  
		// Add stimulus here
		#10;
		immediate = 32'hABCDF123;
		
		#10 $finish;
	end
      
endmodule

