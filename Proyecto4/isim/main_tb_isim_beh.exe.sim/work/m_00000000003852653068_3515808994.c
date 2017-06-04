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
static const char *ng0 = "D:/FPGA/P4-TD/Proyecto4/MIPS.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {32U, 0U};
static unsigned int ng8[] = {36U, 0U};
static unsigned int ng9[] = {39U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {37U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {34U, 0U};
static unsigned int ng14[] = {35U, 0U};
static unsigned int ng15[] = {43U, 0U};



static void Initial_63_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(63, ng0);

LAB2:    xsi_set_current_line(64, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 8048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 8208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 8368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 8528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 9008);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 9168);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 9328);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 9488);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 9648);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(73, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 9808);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(74, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 9968);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(75, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 8688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 8848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_225_1(char *t0)
{
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
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 11136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(225, ng0);
    t2 = (t0 + 11952);
    *((int *)t2) = 1;
    t3 = (t0 + 11168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(225, ng0);

LAB5:    xsi_set_current_line(226, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 7888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(226, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 7728);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Always_231_2(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 11384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 11968);
    *((int *)t2) = 1;
    t3 = (t0 + 11416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(231, ng0);

LAB5:    xsi_set_current_line(232, ng0);
    t4 = (t0 + 7728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 7888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 7728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(234, ng0);

LAB18:    xsi_set_current_line(235, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 7888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(246, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(248, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB17;

LAB9:    xsi_set_current_line(251, ng0);

LAB19:    xsi_set_current_line(252, ng0);
    t3 = (t0 + 5888U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t9, 0, 8);
    t6 = (t5 + 4);
    t7 = (t3 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB23;

LAB20:    if (t19 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t9) = 1;

LAB23:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(257, ng0);

LAB28:    xsi_set_current_line(258, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(259, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(260, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB26:    xsi_set_current_line(265, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(266, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(268, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(269, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(270, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(271, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(272, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(273, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(274, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(275, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB17;

LAB11:    xsi_set_current_line(279, ng0);

LAB29:    xsi_set_current_line(280, ng0);
    t3 = (t0 + 5888U);
    t5 = *((char **)t3);

LAB30:    t3 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 6, t3, 6);
    if (t31 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t8 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t8 == 1)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(329, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 9008);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(330, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 8688);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(331, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 8848);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(332, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 8208);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(333, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 9168);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(334, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 9328);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(335, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 8368);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(336, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 8528);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(337, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 9648);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    goto LAB17;

LAB13:    xsi_set_current_line(340, ng0);

LAB75:    xsi_set_current_line(341, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 8048);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(342, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 8848);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(343, ng0);
    t2 = ((char*)((ng6)));
    t6 = (t0 + 7888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB17;

LAB15:    xsi_set_current_line(345, ng0);

LAB76:    xsi_set_current_line(346, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 8048);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(347, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 8848);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(348, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 7888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB17;

LAB22:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(252, ng0);

LAB27:    xsi_set_current_line(253, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 9648);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 2);
    xsi_set_current_line(254, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(255, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB26;

LAB31:    xsi_set_current_line(281, ng0);

LAB42:    xsi_set_current_line(282, ng0);
    t6 = ((char*)((ng6)));
    t7 = (t0 + 7888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(283, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(284, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(285, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(286, ng0);
    t2 = (t0 + 6048U);
    t3 = *((char **)t2);

LAB43:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB41;

LAB33:    xsi_set_current_line(294, ng0);

LAB55:    xsi_set_current_line(295, ng0);
    t6 = (t0 + 4128U);
    t7 = *((char **)t6);
    t6 = (t0 + 4128U);
    t22 = *((char **)t6);
    memset(t9, 0, 8);
    t6 = (t7 + 4);
    t23 = (t22 + 4);
    t10 = *((unsigned int *)t7);
    t11 = *((unsigned int *)t22);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t23);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB59;

LAB56:    if (t19 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t9) = 1;

LAB59:    t30 = (t9 + 4);
    t24 = *((unsigned int *)t30);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(300, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 8048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);

LAB62:    xsi_set_current_line(301, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 7888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB41;

LAB35:    xsi_set_current_line(303, ng0);

LAB64:    xsi_set_current_line(304, ng0);
    t6 = (t0 + 4128U);
    t7 = *((char **)t6);
    t6 = (t0 + 4128U);
    t22 = *((char **)t6);
    memset(t9, 0, 8);
    t6 = (t7 + 4);
    t23 = (t22 + 4);
    t10 = *((unsigned int *)t7);
    t11 = *((unsigned int *)t22);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t23);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB66;

LAB65:    if (t19 != 0)
        goto LAB67;

LAB68:    t30 = (t9 + 4);
    t24 = *((unsigned int *)t30);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(309, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 8048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);

LAB71:    xsi_set_current_line(310, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 7888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB41;

LAB37:    xsi_set_current_line(312, ng0);

LAB73:    xsi_set_current_line(313, ng0);
    t6 = ((char*)((ng10)));
    t7 = (t0 + 7888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(314, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 9488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng5)));
    t6 = (t0 + 9808);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(316, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 9968);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    xsi_set_current_line(317, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 8048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    goto LAB41;

LAB39:    xsi_set_current_line(319, ng0);

LAB74:    xsi_set_current_line(320, ng0);
    t6 = ((char*)((ng10)));
    t7 = (t0 + 7888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(321, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 9488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(322, ng0);
    t2 = ((char*)((ng5)));
    t6 = (t0 + 9808);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(323, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 9968);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    xsi_set_current_line(324, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 8048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    goto LAB41;

LAB44:    xsi_set_current_line(287, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 9968);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    goto LAB54;

LAB46:    xsi_set_current_line(288, ng0);
    t6 = ((char*)((ng6)));
    t7 = (t0 + 9968);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    goto LAB54;

LAB48:    xsi_set_current_line(289, ng0);
    t6 = ((char*)((ng10)));
    t7 = (t0 + 9968);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    goto LAB54;

LAB50:    xsi_set_current_line(290, ng0);
    t6 = ((char*)((ng12)));
    t7 = (t0 + 9968);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    goto LAB54;

LAB52:    xsi_set_current_line(291, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t0 + 9968);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    goto LAB54;

LAB58:    t29 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(295, ng0);

LAB63:    xsi_set_current_line(296, ng0);
    t32 = ((char*)((ng1)));
    t33 = (t0 + 9488);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 1);
    xsi_set_current_line(297, ng0);
    t2 = ((char*)((ng10)));
    t6 = (t0 + 9808);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(298, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 8048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    goto LAB62;

LAB66:    *((unsigned int *)t9) = 1;
    goto LAB68;

LAB67:    t29 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(304, ng0);

LAB72:    xsi_set_current_line(305, ng0);
    t32 = ((char*)((ng1)));
    t33 = (t0 + 9488);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 1);
    xsi_set_current_line(306, ng0);
    t2 = ((char*)((ng10)));
    t6 = (t0 + 9808);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(307, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 8048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    goto LAB71;

}

static void Cont_353_3(char *t0)
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

LAB0:    t1 = (t0 + 11632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(353, ng0);
    t2 = (t0 + 8848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 11984);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003852653068_3515808994_init()
{
	static char *pe[] = {(void *)Initial_63_0,(void *)Always_225_1,(void *)Always_231_2,(void *)Cont_353_3};
	xsi_register_didat("work_m_00000000003852653068_3515808994", "isim/main_tb_isim_beh.exe.sim/work/m_00000000003852653068_3515808994.didat");
	xsi_register_executes(pe);
}
