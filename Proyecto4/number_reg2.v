`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:32:42 06/08/2017
// Design Name:   regNumber
// Module Name:   D:/FPGA/P4-TD/Proyecto4/number_reg2.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: regNumber
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module number_reg2;

	// Inputs
	reg clk;
	reg [31:0] x;
	reg flag;

	// Outputs
	wire [31:0] number;

	// Instantiate the Unit Under Test (UUT)
	regNumber uut (
		.clk(clk), 
		.x(x), 
		.flag(flag), 
		.number(number)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		x = 0;
		flag = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		x = 32'hF016;
		flag = 1;
		
		#40;
		x = 32'hF014;
		flag = 1;
		
		#40;
		x = 32'hF016;
		flag = 1;
		
	end
	
	always begin
		#10  clk = ~clk;
	end
      
endmodule

