/*
 * File: ASW_PhVltgGen_private.h
 *
 * Code generated for Simulink model 'ASW_PhVltgGen'.
 *
 * Model version                  : 6.197
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Jan 14 13:34:34 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ASW_PhVltgGen_private_h_
#define RTW_HEADER_ASW_PhVltgGen_private_h_
#include "../ASW_share/rtwtypes.h"
#include "../ASW_share/multiword_types.h"
//#include "ASW_PhVltgGen_types.h"
#include "ASW_PhVltgGen.h"

/* Includes for objects with custom storage classes */
#include "../ASW_par/motor_control_param.h"
#include "../ASW_par/motor_param.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
//#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

extern const sint16 rtCP_pooled_Z4olCuf818oG[1024];
extern const sint16 rtCP_pooled_NsN21G7B7MPk[4095];
extern const uint16 rtCP_pooled_rp0I2sPNEO4V[512];

#define rtCP_Constant_Value_k3nb       rtCP_pooled_Z4olCuf818oG  /* Computed Parameter: rtCP_Constant_Value_k3nb
                                                                  * Referenced by: '<S174>/Constant'
                                                                  */
#define rtCP_Constant1_Value           rtCP_pooled_Z4olCuf818oG  /* Computed Parameter: rtCP_Constant1_Value
                                                                  * Referenced by: '<S177>/Constant1'
                                                                  */
#define rtCP_Constant_Value_c1xf       rtCP_pooled_Z4olCuf818oG  /* Computed Parameter: rtCP_Constant_Value_c1xf
                                                                  * Referenced by: '<S223>/Constant'
                                                                  */
#define rtCP_Constant1_Value_dstd      rtCP_pooled_Z4olCuf818oG  /* Computed Parameter: rtCP_Constant1_Value_dstd
                                                                  * Referenced by: '<S226>/Constant1'
                                                                  */
#define rtCP_Constant_Value_o231       rtCP_pooled_Z4olCuf818oG  /* Computed Parameter: rtCP_Constant_Value_o231
                                                                  * Referenced by: '<S326>/Constant'
                                                                  */
#define rtCP_Constant1_Value_p1ac      rtCP_pooled_Z4olCuf818oG  /* Computed Parameter: rtCP_Constant1_Value_p1ac
                                                                  * Referenced by: '<S329>/Constant1'
                                                                  */
#define rtCP_Constant_Value_lajm       rtCP_pooled_Z4olCuf818oG  /* Computed Parameter: rtCP_Constant_Value_lajm
                                                                  * Referenced by: '<S336>/Constant'
                                                                  */
#define rtCP_Constant1_Value_hq2b      rtCP_pooled_Z4olCuf818oG  /* Computed Parameter: rtCP_Constant1_Value_hq2b
                                                                  * Referenced by: '<S339>/Constant1'
                                                                  */
#define rtCP_lb_parAsinFunLkt_Value    rtCP_pooled_NsN21G7B7MPk  /* Computed Parameter: rtCP_lb_parAsinFunLkt_Value
                                                                  * Referenced by: '<S76>/lb_parAsinFunLkt'
                                                                  */
#define rtCP_Constant3_Value_VLTG           rtCP_pooled_rp0I2sPNEO4V  /* Computed Parameter: rtCP_Constant3_Value
                                                                  * Referenced by: '<S70>/Constant3'
                                                                  */
#define rtCP_Constant3_Value_n3oq      rtCP_pooled_rp0I2sPNEO4V  /* Computed Parameter: rtCP_Constant3_Value_n3oq
                                                                  * Referenced by: '<S151>/Constant3'
                                                                  */

extern void PhVltgGen_MedTask_Init(void);
extern void PhVltgGen_MedTask(void);

#endif                                 /* RTW_HEADER_ASW_PhVltgGen_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
