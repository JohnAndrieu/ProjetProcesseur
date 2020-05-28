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
static const char *ng0 = "C:/PSI/Processeur/RegisterBench.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2237170279_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;

LAB0:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t5 = 1;
    if (4U == 4U)
        goto LAB8;

LAB9:    t5 = 0;

LAB10:    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t2 = (t0 + 6668U);
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t2);
    t18 = (t17 - 0);
    t6 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t17);
    t19 = (8U * t6);
    t20 = (0 + t19);
    t7 = (t3 + t20);
    t8 = (t0 + 4296);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 8U);
    xsi_driver_first_trans_fast_port(t8);

LAB3:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t5 = 1;
    if (4U == 4U)
        goto LAB20;

LAB21:    t5 = 0;

LAB22:    if (t5 == 1)
        goto LAB17;

LAB18:    t1 = (unsigned char)0;

LAB19:    if (t1 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 6684U);
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t2);
    t18 = (t17 - 0);
    t6 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t17);
    t19 = (8U * t6);
    t20 = (0 + t19);
    t7 = (t3 + t20);
    t8 = (t0 + 4360);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 8U);
    xsi_driver_first_trans_fast_port(t8);

LAB15:    t2 = (t0 + 4200);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(55, ng0);
    t8 = (t0 + 1672U);
    t12 = *((char **)t8);
    t8 = (t0 + 4296);
    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 8U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB3;

LAB5:    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB7;

LAB8:    t6 = 0;

LAB11:    if (t6 < 4U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t2 = (t3 + t6);
    t7 = (t4 + t6);
    if (*((unsigned char *)t2) != *((unsigned char *)t7))
        goto LAB9;

LAB13:    t6 = (t6 + 1);
    goto LAB11;

LAB14:    xsi_set_current_line(61, ng0);
    t8 = (t0 + 1672U);
    t12 = *((char **)t8);
    t8 = (t0 + 4360);
    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 8U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB15;

LAB17:    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB19;

LAB20:    t6 = 0;

LAB23:    if (t6 < 4U)
        goto LAB24;
    else
        goto LAB22;

LAB24:    t2 = (t3 + t6);
    t7 = (t4 + t6);
    if (*((unsigned char *)t2) != *((unsigned char *)t7))
        goto LAB21;

LAB25:    t6 = (t6 + 1);
    goto LAB23;

}

static void work_a_2237170279_3212880686_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;

LAB0:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4216);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB10;

LAB12:
LAB11:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(73, ng0);
    t3 = xsi_get_transient_memory(128U);
    memset(t3, 0, 128U);
    t7 = t3;
    t8 = (t0 + 6955);
    t10 = (8U != 0);
    if (t10 == 1)
        goto LAB8;

LAB9:    t12 = (t0 + 4424);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 128U);
    xsi_driver_first_trans_fast(t12);
    goto LAB6;

LAB8:    t11 = (128U / 8U);
    xsi_mem_set_data(t7, t8, 8U, t11);
    goto LAB9;

LAB10:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t1 = (t0 + 1352U);
    t7 = *((char **)t1);
    t1 = (t0 + 6700U);
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t1);
    t18 = (t17 - 0);
    t11 = (t18 * 1);
    t19 = (8U * t11);
    t20 = (0U + t19);
    t8 = (t0 + 4424);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 8U);
    xsi_driver_first_trans_delta(t8, t20, 8U, 0LL);
    goto LAB11;

}


extern void work_a_2237170279_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2237170279_3212880686_p_0,(void *)work_a_2237170279_3212880686_p_1};
	xsi_register_didat("work_a_2237170279_3212880686", "isim/RegisterBench_Test_isim_beh.exe.sim/work/a_2237170279_3212880686.didat");
	xsi_register_executes(pe);
}
