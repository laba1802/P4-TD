`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:22:04 06/09/2017
// Design Name:   BCD
// Module Name:   D:/FPGA/P4-TD/Proyecto4/BCD_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BCD
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BCD_tb;

	// Inputs
	reg [31:0] binary;

	// Outputs
	wire [31:0] output_bcd;

	// Instantiate the Unit Under Test (UUT)
	BCD uut (
		.binary(binary), 
		.output_bcd(output_bcd)
	);

	initial begin
		// Initialize Inputs
		binary = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#10;
		binary = 31'b10011010010;
		
		#10;
		binary = 31'b1;
		
		#10;
		binary = 31'b1010;
		
		#10;
		binary = 31'b1100100;
		
		#10;
		binary = 31'b10011100001111;
		
		#10;
		binary = 31'b11000010011;
		
		#10;
		binary = 31'b11100001010;
		
		#10;
		binary = 31'b10011100001111;
		
		#10 $finish;
	end
      
endmodule

