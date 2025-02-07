/*
 * File: ASW_SigIn.c
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

#include "ASW_SigIn.h"
#include "ASW_SigIn_private.h"
#include "custom_type_definition.h"
#include "motor_control_interface.h"
#include "rtwtypes.h"
#include <string.h>
#include "motor_control_param.c"
#include "motor_param.c"
#include "look1_iu16lu32n16tu8_binlcse.c"

const BUS_SIGIN_MED_TASK_OUT ASW_SigIn_rtZBUS_SIGIN_MED_TASK_OUT = {
  0U,                                  /* u16_phiSensActElecAg */

  {
    0, 0, 0 }
  /* s16_iActPhCurr */
};                                     /* BUS_SIGIN_MED_TASK_OUT ground */

const BUS_SIGIN_SLW_TASK_OUT ASW_SigIn_rtZBUS_SIGIN_SLW_TASK_OUT = {
  0U,                                  /* u16_uSplyVltg */
  0U,                                  /* u16_uCtlBrdVltg */
  0U,                                  /* u16_uGDVltg */
  40U,                                 /* u8_tPwrTubTemp */
  40U,                                 /* u8_tPCBTemp */
  40U,                                 /* u8_tMotoTemp */
  40U                                  /* u8_tPCBTempSubs */
};                                     /* BUS_SIGIN_SLW_TASK_OUT ground */

/* Exported block signals */
BUS_SIGIN_MED_TASK_IN busSigIn_MedTaskIn;/* '<Root>/busSigIn_MedTaskIn' */
BUS_SIGIN_SLW_TASK_IN busSigIn_SlwTaskIn;/* '<Root>/busSigIn_SlwTaskIn' */
BUS_SIGIN_SLW_TASK_OUT busSigIn_SlwTaskOut;/* '<S48>/Bus Creator1' */
BUS_SIGIN_MED_TASK_OUT busSigIn_MedTaskOut;/* '<S29>/Bus Creator1' */

/* Block signals (default storage) */
B_ASW_SigIn ASW_SigIn_B;

/* Block states (default storage) */
DW_ASW_SigIn ASW_SigIn_DW;

/* Real-time model */
static RT_MODEL_ASW_SigIn ASW_SigIn_M_;
RT_MODEL_ASW_SigIn *const ASW_SigIn_M = &ASW_SigIn_M_;
static void rate_scheduler(void);
const BUS_SIGIN_SLW_TASK_IN ASW_SigIn_rtZBUS_SIGIN_SLW_TASK = { 0U,/* u16_uADSplyVltg */
  0U,                                  /* u16_uADCtlBrdVltg */
  0U,                                  /* u16_uADGDVltg */
  0U,                                  /* u16_uADPwrTubTemp */
  0U,                                  /* u16_uADPCBTemp */
  0U,                                  /* u16_uADMotoTemp */
  40U,                                 /* u8_tMCUTemp */

  { false,                             /* bol_flgPhCurrHiLvl1Flg */
    false,                             /* bol_flgHWOvrCurrFlg */
    false,                             /* bol_flgSplyVltgLoLvl1Flg */
    false,                             /* bol_flgSplyVltgLoLvl2Flg */
    false,                             /* bol_flgSplyVltgHiLvl1Flg */
    false,                             /* bol_flgPwrTubPCBTempHiLvl1Flg */
    false,                             /* bol_flgPwrTubPCBTempHiLvl2Flg */
    false,                             /* bol_flgMotoTempHiLvl1Flg */
    false,                             /* bol_flgMotoTempHiLvl2Flg */
    false,                             /* bol_flgComFaltFlg */
    false,                             /* bol_flgMotoStallPermFlg */
    false,                             /* bol_flgMotoStallTmpFlg */
    false,                             /* bol_flgNoLdFlg */
    false,                             /* bol_flgBattPwrHiLvl1Flg */
    false,                             /* bol_flgMotoSpdHiLvl1Flg */
    false,                             /* bol_flgMotoSpdLoLvl1Flg */
    false,                             /* bol_flgCtlBrdVltgLoLvl1Flg */
    false,                             /* bol_flgCtlBrdVltgHiLvl1Flg */
    false,                             /* bol_flgGDVltgLoLvl1Flg */
    false,                             /* bol_flgGDVltgHiLvl1Flg */
    false,                             /* bol_flgChipFaltFlg */
    false,                             /* bol_flgPhiSensFaltFlg */
    false,                             /* bol_flgPhCurrSensFaltFlg */
    false,                             /* bol_flgPwrTubPCBTempSensFaltFlg */
    false,                             /* bol_flgMotoTempSensFaltFlg */
    false,                             /* bol_flgBusOffFaltFlg */
    false,                             /* bol_flgCrashFaltFlg */
    false,                             /* bol_flgReserved3Flg */
    false,                             /* bol_flgReserved4Flg */
    false                              /* bol_flgReserved5Flg */
  }                                    /* busOBD_FaltSt */
};

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (ASW_SigIn_M->Timing.TaskCounters.TID[1])++;
  if ((ASW_SigIn_M->Timing.TaskCounters.TID[1]) > 3) {/* Sample time: [0.0005s, 0.0s] */
    ASW_SigIn_M->Timing.TaskCounters.TID[1] = 0;
  }

  (ASW_SigIn_M->Timing.TaskCounters.TID[2])++;
  if ((ASW_SigIn_M->Timing.TaskCounters.TID[2]) > 79) {/* Sample time: [0.01s, 0.0s] */
    ASW_SigIn_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Output and update for atomic system: '<Root>/SigIn_MedTask' */
void SigIn_MedTask(void)
{
  dt_Standardize_s16p15b0 rtb_Gain2_idx_0;
  dt_Standardize_s16p15b0 rtb_Gain2_idx_1;
  uint8 tmp;

  /* Gain: '<S3>/Gain2' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Inport: '<Root>/busSigIn_MedTaskIn'
   *  Product: '<S3>/Product'
   *  Sum: '<S3>/Add'
   *  Sum: '<S3>/Add2'
   */
  rtb_Gain2_idx_0 = (sint16)(((sint16)((((sint16)(((sint16)
    busSigIn_MedTaskIn.u16_uADActPhCurr[0]) - ((sint16)
    busSigIn_MedTaskIn.u16_uADActPhCurrOfs))) * Gu16_rPhCurrADCRat_C) >> 14)) <<
    1);
  rtb_Gain2_idx_1 = (sint16)(((sint16)((((sint16)(((sint16)
    busSigIn_MedTaskIn.u16_uADActPhCurr[1]) - ((sint16)
    busSigIn_MedTaskIn.u16_uADActPhCurrOfs))) * Gu16_rPhCurrADCRat_C) >> 14)) <<
    1);

  /* SwitchCase: '<S3>/Switch Case' incorporates:
   *  Constant: '<S3>/Constant4'
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   */
  switch (Genm_modePhCurrSmpMode_C) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S3>/sas_modeSngShtGndCs' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    /* SwitchCase: '<S15>/Switch Case' incorporates:
     *  Inport: '<Root>/busSigIn_MedTaskIn'
     */
    switch (busSigIn_MedTaskIn.u8_numSectNum) {
     case 1:
      /* Outputs for IfAction SubSystem: '<S15>/sas_numSect1' incorporates:
       *  ActionPort: '<S16>/Action Port'
       */
      /* SignalConversion generated from: '<S16>/s16_iActPhCurrSect1' incorporates:
       *  Merge: '<S3>/Merge'
       *  Sum: '<S16>/Subtract'
       *  UnaryMinus: '<S16>/Unary Minus'
       */
      busSigIn_MedTaskOut.s16_iActPhCurr[0] = rtb_Gain2_idx_0;
      busSigIn_MedTaskOut.s16_iActPhCurr[1] = (dt_Standardize_s16p15b0)
        (rtb_Gain2_idx_1 - rtb_Gain2_idx_0);
      busSigIn_MedTaskOut.s16_iActPhCurr[2] = (dt_Standardize_s16p15b0)
        (-rtb_Gain2_idx_1);

      /* End of Outputs for SubSystem: '<S15>/sas_numSect1' */
      break;

     case 2:
      /* Outputs for IfAction SubSystem: '<S15>/sas_numSect2' incorporates:
       *  ActionPort: '<S17>/Action Port'
       */
      /* SignalConversion generated from: '<S17>/s16_iActPhCurrSect2' incorporates:
       *  Merge: '<S3>/Merge'
       *  Sum: '<S17>/Subtract'
       *  UnaryMinus: '<S17>/Unary Minus'
       */
      busSigIn_MedTaskOut.s16_iActPhCurr[0] = (dt_Standardize_s16p15b0)
        (rtb_Gain2_idx_1 - rtb_Gain2_idx_0);
      busSigIn_MedTaskOut.s16_iActPhCurr[1] = rtb_Gain2_idx_0;
      busSigIn_MedTaskOut.s16_iActPhCurr[2] = (dt_Standardize_s16p15b0)
        (-rtb_Gain2_idx_1);

      /* End of Outputs for SubSystem: '<S15>/sas_numSect2' */
      break;

     case 3:
      /* Outputs for IfAction SubSystem: '<S15>/sas_numSect3' incorporates:
       *  ActionPort: '<S18>/Action Port'
       */
      /* SignalConversion generated from: '<S18>/s16_iActPhCurrSect3' incorporates:
       *  Merge: '<S3>/Merge'
       *  Sum: '<S18>/Subtract'
       *  UnaryMinus: '<S18>/Unary Minus'
       */
      busSigIn_MedTaskOut.s16_iActPhCurr[0] = (dt_Standardize_s16p15b0)
        (-rtb_Gain2_idx_1);
      busSigIn_MedTaskOut.s16_iActPhCurr[1] = rtb_Gain2_idx_0;
      busSigIn_MedTaskOut.s16_iActPhCurr[2] = (dt_Standardize_s16p15b0)
        (rtb_Gain2_idx_1 - rtb_Gain2_idx_0);

      /* End of Outputs for SubSystem: '<S15>/sas_numSect3' */
      break;

     case 4:
      /* Outputs for IfAction SubSystem: '<S15>/sas_numSect4' incorporates:
       *  ActionPort: '<S19>/Action Port'
       */
      /* SignalConversion generated from: '<S19>/s16_iActPhCurrSect4' incorporates:
       *  Merge: '<S3>/Merge'
       *  Sum: '<S19>/Subtract'
       *  UnaryMinus: '<S19>/Unary Minus'
       */
      busSigIn_MedTaskOut.s16_iActPhCurr[0] = (dt_Standardize_s16p15b0)
        (-rtb_Gain2_idx_1);
      busSigIn_MedTaskOut.s16_iActPhCurr[1] = (dt_Standardize_s16p15b0)
        (rtb_Gain2_idx_1 - rtb_Gain2_idx_0);
      busSigIn_MedTaskOut.s16_iActPhCurr[2] = rtb_Gain2_idx_0;

      /* End of Outputs for SubSystem: '<S15>/sas_numSect4' */
      break;

     case 5:
      /* Outputs for IfAction SubSystem: '<S15>/sas_numSect5' incorporates:
       *  ActionPort: '<S20>/Action Port'
       */
      /* SignalConversion generated from: '<S20>/s16_iActPhCurrSect5' incorporates:
       *  Merge: '<S3>/Merge'
       *  Sum: '<S20>/Subtract'
       *  UnaryMinus: '<S20>/Unary Minus'
       */
      busSigIn_MedTaskOut.s16_iActPhCurr[0] = (dt_Standardize_s16p15b0)
        (rtb_Gain2_idx_1 - rtb_Gain2_idx_0);
      busSigIn_MedTaskOut.s16_iActPhCurr[1] = (dt_Standardize_s16p15b0)
        (-rtb_Gain2_idx_1);
      busSigIn_MedTaskOut.s16_iActPhCurr[2] = rtb_Gain2_idx_0;

      /* End of Outputs for SubSystem: '<S15>/sas_numSect5' */
      break;

     case 6:
      /* Outputs for IfAction SubSystem: '<S15>/sas_numSect6' incorporates:
       *  ActionPort: '<S21>/Action Port'
       */
      /* SignalConversion generated from: '<S21>/s16_iActPhCurrSect6' incorporates:
       *  Merge: '<S3>/Merge'
       *  Sum: '<S21>/Subtract'
       *  UnaryMinus: '<S21>/Unary Minus'
       */
      busSigIn_MedTaskOut.s16_iActPhCurr[0] = rtb_Gain2_idx_0;
      busSigIn_MedTaskOut.s16_iActPhCurr[1] = (dt_Standardize_s16p15b0)
        (-rtb_Gain2_idx_1);
      busSigIn_MedTaskOut.s16_iActPhCurr[2] = (dt_Standardize_s16p15b0)
        (rtb_Gain2_idx_1 - rtb_Gain2_idx_0);

      /* End of Outputs for SubSystem: '<S15>/sas_numSect6' */
      break;

     default:
      /* Outputs for IfAction SubSystem: '<S15>/sas_numSectDfl' incorporates:
       *  ActionPort: '<S22>/Action Port'
       */
      /* SignalConversion generated from: '<S22>/s16_iActPhCurrSectDfl' incorporates:
       *  Constant: '<S22>/Constant'
       *  Merge: '<S3>/Merge'
       */
      busSigIn_MedTaskOut.s16_iActPhCurr[0] = 0;
      busSigIn_MedTaskOut.s16_iActPhCurr[1] = 0;
      busSigIn_MedTaskOut.s16_iActPhCurr[2] = 0;

      /* End of Outputs for SubSystem: '<S15>/sas_numSectDfl' */
      break;
    }

    /* End of SwitchCase: '<S15>/Switch Case' */
    /* End of Outputs for SubSystem: '<S3>/sas_modeSngShtGndCs' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S3>/sas_modeTwnShtPhCs' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    /* SignalConversion generated from: '<S14>/iActSngShtXYZCurr' incorporates:
     *  Gain: '<S3>/Gain2'
     *  Merge: '<S3>/Merge'
     */
    busSigIn_MedTaskOut.s16_iActPhCurr[0] = rtb_Gain2_idx_0;
    busSigIn_MedTaskOut.s16_iActPhCurr[1] = rtb_Gain2_idx_1;
    busSigIn_MedTaskOut.s16_iActPhCurr[2] = 0;

    /* End of Outputs for SubSystem: '<S3>/sas_modeTwnShtPhCs' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S3>/sas_modeSensPhCs' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    /* SignalConversion generated from: '<S12>/iActSngShtXYZCurr' incorporates:
     *  Gain: '<S3>/Gain2'
     *  Merge: '<S3>/Merge'
     */
    busSigIn_MedTaskOut.s16_iActPhCurr[0] = rtb_Gain2_idx_0;
    busSigIn_MedTaskOut.s16_iActPhCurr[1] = rtb_Gain2_idx_1;
    busSigIn_MedTaskOut.s16_iActPhCurr[2] = 0;

    /* End of Outputs for SubSystem: '<S3>/sas_modeSensPhCs' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S3>/sas_modeDflCs' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* SignalConversion generated from: '<S11>/iActSngShtXYZCurr' incorporates:
     *  Gain: '<S3>/Gain2'
     *  Merge: '<S3>/Merge'
     */
    busSigIn_MedTaskOut.s16_iActPhCurr[0] = rtb_Gain2_idx_0;
    busSigIn_MedTaskOut.s16_iActPhCurr[1] = rtb_Gain2_idx_1;
    busSigIn_MedTaskOut.s16_iActPhCurr[2] = 0;

    /* End of Outputs for SubSystem: '<S3>/sas_modeDflCs' */
    break;
  }

  /* End of SwitchCase: '<S3>/Switch Case' */

  /* Saturate: '<S27>/Saturation' incorporates:
   *  Constant: '<S27>/Constant'
   */
  if (Gu8_numPPNum_C > 6) {
    tmp = 6U;
  } else if (Gu8_numPPNum_C < 2) {
    tmp = 2U;
  } else {
    tmp = Gu8_numPPNum_C;
  }

  /* Product: '<S23>/Product' incorporates:
   *  Gain: '<S23>/Gain1'
   *  Inport: '<Root>/busSigIn_MedTaskIn'
   *  Saturate: '<S27>/Saturation'
   */
  busSigIn_MedTaskOut.u16_phiSensActElecAg = (dt_RadAng_u16r15b0)(((((3217U *
    busSigIn_MedTaskIn.u16_ADSensActMechAg) >> 12) * 20861U) >> 14) * tmp);
}

/* System initialize for atomic system: '<Root>/SigIn_SlwTask' */
void SigIn_SlwTask_Init(void)
{
  /* InitializeConditions for S-Function (sfix_udelay): '<S38>/Tapped Delay' */
  memset(&ASW_SigIn_DW.TappedDelay_DWORK1[0], 0, 39U * (sizeof(uint16)));

  /* InitializeConditions for S-Function (sfix_udelay): '<S42>/Tapped Delay' incorporates:
   *  S-Function (sfix_udelay): '<S38>/Tapped Delay'
   */
  memset(&ASW_SigIn_DW.TappedDelay_DWORK1_olz3[0], 0, 39U * (sizeof(uint16)));

  /* InitializeConditions for S-Function (sfix_udelay): '<S46>/Tapped Delay' incorporates:
   *  S-Function (sfix_udelay): '<S38>/Tapped Delay'
   */
  memset(&ASW_SigIn_DW.TappedDelay_DWORK1_nx03[0], 0, 39U * (sizeof(uint16)));
}

/* Output and update for atomic system: '<Root>/SigIn_SlwTask' */
void SigIn_SlwTask(void)
{
  sint32 i;
  uint32 tmp;
  dt_Standardize_u16p15b0 rtb_VectorConcatenate[40];
  dt_Standardize_u16p15b0 rtb_VectorConcatenate_mksw[40];
  dt_Standardize_u16p15b0 rtb_VectorConcatenate_oqqq[40];
  dt_Temp_u8p0bn40 rtb_PCBTempMap;

  /* DataTypeConversion: '<S36>/Data Type Conversion' incorporates:
   *  Constant: '<S30>/Constant2'
   *  Gain: '<S30>/Gain2'
   *  Inport: '<Root>/busSigIn_SlwTaskIn'
   *  Product: '<S30>/Product'
   */
  ASW_SigIn_B.DataTypeConversion = (uint16)(((uint16)((((uint32)
    busSigIn_SlwTaskIn.u16_uADCtlBrdVltg) * Gu16_rCtlBrdVltgADCRat_C) >> 14)) <<
    1);

  /* SignalConversion generated from: '<S38>/Vector Concatenate' incorporates:
   *  DataTypeConversion: '<S36>/Data Type Conversion'
   */
  rtb_VectorConcatenate[0] = ASW_SigIn_B.DataTypeConversion;

  /* S-Function (sfix_udelay): '<S38>/Tapped Delay' */
  memcpy(&rtb_VectorConcatenate[1], &ASW_SigIn_DW.TappedDelay_DWORK1[0], 39U *
         (sizeof(dt_Standardize_u16p15b0)));

  /* Sum: '<S38>/Sum of Elements' incorporates:
   *  Concatenate: '<S38>/Vector Concatenate'
   *  Sum: '<S42>/Sum of Elements'
   *  Sum: '<S46>/Sum of Elements'
   */
  tmp = 0U;
  for (i = 0; i < 40; i++) {
    tmp += rtb_VectorConcatenate[i];
  }

  /* Product: '<S38>/Divide' incorporates:
   *  Sum: '<S38>/Sum of Elements'
   */
  busSigIn_SlwTaskOut.u16_uCtlBrdVltg = (dt_Standardize_u16p15b0)((((sint32)tmp)
    << 4) / 640);

  /* DataTypeConversion: '<S40>/Data Type Conversion' incorporates:
   *  Constant: '<S31>/Constant2'
   *  Gain: '<S31>/Gain2'
   *  Inport: '<Root>/busSigIn_SlwTaskIn'
   *  Product: '<S31>/Product'
   */
  ASW_SigIn_B.DataTypeConversion_md0g = (uint16)(((uint16)((((uint32)
    busSigIn_SlwTaskIn.u16_uADGDVltg) * Gu16_rGDVltgADCRat_C) >> 14)) << 1);

  /* SignalConversion generated from: '<S42>/Vector Concatenate' incorporates:
   *  DataTypeConversion: '<S40>/Data Type Conversion'
   */
  rtb_VectorConcatenate_mksw[0] = ASW_SigIn_B.DataTypeConversion_md0g;

  /* S-Function (sfix_udelay): '<S42>/Tapped Delay' */
  memcpy(&rtb_VectorConcatenate_mksw[1], &ASW_SigIn_DW.TappedDelay_DWORK1_olz3[0],
         39U * (sizeof(dt_Standardize_u16p15b0)));

  /* Sum: '<S42>/Sum of Elements' incorporates:
   *  Concatenate: '<S42>/Vector Concatenate'
   *  Sum: '<S38>/Sum of Elements'
   *  Sum: '<S46>/Sum of Elements'
   */
  tmp = 0U;
  for (i = 0; i < 40; i++) {
    tmp += rtb_VectorConcatenate_mksw[i];
  }

  /* Product: '<S42>/Divide' incorporates:
   *  Sum: '<S42>/Sum of Elements'
   */
  busSigIn_SlwTaskOut.u16_uGDVltg = (dt_Standardize_u16p15b0)((((sint32)tmp) <<
    4) / 640);

  /* DataTypeConversion: '<S44>/Data Type Conversion' incorporates:
   *  Constant: '<S32>/Constant2'
   *  Gain: '<S32>/Gain2'
   *  Inport: '<Root>/busSigIn_SlwTaskIn'
   *  Product: '<S32>/Product'
   */
  ASW_SigIn_B.DataTypeConversion_ikt4 = (uint16)(((uint16)((((uint32)
    busSigIn_SlwTaskIn.u16_uADSplyVltg) * Gu16_rSplyVltgADCRat_C) >> 14)) << 1);

  /* SignalConversion generated from: '<S46>/Vector Concatenate' incorporates:
   *  DataTypeConversion: '<S44>/Data Type Conversion'
   */
  rtb_VectorConcatenate_oqqq[0] = ASW_SigIn_B.DataTypeConversion_ikt4;

  /* S-Function (sfix_udelay): '<S46>/Tapped Delay' */
  memcpy(&rtb_VectorConcatenate_oqqq[1], &ASW_SigIn_DW.TappedDelay_DWORK1_nx03[0],
         39U * (sizeof(dt_Standardize_u16p15b0)));

  /* Sum: '<S46>/Sum of Elements' incorporates:
   *  Concatenate: '<S46>/Vector Concatenate'
   *  Sum: '<S38>/Sum of Elements'
   *  Sum: '<S42>/Sum of Elements'
   */
  tmp = 0U;
  for (i = 0; i < 40; i++) {
    tmp += rtb_VectorConcatenate_oqqq[i];
  }

  /* Product: '<S46>/Divide' incorporates:
   *  Sum: '<S46>/Sum of Elements'
   */
  busSigIn_SlwTaskOut.u16_uSplyVltg = (dt_Standardize_u16p15b0)((((sint32)tmp) <<
    4) / 640);

  /* Lookup_n-D: '<S33>/PwrTubTempMap' incorporates:
   *  Inport: '<Root>/busSigIn_SlwTaskIn'
   */
  busSigIn_SlwTaskOut.u8_tPwrTubTemp = look1_iu16lu32n16tu8_binlcse
    (busSigIn_SlwTaskIn.u16_uADPwrTubTemp,
     &Gu16_tPwrTubTemp_CUR_ADPwrTubTempADC_X[0], &Gu8_tPwrTubTemp_CUR[0], 4U);

  /* Lookup_n-D: '<S33>/PCBTempMap' incorporates:
   *  Inport: '<Root>/busSigIn_SlwTaskIn'
   */
  rtb_PCBTempMap = look1_iu16lu32n16tu8_binlcse
    (busSigIn_SlwTaskIn.u16_uADPCBTemp, &Gu16_tPCBTemp_CUR_ADPCBTempADC_X[0],
     &Gu8_tPCBTemp_CUR[0], 37U);

  /* Lookup_n-D: '<S33>/MotTempMap' incorporates:
   *  Inport: '<Root>/busSigIn_SlwTaskIn'
   */
  busSigIn_SlwTaskOut.u8_tMotoTemp = look1_iu16lu32n16tu8_binlcse
    (busSigIn_SlwTaskIn.u16_uADMotoTemp, &Gu16_tMotoTemp_CUR_ADMotoTempADC_X[0],
     &Gu8_tMotoTemp_CUR[0], 4U);

  /* BusCreator: '<S48>/Bus Creator1' incorporates:
   *  Lookup_n-D: '<S33>/PCBTempMap'
   */
  busSigIn_SlwTaskOut.u8_tPCBTemp = rtb_PCBTempMap;

  /* Switch: '<S33>/Switch' incorporates:
   *  Inport: '<Root>/busSigIn_SlwTaskIn'
   */
  if (busSigIn_SlwTaskIn.busOBD_FaltSt.bol_flgPwrTubPCBTempSensFaltFlg) {
    /* BusCreator: '<S48>/Bus Creator1' */
    busSigIn_SlwTaskOut.u8_tPCBTempSubs = busSigIn_SlwTaskIn.u8_tMCUTemp;
  } else {
    /* BusCreator: '<S48>/Bus Creator1' incorporates:
     *  Lookup_n-D: '<S33>/PCBTempMap'
     */
    busSigIn_SlwTaskOut.u8_tPCBTempSubs = rtb_PCBTempMap;
  }

  /* End of Switch: '<S33>/Switch' */
  for (i = 0; i < 38; i++) {
    /* Update for S-Function (sfix_udelay): '<S38>/Tapped Delay' incorporates:
     *  S-Function (sfix_udelay): '<S42>/Tapped Delay'
     *  S-Function (sfix_udelay): '<S46>/Tapped Delay'
     *  Sum: '<S38>/Sum of Elements'
     *  Sum: '<S42>/Sum of Elements'
     *  Sum: '<S46>/Sum of Elements'
     */
    ASW_SigIn_DW.TappedDelay_DWORK1[i] = ASW_SigIn_DW.TappedDelay_DWORK1[i + 1];

    /* Update for S-Function (sfix_udelay): '<S42>/Tapped Delay' incorporates:
     *  S-Function (sfix_udelay): '<S38>/Tapped Delay'
     *  S-Function (sfix_udelay): '<S46>/Tapped Delay'
     *  Sum: '<S38>/Sum of Elements'
     *  Sum: '<S42>/Sum of Elements'
     *  Sum: '<S46>/Sum of Elements'
     */
    ASW_SigIn_DW.TappedDelay_DWORK1_olz3[i] =
      ASW_SigIn_DW.TappedDelay_DWORK1_olz3[i + 1];

    /* Update for S-Function (sfix_udelay): '<S46>/Tapped Delay' incorporates:
     *  S-Function (sfix_udelay): '<S38>/Tapped Delay'
     *  S-Function (sfix_udelay): '<S42>/Tapped Delay'
     *  Sum: '<S38>/Sum of Elements'
     *  Sum: '<S42>/Sum of Elements'
     *  Sum: '<S46>/Sum of Elements'
     */
    ASW_SigIn_DW.TappedDelay_DWORK1_nx03[i] =
      ASW_SigIn_DW.TappedDelay_DWORK1_nx03[i + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S38>/Tapped Delay' incorporates:
   *  DataTypeConversion: '<S36>/Data Type Conversion'
   */
  ASW_SigIn_DW.TappedDelay_DWORK1[38] = ASW_SigIn_B.DataTypeConversion;

  /* Update for S-Function (sfix_udelay): '<S42>/Tapped Delay' incorporates:
   *  DataTypeConversion: '<S40>/Data Type Conversion'
   */
  ASW_SigIn_DW.TappedDelay_DWORK1_olz3[38] = ASW_SigIn_B.DataTypeConversion_md0g;

  /* Update for S-Function (sfix_udelay): '<S46>/Tapped Delay' incorporates:
   *  DataTypeConversion: '<S44>/Data Type Conversion'
   */
  ASW_SigIn_DW.TappedDelay_DWORK1_nx03[38] = ASW_SigIn_B.DataTypeConversion_ikt4;
}

/* Model step function */
void ASW_SigIn_step(void)
{
  if (ASW_SigIn_M->Timing.TaskCounters.TID[1] == 0) {
    /* Outputs for Atomic SubSystem: '<Root>/SigIn_MedTask' */
    SigIn_MedTask();

    /* End of Outputs for SubSystem: '<Root>/SigIn_MedTask' */
  }

  if (ASW_SigIn_M->Timing.TaskCounters.TID[2] == 0) {
    /* Outputs for Atomic SubSystem: '<Root>/SigIn_SlwTask' */
    SigIn_SlwTask();

    /* End of Outputs for SubSystem: '<Root>/SigIn_SlwTask' */
  }

  rate_scheduler();
}

/* Model initialize function */
void ASW_SigIn_Init(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)ASW_SigIn_M, 0,
                sizeof(RT_MODEL_ASW_SigIn));

  /* block I/O */
  (void) memset(((void *) &ASW_SigIn_B), 0,
                sizeof(B_ASW_SigIn));

  /* exported global signals */
  busSigIn_SlwTaskOut = ASW_SigIn_rtZBUS_SIGIN_SLW_TASK_OUT;
  busSigIn_MedTaskOut = ASW_SigIn_rtZBUS_SIGIN_MED_TASK_OUT;

  /* states (dwork) */
  (void) memset((void *)&ASW_SigIn_DW, 0,
                sizeof(DW_ASW_SigIn));

  /* external inputs */
  busSigIn_SlwTaskIn = ASW_SigIn_rtZBUS_SIGIN_SLW_TASK;

  /* SystemInitialize for Atomic SubSystem: '<Root>/SigIn_SlwTask' */
  SigIn_SlwTask_Init();

  /* End of SystemInitialize for SubSystem: '<Root>/SigIn_SlwTask' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
