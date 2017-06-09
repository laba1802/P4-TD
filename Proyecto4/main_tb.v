`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:43:32 06/02/2017
// Design Name:   main
// Module Name:   D:/FPGA/P4-TD/Proyecto4/main_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module main_tb;

	// Inputs
	reg clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
		reset = 1;
		#0;
		reset = 0;
        
		// Add stimulus here
		#800 $finish;
	end
	
	always begin
		#10  clk = ~clk;
	end
      
endmodule

