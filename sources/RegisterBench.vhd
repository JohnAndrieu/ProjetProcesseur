----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:44:55 04/22/2020 
-- Design Name: 
-- Module Name:    RegisterBench - Behavioral 
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
--use IEEE.std_logic_arith.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity RegisterBench is
    Port ( addrA : in  STD_LOGIC_VECTOR (3 downto 0);
           addrB : in  STD_LOGIC_VECTOR (3 downto 0);
           addrW : in  STD_LOGIC_VECTOR (3 downto 0);
           W : in  STD_LOGIC;
           DATA : in  STD_LOGIC_VECTOR (7 downto 0);
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           QA : out  STD_LOGIC_VECTOR (7 downto 0);
           QB : out  STD_LOGIC_VECTOR (7 downto 0));
end RegisterBench;

architecture Behavioral of RegisterBench is

type registre is array(0 to 15) of std_logic_vector(7 downto 0);
signal my_reg : registre ; 

begin

-- Ecriture et Lecture sur A
QA <= DATA when addrW = addrA and W = '1' else my_reg(to_integer(unsigned(addrA)));

-- Ecriture et Lecture sur A
QB <= DATA when addrW = addrB and W = '1' else my_reg(to_integer(unsigned(addrB)));

process(CLK) is
begin
--16 registres différents 2^4
	if rising_edge(CLK) then
		
		if (RST = '0') then --RST actif
			my_reg <= (others => x"00");
		else
		
			if (W = '1') then 			--Ecriture
				my_reg(to_integer(unsigned(addrW))) <= DATA;
			end if;
			
		end if;

	end if;

end process;

end Behavioral;

