----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:18:17 04/30/2020 
-- Design Name: 
-- Module Name:    MemoryBench - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity MemoryBench is
    Port ( Addr : in  STD_LOGIC_VECTOR (7 downto 0);
           input : in  STD_LOGIC_VECTOR (7 downto 0);
           RW : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           output : out  STD_LOGIC_VECTOR (7 downto 0));
end MemoryBench;

architecture Behavioral of MemoryBench is

type memo is array(0 to 255) of std_logic_vector(7 downto 0);
signal memory : memo ;

begin
process (CLK) is
begin
	
	if(rising_edge(CLK)) then
	
		if(RST = '0') then
			memory <= (others => x"00");
		else
			if(RW = '1') then --Ecriture
				memory(to_integer(unsigned(Addr))) <= input;
			else	--Lecture
				output <= memory(to_integer(unsigned(Addr)));
			end if;
		end if;
	
	end if;
end process;
end Behavioral;

