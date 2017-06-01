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
static const char *ng0 = "D:/FPGA/P4-TD/Proyecto4/Memoria.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {4194304U, 0U};
static int ng5[] = {4, 0};
static const char *ng6 = "";



static void Initial_37_0(char *t0)
{
    char t6[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3160);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3160);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 472);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t3, 32, t5, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3000);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 2520);
    t16 = (t0 + 2520);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2520);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3160);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 3160);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 3160);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB7;

}

static void Always_42_1(char *t0)
{
    char t6[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    int t25;
    char *t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;

LAB0:    t1 = (t0 + 4328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5144);
    *((int *)t2) = 1;
    t3 = (t0 + 4360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB8;

LAB9:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 2840);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB13:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB14;

LAB15:
LAB16:    goto LAB2;

LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(44, ng0);
    t16 = (t0 + 1320U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t17, 32, t16, 32);
    t19 = ((char*)((ng5)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_divide(t20, 32, t18, 32, t19, 32);
    t21 = (t0 + 2840);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 32);
    goto LAB13;

LAB14:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t0 + 2520);
    t7 = (t0 + 2520);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2520);
    t16 = (t10 + 64U);
    t17 = *((char **)t16);
    t19 = (t0 + 2840);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t6, t18, t9, t17, 2, 1, t22, 32, 1);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    t26 = (t18 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t25 && t28);
    if (t29 == 1)
        goto LAB17;

LAB18:    goto LAB16;

LAB17:    t30 = *((unsigned int *)t6);
    t31 = *((unsigned int *)t18);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t18), t33, 0LL);
    goto LAB18;

}

static void Always_50_2(char *t0)
{
    char t6[8];
    char t18[8];
    char t20[8];
    char t30[8];
    char t70[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;

LAB0:    t1 = (t0 + 4576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5160);
    *((int *)t2) = 1;
    t3 = (t0 + 4608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB8;

LAB9:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t2) != 0)
        goto LAB16;

LAB17:    t5 = (t6 + 4);
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t5);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB18;

LAB19:    memcpy(t30, t6, 8);

LAB20:    t61 = (t30 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t30);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB33;

LAB34:
LAB35:    goto LAB2;

LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(51, ng0);
    t16 = (t0 + 1320U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t17, 32, t16, 32);
    t19 = ((char*)((ng5)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_divide(t20, 32, t18, 32, t19, 32);
    t21 = (t0 + 2680);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 32);
    goto LAB13;

LAB14:    *((unsigned int *)t6) = 1;
    goto LAB17;

LAB16:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    t7 = (t0 + 1320U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng4)));
    memset(t18, 0, 8);
    t9 = (t8 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB22;

LAB21:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB22;

LAB25:    if (*((unsigned int *)t8) > *((unsigned int *)t7))
        goto LAB23;

LAB24:    memset(t20, 0, 8);
    t17 = (t18 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (~(t25));
    t27 = *((unsigned int *)t18);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t17) != 0)
        goto LAB28;

LAB29:    t31 = *((unsigned int *)t6);
    t32 = *((unsigned int *)t20);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t21 = (t6 + 4);
    t34 = (t20 + 4);
    t35 = (t30 + 4);
    t36 = *((unsigned int *)t21);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB20;

LAB22:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB24;

LAB23:    *((unsigned int *)t18) = 1;
    goto LAB24;

LAB26:    *((unsigned int *)t20) = 1;
    goto LAB29;

LAB28:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB29;

LAB30:    t41 = *((unsigned int *)t30);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t30) = (t41 | t42);
    t43 = (t6 + 4);
    t44 = (t20 + 4);
    t45 = *((unsigned int *)t6);
    t46 = (~(t45));
    t47 = *((unsigned int *)t43);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (~(t49));
    t51 = *((unsigned int *)t44);
    t52 = (~(t51));
    t53 = (t46 & t48);
    t54 = (t50 & t52);
    t55 = (~(t53));
    t56 = (~(t54));
    t57 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t57 & t55);
    t58 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t58 & t56);
    t59 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t59 & t55);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t56);
    goto LAB32;

LAB33:    xsi_set_current_line(54, ng0);
    t67 = (t0 + 2520);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t71 = (t0 + 2520);
    t72 = (t71 + 72U);
    t73 = *((char **)t72);
    t74 = (t0 + 2520);
    t75 = (t74 + 64U);
    t76 = *((char **)t75);
    t77 = (t0 + 2680);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    xsi_vlog_generic_get_array_select_value(t70, 32, t69, t73, t76, 2, 1, t79, 32, 1);
    t80 = (t0 + 3000);
    xsi_vlogvar_assign_value(t80, t70, 0, 0, 32);
    goto LAB35;

}

static void Cont_58_3(char *t0)
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

LAB0:    t1 = (t0 + 4824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5176);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000001399593876_1666899305_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Always_42_1,(void *)Always_50_2,(void *)Cont_58_3};
	xsi_register_didat("work_m_00000000001399593876_1666899305", "isim/Memoria_tb_isim_beh.exe.sim/work/m_00000000001399593876_1666899305.didat");
	xsi_register_executes(pe);
}
