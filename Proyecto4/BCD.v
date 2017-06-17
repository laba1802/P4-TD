`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:21:26 06/09/2017 
// Design Name: 
// Module Name:    BCD 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module BCD(
    input [31:0] binary,
	 input flag,
    output [31:0] output_bcd
    );

	integer i;
	reg [3:0] thousands, hundreds, tens, ones;
	always @ (binary)
		begin
			thousands = 4'd0;
			hundreds = 4'd0;
			tens = 4'd0;
			ones = 4'd0;
			
			for(i = 13; i >= 0; i = i - 1)
				begin
					if(thousands >= 5) thousands = thousands + 3;
					if(hundreds >= 5) hundreds = hundreds + 3;
					if(tens >= 5) tens = tens + 3;
					if(ones >= 5) ones = ones + 3;
				
					thousands = thousands << 1;
					thousands[0] = hundreds[3];
					
					hundreds = hundreds << 1;
					hundreds[0] = tens[3];
					
					tens = tens << 1;
					tens[0] = ones[3];
					
					ones = ones << 1;
					ones[0] = binary[i];
				end
		end
		
		assign output_bcd = (flag) ? binary : {4'b0, thousands, 4'b0, hundreds, 4'b0, tens, 4'b0, ones};

endmodule
