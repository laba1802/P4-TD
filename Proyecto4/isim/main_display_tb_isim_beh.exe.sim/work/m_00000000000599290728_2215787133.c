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
static const char *ng0 = "D:/FPGA/P4-TD/Proyecto4/regNumber.v";
static int ng1[] = {0, 0};
static const char *ng2 = "Entro ";
static unsigned int ng3[] = {22U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {30U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {38U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {37U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {46U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {54U, 0U};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {61U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {62U, 0U};
static unsigned int ng18[] = {8U, 0U};
static unsigned int ng19[] = {70U, 0U};
static unsigned int ng20[] = {9U, 0U};
static unsigned int ng21[] = {69U, 0U};
static unsigned int ng22[] = {0U, 0U};
static int ng23[] = {10, 0};



static void Initial_38_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(38, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5352);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5512);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5672);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5992);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6152);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_46_1(char *t0)
{
    char t4[8];
    char t23[8];
    char t40[8];
    char t55[8];
    char t63[8];
    char t101[8];
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
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;

LAB0:    t1 = (t0 + 7640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 8208);
    *((int *)t2) = 1;
    t3 = (t0 + 7672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t5 = (t0 + 4632U);
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
    memset(t23, 0, 8);
    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t24) != 0)
        goto LAB14;

LAB15:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB16;

LAB17:    memcpy(t63, t23, 8);

LAB18:    t95 = (t63 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t63);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    *((unsigned int *)t23) = 1;
    goto LAB15;

LAB14:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB15;

LAB16:    t35 = (t0 + 5512);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t0 + 4472U);
    t39 = *((char **)t38);
    memset(t40, 0, 8);
    t38 = (t37 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t39);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t38);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t38);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB20;

LAB19:    if (t51 != 0)
        goto LAB21;

LAB22:    memset(t55, 0, 8);
    t56 = (t40 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t56) != 0)
        goto LAB25;

LAB26:    t64 = *((unsigned int *)t23);
    t65 = *((unsigned int *)t55);
    t66 = (t64 & t65);
    *((unsigned int *)t63) = t66;
    t67 = (t23 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB18;

LAB20:    *((unsigned int *)t40) = 1;
    goto LAB22;

LAB21:    t54 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t55) = 1;
    goto LAB26;

LAB25:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB26;

LAB27:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t23 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t23);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t55);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t87 = (t80 & t82);
    t88 = (t84 & t86);
    t89 = (~(t87));
    t90 = (~(t88));
    t91 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t91 & t89);
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    t93 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t93 & t89);
    t94 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t94 & t90);
    goto LAB29;

LAB30:    xsi_set_current_line(47, ng0);

LAB33:    xsi_set_current_line(49, ng0);
    t102 = (t0 + 4472U);
    t103 = *((char **)t102);
    memset(t101, 0, 8);
    t102 = (t101 + 4);
    t104 = (t103 + 4);
    t105 = *((unsigned int *)t103);
    t106 = (t105 >> 0);
    *((unsigned int *)t101) = t106;
    t107 = *((unsigned int *)t104);
    t108 = (t107 >> 0);
    *((unsigned int *)t102) = t108;
    t109 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t109 & 255U);
    t110 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t110 & 255U);
    xsi_vlogfile_write(1, 0, 0, ng2, 2, t0, (char)118, t101, 8);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4472U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);

LAB34:    t6 = ((char*)((ng3)));
    t87 = xsi_vlog_unsigned_case_compare(t4, 8, t6, 8);
    if (t87 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng5)));
    t87 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t87 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng7)));
    t87 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t87 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng9)));
    t87 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t87 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng11)));
    t87 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t87 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng13)));
    t87 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t87 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng15)));
    t87 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t87 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng17)));
    t87 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t87 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng19)));
    t87 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t87 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng21)));
    t87 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t87 == 1)
        goto LAB53;

LAB54:
LAB56:
LAB55:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 5672);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB57:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5352);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng23)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_multiply(t23, 32, t5, 32, t6, 32);
    t12 = (t0 + 5672);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 32, t23, 32, t14, 32);
    t24 = (t0 + 5352);
    xsi_vlogvar_assign_value(t24, t40, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4472U);
    t3 = *((char **)t2);
    t2 = (t0 + 5512);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB32;

LAB35:    xsi_set_current_line(51, ng0);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 5672);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    goto LAB57;

LAB37:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5672);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);
    goto LAB57;

LAB39:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5672);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);
    goto LAB57;

LAB41:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 5672);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);
    goto LAB57;

LAB43:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 5672);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);
    goto LAB57;

LAB45:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 5672);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);
    goto LAB57;

LAB47:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 5672);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);
    goto LAB57;

LAB49:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 5672);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);
    goto LAB57;

LAB51:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 5672);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);
    goto LAB57;

LAB53:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 5672);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);
    goto LAB57;

}

static void Cont_98_2(char *t0)
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
    char *t10;

LAB0:    t1 = (t0 + 7888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5352);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 8224);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000000599290728_2215787133_init()
{
	static char *pe[] = {(void *)Initial_38_0,(void *)Always_46_1,(void *)Cont_98_2};
	xsi_register_didat("work_m_00000000000599290728_2215787133", "isim/main_display_tb_isim_beh.exe.sim/work/m_00000000000599290728_2215787133.didat");
	xsi_register_executes(pe);
}
