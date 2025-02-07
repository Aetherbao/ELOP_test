/*
 * File: ASW_SigIn.h
 *
 * Code generated for Simulink model 'ASW_SigIn'.
 *
 * Model version                  : 6.141
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Jan 14 13:36:13 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ASW_SigIn_h_
#define RTW_HEADER_ASW_SigIn_h_
#ifndef ASW_SigIn_COMMON_INCLUDES_
#define ASW_SigIn_COMMON_INCLUDES_
#include "../ASW_share/rtwtypes.h"
#endif                                 /* ASW_SigIn_COMMON_INCLUDES_ */

//#include "ASW_SigIn_types.h"
#include "../ASW_share/custom_type_definition.h"
#include "../ASW_share/motor_control_interface.h"
#include <string.h>

/* Block signals (default storage) */
typedef struct {
  dt_Standardize_u16p15b0 DataTypeConversion;/* '<S36>/Data Type Conversion' */
  dt_Standardize_u16p15b0 DataTypeConversion_md0g;/* '<S40>/Data Type Conversion' */
  dt_Standardize_u16p15b0 DataTypeConversion_ikt4;/* '<S44>/Data Type Conversion' */
} B_ASW_SigIn;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint16 TappedDelay_DWORK1[39];       /* '<S38>/Tapped Delay' */
  uint16 TappedDelay_DWORK1_olz3[39];  /* '<S42>/Tapped Delay' */
  uint16 TappedDelay_DWORK1_nx03[39];  /* '<S46>/Tapped Delay' */
} DW_ASW_SigIn;

/* Real-time Model Data Structure */
struct tag_RTM_ASW_SigIn {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8 TID[3];
    } TaskCounters;
  } Timing;
};

/* Block signals (default storage) */
extern B_ASW_SigIn ASW_SigIn_B;

/* Block states (default storage) */
extern DW_ASW_SigIn ASW_SigIn_DW;

/* External data declarations for dependent source files */
extern const BUS_SIGIN_SLW_TASK_IN ASW_SigIn_rtZBUS_SIGIN_SLW_TASK;/* BUS_SIGIN_SLW_TASK_IN ground */
extern const BUS_SIGIN_MED_TASK_OUT ASW_SigIn_rtZBUS_SIGIN_MED_TASK_OUT;/* BUS_SIGIN_MED_TASK_OUT ground */
extern const BUS_SIGIN_SLW_TASK_OUT ASW_SigIn_rtZBUS_SIGIN_SLW_TASK_OUT;/* BUS_SIGIN_SLW_TASK_OUT ground */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern BUS_SIGIN_MED_TASK_IN busSigIn_MedTaskIn;/* '<Root>/busSigIn_MedTaskIn' */
extern BUS_SIGIN_SLW_TASK_IN busSigIn_SlwTaskIn;/* '<Root>/busSigIn_SlwTaskIn' */
extern BUS_SIGIN_SLW_TASK_OUT busSigIn_SlwTaskOut;/* '<S48>/Bus Creator1' */
extern BUS_SIGIN_MED_TASK_OUT busSigIn_MedTaskOut;/* '<S29>/Bus Creator1' */

/* Model entry point functions */
extern void ASW_SigIn_Init(void);
extern void ASW_SigIn_step(void);
extern void SigIn_MedTask(void);
extern void SigIn_SlwTask(void);

/* Real-time Model object */
extern RT_MODEL_ASW_SigIn *const ASW_SigIn_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ASW_SigIn'
 * '<S1>'   : 'ASW_SigIn/SigIn_MedTask'
 * '<S2>'   : 'ASW_SigIn/SigIn_SlwTask'
 * '<S3>'   : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc'
 * '<S4>'   : 'ASW_SigIn/SigIn_MedTask/vrs_ElecAgCalc'
 * '<S5>'   : 'ASW_SigIn/SigIn_MedTask/vrs_MedTaskIn'
 * '<S6>'   : 'ASW_SigIn/SigIn_MedTask/vrs_MedTaskOut'
 * '<S7>'   : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/lib_Cnvr_0'
 * '<S8>'   : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/lib_Cnvr_1'
 * '<S9>'   : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/lib_Cnvr_2'
 * '<S10>'  : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/lib_Cnvr_3'
 * '<S11>'  : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/sas_modeDflCs'
 * '<S12>'  : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/sas_modeSensPhCs'
 * '<S13>'  : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/sas_modeSngShtGndCs'
 * '<S14>'  : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/sas_modeTwnShtPhCs'
 * '<S15>'  : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/sas_modeSngShtGndCs/sss_modeSngShtGndCs'
 * '<S16>'  : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/sas_modeSngShtGndCs/sss_modeSngShtGndCs/sas_numSect1'
 * '<S17>'  : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/sas_modeSngShtGndCs/sss_modeSngShtGndCs/sas_numSect2'
 * '<S18>'  : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/sas_modeSngShtGndCs/sss_modeSngShtGndCs/sas_numSect3'
 * '<S19>'  : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/sas_modeSngShtGndCs/sss_modeSngShtGndCs/sas_numSect4'
 * '<S20>'  : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/sas_modeSngShtGndCs/sss_modeSngShtGndCs/sas_numSect5'
 * '<S21>'  : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/sas_modeSngShtGndCs/sss_modeSngShtGndCs/sas_numSect6'
 * '<S22>'  : 'ASW_SigIn/SigIn_MedTask/rss_ActPhCurrCalc/sas_modeSngShtGndCs/sss_modeSngShtGndCs/sas_numSectDfl'
 * '<S23>'  : 'ASW_SigIn/SigIn_MedTask/vrs_ElecAgCalc/rss_ElecAgCalcNeed'
 * '<S24>'  : 'ASW_SigIn/SigIn_MedTask/vrs_ElecAgCalc/rss_ElecAgCalcNeed/lib_Cnvr_0'
 * '<S25>'  : 'ASW_SigIn/SigIn_MedTask/vrs_ElecAgCalc/rss_ElecAgCalcNeed/lib_numPPNum_0'
 * '<S26>'  : 'ASW_SigIn/SigIn_MedTask/vrs_ElecAgCalc/rss_ElecAgCalcNeed/lib_numPPNum_0/vss_SaturationActivation'
 * '<S27>'  : 'ASW_SigIn/SigIn_MedTask/vrs_ElecAgCalc/rss_ElecAgCalcNeed/lib_numPPNum_0/vss_SaturationActivation/vss_SaturationRequired'
 * '<S28>'  : 'ASW_SigIn/SigIn_MedTask/vrs_MedTaskIn/sss_MedTaskInSens'
 * '<S29>'  : 'ASW_SigIn/SigIn_MedTask/vrs_MedTaskOut/sss_MedTaskOutSens'
 * '<S30>'  : 'ASW_SigIn/SigIn_SlwTask/rss_CtlBrdVltgCalc'
 * '<S31>'  : 'ASW_SigIn/SigIn_SlwTask/rss_GDVltgCalc'
 * '<S32>'  : 'ASW_SigIn/SigIn_SlwTask/rss_SplyVltgCalc'
 * '<S33>'  : 'ASW_SigIn/SigIn_SlwTask/rss_Temp'
 * '<S34>'  : 'ASW_SigIn/SigIn_SlwTask/sss_SlwTaskIn'
 * '<S35>'  : 'ASW_SigIn/SigIn_SlwTask/vrs_SlwTaskOut'
 * '<S36>'  : 'ASW_SigIn/SigIn_SlwTask/rss_CtlBrdVltgCalc/lib_Cnvr_0'
 * '<S37>'  : 'ASW_SigIn/SigIn_SlwTask/rss_CtlBrdVltgCalc/lib_Cnvr_1'
 * '<S38>'  : 'ASW_SigIn/SigIn_SlwTask/rss_CtlBrdVltgCalc/lib_MAF_0'
 * '<S39>'  : 'ASW_SigIn/SigIn_SlwTask/rss_CtlBrdVltgCalc/lib_MAF_0/lib_Conversion_1'
 * '<S40>'  : 'ASW_SigIn/SigIn_SlwTask/rss_GDVltgCalc/lib_Cnvr_1'
 * '<S41>'  : 'ASW_SigIn/SigIn_SlwTask/rss_GDVltgCalc/lib_Cnvr_2'
 * '<S42>'  : 'ASW_SigIn/SigIn_SlwTask/rss_GDVltgCalc/lib_MAF_0'
 * '<S43>'  : 'ASW_SigIn/SigIn_SlwTask/rss_GDVltgCalc/lib_MAF_0/lib_Conversion_1'
 * '<S44>'  : 'ASW_SigIn/SigIn_SlwTask/rss_SplyVltgCalc/lib_Cnvr_1'
 * '<S45>'  : 'ASW_SigIn/SigIn_SlwTask/rss_SplyVltgCalc/lib_Cnvr_2'
 * '<S46>'  : 'ASW_SigIn/SigIn_SlwTask/rss_SplyVltgCalc/lib_MAF_0'
 * '<S47>'  : 'ASW_SigIn/SigIn_SlwTask/rss_SplyVltgCalc/lib_MAF_0/lib_Conversion_1'
 * '<S48>'  : 'ASW_SigIn/SigIn_SlwTask/vrs_SlwTaskOut/sss_SlwTaskOutSenl'
 */
#endif                                 /* RTW_HEADER_ASW_SigIn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
