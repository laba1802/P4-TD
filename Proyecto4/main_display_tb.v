`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:03:20 06/16/2017
// Design Name:   main
// Module Name:   D:/FPGA/P4-TD/Proyecto4/main_display_tb.v
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

module main_display_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] keycode;

	// Outputs
	wire [6:0] SEG;
	wire [3:0] AN;
	wire DP;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk(clk), 
		.keycode(keycode),
		.reset(reset), 
		.SEG(SEG), 
		.AN(AN), 
		.DP(DP)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		reset = 1;
		keycode = 0;

		// Wait 100 ns for global reset to finish
		#100;
		reset = 0;
        
		// Add stimulus here
		keycode = 32'hAAAAAA16;
		
		#20;
		keycode = 32'hAAAA161E;
	end
	
	always begin
		#10  clk = ~clk; 
	end
      
endmodule

