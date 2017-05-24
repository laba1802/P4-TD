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
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {4U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {35U, 0U};
static unsigned int ng7[] = {43U, 0U};
static int ng8[] = {0, 0};



static void Always_42_0(char *t0)
{
    char t11[8];
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

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4784);
    *((int *)t2) = 1;
    t3 = (t0 + 4248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
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

LAB6:    xsi_set_current_line(44, ng0);
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

LAB9:    t21 = ((char*)((ng1)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 6, t21, 6);
    if (t22 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng2)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t22 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t22 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t22 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t22 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t22 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB8;

LAB10:    xsi_set_current_line(45, ng0);
    t23 = ((char*)((ng1)));
    t24 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 2, 0LL);
    goto LAB22;

LAB12:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    goto LAB22;

LAB14:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    goto LAB22;

LAB16:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    goto LAB22;

LAB18:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    goto LAB22;

LAB20:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    goto LAB22;

}

static void Always_54_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4800);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t5 = (t0 + 1776U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(66, ng0);

LAB16:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 26);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 26);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t6 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 6, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3296);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB17:    t6 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t31 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t31 == 1)
        goto LAB22;

LAB23:
LAB24:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(56, ng0);

LAB15:    xsi_set_current_line(57, ng0);
    t29 = ((char*)((ng8)));
    t30 = (t0 + 2176);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 26, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB14;

LAB18:    xsi_set_current_line(69, ng0);

LAB25:    xsi_set_current_line(70, ng0);
    t12 = (t0 + 1456U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t12 = (t4 + 4);
    t14 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 21);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 21);
    *((unsigned int *)t12) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t15 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t15 & 31U);
    t23 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t23, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 16);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 16);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t12 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 11);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 11);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t12 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t12 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 6, 0LL);
    goto LAB24;

LAB20:    xsi_set_current_line(75, ng0);

LAB26:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1456U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 21);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 21);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 31U);
    t13 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 16);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 16);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t12 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t12 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 16, 0LL);
    goto LAB24;

LAB22:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1456U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 67108863U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 67108863U);
    t13 = (t0 + 2176);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 26, 0LL);
    goto LAB24;

}


extern void work_m_00000000002217275948_0428279345_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Always_54_1};
	xsi_register_didat("work_m_00000000002217275948_0428279345", "isim/RegInstruccion_tb_isim_beh.exe.sim/work/m_00000000002217275948_0428279345.didat");
	xsi_register_executes(pe);
}
