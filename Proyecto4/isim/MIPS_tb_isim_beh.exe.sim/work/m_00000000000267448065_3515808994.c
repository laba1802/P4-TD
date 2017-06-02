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
static unsigned int ng1[] = {0U, 0U};
static const char *ng2 = "0";
static unsigned int ng3[] = {1U, 0U};
static const char *ng4 = "1";
static unsigned int ng5[] = {2U, 0U};
static const char *ng6 = "2";
static unsigned int ng7[] = {3U, 0U};
static const char *ng8 = "3";
static unsigned int ng9[] = {4U, 0U};
static const char *ng10 = "4";



static void Always_112_0(char *t0)
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

LAB0:    t1 = (t0 + 5928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 6496);
    *((int *)t2) = 1;
    t3 = (t0 + 5960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(112, ng0);

LAB5:    xsi_set_current_line(113, ng0);
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

LAB7:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 5008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4848);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(113, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4848);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Always_118_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;

LAB0:    t1 = (t0 + 6176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 6512);
    *((int *)t2) = 1;
    t3 = (t0 + 6208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(118, ng0);

LAB5:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 4848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5008);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
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

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(121, ng0);

LAB18:    xsi_set_current_line(122, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB17;

LAB9:    xsi_set_current_line(125, ng0);

LAB19:    xsi_set_current_line(126, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB17;

LAB11:    xsi_set_current_line(129, ng0);

LAB20:    xsi_set_current_line(130, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB17;

LAB13:    xsi_set_current_line(133, ng0);

LAB21:    xsi_set_current_line(134, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB17;

LAB15:    xsi_set_current_line(137, ng0);

LAB22:    xsi_set_current_line(138, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB17;

}


extern void work_m_00000000000267448065_3515808994_init()
{
	static char *pe[] = {(void *)Always_112_0,(void *)Always_118_1};
	xsi_register_didat("work_m_00000000000267448065_3515808994", "isim/MIPS_tb_isim_beh.exe.sim/work/m_00000000000267448065_3515808994.didat");
	xsi_register_executes(pe);
}
