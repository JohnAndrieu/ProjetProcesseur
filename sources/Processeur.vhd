----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:28:16 05/06/2020 
-- Design Name: 
-- Module Name:    Processeur - Behavioral 
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

entity Processeur is
	port ( 
		CLK : in std_logic;
		RST : in std_logic;
		QA_out : out  STD_LOGIC_VECTOR (7 downto 0);
      QB_out : out  STD_LOGIC_VECTOR (7 downto 0)
	);
end Processeur;

architecture Behavioral of Processeur is

component ALU
	port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
          B : in  STD_LOGIC_VECTOR (7 downto 0);
          N : out  STD_LOGIC;
          O : out  STD_LOGIC;
          Z : out  STD_LOGIC;
          C : out  STD_LOGIC;
          Ctrl_Alu : in  STD_LOGIC_VECTOR (2 downto 0);
          S : out  STD_LOGIC_VECTOR (7 downto 0)
	);
end component;

component RegisterBench
	port ( addrA : in  STD_LOGIC_VECTOR (3 downto 0);
          addrB : in  STD_LOGIC_VECTOR (3 downto 0);
          addrW : in  STD_LOGIC_VECTOR (3 downto 0);
          W : in  STD_LOGIC;
          DATA : in  STD_LOGIC_VECTOR (7 downto 0);
          RST : in  STD_LOGIC;
          CLK : in  STD_LOGIC;
          QA : out  STD_LOGIC_VECTOR (7 downto 0);
          QB : out  STD_LOGIC_VECTOR (7 downto 0)
	);
end component;

component MemoryBench
	port ( Addr : in  STD_LOGIC_VECTOR (7 downto 0);
          input : in  STD_LOGIC_VECTOR (7 downto 0);
          RW : in  STD_LOGIC;
          RST : in  STD_LOGIC;
          CLK : in  STD_LOGIC;
          output : out  STD_LOGIC_VECTOR (7 downto 0)
	);
end component;

component MemoryBench2
   port ( Addr : in  STD_LOGIC_VECTOR (7 downto 0);
          CLK : in  STD_LOGIC;
          output : out  STD_LOGIC_VECTOR (31 downto 0)
	);
end component;

signal A_LI_DI : std_logic_vector(7 downto 0);
signal B_LI_DI : std_logic_vector(7 downto 0);
signal C_LI_DI : std_logic_vector(7 downto 0);
signal OP_LI_DI : std_logic_vector(7 downto 0);

signal A_DI_EX : std_logic_vector(7 downto 0);
signal B_DI_EX : std_logic_vector(7 downto 0);
signal C_DI_EX : std_logic_vector(7 downto 0);
signal OP_DI_EX : std_logic_vector(7 downto 0);

signal A_EX_MEM : std_logic_vector(7 downto 0);
signal B_EX_MEM : std_logic_vector(7 downto 0);
signal OP_EX_MEM : std_logic_vector(7 downto 0);

signal A_MEM_RE : std_logic_vector(7 downto 0);
signal B_MEM_RE : std_logic_vector(7 downto 0);
signal OP_MEM_RE : std_logic_vector(7 downto 0);

signal temp : std_logic_vector(31 downto 0);

signal LC : std_logic;
signal LC_ALU : std_logic_vector(2 downto 0);
signal LC_MEM : std_logic;

signal MUX : std_logic_vector(7 downto 0);
signal MUX_ALU : std_logic_vector(7 downto 0);
signal MUX_MEM : std_logic_vector(7 downto 0);
signal MUX_MEM_2 : std_logic_vector(7 downto 0);

signal sig_QA : std_logic_vector(7 downto 0);
signal sig_QB : std_logic_vector(7 downto 0);
signal sig_S : std_logic_vector(7 downto 0);
signal sig_OUT : std_logic_vector(7 downto 0);

signal IP : std_logic_vector(7 downto 0);

--Addition 0x01 ADD Ri Rj Rk [Ri] ? [Rj] + [Rk]
--Multiplication 0x02 MUL Ri Rj Rk [Ri] ? [Rj] * [Rk]
--Soustraction 0x03 SOU Ri Rj Rk [Ri] ? [Rj] - [Rk]
--Division 0x04 DIV Ri Rj Rk [Ri] ? [Rj] / [Rk]
--Copie 0x05 COP Ri Rj _ [Ri] ? [Rj]
--Affectation 0x06 AFC Ri j _ [Ri] ? j
--Chargement 0x07 LOAD Ri @j _ [Ri] ? [@j]
--Sauvegarde 0x08 STORE @i Rj _ [@i] ? [Rj]

begin

U1 : ALU port map(B_DI_EX,C_DI_EX,open,open,open,open,LC_ALU,sig_S);
U2 : RegisterBench port map(B_LI_DI(3 downto 0),C_LI_DI(3 downto 0),A_MEM_RE(3 downto 0),LC,B_MEM_RE,RST,CLK,sig_QA,sig_QB);
U3 : MemoryBench port map(MUX_MEM_2,B_EX_MEM,LC_MEM,RST,CLK,sig_OUT);
U4 : MemoryBench2 port map(IP,CLK,temp);

--Unit� de controle
LC <= '0' when OP_MEM_RE = x"08" else '1';	
MUX <= B_LI_DI when OP_LI_DI = x"06" else sig_QA;

LC_ALU <= "000" when OP_DI_EX = x"01" else "010" when OP_DI_EX = x"02" else "001" when OP_DI_EX = x"03";
MUX_ALU <= sig_S when OP_DI_EX = x"01" or OP_DI_EX = x"02" or OP_DI_EX = x"03" else B_DI_EX;

LC_MEM <= '1' when OP_EX_MEM = x"08" else '0';
MUX_MEM <= sig_OUT when OP_EX_MEM = x"07" or OP_EX_MEM = x"08" else B_EX_MEM;
MUX_MEM_2 <= A_EX_MEM when OP_EX_MEM = x"08" else B_EX_MEM;

QA_out <= A_MEM_RE;
QB_out <= B_MEM_RE;

process (CLK)

begin

if(rising_edge(CLK)) then

	if(RST = '0') then
		IP <= x"00";
	else 
		IP <= IP + 1;
	end if;

	OP_LI_DI <= temp(31 downto 24);
	A_LI_DI <= temp(23 downto 16);
	B_LI_DI <= temp(15 downto 8);
	C_LI_DI <= temp(7 downto 0);

	A_DI_EX <= A_LI_DI;
	B_DI_EX <= MUX;
	C_DI_EX <= sig_QB;
	OP_DI_EX <= OP_LI_DI;

	A_EX_MEM <= A_DI_EX;
	B_EX_MEM <= MUX_ALU;
	OP_EX_MEM <= OP_DI_EX;

	A_MEM_RE <= A_EX_MEM;
	B_MEM_RE <= MUX_MEM;
	OP_MEM_RE <= OP_EX_MEM;
	

end if;

end process;

end Behavioral;

