`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:12:51 06/16/2017 
// Design Name: 
// Module Name:    regProduct 
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
module regProduct(
	 input clk,
    input  [31:0] x,
	 input flag,
	 input flag_numberOne,
	 output flag_output,
	 output mem_wr,
    output [31:0] numberBCD,
	 output [31:0] operation
    );

	 reg [7:0] keycode_reg;
	 reg [31:0] number_reg, number_ant, number_dec;
	 reg flag_ready, writeMem;
	 integer i, mult;
	 
	 localparam [7:0] one = 8'h16, two = 8'h1E, three = 8'h26, four = 8'h25, five = 8'h2E, six = 8'h36, seven = 8'h3D,
							eight = 8'h3E, nine = 8'h46, zero = 8'h45, plus = 8'h15, minus = 8'h1D, multiplication = 8'h24,
							division = 8'h2D, sen = 8'h2C, cos = 8'h35, and_logic = 8'h3C, or_logic = 8'h43, not_logic = 8'h44,
							nand_logic = 8'h4D, nor_logic = 8'h1C, xor_logic = 8'h1B, xnor_logic = 8'h23, enter = 8'h5A, 
							escape = 8'h76;
	 	 
	 initial begin
		number_reg = 0;
		number_ant = 0;
		number_dec = 0;
		flag_ready = 0;
		writeMem = 0;
	 end	 
	 
	 always @ (posedge clk) begin
		if(~flag && number_ant != x) begin
			
			if(~(x[7:0] == zero || x[7:0] == one || x[7:0] == two || x[7:0] == three || x[7:0] == four || x[7:0] == five || x[7:0] == six || x[7:0] == seven || x[7:0] == eight || x[7:0] == nine) && ~flag_ready) begin
				
				case(x[7:0])
					plus: 				begin
												number_reg  <= 32'hA90A0D0D; //_Add
												number_dec 	<= 1;
											end
					minus: 				begin
												number_reg  <= 32'hA9A9A9A1; //___-
												number_dec 	<= 2;
											end
					multiplication: 	begin
												number_reg  <= 32'hA9A2A8A3; //_Por
												number_dec 	<= 3;
											end
					division: 			begin
												number_reg  <= 32'hA90DA0A4; //_div
												number_dec 	<= 4;
											end
					sen: 					begin
												number_reg  <= 32'hA9051EA5; //_5En
												number_dec 	<= 5;
											end
					cos: 					begin
												number_reg  <= 32'hA90C0005; //_C05
												number_dec 	<= 6;
											end
					and_logic: 			begin
												number_reg  <= 32'hA90AA50D; //_And
												number_dec 	<= 7;
											end
					or_logic:  			begin
												number_reg  <= 32'hA9A9A8A3; //__or
												number_dec 	<= 8;
											end
					not_logic: 			begin
												number_reg  <= 32'hA9A5A8A6; //_not
												number_dec 	<= 9;
											end
					nand_logic: 		begin
												number_reg  <= 32'hA50AA50D; //nAnd
												number_dec 	<= 10;
											end
					nor_logic:  		begin
												number_reg  <= 32'hA9A5A8A3; //_nor
												number_dec 	<= 11;
											end
					xor_logic:  		begin
												number_reg  <= 32'hA9A7A8A3; //_Xor
												number_dec 	<= 12;
											end
					xnor_logic: 		begin
												number_reg  <= 32'hA7A5A8A3; //Xnor
												number_dec 	<= 13;
											end
				endcase

				number_ant = x;
				flag_ready = 0;
				
				
			end else if(x[7:0] == enter) begin
				flag_ready = 0;
				writeMem = 0;
			end else if(flag_numberOne) begin
					flag_ready = 1;
					writeMem = 1;	
			end else flag_ready = 0;
		end
	 end

	 assign numberBCD = number_reg;
	 assign operation = number_dec;
	 assign flag_output = flag_ready;
	 
endmodule
