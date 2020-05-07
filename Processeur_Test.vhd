--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:02:53 05/07/2020
-- Design Name:   
-- Module Name:   C:/PSI/Processeur/Processeur_Test.vhd
-- Project Name:  Processeur
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Processeur
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
 
ENTITY Processeur_Test IS
END Processeur_Test;
 
ARCHITECTURE behavior OF Processeur_Test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Processeur
    PORT(
         CLK : IN  std_logic;
         RST : IN  std_logic;
         QA_out : OUT  std_logic_vector(7 downto 0);
         QB_out : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal RST : std_logic := '0';

 	--Outputs
   signal QA : std_logic_vector(7 downto 0);
   signal QB : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Processeur PORT MAP (
          CLK => CLK,
          RST => RST,
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
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		RST <= '0';
		wait for 50 ns;
		RST <= '1';
      wait for 100 ns;	
		
      wait for CLK_period*10;

      -- insert stimulus here 
		

      wait;
   end process;

END;
