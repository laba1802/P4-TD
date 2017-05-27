`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:24:02 05/26/2017
// Design Name:   BancoRegistros
// Module Name:   D:/FPGA/P4-TD/Proyecto4/BancoRegistros_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BancoRegistros
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BancoRegistros_tb;

	// Inputs
	reg clk;
	reg [4:0] dir_a;
	reg [4:0] dir_b;
	reg [4:0] dir_wra;
	reg [31:0] di;
	reg reg_rd;
	reg reg_wr;

	// Outputs
	wire [31:0] doa;
	wire [31:0] dob;

	// Instantiate the Unit Under Test (UUT)
	BancoRegistros uut (
		.clk(clk), 
		.dir_a(dir_a), 
		.dir_b(dir_b), 
		.dir_wra(dir_wra), 
		.di(di), 
		.reg_rd(reg_rd), 
		.reg_wr(reg_wr), 
		.doa(doa), 
		.dob(dob)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		dir_a = 0;
		dir_b = 0;
		dir_wra = 0;
		di = 0;
		reg_rd = 0;
		reg_wr = 0;

		// Wait 100 ns for global reset to finish
		#100;
      reg_wr = 1;
		dir_wra = 5'd10;
		di = 32'd2;
		
		#20;
		dir_wra = 5'd11;
		di = 32'd5;
		
		#20;
		dir_wra = 5'd12;
		di = 32'd20;
		
		#20;
		reg_wr = 0;
		reg_rd = 1;
		dir_a = 5'd10;
		dir_b = 5'd12;
		
		#20;
		reg_wr = 1;
		reg_rd = 0;
		dir_wra = 5'd10;
		di = 32'd50;
		
		#20;
		reg_wr = 0;
		reg_rd = 1;
		dir_a = 5'd10;
		dir_b = 5'd12;
		// Add stimulus here
		
		
		
		#40 $finish;
	end
    
	always begin
		#10  clk = ~clk; 
	end
endmodule

