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
static const char *ng0 = "D:/FPGA/P4-TD/Proyecto4/RegInstruccion.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {35U, 0U};
static unsigned int ng8[] = {43U, 0U};



static void Initial_42_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(42, ng0);

LAB2:    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 26, 0LL);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 6, 0LL);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 6, 0LL);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3776);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 5, 0LL);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3936);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 5, 0LL);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 5, 0LL);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4256);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 16, 0LL);

LAB1:    return;
}

static void Always_52_1(char *t0)
{
    char t11[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 5584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 7640);
    *((int *)t2) = 1;
    t3 = (t0 + 5616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1776U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(54, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    t12 = (t0 + 1456U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 26);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 26);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 63U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 63U);

LAB10:    t21 = ((char*)((ng2)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 6, t21, 6);
    if (t22 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t22 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t22 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t22 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t22 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t22 == 1)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB24:    t5 = ((char*)((ng2)));
    t22 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t22 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng4)));
    t22 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t22 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng6)));
    t22 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t22 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB8;

LAB11:    xsi_set_current_line(57, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 2, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB21:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB25:    xsi_set_current_line(67, ng0);

LAB32:    xsi_set_current_line(68, ng0);
    t12 = (t0 + 1456U);
    t13 = *((char **)t12);
    memset(t25, 0, 8);
    t12 = (t25 + 4);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t13);
    t7 = (t6 >> 26);
    *((unsigned int *)t25) = t7;
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 26);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t10 & 63U);
    t15 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t15 & 63U);
    t21 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t21, t25, 0, 0, 6, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 26, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    memset(t25, 0, 8);
    t2 = (t25 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 21);
    *((unsigned int *)t25) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 21);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t10 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t12 = (t0 + 3776);
    xsi_vlogvar_wait_assign_value(t12, t25, 0, 0, 5, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    memset(t25, 0, 8);
    t2 = (t25 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t25) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t10 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t12 = (t0 + 3936);
    xsi_vlogvar_wait_assign_value(t12, t25, 0, 0, 5, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    memset(t25, 0, 8);
    t2 = (t25 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 11);
    *((unsigned int *)t25) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 11);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t10 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t12 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t12, t25, 0, 0, 5, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    memset(t25, 0, 8);
    t2 = (t25 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t25) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t10 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t12 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t12, t25, 0, 0, 6, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB31;

LAB27:    xsi_set_current_line(76, ng0);

LAB33:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1456U);
    t5 = *((char **)t3);
    memset(t25, 0, 8);
    t3 = (t25 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 26);
    *((unsigned int *)t25) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 26);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t10 & 63U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 63U);
    t13 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t13, t25, 0, 0, 6, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 26, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    memset(t25, 0, 8);
    t2 = (t25 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 21);
    *((unsigned int *)t25) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 21);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t10 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t12 = (t0 + 3776);
    xsi_vlogvar_wait_assign_value(t12, t25, 0, 0, 5, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    memset(t25, 0, 8);
    t2 = (t25 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t25) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t10 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t12 = (t0 + 3936);
    xsi_vlogvar_wait_assign_value(t12, t25, 0, 0, 5, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    memset(t25, 0, 8);
    t2 = (t25 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t25) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t10 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t12 = (t0 + 4256);
    xsi_vlogvar_wait_assign_value(t12, t25, 0, 0, 16, 0LL);
    goto LAB31;

LAB29:    xsi_set_current_line(85, ng0);

LAB34:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1456U);
    t5 = *((char **)t3);
    memset(t25, 0, 8);
    t3 = (t25 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 26);
    *((unsigned int *)t25) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 26);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t10 & 63U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 63U);
    t13 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t13, t25, 0, 0, 6, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    memset(t25, 0, 8);
    t2 = (t25 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t25) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t10 & 67108863U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 67108863U);
    t12 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t12, t25, 0, 0, 26, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB31;

}

static void Cont_99_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 67108863U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 25);
    t18 = (t0 + 7656);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_100_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7896);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 63U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 5);
    t18 = (t0 + 7672);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_101_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 63U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 5);
    t18 = (t0 + 7688);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_102_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8024);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 7704);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_103_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 7720);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_104_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8152);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 7736);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_105_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8216);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 7752);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002549793109_0428279345_init()
{
	static char *pe[] = {(void *)Initial_42_0,(void *)Always_52_1,(void *)Cont_99_2,(void *)Cont_100_3,(void *)Cont_101_4,(void *)Cont_102_5,(void *)Cont_103_6,(void *)Cont_104_7,(void *)Cont_105_8};
	xsi_register_didat("work_m_00000000002549793109_0428279345", "isim/RegInstruccion_tb_isim_beh.exe.sim/work/m_00000000002549793109_0428279345.didat");
	xsi_register_executes(pe);
}
