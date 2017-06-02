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
static int ng7[] = {0, 0, 0, 0};
static int ng8[] = {1, 0};
static int ng9[] = {0, 0};
static int ng10[] = {32, 0};



static void Always_36_0(char *t0)
{
    char t10[16];
    char t70[8];
    char t71[8];
    char t72[8];
    char t73[8];
    char t74[8];
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
    char *t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;

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
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 33);

LAB21:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t70, 0, 8);
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
    t20 = *((unsigned int *)t7);
    t22 = (t18 | t20);
    t24 = (~(t22));
    t25 = (t17 & t24);
    if (t25 != 0)
        goto LAB64;

LAB61:    if (t22 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t70) = 1;

LAB64:    memset(t71, 0, 8);
    t9 = (t70 + 4);
    t26 = *((unsigned int *)t9);
    t27 = (~(t26));
    t28 = *((unsigned int *)t70);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t9) != 0)
        goto LAB67;

LAB68:    t21 = (t71 + 4);
    t31 = *((unsigned int *)t71);
    t33 = *((unsigned int *)t21);
    t36 = (t31 || t33);
    if (t36 > 0)
        goto LAB69;

LAB70:    memcpy(t74, t71, 8);

LAB71:    t81 = (t74 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t74);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB86:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 3360);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t19 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t70, 32, t4, t9, 2, t19, 32, 1);
    t21 = ((char*)((ng8)));
    memset(t71, 0, 8);
    t23 = (t70 + 4);
    t32 = (t21 + 4);
    t11 = *((unsigned int *)t70);
    t12 = *((unsigned int *)t21);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t32);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t32);
    t22 = (t18 | t20);
    t24 = (~(t22));
    t25 = (t17 & t24);
    if (t25 != 0)
        goto LAB90;

LAB87:    if (t22 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t71) = 1;

LAB90:    t35 = (t71 + 4);
    t26 = *((unsigned int *)t35);
    t27 = (~(t26));
    t28 = *((unsigned int *)t71);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB93:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng7)));
    xsi_vlog_unsigned_equal(t10, 33, t4, 33, t7, 32);
    t8 = (t10 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB96:    goto LAB2;

LAB7:    xsi_set_current_line(39, ng0);
    t7 = (t0 + 2000U);
    t8 = *((char **)t7);
    t7 = (t0 + 2160U);
    t9 = *((char **)t7);
    xsi_vlog_unsigned_add(t10, 33, t8, 32, t9, 32);
    t7 = (t0 + 3360);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 33);
    goto LAB21;

LAB9:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = (t0 + 2160U);
    t7 = *((char **)t3);
    xsi_vlog_unsigned_minus(t10, 33, t4, 32, t7, 32);
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 33);
    goto LAB21;

LAB11:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    xsi_vlogtype_unsigned_bit_neg(t10, 33, t4, 32);
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 33);
    goto LAB21;

LAB13:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = (t0 + 2160U);
    t7 = *((char **)t3);
    t11 = 0;

LAB25:    t12 = (t11 < 1);
    if (t12 == 1)
        goto LAB26;

LAB27:    t11 = 1;

LAB28:    t54 = (t11 < 2);
    if (t54 == 1)
        goto LAB29;

LAB34:    t65 = (t0 + 3360);
    xsi_vlogvar_assign_value(t65, t10, 0, 0, 33);
    goto LAB21;

LAB15:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = (t0 + 2160U);
    t7 = *((char **)t3);
    t11 = 0;

LAB38:    t12 = (t11 < 1);
    if (t12 == 1)
        goto LAB39;

LAB40:    t11 = 1;

LAB41:    t50 = (t11 < 2);
    if (t50 == 1)
        goto LAB42;

LAB47:    t69 = (t0 + 3360);
    xsi_vlogvar_assign_value(t69, t10, 0, 0, 33);
    goto LAB21;

LAB17:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = (t0 + 2160U);
    t7 = *((char **)t3);
    t11 = 0;

LAB51:    t12 = (t11 < 1);
    if (t12 == 1)
        goto LAB52;

LAB53:    t11 = 1;

LAB54:    t31 = (t11 < 2);
    if (t31 == 1)
        goto LAB55;

LAB60:    t61 = (t0 + 3360);
    xsi_vlogvar_assign_value(t61, t10, 0, 0, 33);
    goto LAB21;

LAB22:    t29 = (t11 * 8);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t9) = (t30 | t31);
    t32 = (t4 + t29);
    t33 = (t29 + 4);
    t34 = (t4 + t33);
    t35 = (t7 + t29);
    t36 = (t29 + 4);
    t37 = (t7 + t36);
    t38 = *((unsigned int *)t32);
    t39 = (~(t38));
    t40 = *((unsigned int *)t34);
    t41 = (~(t40));
    t42 = *((unsigned int *)t35);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t50 & t48);
    t51 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t51 & t49);
    t52 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t52 & t48);
    t53 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t53 & t49);

LAB24:    t11 = (t11 + 1);
    goto LAB25;

LAB23:    goto LAB24;

LAB26:    t13 = (t11 * 8);
    t3 = (t4 + t13);
    t8 = (t7 + t13);
    t9 = (t10 + t13);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 & t15);
    *((unsigned int *)t9) = t16;
    t17 = (t11 * 8);
    t18 = (t17 + 4);
    t19 = (t4 + t18);
    t20 = (t17 + 4);
    t21 = (t7 + t20);
    t22 = (t17 + 4);
    t23 = (t10 + t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t21);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB22;
    else
        goto LAB23;

LAB29:    t55 = (t11 * 8);
    t56 = (t10 + t55);
    *((unsigned int *)t56) = 0;
    t57 = (t55 + 4);
    t58 = (t10 + t57);
    *((unsigned int *)t58) = 0;
    t59 = (t11 < 1);
    if (t59 == 1)
        goto LAB30;

LAB32:    t62 = (t11 < 1);
    if (t62 == 1)
        goto LAB31;

LAB33:    t11 = (t11 + 1);
    goto LAB28;

LAB30:    t60 = (t55 + 4);
    t61 = (t4 + t60);
    *((unsigned int *)t56) = *((unsigned int *)t61);
    *((unsigned int *)t58) = *((unsigned int *)t61);
    goto LAB33;

LAB31:    t63 = (t55 + 4);
    t64 = (t7 + t63);
    *((unsigned int *)t56) = *((unsigned int *)t64);
    *((unsigned int *)t58) = *((unsigned int *)t64);
    goto LAB33;

LAB35:    t29 = (t11 * 8);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t9) = (t30 | t31);
    t32 = (t4 + t29);
    t33 = (t29 + 4);
    t34 = (t4 + t33);
    t35 = (t7 + t29);
    t36 = (t29 + 4);
    t37 = (t7 + t36);
    t38 = *((unsigned int *)t34);
    t39 = (~(t38));
    t40 = *((unsigned int *)t32);
    t46 = (t40 & t39);
    t41 = *((unsigned int *)t37);
    t42 = (~(t41));
    t43 = *((unsigned int *)t35);
    t47 = (t43 & t42);
    t44 = (~(t46));
    t45 = (~(t47));
    t48 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t48 & t44);
    t49 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t49 & t45);

LAB37:    t11 = (t11 + 1);
    goto LAB38;

LAB36:    goto LAB37;

LAB39:    t13 = (t11 * 8);
    t3 = (t4 + t13);
    t8 = (t7 + t13);
    t9 = (t10 + t13);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = (t11 * 8);
    t18 = (t17 + 4);
    t19 = (t4 + t18);
    t20 = (t17 + 4);
    t21 = (t7 + t20);
    t22 = (t17 + 4);
    t23 = (t10 + t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t21);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB35;
    else
        goto LAB36;

LAB42:    t51 = (t11 * 8);
    t56 = (t10 + t51);
    *((unsigned int *)t56) = 0;
    t52 = (t51 + 4);
    t58 = (t10 + t52);
    *((unsigned int *)t58) = 0;
    t53 = (t11 < 1);
    if (t53 == 1)
        goto LAB43;

LAB45:    t60 = (t11 < 1);
    if (t60 == 1)
        goto LAB44;

LAB46:    t11 = (t11 + 1);
    goto LAB41;

LAB43:    t61 = (t4 + t51);
    t54 = (t51 + 4);
    t64 = (t4 + t54);
    t55 = *((unsigned int *)t61);
    t57 = *((unsigned int *)t64);
    t59 = (t55 | t57);
    *((unsigned int *)t56) = t59;
    *((unsigned int *)t58) = *((unsigned int *)t64);
    goto LAB46;

LAB44:    t65 = (t7 + t51);
    t62 = (t51 + 4);
    t66 = (t7 + t62);
    t63 = *((unsigned int *)t65);
    t67 = *((unsigned int *)t66);
    t68 = (t63 | t67);
    *((unsigned int *)t56) = t68;
    *((unsigned int *)t58) = *((unsigned int *)t66);
    goto LAB46;

LAB48:    t29 = *((unsigned int *)t9);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t9) = (t29 | t30);

LAB50:    t11 = (t11 + 1);
    goto LAB51;

LAB49:    goto LAB50;

LAB52:    t13 = (t11 * 8);
    t3 = (t4 + t13);
    t8 = (t7 + t13);
    t9 = (t10 + t13);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    *((unsigned int *)t9) = t16;
    t17 = (t11 * 8);
    t18 = (t17 + 4);
    t19 = (t4 + t18);
    t20 = (t17 + 4);
    t21 = (t7 + t20);
    t22 = (t17 + 4);
    t23 = (t10 + t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t21);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB48;
    else
        goto LAB49;

LAB55:    t33 = (t11 * 8);
    t32 = (t10 + t33);
    *((unsigned int *)t32) = 0;
    t36 = (t33 + 4);
    t34 = (t10 + t36);
    *((unsigned int *)t34) = 0;
    t38 = (t11 < 1);
    if (t38 == 1)
        goto LAB56;

LAB58:    t43 = (t11 < 1);
    if (t43 == 1)
        goto LAB57;

LAB59:    t11 = (t11 + 1);
    goto LAB54;

LAB56:    t35 = (t4 + t33);
    t39 = (t33 + 4);
    t37 = (t4 + t39);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t37);
    t42 = (t40 | t41);
    *((unsigned int *)t32) = t42;
    *((unsigned int *)t34) = *((unsigned int *)t37);
    goto LAB59;

LAB57:    t56 = (t7 + t33);
    t44 = (t33 + 4);
    t58 = (t7 + t44);
    t45 = *((unsigned int *)t56);
    t48 = *((unsigned int *)t58);
    t49 = (t45 | t48);
    *((unsigned int *)t32) = t49;
    *((unsigned int *)t34) = *((unsigned int *)t58);
    goto LAB59;

LAB63:    t8 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t71) = 1;
    goto LAB68;

LAB67:    t19 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB68;

LAB69:    t23 = (t0 + 2000U);
    t32 = *((char **)t23);
    t23 = (t0 + 2160U);
    t34 = *((char **)t23);
    memset(t72, 0, 8);
    t23 = (t32 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB73;

LAB72:    t35 = (t34 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB73;

LAB76:    if (*((unsigned int *)t32) < *((unsigned int *)t34))
        goto LAB74;

LAB75:    memset(t73, 0, 8);
    t56 = (t72 + 4);
    t38 = *((unsigned int *)t56);
    t39 = (~(t38));
    t40 = *((unsigned int *)t72);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t56) != 0)
        goto LAB79;

LAB80:    t43 = *((unsigned int *)t71);
    t44 = *((unsigned int *)t73);
    t45 = (t43 & t44);
    *((unsigned int *)t74) = t45;
    t61 = (t71 + 4);
    t64 = (t73 + 4);
    t65 = (t74 + 4);
    t48 = *((unsigned int *)t61);
    t49 = *((unsigned int *)t64);
    t50 = (t48 | t49);
    *((unsigned int *)t65) = t50;
    t51 = *((unsigned int *)t65);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB81;

LAB82:
LAB83:    goto LAB71;

LAB73:    t37 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB75;

LAB74:    *((unsigned int *)t72) = 1;
    goto LAB75;

LAB77:    *((unsigned int *)t73) = 1;
    goto LAB80;

LAB79:    t58 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB80;

LAB81:    t53 = *((unsigned int *)t74);
    t54 = *((unsigned int *)t65);
    *((unsigned int *)t74) = (t53 | t54);
    t66 = (t71 + 4);
    t69 = (t73 + 4);
    t55 = *((unsigned int *)t71);
    t57 = (~(t55));
    t59 = *((unsigned int *)t66);
    t60 = (~(t59));
    t62 = *((unsigned int *)t73);
    t63 = (~(t62));
    t67 = *((unsigned int *)t69);
    t68 = (~(t67));
    t6 = (t57 & t60);
    t46 = (t63 & t68);
    t75 = (~(t6));
    t76 = (~(t46));
    t77 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t77 & t75);
    t78 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t78 & t76);
    t79 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t79 & t75);
    t80 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t80 & t76);
    goto LAB83;

LAB84:    xsi_set_current_line(48, ng0);
    t87 = ((char*)((ng8)));
    t88 = (t0 + 3840);
    xsi_vlogvar_assign_value(t88, t87, 0, 0, 1);
    goto LAB86;

LAB89:    t34 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(51, ng0);
    t37 = ((char*)((ng8)));
    t56 = (t0 + 3520);
    xsi_vlogvar_assign_value(t56, t37, 0, 0, 1);
    goto LAB93;

LAB94:    xsi_set_current_line(54, ng0);
    t9 = ((char*)((ng8)));
    t19 = (t0 + 3680);
    xsi_vlogvar_assign_value(t19, t9, 0, 0, 1);
    goto LAB96;

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
    char *t19;

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
    *((unsigned int *)t3) = (t12 & 4294967295U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 4294967295U);
    t14 = (t0 + 6216);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t3, 8);
    xsi_driver_vfirst_trans(t14, 0, 31);
    t19 = (t0 + 6088);
    *((int *)t19) = 1;

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
	xsi_register_didat("work_m_00000000000099285957_2725559894", "isim/MIPS_tb_isim_beh.exe.sim/work/m_00000000000099285957_2725559894.didat");
	xsi_register_executes(pe);
}
