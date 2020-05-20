----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:50:07 04/22/2020 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU is
    Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
           B : in  STD_LOGIC_VECTOR (7 downto 0);
           N : out  STD_LOGIC;
           O : out  STD_LOGIC;
           Z : out  STD_LOGIC;
           C : out  STD_LOGIC;
           Ctrl_Alu : in  STD_LOGIC_VECTOR (2 downto 0);
           S : out  STD_LOGIC_VECTOR (7 downto 0));
end ALU;

architecture Behavioral of ALU is

signal Alu_Res : std_logic_vector(15 downto 0);
signal tmp: std_logic_vector (8 downto 0);

begin

process (A,B,Ctrl_Alu,Alu_Res) is

begin

	case (Ctrl_Alu) is
	when "000" => --Addition
		Alu_Res <= std_logic_vector(to_unsigned((to_integer(unsigned(A)) + to_integer(unsigned(B))),16)) ;
		--std_logic_vector(to_unsigned((to_integer(unsigned(A)) * to_integer(unsigned(B))),8)) ;
	when "001" => --Substraction
		Alu_Res <= std_logic_vector(to_unsigned((to_integer(unsigned(A)) - to_integer(unsigned(B))),16)) ;
	when "010" => --Multiplication
		Alu_Res <= A * B;
	when others => 
		Alu_Res <= x"0000";
	end case;
	
	if((A < B) and (Ctrl_Alu = "001")) then
			N <= '1'; --Negative flag
	else
			N <= '0';
	end if;

	if(Alu_Res > x"00FF") then
		O <= '1'; --Overflow flag
	else
		O <= '0';
	end if;

	if(Alu_Res = x"0000") then
		Z <= '1'; --Zero flag 
	else
		Z <= '0';
	end if;

end process;

S <= Alu_Res(7 downto 0);
tmp <= ('0' & A) + ('0' & B);
C <= tmp(8); -- Carryout flag
	
end Behavioral;

