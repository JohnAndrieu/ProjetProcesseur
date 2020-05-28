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
static const char *ng0 = "C:/PSI/Processeur/MemoryBench2.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


static void work_a_2909693550_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    xsi_set_current_line(45, ng0);

LAB3:    t1 = xsi_get_transient_memory(8192U);
    memset(t1, 0, 8192U);
    t2 = t1;
    t3 = (32U * 1U);
    t4 = t2;
    memset(t4, (unsigned char)2, t3);
    t5 = (t3 != 0);
    if (t5 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 13605);
    t9 = (0 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (t2 + t11);
    memcpy(t12, t7, 32U);
    t13 = (t0 + 13637);
    t15 = (10 - 0);
    t16 = (t15 * 1);
    t17 = (32U * t16);
    t18 = (t2 + t17);
    memcpy(t18, t13, 32U);
    t19 = (t0 + 13669);
    t21 = (20 - 0);
    t22 = (t21 * 1);
    t23 = (32U * t22);
    t24 = (t2 + t23);
    memcpy(t24, t19, 32U);
    t25 = (t0 + 13701);
    t27 = (30 - 0);
    t28 = (t27 * 1);
    t29 = (32U * t28);
    t30 = (t2 + t29);
    memcpy(t30, t25, 32U);
    t31 = (t0 + 13733);
    t33 = (40 - 0);
    t34 = (t33 * 1);
    t35 = (32U * t34);
    t36 = (t2 + t35);
    memcpy(t36, t31, 32U);
    t37 = (t0 + 13765);
    t39 = (50 - 0);
    t40 = (t39 * 1);
    t41 = (32U * t40);
    t42 = (t2 + t41);
    memcpy(t42, t37, 32U);
    t43 = (t0 + 13797);
    t45 = (60 - 0);
    t46 = (t45 * 1);
    t47 = (32U * t46);
    t48 = (t2 + t47);
    memcpy(t48, t43, 32U);
    t49 = (t0 + 13829);
    t51 = (70 - 0);
    t52 = (t51 * 1);
    t53 = (32U * t52);
    t54 = (t2 + t53);
    memcpy(t54, t49, 32U);
    t55 = (t0 + 3320);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    memcpy(t59, t1, 8192U);
    xsi_driver_first_trans_fast(t55);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    t6 = (8192U / t3);
    xsi_mem_set_data(t2, t2, t3, t6);
    goto LAB6;

}

static void work_a_2909693550_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(57, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 5332U);
    t4 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t4);
    t7 = (32U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 3384);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 32U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 3240);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2909693550_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2909693550_3212880686_p_0,(void *)work_a_2909693550_3212880686_p_1};
	xsi_register_didat("work_a_2909693550_3212880686", "isim/Processeur_Test2_isim_beh.exe.sim/work/a_2909693550_3212880686.didat");
	xsi_register_executes(pe);
}
