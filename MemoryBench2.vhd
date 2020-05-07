----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:19:05 04/30/2020 
-- Design Name: 
-- Module Name:    MemoryBench2 - Behavioral 
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

entity MemoryBench2 is
    Port ( Addr : in  STD_LOGIC_VECTOR (7 downto 0);
           CLK : in  STD_LOGIC;
           output : out  STD_LOGIC_VECTOR (31 downto 0));
end MemoryBench2;

architecture Behavioral of MemoryBench2 is

type memo is array(0 to 255) of std_logic_vector(31 downto 0);
signal memory : memo ;

begin

	memory <=
		(	0 => x"06030500", --AFC
			1 => x"05020C00", --COP
			others => (others=>'0')
		);
		
	output <= memory(to_integer(unsigned(Addr)));
		
--process (CLK) is
--begin
--
--	if(rising_edge(CLK)) then
--		memory(0) <= x"06030500";
--		memory(1) <= x"05020C00";
--		output <= memory(to_integer(unsigned(Addr)));
--	end if;
--
--end process;

end Behavioral;

