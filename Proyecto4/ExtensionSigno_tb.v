`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:58:35 05/24/2017
// Design Name:   ExtensionSigno
// Module Name:   D:/FPGA/P4-TD/Proyecto4/ExtensionSigno_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ExtensionSigno
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ExtensionSigno_tb;

	// Inputs
	reg [15:0] immediate;

	// Outputs
	wire [31:0] output_imm;

	// Instantiate the Unit Under Test (UUT)
	ExtensionSigno uut (
		.immediate(immediate), 
		.output_imm(output_imm)
	);

	initial begin
		// Initialize Inputs
		immediate = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		immediate = 16'h1111;
		
		// Add stimulus here
		#10;
		
		immediate = 16'hFFFF;
		
		#10;
		
		immediate = 16'hF000;
		
		#10 $finish;
	end
      
endmodule

