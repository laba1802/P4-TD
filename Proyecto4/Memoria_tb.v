`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:24:44 05/31/2017
// Design Name:   Memoria
// Module Name:   D:/FPGA/P4-TD/Proyecto4/Memoria_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Memoria
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Memoria_tb;

	// Inputs
	reg [31:0] dir;
	reg [31:0] data_input;
	reg mem_rd;
	reg mem_wd;
	reg clk;

	// Outputs
	wire [31:0] data_output;

	// Instantiate the Unit Under Test (UUT)
	Memoria uut (
		.dir(dir), 
		.data_input(data_input), 
		.mem_rd(mem_rd), 
		.mem_wd(mem_wd), 
		.clk(clk), 
		.data_output(data_output)
	);

	initial begin
		// Initialize Inputs
		dir = 0;
		data_input = 0;
		mem_rd = 0;
		mem_wd = 0;
		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		mem_wd = 1;
		dir = 32'h400000;
		data_input = 32'd1802;
		
		#20;
		dir = 32'h400004;
		data_input = 32'd2703;
		
		#20;
		dir = 32'h400008;
		data_input = 32'd0707;
		
		#20;
		dir = 32'h40000C;
		data_input = 32'd1818;
		
		#20;
		mem_wd = 0;
		mem_rd = 1;
		
		dir = 32'h400004;
		
		#20;
		dir = 32'h400000;
		
		#20;
		mem_rd = 1;
		dir = 32'h400008;
		
		#20 $finish;

	end
	
	always begin
		#10  clk = ~clk; 
	end
      
endmodule

