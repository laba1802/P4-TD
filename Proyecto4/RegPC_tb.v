`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:37:50 05/31/2017
// Design Name:   RegPC
// Module Name:   D:/FPGA/P4-TD/Proyecto4/RegPC_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RegPC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RegPC_tb;

	// Inputs
	reg [31:0] pc_in;
	reg pc_ld;
	reg clk;

	// Outputs
	wire [31:0] pc_out;

	// Instantiate the Unit Under Test (UUT)
	RegPC uut (
		.pc_in(pc_in), 
		.pc_ld(pc_ld), 
		.clk(clk), 
		.pc_out(pc_out)
	);

	initial begin
		// Initialize Inputs
		pc_in = 0;
		pc_ld = 0;
		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		pc_ld = 1;
		pc_in = 32'd1;
		
		#20;
		pc_ld = 0;
		pc_in = 32'd2;
		
		#20;
		pc_ld = 1;
		pc_in = 32'd3;
		
		#20 $finish;
	end
	
	always begin
		#10  clk = ~clk; 
	end
      
endmodule

