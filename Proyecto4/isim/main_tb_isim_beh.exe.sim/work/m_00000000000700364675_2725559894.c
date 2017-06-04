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
    char t11[16];
    char t71[8];
    char t72[8];
    char t73[8];
    char t74[8];
    char t75[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;

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
    memset(t71, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t7);
    t23 = (t19 | t21);
    t25 = (~(t23));
    t26 = (t18 & t25);
    if (t26 != 0)
        goto LAB77;

LAB74:    if (t23 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t71) = 1;

LAB77:    memset(t72, 0, 8);
    t9 = (t71 + 4);
    t27 = *((unsigned int *)t9);
    t28 = (~(t27));
    t29 = *((unsigned int *)t71);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t9) != 0)
        goto LAB80;

LAB81:    t22 = (t72 + 4);
    t32 = *((unsigned int *)t72);
    t34 = *((unsigned int *)t22);
    t37 = (t32 || t34);
    if (t37 > 0)
        goto LAB82;

LAB83:    memcpy(t75, t72, 8);

LAB84:    t82 = (t75 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t75);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB99:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 3360);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t20 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t71, 32, t4, t9, 2, t20, 32, 1);
    t22 = ((char*)((ng8)));
    memset(t72, 0, 8);
    t24 = (t71 + 4);
    t33 = (t22 + 4);
    t12 = *((unsigned int *)t71);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t24);
    t16 = *((unsigned int *)t33);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t24);
    t21 = *((unsigned int *)t33);
    t23 = (t19 | t21);
    t25 = (~(t23));
    t26 = (t18 & t25);
    if (t26 != 0)
        goto LAB103;

LAB100:    if (t23 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t72) = 1;

LAB103:    t36 = (t72 + 4);
    t27 = *((unsigned int *)t36);
    t28 = (~(t27));
    t29 = *((unsigned int *)t72);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB106:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng7)));
    xsi_vlog_unsigned_equal(t10, 33, t4, 33, t7, 32);
    t8 = (t10 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB109:    goto LAB2;

LAB7:    xsi_set_current_line(39, ng0);
    t7 = (t0 + 2160U);
    t8 = *((char **)t7);
    t7 = (t0 + 2000U);
    t9 = *((char **)t7);
    xsi_vlog_unsigned_add(t10, 33, t8, 32, t9, 32);
    t7 = (t0 + 3360);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 33);
    goto LAB21;

LAB9:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 2160U);
    t4 = *((char **)t3);
    t3 = (t0 + 2000U);
    t7 = *((char **)t3);
    xsi_vlog_unsigned_minus(t10, 33, t4, 32, t7, 32);
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 33);
    goto LAB21;

LAB11:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 2160U);
    t4 = *((char **)t3);
    t3 = (t0 + 2000U);
    t7 = *((char **)t3);
    t12 = 0;

LAB25:    t13 = (t12 < 1);
    if (t13 == 1)
        goto LAB26;

LAB27:    t12 = 1;

LAB28:    t51 = (t12 < 2);
    if (t51 == 1)
        goto LAB29;

LAB34:    xsi_vlogtype_unsigned_bit_neg(t10, 33, t11, 33);
    t70 = (t0 + 3360);
    xsi_vlogvar_assign_value(t70, t10, 0, 0, 33);
    goto LAB21;

LAB13:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 2160U);
    t4 = *((char **)t3);
    t3 = (t0 + 2000U);
    t7 = *((char **)t3);
    t12 = 0;

LAB38:    t13 = (t12 < 1);
    if (t13 == 1)
        goto LAB39;

LAB40:    t12 = 1;

LAB41:    t58 = (t12 < 2);
    if (t58 == 1)
        goto LAB42;

LAB47:    t64 = (t0 + 3360);
    xsi_vlogvar_assign_value(t64, t10, 0, 0, 33);
    goto LAB21;

LAB15:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 2160U);
    t4 = *((char **)t3);
    t3 = (t0 + 2000U);
    t7 = *((char **)t3);
    t12 = 0;

LAB51:    t13 = (t12 < 1);
    if (t13 == 1)
        goto LAB52;

LAB53:    t12 = 1;

LAB54:    t51 = (t12 < 2);
    if (t51 == 1)
        goto LAB55;

LAB60:    t70 = (t0 + 3360);
    xsi_vlogvar_assign_value(t70, t10, 0, 0, 33);
    goto LAB21;

LAB17:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 2160U);
    t4 = *((char **)t3);
    t3 = (t0 + 2000U);
    t7 = *((char **)t3);
    t12 = 0;

LAB64:    t13 = (t12 < 1);
    if (t13 == 1)
        goto LAB65;

LAB66:    t12 = 1;

LAB67:    t32 = (t12 < 2);
    if (t32 == 1)
        goto LAB68;

LAB73:    t57 = (t0 + 3360);
    xsi_vlogvar_assign_value(t57, t10, 0, 0, 33);
    goto LAB21;

LAB22:    t30 = (t12 * 8);
    t31 = *((unsigned int *)t9);
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t9) = (t31 | t32);
    t33 = (t4 + t30);
    t34 = (t30 + 4);
    t35 = (t4 + t34);
    t36 = (t7 + t30);
    t37 = (t30 + 4);
    t38 = (t7 + t37);
    t39 = *((unsigned int *)t35);
    t40 = (~(t39));
    t41 = *((unsigned int *)t33);
    t42 = (t41 & t40);
    t43 = *((unsigned int *)t38);
    t44 = (~(t43));
    t45 = *((unsigned int *)t36);
    t46 = (t45 & t44);
    t47 = (~(t42));
    t48 = (~(t46));
    t49 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t49 & t47);
    t50 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t50 & t48);

LAB24:    t12 = (t12 + 1);
    goto LAB25;

LAB23:    goto LAB24;

LAB26:    t14 = (t12 * 8);
    t3 = (t4 + t14);
    t8 = (t7 + t14);
    t9 = (t11 + t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t18 = (t12 * 8);
    t19 = (t18 + 4);
    t20 = (t4 + t19);
    t21 = (t18 + 4);
    t22 = (t7 + t21);
    t23 = (t18 + 4);
    t24 = (t11 + t23);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t22);
    t27 = (t25 | t26);
    *((unsigned int *)t24) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 != 0);
    if (t29 == 1)
        goto LAB22;
    else
        goto LAB23;

LAB29:    t52 = (t12 * 8);
    t53 = (t11 + t52);
    *((unsigned int *)t53) = 0;
    t54 = (t52 + 4);
    t55 = (t11 + t54);
    *((unsigned int *)t55) = 0;
    t56 = (t12 < 1);
    if (t56 == 1)
        goto LAB30;

LAB32:    t63 = (t12 < 1);
    if (t63 == 1)
        goto LAB31;

LAB33:    t12 = (t12 + 1);
    goto LAB28;

LAB30:    t57 = (t4 + t52);
    t58 = (t52 + 4);
    t59 = (t4 + t58);
    t60 = *((unsigned int *)t57);
    t61 = *((unsigned int *)t59);
    t62 = (t60 | t61);
    *((unsigned int *)t53) = t62;
    *((unsigned int *)t55) = *((unsigned int *)t59);
    goto LAB33;

LAB31:    t64 = (t7 + t52);
    t65 = (t52 + 4);
    t66 = (t7 + t65);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t66);
    t69 = (t67 | t68);
    *((unsigned int *)t53) = t69;
    *((unsigned int *)t55) = *((unsigned int *)t66);
    goto LAB33;

LAB35:    t30 = (t12 * 8);
    t31 = *((unsigned int *)t9);
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t9) = (t31 | t32);
    t33 = (t4 + t30);
    t34 = (t30 + 4);
    t35 = (t4 + t34);
    t36 = (t7 + t30);
    t37 = (t30 + 4);
    t38 = (t7 + t37);
    t39 = *((unsigned int *)t33);
    t40 = (~(t39));
    t41 = *((unsigned int *)t35);
    t43 = (~(t41));
    t44 = *((unsigned int *)t36);
    t45 = (~(t44));
    t47 = *((unsigned int *)t38);
    t48 = (~(t47));
    t42 = (t40 & t43);
    t46 = (t45 & t48);
    t49 = (~(t42));
    t50 = (~(t46));
    t51 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t51 & t49);
    t52 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t52 & t50);
    t54 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t54 & t49);
    t56 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t56 & t50);

LAB37:    t12 = (t12 + 1);
    goto LAB38;

LAB36:    goto LAB37;

LAB39:    t14 = (t12 * 8);
    t3 = (t4 + t14);
    t8 = (t7 + t14);
    t9 = (t10 + t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 & t16);
    *((unsigned int *)t9) = t17;
    t18 = (t12 * 8);
    t19 = (t18 + 4);
    t20 = (t4 + t19);
    t21 = (t18 + 4);
    t22 = (t7 + t21);
    t23 = (t18 + 4);
    t24 = (t10 + t23);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t22);
    t27 = (t25 | t26);
    *((unsigned int *)t24) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 != 0);
    if (t29 == 1)
        goto LAB35;
    else
        goto LAB36;

LAB42:    t60 = (t12 * 8);
    t53 = (t10 + t60);
    *((unsigned int *)t53) = 0;
    t61 = (t60 + 4);
    t55 = (t10 + t61);
    *((unsigned int *)t55) = 0;
    t62 = (t12 < 1);
    if (t62 == 1)
        goto LAB43;

LAB45:    t65 = (t12 < 1);
    if (t65 == 1)
        goto LAB44;

LAB46:    t12 = (t12 + 1);
    goto LAB41;

LAB43:    t63 = (t60 + 4);
    t57 = (t4 + t63);
    *((unsigned int *)t53) = *((unsigned int *)t57);
    *((unsigned int *)t55) = *((unsigned int *)t57);
    goto LAB46;

LAB44:    t67 = (t60 + 4);
    t59 = (t7 + t67);
    *((unsigned int *)t53) = *((unsigned int *)t59);
    *((unsigned int *)t55) = *((unsigned int *)t59);
    goto LAB46;

LAB48:    t30 = (t12 * 8);
    t31 = *((unsigned int *)t9);
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t9) = (t31 | t32);
    t33 = (t4 + t30);
    t34 = (t30 + 4);
    t35 = (t4 + t34);
    t36 = (t7 + t30);
    t37 = (t30 + 4);
    t38 = (t7 + t37);
    t39 = *((unsigned int *)t35);
    t40 = (~(t39));
    t41 = *((unsigned int *)t33);
    t42 = (t41 & t40);
    t43 = *((unsigned int *)t38);
    t44 = (~(t43));
    t45 = *((unsigned int *)t36);
    t46 = (t45 & t44);
    t47 = (~(t42));
    t48 = (~(t46));
    t49 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t49 & t47);
    t50 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t50 & t48);

LAB50:    t12 = (t12 + 1);
    goto LAB51;

LAB49:    goto LAB50;

LAB52:    t14 = (t12 * 8);
    t3 = (t4 + t14);
    t8 = (t7 + t14);
    t9 = (t10 + t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t18 = (t12 * 8);
    t19 = (t18 + 4);
    t20 = (t4 + t19);
    t21 = (t18 + 4);
    t22 = (t7 + t21);
    t23 = (t18 + 4);
    t24 = (t10 + t23);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t22);
    t27 = (t25 | t26);
    *((unsigned int *)t24) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 != 0);
    if (t29 == 1)
        goto LAB48;
    else
        goto LAB49;

LAB55:    t52 = (t12 * 8);
    t53 = (t10 + t52);
    *((unsigned int *)t53) = 0;
    t54 = (t52 + 4);
    t55 = (t10 + t54);
    *((unsigned int *)t55) = 0;
    t56 = (t12 < 1);
    if (t56 == 1)
        goto LAB56;

LAB58:    t63 = (t12 < 1);
    if (t63 == 1)
        goto LAB57;

LAB59:    t12 = (t12 + 1);
    goto LAB54;

LAB56:    t57 = (t4 + t52);
    t58 = (t52 + 4);
    t59 = (t4 + t58);
    t60 = *((unsigned int *)t57);
    t61 = *((unsigned int *)t59);
    t62 = (t60 | t61);
    *((unsigned int *)t53) = t62;
    *((unsigned int *)t55) = *((unsigned int *)t59);
    goto LAB59;

LAB57:    t64 = (t7 + t52);
    t65 = (t52 + 4);
    t66 = (t7 + t65);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t66);
    t69 = (t67 | t68);
    *((unsigned int *)t53) = t69;
    *((unsigned int *)t55) = *((unsigned int *)t66);
    goto LAB59;

LAB61:    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t9) = (t30 | t31);

LAB63:    t12 = (t12 + 1);
    goto LAB64;

LAB62:    goto LAB63;

LAB65:    t14 = (t12 * 8);
    t3 = (t4 + t14);
    t8 = (t7 + t14);
    t9 = (t10 + t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    *((unsigned int *)t9) = t17;
    t18 = (t12 * 8);
    t19 = (t18 + 4);
    t20 = (t4 + t19);
    t21 = (t18 + 4);
    t22 = (t7 + t21);
    t23 = (t18 + 4);
    t24 = (t10 + t23);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t22);
    t27 = (t25 | t26);
    *((unsigned int *)t24) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 != 0);
    if (t29 == 1)
        goto LAB61;
    else
        goto LAB62;

LAB68:    t34 = (t12 * 8);
    t33 = (t10 + t34);
    *((unsigned int *)t33) = 0;
    t37 = (t34 + 4);
    t35 = (t10 + t37);
    *((unsigned int *)t35) = 0;
    t39 = (t12 < 1);
    if (t39 == 1)
        goto LAB69;

LAB71:    t45 = (t12 < 1);
    if (t45 == 1)
        goto LAB70;

LAB72:    t12 = (t12 + 1);
    goto LAB67;

LAB69:    t36 = (t4 + t34);
    t40 = (t34 + 4);
    t38 = (t4 + t40);
    t41 = *((unsigned int *)t36);
    t43 = *((unsigned int *)t38);
    t44 = (t41 | t43);
    *((unsigned int *)t33) = t44;
    *((unsigned int *)t35) = *((unsigned int *)t38);
    goto LAB72;

LAB70:    t53 = (t7 + t34);
    t47 = (t34 + 4);
    t55 = (t7 + t47);
    t48 = *((unsigned int *)t53);
    t49 = *((unsigned int *)t55);
    t50 = (t48 | t49);
    *((unsigned int *)t33) = t50;
    *((unsigned int *)t35) = *((unsigned int *)t55);
    goto LAB72;

LAB76:    t8 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB77;

LAB78:    *((unsigned int *)t72) = 1;
    goto LAB81;

LAB80:    t20 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB81;

LAB82:    t24 = (t0 + 2160U);
    t33 = *((char **)t24);
    t24 = (t0 + 2000U);
    t35 = *((char **)t24);
    memset(t73, 0, 8);
    t24 = (t33 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB86;

LAB85:    t36 = (t35 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB86;

LAB89:    if (*((unsigned int *)t33) < *((unsigned int *)t35))
        goto LAB87;

LAB88:    memset(t74, 0, 8);
    t53 = (t73 + 4);
    t39 = *((unsigned int *)t53);
    t40 = (~(t39));
    t41 = *((unsigned int *)t73);
    t43 = (t41 & t40);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t53) != 0)
        goto LAB92;

LAB93:    t45 = *((unsigned int *)t72);
    t47 = *((unsigned int *)t74);
    t48 = (t45 & t47);
    *((unsigned int *)t75) = t48;
    t57 = (t72 + 4);
    t59 = (t74 + 4);
    t64 = (t75 + 4);
    t49 = *((unsigned int *)t57);
    t50 = *((unsigned int *)t59);
    t51 = (t49 | t50);
    *((unsigned int *)t64) = t51;
    t52 = *((unsigned int *)t64);
    t54 = (t52 != 0);
    if (t54 == 1)
        goto LAB94;

LAB95:
LAB96:    goto LAB84;

LAB86:    t38 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB88;

LAB87:    *((unsigned int *)t73) = 1;
    goto LAB88;

LAB90:    *((unsigned int *)t74) = 1;
    goto LAB93;

LAB92:    t55 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB93;

LAB94:    t56 = *((unsigned int *)t75);
    t58 = *((unsigned int *)t64);
    *((unsigned int *)t75) = (t56 | t58);
    t66 = (t72 + 4);
    t70 = (t74 + 4);
    t60 = *((unsigned int *)t72);
    t61 = (~(t60));
    t62 = *((unsigned int *)t66);
    t63 = (~(t62));
    t65 = *((unsigned int *)t74);
    t67 = (~(t65));
    t68 = *((unsigned int *)t70);
    t69 = (~(t68));
    t6 = (t61 & t63);
    t42 = (t67 & t69);
    t76 = (~(t6));
    t77 = (~(t42));
    t78 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t78 & t76);
    t79 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t79 & t77);
    t80 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t80 & t76);
    t81 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t81 & t77);
    goto LAB96;

LAB97:    xsi_set_current_line(48, ng0);
    t88 = ((char*)((ng8)));
    t89 = (t0 + 3840);
    xsi_vlogvar_assign_value(t89, t88, 0, 0, 1);
    goto LAB99;

LAB102:    t35 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB103;

LAB104:    xsi_set_current_line(51, ng0);
    t38 = ((char*)((ng8)));
    t53 = (t0 + 3520);
    xsi_vlogvar_assign_value(t53, t38, 0, 0, 1);
    goto LAB106;

LAB107:    xsi_set_current_line(54, ng0);
    t9 = ((char*)((ng8)));
    t20 = (t0 + 3680);
    xsi_vlogvar_assign_value(t20, t9, 0, 0, 1);
    goto LAB109;

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


extern void work_m_00000000000700364675_2725559894_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Cont_58_1,(void *)Cont_59_2,(void *)Cont_60_3,(void *)Cont_61_4};
	xsi_register_didat("work_m_00000000000700364675_2725559894", "isim/main_tb_isim_beh.exe.sim/work/m_00000000000700364675_2725559894.didat");
	xsi_register_executes(pe);
}
