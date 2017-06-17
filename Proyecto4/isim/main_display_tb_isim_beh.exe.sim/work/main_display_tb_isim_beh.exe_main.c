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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000599290728_2215787133_init();
    work_m_00000000003034182052_3686629048_init();
    work_m_00000000001692934654_0062170726_init();
    work_m_00000000000739280113_0286164271_init();
    work_m_00000000003216062455_4228817411_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003216062455_4228817411");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
