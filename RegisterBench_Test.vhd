--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:37:13 04/22/2020
-- Design Name:   
-- Module Name:   C:/PSI/RegisterBench/RegisterBench_Test.vhd
-- Project Name:  RegisterBench
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: RegisterBench
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY RegisterBench_Test IS
END RegisterBench_Test;
 
ARCHITECTURE behavior OF RegisterBench_Test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RegisterBench
    PORT(
         addrA : IN  std_logic_vector(3 downto 0);
         addrB : IN  std_logic_vector(3 downto 0);
         addrW : IN  std_logic_vector(3 downto 0);
         W : IN  std_logic;
         DATA : IN  std_logic_vector(7 downto 0);
         RST : IN  std_logic;
         CLK : IN  std_logic;
         QA : OUT  std_logic_vector(7 downto 0);
         QB : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal addrA : std_logic_vector(3 downto 0) := (others => '0');
   signal addrB : std_logic_vector(3 downto 0) := (others => '0');
   signal addrW : std_logic_vector(3 downto 0) := (others => '0');
   signal W : std_logic := '0';
   signal DATA : std_logic_vector(7 downto 0) := (others => '0');
   signal RST : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal QA : std_logic_vector(7 downto 0);
   signal QB : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RegisterBench PORT MAP (
          addrA => addrA,
          addrB => addrB,
          addrW => addrW,
          W => W,
          DATA => DATA,
          RST => RST,
          CLK => CLK,
          QA => QA,
          QB => QB
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
	
	W <= '1' , '0' after 500 ns;
	addrA <= "0000", "0001" after 100 ns, "0010" after 200 ns, "0011" after 300 ns;
	addrB <= "0100", "0101" after 100 ns, "0110" after 200 ns, "0111" after 300 ns;
	addrW <= "1000", "0001" after 100 ns;
	DATA <= "11111111";
	RST <= '1', '0' after 30 ns, '1' after 60 ns;
 
 --test

--   -- Stimulus process
--   stim_proc: process
--   begin		
--      -- hold reset state for 100 ns.
--      wait for 100 ns;	
--
--      wait for CLK_period*10;
--
--      -- insert stimulus here 
--
--      wait;
--   end process;

END;
