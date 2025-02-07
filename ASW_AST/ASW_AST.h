/*
 * File: ASW_AST.h
 *
 * Code generated for Simulink model 'ASW_AST'.
 *
 * Model version                  : 6.225
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Jan 14 13:33:06 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ASW_AST_h_
#define RTW_HEADER_ASW_AST_h_
#ifndef ASW_AST_COMMON_INCLUDES_
#define ASW_AST_COMMON_INCLUDES_
#include "../ASW_share/rtwtypes.h"
#endif                                 /* ASW_AST_COMMON_INCLUDES_ */

#include "../ASW_share/custom_type_definition.h"
#include "../ASW_share/motor_control_interface.h"
#include <string.h>

/* Block signals (default storage) */
typedef struct {
  dt_RadAng_u16r15b0 u16_phiSensElecAgDvt;/* '<S138>/sfc_SensAgCalibSTM' */
  dt_RadAng_u16r15b0 u16_phiAlPhElecAg;/* '<S138>/sfc_SensAgCalibSTM' */
  dt_RadAng_u16r15b0 u16_phiBePhElecAg;/* '<S138>/sfc_SensAgCalibSTM' */
  dt_Standardize_s16p15b0 Saturation4; /* '<S5>/Saturation4' */
  dt_Standardize_s16p15b0 Merge;       /* '<S13>/Merge' */
  dt_Standardize_s16p15b0 s16_trqPosSCDCalibRefTq;/* '<S138>/sfc_SensAgCalibSTM' */
  dt_Standardize_s16p15b0 s16_nOpnLpRefElecSpd;/* '<S79>/sfc_OpnLpRefElecSpdConf' */
  ENM_AG_SENS_CALIB_STATUS enm_stPosSCDCalibSt;/* '<S138>/sfc_SensAgCalibSTM' */
} B_ASW_AST;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  sint16 TappedDelay_DWORK1_msrl[39];  /* '<S74>/Tapped Delay' */
  sint16 TappedDelay_DWORK1[19];       /* '<S14>/Tapped Delay' */
  sint32 UnitDelay_DSTATE;             /* '<S51>/Unit Delay' */
  struct {
    uint_T UnitDelay1_DSTATE_hx0c:1;   /* '<S102>/Unit Delay1' */
    uint_T UnitDelay1_DSTATE_k25k:1;   /* '<S113>/Unit Delay1' */
    uint_T UnitDelay1_DSTATE_hfoe:1;   /* '<S149>/Unit Delay1' */
  } bitsForTID1;

  dt_Standardize_s16p15b0 UnitDelay1_DSTATE;/* '<S79>/Unit Delay1' */
  dt_Standardize_s16p15b0 UnitDelay_DSTATE_m2qg;/* '<S102>/Unit Delay' */
  dt_Standardize_s16p15b0 UnitDelay2_DSTATE;/* '<S79>/Unit Delay2' */
  dt_Standardize_s16p15b0 UnitDelay_DSTATE_ozdy;/* '<S113>/Unit Delay' */
  dt_Standardize_s16p15b0 UnitDelay_DSTATE_aj2h;/* '<S149>/Unit Delay' */
  dt_RadAng_u16r15b0 UnitDelay1_DSTATE_degb;/* '<S136>/Unit Delay1' */
  dt_RadAng_u16r15b0 UnitDelay2_DSTATE_bxby;/* '<S136>/Unit Delay2' */
  dt_RadAng_u16r15b0 UnitDelay3_DSTATE;/* '<S136>/Unit Delay3' */
  uint16 u16_ctSysStInitWaitCnt;       /* '<S165>/sfc_SysSTM' */
  uint16 u16_ctCalibStWaitCnt;         /* '<S138>/sfc_SensAgCalibSTM' */
  uint16 u16_ctAlgnStEndCnt;           /* '<S79>/sfc_OpnLpRefElecSpdConf' */
  ENM_MOTO_STATUS UnitDelay_DSTATE_jm5t;/* '<S79>/Unit Delay' */
  uint8 is_active_c2_ASW_AST;          /* '<S165>/sfc_SysSTM' */
  uint8 is_c2_ASW_AST;                 /* '<S165>/sfc_SysSTM' */
  uint8 is_NORMAL;                     /* '<S165>/sfc_SysSTM' */
  uint8 u8_ctTryAlgCnt;                /* '<S138>/sfc_SensAgCalibSTM' */
  uint8 is_active_c3_ASW_AST;          /* '<S138>/sfc_SensAgCalibSTM' */
  uint8 is_c3_ASW_AST;                 /* '<S138>/sfc_SensAgCalibSTM' */
  uint8 is_active_c1_ASW_AST;          /* '<S79>/sfc_OpnLpRefElecSpdConf' */
  uint8 is_c1_ASW_AST;                 /* '<S79>/sfc_OpnLpRefElecSpdConf' */
  uint8 is_active_c11_ASW_AST;         /* '<S76>/sfc_PhiModeStateMachine' */
  uint8 is_c11_ASW_AST;                /* '<S76>/sfc_PhiModeStateMachine' */
} DW_ASW_AST;

/* Real-time Model Data Structure */
struct tag_RTM_ASW_AST {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8 TID[2];
    } TaskCounters;
  } Timing;
};

/* Block signals (default storage) */
extern B_ASW_AST ASW_AST_B;

/* Block states (default storage) */
extern DW_ASW_AST ASW_AST_DW;

/* External data declarations for dependent source files */
extern const BUS_AST_SLW_TASK_IN ASW_AST_rtZBUS_AST_SLW_TASK_IN;/* BUS_AST_SLW_TASK_IN ground */
extern const BUS_AST_SLW_TASK_OUT ASW_AST_rtZBUS_AST_SLW_TASK_OUT;/* BUS_AST_SLW_TASK_OUT ground */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern BUS_AST_SLW_TASK_IN busAST_SlwTaskIn;/* '<Root>/busAST_SlwTaskIn' */
extern BUS_AST_SLW_TASK_OUT busAST_SlwTaskOut;/* '<S164>/Bus Creator1' */

/* Model entry point functions */
extern void ASW_AST_Init(void);
extern void ASW_AST_step(void);

/* Real-time Model object */
extern RT_MODEL_ASW_AST *const ASW_AST_M;

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
 * '<Root>' : 'ASW_AST'
 * '<S1>'   : 'ASW_AST/AST_SlwTask'
 * '<S2>'   : 'ASW_AST/AST_SlwTask/rss_PhCurrCalc'
 * '<S3>'   : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc'
 * '<S4>'   : 'ASW_AST/AST_SlwTask/rss_RefVltgLimCalc'
 * '<S5>'   : 'ASW_AST/AST_SlwTask/rss_SplyCurrEst'
 * '<S6>'   : 'ASW_AST/AST_SlwTask/vrs_AgEvalModeCalc'
 * '<S7>'   : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc'
 * '<S8>'   : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib'
 * '<S9>'   : 'ASW_AST/AST_SlwTask/vrs_ShOffFlgConf'
 * '<S10>'  : 'ASW_AST/AST_SlwTask/vrs_SlwTaskIn'
 * '<S11>'  : 'ASW_AST/AST_SlwTask/vrs_SlwTaskOut'
 * '<S12>'  : 'ASW_AST/AST_SlwTask/vrs_SysSTM'
 * '<S13>'  : 'ASW_AST/AST_SlwTask/rss_PhCurrCalc/lib_AmpCalc_0'
 * '<S14>'  : 'ASW_AST/AST_SlwTask/rss_PhCurrCalc/lib_MAF_1'
 * '<S15>'  : 'ASW_AST/AST_SlwTask/rss_PhCurrCalc/lib_AmpCalc_0/Compare To Constant'
 * '<S16>'  : 'ASW_AST/AST_SlwTask/rss_PhCurrCalc/lib_AmpCalc_0/Compare To Constant1'
 * '<S17>'  : 'ASW_AST/AST_SlwTask/rss_PhCurrCalc/lib_AmpCalc_0/ias_NonZeroInput'
 * '<S18>'  : 'ASW_AST/AST_SlwTask/rss_PhCurrCalc/lib_AmpCalc_0/ias_ZeroInput'
 * '<S19>'  : 'ASW_AST/AST_SlwTask/rss_PhCurrCalc/lib_AmpCalc_0/ias_NonZeroInput/lib_Conversion_6'
 * '<S20>'  : 'ASW_AST/AST_SlwTask/rss_PhCurrCalc/lib_AmpCalc_0/ias_NonZeroInput/lib_u16p15b0_1'
 * '<S21>'  : 'ASW_AST/AST_SlwTask/rss_PhCurrCalc/lib_AmpCalc_0/ias_ZeroInput/lib_Conversion_1'
 * '<S22>'  : 'ASW_AST/AST_SlwTask/rss_PhCurrCalc/lib_MAF_1/lib_Conversion_1'
 * '<S23>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_DrnRefTqLimCalc'
 * '<S24>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_RefTqLimConf'
 * '<S25>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim'
 * '<S26>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_DrnRefTqLimCalc/lib_CfgPar_4'
 * '<S27>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_DrnRefTqLimCalc/lib_Cnrv_2'
 * '<S28>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_DrnRefTqLimCalc/lib_Cnvr_1'
 * '<S29>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_DrnRefTqLimCalc/lib_Cnvr_2'
 * '<S30>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_DrnRefTqLimCalc/lib_Cnvr_3'
 * '<S31>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_DrnRefTqLimCalc/lib_Cnvr_4'
 * '<S32>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_DrnRefTqLimCalc/lib_DynSat_3'
 * '<S33>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_DrnRefTqLimCalc/lib_CfgPar_4/vss_SaturationActivation'
 * '<S34>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_DrnRefTqLimCalc/lib_CfgPar_4/vss_SaturationActivation/vss_SaturationRequired'
 * '<S35>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_RefTqLimConf/lib_CfgPar_5'
 * '<S36>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_RefTqLimConf/lib_CfgPar_5/vss_SaturationActivation'
 * '<S37>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_RefTqLimConf/lib_CfgPar_5/vss_SaturationActivation/vss_SaturationRequired'
 * '<S38>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/Compare To Constant1'
 * '<S39>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/ias_Case1'
 * '<S40>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/ias_Case2'
 * '<S41>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/lib_CfgPar_3'
 * '<S42>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/lib_Cnvr_2'
 * '<S43>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/lib_Cnvr_3'
 * '<S44>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/lib_Conversion_1'
 * '<S45>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/lib_IirFilter_0'
 * '<S46>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/ias_Case2/lib_Cnvr_2'
 * '<S47>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/ias_Case2/lib_DynSat_2'
 * '<S48>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/lib_CfgPar_3/vss_SaturationActivation'
 * '<S49>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/lib_CfgPar_3/vss_SaturationActivation/vss_SaturationRequired'
 * '<S50>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/lib_IirFilter_0/vss_FilterVariant'
 * '<S51>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/lib_IirFilter_0/vss_FilterVariant/vss_LowPassFilter'
 * '<S52>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/lib_IirFilter_0/vss_FilterVariant/vss_LowPassFilter/lib_Conversion_1'
 * '<S53>'  : 'ASW_AST/AST_SlwTask/rss_RefTqLimCalc/sss_SplyCurrEqvCurrLim/lib_IirFilter_0/vss_FilterVariant/vss_LowPassFilter/lib_Conversion_2'
 * '<S54>'  : 'ASW_AST/AST_SlwTask/rss_RefVltgLimCalc/lib_Cnrv_1'
 * '<S55>'  : 'ASW_AST/AST_SlwTask/rss_RefVltgLimCalc/lib_RiAgSideLenCalc_0'
 * '<S56>'  : 'ASW_AST/AST_SlwTask/rss_RefVltgLimCalc/lib_RiAgSideLenCalc_0/Compare To Constant'
 * '<S57>'  : 'ASW_AST/AST_SlwTask/rss_RefVltgLimCalc/lib_RiAgSideLenCalc_0/Compare To Constant1'
 * '<S58>'  : 'ASW_AST/AST_SlwTask/rss_RefVltgLimCalc/lib_RiAgSideLenCalc_0/ias_NonZeroInput'
 * '<S59>'  : 'ASW_AST/AST_SlwTask/rss_RefVltgLimCalc/lib_RiAgSideLenCalc_0/ias_ZeroInput'
 * '<S60>'  : 'ASW_AST/AST_SlwTask/rss_RefVltgLimCalc/lib_RiAgSideLenCalc_0/ias_NonZeroInput/lib_Conversion_6'
 * '<S61>'  : 'ASW_AST/AST_SlwTask/rss_RefVltgLimCalc/lib_RiAgSideLenCalc_0/ias_NonZeroInput/lib_u16p15b0_1'
 * '<S62>'  : 'ASW_AST/AST_SlwTask/rss_RefVltgLimCalc/lib_RiAgSideLenCalc_0/ias_ZeroInput/lib_Conversion_1'
 * '<S63>'  : 'ASW_AST/AST_SlwTask/rss_SplyCurrEst/Compare To Constant6'
 * '<S64>'  : 'ASW_AST/AST_SlwTask/rss_SplyCurrEst/lib_Cnvr_1'
 * '<S65>'  : 'ASW_AST/AST_SlwTask/rss_SplyCurrEst/lib_Cnvr_10'
 * '<S66>'  : 'ASW_AST/AST_SlwTask/rss_SplyCurrEst/lib_Cnvr_2'
 * '<S67>'  : 'ASW_AST/AST_SlwTask/rss_SplyCurrEst/lib_Cnvr_3'
 * '<S68>'  : 'ASW_AST/AST_SlwTask/rss_SplyCurrEst/lib_Cnvr_4'
 * '<S69>'  : 'ASW_AST/AST_SlwTask/rss_SplyCurrEst/lib_Cnvr_5'
 * '<S70>'  : 'ASW_AST/AST_SlwTask/rss_SplyCurrEst/lib_Cnvr_6'
 * '<S71>'  : 'ASW_AST/AST_SlwTask/rss_SplyCurrEst/lib_Cnvr_7'
 * '<S72>'  : 'ASW_AST/AST_SlwTask/rss_SplyCurrEst/lib_Cnvr_8'
 * '<S73>'  : 'ASW_AST/AST_SlwTask/rss_SplyCurrEst/lib_Cnvr_9'
 * '<S74>'  : 'ASW_AST/AST_SlwTask/rss_SplyCurrEst/lib_MAF_0'
 * '<S75>'  : 'ASW_AST/AST_SlwTask/rss_SplyCurrEst/lib_MAF_0/lib_Conversion_1'
 * '<S76>'  : 'ASW_AST/AST_SlwTask/vrs_AgEvalModeCalc/rss_AgEvalModeCalcNeed'
 * '<S77>'  : 'ASW_AST/AST_SlwTask/vrs_AgEvalModeCalc/rss_AgEvalModeCalcNeed/sfc_PhiModeStateMachine'
 * '<S78>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr'
 * '<S79>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc'
 * '<S80>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefMechSpdCalc'
 * '<S81>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/sss_SysSTMSpdConf'
 * '<S82>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/Compare To Constant1'
 * '<S83>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/Compare To Constant11'
 * '<S84>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/Compare To Constant12'
 * '<S85>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/Compare To Constant13'
 * '<S86>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/Compare To Constant3'
 * '<S87>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/Compare To Constant5'
 * '<S88>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/Compare To Constant6'
 * '<S89>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_CfgPar_2'
 * '<S90>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_Cnvr_0'
 * '<S91>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_Cnvr_1'
 * '<S92>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_DynSat_1'
 * '<S93>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_0'
 * '<S94>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_1'
 * '<S95>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/sfc_OpnLpRefElecSpdConf'
 * '<S96>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_CfgPar_2/vss_SaturationActivation'
 * '<S97>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_CfgPar_2/vss_SaturationActivation/vss_SaturationRequired'
 * '<S98>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_0/Chart'
 * '<S99>'  : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_0/Subsystem'
 * '<S100>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_0/sss_DecrementFlagTrigger'
 * '<S101>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_0/sss_IncrementFlagTrigger'
 * '<S102>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_0/Subsystem/lib_ResettableUnitDelay_1'
 * '<S103>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_0/sss_DecrementFlagTrigger/lib_Conversion_1'
 * '<S104>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_0/sss_DecrementFlagTrigger/lib_Conversion_2'
 * '<S105>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_0/sss_DecrementFlagTrigger/lib_Conversion_3'
 * '<S106>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_0/sss_IncrementFlagTrigger/lib_Conversion_1'
 * '<S107>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_0/sss_IncrementFlagTrigger/lib_Conversion_2'
 * '<S108>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_0/sss_IncrementFlagTrigger/lib_Conversion_3'
 * '<S109>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_1/Chart'
 * '<S110>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_1/Subsystem'
 * '<S111>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_1/sss_DecrementFlagTrigger'
 * '<S112>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_1/sss_IncrementFlagTrigger'
 * '<S113>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_1/Subsystem/lib_ResettableUnitDelay_1'
 * '<S114>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_1/sss_DecrementFlagTrigger/lib_Conversion_1'
 * '<S115>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_1/sss_DecrementFlagTrigger/lib_Conversion_2'
 * '<S116>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_1/sss_DecrementFlagTrigger/lib_Conversion_3'
 * '<S117>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_1/sss_IncrementFlagTrigger/lib_Conversion_1'
 * '<S118>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_1/sss_IncrementFlagTrigger/lib_Conversion_2'
 * '<S119>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/lib_RateLim_1/sss_IncrementFlagTrigger/lib_Conversion_3'
 * '<S120>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefMechSpdCalc/Compare To Constant'
 * '<S121>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefMechSpdCalc/Compare To Constant1'
 * '<S122>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefMechSpdCalc/Compare To Constant2'
 * '<S123>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefMechSpdCalc/Compare To Constant3'
 * '<S124>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefMechSpdCalc/lib_CfgPar_0'
 * '<S125>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefMechSpdCalc/lib_CfgPar_1'
 * '<S126>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefMechSpdCalc/lib_DynSat_0'
 * '<S127>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefMechSpdCalc/lib_CfgPar_0/vss_SaturationActivation'
 * '<S128>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefMechSpdCalc/lib_CfgPar_0/vss_SaturationActivation/vss_SaturationRequired'
 * '<S129>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefMechSpdCalc/lib_CfgPar_1/vss_SaturationActivation'
 * '<S130>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefMechSpdCalc/lib_CfgPar_1/vss_SaturationActivation/vss_SaturationRequired'
 * '<S131>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/sss_SysSTMSpdConf/sas_SysStDflCs'
 * '<S132>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/sss_SysSTMSpdConf/sas_SysStLmpHmeCs'
 * '<S133>' : 'ASW_AST/AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/sss_SysSTMSpdConf/sas_SysStRunCs'
 * '<S134>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed'
 * '<S135>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/Compare To Constant1'
 * '<S136>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed'
 * '<S137>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/lib_AgDvtLim_0'
 * '<S138>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib'
 * '<S139>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_CfgPar_6'
 * '<S140>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_RateLim_2'
 * '<S141>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_u16r15b0_2'
 * '<S142>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/sfc_SensAgCalibSTM'
 * '<S143>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_CfgPar_6/vss_SaturationActivation'
 * '<S144>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_CfgPar_6/vss_SaturationActivation/vss_SaturationRequired'
 * '<S145>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_RateLim_2/Chart'
 * '<S146>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_RateLim_2/Subsystem'
 * '<S147>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_RateLim_2/sss_DecrementFlagTrigger'
 * '<S148>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_RateLim_2/sss_IncrementFlagTrigger'
 * '<S149>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_RateLim_2/Subsystem/lib_ResettableUnitDelay_1'
 * '<S150>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_RateLim_2/sss_DecrementFlagTrigger/lib_Conversion_1'
 * '<S151>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_RateLim_2/sss_DecrementFlagTrigger/lib_Conversion_2'
 * '<S152>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_RateLim_2/sss_DecrementFlagTrigger/lib_Conversion_3'
 * '<S153>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_RateLim_2/sss_IncrementFlagTrigger/lib_Conversion_1'
 * '<S154>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_RateLim_2/sss_IncrementFlagTrigger/lib_Conversion_2'
 * '<S155>' : 'ASW_AST/AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/lib_RateLim_2/sss_IncrementFlagTrigger/lib_Conversion_3'
 * '<S156>' : 'ASW_AST/AST_SlwTask/vrs_ShOffFlgConf/rss_ShOffFlgConfSens'
 * '<S157>' : 'ASW_AST/AST_SlwTask/vrs_ShOffFlgConf/rss_ShOffFlgConfSens/Compare To Constant'
 * '<S158>' : 'ASW_AST/AST_SlwTask/vrs_ShOffFlgConf/rss_ShOffFlgConfSens/ias_NoPosSCDCalib'
 * '<S159>' : 'ASW_AST/AST_SlwTask/vrs_ShOffFlgConf/rss_ShOffFlgConfSens/ias_PosSCDCalib'
 * '<S160>' : 'ASW_AST/AST_SlwTask/vrs_ShOffFlgConf/rss_ShOffFlgConfSens/ias_PosSCDCalib/Compare To Constant'
 * '<S161>' : 'ASW_AST/AST_SlwTask/vrs_ShOffFlgConf/rss_ShOffFlgConfSens/ias_PosSCDCalib/Compare To Constant1'
 * '<S162>' : 'ASW_AST/AST_SlwTask/vrs_ShOffFlgConf/rss_ShOffFlgConfSens/ias_PosSCDCalib/Compare To Constant2'
 * '<S163>' : 'ASW_AST/AST_SlwTask/vrs_SlwTaskIn/sss_SlwTaskInHybr'
 * '<S164>' : 'ASW_AST/AST_SlwTask/vrs_SlwTaskOut/sss_SlwTaskOutHybr'
 * '<S165>' : 'ASW_AST/AST_SlwTask/vrs_SysSTM/rss_SysSTM_GEELY'
 * '<S166>' : 'ASW_AST/AST_SlwTask/vrs_SysSTM/rss_SysSTM_GEELY/sfc_SysSTM'
 */
#endif                                 /* RTW_HEADER_ASW_AST_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
