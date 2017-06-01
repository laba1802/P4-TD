`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:28:15 05/31/2017
// Design Name:   ExtensionCero
// Module Name:   D:/FPGA/P4-TD/Proyecto4/ExtensionCero_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ExtensionCero
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ExtensionCero_tb;

	// Inputs
	reg [15:0] immediate;

	// Outputs
	wire [31:0] output_imm;

	// Instantiate the Unit Under Test (UUT)
	ExtensionCero uut (
		.immediate(immediate), 
		.output_imm(output_imm)
	);

	initial begin
		// Initialize Inputs
		immediate = 0;

		// Wait 100 ns for global reset to finish
		#100;
      immediate = 16'd7;  
		// Add stimulus here
		#10;
		immediate = 16'd3840;
		
		#10;
		immediate = 16'hAAAA;
		
		#10 $finish;
	end
      
endmodule

