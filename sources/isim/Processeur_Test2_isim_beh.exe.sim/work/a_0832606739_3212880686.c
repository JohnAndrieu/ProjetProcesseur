/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/PSI/Processeur/ALU.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767632659_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t11[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7188);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB7:    t5 = (t0 + 7191);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB8:    t8 = (t0 + 7194);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 7197);
    t3 = (t0 + 4824);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t3);

LAB2:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7040U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 7056U);
    t28 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t5, t3);
    if (t28 == 1)
        goto LAB16;

LAB17:    t27 = (unsigned char)0;

LAB18:    if (t27 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 4888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB14:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 7104U);
    t3 = (t0 + 7216);
    t6 = (t11 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 0;
    t8 = (t6 + 4U);
    *((int *)t8) = 15;
    t8 = (t6 + 8U);
    *((int *)t8) = 1;
    t4 = (15 - 0);
    t25 = (t4 * 1);
    t25 = (t25 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t25;
    t27 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t11);
    if (t27 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 4952);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB20:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 7104U);
    t3 = (t0 + 7232);
    t6 = (t11 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 0;
    t8 = (t6 + 4U);
    *((int *)t8) = 15;
    t8 = (t6 + 8U);
    *((int *)t8) = 1;
    t4 = (15 - 0);
    t25 = (t4 * 1);
    t25 = (t25 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t25;
    t27 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t11);
    if (t27 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 5016);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB23:    t1 = (t0 + 4696);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(56, ng0);
    t12 = (t0 + 1032U);
    t13 = *((char **)t12);
    t12 = (t0 + 7040U);
    t14 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t13, t12);
    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t15 = (t0 + 7056U);
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t16, t15);
    t18 = (t14 + t17);
    t19 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, t18, 16);
    t20 = (t0 + 4824);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t19, 16U);
    xsi_driver_first_trans_fast(t20);
    goto LAB2;

LAB4:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7040U);
    t4 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t1);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 7056U);
    t7 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t5, t3);
    t10 = (t4 - t7);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, t10, 16);
    t8 = (t0 + 4824);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t6, 16U);
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7040U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 7056U);
    t6 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t11, t2, t1, t5, t3);
    t8 = (t11 + 12U);
    t25 = *((unsigned int *)t8);
    t26 = (1U * t25);
    t27 = (16U != t26);
    if (t27 == 1)
        goto LAB11;

LAB12:    t9 = (t0 + 4824);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t6, 16U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB10:;
LAB11:    xsi_size_not_matching(16U, t26, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(67, ng0);
    t15 = (t0 + 4888);
    t16 = (t15 + 56U);
    t19 = *((char **)t16);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t15);
    goto LAB14;

LAB16:    t6 = (t0 + 1992U);
    t8 = *((char **)t6);
    t6 = (t0 + 7072U);
    t9 = (t0 + 7213);
    t13 = (t11 + 0U);
    t15 = (t13 + 0U);
    *((int *)t15) = 0;
    t15 = (t13 + 4U);
    *((int *)t15) = 2;
    t15 = (t13 + 8U);
    *((int *)t15) = 1;
    t4 = (2 - 0);
    t25 = (t4 * 1);
    t25 = (t25 + 1);
    t15 = (t13 + 12U);
    *((unsigned int *)t15) = t25;
    t29 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t6, t9, t11);
    t27 = t29;
    goto LAB18;

LAB19:    xsi_set_current_line(73, ng0);
    t8 = (t0 + 4952);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB20;

LAB22:    xsi_set_current_line(79, ng0);
    t8 = (t0 + 5016);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB23;

}

static void work_a_0832606739_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(86, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (15 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5080);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 4712);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_2(char *t0)
{
    char t1[16];
    char t4[16];
    char t9[16];
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(87, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t0 + 7040U);
    t2 = xsi_base_array_concat(t2, t4, t5, (char)99, (unsigned char)2, (char)97, t3, t6, (char)101);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t10 = ((IEEE_P_2592010699) + 4024);
    t11 = (t0 + 7056U);
    t7 = xsi_base_array_concat(t7, t9, t10, (char)99, (unsigned char)2, (char)97, t8, t11, (char)101);
    t12 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t1, t2, t4, t7, t9);
    t13 = (t1 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    t16 = (9U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 5144);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 9U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 4728);
    *((int *)t22) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t15, 0);
    goto LAB6;

}

static void work_a_0832606739_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(88, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5208);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 4744);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0,(void *)work_a_0832606739_3212880686_p_1,(void *)work_a_0832606739_3212880686_p_2,(void *)work_a_0832606739_3212880686_p_3};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/Processeur_Test2_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
