`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:19:10 05/31/2017
// Design Name:   RegA
// Module Name:   D:/FPGA/P4-TD/Proyecto4/RegA_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RegA
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RegA_tb;

	// Inputs
	reg [31:0] data_input;
	reg clk;

	// Outputs
	wire [31:0] data_output;

	// Instantiate the Unit Under Test (UUT)
	RegA uut (
		.data_input(data_input), 
		.clk(clk), 
		.data_output(data_output)
	);

	initial begin
		// Initialize Inputs
		data_input = 0;
		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		data_input = 1;
		
		#20;
		data_input = 2;
		
		#20;
		data_input = 3;
		
		#20 $finish;
	end
	
	always begin
		#10  clk = ~clk; 
	end
      
endmodule

