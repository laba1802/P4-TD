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
static const char *ng0 = "D:/FPGA/P4-TD/Proyecto4/alu.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {6U, 0U};
static int ng7[] = {0, 0};
static int ng8[] = {1, 0};
static int ng9[] = {4, 0};



static void Always_36_0(char *t0)
{
    char t10[8];
    char t40[8];
    char t43[8];
    char t46[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t47;
    unsigned int t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;

LAB0:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 6072);
    *((int *)t2) = 1;
    t3 = (t0 + 4792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 2320U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB21:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t10, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB36;

LAB33:    if (t20 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t10) = 1;

LAB36:    memset(t40, 0, 8);
    t9 = (t10 + 4);
    t25 = *((unsigned int *)t9);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t9) != 0)
        goto LAB39;

LAB40:    t22 = (t40 + 4);
    t30 = *((unsigned int *)t40);
    t33 = *((unsigned int *)t22);
    t34 = (t30 || t33);
    if (t34 > 0)
        goto LAB41;

LAB42:    memcpy(t50, t40, 8);

LAB43:    t80 = (t50 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t50);
    t84 = (t83 & t82);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB58:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 3360);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t21 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t4, t9, 2, t21, 32, 1);
    t22 = ((char*)((ng8)));
    memset(t40, 0, 8);
    t39 = (t10 + 4);
    t41 = (t22 + 4);
    t11 = *((unsigned int *)t10);
    t12 = *((unsigned int *)t22);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t39);
    t15 = *((unsigned int *)t41);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t39);
    t19 = *((unsigned int *)t41);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB62;

LAB59:    if (t20 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t40) = 1;

LAB62:    t44 = (t40 + 4);
    t25 = *((unsigned int *)t44);
    t26 = (~(t25));
    t27 = *((unsigned int *)t40);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB65:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB69;

LAB66:    if (t20 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t10) = 1;

LAB69:    t22 = (t10 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB72:    goto LAB2;

LAB7:    xsi_set_current_line(39, ng0);
    t7 = (t0 + 2000U);
    t8 = *((char **)t7);
    t7 = (t0 + 2160U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 5, t8, 4, t9, 4);
    t7 = (t0 + 3360);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 5);
    goto LAB21;

LAB9:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = (t0 + 2160U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 5, t4, 4, t7, 4);
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 5);
    goto LAB21;

LAB11:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB23;

LAB22:    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    t8 = (t0 + 3360);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 5);
    goto LAB21;

LAB13:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = (t0 + 2160U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB24;

LAB25:
LAB26:    t39 = (t0 + 3360);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 5);
    goto LAB21;

LAB15:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = (t0 + 2160U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB27;

LAB28:
LAB29:    t39 = (t0 + 3360);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 5);
    goto LAB21;

LAB17:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = (t0 + 2160U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB30;

LAB31:
LAB32:    t21 = (t0 + 3360);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 5);
    goto LAB21;

LAB23:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t15 | t16);
    goto LAB22;

LAB24:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t33);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t33);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    goto LAB26;

LAB27:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t29);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    goto LAB29;

LAB30:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    goto LAB32;

LAB35:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t40) = 1;
    goto LAB40;

LAB39:    t21 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB40;

LAB41:    t39 = (t0 + 2000U);
    t41 = *((char **)t39);
    t39 = (t0 + 2160U);
    t42 = *((char **)t39);
    memset(t43, 0, 8);
    t39 = (t41 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB45;

LAB44:    t44 = (t42 + 4);
    if (*((unsigned int *)t44) != 0)
        goto LAB45;

LAB48:    if (*((unsigned int *)t41) < *((unsigned int *)t42))
        goto LAB46;

LAB47:    memset(t46, 0, 8);
    t47 = (t43 + 4);
    t35 = *((unsigned int *)t47);
    t36 = (~(t35));
    t37 = *((unsigned int *)t43);
    t38 = (t37 & t36);
    t48 = (t38 & 1U);
    if (t48 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t47) != 0)
        goto LAB51;

LAB52:    t51 = *((unsigned int *)t40);
    t52 = *((unsigned int *)t46);
    t53 = (t51 & t52);
    *((unsigned int *)t50) = t53;
    t54 = (t40 + 4);
    t55 = (t46 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB53;

LAB54:
LAB55:    goto LAB43;

LAB45:    t45 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB47;

LAB46:    *((unsigned int *)t43) = 1;
    goto LAB47;

LAB49:    *((unsigned int *)t46) = 1;
    goto LAB52;

LAB51:    t49 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB52;

LAB53:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t40 + 4);
    t65 = (t46 + 4);
    t66 = *((unsigned int *)t40);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t46);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t6 = (t67 & t69);
    t31 = (t71 & t73);
    t74 = (~(t6));
    t75 = (~(t31));
    t76 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t76 & t74);
    t77 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t77 & t75);
    t78 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t78 & t74);
    t79 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t79 & t75);
    goto LAB55;

LAB56:    xsi_set_current_line(48, ng0);
    t86 = ((char*)((ng8)));
    t87 = (t0 + 3840);
    xsi_vlogvar_assign_value(t87, t86, 0, 0, 1);
    goto LAB58;

LAB61:    t42 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(51, ng0);
    t45 = ((char*)((ng8)));
    t47 = (t0 + 3520);
    xsi_vlogvar_assign_value(t47, t45, 0, 0, 1);
    goto LAB65;

LAB68:    t21 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(54, ng0);
    t39 = ((char*)((ng8)));
    t41 = (t0 + 3680);
    xsi_vlogvar_assign_value(t41, t39, 0, 0, 1);
    goto LAB72;

}

static void Cont_58_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3360);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 15U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = (t0 + 6216);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 15U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 3);
    t27 = (t0 + 6088);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_59_2(char *t0)
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

LAB0:    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6280);
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
    t18 = (t0 + 6104);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_60_3(char *t0)
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

LAB0:    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6344);
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
    t18 = (t0 + 6120);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_61_4(char *t0)
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

LAB0:    t1 = (t0 + 5752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6408);
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
    t18 = (t0 + 6136);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000099285957_2725559894_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Cont_58_1,(void *)Cont_59_2,(void *)Cont_60_3,(void *)Cont_61_4};
	xsi_register_didat("work_m_00000000000099285957_2725559894", "isim/alu_tb_isim_beh.exe.sim/work/m_00000000000099285957_2725559894.didat");
	xsi_register_executes(pe);
}
