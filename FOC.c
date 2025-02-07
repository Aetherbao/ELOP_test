/*
 * File: ASW_AST.c
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
#include <stdio.h>
#include <string.h>
#include "ASW_share/rtwtypes.h"
#include "ASW_share/types.h"
#include "ASW_share/typedefs.h"
#include "ASW_AST/ASW_AST.h"
#include "ASW_AST/ASW_AST_private.h"
#include "ASW_DcycGen/ASW_DcycGen.h"
#include "ASW_DcycGen/ASW_DcycGen_private.h"
#include "ASW_OBD/ASW_OBD.h"
#include "ASW_OBD/ASW_OBD_private.h"
#include "ASW_PhCurrGen/ASW_PhCurrGen.h"
#include "ASW_PhCurrGen/ASW_PhCurrGen_private.h"
#include "ASW_PhVltgGen/ASW_PhVltgGen.h"
#include "ASW_PhVltgGen/ASW_PhVltgGen_private.h"
#include "ASW_SigIn/ASW_SigIn.h"
#include "ASW_SigIn/ASW_SigIn_private.h"
#include "ASW_share/motor_control_interface.h"
#include "ASW_share/custom_type_definition.h"
#include "ASW_share/mul_ssu32_hiSR.c"
#include "ASW_share/look2_is16lu32n16tu16_binlcse.c"
#include "ASW_share/div_nde_s32_floor.c"
#include "ASW_share/mul_ssu32_loSR.c"
#include "ASW_share/mul_s32_loSR.c"
#include "ASW_share/mul_wide_su32.c"
#include "ASW_share/look1_iu8lu32n16ts16Ds32_binlcs.c"
#include "ASW_share/look1_iu16lu32n16tu8_binlcse.c"
#include "ASW_share/look1_iu16lu32n16ts16D_2s4GBl96.c"
#include "ASW_share/look1_is16lu32n32ys16n_eAC3J1UD.c"
#include "ASW_par/motor_control_param.c"
#include "ASW_par/motor_param.c"
#include "ASW_share/const_params.c"
#include "BSW/PWM.c"
#include "FOC.h"
#include "BSW/ADC.c"

/* Named constants for Chart: '<S76>/sfc_PhiModeStateMachine' */
#define IN_HYBRID                      ((uint8)1U)
#define IN_NO_ACTIVE_CHILD             ((uint8)0U)
#define IN_SENSOR                      ((uint8)2U)
#define IN_SENSORLESS                  ((uint8)3U)

/* Named constants for Chart: '<S79>/sfc_OpnLpRefElecSpdConf' */
#define IN_ALGN_SPD                    ((uint8)1U)
#define IN_STRTUP_SPD                  ((uint8)2U)

/* Named constants for Chart: '<S138>/sfc_SensAgCalibSTM' */
#define IN_ALIGN_ALPHA_PHASE           ((uint8)1U)
#define IN_ALIGN_BETA_PHASE            ((uint8)2U)
#define IN_CALIBFAIL                   ((uint8)3U)
#define IN_SUCCESS                     ((uint8)4U)
#define IN_WAIT_ALPHA                  ((uint8)5U)
#define IN_WAIT_BETA                   ((uint8)6U)

/* Named constants for Chart: '<S165>/sfc_SysSTM' */
#define IN_LIMPHOME                    ((uint8)1U)
#define IN_NORMAL                      ((uint8)2U)
#define IN_RUN                         ((uint8)1U)
#define IN_STANDBY                     ((uint8)2U)
#define IN_SYSFAIL                     ((uint8)3U)
#define IN_SYSINIT                     ((uint8)4U)
#define IN_SYSSLEEP                    ((uint8)5U)
                                 /* BUS_AST_SLW_TASK_OUT ground */

typedef struct
{

   uint8_t u8_WF_HWVersion[10];                             //WFÓ²¼þ°æ±¾ºÅ
	 uint8_t u8_CalibDataVersion[25];                        //DATAVersion
	 uint8_t u8_WF_SWVersion[10];                        //SoftwareVersion
	 uint8_t u8_SysName[7];                         //SystemName

}BUS_COMIF_UDSREAD_IN;
/* Exported block signals */
BUS_AST_SLW_TASK_IN busAST_SlwTaskIn;  /* '<Root>/busAST_SlwTaskIn' */
BUS_AST_SLW_TASK_OUT busAST_SlwTaskOut;/* '<S164>/Bus Creator1' */

/* Block signals (default storage) */
B_ASW_AST ASW_AST_B;

/* Block states (default storage) */
DW_ASW_AST ASW_AST_DW;

/* Real-time model */
static RT_MODEL_ASW_AST ASW_AST_M_;
RT_MODEL_ASW_AST *const ASW_AST_M = &ASW_AST_M_;

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */


/*
 * System initialize for atomic system:
 *    '<S93>/Chart'
 *    '<S94>/Chart'
 *    '<S140>/Chart'
 */

/*
 * Output and update for atomic system:
 *    '<S93>/Chart'
 *    '<S94>/Chart'
 *    '<S140>/Chart'
 */
void ASW_AST_Chart(boolean rtu_lb_incrRatLimOn, boolean rtu_lb_decrRatLimOn,
                   boolean *rty_lb_noRatLimReq, boolean *rty_lb_incrRatLimReq,
                   boolean *rty_lb_decrRatLimReq)
{
  /* Chart: '<S93>/Chart' */
  /* Gateway: lib_RateLimiter_YXQ_0/Chart */
  /* During: lib_RateLimiter_YXQ_0/Chart */
  /* Entry Internal: lib_RateLimiter_YXQ_0/Chart */
  /* Transition: '<S98>:24' */
  if ((!rtu_lb_incrRatLimOn) && rtu_lb_decrRatLimOn) {
    /* Transition: '<S98>:31' */
    /* Transition: '<S98>:34' */
    *rty_lb_noRatLimReq = false;
    *rty_lb_incrRatLimReq = false;
    *rty_lb_decrRatLimReq = true;

    /* Transition: '<S98>:36' */

    /* Transition: '<S98>:27' */
  } else if (rtu_lb_incrRatLimOn && (!rtu_lb_decrRatLimOn)) {
    /* Transition: '<S98>:5' */
    /* Transition: '<S98>:7' */
    *rty_lb_noRatLimReq = false;
    *rty_lb_incrRatLimReq = true;
    *rty_lb_decrRatLimReq = false;

    /* Transition: '<S98>:8' */
  } else {
    /* Transition: '<S98>:9' */
    *rty_lb_noRatLimReq = true;
    *rty_lb_incrRatLimReq = false;
    *rty_lb_decrRatLimReq = false;

    /* Transition: '<S98>:29' */
  }

  /* End of Chart: '<S93>/Chart' */
  /* Transition: '<S98>:39' */
}

/* System initialize for atomic system: '<Root>/AST_SlwTask' */


/* Output and update for atomic system: '<Root>/AST_SlwTask' */
void AST_SlwTask(void)
{
  sint32 i;
  sint32 i_0;
  sint32 rtb_Add1;
  uint32 tmp;
  dt_RadAng_u16r15b0 rtb_Add1_gqbm;
  dt_RadAng_u16r15b0 rtb_Switch3;
  dt_Standardize_s16p15b0 rtb_VectorConcatenate_kzws[40];
  dt_Standardize_s16p15b0 rtb_VectorConcatenate[20];
  dt_Standardize_s16p15b0 rtb_Abs1_pahi;
  dt_Standardize_s16p15b0 rtb_Abs3;
  dt_Standardize_s16p15b0 rtb_Abs4;
  dt_Standardize_s16p15b0 rtb_Abs5;
  dt_Standardize_s16p15b0 rtb_Abs_dugl;
  dt_Standardize_s16p15b0 rtb_Abs_lsfq;
  dt_Standardize_s16p15b0 rtb_Add1_ceyr;
  dt_Standardize_s16p15b0 rtb_Add1_jyuu;
  dt_Standardize_s16p15b0 rtb_Add1_np2v;
  dt_Standardize_s16p15b0 rtb_Divide1_azfz;
  dt_Standardize_s16p15b0 rtb_Divide2;
  dt_Standardize_s16p15b0 rtb_Divide5;
  dt_Standardize_s16p15b0 rtb_Divide_gqgg;
  dt_Standardize_s16p15b0 rtb_Gain1_nzn1;
  dt_Standardize_s16p15b0 rtb_Gain2;
  dt_Standardize_s16p15b0 rtb_Gain3;
  dt_Standardize_s16p15b0 rtb_Gain4;
  dt_Standardize_s16p15b0 rtb_Merge;
  dt_Standardize_s16p15b0 rtb_Merge_cgss;
  dt_Standardize_s16p15b0 rtb_Product1_czva;
  dt_Standardize_s16p15b0 rtb_Product2_hnnw;
  dt_Standardize_s16p15b0 rtb_Saturation10;
  dt_Standardize_s16p15b0 rtb_Saturation2_d1yk;
  dt_Standardize_s16p15b0 rtb_Saturation2_lgdr;
  dt_Standardize_s16p15b0 rtb_Saturation5;
  dt_Standardize_s16p15b0 rtb_Saturation_ktxb;
  dt_Standardize_s16p15b0 rtb_Saturation_mhbk;
  dt_Standardize_s16p15b0 rtb_Saturation_mwki;
  dt_Standardize_s16p15b0 rtb_Saturation_os4q;
  dt_Standardize_s16p15b0 rtb_Switch2_hbuz;
  dt_Standardize_s16p15b0 rtb_Switch2_nvvx;
  dt_Standardize_s16p15b0 rtb_Switch3_acfy;
  dt_Standardize_s16p15b0 rtb_Switch4;
  dt_Standardize_s16p15b0 rtb_Switch_ardc;
  dt_Standardize_s16p15b0 rtb_Switch_eeka;
  dt_Standardize_s16p15b0 rtb_Switch_mzyp;
  dt_Standardize_s16p15b0 rtb_Switch_oqhk;
  dt_Standardize_s16p15b0 rtb_iPhsCurrLimMap_tPCB;
  dt_Standardize_s16p15b0 rtb_iSplyCurrLimMap_SplyVltg;
  dt_Standardize_s16p15b0 rtb_iSplyCurrLimMap_tPCB;
  dt_Standardize_s16p15b0 rtb_lb_genMaxInpMods;
  dt_Standardize_u16p15b0 rtb_Gu16_etaCtlBrd_MAP;
  dt_Standardize_u16p15b0 rtb_Product_meyy;
  dt_Standardize_u16p15b0 rtb_Saturation1_cvzz;
  dt_Standardize_u16p15b0 rtb_Saturation_k1hr;
  sint16 rtb_Abs1_ih4a;
  sint16 rtb_Add2_gdfb;
  sint16 rtb_DataTypeConversion_ei10;
  sint16 y;
  sint16 y_0;
  uint16 rtb_Abs;
  uint16 rtb_Divide;
  uint16 rtb_Gain1_mnsi;
  uint16 rtb_Min2;
  uint16 rtb_Product;
  uint16 rtb_Product1;
  uint16 rtb_Saturation;
  uint16 rtb_Switch2;
  uint16 u0;
  ENM_AG_POS_EVAL_MODE rtb_enm_modeAgEvalMode;
  ENM_SYS_STATUS rtb_enmSysStas;
  uint8 tmp_0;
  boolean rtb_lb_decrRatLimReq_e0p2;
  boolean rtb_lb_decrRatLimReq_ja4e;
  boolean rtb_lb_incrRatLimReq_bzay;
  boolean rtb_lb_noRatLimReq_m20l;

  /* Saturate: '<S2>/Saturation1' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  if (busAST_SlwTaskIn.s16_iActDaxQaxCurr[0] > 14746) {
    y = 14746;
  } else if (busAST_SlwTaskIn.s16_iActDaxQaxCurr[0] < -14746) {
    y = -14746;
  } else {
    y = busAST_SlwTaskIn.s16_iActDaxQaxCurr[0];
  }

  if (busAST_SlwTaskIn.s16_iActDaxQaxCurr[1] > 14746) {
    y_0 = 14746;
  } else if (busAST_SlwTaskIn.s16_iActDaxQaxCurr[1] < -14746) {
    y_0 = -14746;
  } else {
    y_0 = busAST_SlwTaskIn.s16_iActDaxQaxCurr[1];
  }

  /* If: '<S13>/If' incorporates:
   *  Abs: '<S17>/Abs'
   *  Logic: '<S13>/AND'
   *  RelationalOperator: '<S15>/Compare'
   *  RelationalOperator: '<S16>/Compare'
   *  Saturate: '<S2>/Saturation1'
   */
  if ((y == 0) && (y_0 == 0)) {
    /* Outputs for IfAction SubSystem: '<S13>/ias_ZeroInput' incorporates:
     *  ActionPort: '<S18>/Action Port'
     */
    /* Merge: '<S13>/Merge' incorporates:
     *  Constant: '<S18>/Constant'
     *  SignalConversion generated from: '<S18>/lb_genHypt'
     */
    ASW_AST_B.Merge = 0;

    /* End of Outputs for SubSystem: '<S13>/ias_ZeroInput' */
  } else {
    /* Outputs for IfAction SubSystem: '<S13>/ias_NonZeroInput' incorporates:
     *  ActionPort: '<S17>/Action Port'
     */
    if (y < 0) {
      /* Abs: '<S17>/Abs' */
      rtb_Abs_lsfq = (dt_Standardize_s16p15b0)(-y);
    } else {
      /* Abs: '<S17>/Abs' */
      rtb_Abs_lsfq = y;
    }

    /* Abs: '<S17>/Abs1' */
    if (y_0 < 0) {
      rtb_Abs1_pahi = (dt_Standardize_s16p15b0)(-y_0);
    } else {
      rtb_Abs1_pahi = y_0;
    }

    /* End of Abs: '<S17>/Abs1' */

    /* MinMax: '<S17>/Min1' incorporates:
     *  Abs: '<S17>/Abs'
     *  Abs: '<S17>/Abs1'
     */
    if (rtb_Abs_lsfq >= rtb_Abs1_pahi) {
      rtb_lb_genMaxInpMods = rtb_Abs_lsfq;
    } else {
      rtb_lb_genMaxInpMods = rtb_Abs1_pahi;
    }

    /* End of MinMax: '<S17>/Min1' */

    /* Selector: '<S17>/Selector1' incorporates:
     *  Abs: '<S17>/Abs'
     *  Abs: '<S17>/Abs1'
     *  Gain: '<S17>/Gain'
     *  MinMax: '<S17>/Min'
     *  MinMax: '<S17>/Min1'
     *  Product: '<S17>/Divide2'
     *  Saturate: '<S17>/Saturation'
     */
    if (rtb_Abs_lsfq <= rtb_Abs1_pahi) {
      y = rtb_Abs_lsfq;
    } else {
      y = rtb_Abs1_pahi;
    }

    u0 = (uint16)((511U * ((uint16)((y << 15) / rtb_lb_genMaxInpMods))) >> 15);
    if (u0 <= 511) {
    } else {
      u0 = 511U;
    }

    /* Merge: '<S13>/Merge' incorporates:
     *  Constant: '<S17>/Constant3'
     *  MinMax: '<S17>/Min1'
     *  Product: '<S17>/Multiply'
     *  Saturate: '<S17>/Saturation'
     *  Selector: '<S17>/Selector1'
     *  SignalConversion generated from: '<S17>/lb_genHypt'
     */
    ASW_AST_B.Merge = (dt_Standardize_s16p15b0)((rtCP_Constant3_Value[u0] *
      rtb_lb_genMaxInpMods) >> 15);

    /* End of Outputs for SubSystem: '<S13>/ias_NonZeroInput' */
  }

  /* End of If: '<S13>/If' */

  /* Saturate: '<S5>/Saturation6' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  if (busAST_SlwTaskIn.s16_uModulDaxQaxVltg[0] >= -32767) {
    y = busAST_SlwTaskIn.s16_uModulDaxQaxVltg[0];
  } else {
    y = -32767;
  }

  /* Saturate: '<S5>/Saturation7' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  if (busAST_SlwTaskIn.s16_iActDaxQaxCurr[0] > 14746) {
    y_0 = 14746;
  } else if (busAST_SlwTaskIn.s16_iActDaxQaxCurr[0] < -14746) {
    y_0 = -14746;
  } else {
    y_0 = busAST_SlwTaskIn.s16_iActDaxQaxCurr[0];
  }

  /* Gain: '<S5>/Gain1' incorporates:
   *  Product: '<S5>/Product'
   *  Saturate: '<S5>/Saturation6'
   *  Saturate: '<S5>/Saturation7'
   */
  rtb_Gain1_nzn1 = (dt_Standardize_s16p15b0)((16777 * ((y * y_0) >> 14)) >> 11);

  /* Saturate: '<S5>/Saturation6' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  if (busAST_SlwTaskIn.s16_uModulDaxQaxVltg[1] >= -32767) {
    y = busAST_SlwTaskIn.s16_uModulDaxQaxVltg[1];
  } else {
    y = -32767;
  }

  /* Saturate: '<S5>/Saturation7' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  if (busAST_SlwTaskIn.s16_iActDaxQaxCurr[1] > 14746) {
    y_0 = 14746;
  } else if (busAST_SlwTaskIn.s16_iActDaxQaxCurr[1] < -14746) {
    y_0 = -14746;
  } else {
    y_0 = busAST_SlwTaskIn.s16_iActDaxQaxCurr[1];
  }

  /* Gain: '<S5>/Gain2' incorporates:
   *  Product: '<S5>/Product2'
   *  Saturate: '<S5>/Saturation6'
   *  Saturate: '<S5>/Saturation7'
   */
  rtb_Gain2 = (dt_Standardize_s16p15b0)((16777 * ((y * y_0) >> 14)) >> 11);

  /* Saturate: '<S5>/Saturation1' incorporates:
   *  Gain: '<S5>/Gain1'
   */
  if (rtb_Gain1_nzn1 > 16384) {
    y = 16384;
  } else if (rtb_Gain1_nzn1 < -16384) {
    y = -16384;
  } else {
    y = rtb_Gain1_nzn1;
  }

  /* Saturate: '<S5>/Saturation2' incorporates:
   *  Gain: '<S5>/Gain2'
   */
  if (rtb_Gain2 > 16384) {
    y_0 = 16384;
  } else if (rtb_Gain2 < -16384) {
    y_0 = -16384;
  } else {
    y_0 = rtb_Gain2;
  }

  /* Sum: '<S5>/Add2' incorporates:
   *  Saturate: '<S5>/Saturation1'
   *  Saturate: '<S5>/Saturation2'
   */
  rtb_Add2_gdfb = (sint16)((y + y_0) >> 1);

  /* Abs: '<S5>/Abs1' incorporates:
   *  Sum: '<S5>/Add2'
   */
  if (rtb_Add2_gdfb < 0) {
    rtb_Abs1_ih4a = (sint16)(-rtb_Add2_gdfb);
  } else {
    rtb_Abs1_ih4a = rtb_Add2_gdfb;
  }

  /* End of Abs: '<S5>/Abs1' */

  /* Saturate: '<S5>/Saturation' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  if (busAST_SlwTaskIn.u16_uSplyVltg > 32767) {
    rtb_Saturation_k1hr = 32767U;
  } else if (busAST_SlwTaskIn.u16_uSplyVltg < 3072) {
    rtb_Saturation_k1hr = 3072U;
  } else {
    rtb_Saturation_k1hr = busAST_SlwTaskIn.u16_uSplyVltg;
  }

  /* End of Saturate: '<S5>/Saturation' */

  /* Saturate: '<S5>/Saturation3' incorporates:
   *  Abs: '<S5>/Abs1'
   */
  if (rtb_Abs1_ih4a > 8192) {
    y = 8192;
  } else {
    y = rtb_Abs1_ih4a;
  }

  /* Gain: '<S5>/Gain3' incorporates:
   *  Gain: '<S5>/Gain'
   *  Product: '<S5>/Divide'
   *  Saturate: '<S5>/Saturation'
   *  Saturate: '<S5>/Saturation3'
   */
  rtb_Gain3 = (dt_Standardize_s16p15b0)((125U * ((uint16)((((uint32)(6 * y)) <<
    11) / rtb_Saturation_k1hr))) >> 8);

  /* Saturate: '<S5>/Saturation4' incorporates:
   *  Gain: '<S5>/Gain3'
   */
  if (rtb_Gain3 > 14746) {
    /* Saturate: '<S5>/Saturation4' */
    ASW_AST_B.Saturation4 = 14746;
  } else {
    /* Saturate: '<S5>/Saturation4' */
    ASW_AST_B.Saturation4 = rtb_Gain3;
  }

  /* End of Saturate: '<S5>/Saturation4' */

  /* SignalConversion generated from: '<S74>/Vector Concatenate' incorporates:
   *  Saturate: '<S5>/Saturation4'
   */
  rtb_VectorConcatenate_kzws[0] = ASW_AST_B.Saturation4;

  /* SignalConversion generated from: '<S14>/Vector Concatenate' incorporates:
   *  Merge: '<S13>/Merge'
   */
  rtb_VectorConcatenate[0] = ASW_AST_B.Merge;

  /* S-Function (sfix_udelay): '<S14>/Tapped Delay' */
  for (i_0 = 0; i_0 < 19; i_0++) {
    rtb_VectorConcatenate[i_0 + 1] = ASW_AST_DW.TappedDelay_DWORK1[i_0];
  }

  /* End of S-Function (sfix_udelay): '<S14>/Tapped Delay' */

  /* Sum: '<S14>/Sum of Elements' incorporates:
   *  Concatenate: '<S14>/Vector Concatenate'
   *  Sum: '<S74>/Sum of Elements'
   */
  i_0 = 0;
  for (i = 0; i < 20; i++) {
    i_0 += rtb_VectorConcatenate[i];
  }

  /* Product: '<S14>/Divide' incorporates:
   *  Sum: '<S14>/Sum of Elements'
   */
  rtb_Divide_gqgg = (dt_Standardize_s16p15b0)((i_0 << 4) / 320);

  /* Saturate: '<S5>/Saturation10' incorporates:
   *  Product: '<S14>/Divide'
   */
  if (rtb_Divide_gqgg > 14746) {
    rtb_Saturation10 = 14746;
  } else if (rtb_Divide_gqgg < -14746) {
    rtb_Saturation10 = -14746;
  } else {
    rtb_Saturation10 = rtb_Divide_gqgg;
  }

  /* End of Saturate: '<S5>/Saturation10' */

  /* Logic: '<S165>/Logical Operator' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   *  Logic: '<S78>/Logical Operator'
   *  Switch: '<S80>/Switch3'
   */
  rtb_lb_incrRatLimReq_bzay = ((busAST_SlwTaskIn.busOBD_FaltSt.bol_flgComFaltFlg)
    || (busAST_SlwTaskIn.busOBD_FaltSt.bol_flgBusOffFaltFlg));

  /* Saturate: '<S165>/Saturation2' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  if (busAST_SlwTaskIn.s16_nActElecSpd >= -32767) {
    rtb_Saturation2_lgdr = busAST_SlwTaskIn.s16_nActElecSpd;
  } else {
    rtb_Saturation2_lgdr = -32767;
  }

  /* End of Saturate: '<S165>/Saturation2' */

  /* Chart: '<S165>/sfc_SysSTM' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   *  Logic: '<S165>/Logical Operator'
   *  Saturate: '<S165>/Saturation2'
   */
  /* Gateway: AST_SlwTask/vrs_SysSTM/rss_SysSTM_GEELY/sfc_SysSTM */
  /* During: AST_SlwTask/vrs_SysSTM/rss_SysSTM_GEELY/sfc_SysSTM */
  if (ASW_AST_DW.is_active_c2_ASW_AST == 0U) {
    /* Entry: AST_SlwTask/vrs_SysSTM/rss_SysSTM_GEELY/sfc_SysSTM */
    ASW_AST_DW.is_active_c2_ASW_AST = 1U;

    /* Entry Internal: AST_SlwTask/vrs_SysSTM/rss_SysSTM_GEELY/sfc_SysSTM */
    /* Transition: '<S166>:2' */
    ASW_AST_DW.is_c2_ASW_AST = IN_SYSINIT;

    /* Entry 'SYSINIT': '<S166>:1' */
    rtb_enmSysStas = SYSINIT;
    ASW_AST_DW.u16_ctSysStInitWaitCnt = 0U;
  } else {
    switch (ASW_AST_DW.is_c2_ASW_AST) {
     case IN_LIMPHOME:
      rtb_enmSysStas = LIMPHOME;

      /* During 'LIMPHOME': '<S166>:131' */
      if (busAST_SlwTaskIn.u8_stMaxFaltLvl == 3) {
        /* Transition: '<S166>:132' */
        ASW_AST_DW.is_c2_ASW_AST = IN_SYSFAIL;

        /* Entry 'SYSFAIL': '<S166>:129' */
        rtb_enmSysStas = SYSFAIL;
      } else if (!rtb_lb_incrRatLimReq_bzay) {
        /* Transition: '<S166>:135' */
        ASW_AST_DW.is_c2_ASW_AST = IN_NORMAL;

        /* Entry 'NORMAL': '<S166>:4' */
        /* Entry Internal 'NORMAL': '<S166>:4' */
        /* Transition: '<S166>:127' */
        ASW_AST_DW.is_NORMAL = IN_RUN;

        /* Entry 'RUN': '<S166>:128' */
        rtb_enmSysStas = RUN;
      }
      break;

     case IN_NORMAL:
      /* During 'NORMAL': '<S166>:4' */
      if (busAST_SlwTaskIn.u8_stMaxFaltLvl == 3) {
        /* Transition: '<S166>:130' */
        /* Exit Internal 'NORMAL': '<S166>:4' */
        ASW_AST_DW.is_NORMAL = IN_NO_ACTIVE_CHILD;
        ASW_AST_DW.is_c2_ASW_AST = IN_SYSFAIL;

        /* Entry 'SYSFAIL': '<S166>:129' */
        rtb_enmSysStas = SYSFAIL;
      } else if (ASW_AST_DW.is_NORMAL == IN_RUN) {
        rtb_enmSysStas = RUN;

        /* During 'RUN': '<S166>:128' */
        if (busAST_SlwTaskIn.u8_modeMCUOpMode == 0) {
          /* Transition: '<S166>:137' */
          ASW_AST_DW.is_NORMAL = IN_STANDBY;

          /* Entry 'STANDBY': '<S166>:126' */
          rtb_enmSysStas = STANDBY;
        } else if (rtb_lb_incrRatLimReq_bzay) {
          /* Transition: '<S166>:133' */
          ASW_AST_DW.is_NORMAL = IN_NO_ACTIVE_CHILD;
          ASW_AST_DW.is_c2_ASW_AST = IN_LIMPHOME;

          /* Entry 'LIMPHOME': '<S166>:131' */
          rtb_enmSysStas = LIMPHOME;
        }
      } else {
        rtb_enmSysStas = STANDBY;

        /* During 'STANDBY': '<S166>:126' */
        if (busAST_SlwTaskIn.u8_modeMCUOpMode == 1) {
          /* Transition: '<S166>:136' */
          ASW_AST_DW.is_NORMAL = IN_RUN;

          /* Entry 'RUN': '<S166>:128' */
          rtb_enmSysStas = RUN;
        } else if ((busAST_SlwTaskIn.bol_flgSlepEn) || rtb_lb_incrRatLimReq_bzay)
        {
          if (rtb_Saturation2_lgdr < 0) {
            i_0 = -rtb_Saturation2_lgdr;
            if ((-rtb_Saturation2_lgdr) > 32767) {
              i_0 = 32767;
            }

            y = (sint16)i_0;
          } else {
            y = rtb_Saturation2_lgdr;
          }

          if (Gs16_nShOffActElecSpd_C < 0) {
            i_0 = -Gs16_nShOffActElecSpd_C;
            if ((-Gs16_nShOffActElecSpd_C) > 32767) {
              i_0 = 32767;
            }

            y_0 = (sint16)i_0;
          } else {
            y_0 = Gs16_nShOffActElecSpd_C;
          }

          if (y < y_0) {
            rtb_lb_noRatLimReq_m20l = true;

            /* Transition: '<S166>:146' */
            /* Transition: '<S166>:168' */
            ASW_AST_DW.is_NORMAL = IN_NO_ACTIVE_CHILD;
            ASW_AST_DW.is_c2_ASW_AST = IN_SYSSLEEP;

            /* Entry 'SYSSLEEP': '<S166>:139' */
            rtb_enmSysStas = SYSSLEEP;
          } else {
            rtb_lb_noRatLimReq_m20l = false;
          }
        } else {
          rtb_lb_noRatLimReq_m20l = false;
        }
      }
      break;

     case IN_SYSFAIL:
      rtb_enmSysStas = SYSFAIL;

      /* During 'SYSFAIL': '<S166>:129' */
      if (busAST_SlwTaskIn.u8_stMaxFaltLvl != 3) {
        /* Transition: '<S166>:134' */
        ASW_AST_DW.is_c2_ASW_AST = IN_NORMAL;

        /* Entry 'NORMAL': '<S166>:4' */
        /* Entry Internal 'NORMAL': '<S166>:4' */
        /* Transition: '<S166>:127' */
        ASW_AST_DW.is_NORMAL = IN_RUN;

        /* Entry 'RUN': '<S166>:128' */
        rtb_enmSysStas = RUN;
      } else if (((busAST_SlwTaskIn.bol_flgSlepEn) || rtb_lb_incrRatLimReq_bzay)
                 && (busAST_SlwTaskIn.u8_modeMCUOpMode == 0)) {
        if (rtb_Saturation2_lgdr < 0) {
          i_0 = -rtb_Saturation2_lgdr;
          if ((-rtb_Saturation2_lgdr) > 32767) {
            i_0 = 32767;
          }

          y = (sint16)i_0;
        } else {
          y = rtb_Saturation2_lgdr;
        }

        if (Gs16_nShOffActElecSpd_C < 0) {
          i_0 = -Gs16_nShOffActElecSpd_C;
          if ((-Gs16_nShOffActElecSpd_C) > 32767) {
            i_0 = 32767;
          }

          y_0 = (sint16)i_0;
        } else {
          y_0 = Gs16_nShOffActElecSpd_C;
        }

        if (y < y_0) {
          rtb_lb_noRatLimReq_m20l = true;

          /* Transition: '<S166>:143' */
          /* Transition: '<S166>:147' */
          /* Transition: '<S166>:168' */
          ASW_AST_DW.is_c2_ASW_AST = IN_SYSSLEEP;

          /* Entry 'SYSSLEEP': '<S166>:139' */
          rtb_enmSysStas = SYSSLEEP;
        } else {
          rtb_lb_noRatLimReq_m20l = false;
        }
      } else {
        rtb_lb_noRatLimReq_m20l = false;
      }
      break;

     case IN_SYSINIT:
      rtb_enmSysStas = SYSINIT;

      /* During 'SYSINIT': '<S166>:1' */
      if (ASW_AST_DW.u16_ctSysStInitWaitCnt >= Gu16_ctSysStInitWaitCnt_C) {
        /* Transition: '<S166>:153' */
        /* Exit 'SYSINIT': '<S166>:1' */
        ASW_AST_DW.u16_ctSysStInitWaitCnt = 0U;
        ASW_AST_DW.is_c2_ASW_AST = IN_NORMAL;

        /* Entry 'NORMAL': '<S166>:4' */
        /* Entry Internal 'NORMAL': '<S166>:4' */
        /* Transition: '<S166>:127' */
        ASW_AST_DW.is_NORMAL = IN_RUN;

        /* Entry 'RUN': '<S166>:128' */
        rtb_enmSysStas = RUN;
      } else {
        ASW_AST_DW.u16_ctSysStInitWaitCnt++;
      }
      break;

     default:
      rtb_enmSysStas = SYSSLEEP;

      /* During 'SYSSLEEP': '<S166>:139' */
      break;
    }
  }

  /* End of Chart: '<S165>/sfc_SysSTM' */

  /* SwitchCase: '<S81>/Switch Case' incorporates:
   *  DataTypeConversion: '<S81>/Data Type Conversion1'
   */
  switch (rtb_enmSysStas) {
   case 1:
    /* Saturate: '<S78>/Saturation3' incorporates:
     *  Inport: '<Root>/busAST_SlwTaskIn'
     */
    if (busAST_SlwTaskIn.s16_nComRefMechSpd > 10000) {
      /* Outputs for IfAction SubSystem: '<S81>/sas_SysStRunCs' incorporates:
       *  ActionPort: '<S133>/Action Port'
       */
      /* SignalConversion generated from: '<S133>/s16_nComRefMechSpd' incorporates:
       *  Merge: '<S81>/Merge'
       */
      rtb_Merge = 10000;

      /* End of Outputs for SubSystem: '<S81>/sas_SysStRunCs' */
    } else if (busAST_SlwTaskIn.s16_nComRefMechSpd < -10000) {
      /* Outputs for IfAction SubSystem: '<S81>/sas_SysStRunCs' incorporates:
       *  ActionPort: '<S133>/Action Port'
       */
      /* SignalConversion generated from: '<S133>/s16_nComRefMechSpd' incorporates:
       *  Merge: '<S81>/Merge'
       */
      rtb_Merge = -10000;

      /* End of Outputs for SubSystem: '<S81>/sas_SysStRunCs' */
    } else {
      /* Outputs for IfAction SubSystem: '<S81>/sas_SysStRunCs' incorporates:
       *  ActionPort: '<S133>/Action Port'
       */
      /* SignalConversion generated from: '<S133>/s16_nComRefMechSpd' incorporates:
       *  Merge: '<S81>/Merge'
       */
      rtb_Merge = busAST_SlwTaskIn.s16_nComRefMechSpd;

      /* End of Outputs for SubSystem: '<S81>/sas_SysStRunCs' */
    }

    /* End of Saturate: '<S78>/Saturation3' */
    break;

   case 5:
    /* Outputs for IfAction SubSystem: '<S81>/sas_SysStLmpHmeCs' incorporates:
     *  ActionPort: '<S132>/Action Port'
     */
    /* SignalConversion generated from: '<S132>/s16_nSysSTMRefMechSpdLmpHmeCs' incorporates:
     *  Constant: '<S132>/Constant'
     *  Merge: '<S81>/Merge'
     */
    rtb_Merge = Gs16_nLmpHmeRefMechSpd_C;

    /* End of Outputs for SubSystem: '<S81>/sas_SysStLmpHmeCs' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S81>/sas_SysStDflCs' incorporates:
     *  ActionPort: '<S131>/Action Port'
     */
    /* SignalConversion generated from: '<S131>/s16_nSysSTMRefMechSpdDflCs' incorporates:
     *  Constant: '<S131>/Constant'
     *  Merge: '<S81>/Merge'
     */
    rtb_Merge = 0;

    /* End of Outputs for SubSystem: '<S81>/sas_SysStDflCs' */
    break;
  }

  /* End of SwitchCase: '<S81>/Switch Case' */

  /* Saturate: '<S78>/Saturation2' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  if (busAST_SlwTaskIn.s16_nFaltRefMechSpd > 10000) {
    rtb_Saturation2_d1yk = 10000;
  } else if (busAST_SlwTaskIn.s16_nFaltRefMechSpd < -10000) {
    rtb_Saturation2_d1yk = -10000;
  } else {
    rtb_Saturation2_d1yk = busAST_SlwTaskIn.s16_nFaltRefMechSpd;
  }

  /* End of Saturate: '<S78>/Saturation2' */

  /* Saturate: '<S128>/Saturation' incorporates:
   *  Constant: '<S128>/Constant'
   */
  if (Gs16_nMaxRefMechSpd_C > 10000) {
    rtb_Saturation_mwki = 10000;
  } else if (Gs16_nMaxRefMechSpd_C < -10000) {
    rtb_Saturation_mwki = -10000;
  } else {
    rtb_Saturation_mwki = Gs16_nMaxRefMechSpd_C;
  }

  /* End of Saturate: '<S128>/Saturation' */

  /* Abs: '<S80>/Abs5' incorporates:
   *  Saturate: '<S128>/Saturation'
   */
  if (rtb_Saturation_mwki < 0) {
    rtb_Abs5 = (dt_Standardize_s16p15b0)(-rtb_Saturation_mwki);
  } else {
    rtb_Abs5 = rtb_Saturation_mwki;
  }

  /* End of Abs: '<S80>/Abs5' */

  /* Switch: '<S80>/Switch3' incorporates:
   *  Constant: '<S80>/Constant1'
   *  Inport: '<Root>/busAST_SlwTaskIn'
   *  Logic: '<S80>/Logical Operator1'
   *  Merge: '<S81>/Merge'
   *  MinMax: '<S80>/Min'
   *  Saturate: '<S78>/Saturation2'
   *  Switch: '<S80>/Switch'
   */
  if (busAST_SlwTaskIn.bol_flgOvrTstCtlUDS2F) {
    rtb_Switch3_acfy = Gs16_nUDS2FRefMechSpd_C;
  } else if ((busAST_SlwTaskIn.busOBD_FaltSt.bol_flgMotoStallTmpFlg) ||
             rtb_lb_incrRatLimReq_bzay) {
    /* Switch: '<S80>/Switch' incorporates:
     *  Saturate: '<S78>/Saturation2'
     *  Switch: '<S80>/Switch3'
     */
    rtb_Switch3_acfy = rtb_Saturation2_d1yk;
  } else if (rtb_Merge <= rtb_Saturation2_d1yk) {
    /* MinMax: '<S80>/Min' incorporates:
     *  Merge: '<S81>/Merge'
     *  Switch: '<S80>/Switch'
     *  Switch: '<S80>/Switch3'
     */
    rtb_Switch3_acfy = rtb_Merge;
  } else {
    /* Switch: '<S80>/Switch3' incorporates:
     *  MinMax: '<S80>/Min'
     *  Saturate: '<S78>/Saturation2'
     *  Switch: '<S80>/Switch'
     */
    rtb_Switch3_acfy = rtb_Saturation2_d1yk;
  }

  /* Saturate: '<S130>/Saturation' incorporates:
   *  Constant: '<S130>/Constant'
   */
  if (Gs16_nMinRefMechSpd_C > 10000) {
    rtb_Saturation_ktxb = 10000;
  } else if (Gs16_nMinRefMechSpd_C < -10000) {
    rtb_Saturation_ktxb = -10000;
  } else {
    rtb_Saturation_ktxb = Gs16_nMinRefMechSpd_C;
  }

  /* End of Saturate: '<S130>/Saturation' */

  /* Abs: '<S80>/Abs4' incorporates:
   *  Saturate: '<S130>/Saturation'
   */
  if (rtb_Saturation_ktxb < 0) {
    rtb_Abs4 = (dt_Standardize_s16p15b0)(-rtb_Saturation_ktxb);
  } else {
    rtb_Abs4 = rtb_Saturation_ktxb;
  }

  /* End of Abs: '<S80>/Abs4' */

  /* Switch: '<S126>/Switch2' incorporates:
   *  Abs: '<S80>/Abs4'
   *  Abs: '<S80>/Abs5'
   *  RelationalOperator: '<S126>/Relational Operator2'
   */
  if (rtb_Abs5 > rtb_Abs4) {
    /* Abs: '<S80>/Abs3' incorporates:
     *  Switch: '<S80>/Switch3'
     */
    if (rtb_Switch3_acfy < 0) {
      rtb_Abs3 = (dt_Standardize_s16p15b0)(-rtb_Switch3_acfy);
    } else {
      rtb_Abs3 = rtb_Switch3_acfy;
    }

    /* End of Abs: '<S80>/Abs3' */

    /* Switch: '<S126>/Switch1' incorporates:
     *  Abs: '<S80>/Abs3'
     *  RelationalOperator: '<S126>/Relational Operator1'
     */
    if (rtb_Abs3 <= rtb_Abs5) {
      /* Switch: '<S126>/Switch' incorporates:
       *  RelationalOperator: '<S126>/Relational Operator'
       */
      if (rtb_Abs3 >= rtb_Abs4) {
        /* Switch: '<S126>/Switch2' */
        rtb_Switch2_hbuz = rtb_Abs3;
      } else {
        /* Switch: '<S126>/Switch2' */
        rtb_Switch2_hbuz = rtb_Abs4;
      }

      /* End of Switch: '<S126>/Switch' */
    } else {
      /* Switch: '<S126>/Switch2' */
      rtb_Switch2_hbuz = rtb_Abs5;
    }

    /* End of Switch: '<S126>/Switch1' */
  } else {
    rtb_Switch2_hbuz = rtb_Abs5;
  }

  /* End of Switch: '<S126>/Switch2' */

  /* Switch: '<S80>/Switch1' incorporates:
   *  Constant: '<S123>/Constant'
   *  Constant: '<S80>/Constant'
   *  Gain: '<S80>/Gain'
   *  Inport: '<Root>/busAST_SlwTaskIn'
   *  Logic: '<S80>/Logical Operator'
   *  Merge: '<S81>/Merge'
   *  RelationalOperator: '<S120>/Compare'
   *  RelationalOperator: '<S121>/Compare'
   *  RelationalOperator: '<S122>/Compare'
   *  RelationalOperator: '<S123>/Compare'
   *  Saturate: '<S78>/Saturation2'
   *  Switch: '<S126>/Switch2'
   *  Switch: '<S80>/Switch2'
   *  Switch: '<S80>/Switch3'
   */
  if ((((rtb_Merge == 0) || (rtb_Saturation2_d1yk == 0)) ||
       (busAST_SlwTaskIn.u8_modeMCUOpMode == 6)) ||
      (busAST_SlwTaskIn.bol_flgSlepEn)) {
    y = 0;
  } else if (rtb_Switch3_acfy > 0) {
    /* Switch: '<S80>/Switch2' incorporates:
     *  Switch: '<S126>/Switch2'
     */
    y = rtb_Switch2_hbuz;
  } else {
    y = (dt_Standardize_s16p15b0)(-rtb_Switch2_hbuz);
  }

  /* Saturate: '<S97>/Saturation' incorporates:
   *  Constant: '<S97>/Constant'
   */
  if (Gu8_numPPNum_C > 6) {
    tmp_0 = 6U;
  } else if (Gu8_numPPNum_C < 2) {
    tmp_0 = 2U;
  } else {
    tmp_0 = Gu8_numPPNum_C;
  }

  /* Product: '<S79>/Divide2' incorporates:
   *  Gain: '<S79>/RpmToRdps_1'
   *  Saturate: '<S97>/Saturation'
   *  Switch: '<S80>/Switch1'
   */
  rtb_Divide2 = (dt_Standardize_s16p15b0)(((6863 * y) >> 13) * tmp_0);

  /* Abs: '<S79>/Abs' incorporates:
   *  Product: '<S79>/Divide2'
   */
  if (rtb_Divide2 < 0) {
    y = (sint16)(-rtb_Divide2);
  } else {
    y = rtb_Divide2;
  }

  /* Abs: '<S79>/Abs1' incorporates:
   *  Constant: '<S79>/parMinSnslRefElctSpd'
   */
  if (Gs16_nMinSenlRefElecSpd_C < 0) {
    y_0 = (sint16)(-Gs16_nMinSenlRefElecSpd_C);
  } else {
    y_0 = Gs16_nMinSenlRefElecSpd_C;
  }

  /* Switch: '<S79>/Switch2' incorporates:
   *  Abs: '<S79>/Abs'
   *  Abs: '<S79>/Abs1'
   *  Constant: '<S86>/Constant'
   *  Inport: '<Root>/busAST_SlwTaskIn'
   *  Logic: '<S79>/AND'
   *  Product: '<S79>/Divide2'
   *  RelationalOperator: '<S79>/Relational Operator'
   *  RelationalOperator: '<S86>/Compare'
   */
  if ((y >= y_0) && (busAST_SlwTaskIn.enm_stMotoSt == OPEN_LOOP)) {
    /* Switch: '<S92>/Switch2' incorporates:
     *  Constant: '<S79>/parStlgStrtUpElctSpd'
     *  Gain: '<S79>/Gain1'
     *  RelationalOperator: '<S92>/Relational Operator2'
     */
    if (Gs16_nMaxStrtUpRefElecSpd_C > ((dt_Standardize_s16p15b0)
         (-Gs16_nMaxStrtUpRefElecSpd_C))) {
      /* Switch: '<S92>/Switch1' incorporates:
       *  Product: '<S79>/Divide2'
       *  RelationalOperator: '<S92>/Relational Operator1'
       */
      if (rtb_Divide2 <= Gs16_nMaxStrtUpRefElecSpd_C) {
        /* Switch: '<S92>/Switch' incorporates:
         *  RelationalOperator: '<S92>/Relational Operator'
         */
        if (rtb_Divide2 >= ((dt_Standardize_s16p15b0)
                            (-Gs16_nMaxStrtUpRefElecSpd_C))) {
          /* Switch: '<S79>/Switch2' */
          rtb_Switch2_nvvx = rtb_Divide2;
        } else {
          /* Switch: '<S79>/Switch2' */
          rtb_Switch2_nvvx = (dt_Standardize_s16p15b0)
            (-Gs16_nMaxStrtUpRefElecSpd_C);
        }

        /* End of Switch: '<S92>/Switch' */
      } else {
        /* Switch: '<S79>/Switch2' */
        rtb_Switch2_nvvx = Gs16_nMaxStrtUpRefElecSpd_C;
      }

      /* End of Switch: '<S92>/Switch1' */
    } else {
      /* Switch: '<S79>/Switch2' */
      rtb_Switch2_nvvx = Gs16_nMaxStrtUpRefElecSpd_C;
    }

    /* End of Switch: '<S92>/Switch2' */
  } else {
    rtb_Switch2_nvvx = rtb_Divide2;
  }

  /* End of Switch: '<S79>/Switch2' */

  /* Chart: '<S79>/sfc_OpnLpRefElecSpdConf' incorporates:
   *  Constant: '<S87>/Constant'
   *  Constant: '<S88>/Constant'
   *  Inport: '<Root>/busAST_SlwTaskIn'
   *  Logic: '<S79>/Logical Operator1'
   *  RelationalOperator: '<S86>/Compare'
   *  RelationalOperator: '<S87>/Compare'
   *  RelationalOperator: '<S88>/Compare'
   *  Switch: '<S79>/Switch2'
   *  UnitDelay: '<S79>/Unit Delay'
   */
  /* Gateway: AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/sfc_OpnLpRefElecSpdConf */
  /* During: AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/sfc_OpnLpRefElecSpdConf */
  if (ASW_AST_DW.is_active_c1_ASW_AST == 0U) {
    /* Entry: AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/sfc_OpnLpRefElecSpdConf */
    ASW_AST_DW.is_active_c1_ASW_AST = 1U;

    /* Entry Internal: AST_SlwTask/vrs_RefElecSpdCalc/rss_RefElecSpdCalcHybr/rss_RefElecSpdCalc/sfc_OpnLpRefElecSpdConf */
    /* Transition: '<S95>:2' */
    ASW_AST_DW.is_c1_ASW_AST = IN_STRTUP_SPD;

    /* Entry 'STRTUP_SPD': '<S95>:4' */
  } else if (ASW_AST_DW.is_c1_ASW_AST == IN_ALGN_SPD) {
    /* During 'ALGN_SPD': '<S95>:3' */
    if (ASW_AST_DW.u16_ctAlgnStEndCnt >= Gu16_ctAlgnStEndCnt_C) {
      /* Transition: '<S95>:28' */
      /* Exit 'ALGN_SPD': '<S95>:3' */
      ASW_AST_DW.u16_ctAlgnStEndCnt = 0U;
      ASW_AST_DW.is_c1_ASW_AST = IN_STRTUP_SPD;

      /* Entry 'STRTUP_SPD': '<S95>:4' */
    } else {
      ASW_AST_DW.u16_ctAlgnStEndCnt++;
    }

    /* During 'STRTUP_SPD': '<S95>:4' */
  } else if ((ASW_AST_DW.UnitDelay_DSTATE_jm5t == OFF) &&
             (busAST_SlwTaskIn.enm_stMotoSt == OPEN_LOOP)) {
    /* Transition: '<S95>:111' */
    ASW_AST_DW.is_c1_ASW_AST = IN_ALGN_SPD;

    /* Entry 'ALGN_SPD': '<S95>:3' */
    ASW_AST_B.s16_nOpnLpRefElecSpd = Gs16_nAlgnRefElecSpd_C;
    ASW_AST_DW.u16_ctAlgnStEndCnt = 0U;
  } else {
    ASW_AST_B.s16_nOpnLpRefElecSpd = rtb_Switch2_nvvx;
  }

  /* End of Chart: '<S79>/sfc_OpnLpRefElecSpdConf' */

  /* Switch: '<S102>/Switch1' incorporates:
   *  Constant: '<S102>/Constant1'
   *  Constant: '<S85>/Constant'
   *  Inport: '<Root>/busAST_SlwTaskIn'
   *  RelationalOperator: '<S85>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   *  UnitDelay: '<S102>/Unit Delay1'
   */
  if (ASW_AST_DW.bitsForTID1.UnitDelay1_DSTATE_hx0c) {
    rtb_lb_incrRatLimReq_bzay = (busAST_SlwTaskIn.enm_stMotoSt != CLOSED_LOOP);
  } else {
    rtb_lb_incrRatLimReq_bzay = true;
  }

  /* Switch: '<S102>/Switch' incorporates:
   *  Switch: '<S102>/Switch1'
   *  UnitDelay: '<S102>/Unit Delay'
   *  UnitDelay: '<S79>/Unit Delay1'
   */
  if (rtb_lb_incrRatLimReq_bzay) {
    rtb_Switch_mzyp = ASW_AST_DW.UnitDelay1_DSTATE;
  } else {
    rtb_Switch_mzyp = ASW_AST_DW.UnitDelay_DSTATE_m2qg;
  }

  /* End of Switch: '<S102>/Switch' */

  /* Chart: '<S93>/Chart' incorporates:
   *  Constant: '<S100>/Constant1'
   *  Constant: '<S101>/Constant1'
   *  DataTypeConversion: '<S100>/Data Type Conversion'
   *  DataTypeConversion: '<S101>/Data Type Conversion'
   *  Logic: '<S100>/Logical Operator'
   *  Logic: '<S101>/Logical Operator'
   *  Product: '<S100>/Product'
   *  Product: '<S101>/Product'
   *  RelationalOperator: '<S100>/Equal'
   *  RelationalOperator: '<S100>/Equal1'
   *  RelationalOperator: '<S101>/Equal'
   *  RelationalOperator: '<S101>/Equal1'
   *  Sum: '<S100>/Add'
   *  Sum: '<S101>/Add'
   *  Switch: '<S102>/Switch'
   */
  ASW_AST_Chart(((((sint16)mul_ssu32_hiSR((ASW_AST_B.s16_nOpnLpRefElecSpd -
    rtb_Switch_mzyp) << 15, 26214425U, 9U)) >= (Gs16_facRefSpdRisSlwRate_C >> 5))
                 && (ASW_AST_B.s16_nOpnLpRefElecSpd >= rtb_Switch_mzyp)),
                ((((sint16)mul_ssu32_hiSR((ASW_AST_B.s16_nOpnLpRefElecSpd -
    rtb_Switch_mzyp) << 15, 26214425U, 9U)) <= (Gs16_facRefSpdFallSlwRate_C >> 5))
                 && (ASW_AST_B.s16_nOpnLpRefElecSpd <= rtb_Switch_mzyp)),
                &rtb_lb_noRatLimReq_m20l, &rtb_lb_incrRatLimReq_bzay,
                &rtb_lb_decrRatLimReq_e0p2);

  /* Switch: '<S99>/Switch1' incorporates:
   *  Constant: '<S99>/Constant'
   *  Constant: '<S99>/Constant1'
   *  Switch: '<S99>/Switch'
   */
  if (rtb_lb_noRatLimReq_m20l) {
    y = 0;
  } else if (rtb_lb_incrRatLimReq_bzay) {
    /* Switch: '<S99>/Switch' incorporates:
     *  Constant: '<S99>/Constant2'
     */
    y = Gs16_facRefSpdRisSlwRate_C;
  } else {
    y = Gs16_facRefSpdFallSlwRate_C;
  }

  /* Sum: '<S99>/Add1' incorporates:
   *  Constant: '<S99>/Constant4'
   *  Product: '<S99>/Divide1'
   *  Switch: '<S102>/Switch'
   *  Switch: '<S99>/Switch1'
   */
  rtb_Add1_jyuu = (dt_Standardize_s16p15b0)((((sint16)((y * 41943) >> 14)) +
    (rtb_Switch_mzyp << 5)) >> 5);

  /* Switch: '<S113>/Switch1' incorporates:
   *  Constant: '<S113>/Constant1'
   *  Constant: '<S84>/Constant'
   *  Inport: '<Root>/busAST_SlwTaskIn'
   *  RelationalOperator: '<S84>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   *  UnitDelay: '<S113>/Unit Delay1'
   */
  if (ASW_AST_DW.bitsForTID1.UnitDelay1_DSTATE_k25k) {
    rtb_lb_incrRatLimReq_bzay = (busAST_SlwTaskIn.enm_stMotoSt != OPEN_LOOP);
  } else {
    rtb_lb_incrRatLimReq_bzay = true;
  }

  /* Switch: '<S113>/Switch' incorporates:
   *  Switch: '<S113>/Switch1'
   *  UnitDelay: '<S113>/Unit Delay'
   *  UnitDelay: '<S79>/Unit Delay2'
   */
  if (rtb_lb_incrRatLimReq_bzay) {
    rtb_Switch_oqhk = ASW_AST_DW.UnitDelay2_DSTATE;
  } else {
    rtb_Switch_oqhk = ASW_AST_DW.UnitDelay_DSTATE_ozdy;
  }

  /* End of Switch: '<S113>/Switch' */

  /* Chart: '<S94>/Chart' incorporates:
   *  Constant: '<S111>/Constant1'
   *  Constant: '<S112>/Constant1'
   *  DataTypeConversion: '<S111>/Data Type Conversion'
   *  DataTypeConversion: '<S112>/Data Type Conversion'
   *  Logic: '<S111>/Logical Operator'
   *  Logic: '<S112>/Logical Operator'
   *  Product: '<S111>/Product'
   *  Product: '<S112>/Product'
   *  RelationalOperator: '<S111>/Equal'
   *  RelationalOperator: '<S111>/Equal1'
   *  RelationalOperator: '<S112>/Equal'
   *  RelationalOperator: '<S112>/Equal1'
   *  Sum: '<S111>/Add'
   *  Sum: '<S112>/Add'
   *  Switch: '<S113>/Switch'
   */
  ASW_AST_Chart(((((sint16)mul_ssu32_hiSR((ASW_AST_B.s16_nOpnLpRefElecSpd -
    rtb_Switch_oqhk) << 15, 26214425U, 9U)) >= (Gs16_facRefSpdOLRiseSlwRate_C >>
    5)) && (ASW_AST_B.s16_nOpnLpRefElecSpd >= rtb_Switch_oqhk)), ((((sint16)
    mul_ssu32_hiSR((ASW_AST_B.s16_nOpnLpRefElecSpd - rtb_Switch_oqhk) << 15,
                   26214425U, 9U)) <= (Gs16_facRefSpdOLFallSlwRate_C >> 5)) &&
    (ASW_AST_B.s16_nOpnLpRefElecSpd <= rtb_Switch_oqhk)),
                &rtb_lb_incrRatLimReq_bzay, &rtb_lb_decrRatLimReq_e0p2,
                &rtb_lb_decrRatLimReq_ja4e);

  /* Switch: '<S110>/Switch1' incorporates:
   *  Constant: '<S110>/Constant'
   *  Constant: '<S110>/Constant1'
   *  Switch: '<S110>/Switch'
   */
  if (rtb_lb_incrRatLimReq_bzay) {
    y = 0;
  } else if (rtb_lb_decrRatLimReq_e0p2) {
    /* Switch: '<S110>/Switch' incorporates:
     *  Constant: '<S110>/Constant2'
     */
    y = Gs16_facRefSpdOLRiseSlwRate_C;
  } else {
    y = Gs16_facRefSpdOLFallSlwRate_C;
  }

  /* Sum: '<S110>/Add1' incorporates:
   *  Constant: '<S110>/Constant4'
   *  Product: '<S110>/Divide1'
   *  Switch: '<S110>/Switch1'
   *  Switch: '<S113>/Switch'
   */
  rtb_Add1_ceyr = (dt_Standardize_s16p15b0)((((sint16)((y * 41943) >> 10)) +
    (rtb_Switch_oqhk << 9)) >> 9);

  /* Switch: '<S79>/Switch4' incorporates:
   *  Constant: '<S79>/Constant1'
   *  Constant: '<S82>/Constant'
   *  Constant: '<S83>/Constant'
   *  Inport: '<Root>/busAST_SlwTaskIn'
   *  Logic: '<S79>/Logical Operator'
   *  RelationalOperator: '<S82>/Compare'
   *  RelationalOperator: '<S83>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   *  Switch: '<S79>/Switch5'
   *  Switch: '<S94>/Switch'
   */
  if ((busAST_SlwTaskIn.enm_stMotoSt == OFF) ||
      (busAST_SlwTaskIn.bol_enPosSCDCalibEnFlg)) {
    rtb_Switch4 = 0;
  } else if (busAST_SlwTaskIn.enm_stMotoSt == CLOSED_LOOP) {
    /* Switch: '<S93>/Switch' incorporates:
     *  Switch: '<S79>/Switch5'
     */
    if (rtb_lb_noRatLimReq_m20l) {
      /* Switch: '<S79>/Switch4' */
      rtb_Switch4 = ASW_AST_B.s16_nOpnLpRefElecSpd;
    } else {
      /* Switch: '<S79>/Switch4' incorporates:
       *  Sum: '<S99>/Add1'
       */
      rtb_Switch4 = rtb_Add1_jyuu;
    }

    /* End of Switch: '<S93>/Switch' */
  } else if (rtb_lb_incrRatLimReq_bzay) {
    /* Switch: '<S94>/Switch' incorporates:
     *  Switch: '<S79>/Switch4'
     *  Switch: '<S79>/Switch5'
     */
    rtb_Switch4 = ASW_AST_B.s16_nOpnLpRefElecSpd;
  } else {
    /* Switch: '<S79>/Switch4' incorporates:
     *  Sum: '<S110>/Add1'
     *  Switch: '<S79>/Switch5'
     *  Switch: '<S94>/Switch'
     */
    rtb_Switch4 = rtb_Add1_ceyr;
  }

  /* End of Switch: '<S79>/Switch4' */

  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S63>/Constant'
   *  Inport: '<Root>/busAST_SlwTaskIn'
   *  RelationalOperator: '<S63>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   *  Saturate: '<S5>/Saturation11'
   */
  if (busAST_SlwTaskIn.enm_stMotoSt == OPEN_LOOP) {
    /* Saturate: '<S5>/Saturation12' incorporates:
     *  Switch: '<S5>/Switch'
     *  Switch: '<S79>/Switch4'
     */
    if (rtb_Switch4 >= -32767) {
      rtb_Switch_ardc = rtb_Switch4;
    } else {
      rtb_Switch_ardc = -32767;
    }

    /* End of Saturate: '<S5>/Saturation12' */
  } else if (busAST_SlwTaskIn.s16_nActElecSpd >= -32767) {
    /* Saturate: '<S5>/Saturation11' incorporates:
     *  Switch: '<S5>/Switch'
     */
    rtb_Switch_ardc = busAST_SlwTaskIn.s16_nActElecSpd;
  } else {
    rtb_Switch_ardc = -32767;
  }

  /* End of Switch: '<S5>/Switch' */

  /* Abs: '<S5>/Abs' incorporates:
   *  Saturate: '<S5>/Saturation10'
   */
  if (rtb_Saturation10 < 0) {
    y = (sint16)(-rtb_Saturation10);
  } else {
    y = rtb_Saturation10;
  }

  /* Abs: '<S5>/Abs2' incorporates:
   *  Switch: '<S5>/Switch'
   */
  if (rtb_Switch_ardc < 0) {
    y_0 = (sint16)(-rtb_Switch_ardc);
  } else {
    y_0 = rtb_Switch_ardc;
  }

  /* Lookup_n-D: '<S5>/Gu16_etaCtlBrd_MAP' incorporates:
   *  Abs: '<S5>/Abs'
   *  Abs: '<S5>/Abs2'
   */
  rtb_Gu16_etaCtlBrd_MAP = look2_is16lu32n16tu16_binlcse(y, y_0,
    &Gu16_etaCtlBrd_MAP_ampActPhCurrAmp_X[0], &Gu16_etaCtlBrd_MAP_nActElecSpd_Y
    [0], &Gu16_etaCtlBrd_MAP[0], rtCP_Gu16_etaCtlBrd_MAP_maxInde, 6U);

  /* S-Function (sfix_udelay): '<S74>/Tapped Delay' */
  memcpy(&rtb_VectorConcatenate_kzws[1], &ASW_AST_DW.TappedDelay_DWORK1_msrl[0],
         39U * (sizeof(dt_Standardize_s16p15b0)));

  /* Sum: '<S74>/Sum of Elements' incorporates:
   *  Concatenate: '<S74>/Vector Concatenate'
   *  Sum: '<S14>/Sum of Elements'
   */
  i_0 = 0;
  for (i = 0; i < 40; i++) {
    i_0 += rtb_VectorConcatenate_kzws[i];
  }

  /* Product: '<S5>/Divide1' incorporates:
   *  Lookup_n-D: '<S5>/Gu16_etaCtlBrd_MAP'
   *  Product: '<S74>/Divide'
   *  Sum: '<S74>/Sum of Elements'
   */
  rtb_Divide1_azfz = (dt_Standardize_s16p15b0)div_nde_s32_floor(((i_0 << 4) /
    640) << 15, rtb_Gu16_etaCtlBrd_MAP);

  /* Gain: '<S5>/Gain4' incorporates:
   *  Product: '<S5>/Divide1'
   *  Product: '<S5>/Product1'
   *  Saturate: '<S5>/Saturation'
   */
  rtb_Gain4 = (dt_Standardize_s16p15b0)((16777 * ((sint16)((rtb_Saturation_k1hr *
    rtb_Divide1_azfz) >> 14))) >> 11);

  /* Saturate: '<S5>/Saturation9' incorporates:
   *  Gain: '<S5>/Gain4'
   */
  if (rtb_Gain4 > 16384) {
    busAST_SlwTaskOut.s16_pwrSplyElecPwr = 16384;
  } else if (rtb_Gain4 < -16384) {
    busAST_SlwTaskOut.s16_pwrSplyElecPwr = -16384;
  } else {
    busAST_SlwTaskOut.s16_pwrSplyElecPwr = rtb_Gain4;
  }

  /* End of Saturate: '<S5>/Saturation9' */

  /* Saturate: '<S4>/Saturation1' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  if (busAST_SlwTaskIn.u16_uSplyVltg <= 32767) {
    u0 = busAST_SlwTaskIn.u16_uSplyVltg;
  } else {
    u0 = 32767U;
  }

  /* Product: '<S4>/Product' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   *  Saturate: '<S4>/Saturation1'
   */
  rtb_Product_meyy = (dt_Standardize_u16p15b0)((((uint32)u0) *
    busAST_SlwTaskIn.u16_ampMaxNrmVltgAmp) >> 15);

  /* Product: '<S4>/Product1' incorporates:
   *  Constant: '<S4>/Constant2'
   *  Product: '<S4>/Product'
   */
  rtb_Product1_czva = (dt_Standardize_s16p15b0)((((uint32)rtb_Product_meyy) *
    Gu16_rMaxVltgAmpRat_C) >> 15);

  /* Saturate: '<S4>/Saturation' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  if (busAST_SlwTaskIn.s16_uRefDaxVltg >= -32767) {
    rtb_Saturation_os4q = busAST_SlwTaskIn.s16_uRefDaxVltg;
  } else {
    rtb_Saturation_os4q = -32767;
  }

  /* End of Saturate: '<S4>/Saturation' */

  /* If: '<S55>/If' incorporates:
   *  Abs: '<S58>/Abs'
   *  Logic: '<S55>/AND'
   *  Product: '<S4>/Product1'
   *  RelationalOperator: '<S56>/Compare'
   *  RelationalOperator: '<S57>/Compare'
   *  Saturate: '<S4>/Saturation'
   */
  if ((rtb_Product1_czva == 0) && (rtb_Saturation_os4q == 0)) {
    /* Outputs for IfAction SubSystem: '<S55>/ias_ZeroInput' incorporates:
     *  ActionPort: '<S59>/Action Port'
     */
    /* SignalConversion generated from: '<S59>/lb_genHypt' incorporates:
     *  Constant: '<S59>/Constant'
     *  Merge: '<S55>/Merge'
     */
    busAST_SlwTaskOut.s16_uRefQaxVltgLim = 0;

    /* End of Outputs for SubSystem: '<S55>/ias_ZeroInput' */
  } else {
    /* Outputs for IfAction SubSystem: '<S55>/ias_NonZeroInput' incorporates:
     *  ActionPort: '<S58>/Action Port'
     */
    if (rtb_Product1_czva < 0) {
      /* Abs: '<S58>/Abs' */
      rtb_Abs_dugl = (dt_Standardize_s16p15b0)(-rtb_Product1_czva);
    } else {
      /* Abs: '<S58>/Abs' */
      rtb_Abs_dugl = rtb_Product1_czva;
    }

    /* Selector: '<S58>/Selector1' incorporates:
     *  Abs: '<S58>/Abs'
     *  Abs: '<S58>/Abs1'
     *  Gain: '<S58>/Gain'
     *  Product: '<S58>/Divide2'
     *  Saturate: '<S58>/Saturation'
     */
    if (rtb_Saturation_os4q < 0) {
      y = (sint16)(-rtb_Saturation_os4q);
    } else {
      y = rtb_Saturation_os4q;
    }

    u0 = (uint16)((511U * ((uint16)((y << 15) / rtb_Abs_dugl))) >> 15);
    if (u0 <= 511) {
    } else {
      u0 = 511U;
    }

    /* SignalConversion generated from: '<S58>/lb_genHypt' incorporates:
     *  Abs: '<S58>/Abs'
     *  Constant: '<S58>/Constant3'
     *  Merge: '<S55>/Merge'
     *  Product: '<S58>/Multiply'
     *  Saturate: '<S58>/Saturation'
     *  Selector: '<S58>/Selector1'
     */
    busAST_SlwTaskOut.s16_uRefQaxVltgLim = (dt_Standardize_s16p15b0)
      ((rtCP_Constant3_Value_jnyd[u0] * rtb_Abs_dugl) >> 15);

    /* End of Outputs for SubSystem: '<S55>/ias_NonZeroInput' */
  }

  /* End of If: '<S55>/If' */

  /* If: '<S156>/If' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  if (busAST_SlwTaskIn.bol_enPosSCDCalibEnFlg) {
    /* Outputs for IfAction SubSystem: '<S156>/ias_NoPosSCDCalib' incorporates:
     *  ActionPort: '<S158>/Action Port'
     */
    /* SignalConversion generated from: '<S158>/bolFaltTurnOffFlag' incorporates:
     *  Constant: '<S157>/Constant'
     *  RelationalOperator: '<S157>/Compare'
     */
    busAST_SlwTaskOut.bol_flgShOffFlg = (busAST_SlwTaskIn.u8_stMaxFaltLvl == 3);

    /* End of Outputs for SubSystem: '<S156>/ias_NoPosSCDCalib' */
  } else {
    /* Outputs for IfAction SubSystem: '<S156>/ias_PosSCDCalib' incorporates:
     *  ActionPort: '<S159>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S156>/ias_NoPosSCDCalib' incorporates:
     *  ActionPort: '<S158>/Action Port'
     */
    /* Logic: '<S159>/OR' incorporates:
     *  Constant: '<S157>/Constant'
     *  Constant: '<S160>/Constant'
     *  Constant: '<S161>/Constant'
     *  Constant: '<S162>/Constant'
     *  Logic: '<S159>/Logical Operator'
     *  RelationalOperator: '<S157>/Compare'
     *  RelationalOperator: '<S160>/Compare'
     *  RelationalOperator: '<S161>/Compare'
     *  RelationalOperator: '<S162>/Compare'
     *  SignalConversion generated from: '<S158>/bolFaltTurnOffFlag'
     */
    busAST_SlwTaskOut.bol_flgShOffFlg = ((busAST_SlwTaskIn.u8_stMaxFaltLvl == 3)
      || (((rtb_enmSysStas == SYSINIT) || (rtb_enmSysStas == STANDBY)) ||
          (rtb_enmSysStas == SYSFAIL)));

    /* End of Outputs for SubSystem: '<S156>/ias_NoPosSCDCalib' */
    /* End of Outputs for SubSystem: '<S156>/ias_PosSCDCalib' */
  }

  /* End of If: '<S156>/If' */

  /* Saturate: '<S3>/Saturation5' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  if (busAST_SlwTaskIn.s16_trqFaltRefTqLim >= -32767) {
    rtb_Saturation5 = busAST_SlwTaskIn.s16_trqFaltRefTqLim;
  } else {
    rtb_Saturation5 = -32767;
  }

  /* End of Saturate: '<S3>/Saturation5' */

  /* Saturate: '<S3>/Saturation4' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  if (Gu16_psiPermMagFlx_C > 10922) {
    u0 = 10922U;
  } else if (Gu16_psiPermMagFlx_C < 55) {
    u0 = 55U;
  } else {
    u0 = Gu16_psiPermMagFlx_C;
  }

  /* Gain: '<S23>/Gain1' incorporates:
   *  Saturate: '<S3>/Saturation4'
   */
  rtb_Gain1_mnsi = (uint16)((62915U * u0) >> 15);

  /* Product: '<S23>/Divide' incorporates:
   *  Constant: '<S23>/Cdbl_trqTqMaxVal'
   *  Gain: '<S23>/Gain1'
   */
  rtb_Divide = (uint16)(67106816U / rtb_Gain1_mnsi);

  /* MinMax: '<S23>/Min2' incorporates:
   *  Constant: '<S23>/maxPolePairPerCurr'
   *  Product: '<S23>/Divide'
   */
  if (rtb_Divide >= 33178) {
    rtb_Min2 = 33178U;
  } else {
    rtb_Min2 = rtb_Divide;
  }

  /* End of MinMax: '<S23>/Min2' */

  /* Saturate: '<S49>/Saturation' incorporates:
   *  Constant: '<S49>/Constant'
   */
  if (Gu16_facDrtnVltgFltCoeff_C <= 39322) {
    rtb_Saturation = Gu16_facDrtnVltgFltCoeff_C;
  } else {
    rtb_Saturation = 39322U;
  }

  /* End of Saturate: '<S49>/Saturation' */

  /* Saturate: '<S3>/Saturation' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  if (busAST_SlwTaskIn.s16_uModulDaxQaxVltg[1] >= -32767) {
    y = busAST_SlwTaskIn.s16_uModulDaxQaxVltg[1];
  } else {
    y = -32767;
  }

  /* Sum: '<S51>/Add1' incorporates:
   *  Constant: '<S51>/Constant'
   *  Gain: '<S25>/Gain3'
   *  Product: '<S51>/Product'
   *  Product: '<S51>/Product1'
   *  Saturate: '<S3>/Saturation'
   *  Saturate: '<S49>/Saturation'
   *  Sum: '<S51>/Add2'
   *  UnitDelay: '<S51>/Unit Delay'
   */
  rtb_Add1 = (((((3 * y) >> 2) * rtb_Saturation) << 1) >> 2) + mul_ssu32_loSR
    (ASW_AST_DW.UnitDelay_DSTATE, (uint32)((131072 - rtb_Saturation) >> 2), 15U);

  /* DataTypeConversion: '<S51>/Data Type Conversion' incorporates:
   *  Sum: '<S51>/Add1'
   */
  rtb_DataTypeConversion_ei10 = (sint16)(rtb_Add1 >> 16);

  /* Abs: '<S25>/Abs' incorporates:
   *  DataTypeConversion: '<S51>/Data Type Conversion'
   */
  if (rtb_DataTypeConversion_ei10 < 0) {
    rtb_Abs = (uint16)(((uint16)(-rtb_DataTypeConversion_ei10)) << 1);
  } else {
    rtb_Abs = (uint16)(rtb_DataTypeConversion_ei10 << 1);
  }

  /* End of Abs: '<S25>/Abs' */

  /* Saturate: '<S3>/Saturation1' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  if (busAST_SlwTaskIn.u16_uSplyVltg <= 32767) {
    rtb_Saturation1_cvzz = busAST_SlwTaskIn.u16_uSplyVltg;
  } else {
    rtb_Saturation1_cvzz = 32767U;
  }

  /* End of Saturate: '<S3>/Saturation1' */

  /* Lookup_n-D: '<S25>/iSplyCurrLimMap_tPCB' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  rtb_iSplyCurrLimMap_tPCB = look1_iu8lu32n16ts16Ds32_binlcs
    (busAST_SlwTaskIn.u8_tPCBTempSubs, &Gs16_iSplyCurrTempLim_CUR_tPCBTemp_X[0],
     &Gs16_iSplyCurrTempLim_CUR[0], 5U);

  /* Lookup_n-D: '<S25>/iSplyCurrLimMap_SplyVltg' incorporates:
   *  Saturate: '<S3>/Saturation1'
   */
  rtb_iSplyCurrLimMap_SplyVltg = look1_iu16lu32n16ts16D_2s4GBl96
    (rtb_Saturation1_cvzz, &Gs16_iSplyCurrVltgLim_CUR_uSplyVltg_X[0],
     &Gs16_iSplyCurrVltgLim_CUR[0], 4U);

  /* MinMax: '<S25>/Min' incorporates:
   *  Lookup_n-D: '<S25>/iSplyCurrLimMap_SplyVltg'
   *  Lookup_n-D: '<S25>/iSplyCurrLimMap_tPCB'
   */
  if (rtb_iSplyCurrLimMap_tPCB <= rtb_iSplyCurrLimMap_SplyVltg) {
    y = rtb_iSplyCurrLimMap_tPCB;
  } else {
    y = rtb_iSplyCurrLimMap_SplyVltg;
  }

  /* Product: '<S25>/Product' incorporates:
   *  Lookup_n-D: '<S5>/Gu16_etaCtlBrd_MAP'
   *  MinMax: '<S25>/Min'
   *  Product: '<S25>/Product1'
   *  Saturate: '<S3>/Saturation1'
   */
  rtb_Product = (uint16)((((sint16)((y * rtb_Gu16_etaCtlBrd_MAP) >> 15)) *
    rtb_Saturation1_cvzz) >> 13);

  /* If: '<S25>/If' incorporates:
   *  Abs: '<S25>/Abs'
   *  Logic: '<S25>/OR'
   *  Product: '<S25>/Divide'
   *  Product: '<S25>/Product'
   *  RelationalOperator: '<S25>/Relational Operator'
   *  RelationalOperator: '<S38>/Compare'
   */
  if ((rtb_Abs == 0) || (((sint32)((((uint32)rtb_Product) << 12) / 7373U)) >
                         rtb_Abs)) {
    /* Outputs for IfAction SubSystem: '<S25>/ias_Case1' incorporates:
     *  ActionPort: '<S39>/Action Port'
     */
    /* SignalConversion generated from: '<S39>/s16_iSplyCurrEqvPhCurrLimCs1' incorporates:
     *  Constant: '<S39>/Cdbl_iPhCurrMaxVal'
     *  Merge: '<S25>/Merge'
     */
    rtb_Merge_cgss = 14746;

    /* End of Outputs for SubSystem: '<S25>/ias_Case1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S25>/ias_Case2' incorporates:
     *  ActionPort: '<S40>/Action Port'
     */
    /* Product: '<S40>/Divide5' incorporates:
     *  Switch: '<S47>/Switch2'
     */
    rtb_Divide5 = (dt_Standardize_s16p15b0)((((uint32)rtb_Product) << 13) /
      rtb_Abs);

    /* Switch: '<S47>/Switch1' incorporates:
     *  Product: '<S40>/Divide5'
     *  RelationalOperator: '<S47>/Relational Operator1'
     *  Switch: '<S47>/Switch2'
     */
    if (rtb_Divide5 <= 14746) {
      /* Switch: '<S47>/Switch' incorporates:
       *  RelationalOperator: '<S47>/Relational Operator'
       */
      if (rtb_Divide5 >= 0) {
        /* Merge: '<S25>/Merge' */
        rtb_Merge_cgss = rtb_Divide5;
      } else {
        /* Merge: '<S25>/Merge' incorporates:
         *  Constant: '<S40>/Constant'
         */
        rtb_Merge_cgss = 0;
      }

      /* End of Switch: '<S47>/Switch' */
    } else {
      /* Merge: '<S25>/Merge' incorporates:
       *  Constant: '<S40>/Cdbl_iPhCurrMaxVal'
       */
      rtb_Merge_cgss = 14746;
    }

    /* End of Switch: '<S47>/Switch1' */
    /* End of Outputs for SubSystem: '<S25>/ias_Case2' */
  }

  /* End of If: '<S25>/If' */

  /* Switch: '<S32>/Switch2' incorporates:
   *  MinMax: '<S23>/Min2'
   *  RelationalOperator: '<S32>/Relational Operator2'
   */
  if (rtb_Min2 > 0) {
    /* Lookup_n-D: '<S23>/iPhsCurrLimMap_tPCB' incorporates:
     *  Inport: '<Root>/busAST_SlwTaskIn'
     */
    rtb_iPhsCurrLimMap_tPCB = look1_iu8lu32n16ts16Ds32_binlcs
      (busAST_SlwTaskIn.u8_tPCBTempSubs, &Gs16_iPhCurrLim_CUR_tPCBTemp_X[0],
       &Gs16_iPhCurrLim_CUR[0], 5U);

    /* MinMax: '<S23>/Min1' incorporates:
     *  Lookup_n-D: '<S23>/iPhsCurrLimMap_tPCB'
     *  Merge: '<S25>/Merge'
     */
    if (rtb_iPhsCurrLimMap_tPCB <= rtb_Merge_cgss) {
      y = rtb_iPhsCurrLimMap_tPCB;
    } else {
      y = rtb_Merge_cgss;
    }

    /* Saturate: '<S34>/Saturation' incorporates:
     *  Constant: '<S34>/Constant'
     */
    if (Gu8_numPPNum_C > 6) {
      tmp_0 = 6U;
    } else if (Gu8_numPPNum_C < 2) {
      tmp_0 = 2U;
    } else {
      tmp_0 = Gu8_numPPNum_C;
    }

    /* Product: '<S23>/Product1' incorporates:
     *  Gain: '<S23>/Gain'
     *  MinMax: '<S23>/Min1'
     *  Saturate: '<S34>/Saturation'
     */
    rtb_Product1 = (uint16)((((uint32)((uint16)(3 * y))) * tmp_0) >> 3);

    /* Switch: '<S32>/Switch1' incorporates:
     *  Product: '<S23>/Product1'
     *  RelationalOperator: '<S32>/Relational Operator1'
     */
    if (rtb_Product1 <= rtb_Min2) {
      /* Switch: '<S32>/Switch' incorporates:
       *  Switch: '<S32>/Switch2'
       */
      rtb_Switch2 = rtb_Product1;
    } else {
      /* Switch: '<S32>/Switch2' */
      rtb_Switch2 = rtb_Min2;
    }

    /* End of Switch: '<S32>/Switch1' */
  } else {
    rtb_Switch2 = 0U;
  }

  /* End of Switch: '<S32>/Switch2' */

  /* Product: '<S23>/Product2' incorporates:
   *  Gain: '<S23>/Gain1'
   *  Switch: '<S32>/Switch2'
   */
  rtb_Product2_hnnw = (dt_Standardize_s16p15b0)((((uint32)rtb_Switch2) *
    rtb_Gain1_mnsi) >> 11);

  /* Saturate: '<S37>/Saturation' incorporates:
   *  Constant: '<S37>/Constant'
   */
  if (Gs16_trqTqUpLim_C >= 0) {
    rtb_Saturation_mhbk = Gs16_trqTqUpLim_C;
  } else {
    rtb_Saturation_mhbk = 0;
  }

  /* End of Saturate: '<S37>/Saturation' */

  /* MinMax: '<S24>/Min' incorporates:
   *  Product: '<S23>/Product2'
   *  Saturate: '<S37>/Saturation'
   *  Saturate: '<S3>/Saturation5'
   */
  if (rtb_Saturation_mhbk <= rtb_Saturation5) {
    y = rtb_Saturation_mhbk;
  } else {
    y = rtb_Saturation5;
  }

  if (y <= rtb_Product2_hnnw) {
    busAST_SlwTaskOut.s16_trqRefTqLim = y;
  } else {
    busAST_SlwTaskOut.s16_trqRefTqLim = rtb_Product2_hnnw;
  }

  /* End of MinMax: '<S24>/Min' */

  /* Chart: '<S76>/sfc_PhiModeStateMachine' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   *  RelationalOperator: '<S86>/Compare'
   */
  /* Gateway: AST_SlwTask/vrs_AgEvalModeCalc/rss_AgEvalModeCalcNeed/sfc_PhiModeStateMachine */
  /* During: AST_SlwTask/vrs_AgEvalModeCalc/rss_AgEvalModeCalcNeed/sfc_PhiModeStateMachine */
  if (ASW_AST_DW.is_active_c11_ASW_AST == 0U) {
    /* Entry: AST_SlwTask/vrs_AgEvalModeCalc/rss_AgEvalModeCalcNeed/sfc_PhiModeStateMachine */
    ASW_AST_DW.is_active_c11_ASW_AST = 1U;

    /* Entry Internal: AST_SlwTask/vrs_AgEvalModeCalc/rss_AgEvalModeCalcNeed/sfc_PhiModeStateMachine */
    /* Transition: '<S77>:2' */
    ASW_AST_DW.is_c11_ASW_AST = IN_SENSOR;

    /* Entry 'SENSOR': '<S77>:1' */
    rtb_enm_modeAgEvalMode = SENSOR;
  } else {
    switch (ASW_AST_DW.is_c11_ASW_AST) {
     case IN_HYBRID:
      rtb_enm_modeAgEvalMode = HYBRID;

      /* During 'HYBRID': '<S77>:3' */
      if (Genm_modeAgEvallMode_C == SENSOR) {
        /* Transition: '<S77>:111' */
        ASW_AST_DW.is_c11_ASW_AST = IN_SENSOR;

        /* Entry 'SENSOR': '<S77>:1' */
        rtb_enm_modeAgEvalMode = SENSOR;
      } else if (((busAST_SlwTaskIn.enm_stMotoSt == OFF) &&
                  (busAST_SlwTaskIn.bol_flgPhiSensFaltRawFlg)) ||
                 (Genm_modeAgEvallMode_C == SENSORLESS)) {
        /* Transition: '<S77>:124' */
        ASW_AST_DW.is_c11_ASW_AST = IN_SENSORLESS;

        /* Entry 'SENSORLESS': '<S77>:4' */
        rtb_enm_modeAgEvalMode = SENSORLESS;
      }
      break;

     case IN_SENSOR:
      rtb_enm_modeAgEvalMode = SENSOR;

      /* During 'SENSOR': '<S77>:1' */
      if (Genm_modeAgEvallMode_C == HYBRID) {
        /* Transition: '<S77>:9' */
        ASW_AST_DW.is_c11_ASW_AST = IN_HYBRID;

        /* Entry 'HYBRID': '<S77>:3' */
        rtb_enm_modeAgEvalMode = HYBRID;
      } else if (((busAST_SlwTaskIn.enm_stMotoSt == OFF) &&
                  (busAST_SlwTaskIn.bol_flgPhiSensFaltRawFlg)) ||
                 (Genm_modeAgEvallMode_C == SENSORLESS)) {
        /* Transition: '<S77>:120' */
        ASW_AST_DW.is_c11_ASW_AST = IN_SENSORLESS;

        /* Entry 'SENSORLESS': '<S77>:4' */
        rtb_enm_modeAgEvalMode = SENSORLESS;
      }
      break;

     default:
      rtb_enm_modeAgEvalMode = SENSORLESS;

      /* During 'SENSORLESS': '<S77>:4' */
      rtb_lb_incrRatLimReq_bzay = !busAST_SlwTaskIn.bol_flgPhiSensFaltRawFlg;
      if ((Genm_modeAgEvallMode_C == SENSOR) && rtb_lb_incrRatLimReq_bzay) {
        /* Transition: '<S77>:121' */
        ASW_AST_DW.is_c11_ASW_AST = IN_SENSOR;

        /* Entry 'SENSOR': '<S77>:1' */
        rtb_enm_modeAgEvalMode = SENSOR;
      } else if ((Genm_modeAgEvallMode_C == HYBRID) && rtb_lb_incrRatLimReq_bzay)
      {
        /* Transition: '<S77>:123' */
        ASW_AST_DW.is_c11_ASW_AST = IN_HYBRID;

        /* Entry 'HYBRID': '<S77>:3' */
        rtb_enm_modeAgEvalMode = HYBRID;
      }
      break;
    }
  }

  /* End of Chart: '<S76>/sfc_PhiModeStateMachine' */

  /* Outputs for Enabled SubSystem: '<S134>/ens_SensAgCalibNeed' incorporates:
   *  EnablePort: '<S136>/Enable'
   */
  /* Logic: '<S134>/Logical Operator' incorporates:
   *  Constant: '<S135>/Constant'
   *  Inport: '<Root>/busAST_SlwTaskIn'
   *  RelationalOperator: '<S135>/Compare'
   */
  if ((busAST_SlwTaskIn.bol_enPosSCDCalibEnFlg) && (rtb_enmSysStas != SYSINIT))
  {
    /* Sum: '<S136>/Add1' incorporates:
     *  Constant: '<S136>/parBetaPhsElecAngCont'
     *  Sum: '<S136>/Add'
     *  UnitDelay: '<S136>/Unit Delay1'
     *  UnitDelay: '<S136>/Unit Delay2'
     */
    rtb_Add1_gqbm = (dt_RadAng_u16r15b0)(ASW_AST_DW.UnitDelay2_DSTATE_bxby -
      ((uint16)(ASW_AST_DW.UnitDelay1_DSTATE_degb - Gu16_phiTheoBePhElecAg_C)));

    /* Switch: '<S137>/Switch3' incorporates:
     *  Constant: '<S137>/Constant2'
     *  RelationalOperator: '<S137>/Relational Operator'
     *  Sum: '<S136>/Add1'
     *  Sum: '<S137>/Add3'
     */
    if (rtb_Add1_gqbm >= 32768) {
      rtb_Switch3 = (dt_RadAng_u16r15b0)(65535 - rtb_Add1_gqbm);
    } else {
      rtb_Switch3 = rtb_Add1_gqbm;
    }

    /* End of Switch: '<S137>/Switch3' */

    /* Chart: '<S138>/sfc_SensAgCalibSTM' incorporates:
     *  Constant: '<S138>/s16_trqInitCalibRefTq'
     *  Switch: '<S137>/Switch3'
     *  UnitDelay: '<S136>/Unit Delay3'
     */
    /* Gateway: AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/sfc_SensAgCalibSTM */
    /* During: AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/sfc_SensAgCalibSTM */
    if (ASW_AST_DW.is_active_c3_ASW_AST == 0U) {
      /* Entry: AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/sfc_SensAgCalibSTM */
      ASW_AST_DW.is_active_c3_ASW_AST = 1U;

      /* Entry Internal: AST_SlwTask/vrs_SensAgCalib/rss_SensAgCalibNeed/ens_SensAgCalibNeed/sss_SensAgCalib/sfc_SensAgCalibSTM */
      /* Transition: '<S142>:2' */
      ASW_AST_DW.u8_ctTryAlgCnt = 0U;
      ASW_AST_DW.is_c3_ASW_AST = IN_ALIGN_ALPHA_PHASE;

      /* Entry 'ALIGN_ALPHA_PHASE': '<S142>:1' */
      ASW_AST_B.enm_stPosSCDCalibSt = ALPHA_PHASE;
      ASW_AST_B.s16_trqPosSCDCalibRefTq = Gs16_trqRefTqAlgnVal_C;
      busAST_SlwTaskOut.u16_phiPosSCDCalibElecAg = Gu16_phiAlgnAlPhElecAg_C;
      busAST_SlwTaskOut.bol_flgPosSCDCalibSucFlg = false;
      busAST_SlwTaskOut.bol_flgPosSCDCalibPermFail = false;
      ASW_AST_DW.u16_ctCalibStWaitCnt = 0U;
    } else {
      switch (ASW_AST_DW.is_c3_ASW_AST) {
       case IN_ALIGN_ALPHA_PHASE:
        ASW_AST_B.enm_stPosSCDCalibSt = ALPHA_PHASE;
        busAST_SlwTaskOut.bol_flgPosSCDCalibSucFlg = false;

        /* During 'ALIGN_ALPHA_PHASE': '<S142>:1' */
        if (ASW_AST_DW.u16_ctCalibStWaitCnt >= Gu16_ctAlgnAlPhStCnt_C) {
          /* Transition: '<S142>:113' */
          /* Exit 'ALIGN_ALPHA_PHASE': '<S142>:1' */
          ASW_AST_B.u16_phiAlPhElecAg = busAST_SlwTaskIn.u16_phiSensActElecAg;
          ASW_AST_DW.is_c3_ASW_AST = IN_WAIT_ALPHA;

          /* Entry 'WAIT_ALPHA': '<S142>:137' */
          ASW_AST_B.enm_stPosSCDCalibSt = WAIT_ALPHA;
          ASW_AST_B.s16_trqPosSCDCalibRefTq = 0;
          busAST_SlwTaskOut.u16_phiPosSCDCalibElecAg = Gu16_phiAlgnAlPhElecAg_C;
          busAST_SlwTaskOut.bol_flgPosSCDCalibSucFlg = false;
          busAST_SlwTaskOut.bol_flgPosSCDCalibPermFail = false;
          ASW_AST_DW.u16_ctCalibStWaitCnt = 0U;
        } else {
          ASW_AST_DW.u16_ctCalibStWaitCnt++;
        }
        break;

       case IN_ALIGN_BETA_PHASE:
        ASW_AST_B.enm_stPosSCDCalibSt = BETA_PHASE;
        busAST_SlwTaskOut.bol_flgPosSCDCalibSucFlg = false;

        /* During 'ALIGN_BETA_PHASE': '<S142>:111' */
        if (ASW_AST_DW.u16_ctCalibStWaitCnt >= Gu16_ctAlgnBePhStCnt_C) {
          /* Transition: '<S142>:135' */
          /* Exit 'ALIGN_BETA_PHASE': '<S142>:111' */
          ASW_AST_B.u16_phiBePhElecAg = busAST_SlwTaskIn.u16_phiSensActElecAg;
          ASW_AST_DW.is_c3_ASW_AST = IN_WAIT_BETA;

          /* Entry 'WAIT_BETA': '<S142>:134' */
          ASW_AST_B.enm_stPosSCDCalibSt = WAIT_BETA;
          ASW_AST_B.s16_trqPosSCDCalibRefTq = 0;
          busAST_SlwTaskOut.u16_phiPosSCDCalibElecAg = Gu16_phiAlgnBePhElecAg_C;
          busAST_SlwTaskOut.bol_flgPosSCDCalibSucFlg = false;
          busAST_SlwTaskOut.bol_flgPosSCDCalibPermFail = false;
          ASW_AST_DW.u16_ctCalibStWaitCnt = 0U;
        } else {
          ASW_AST_DW.u16_ctCalibStWaitCnt++;
        }
        break;

       case IN_CALIBFAIL:
        ASW_AST_B.enm_stPosSCDCalibSt = CALIBFAIL;
        busAST_SlwTaskOut.bol_flgPosSCDCalibSucFlg = false;

        /* During 'CALIBFAIL': '<S142>:117' */
        if (ASW_AST_DW.u16_ctCalibStWaitCnt >= Gu16_ctAlgnTmpFailStCnt_C) {
          /* Transition: '<S142>:120' */
          /* Exit 'CALIBFAIL': '<S142>:117' */
          ASW_AST_DW.is_c3_ASW_AST = IN_ALIGN_ALPHA_PHASE;

          /* Entry 'ALIGN_ALPHA_PHASE': '<S142>:1' */
          ASW_AST_B.enm_stPosSCDCalibSt = ALPHA_PHASE;
          ASW_AST_B.s16_trqPosSCDCalibRefTq = Gs16_trqRefTqAlgnVal_C;
          busAST_SlwTaskOut.u16_phiPosSCDCalibElecAg = Gu16_phiAlgnAlPhElecAg_C;
          busAST_SlwTaskOut.bol_flgPosSCDCalibSucFlg = false;
          busAST_SlwTaskOut.bol_flgPosSCDCalibPermFail = false;
          ASW_AST_DW.u16_ctCalibStWaitCnt = 0U;
        } else if (ASW_AST_DW.u8_ctTryAlgCnt < 2) {
          ASW_AST_DW.u16_ctCalibStWaitCnt++;
        } else {
          ASW_AST_DW.u16_ctCalibStWaitCnt = 0U;
        }
        break;

       case IN_SUCCESS:
        ASW_AST_B.enm_stPosSCDCalibSt = SUCCESS;
        busAST_SlwTaskOut.bol_flgPosSCDCalibSucFlg = true;

        /* During 'SUCCESS': '<S142>:114' */
        break;

       case IN_WAIT_ALPHA:
        ASW_AST_B.enm_stPosSCDCalibSt = WAIT_ALPHA;
        busAST_SlwTaskOut.bol_flgPosSCDCalibSucFlg = false;

        /* During 'WAIT_ALPHA': '<S142>:137' */
        if (ASW_AST_DW.u16_ctCalibStWaitCnt >= Gu16_ctAlgnWaitAlStCnt_C) {
          /* Transition: '<S142>:138' */
          /* Exit 'WAIT_ALPHA': '<S142>:137' */
          ASW_AST_DW.is_c3_ASW_AST = IN_ALIGN_BETA_PHASE;

          /* Entry 'ALIGN_BETA_PHASE': '<S142>:111' */
          ASW_AST_B.enm_stPosSCDCalibSt = BETA_PHASE;
          ASW_AST_B.s16_trqPosSCDCalibRefTq = Gs16_trqRefTqAlgnVal_C;
          busAST_SlwTaskOut.u16_phiPosSCDCalibElecAg = Gu16_phiAlgnBePhElecAg_C;
          busAST_SlwTaskOut.bol_flgPosSCDCalibSucFlg = false;
          busAST_SlwTaskOut.bol_flgPosSCDCalibPermFail = false;
          ASW_AST_DW.u16_ctCalibStWaitCnt = 0U;
        } else {
          ASW_AST_DW.u16_ctCalibStWaitCnt++;
        }
        break;

       default:
        ASW_AST_B.enm_stPosSCDCalibSt = WAIT_BETA;
        busAST_SlwTaskOut.bol_flgPosSCDCalibSucFlg = false;

        /* During 'WAIT_BETA': '<S142>:134' */
        if ((ASW_AST_DW.u16_ctCalibStWaitCnt >= Gu16_ctAlgnWaitBeStCnt_C) &&
            (rtb_Switch3 > Gu16_phiMinAlgnElecAngDvt_C)) {
          /* Transition: '<S142>:118' */
          /* Exit 'WAIT_BETA': '<S142>:134' */
          ASW_AST_DW.u16_ctCalibStWaitCnt = 0U;
          i_0 = (sint32)(ASW_AST_DW.u8_ctTryAlgCnt + 1U);
          if ((ASW_AST_DW.u8_ctTryAlgCnt + 1U) > 255U) {
            i_0 = 255;
          }

          ASW_AST_DW.u8_ctTryAlgCnt = (uint8)i_0;
          ASW_AST_DW.is_c3_ASW_AST = IN_CALIBFAIL;

          /* Entry 'CALIBFAIL': '<S142>:117' */
          ASW_AST_B.enm_stPosSCDCalibSt = CALIBFAIL;
          ASW_AST_B.s16_trqPosSCDCalibRefTq = 0;
          busAST_SlwTaskOut.u16_phiPosSCDCalibElecAg = Gu16_phiAlgnBePhElecAg_C;
          busAST_SlwTaskOut.bol_flgPosSCDCalibSucFlg = false;
          busAST_SlwTaskOut.bol_flgPosSCDCalibPermFail =
            ((ASW_AST_DW.u8_ctTryAlgCnt == 2) ||
             (busAST_SlwTaskOut.bol_flgPosSCDCalibPermFail));
        } else if ((ASW_AST_DW.u16_ctCalibStWaitCnt >= Gu16_ctAlgnWaitBeStCnt_C)
                   && (rtb_Switch3 <= Gu16_phiMinAlgnElecAngDvt_C)) {
          /* Transition: '<S142>:116' */
          /* Exit 'WAIT_BETA': '<S142>:134' */
          ASW_AST_DW.u16_ctCalibStWaitCnt = 0U;
          i_0 = (sint32)(ASW_AST_DW.u8_ctTryAlgCnt + 1U);
          if ((ASW_AST_DW.u8_ctTryAlgCnt + 1U) > 255U) {
            i_0 = 255;
          }

          ASW_AST_DW.u8_ctTryAlgCnt = (uint8)i_0;
          ASW_AST_DW.is_c3_ASW_AST = IN_SUCCESS;

          /* Entry 'SUCCESS': '<S142>:114' */
          ASW_AST_B.enm_stPosSCDCalibSt = SUCCESS;
          ASW_AST_B.s16_trqPosSCDCalibRefTq = 0;
          busAST_SlwTaskOut.u16_phiPosSCDCalibElecAg = Gu16_phiAlgnBePhElecAg_C;
          busAST_SlwTaskOut.bol_flgPosSCDCalibSucFlg = true;
          ASW_AST_B.u16_phiSensElecAgDvt = ASW_AST_DW.UnitDelay3_DSTATE;
          busAST_SlwTaskOut.bol_flgPosSCDCalibPermFail = false;
        } else {
          tmp = ASW_AST_DW.u16_ctCalibStWaitCnt + 1U;
          if ((ASW_AST_DW.u16_ctCalibStWaitCnt + 1U) > 65535U) {
            tmp = 65535U;
          }

          ASW_AST_DW.u16_ctCalibStWaitCnt = (uint16)tmp;
        }
        break;
      }
    }

    /* End of Chart: '<S138>/sfc_SensAgCalibSTM' */

    /* Saturate: '<S144>/Saturation' incorporates:
     *  Constant: '<S144>/Constant'
     */
    if (Gu8_numPPNum_C > 6) {
      tmp_0 = 6U;
    } else if (Gu8_numPPNum_C < 2) {
      tmp_0 = 2U;
    } else {
      tmp_0 = Gu8_numPPNum_C;
    }

    /* Product: '<S138>/Divide' incorporates:
     *  Gain: '<S138>/Gain1'
     *  Saturate: '<S144>/Saturation'
     */
    busAST_SlwTaskOut.u16_ADSensMechAgDvt = (uint16)(((((20861U *
      ASW_AST_B.u16_phiSensElecAgDvt) >> 15) * 3217U) >> 11) / tmp_0);

    /* Switch: '<S149>/Switch1' incorporates:
     *  UnitDelay: '<S149>/Unit Delay1'
     */
    if (ASW_AST_DW.bitsForTID1.UnitDelay1_DSTATE_hfoe) {
      /* Switch: '<S149>/Switch' incorporates:
       *  UnitDelay: '<S149>/Unit Delay'
       */
      rtb_Switch_eeka = ASW_AST_DW.UnitDelay_DSTATE_aj2h;
    } else {
      /* Switch: '<S149>/Switch' incorporates:
       *  Constant: '<S138>/Constant2'
       */
      rtb_Switch_eeka = 0;
    }

    /* End of Switch: '<S149>/Switch1' */

    /* Chart: '<S140>/Chart' incorporates:
     *  Constant: '<S147>/Constant1'
     *  Constant: '<S148>/Constant1'
     *  DataTypeConversion: '<S147>/Data Type Conversion'
     *  DataTypeConversion: '<S148>/Data Type Conversion'
     *  Logic: '<S147>/Logical Operator'
     *  Logic: '<S148>/Logical Operator'
     *  Product: '<S147>/Product'
     *  Product: '<S148>/Product'
     *  RelationalOperator: '<S147>/Equal'
     *  RelationalOperator: '<S147>/Equal1'
     *  RelationalOperator: '<S148>/Equal'
     *  RelationalOperator: '<S148>/Equal1'
     *  Sum: '<S147>/Add'
     *  Sum: '<S148>/Add'
     *  Switch: '<S149>/Switch'
     */
    ASW_AST_Chart(((((sint16)mul_ssu32_hiSR((ASW_AST_B.s16_trqPosSCDCalibRefTq -
      rtb_Switch_eeka) << 15, 26214425U, 9U)) >= (Gs16_facAlgnTqRiseRate_C >> 2))
                   && (ASW_AST_B.s16_trqPosSCDCalibRefTq >= rtb_Switch_eeka)),
                  ((((sint16)mul_ssu32_hiSR((ASW_AST_B.s16_trqPosSCDCalibRefTq -
      rtb_Switch_eeka) << 15, 26214425U, 9U)) <= (Gs16_facAlgnTqFallRate_C >> 2))
                   && (ASW_AST_B.s16_trqPosSCDCalibRefTq <= rtb_Switch_eeka)),
                  &rtb_lb_noRatLimReq_m20l, &rtb_lb_incrRatLimReq_bzay,
                  &rtb_lb_decrRatLimReq_e0p2);

    /* Switch: '<S146>/Switch1' incorporates:
     *  Constant: '<S146>/Constant'
     *  Constant: '<S146>/Constant1'
     *  Switch: '<S146>/Switch'
     */
    if (rtb_lb_noRatLimReq_m20l) {
      y = 0;
    } else if (rtb_lb_incrRatLimReq_bzay) {
      /* Switch: '<S146>/Switch' incorporates:
       *  Constant: '<S146>/Constant2'
       */
      y = Gs16_facAlgnTqRiseRate_C;
    } else {
      y = Gs16_facAlgnTqFallRate_C;
    }

    /* Sum: '<S146>/Add1' incorporates:
     *  Constant: '<S146>/Constant4'
     *  Product: '<S146>/Divide1'
     *  Switch: '<S146>/Switch1'
     *  Switch: '<S149>/Switch'
     */
    rtb_Add1_np2v = (dt_Standardize_s16p15b0)((((sint16)((y * 41943) >> 11)) +
      (rtb_Switch_eeka << 5)) >> 5);

    /* Switch: '<S140>/Switch' incorporates:
     *  Sum: '<S146>/Add1'
     */
    if (rtb_lb_noRatLimReq_m20l) {
      busAST_SlwTaskOut.s16_trqPosSCDCalibRefTq =
        ASW_AST_B.s16_trqPosSCDCalibRefTq;
    } else {
      busAST_SlwTaskOut.s16_trqPosSCDCalibRefTq = rtb_Add1_np2v;
    }

    /* End of Switch: '<S140>/Switch' */

    /* Update for UnitDelay: '<S136>/Unit Delay1' */
    ASW_AST_DW.UnitDelay1_DSTATE_degb = ASW_AST_B.u16_phiBePhElecAg;

    /* Update for UnitDelay: '<S136>/Unit Delay2' */
    ASW_AST_DW.UnitDelay2_DSTATE_bxby = ASW_AST_B.u16_phiAlPhElecAg;

    /* Update for UnitDelay: '<S136>/Unit Delay3' */
    ASW_AST_DW.UnitDelay3_DSTATE = ASW_AST_B.u16_phiAlPhElecAg;

    /* Update for UnitDelay: '<S149>/Unit Delay1' incorporates:
     *  Constant: '<S149>/Constant'
     */
    ASW_AST_DW.bitsForTID1.UnitDelay1_DSTATE_hfoe = true;

    /* Update for UnitDelay: '<S149>/Unit Delay' incorporates:
     *  Sum: '<S146>/Add1'
     */
    ASW_AST_DW.UnitDelay_DSTATE_aj2h = rtb_Add1_np2v;
  }

  /* End of Logic: '<S134>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S134>/ens_SensAgCalibNeed' */

  /* BusCreator: '<S164>/Bus Creator1' incorporates:
   *  Product: '<S14>/Divide'
   *  Product: '<S4>/Product'
   *  Product: '<S4>/Product1'
   *  Product: '<S5>/Divide1'
   *  Product: '<S79>/Divide2'
   *  Switch: '<S79>/Switch4'
   */
  busAST_SlwTaskOut.s16_iEstSplyCurr = rtb_Divide1_azfz;
  busAST_SlwTaskOut.s16_ampActPhCurrAmp = rtb_Divide_gqgg;
  busAST_SlwTaskOut.enm_stPosSCDCalibSt = ASW_AST_B.enm_stPosSCDCalibSt;
  busAST_SlwTaskOut.s16_nRmpRefElecSpd = rtb_Switch4;
  busAST_SlwTaskOut.s16_nRefElecSpd = rtb_Divide2;
  busAST_SlwTaskOut.enm_stSysSt = rtb_enmSysStas;
  busAST_SlwTaskOut.u16_ampMaxVltgAmp = rtb_Product_meyy;
  busAST_SlwTaskOut.s16_uRefDaxVltgLim = rtb_Product1_czva;
  busAST_SlwTaskOut.enm_modeAgEvalMode = rtb_enm_modeAgEvalMode;

  /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay' incorporates:
   *  Merge: '<S13>/Merge'
   *  S-Function (sfix_udelay): '<S74>/Tapped Delay'
   *  Sum: '<S14>/Sum of Elements'
   *  Sum: '<S74>/Sum of Elements'
   */
  for (i_0 = 0; i_0 < 18; i_0++) {
    ASW_AST_DW.TappedDelay_DWORK1[i_0] = ASW_AST_DW.TappedDelay_DWORK1[i_0 + 1];
  }

  ASW_AST_DW.TappedDelay_DWORK1[18] = ASW_AST_B.Merge;

  /* Update for UnitDelay: '<S79>/Unit Delay' incorporates:
   *  Inport: '<Root>/busAST_SlwTaskIn'
   */
  ASW_AST_DW.UnitDelay_DSTATE_jm5t = busAST_SlwTaskIn.enm_stMotoSt;

  /* Update for UnitDelay: '<S79>/Unit Delay1' incorporates:
   *  Switch: '<S79>/Switch4'
   */
  ASW_AST_DW.UnitDelay1_DSTATE = rtb_Switch4;

  /* Update for UnitDelay: '<S102>/Unit Delay1' incorporates:
   *  Constant: '<S102>/Constant'
   */
  ASW_AST_DW.bitsForTID1.UnitDelay1_DSTATE_hx0c = true;

  /* Update for UnitDelay: '<S102>/Unit Delay' incorporates:
   *  Sum: '<S99>/Add1'
   */
  ASW_AST_DW.UnitDelay_DSTATE_m2qg = rtb_Add1_jyuu;

  /* Update for UnitDelay: '<S79>/Unit Delay2' incorporates:
   *  Switch: '<S79>/Switch4'
   */
  ASW_AST_DW.UnitDelay2_DSTATE = rtb_Switch4;

  /* Update for UnitDelay: '<S113>/Unit Delay1' incorporates:
   *  Constant: '<S113>/Constant'
   */
  ASW_AST_DW.bitsForTID1.UnitDelay1_DSTATE_k25k = true;

  /* Update for UnitDelay: '<S113>/Unit Delay' incorporates:
   *  Sum: '<S110>/Add1'
   */
  ASW_AST_DW.UnitDelay_DSTATE_ozdy = rtb_Add1_ceyr;

  /* Update for S-Function (sfix_udelay): '<S74>/Tapped Delay' incorporates:
   *  S-Function (sfix_udelay): '<S14>/Tapped Delay'
   *  Saturate: '<S5>/Saturation4'
   *  Sum: '<S14>/Sum of Elements'
   *  Sum: '<S74>/Sum of Elements'
   */
  for (i_0 = 0; i_0 < 38; i_0++) {
    ASW_AST_DW.TappedDelay_DWORK1_msrl[i_0] =
      ASW_AST_DW.TappedDelay_DWORK1_msrl[i_0 + 1];
  }

  ASW_AST_DW.TappedDelay_DWORK1_msrl[38] = ASW_AST_B.Saturation4;

  /* Update for UnitDelay: '<S51>/Unit Delay' incorporates:
   *  Sum: '<S51>/Add1'
   */
  ASW_AST_DW.UnitDelay_DSTATE = rtb_Add1;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */


 /*
 * File: ASW_DcycGen.c
 *
 * Code generated for Simulink model 'ASW_DcycGen'.
 *
 * Model version                  : 6.161
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Jan 14 13:33:47 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

const BUS_DCYCGEN_FST_TASK_OUT ASW_DcycGen_rtZBUS_DCYCGEN_FST_TASK_OUT = {
  {
    0U, 0U, 0U }
  ,                                    /* u16_dcycPhDyc */
  0U,                                  /* u16_ampMaxNrmVltgAmp */
  0U                                   /* u16_phiModulActElecAg */
};                                     /* BUS_DCYCGEN_FST_TASK_OUT ground */

/* Exported block signals */
BUS_DCYCGEN_FST_TASK_IN busDcycGen_FstTaskIn;/* '<Root>/busDcycGen_FstTaskIn' */
BUS_DCYCGEN_FST_TASK_OUT busDcycGen_FstTaskOut;/* '<S82>/Bus Creator1' */

/* Block states (default storage) */
DW_ASW_DcycGen ASW_DcycGen_DW;
const BUS_DCYCGEN_FST_TASK_IN ASW_DcycGen_rtZBUS_DCYCGEN_FST_ = { 0U,/* u16_ampDycAmp */
  0U,                                  /* u16_phiActElecAg */
  0U,                                  /* u16_phiDaxQaxVltgAg */
  0U,                                  /* enm_stMotoSt */
  0,                                   /* s16_nPredActElecSpd */
  false                                /* bol_enPosSCDCalibEnFlg */
};

/* Output and update for atomic system: '<Root>/DcycGen_FstTask' */
void DcycGen_FstTask(void)
{
  dt_RadAng_u16r15b0 tmp_0;
  dt_Standardize_s16p15b0 tmp;
  sint16 rtb_Switch1;
  uint16 rtb_Add1;
  uint16 rtb_Add1_agvg;
  uint16 rtb_Add1_cvlw;
  uint16 rtb_Add1_hqrl;
  uint16 rtb_Add1_l2i3;
  uint16 rtb_Saturation_0;
  uint16 rtb_Sum;
  boolean rtb_LogicalOperator;
  boolean tmp_1;

  /* Saturate: '<S2>/Saturation' incorporates:
   *  Inport: '<Root>/busDcycGen_FstTaskIn'
   */
  if (busDcycGen_FstTaskIn.u16_ampDycAmp <= 32768) {
    rtb_Saturation_0 = busDcycGen_FstTaskIn.u16_ampDycAmp;
  } else {
    rtb_Saturation_0 = 32768U;
  }

  /* Logic: '<S83>/Logical Operator' incorporates:
   *  Constant: '<S84>/Constant'
   *  Inport: '<Root>/busDcycGen_FstTaskIn'
   *  RelationalOperator: '<S84>/Compare'
   */
  rtb_LogicalOperator = ((busDcycGen_FstTaskIn.enm_stMotoSt != CLOSED_LOOP) ||
    (busDcycGen_FstTaskIn.bol_enPosSCDCalibEnFlg));

  /* Switch: '<S89>/Switch1' incorporates:
   *  Constant: '<S89>/Constant'
   *  Gain: '<S83>/Gain'
   *  Logic: '<S89>/NOT'
   *  Product: '<S89>/Product1'
   *  Saturate: '<S83>/Saturation'
   */
  if (!rtb_LogicalOperator) {
    /* Saturate: '<S83>/Saturation' incorporates:
     *  Inport: '<Root>/busDcycGen_FstTaskIn'
     */
    if (busDcycGen_FstTaskIn.s16_nPredActElecSpd >= -32767) {
      tmp = busDcycGen_FstTaskIn.s16_nPredActElecSpd;
    } else {
      tmp = -32767;
    }

    rtb_Switch1 = (sint16)(((tmp >> 1) * 16777) >> 14);
  } else {
    rtb_Switch1 = 0;
  }

  /* End of Switch: '<S89>/Switch1' */

  /* Switch: '<S94>/Switch1' incorporates:
   *  Constant: '<S94>/Constant1'
   *  UnitDelay: '<S94>/Unit Delay1'
   */
  if (ASW_DcycGen_DW.bitsForTID0.UnitDelay1_DSTATE) {
    tmp_1 = rtb_LogicalOperator;
  } else {
    tmp_1 = true;
  }

  /* Switch: '<S94>/Switch' incorporates:
   *  Inport: '<Root>/busDcycGen_FstTaskIn'
   *  Switch: '<S94>/Switch1'
   *  UnitDelay: '<S94>/Unit Delay'
   */
  if (tmp_1) {
    tmp_0 = busDcycGen_FstTaskIn.u16_phiActElecAg;
  } else {
    tmp_0 = ASW_DcycGen_DW.UnitDelay_DSTATE;
  }

  /* Sum: '<S89>/Sum' incorporates:
   *  Switch: '<S89>/Switch1'
   *  Switch: '<S94>/Switch'
   */
  rtb_Sum = (uint16)((((rtb_Switch1 * 20861) >> 2) + (tmp_0 << 14)) >> 14);

  /* SwitchCase: '<S2>/Switch Case' incorporates:
   *  Constant: '<S2>/Constant'
   *  DataTypeConversion: '<S2>/Data Type Conversion'
   */
  switch (Genm_modePWMMode_C) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S2>/sas_SinuPWM' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Sum: '<S67>/Add1' incorporates:
     *  Constant: '<S67>/Constant'
     *  Inport: '<Root>/busDcycGen_FstTaskIn'
     *  Sum: '<S67>/Add'
     *  Sum: '<S89>/Sum'
     *  Switch: '<S89>/Switch'
     */
    rtb_Add1_agvg = (uint16)(((uint32)rtb_Sum) + ((uint16)
      (busDcycGen_FstTaskIn.u16_phiDaxQaxVltgAg - 16384)));

    /* SignalConversion generated from: '<S10>/u16_dcycPhDycCs1' incorporates:
     *  Constant: '<S71>/Constant'
     *  Constant: '<S71>/Constant1'
     *  Constant: '<S71>/Constant2'
     *  Constant: '<S71>/Constant3'
     *  Constant: '<S71>/Constant4'
     *  Constant: '<S71>/Constant5'
     *  Constant: '<S78>/Constant'
     *  Gain: '<S71>/Gain'
     *  Merge: '<S2>/Merge'
     *  Product: '<S71>/Divide'
     *  Product: '<S71>/Product'
     *  Saturate: '<S2>/Saturation'
     *  Selector: '<S71>/Selector'
     *  Selector: '<S71>/Selector1'
     *  Selector: '<S71>/Selector2'
     *  Sum: '<S67>/Add1'
     *  Sum: '<S71>/Add'
     *  Sum: '<S71>/Add3'
     *  Sum: '<S78>/Add'
     */
    busDcycGen_FstTaskOut.u16_dcycPhDyc[0] = (dt_DutyCycl_u16p15b0)
      (((((rtb_Saturation_0 * rtCP_Constant2_Value[(uint16)((1023U * ((((uint32)
                rtb_Add1_agvg) << 15) / 65535U)) >> 15)]) >> 15) << 1) + 32768) >>
       1);
    busDcycGen_FstTaskOut.u16_dcycPhDyc[1] = (dt_DutyCycl_u16p15b0)
      (((((rtb_Saturation_0 * rtCP_Constant3_Value_DCYC[(uint16)((1023U * ((((uint32)
                ((uint16)(rtb_Add1_agvg - 21845))) << 15) / 65535U)) >> 15)]) >>
          15) << 1) + 32768) >> 1);
    busDcycGen_FstTaskOut.u16_dcycPhDyc[2] = (dt_DutyCycl_u16p15b0)
      (((((rtb_Saturation_0 * rtCP_Constant4_Value[(uint16)((1023U * ((((uint32)
                ((uint16)(rtb_Add1_agvg - 43691))) << 15) / 65535U)) >> 15)]) >>
          15) << 1) + 32768) >> 1);

    /* SignalConversion generated from: '<S10>/u16_ampMaxNrmVltgAmpCs1' incorporates:
     *  Constant: '<S67>/Constant3'
     *  Merge: '<S2>/Merge1'
     *  Product: '<S67>/Product1'
     */
    busDcycGen_FstTaskOut.u16_ampMaxNrmVltgAmp = (dt_DutyCycl_u16p15b0)(((uint32)
      Gu16_facOvrModulFac_C) >> 1);

    /* End of Outputs for SubSystem: '<S2>/sas_SinuPWM' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S2>/sas_SinuAddThrdHarmPWM' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* Sum: '<S53>/Add1' incorporates:
     *  Constant: '<S53>/Constant'
     *  Inport: '<Root>/busDcycGen_FstTaskIn'
     *  Sum: '<S53>/Add'
     *  Sum: '<S89>/Sum'
     *  Switch: '<S89>/Switch'
     */
    rtb_Add1_cvlw = (uint16)(((uint32)rtb_Sum) + ((uint16)
      (busDcycGen_FstTaskIn.u16_phiDaxQaxVltgAg - 16384)));

    /* SignalConversion generated from: '<S9>/u16_dcycPhDycCs2' incorporates:
     *  Constant: '<S57>/Constant'
     *  Constant: '<S57>/Constant1'
     *  Constant: '<S57>/Constant2'
     *  Constant: '<S57>/Constant3'
     *  Constant: '<S57>/Constant4'
     *  Constant: '<S57>/Constant5'
     *  Constant: '<S64>/Constant'
     *  Gain: '<S57>/Gain'
     *  Merge: '<S2>/Merge'
     *  Product: '<S57>/Divide'
     *  Product: '<S57>/Product'
     *  Saturate: '<S2>/Saturation'
     *  Selector: '<S57>/Selector'
     *  Selector: '<S57>/Selector1'
     *  Selector: '<S57>/Selector2'
     *  Sum: '<S53>/Add1'
     *  Sum: '<S57>/Add'
     *  Sum: '<S57>/Add3'
     *  Sum: '<S64>/Add'
     */
    busDcycGen_FstTaskOut.u16_dcycPhDyc[0] = (dt_DutyCycl_u16p15b0)
      (((((rtb_Saturation_0 * rtCP_Constant2_Value_o0nc[(uint16)((1023U *
             ((((uint32)rtb_Add1_cvlw) << 15) / 65535U)) >> 15)]) >> 15) << 1) +
        32768) >> 1);
    busDcycGen_FstTaskOut.u16_dcycPhDyc[1] = (dt_DutyCycl_u16p15b0)
      (((((rtb_Saturation_0 * rtCP_Constant3_Value_plsi[(uint16)((1023U *
             ((((uint32)((uint16)(rtb_Add1_cvlw - 21845))) << 15) / 65535U)) >>
            15)]) >> 15) << 1) + 32768) >> 1);
    busDcycGen_FstTaskOut.u16_dcycPhDyc[2] = (dt_DutyCycl_u16p15b0)
      (((((rtb_Saturation_0 * rtCP_Constant4_Value_dztf[(uint16)((1023U *
             ((((uint32)((uint16)(rtb_Add1_cvlw - 43691))) << 15) / 65535U)) >>
            15)]) >> 15) << 1) + 32768) >> 1);

    /* SignalConversion generated from: '<S9>/u16_ampMaxNrmVltgAmpCs2' incorporates:
     *  Constant: '<S53>/Constant1'
     *  Constant: '<S53>/Constant3'
     *  Merge: '<S2>/Merge1'
     *  Product: '<S53>/Product1'
     */
    busDcycGen_FstTaskOut.u16_ampMaxNrmVltgAmp = (dt_DutyCycl_u16p15b0)((18919U *
      Gu16_facOvrModulFac_C) >> 15);

    /* End of Outputs for SubSystem: '<S2>/sas_SinuAddThrdHarmPWM' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S2>/sas_SVPWM' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Sum: '<S39>/Add1' incorporates:
     *  Constant: '<S39>/Constant'
     *  Inport: '<Root>/busDcycGen_FstTaskIn'
     *  Sum: '<S39>/Add'
     *  Sum: '<S89>/Sum'
     *  Switch: '<S89>/Switch'
     */
    rtb_Add1_l2i3 = (uint16)(((uint32)rtb_Sum) + ((uint16)
      (busDcycGen_FstTaskIn.u16_phiDaxQaxVltgAg - 16384)));

    /* SignalConversion generated from: '<S8>/u16_dcycPhDycCs3' incorporates:
     *  Constant: '<S43>/Constant'
     *  Constant: '<S43>/Constant1'
     *  Constant: '<S43>/Constant2'
     *  Constant: '<S43>/Constant3'
     *  Constant: '<S43>/Constant4'
     *  Constant: '<S43>/Constant5'
     *  Constant: '<S50>/Constant'
     *  Gain: '<S43>/Gain'
     *  Merge: '<S2>/Merge'
     *  Product: '<S43>/Divide'
     *  Product: '<S43>/Product'
     *  Saturate: '<S2>/Saturation'
     *  Selector: '<S43>/Selector'
     *  Selector: '<S43>/Selector1'
     *  Selector: '<S43>/Selector2'
     *  Sum: '<S39>/Add1'
     *  Sum: '<S43>/Add'
     *  Sum: '<S43>/Add3'
     *  Sum: '<S50>/Add'
     */
    busDcycGen_FstTaskOut.u16_dcycPhDyc[0] = (dt_DutyCycl_u16p15b0)
      (((((rtb_Saturation_0 * rtCP_Constant2_Value_oxew[(uint16)((1023U *
             ((((uint32)rtb_Add1_l2i3) << 15) / 65535U)) >> 15)]) >> 15) << 1) +
        32768) >> 1);
    busDcycGen_FstTaskOut.u16_dcycPhDyc[1] = (dt_DutyCycl_u16p15b0)
      (((((rtb_Saturation_0 * rtCP_Constant3_Value_dctq[(uint16)((1023U *
             ((((uint32)((uint16)(rtb_Add1_l2i3 - 21845))) << 15) / 65535U)) >>
            15)]) >> 15) << 1) + 32768) >> 1);
    busDcycGen_FstTaskOut.u16_dcycPhDyc[2] = (dt_DutyCycl_u16p15b0)
      (((((rtb_Saturation_0 * rtCP_Constant4_Value_hsqu[(uint16)((1023U *
             ((((uint32)((uint16)(rtb_Add1_l2i3 - 43691))) << 15) / 65535U)) >>
            15)]) >> 15) << 1) + 32768) >> 1);

    /* SignalConversion generated from: '<S8>/u16_ampMaxNrmVltgAmpCs3' incorporates:
     *  Constant: '<S39>/Constant1'
     *  Constant: '<S39>/Constant3'
     *  Merge: '<S2>/Merge1'
     *  Product: '<S39>/Product1'
     */
    busDcycGen_FstTaskOut.u16_ampMaxNrmVltgAmp = (dt_DutyCycl_u16p15b0)((18919U *
      Gu16_facOvrModulFac_C) >> 15);

    /* End of Outputs for SubSystem: '<S2>/sas_SVPWM' */
    break;

   case 4:
    /* Outputs for IfAction SubSystem: '<S2>/sas_DisnMinPWM' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* Sum: '<S25>/Add1' incorporates:
     *  Constant: '<S25>/Constant'
     *  Inport: '<Root>/busDcycGen_FstTaskIn'
     *  Sum: '<S25>/Add'
     *  Sum: '<S89>/Sum'
     *  Switch: '<S89>/Switch'
     */
    rtb_Add1_hqrl = (uint16)(((uint32)rtb_Sum) + ((uint16)
      (busDcycGen_FstTaskIn.u16_phiDaxQaxVltgAg - 16384)));

    /* SignalConversion generated from: '<S7>/u16_dcycPhDycCs4' incorporates:
     *  Constant: '<S29>/Constant'
     *  Constant: '<S29>/Constant1'
     *  Constant: '<S29>/Constant2'
     *  Constant: '<S29>/Constant3'
     *  Constant: '<S29>/Constant4'
     *  Constant: '<S29>/Constant5'
     *  Gain: '<S29>/Gain'
     *  Merge: '<S2>/Merge'
     *  Product: '<S29>/Divide'
     *  Product: '<S29>/Product'
     *  Saturate: '<S2>/Saturation'
     *  Selector: '<S29>/Selector'
     *  Selector: '<S29>/Selector1'
     *  Selector: '<S29>/Selector2'
     *  Sum: '<S25>/Add1'
     *  Sum: '<S29>/Add'
     *  Sum: '<S29>/Add3'
     *  Sum: '<S36>/Add'
     */
    busDcycGen_FstTaskOut.u16_dcycPhDyc[0] = (uint16)(((uint16)
      ((rtb_Saturation_0 * rtCP_Constant2_Value_jykr[(uint16)((1023U *
      ((((uint32)rtb_Add1_hqrl) << 15) / 65535U)) >> 15)]) >> 15)) << 1);
    busDcycGen_FstTaskOut.u16_dcycPhDyc[1] = (uint16)(((uint16)
      ((rtb_Saturation_0 * rtCP_Constant3_Value_j2aj[(uint16)((1023U *
      ((((uint32)((uint16)(rtb_Add1_hqrl - 21845))) << 15) / 65535U)) >> 15)]) >>
       15)) << 1);
    busDcycGen_FstTaskOut.u16_dcycPhDyc[2] = (uint16)(((uint16)
      ((rtb_Saturation_0 * rtCP_Constant4_Value_e3ib[(uint16)((1023U *
      ((((uint32)((uint16)(rtb_Add1_hqrl - 43691))) << 15) / 65535U)) >> 15)]) >>
       15)) << 1);

    /* SignalConversion generated from: '<S7>/u16_ampMaxNrmVltgAmpCs4' incorporates:
     *  Constant: '<S25>/Constant1'
     *  Constant: '<S25>/Constant3'
     *  Merge: '<S2>/Merge1'
     *  Product: '<S25>/Product1'
     */
    busDcycGen_FstTaskOut.u16_ampMaxNrmVltgAmp = (dt_DutyCycl_u16p15b0)((18919U *
      Gu16_facOvrModulFac_C) >> 15);

    /* End of Outputs for SubSystem: '<S2>/sas_DisnMinPWM' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S2>/sas_Dfl' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* Sum: '<S11>/Add1' incorporates:
     *  Constant: '<S11>/Constant'
     *  Inport: '<Root>/busDcycGen_FstTaskIn'
     *  Sum: '<S11>/Add'
     *  Sum: '<S89>/Sum'
     *  Switch: '<S89>/Switch'
     */
    rtb_Add1 = (uint16)(((uint32)rtb_Sum) + ((uint16)
      (busDcycGen_FstTaskIn.u16_phiDaxQaxVltgAg - 16384)));

    /* SignalConversion generated from: '<S6>/u16_dcycPhDycCsDfl' incorporates:
     *  Constant: '<S15>/Constant'
     *  Constant: '<S15>/Constant1'
     *  Constant: '<S15>/Constant2'
     *  Constant: '<S15>/Constant3'
     *  Constant: '<S15>/Constant4'
     *  Constant: '<S15>/Constant5'
     *  Constant: '<S22>/Constant'
     *  Gain: '<S15>/Gain'
     *  Merge: '<S2>/Merge'
     *  Product: '<S15>/Divide'
     *  Product: '<S15>/Product'
     *  Saturate: '<S2>/Saturation'
     *  Selector: '<S15>/Selector'
     *  Selector: '<S15>/Selector1'
     *  Selector: '<S15>/Selector2'
     *  Sum: '<S11>/Add1'
     *  Sum: '<S15>/Add'
     *  Sum: '<S15>/Add3'
     *  Sum: '<S22>/Add'
     */
    busDcycGen_FstTaskOut.u16_dcycPhDyc[0] = (dt_DutyCycl_u16p15b0)
      (((((rtb_Saturation_0 * rtCP_Constant2_Value_fxfk[(uint16)((1023U *
             ((((uint32)rtb_Add1) << 15) / 65535U)) >> 15)]) >> 15) << 1) +
        32768) >> 1);
    busDcycGen_FstTaskOut.u16_dcycPhDyc[1] = (dt_DutyCycl_u16p15b0)
      (((((rtb_Saturation_0 * rtCP_Constant3_Value_pkbs[(uint16)((1023U *
             ((((uint32)((uint16)(rtb_Add1 - 21845))) << 15) / 65535U)) >> 15)])
          >> 15) << 1) + 32768) >> 1);
    busDcycGen_FstTaskOut.u16_dcycPhDyc[2] = (dt_DutyCycl_u16p15b0)
      (((((rtb_Saturation_0 * rtCP_Constant4_Value_imww[(uint16)((1023U *
             ((((uint32)((uint16)(rtb_Add1 - 43691))) << 15) / 65535U)) >> 15)])
          >> 15) << 1) + 32768) >> 1);

    /* SignalConversion generated from: '<S6>/u16_ampMaxNrmVltgAmpCsDfl' incorporates:
     *  Constant: '<S11>/Constant1'
     *  Constant: '<S11>/Constant3'
     *  Merge: '<S2>/Merge1'
     *  Product: '<S11>/Product1'
     */
    busDcycGen_FstTaskOut.u16_ampMaxNrmVltgAmp = (dt_DutyCycl_u16p15b0)((18919U *
      Gu16_facOvrModulFac_C) >> 15);

    /* End of Outputs for SubSystem: '<S2>/sas_Dfl' */
    break;
  }

  /* End of SwitchCase: '<S2>/Switch Case' */

  /* BusCreator: '<S82>/Bus Creator1' incorporates:
   *  Sum: '<S89>/Sum'
   *  Switch: '<S89>/Switch'
   */
  busDcycGen_FstTaskOut.u16_phiModulActElecAg = rtb_Sum;

  /* Update for UnitDelay: '<S94>/Unit Delay1' incorporates:
   *  Constant: '<S94>/Constant'
   */
  ASW_DcycGen_DW.bitsForTID0.UnitDelay1_DSTATE = true;

  /* Update for UnitDelay: '<S94>/Unit Delay' incorporates:
   *  Sum: '<S89>/Sum'
   *  Switch: '<S89>/Switch'
   */
  ASW_DcycGen_DW.UnitDelay_DSTATE = rtb_Sum;
}


/*
 * File trailer for generated code.
 *
 * [EOF]
 */


/*
 * File: ASW_OBD.c
 *
 * Code generated for Simulink model 'ASW_OBD'.
 *
 * Model version                  : 6.265
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Jan 14 13:35:33 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

/* Named constants for Chart: '<S37>/sfc_FaultDebounce' */
#define IN_Confirm                     ((uint8)1U)
#define IN_Confirming                  ((uint8)2U)
#define IN_NO_ACTIVE_CHILD             ((uint8)0U)
#define IN_Repairing                   ((uint8)3U)
#define IN_Wait                        ((uint8)4U)

/* Named constants for Chart: '<S36>/sfc_FaultDefiniteness' */
#define IN_Confirmed                   ((uint8)1U)
#define IN_Confirming_mgd1             ((uint8)2U)
#define IN_DisableDiagnosis            ((uint8)1U)
#define IN_EnableDiagnosis             ((uint8)2U)
#define IN_NO_ACTIVE_CHILD_crf3        ((uint8)0U)
#define IN_Normal                      ((uint8)3U)
#define IN_Wait_le4k                   ((uint8)4U)

/* Named constants for Chart: '<S73>/sfc_Debounce' */
#define IN_Confirm_az00                ((uint8)1U)
#define IN_Confirming_n43e             ((uint8)2U)
#define IN_NO_ACTIVE_CHILD_jdh3        ((uint8)0U)
#define IN_Wait_j43f                   ((uint8)3U)

/* Named constants for Chart: '<S61>/sfc_FaultDefiniteness' */
#define IN_Confirmed_fog5              ((uint8)1U)
#define IN_Confirming_p012             ((uint8)2U)
#define IN_DisableDiagnosis_ixht       ((uint8)1U)
#define IN_EnableDiagnosis_mjfq        ((uint8)2U)
#define IN_NO_ACTIVE_CHILD_lvm4        ((uint8)0U)
#define IN_Normal_iv3m                 ((uint8)3U)
#define IN_Wait_ax3z                   ((uint8)4U)

/* Named constants for Chart: '<S270>/sfc_ComDiaInitEn' */
#define IN_INITDISBL                   ((uint8)1U)
#define IN_INITEN                      ((uint8)2U)

const BUS_OBD_SLW_TASK_OUT ASW_OBD_rtZBUS_OBD_SLW_TASK_OUT = {
  {
    false,                             /* bol_flgPhCurrHiLvl1Flg */
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
  },                                   /* busOBD_FaltSt */
  0U,                                  /* u8_stMaxFaltLvl */
  0,                                   /* s16_nFaltRefMechSpd */
  0,                                   /* s16_trqFaltRefTqLim */
  false                                /* bol_flgPhiSensFaltRawFlg */
};                                     /* BUS_OBD_SLW_TASK_OUT ground */

/* Exported block signals */
BUS_OBD_SLW_TASK_IN busOBD_SlwTaskIn;  /* '<Root>/busOBD_SlwTaskIn' */
BUS_OBD_SLW_TASK_OUT busOBD_SlwTaskOut;/* '<S303>/Bus Creator1' */

/* Block signals (default storage) */
B_ASW_OBD ASW_OBD_B;

/* Block states (default storage) */
DW_ASW_OBD ASW_OBD_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_ASW_OBD ASW_OBD_PrevZCX;

/* Real-time model */
static RT_MODEL_ASW_OBD ASW_OBD_M_;
RT_MODEL_ASW_OBD *const ASW_OBD_M = &ASW_OBD_M_;
const BUS_OBD_SLW_TASK_IN ASW_OBD_rtZBUS_OBD_SLW_TASK_IN = { 0,/* s16_nRmpRefElecSpd */
  0,                                   /* s16_nActElecSpd */
  0U,                                  /* enm_stMotoSt */
  0,                                   /* s16_ampActPhCurrAmp */
  0U,                                  /* u16_uSplyVltg */
  40U,                                 /* u8_tPwrTubTemp */
  40U,                                 /* u8_tPCBTemp */
  40U,                                 /* u8_tMotoTemp */
  false,                               /* bol_flgComLosFaltRaw */
  0U,                                  /* u8_ctComRolCnt */
  0U,                                  /* u16_uCtlBrdVltg */
  3U,                                  /* enm_stSysSt */
  false,                               /* bol_flgHWOvrCurrFalt */
  false,                               /* bol_flgChipFalt */
  false,                               /* bol_flgPhiSensFalt */

  { 0U, 0U, 0U },                      /* u16_uADActPhCurr */
  0U,                                  /* u16_uADPwrTubTemp */
  0U,                                  /* u16_uADPCBTemp */
  0U,                                  /* u16_uADMotoTemp */
  0,                                   /* s16_pwrSplyElecPwr */

  { 0, 0, 0 },                         /* s16_iActPhCurr */
  0,                                   /* s16_iEstSplyCurr */

  { 0, 0 },                            /* s16_iRefDaxQaxCurr */

  { 0, 0 },                            /* s16_iActDaxQaxCurr */
  false,                               /* bol_flgShOffFlg */
  false,                               /* bol_enFaltInfoClrUDS14 */
  0U,                                  /* u16_vVehSpd */
  0U,                                  /* u32_disOde */
  0U,                                  /* u32_tiStamHi */
  0U,                                  /* u32_tiStamLo */
  0U,                                  /* u8_psiOilFlow */
  40U,                                 /* u8_tOilTemp */
  false,                               /* bol_enPosSCDCalibEnFlg */
  0U,                                  /* u8_psiUpLimOilFlow */
  false,                               /* bol_flgBusOffFaltRaw */
  false,                               /* bol_flgFaltEnFlgUDS85 */
  false,                               /* bol_flgWBSSt */
  false,                               /* bol_flgCRCFaltRaw */
  false,                               /* bol_flgMesgLngthFaltRaw */
  0,                                   /* s16_nComRefMechSpd */
  0U,                                  /* u16_psiEstPermMagFlx */
  0U,                                  /* enm_modeAgEvalMode */
  false,                               /* bol_flgCrashFalt */
  false,                               /* bol_flgGDVltgHiLvl1 */
  false,                               /* bol_flgGDVltgLoLvl1 */
  40U,                                 /* u8_tMCUTemp */
  40U,                                 /* u8_tPCBTempSubs */
  0U                                   /* u16_uGDVltg */
};

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
//static void rate_scheduler(void)
//{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  /*(ASW_OBD_M->Timing.TaskCounters.TID[1])++;
  if ((ASW_OBD_M->Timing.TaskCounters.TID[1]) > 79) {/* Sample time: [0.01s, 0.0s] */
    //ASW_OBD_M->Timing.TaskCounters.TID[1] = 0;
  /*/}
}*/

/*
 * System initialize for atomic system:
 *    '<S37>/sfc_FaultDebounce'
 *    '<S44>/sfc_FaultDebounce'
 *    '<S50>/sfc_FaultDebounce'
 *    '<S56>/sfc_FaultDebounce'
 *    '<S63>/sfc_FaultDebounce'
 *    '<S64>/sfc_FaultDebounce'
 *    '<S65>/sfc_FaultDebounce'
 *    '<S131>/sfc_FaultDebounce'
 *    '<S138>/sfc_FaultDebounce'
 *    '<S144>/sfc_FaultDebounce'
 *    ...
 */
void ASW_OBD_sfc_FaultDebounce_Init(boolean *rty_lb_genOutp,
  DW_sfc_FaultDebounce_ASW_OBD *localDW)
{
  localDW->is_active_c7_lib_debounce = 0U;
  localDW->is_c7_lib_debounce = IN_NO_ACTIVE_CHILD;
  localDW->lb_cntDebCond = 0U;
  *rty_lb_genOutp = false;
}

/*
 * Output and update for atomic system:
 *    '<S37>/sfc_FaultDebounce'
 *    '<S44>/sfc_FaultDebounce'
 *    '<S50>/sfc_FaultDebounce'
 *    '<S56>/sfc_FaultDebounce'
 *    '<S63>/sfc_FaultDebounce'
 *    '<S64>/sfc_FaultDebounce'
 *    '<S65>/sfc_FaultDebounce'
 *    '<S131>/sfc_FaultDebounce'
 *    '<S138>/sfc_FaultDebounce'
 *    '<S144>/sfc_FaultDebounce'
 *    ...
 */
void ASW_OBD_sfc_FaultDebounce(boolean rtu_lb_bolInp, uint16 rtu_lb_cntDebConf,
  uint16 rtu_lb_cntDebRcvy, boolean *rty_lb_genOutp,
  DW_sfc_FaultDebounce_ASW_OBD *localDW)
{
  sint32 tmp;

  /* Chart: '<S37>/sfc_FaultDebounce' */
  /* Gateway: lib_debounce_0/sfc_FaultDebounce */
  /* During: lib_debounce_0/sfc_FaultDebounce */
  if (localDW->is_active_c7_lib_debounce == 0U) {
    /* Entry: lib_debounce_0/sfc_FaultDebounce */
    localDW->is_active_c7_lib_debounce = 1U;

    /* Entry Internal: lib_debounce_0/sfc_FaultDebounce */
    /* Transition: '<S39>:149' */
    /* There is Fault */
    if (rtu_lb_bolInp) {
      /* Transition: '<S39>:182' */
      /* Direct Confirm */
      if (rtu_lb_cntDebConf == 0) {
        /* Transition: '<S39>:185' */
        /* Transition: '<S39>:188' */
        localDW->is_c7_lib_debounce = IN_Confirm;

        /* Entry 'Confirm': '<S39>:165' */
        /* Set Bit0 Bit1 */
        localDW->lb_cntDebCond = 0U;
        *rty_lb_genOutp = true;
      } else {
        /* Transition: '<S39>:183' */
        localDW->is_c7_lib_debounce = IN_Confirming;

        /* Entry 'Confirming': '<S39>:93' */
        /* Set Bit0 */
        tmp = localDW->lb_cntDebCond + 1;
        if ((localDW->lb_cntDebCond + 1) > 65535) {
          tmp = 65535;
        }

        localDW->lb_cntDebCond = (uint16)tmp;
        *rty_lb_genOutp = false;
      }
    } else {
      /* Transition: '<S39>:180' */
      localDW->is_c7_lib_debounce = IN_Wait;

      /* Entry 'Wait': '<S39>:98' */
      localDW->lb_cntDebCond = 0U;
      *rty_lb_genOutp = false;
    }
  } else {
    switch (localDW->is_c7_lib_debounce) {
     case IN_Confirm:
      *rty_lb_genOutp = true;

      /* During 'Confirm': '<S39>:165' */
      /* There is no Fault */
      if (!rtu_lb_bolInp) {
        /* Transition: '<S39>:196' */
        /* Direct Repair */
        if (rtu_lb_cntDebRcvy == 0) {
          /* Transition: '<S39>:197' */
          localDW->is_c7_lib_debounce = IN_Wait;

          /* Entry 'Wait': '<S39>:98' */
          localDW->lb_cntDebCond = 0U;
          *rty_lb_genOutp = false;
        } else {
          /* Transition: '<S39>:207' */
          /* Need Debounce */
          localDW->is_c7_lib_debounce = IN_Repairing;

          /* Entry 'Repairing': '<S39>:100' */
          /* Clear Bit0 */
          tmp = localDW->lb_cntDebCond + 1;
          if ((localDW->lb_cntDebCond + 1) > 65535) {
            tmp = 65535;
          }

          localDW->lb_cntDebCond = (uint16)tmp;
          *rty_lb_genOutp = true;
        }
      }
      break;

     case IN_Confirming:
      *rty_lb_genOutp = false;

      /* During 'Confirming': '<S39>:93' */
      /* There is no Fault */
      if (!rtu_lb_bolInp) {
        /* Transition: '<S39>:173' */
        localDW->is_c7_lib_debounce = IN_Wait;

        /* Entry 'Wait': '<S39>:98' */
        localDW->lb_cntDebCond = 0U;
        *rty_lb_genOutp = false;

        /* Fault Is Confirmed */
      } else if (localDW->lb_cntDebCond >= rtu_lb_cntDebConf) {
        /* Transition: '<S39>:167' */
        localDW->is_c7_lib_debounce = IN_Confirm;

        /* Entry 'Confirm': '<S39>:165' */
        /* Set Bit0 Bit1 */
        localDW->lb_cntDebCond = 0U;
        *rty_lb_genOutp = true;
      } else {
        localDW->lb_cntDebCond++;
      }
      break;

     case IN_Repairing:
      *rty_lb_genOutp = true;

      /* During 'Repairing': '<S39>:100' */
      /* There is Fault */
      if (rtu_lb_bolInp) {
        /* Transition: '<S39>:172' */
        localDW->is_c7_lib_debounce = IN_Confirm;

        /* Entry 'Confirm': '<S39>:165' */
        /* Set Bit0 Bit1 */
        localDW->lb_cntDebCond = 0U;
        *rty_lb_genOutp = true;

        /* Fault Is Repaired */
      } else if (localDW->lb_cntDebCond >= rtu_lb_cntDebRcvy) {
        /* Transition: '<S39>:169' */
        localDW->is_c7_lib_debounce = IN_Wait;

        /* Entry 'Wait': '<S39>:98' */
        localDW->lb_cntDebCond = 0U;
        *rty_lb_genOutp = false;
      } else {
        localDW->lb_cntDebCond++;
      }
      break;

     default:
      *rty_lb_genOutp = false;

      /* During 'Wait': '<S39>:98' */
      /* There is Fault */
      if (rtu_lb_bolInp) {
        /* Transition: '<S39>:166' */
        /* Direct Confirm */
        if (rtu_lb_cntDebConf == 0) {
          /* Transition: '<S39>:214' */
          localDW->is_c7_lib_debounce = IN_Confirm;

          /* Entry 'Confirm': '<S39>:165' */
          /* Set Bit0 Bit1 */
          localDW->lb_cntDebCond = 0U;
          *rty_lb_genOutp = true;
        } else {
          /* Transition: '<S39>:213' */
          /* Need Debounce */
          localDW->is_c7_lib_debounce = IN_Confirming;

          /* Entry 'Confirming': '<S39>:93' */
          /* Set Bit0 */
          tmp = localDW->lb_cntDebCond + 1;
          if ((localDW->lb_cntDebCond + 1) > 65535) {
            tmp = 65535;
          }

          localDW->lb_cntDebCond = (uint16)tmp;
          *rty_lb_genOutp = false;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S37>/sfc_FaultDebounce' */
}

/*
 * System initialize for atomic system:
 *    '<S35>/lib_Deb_11'
 *    '<S42>/lib_Deb_4'
 *    '<S48>/lib_Deb_17'
 *    '<S54>/lib_Deb_1'
 *    '<S130>/lib_Deb_16'
 *    '<S137>/lib_Deb_15'
 *    '<S142>/lib_Deb_0'
 *    '<S179>/lib_Deb_14'
 *    '<S186>/lib_Deb_10'
 *    '<S200>/lib_Deb_3'
 *    ...
 */
void ASW_OBD_lib_Deb_11_Init(boolean *rty_lb_genOutp, DW_lib_Deb_11_ASW_OBD
  *localDW)
{
  /* SystemInitialize for Chart: '<S37>/sfc_FaultDebounce' */
  ASW_OBD_sfc_FaultDebounce_Init(rty_lb_genOutp, &localDW->sf_sfc_FaultDebounce);
}

/*
 * Output and update for atomic system:
 *    '<S35>/lib_Deb_11'
 *    '<S42>/lib_Deb_4'
 *    '<S48>/lib_Deb_17'
 *    '<S54>/lib_Deb_1'
 *    '<S130>/lib_Deb_16'
 *    '<S137>/lib_Deb_15'
 *    '<S142>/lib_Deb_0'
 *    '<S179>/lib_Deb_14'
 *    '<S186>/lib_Deb_10'
 *    '<S200>/lib_Deb_3'
 *    ...
 */
void ASW_OBD_lib_Deb_11(boolean rtu_lb_bolInp, uint16 rtu_lb_cntDebConf, uint16
  rtu_lb_cntDebRcvy, boolean *rty_lb_genOutp, DW_lib_Deb_11_ASW_OBD *localDW)
{
  /* Chart: '<S37>/sfc_FaultDebounce' */
  ASW_OBD_sfc_FaultDebounce(rtu_lb_bolInp, rtu_lb_cntDebConf, rtu_lb_cntDebRcvy,
    rty_lb_genOutp, &localDW->sf_sfc_FaultDebounce);
}

/*
 * System initialize for atomic system:
 *    '<S36>/sfc_FaultDefiniteness'
 *    '<S43>/sfc_FaultDefiniteness'
 *    '<S49>/sfc_FaultDefiniteness'
 *    '<S55>/sfc_FaultDefiniteness'
 *    '<S72>/sfc_FaultDefiniteness'
 *    '<S79>/sfc_FaultDefiniteness'
 *    '<S129>/sfc_FaultDefiniteness'
 *    '<S136>/sfc_FaultDefiniteness'
 *    '<S143>/sfc_FaultDefiniteness'
 *    '<S149>/sfc_FaultDefiniteness'
 *    ...
 */
void ASW__sfc_FaultDefiniteness_Init(boolean *rty_stFaltDef_Tmpr, boolean
  *rty_stFaltDef_Perm, uint8 *rty_FaltCycAccCnt, DW_sfc_FaultDefiniteness_ASW_OB
  *localDW)
{
  localDW->is_EnableDiagnosis = IN_NO_ACTIVE_CHILD_crf3;
  localDW->is_active_c2_s2gUMFbtGpNo4AAroJ = 0U;
  localDW->is_c2_s2gUMFbtGpNo4AAroJTbGcH_l = IN_NO_ACTIVE_CHILD_crf3;
  localDW->FaltWaitRecvCnt = 0U;
  *rty_stFaltDef_Tmpr = false;
  *rty_stFaltDef_Perm = false;
  *rty_FaltCycAccCnt = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S36>/sfc_FaultDefiniteness'
 *    '<S43>/sfc_FaultDefiniteness'
 *    '<S49>/sfc_FaultDefiniteness'
 *    '<S55>/sfc_FaultDefiniteness'
 *    '<S72>/sfc_FaultDefiniteness'
 *    '<S79>/sfc_FaultDefiniteness'
 *    '<S129>/sfc_FaultDefiniteness'
 *    '<S136>/sfc_FaultDefiniteness'
 *    '<S143>/sfc_FaultDefiniteness'
 *    '<S149>/sfc_FaultDefiniteness'
 *    ...
 */
void ASW_OBD_sfc_FaultDefiniteness(boolean rtu_stFaltDeb, boolean
  rtu_bolFaltEnFlg, uint8 rtu_stFaltCycDiaCnt, boolean rtu_bolFaltRecEnFlag,
  boolean *rty_stFaltDef_Tmpr, boolean *rty_stFaltDef_Perm, uint8
  *rty_FaltCycAccCnt, uint16 rtp_lb_FaltWaitRecvCnt,
  DW_sfc_FaultDefiniteness_ASW_OB *localDW)
{
  sint32 tmp;

  /* Chart: '<S36>/sfc_FaultDefiniteness' */
  /* Gateway: FaultDefiniteness_0/sfc_FaultDefiniteness */
  /* During: FaultDefiniteness_0/sfc_FaultDefiniteness */
  if (localDW->is_active_c2_s2gUMFbtGpNo4AAroJ == 0U) {
    /* Entry: FaultDefiniteness_0/sfc_FaultDefiniteness */
    localDW->is_active_c2_s2gUMFbtGpNo4AAroJ = 1U;

    /* Entry Internal: FaultDefiniteness_0/sfc_FaultDefiniteness */
    /* Transition: '<S40>:222' */
    localDW->is_c2_s2gUMFbtGpNo4AAroJTbGcH_l = IN_DisableDiagnosis;

    /* Entry 'DisableDiagnosis': '<S40>:221' */
    /* Clear Bit0 Bit1 */
    *rty_stFaltDef_Tmpr = false;
    *rty_stFaltDef_Perm = false;
    *rty_FaltCycAccCnt = 0U;
  } else if (localDW->is_c2_s2gUMFbtGpNo4AAroJTbGcH_l == IN_DisableDiagnosis) {
    *rty_stFaltDef_Tmpr = false;
    *rty_stFaltDef_Perm = false;

    /* During 'DisableDiagnosis': '<S40>:221' */
    /* Fault Need Enable */
    if (rtu_bolFaltEnFlg) {
      /* Transition: '<S40>:223' */
      localDW->is_c2_s2gUMFbtGpNo4AAroJTbGcH_l = IN_EnableDiagnosis;

      /* Entry Internal 'EnableDiagnosis': '<S40>:220' */
      /* Transition: '<S40>:149' */
      localDW->is_EnableDiagnosis = IN_Normal;

      /* Entry 'Normal': '<S40>:225' */
      /* Clear Bit0 Bit1 */
      *rty_stFaltDef_Tmpr = false;
      *rty_stFaltDef_Perm = false;
      *rty_FaltCycAccCnt = 0U;
    }
  } else {
    /* During 'EnableDiagnosis': '<S40>:220' */
    switch (localDW->is_EnableDiagnosis) {
     case IN_Confirmed:
      *rty_stFaltDef_Tmpr = false;
      *rty_stFaltDef_Perm = true;

      /* During 'Confirmed': '<S40>:165' */
      /* Need Recovery */
      if (rtu_bolFaltRecEnFlag && (!rtu_stFaltDeb)) {
        /* Transition: '<S40>:219' */
        /* Transition: '<S40>:230' */
        localDW->is_EnableDiagnosis = IN_Normal;

        /* Entry 'Normal': '<S40>:225' */
        /* Clear Bit0 Bit1 */
        *rty_stFaltDef_Tmpr = false;
        *rty_stFaltDef_Perm = false;
        *rty_FaltCycAccCnt = 0U;
      }
      break;

     case IN_Confirming_mgd1:
      *rty_stFaltDef_Tmpr = true;
      *rty_stFaltDef_Perm = true;

      /* During 'Confirming': '<S40>:93' */
      /* There is no Fault */
      if (!rtu_stFaltDeb) {
        /* Transition: '<S40>:173' */
        localDW->is_EnableDiagnosis = IN_Wait_le4k;

        /* Entry 'Wait': '<S40>:98' */
        /* Set Bit0 Clear Bit1 */
        *rty_stFaltDef_Tmpr = true;
        *rty_stFaltDef_Perm = false;
        localDW->FaltWaitRecvCnt = 0U;
      }
      break;

     case IN_Normal:
      *rty_stFaltDef_Tmpr = false;
      *rty_stFaltDef_Perm = false;

      /* During 'Normal': '<S40>:225' */
      /* There is Fault */
      if (rtu_stFaltDeb) {
        /* Transition: '<S40>:182' */
        /* Direct Confirm */
        if (rtu_stFaltCycDiaCnt == 0) {
          /* Transition: '<S40>:185' */
          /* Transition: '<S40>:188' */
          localDW->is_EnableDiagnosis = IN_Confirmed;

          /* Entry 'Confirmed': '<S40>:165' */
          /* Set Bit1 Clear Bit0 */
          *rty_stFaltDef_Tmpr = false;
          *rty_stFaltDef_Perm = true;
          *rty_FaltCycAccCnt = 0U;
        } else {
          /* Transition: '<S40>:183' */
          localDW->is_EnableDiagnosis = IN_Confirming_mgd1;

          /* Entry 'Confirming': '<S40>:93' */
          /* Set Bit0 Bit1 */
          *rty_stFaltDef_Tmpr = true;
          *rty_stFaltDef_Perm = true;
          tmp = (*rty_FaltCycAccCnt) + 1;
          if (((*rty_FaltCycAccCnt) + 1) > 255) {
            tmp = 255;
          }

          *rty_FaltCycAccCnt = (uint8)tmp;
        }
      }
      break;

     default:
      *rty_stFaltDef_Tmpr = true;
      *rty_stFaltDef_Perm = false;

      /* During 'Wait': '<S40>:98' */
      /* There is Fault */
      if (rtu_stFaltDeb) {
        /* Transition: '<S40>:166' */
        /* Fault is Confirmed */
        if ((*rty_FaltCycAccCnt) >= rtu_stFaltCycDiaCnt) {
          /* Transition: '<S40>:214' */
          /* Transition: '<S40>:232' */
          /* Exit 'Wait': '<S40>:98' */
          localDW->FaltWaitRecvCnt = 0U;
          localDW->is_EnableDiagnosis = IN_Confirmed;

          /* Entry 'Confirmed': '<S40>:165' */
          /* Set Bit1 Clear Bit0 */
          *rty_stFaltDef_Tmpr = false;
          *rty_stFaltDef_Perm = true;
          *rty_FaltCycAccCnt = 0U;
        } else {
          /* Transition: '<S40>:213' */
          /* Need Confirm */
          /* Exit 'Wait': '<S40>:98' */
          localDW->FaltWaitRecvCnt = 0U;
          localDW->is_EnableDiagnosis = IN_Confirming_mgd1;

          /* Entry 'Confirming': '<S40>:93' */
          /* Set Bit0 Bit1 */
          *rty_stFaltDef_Tmpr = true;
          *rty_stFaltDef_Perm = true;
          tmp = (*rty_FaltCycAccCnt) + 1;
          if (((*rty_FaltCycAccCnt) + 1) > 255) {
            tmp = 255;
          }

          *rty_FaltCycAccCnt = (uint8)tmp;
        }
      } else {
        /* Confirm to Recovery */
        tmp = (rtp_lb_FaltWaitRecvCnt << 1);
        if (tmp > 65535) {
          tmp = 65535;
        }

        if ((localDW->FaltWaitRecvCnt > tmp) && rtu_bolFaltEnFlg) {
          /* Transition: '<S40>:226' */
          /* Transition: '<S40>:234' */
          /* Exit 'Wait': '<S40>:98' */
          localDW->FaltWaitRecvCnt = 0U;
          localDW->is_EnableDiagnosis = IN_Normal;

          /* Entry 'Normal': '<S40>:225' */
          /* Clear Bit0 Bit1 */
          *rty_stFaltDef_Tmpr = false;
          *rty_stFaltDef_Perm = false;
          *rty_FaltCycAccCnt = 0U;
        } else {
          tmp = localDW->FaltWaitRecvCnt + 1;
          if ((localDW->FaltWaitRecvCnt + 1) > 65535) {
            tmp = 65535;
          }

          localDW->FaltWaitRecvCnt = (uint16)tmp;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S36>/sfc_FaultDefiniteness' */
}

/*
 * System initialize for atomic system:
 *    '<S34>/lib_FaltDefd_21'
 *    '<S41>/lib_FaltDefd_12'
 *    '<S47>/lib_FaltDefd_9'
 *    '<S53>/lib_FaltDefd_9'
 *    '<S70>/lib_FaltDefd_1'
 *    '<S77>/lib_FaltDefd_0'
 *    '<S127>/lib_FaltDefd_8'
 *    '<S134>/lib_FaltDefd_7'
 *    '<S141>/lib_FaltDefd_3'
 *    '<S147>/lib_FaltDefd_22'
 *    ...
 */
void ASW_OBD_lib_FaltDefd_21_Init(boolean *rty_stFaltDef_Tmpr, boolean
  *rty_stFaltDef_Perm, uint8 *rty_FaltCycAccCnt, DW_lib_FaltDefd_21_ASW_OBD
  *localDW)
{
  /* SystemInitialize for Chart: '<S36>/sfc_FaultDefiniteness' */
  ASW__sfc_FaultDefiniteness_Init(rty_stFaltDef_Tmpr, rty_stFaltDef_Perm,
    rty_FaltCycAccCnt, &localDW->sf_sfc_FaultDefiniteness);
}

/*
 * Output and update for atomic system:
 *    '<S34>/lib_FaltDefd_21'
 *    '<S41>/lib_FaltDefd_12'
 *    '<S47>/lib_FaltDefd_9'
 *    '<S53>/lib_FaltDefd_9'
 *    '<S70>/lib_FaltDefd_1'
 *    '<S77>/lib_FaltDefd_0'
 *    '<S127>/lib_FaltDefd_8'
 *    '<S134>/lib_FaltDefd_7'
 *    '<S141>/lib_FaltDefd_3'
 *    '<S147>/lib_FaltDefd_22'
 *    ...
 */
void ASW_OBD_lib_FaltDefd_21(boolean rtu_stFaltDeb, boolean rtu_bolFaltEnFlg,
  uint8 rtu_stFaltCycDiaCnt, boolean rtu_bolFaltRecEnFlag, boolean
  *rty_stFaltDef_Tmpr, boolean *rty_stFaltDef_Perm, uint8 *rty_FaltCycAccCnt,
  uint16 rtp_lb_FaltWaitRecvCnt, DW_lib_FaltDefd_21_ASW_OBD *localDW)
{
  /* Chart: '<S36>/sfc_FaultDefiniteness' */
  ASW_OBD_sfc_FaultDefiniteness(rtu_stFaltDeb, rtu_bolFaltEnFlg,
    rtu_stFaltCycDiaCnt, rtu_bolFaltRecEnFlag, rty_stFaltDef_Tmpr,
    rty_stFaltDef_Perm, rty_FaltCycAccCnt, rtp_lb_FaltWaitRecvCnt,
    &localDW->sf_sfc_FaultDefiniteness);
}

/*
 * System initialize for atomic system:
 *    '<S62>/lib_Deb_5'
 *    '<S62>/lib_Deb_6'
 *    '<S62>/lib_Deb_7'
 *    '<S229>/lib_Deb_12'
 *    '<S229>/lib_Deb_13'
 */
void ASW_OBD_lib_Deb_5_Init(boolean *rty_lb_genOutp, DW_lib_Deb_5_ASW_OBD
  *localDW)
{
  /* SystemInitialize for Chart: '<S63>/sfc_FaultDebounce' */
  ASW_OBD_sfc_FaultDebounce_Init(rty_lb_genOutp, &localDW->sf_sfc_FaultDebounce);
}

/*
 * Output and update for atomic system:
 *    '<S62>/lib_Deb_5'
 *    '<S62>/lib_Deb_6'
 *    '<S62>/lib_Deb_7'
 *    '<S229>/lib_Deb_12'
 *    '<S229>/lib_Deb_13'
 */
boolean ASW_OBD_lib_Deb_5(boolean rtu_lb_bolInp, uint16 rtu_lb_cntDebConf,
  uint16 rtu_lb_cntDebRcvy, DW_lib_Deb_5_ASW_OBD *localDW)
{
  boolean rty_lb_genOutp_0;

  /* Chart: '<S63>/sfc_FaultDebounce' */
  ASW_OBD_sfc_FaultDebounce(rtu_lb_bolInp, rtu_lb_cntDebConf, rtu_lb_cntDebRcvy,
    &rty_lb_genOutp_0, &localDW->sf_sfc_FaultDebounce);
  return rty_lb_genOutp_0;
}

/*
 * System initialize for atomic system:
 *    '<S73>/sfc_Debounce'
 *    '<S73>/sfc_Debounce1'
 *    '<S80>/sfc_Debounce'
 *    '<S80>/sfc_Debounce1'
 *    '<S150>/sfc_Debounce'
 *    '<S150>/sfc_Debounce1'
 *    '<S160>/sfc_Debounce'
 *    '<S160>/sfc_Debounce1'
 *    '<S167>/sfc_Debounce'
 *    '<S167>/sfc_Debounce1'
 *    ...
 */
void ASW_OBD_sfc_Debounce_Init(boolean *rty_lb_genOutp, DW_sfc_Debounce_ASW_OBD *
  localDW)
{
  localDW->is_active_c7_vhit_control_libra = 0U;
  localDW->is_c7_vhit_control_library = IN_NO_ACTIVE_CHILD_jdh3;
  localDW->lb_cntDebCond = 0U;
  *rty_lb_genOutp = false;
}

/*
 * Output and update for atomic system:
 *    '<S73>/sfc_Debounce'
 *    '<S73>/sfc_Debounce1'
 *    '<S80>/sfc_Debounce'
 *    '<S80>/sfc_Debounce1'
 *    '<S150>/sfc_Debounce'
 *    '<S150>/sfc_Debounce1'
 *    '<S160>/sfc_Debounce'
 *    '<S160>/sfc_Debounce1'
 *    '<S167>/sfc_Debounce'
 *    '<S167>/sfc_Debounce1'
 *    ...
 */
void ASW_OBD_sfc_Debounce(boolean rtu_lb_bolInp, uint16 rtu_lb_cntDebConf,
  boolean *rty_lb_genOutp, DW_sfc_Debounce_ASW_OBD *localDW)
{
  sint32 tmp;

  /* Chart: '<S73>/sfc_Debounce' */
  /* Gateway: lib_HysDeb_1/sfc_Debounce */
  /* During: lib_HysDeb_1/sfc_Debounce */
  if (localDW->is_active_c7_vhit_control_libra == 0U) {
    /* Entry: lib_HysDeb_1/sfc_Debounce */
    localDW->is_active_c7_vhit_control_libra = 1U;

    /* Entry Internal: lib_HysDeb_1/sfc_Debounce */
    /* Transition: '<S74>:149' */
    /* There is Fault */
    if (rtu_lb_bolInp) {
      /* Transition: '<S74>:182' */
      /* Direct Confirm */
      if (rtu_lb_cntDebConf == 0) {
        /* Transition: '<S74>:185' */
        /* Transition: '<S74>:188' */
        localDW->is_c7_vhit_control_library = IN_Confirm_az00;

        /* Entry 'Confirm': '<S74>:165' */
        /* Set Bit0 Bit1 */
        localDW->lb_cntDebCond = 0U;
        *rty_lb_genOutp = true;
      } else {
        /* Transition: '<S74>:183' */
        localDW->is_c7_vhit_control_library = IN_Confirming_n43e;

        /* Entry 'Confirming': '<S74>:93' */
        /* Set Bit0 */
        tmp = localDW->lb_cntDebCond + 1;
        if ((localDW->lb_cntDebCond + 1) > 65535) {
          tmp = 65535;
        }

        localDW->lb_cntDebCond = (uint16)tmp;
        *rty_lb_genOutp = false;
      }
    } else {
      /* Transition: '<S74>:180' */
      localDW->is_c7_vhit_control_library = IN_Wait_j43f;

      /* Entry 'Wait': '<S74>:98' */
      localDW->lb_cntDebCond = 0U;
      *rty_lb_genOutp = false;
    }
  } else {
    switch (localDW->is_c7_vhit_control_library) {
     case IN_Confirm_az00:
      *rty_lb_genOutp = true;

      /* During 'Confirm': '<S74>:165' */
      /* There is no Fault */
      if (!rtu_lb_bolInp) {
        /* Transition: '<S74>:196' */
        localDW->is_c7_vhit_control_library = IN_Wait_j43f;

        /* Entry 'Wait': '<S74>:98' */
        localDW->lb_cntDebCond = 0U;
        *rty_lb_genOutp = false;
      }
      break;

     case IN_Confirming_n43e:
      *rty_lb_genOutp = false;

      /* During 'Confirming': '<S74>:93' */
      /* There is no Fault */
      if (!rtu_lb_bolInp) {
        /* Transition: '<S74>:173' */
        localDW->is_c7_vhit_control_library = IN_Wait_j43f;

        /* Entry 'Wait': '<S74>:98' */
        localDW->lb_cntDebCond = 0U;
        *rty_lb_genOutp = false;

        /* Fault Is Confirmed */
      } else if (localDW->lb_cntDebCond >= rtu_lb_cntDebConf) {
        /* Transition: '<S74>:167' */
        localDW->is_c7_vhit_control_library = IN_Confirm_az00;

        /* Entry 'Confirm': '<S74>:165' */
        /* Set Bit0 Bit1 */
        localDW->lb_cntDebCond = 0U;
        *rty_lb_genOutp = true;
      } else {
        localDW->lb_cntDebCond++;
      }
      break;

     default:
      *rty_lb_genOutp = false;

      /* During 'Wait': '<S74>:98' */
      /* There is Fault */
      if (rtu_lb_bolInp) {
        /* Transition: '<S74>:166' */
        /* Direct Confirm */
        if (rtu_lb_cntDebConf == 0) {
          /* Transition: '<S74>:214' */
          localDW->is_c7_vhit_control_library = IN_Confirm_az00;

          /* Entry 'Confirm': '<S74>:165' */
          /* Set Bit0 Bit1 */
          localDW->lb_cntDebCond = 0U;
          *rty_lb_genOutp = true;
        } else {
          /* Transition: '<S74>:213' */
          /* Need Debounce */
          localDW->is_c7_vhit_control_library = IN_Confirming_n43e;

          /* Entry 'Confirming': '<S74>:93' */
          /* Set Bit0 */
          tmp = localDW->lb_cntDebCond + 1;
          if ((localDW->lb_cntDebCond + 1) > 65535) {
            tmp = 65535;
          }

          localDW->lb_cntDebCond = (uint16)tmp;
          *rty_lb_genOutp = false;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S73>/sfc_Debounce' */
}

/*
 * System initialize for atomic system:
 *    '<S71>/lib_HysDeb_1'
 *    '<S78>/lib_HysDeb_0'
 *    '<S245>/lib_HysDeb_5'
 *    '<S252>/lib_HysDeb_3'
 *    '<S259>/lib_HysDeb_4'
 *    '<S270>/lib_HysDeb_16'
 *    '<S270>/lib_HysDeb_17'
 */
void ASW_OBD_lib_HysDeb_1_Init(boolean rtp_lb_parInitOutp,
  DW_lib_HysDeb_1_ASW_OBD *localDW)
{
  boolean rtb_lb_genOutp_eunr;

  /* InitializeConditions for UnitDelay: '<S73>/Unit Delay2' */
  localDW->bitsForTID1.UnitDelay2_DSTATE = rtp_lb_parInitOutp;

  /* SystemInitialize for Chart: '<S73>/sfc_Debounce1' */
  ASW_OBD_sfc_Debounce_Init(&rtb_lb_genOutp_eunr, &localDW->sf_sfc_Debounce1);

  /* SystemInitialize for Chart: '<S73>/sfc_Debounce' */
  ASW_OBD_sfc_Debounce_Init(&rtb_lb_genOutp_eunr, &localDW->sf_sfc_Debounce);
}

/*
 * Output and update for atomic system:
 *    '<S71>/lib_HysDeb_1'
 *    '<S78>/lib_HysDeb_0'
 *    '<S245>/lib_HysDeb_5'
 *    '<S252>/lib_HysDeb_3'
 *    '<S259>/lib_HysDeb_4'
 *    '<S270>/lib_HysDeb_16'
 *    '<S270>/lib_HysDeb_17'
 */
void ASW_OBD_lib_HysDeb_1(dt_Standardize_u16p15b0 rtu_lb_genInp,
  dt_Standardize_u16p15b0 rtu_lb_genUpLim, dt_Standardize_u16p15b0
  rtu_lb_genLowLim, uint16 rtu_lb_cntSetConf, uint16 rtu_lb_cntRsetConf, boolean
  rtu_lb_bolSet, boolean rtu_lb_bolRset, boolean *rty_lb_bolDebOutp, boolean
  *rty_lb_bolHiOccOutp, boolean *rty_lb_bolLoOccOutp, DW_lib_HysDeb_1_ASW_OBD
  *localDW)
{
  boolean rtb_lb_genOutp_iqys;
  boolean rtb_lb_genOutp_l21w;

  /* RelationalOperator: '<S73>/Relational Operator' */
  *rty_lb_bolLoOccOutp = (rtu_lb_genInp < rtu_lb_genLowLim);

  /* Chart: '<S73>/sfc_Debounce1' */
  ASW_OBD_sfc_Debounce(*rty_lb_bolLoOccOutp, rtu_lb_cntRsetConf,
                       &rtb_lb_genOutp_iqys, &localDW->sf_sfc_Debounce1);

  /* RelationalOperator: '<S73>/Relational Operator1' */
  *rty_lb_bolHiOccOutp = (rtu_lb_genInp > rtu_lb_genUpLim);

  /* Chart: '<S73>/sfc_Debounce' */
  ASW_OBD_sfc_Debounce(*rty_lb_bolHiOccOutp, rtu_lb_cntSetConf,
                       &rtb_lb_genOutp_l21w, &localDW->sf_sfc_Debounce);

  /* Switch: '<S73>/Switch1' incorporates:
   *  Switch: '<S73>/Switch'
   *  UnitDelay: '<S73>/Unit Delay2'
   */
  if (rtb_lb_genOutp_l21w) {
    *rty_lb_bolDebOutp = rtu_lb_bolSet;
  } else if (rtb_lb_genOutp_iqys) {
    /* Switch: '<S73>/Switch' */
    *rty_lb_bolDebOutp = rtu_lb_bolRset;
  } else {
    *rty_lb_bolDebOutp = localDW->bitsForTID1.UnitDelay2_DSTATE;
  }

  /* End of Switch: '<S73>/Switch1' */

  /* Update for UnitDelay: '<S73>/Unit Delay2' */
  localDW->bitsForTID1.UnitDelay2_DSTATE = *rty_lb_bolDebOutp;
}

/* Output and update for iterator system: '<S10>/sss_FaltLvlConf' */
void ASW_OBD_sss_FaltLvlConf(void)
{
  sint32 i;
  uint8 rtb_Switch;
  uint8 s94_iter;
  boolean tmp[30];

  /* Outputs for Iterator SubSystem: '<S10>/sss_FaltLvlConf' incorporates:
   *  ForIterator: '<S94>/For Iterator'
   */
  /* SignalConversion generated from: '<S94>/Selector1' */
  tmp[0] = ASW_OBD_B.BusCreator1.bol_flgPhCurrHiLvl1Flg;
  tmp[1] = ASW_OBD_B.BusCreator1.bol_flgHWOvrCurrFlg;
  tmp[2] = ASW_OBD_B.BusCreator1.bol_flgSplyVltgLoLvl1Flg;
  tmp[3] = ASW_OBD_B.BusCreator1.bol_flgSplyVltgLoLvl2Flg;
  tmp[4] = ASW_OBD_B.BusCreator1.bol_flgSplyVltgHiLvl1Flg;
  tmp[5] = ASW_OBD_B.BusCreator1.bol_flgPwrTubPCBTempHiLvl1Flg;
  tmp[6] = ASW_OBD_B.BusCreator1.bol_flgPwrTubPCBTempHiLvl2Flg;
  tmp[7] = ASW_OBD_B.BusCreator1.bol_flgMotoTempHiLvl1Flg;
  tmp[8] = ASW_OBD_B.BusCreator1.bol_flgMotoTempHiLvl2Flg;
  tmp[9] = ASW_OBD_B.BusCreator1.bol_flgComFaltFlg;
  tmp[10] = ASW_OBD_B.BusCreator1.bol_flgMotoStallPermFlg;
  tmp[11] = ASW_OBD_B.BusCreator1.bol_flgMotoStallTmpFlg;
  tmp[12] = ASW_OBD_B.BusCreator1.bol_flgNoLdFlg;
  tmp[13] = ASW_OBD_B.BusCreator1.bol_flgBattPwrHiLvl1Flg;
  tmp[14] = ASW_OBD_B.BusCreator1.bol_flgMotoSpdHiLvl1Flg;
  tmp[15] = ASW_OBD_B.BusCreator1.bol_flgMotoSpdLoLvl1Flg;
  tmp[16] = ASW_OBD_B.BusCreator1.bol_flgCtlBrdVltgLoLvl1Flg;
  tmp[17] = ASW_OBD_B.BusCreator1.bol_flgCtlBrdVltgHiLvl1Flg;
  tmp[18] = ASW_OBD_B.BusCreator1.bol_flgGDVltgLoLvl1Flg;
  tmp[19] = ASW_OBD_B.BusCreator1.bol_flgGDVltgHiLvl1Flg;
  tmp[20] = ASW_OBD_B.BusCreator1.bol_flgChipFaltFlg;
  tmp[21] = ASW_OBD_B.BusCreator1.bol_flgPhiSensFaltFlg;
  tmp[22] = ASW_OBD_B.BusCreator1.bol_flgPhCurrSensFaltFlg;
  tmp[23] = ASW_OBD_B.BusCreator1.bol_flgPwrTubPCBTempSensFaltFlg;
  tmp[24] = ASW_OBD_B.BusCreator1.bol_flgMotoTempSensFaltFlg;
  tmp[25] = ASW_OBD_B.BusCreator1.bol_flgBusOffFaltFlg;
  tmp[26] = ASW_OBD_B.BusCreator1.bol_flgCrashFaltFlg;
  tmp[27] = ASW_OBD_B.BusCreator1.bol_flgReserved3Flg;
  tmp[28] = ASW_OBD_B.BusCreator1.bol_flgReserved4Flg;
  tmp[29] = ASW_OBD_B.BusCreator1.bol_flgReserved5Flg;
  for (s94_iter = 1; s94_iter < 31; s94_iter++) {
    /* Switch: '<S94>/Switch' incorporates:
     *  Constant: '<S94>/Constant1'
     *  Selector: '<S94>/Selector'
     *  Selector: '<S94>/Selector1'
     */
    if (tmp[s94_iter - 1]) {
      rtb_Switch = ASW_OBD_B.DataTypeConversion3[s94_iter - 1];
    } else {
      rtb_Switch = 0U;
    }

    /* End of Switch: '<S94>/Switch' */

    /* Assignment: '<S94>/Assignment' incorporates:
     *  Selector: '<S94>/Selector1'
     */
    if (s94_iter == 1) {
      for (i = 0; i < 30; i++) {
        ASW_OBD_B.Assignment_czft[i] = 0U;
      }
    }

    ASW_OBD_B.Assignment_czft[s94_iter - 1] = rtb_Switch;

    /* End of Assignment: '<S94>/Assignment' */
  }

  /* End of Outputs for SubSystem: '<S10>/sss_FaltLvlConf' */
}

/* Output and update for iterator system: '<S98>/sss_FaltLvl2Conf' */
void ASW_OBD_sss_FaltLvl2Conf(void)
{
  sint32 i;
  dt_Standardize_s16p15b0 tmp[30];
  dt_Standardize_s16p15b0 rtb_Switch;
  dt_Standardize_s16p15b0 rtb_Switch1;
  uint8 Assignment_czft;
  uint8 s125_iter;

  /* Outputs for Iterator SubSystem: '<S98>/sss_FaltLvl2Conf' incorporates:
   *  ForIterator: '<S125>/For Iterator'
   */
  for (s125_iter = 1; s125_iter < 31; s125_iter++) {
    /* Selector: '<S125>/Selector1' */
    Assignment_czft = ASW_OBD_B.Assignment_czft[s125_iter - 1];

    /* Switch: '<S125>/Switch' incorporates:
     *  Constant: '<S125>/Constant2'
     *  Constant: '<S125>/Constant5'
     *  RelationalOperator: '<S125>/Relational Operator'
     *  Selector: '<S125>/Selector'
     *  Selector: '<S125>/Selector1'
     */
    if (Assignment_czft == 2) {
      /* SignalConversion generated from: '<S125>/Selector' incorporates:
       *  Constant: '<S103>/Constant2'
       *  Constant: '<S105>/Constant17'
       *  Constant: '<S106>/Constant17'
       *  Constant: '<S107>/Constant17'
       *  Constant: '<S108>/Constant17'
       *  Constant: '<S109>/Constant17'
       *  Constant: '<S110>/Constant17'
       *  Constant: '<S112>/Constant17'
       */
      tmp[0] = Gs16_nMaxRefMechSpd_C;
      tmp[1] = Gs16_nMaxRefMechSpd_C;
      tmp[2] = Gs16_nMaxRefMechSpd_C;
      tmp[3] = Gs16_nMaxRefMechSpd_C;
      tmp[4] = Gs16_nMaxRefMechSpd_C;
      tmp[5] = Gs16_nMaxRefMechSpd_C;
      tmp[6] = Gs16_nMaxRefMechSpd_C;
      tmp[7] = Gs16_nMaxRefMechSpd_C;
      tmp[8] = Gs16_nMaxRefMechSpd_C;
      tmp[9] = ASW_OBD_B.Switch3;
      tmp[10] = Gs16_nMaxRefMechSpd_C;
      tmp[11] = ASW_OBD_B.Switch1;
      tmp[12] = Gs16_nMaxRefMechSpd_C;
      tmp[13] = Gs16_nMaxRefMechSpd_C;
      tmp[14] = Gs16_nMaxRefMechSpd_C;
      tmp[15] = Gs16_nMaxRefMechSpd_C;
      tmp[16] = Gs16_nMaxRefMechSpd_C;
      tmp[17] = Gs16_nMaxRefMechSpd_C;
      tmp[18] = Gs16_nMaxRefMechSpd_C;
      tmp[19] = Gs16_nMaxRefMechSpd_C;
      tmp[20] = Gs16_nMaxRefMechSpd_C;
      tmp[21] = Gs16_nMaxRefMechSpd_C;
      tmp[22] = Gs16_nMaxRefMechSpd_C;
      tmp[23] = Gs16_nMaxRefMechSpd_C;
      tmp[24] = Gs16_nMaxRefMechSpd_C;
      tmp[25] = ASW_OBD_B.Switch3;
      tmp[26] = Gs16_nMaxRefMechSpd_C;
      tmp[27] = Gs16_nMaxRefMechSpd_C;
      tmp[28] = Gs16_nMaxRefMechSpd_C;
      tmp[29] = Gs16_nMaxRefMechSpd_C;
      rtb_Switch = tmp[s125_iter - 1];
    } else {
      rtb_Switch = Gs16_nMaxRefMechSpd_C;
    }

    /* End of Switch: '<S125>/Switch' */

    /* Assignment: '<S125>/Assignment' incorporates:
     *  Selector: '<S125>/Selector1'
     *  Switch: '<S125>/Switch'
     */
    if (s125_iter == 1) {
      for (i = 0; i < 30; i++) {
        ASW_OBD_B.Assignment[i] = 0;
      }
    }

    ASW_OBD_B.Assignment[s125_iter - 1] = rtb_Switch;

    /* End of Assignment: '<S125>/Assignment' */

    /* Switch: '<S125>/Switch1' incorporates:
     *  Constant: '<S125>/Constant3'
     *  Constant: '<S125>/Constant4'
     *  RelationalOperator: '<S125>/Relational Operator1'
     *  Selector: '<S125>/Selector1'
     *  Selector: '<S125>/Selector2'
     *  Selector: '<S125>/Selector3'
     */
    if (Assignment_czft == 2) {
      /* SignalConversion generated from: '<S125>/Selector2' incorporates:
       *  Constant: '<S104>/Constant1'
       *  Constant: '<S118>/Constant1'
       *  Constant: '<S119>/Constant'
       *  Constant: '<S119>/Constant1'
       *  Constant: '<S120>/Constant1'
       *  Constant: '<S121>/Constant1'
       *  Constant: '<S122>/Constant1'
       *  Constant: '<S123>/Constant1'
       */
      tmp[0] = Gs16_trqTqUpLim_C;
      tmp[1] = Gs16_trqTqUpLim_C;
      tmp[2] = Gs16_trqTqUpLim_C;
      tmp[3] = Gs16_trqTqUpLim_C;
      tmp[4] = Gs16_trqTqUpLim_C;
      tmp[5] = Gs16_trqTqUpLim_C;
      tmp[6] = Gs16_trqTqUpLim_C;
      tmp[7] = Gs16_trqTqUpLim_C;
      tmp[8] = Gs16_trqTqUpLim_C;
      tmp[9] = Gs16_trqTqUpLim_C;
      tmp[10] = Gs16_trqTqUpLim_C;
      tmp[11] = ASW_OBD_B.Divide1;
      tmp[12] = Gs16_trqTqUpLim_C;
      tmp[13] = Gs16_trqTqUpLim_C;
      tmp[14] = Gs16_trqTqUpLim_C;
      tmp[15] = Gs16_trqTqUpLim_C;
      tmp[16] = Gs16_trqTqUpLim_C;
      tmp[17] = Gs16_trqTqUpLim_C;
      tmp[18] = Gs16_trqTqUpLim_C;
      tmp[19] = Gs16_trqTqUpLim_C;
      tmp[20] = Gs16_trqTqUpLim_C;
      tmp[21] = Gs16_trqTqUpLim_C;
      tmp[22] = Gs16_trqTqUpLim_C;
      tmp[23] = Gs16_trqTqUpLim_C;
      tmp[24] = Gs16_trqTqUpLim_C;
      tmp[25] = Gs16_trqTqUpLim_C;
      tmp[26] = Gs16_trqTqUpLim_C;
      tmp[27] = Gs16_trqTqUpLim_C;
      tmp[28] = Gs16_trqTqUpLim_C;
      tmp[29] = Gs16_trqTqUpLim_C;
      rtb_Switch1 = tmp[s125_iter - 1];
    } else {
      rtb_Switch1 = Gs16_trqTqUpLim_C;
    }

    /* End of Switch: '<S125>/Switch1' */

    /* Assignment: '<S125>/Assignment1' incorporates:
     *  Selector: '<S125>/Selector1'
     *  Switch: '<S125>/Switch1'
     */
    if (s125_iter == 1) {
      for (i = 0; i < 30; i++) {
        ASW_OBD_B.Assignment1[i] = 0;
      }
    }

    ASW_OBD_B.Assignment1[s125_iter - 1] = rtb_Switch1;

    /* End of Assignment: '<S125>/Assignment1' */
  }

  /* End of Outputs for SubSystem: '<S98>/sss_FaltLvl2Conf' */
}

/*
 * System initialize for atomic system:
 *    '<S148>/lib_HysDeb_14'
 *    '<S193>/lib_HysDeb_2'
 */
void ASW_OBD_lib_HysDeb_14_Init(boolean rtp_lb_parInitOutp,
  DW_lib_HysDeb_14_ASW_OBD *localDW)
{
  boolean rtb_lb_genOutp_lpaf;

  /* InitializeConditions for UnitDelay: '<S150>/Unit Delay2' */
  localDW->bitsForTID1.UnitDelay2_DSTATE = rtp_lb_parInitOutp;

  /* SystemInitialize for Chart: '<S150>/sfc_Debounce1' */
  ASW_OBD_sfc_Debounce_Init(&rtb_lb_genOutp_lpaf, &localDW->sf_sfc_Debounce1);

  /* SystemInitialize for Chart: '<S150>/sfc_Debounce' */
  ASW_OBD_sfc_Debounce_Init(&rtb_lb_genOutp_lpaf, &localDW->sf_sfc_Debounce);
}

/*
 * Output and update for atomic system:
 *    '<S148>/lib_HysDeb_14'
 *    '<S193>/lib_HysDeb_2'
 */
void ASW_OBD_lib_HysDeb_14(dt_Standardize_s16p15b0 rtu_lb_genInp,
  dt_Standardize_s16p15b0 rtu_lb_genUpLim, dt_Standardize_s16p15b0
  rtu_lb_genLowLim, uint16 rtu_lb_cntSetConf, uint16 rtu_lb_cntRsetConf, boolean
  rtu_lb_bolSet, boolean rtu_lb_bolRset, boolean *rty_lb_bolDebOutp, boolean
  *rty_lb_bolHiOccOutp, boolean *rty_lb_bolLoOccOutp, DW_lib_HysDeb_14_ASW_OBD
  *localDW)
{
  boolean rtb_lb_genOutp_e5ea;
  boolean rtb_lb_genOutp_o3zp;

  /* RelationalOperator: '<S150>/Relational Operator' */
  *rty_lb_bolLoOccOutp = (rtu_lb_genInp < rtu_lb_genLowLim);

  /* Chart: '<S150>/sfc_Debounce1' */
  ASW_OBD_sfc_Debounce(*rty_lb_bolLoOccOutp, rtu_lb_cntRsetConf,
                       &rtb_lb_genOutp_o3zp, &localDW->sf_sfc_Debounce1);

  /* RelationalOperator: '<S150>/Relational Operator1' */
  *rty_lb_bolHiOccOutp = (rtu_lb_genInp > rtu_lb_genUpLim);

  /* Chart: '<S150>/sfc_Debounce' */
  ASW_OBD_sfc_Debounce(*rty_lb_bolHiOccOutp, rtu_lb_cntSetConf,
                       &rtb_lb_genOutp_e5ea, &localDW->sf_sfc_Debounce);

  /* Switch: '<S150>/Switch1' incorporates:
   *  Switch: '<S150>/Switch'
   *  UnitDelay: '<S150>/Unit Delay2'
   */
  if (rtb_lb_genOutp_e5ea) {
    *rty_lb_bolDebOutp = rtu_lb_bolSet;
  } else if (rtb_lb_genOutp_o3zp) {
    /* Switch: '<S150>/Switch' */
    *rty_lb_bolDebOutp = rtu_lb_bolRset;
  } else {
    *rty_lb_bolDebOutp = localDW->bitsForTID1.UnitDelay2_DSTATE;
  }

  /* End of Switch: '<S150>/Switch1' */

  /* Update for UnitDelay: '<S150>/Unit Delay2' */
  localDW->bitsForTID1.UnitDelay2_DSTATE = *rty_lb_bolDebOutp;
}

/*
 * System initialize for atomic system:
 *    '<S165>/lib_HysDeb_12'
 *    '<S172>/lib_HysDeb_13'
 *    '<S207>/lib_HysDeb_8'
 *    '<S207>/lib_HysDeb_9'
 *    '<S217>/lib_HysDeb_10'
 *    '<S217>/lib_HysDeb_11'
 */
void ASW_OBD_lib_HysDeb_12_Init(boolean rtp_lb_parInitOutp,
  DW_lib_HysDeb_12_ASW_OBD *localDW)
{
  boolean rtb_lb_genOutp_cmne;

  /* InitializeConditions for UnitDelay: '<S167>/Unit Delay2' */
  localDW->bitsForTID1.UnitDelay2_DSTATE = rtp_lb_parInitOutp;

  /* SystemInitialize for Chart: '<S167>/sfc_Debounce1' */
  ASW_OBD_sfc_Debounce_Init(&rtb_lb_genOutp_cmne, &localDW->sf_sfc_Debounce1);

  /* SystemInitialize for Chart: '<S167>/sfc_Debounce' */
  ASW_OBD_sfc_Debounce_Init(&rtb_lb_genOutp_cmne, &localDW->sf_sfc_Debounce);
}

/*
 * Output and update for atomic system:
 *    '<S165>/lib_HysDeb_12'
 *    '<S172>/lib_HysDeb_13'
 *    '<S207>/lib_HysDeb_8'
 *    '<S207>/lib_HysDeb_9'
 *    '<S217>/lib_HysDeb_10'
 *    '<S217>/lib_HysDeb_11'
 */
void ASW_OBD_lib_HysDeb_12(dt_Temp_u8p0bn40 rtu_lb_genInp, dt_Temp_u8p0bn40
  rtu_lb_genUpLim, dt_Temp_u8p0bn40 rtu_lb_genLowLim, uint16 rtu_lb_cntSetConf,
  uint16 rtu_lb_cntRsetConf, boolean rtu_lb_bolSet, boolean rtu_lb_bolRset,
  boolean *rty_lb_bolDebOutp, boolean *rty_lb_bolHiOccOutp, boolean
  *rty_lb_bolLoOccOutp, DW_lib_HysDeb_12_ASW_OBD *localDW)
{
  boolean rtb_lb_genOutp_ftg2;
  boolean rtb_lb_genOutp_pzt3;

  /* RelationalOperator: '<S167>/Relational Operator' */
  *rty_lb_bolLoOccOutp = (rtu_lb_genInp < rtu_lb_genLowLim);

  /* Chart: '<S167>/sfc_Debounce1' */
  ASW_OBD_sfc_Debounce(*rty_lb_bolLoOccOutp, rtu_lb_cntRsetConf,
                       &rtb_lb_genOutp_ftg2, &localDW->sf_sfc_Debounce1);

  /* RelationalOperator: '<S167>/Relational Operator1' */
  *rty_lb_bolHiOccOutp = (rtu_lb_genInp > rtu_lb_genUpLim);

  /* Chart: '<S167>/sfc_Debounce' */
  ASW_OBD_sfc_Debounce(*rty_lb_bolHiOccOutp, rtu_lb_cntSetConf,
                       &rtb_lb_genOutp_pzt3, &localDW->sf_sfc_Debounce);

  /* Switch: '<S167>/Switch1' incorporates:
   *  Switch: '<S167>/Switch'
   *  UnitDelay: '<S167>/Unit Delay2'
   */
  if (rtb_lb_genOutp_pzt3) {
    *rty_lb_bolDebOutp = rtu_lb_bolSet;
  } else if (rtb_lb_genOutp_ftg2) {
    /* Switch: '<S167>/Switch' */
    *rty_lb_bolDebOutp = rtu_lb_bolRset;
  } else {
    *rty_lb_bolDebOutp = localDW->bitsForTID1.UnitDelay2_DSTATE;
  }

  /* End of Switch: '<S167>/Switch1' */

  /* Update for UnitDelay: '<S167>/Unit Delay2' */
  localDW->bitsForTID1.UnitDelay2_DSTATE = *rty_lb_bolDebOutp;
}

/*
 * System initialize for atomic system:
 *    '<S216>/lib_FaltDefd_14'
 *    '<S216>/lib_FaltDefd_15'
 */
void ASW_OBD_lib_FaltDefd_14_Init(boolean *rty_stFaltDef_Tmpr, boolean
  *rty_stFaltDef_Perm, uint8 *rty_FaltCycAccCnt, DW_lib_FaltDefd_14_ASW_OBD
  *localDW)
{
  /* SystemInitialize for Chart: '<S218>/sfc_FaultDefiniteness' */
  ASW__sfc_FaultDefiniteness_Init(rty_stFaltDef_Tmpr, rty_stFaltDef_Perm,
    rty_FaltCycAccCnt, &localDW->sf_sfc_FaultDefiniteness);
}

/*
 * Output and update for atomic system:
 *    '<S216>/lib_FaltDefd_14'
 *    '<S216>/lib_FaltDefd_15'
 */
void ASW_OBD_lib_FaltDefd_14(boolean rtu_stFaltDeb, boolean rtu_bolFaltEnFlg,
  uint8 rtu_stFaltCycDiaCnt, boolean rtu_bolFaltRecEnFlag, boolean
  *rty_stFaltDef_Tmpr, boolean *rty_stFaltDef_Perm, uint8 *rty_FaltCycAccCnt,
  uint16 rtp_lb_FaltWaitRecvCnt, DW_lib_FaltDefd_14_ASW_OBD *localDW)
{
  /* Chart: '<S218>/sfc_FaultDefiniteness' */
  ASW_OBD_sfc_FaultDefiniteness(rtu_stFaltDeb, rtu_bolFaltEnFlg,
    rtu_stFaltCycDiaCnt, rtu_bolFaltRecEnFlag, rty_stFaltDef_Tmpr,
    rty_stFaltDef_Perm, rty_FaltCycAccCnt, rtp_lb_FaltWaitRecvCnt,
    &localDW->sf_sfc_FaultDefiniteness);
}

/* Output and update for iterator system: '<S265>/sss_FaltEnFlgConf' */
void ASW_OBD_sss_FaltEnFlgConf(void)
{
  sint32 i;
  uint8 s267_iter;
  boolean tmp[30];

  /* Outputs for Iterator SubSystem: '<S265>/sss_FaltEnFlgConf' incorporates:
   *  ForIterator: '<S267>/For Iterator'
   */
  /* SignalConversion generated from: '<S267>/Selector1' incorporates:
   *  Constant: '<S268>/Constant1'
   *  Constant: '<S275>/bolSplVltgLoLvl4EnFlag_C'
   */
  tmp[0] = ASW_OBD_B.bitsForTID1.LogicalOperator3;
  tmp[1] = ASW_OBD_B.bitsForTID1.LogicalOperator1;
  tmp[2] = ASW_OBD_B.bitsForTID1.LogicalOperator5;
  tmp[3] = ASW_OBD_B.bitsForTID1.LogicalOperator6;
  tmp[4] = ASW_OBD_B.bitsForTID1.LogicalOperator1;
  tmp[5] = ASW_OBD_B.bitsForTID1.LogicalOperator8;
  tmp[6] = ASW_OBD_B.bitsForTID1.LogicalOperator3_k1jc;
  tmp[7] = ASW_OBD_B.bitsForTID1.LogicalOperator9;
  tmp[8] = ASW_OBD_B.bitsForTID1.LogicalOperator5_opu4;
  tmp[9] = ASW_OBD_B.bitsForTID1.LogicalOperator11;
  tmp[10] = ASW_OBD_B.bitsForTID1.LogicalOperator3_nufb;
  tmp[11] = ASW_OBD_B.bitsForTID1.LogicalOperator3_nufb;
  tmp[12] = ASW_OBD_B.bitsForTID1.LogicalOperator5_hofo;
  tmp[13] = ASW_OBD_B.bitsForTID1.LogicalOperator8_a4kw;
  tmp[14] = ASW_OBD_B.bitsForTID1.LogicalOperator3_mlkr;
  tmp[15] = ASW_OBD_B.bitsForTID1.LogicalOperator4;
  tmp[16] = true;
  tmp[17] = true;
  tmp[18] = true;
  tmp[19] = true;
  tmp[20] = ASW_OBD_B.bitsForTID1.LogicalOperator1;
  tmp[21] = ASW_OBD_B.bitsForTID1.LogicalOperator1;
  tmp[22] = ASW_OBD_B.bitsForTID1.LogicalOperator1;
  tmp[23] = ASW_OBD_B.bitsForTID1.LogicalOperator1;
  tmp[24] = ASW_OBD_B.bitsForTID1.LogicalOperator1;
  tmp[25] = ASW_OBD_B.bitsForTID1.LogicalOperator15;
  tmp[26] = ASW_OBD_B.bitsForTID1.LogicalOperator1;
  tmp[27] = false;
  tmp[28] = false;
  tmp[29] = false;
  for (s267_iter = 1; s267_iter < 31; s267_iter++) {
    /* Assignment: '<S267>/Assignment' incorporates:
     *  Logic: '<S267>/Logical Operator'
     *  Selector: '<S267>/Selector'
     *  Selector: '<S267>/Selector1'
     */
    if (s267_iter == 1) {
      for (i = 0; i < 30; i++) {
        ASW_OBD_B.Assignment_al4c[i] = false;
      }
    }

    ASW_OBD_B.Assignment_al4c[s267_iter - 1] =
      ((ASW_OBD_B.DataTypeConversion2[s267_iter - 1]) && (tmp[s267_iter - 1]));

    /* End of Assignment: '<S267>/Assignment' */
  }

  /* End of Outputs for SubSystem: '<S265>/sss_FaltEnFlgConf' */
}

/* Output and update for atomic system: '<Root>/OBD_SlwTask' */
void OBD_SlwTask(void)
{
  sint32 i;
  dt_Standardize_s16p15b0 Assignment;
  dt_Standardize_s16p15b0 rtb_Saturation;
  dt_Standardize_s16p15b0 rtb_Saturation1_fxo0;
  dt_Standardize_s16p15b0 rtb_Saturation1_h5iq;
  dt_Standardize_s16p15b0 rtb_Saturation1_kizi;
  dt_Standardize_s16p15b0 rtb_Saturation1_kx2o;
  dt_Standardize_s16p15b0 rtb_Saturation2;
  dt_Standardize_s16p15b0 rtb_Saturation2_nleq;
  dt_Standardize_s16p15b0 rtb_Saturation3;
  sint16 minV;
  sint16 minV_0;
  sint16 rtb_Subtract;
  uint16 Gu16_stCtlDFPMSt_C_0;
  uint8 rtb_DataTypeConversion[30];
  uint8 maxV;
  uint8 rtb_Selector1_eamb;
  uint8 rtb_Selector1_eapz;
  uint8 u1;
  boolean rtb_DataTypeConversion1[30];
  boolean rtb_Switch[30];
  boolean LogicalOperator3_tmp;
  boolean LogicalOperator8_tmp;
  boolean LogicalOperator8_tmp_tmp;
  boolean rtb_Equal;
  boolean rtb_Equal_h0y4;
  boolean rtb_Equal_mfgh;
  boolean rtb_LogicalOperator1_cf41;
  boolean rtb_LogicalOperator_cle3_tmp;
  boolean rtb_LogicalOperator_dizb;
  boolean rtb_LogicalOperator_gvnr;
  boolean rtb_LogicalOperator_inut;
  boolean rtb_LogicalOperator_mm50;
  boolean rtb_RelationalOperator1_b5ab;
  boolean rtb_RelationalOperator1_d4kk;
  boolean rtb_RelationalOperator1_eghk;
  boolean rtb_RelationalOperator1_f2bj;
  boolean rtb_RelationalOperator1_gxoo;
  boolean rtb_RelationalOperator1_ilhj;
  boolean rtb_RelationalOperator1_j44h;
  boolean rtb_RelationalOperator1_jjew;
  boolean rtb_RelationalOperator1_k55m;
  boolean rtb_RelationalOperator1_mwql;
  boolean rtb_RelationalOperator1_nmvf;
  boolean rtb_RelationalOperator1_orgb;
  boolean rtb_RelationalOperator1_pnyf;
  boolean rtb_RelationalOperator_anpi;
  boolean rtb_RelationalOperator_aykv;
  boolean rtb_RelationalOperator_bw5n;
  boolean rtb_RelationalOperator_c0gy;
  boolean rtb_RelationalOperator_dbzj;
  boolean rtb_RelationalOperator_fhti;
  boolean rtb_RelationalOperator_gi5a;
  boolean rtb_RelationalOperator_gpnx;
  boolean rtb_RelationalOperator_hrn4;
  boolean rtb_RelationalOperator_hs1s;
  boolean rtb_RelationalOperator_hxz3;
  boolean rtb_RelationalOperator_k1q4;
  boolean rtb_RelationalOperator_lryt;
  boolean rtb_RelationalOperator_pz5c;
  boolean rtb_Selector1_ikyn;
  boolean rtb_Selector2_a3oz;
  boolean rtb_Selector2_aagr;
  boolean rtb_Selector2_ap01;
  boolean rtb_Selector2_bp14;
  boolean rtb_Selector2_bslu;
  boolean rtb_Selector2_cplt;
  boolean rtb_Selector2_etdq;
  boolean rtb_Selector2_f1p3;
  boolean rtb_Selector2_ffcc;
  boolean rtb_Selector2_ghqr;
  boolean rtb_Selector2_h2wg;
  boolean rtb_Selector2_hatf;
  boolean rtb_Selector2_hdzo;
  boolean rtb_Selector2_jj5j;
  boolean rtb_Selector2_kfbd;
  boolean rtb_Selector2_kmbg;
  boolean rtb_Selector2_lujs;
  boolean rtb_Selector2_mspe;
  boolean rtb_Selector2_oaom;
  boolean rtb_Selector2_p3oh;
  boolean rtb_Selector4_eljz;
  boolean rtb_Selector6;
  boolean rtb_Selector7_idtg;
  boolean rtb_Switch1;
  boolean rtb_Switch1_avks;
  boolean rtb_Switch1_bsfg;
  boolean rtb_Switch1_dd5h;
  boolean rtb_Switch1_lb2j;
  boolean rtb_Switch1_pryn;
  boolean rtb_Switch_lbqb;
  boolean rtb_bol_flgPhCurrSensFaltOcc;
  boolean rtb_lb_genOutp_brm0;
  boolean rtb_lb_genOutp_c1kx;
  boolean rtb_stFaltDef_Tmpr_grfu;

  /* DataTypeConversion: '<S9>/Data Type Conversion2' incorporates:
   *  Constant: '<S9>/Constant4'
   *  DataTypeConversion: '<S86>/Extract Desired Bits'
   */
  for (i = 0; i < 30; i++) {
    ASW_OBD_B.DataTypeConversion2[i] = ((((uint8)(((uint32)Gu16_stCtlDFPMSt_C[(i)])
      >> 3)) & 1U) != 0U);
  }

  /* End of DataTypeConversion: '<S9>/Data Type Conversion2' */

  /* UnitDelay: '<S1>/Unit Delay' */
  rtb_stFaltDef_Tmpr_grfu = ASW_OBD_DW.UnitDelay_DSTATE.bol_flgPhCurrSensFaltFlg;

  /* Logic: '<S271>/Logical Operator1' incorporates:
   *  Logic: '<S271>/Logical Operator'
   *  UnitDelay: '<S1>/Unit Delay'
   *  UnitDelay generated from: '<S1>/Unit Delay1'
   */
  ASW_OBD_B.bitsForTID1.LogicalOperator1 =
    ((((((((!ASW_OBD_DW.UnitDelay_DSTATE.bol_flgCtlBrdVltgLoLvl1Flg) &&
           (!ASW_OBD_DW.UnitDelay_DSTATE.bol_flgCtlBrdVltgHiLvl1Flg)) &&
          (!ASW_OBD_DW.UnitDelay_DSTATE.bol_flgGDVltgLoLvl1Flg)) &&
         (!ASW_OBD_DW.UnitDelay_DSTATE.bol_flgGDVltgHiLvl1Flg)) &&
        (!ASW_OBD_DW.bitsForTID1.UnitDelay1_17_DSTATE)) &&
       (!ASW_OBD_DW.bitsForTID1.UnitDelay1_18_DSTATE)) &&
      (!ASW_OBD_DW.bitsForTID1.UnitDelay1_19_DSTATE)) &&
     (!ASW_OBD_DW.bitsForTID1.UnitDelay1_20_DSTATE));

  /* UnitDelay generated from: '<S1>/Unit Delay1' */
  rtb_bol_flgPhCurrSensFaltOcc = ASW_OBD_DW.bitsForTID1.UnitDelay1_23_DSTATE;

  /* Logic: '<S269>/Logical Operator' incorporates:
   *  Logic: '<S270>/Logical Operator'
   *  Logic: '<S270>/Logical Operator2'
   *  Logic: '<S270>/Logical Operator6'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  LogicalOperator3_tmp = !rtb_stFaltDef_Tmpr_grfu;

  /* Logic: '<S269>/Logical Operator3' incorporates:
   *  Logic: '<S269>/Logical Operator'
   *  Logic: '<S269>/Logical Operator1'
   *  Logic: '<S270>/Logical Operator'
   *  Logic: '<S270>/Logical Operator2'
   *  Logic: '<S270>/Logical Operator3'
   *  Logic: '<S270>/Logical Operator5'
   *  Logic: '<S270>/Logical Operator6'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  LogicalOperator3_tmp = (((ASW_OBD_B.bitsForTID1.LogicalOperator1) &&
    LogicalOperator3_tmp) && (!rtb_bol_flgPhCurrSensFaltOcc));
  ASW_OBD_B.bitsForTID1.LogicalOperator3 = LogicalOperator3_tmp;

  /* Logic: '<S275>/Logical Operator5' incorporates:
   *  Inport: '<Root>/busOBD_SlwTaskIn'
   *  Logic: '<S275>/Logical Operator1'
   *  Logic: '<S275>/Logical Operator2'
   *  RelationalOperator: '<S283>/Compare'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  ASW_OBD_B.bitsForTID1.LogicalOperator5 =
    (((ASW_OBD_B.bitsForTID1.LogicalOperator1) &&
      (busOBD_SlwTaskIn.s16_nComRefMechSpd != 0)) &&
     (!ASW_OBD_DW.UnitDelay_DSTATE.bol_flgSplyVltgLoLvl2Flg));

  /* Logic: '<S275>/Logical Operator6' incorporates:
   *  Inport: '<Root>/busOBD_SlwTaskIn'
   *  Logic: '<S275>/Logical Operator3'
   *  Logic: '<S275>/Logical Operator4'
   *  RelationalOperator: '<S284>/Compare'
   */
  ASW_OBD_B.bitsForTID1.LogicalOperator6 = ((busOBD_SlwTaskIn.s16_nComRefMechSpd
    != 0) && (ASW_OBD_B.bitsForTID1.LogicalOperator1));

  /* Logic: '<S274>/Logical Operator1' incorporates:
   *  Logic: '<S273>/Logical Operator1'
   *  Logic: '<S274>/Logical Operator4'
   */
  rtb_LogicalOperator_cle3_tmp = !ASW_OBD_B.bitsForTID1.LogicalOperator1;
  LogicalOperator8_tmp_tmp = !rtb_LogicalOperator_cle3_tmp;

  /* Logic: '<S274>/Logical Operator6' incorporates:
   *  Logic: '<S274>/Logical Operator'
   *  Logic: '<S274>/Logical Operator1'
   *  Logic: '<S274>/Logical Operator3'
   *  UnitDelay: '<S1>/Unit Delay'
   *  UnitDelay generated from: '<S1>/Unit Delay1'
   */
  LogicalOperator8_tmp = ((LogicalOperator8_tmp_tmp &&
    (!ASW_OBD_DW.UnitDelay_DSTATE.bol_flgPwrTubPCBTempSensFaltFlg)) &&
    (!ASW_OBD_DW.bitsForTID1.UnitDelay1_24_DSTATE));

  /* Logic: '<S274>/Logical Operator8' incorporates:
   *  Logic: '<S274>/Logical Operator6'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  ASW_OBD_B.bitsForTID1.LogicalOperator8 =
    ((!ASW_OBD_DW.UnitDelay_DSTATE.bol_flgPwrTubPCBTempHiLvl2Flg) &&
     LogicalOperator8_tmp);

  /* Logic: '<S274>/Logical Operator3' */
  ASW_OBD_B.bitsForTID1.LogicalOperator3_k1jc = LogicalOperator8_tmp;

  /* Logic: '<S274>/Logical Operator7' incorporates:
   *  Logic: '<S274>/Logical Operator2'
   *  Logic: '<S274>/Logical Operator5'
   *  UnitDelay: '<S1>/Unit Delay'
   *  UnitDelay generated from: '<S1>/Unit Delay1'
   */
  LogicalOperator8_tmp = ((LogicalOperator8_tmp_tmp &&
    (!ASW_OBD_DW.UnitDelay_DSTATE.bol_flgMotoTempSensFaltFlg)) &&
    (!ASW_OBD_DW.bitsForTID1.UnitDelay1_25_DSTATE));

  /* Logic: '<S274>/Logical Operator9' incorporates:
   *  Logic: '<S274>/Logical Operator7'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  ASW_OBD_B.bitsForTID1.LogicalOperator9 =
    ((!ASW_OBD_DW.UnitDelay_DSTATE.bol_flgMotoTempHiLvl2Flg) &&
     LogicalOperator8_tmp);

  /* Logic: '<S274>/Logical Operator5' */
  ASW_OBD_B.bitsForTID1.LogicalOperator5_opu4 = LogicalOperator8_tmp;

  /* Outputs for Atomic SubSystem: '<S270>/lib_HysDeb_16' */
  /* Inport: '<Root>/busOBD_SlwTaskIn' incorporates:
   *  Constant: '<S270>/Constant1'
   *  Constant: '<S270>/Constant16'
   *  Constant: '<S270>/Constant17'
   *  Constant: '<S270>/Constant18'
   *  Constant: '<S270>/Constant19'
   *  Constant: '<S270>/Constant2'
   *  Constant: '<S270>/Constant3'
   *  Constant: '<S270>/Constant4'
   *  Constant: '<S270>/Constant5'
   *  Constant: '<S270>/Constant6'
   *  Constant: '<S270>/Constant7'
   *  Constant: '<S270>/Constant8'
   */
  ASW_OBD_lib_HysDeb_1(busOBD_SlwTaskIn.u16_uCtlBrdVltg,
                       Gu16_uComDiaDisblHiLvlConfTrs_C,
                       Gu16_uComDiaDisblHiLvlRcvyTrs_C,
                       Gu16_ctComDiaDisblHiLvlConfCnt_C,
                       Gu16_ctComDiaDisblHiLvlRcvyCnt_C, true, false,
                       &rtb_Switch1, &rtb_RelationalOperator1_j44h,
                       &rtb_RelationalOperator_pz5c, &ASW_OBD_DW.lib_HysDeb_16);

  /* End of Outputs for SubSystem: '<S270>/lib_HysDeb_16' */

  /* Outputs for Atomic SubSystem: '<S270>/lib_HysDeb_17' */
  ASW_OBD_lib_HysDeb_1(busOBD_SlwTaskIn.u16_uCtlBrdVltg,
                       Gu16_uComDiaDisblLoLvlRcvyTrs_C,
                       Gu16_uComDiaDisblLoLvlConfTrs_C,
                       Gu16_ctComDiaDisblLoLvlRcvyCnt_C,
                       Gu16_ctComDiaDisblLoLvlConfCnt_C, false, true,
                       &rtb_Switch1_lb2j, &rtb_RelationalOperator1_jjew,
                       &rtb_RelationalOperator_gpnx, &ASW_OBD_DW.lib_HysDeb_17);

  /* End of Outputs for SubSystem: '<S270>/lib_HysDeb_17' */

  /* Chart: '<S270>/sfc_ComDiaInitEn' */
  /* Gateway: OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_Else/sfc_ComDiaInitEn */
  /* During: OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_Else/sfc_ComDiaInitEn */
  if (ASW_OBD_DW.is_active_c4_ASW_OBD == 0U) {
    /* Entry: OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_Else/sfc_ComDiaInitEn */
    ASW_OBD_DW.is_active_c4_ASW_OBD = 1U;

    /* Entry Internal: OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_Else/sfc_ComDiaInitEn */
    /* Transition: '<S278>:2' */
    ASW_OBD_DW.is_c4_ASW_OBD = IN_INITDISBL;

    /* Entry 'INITDISBL': '<S278>:3' */
    ASW_OBD_B.bitsForTID1.bol_flgComDiaInitDisbl = true;
    ASW_OBD_DW.u8_ctInitDisblCnt = 0U;
  } else if (ASW_OBD_DW.is_c4_ASW_OBD == IN_INITDISBL) {
    /* During 'INITDISBL': '<S278>:3' */
    if (ASW_OBD_DW.u8_ctInitDisblCnt >= Gu8_ctInitDisblCnt_C) {
      /* Transition: '<S278>:28' */
      /* Exit 'INITDISBL': '<S278>:3' */
      ASW_OBD_DW.u8_ctInitDisblCnt = 0U;
      ASW_OBD_DW.is_c4_ASW_OBD = IN_INITEN;

      /* Entry 'INITEN': '<S278>:4' */
    } else {
      ASW_OBD_DW.u8_ctInitDisblCnt++;
    }
  } else {
    /* During 'INITEN': '<S278>:4' */
    ASW_OBD_B.bitsForTID1.bol_flgComDiaInitDisbl = false;
  }

  /* End of Chart: '<S270>/sfc_ComDiaInitEn' */

  /* Logic: '<S270>/Logical Operator11' incorporates:
   *  Inport: '<Root>/busOBD_SlwTaskIn'
   *  Logic: '<S270>/Logical Operator10'
   *  Logic: '<S270>/Logical Operator12'
   *  Logic: '<S270>/Logical Operator9'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  ASW_OBD_B.bitsForTID1.LogicalOperator11 =
    (((((ASW_OBD_B.bitsForTID1.LogicalOperator1) &&
        (!ASW_OBD_DW.UnitDelay_DSTATE.bol_flgBusOffFaltFlg)) &&
       (!busOBD_SlwTaskIn.bol_flgWBSSt)) && ((!rtb_Switch1) &&
       (!rtb_Switch1_lb2j))) && (!ASW_OBD_B.bitsForTID1.bol_flgComDiaInitDisbl));

  /* Logic: '<S270>/Logical Operator3' */
  ASW_OBD_B.bitsForTID1.LogicalOperator3_nufb = LogicalOperator3_tmp;

  /* Logic: '<S270>/Logical Operator5' */
  ASW_OBD_B.bitsForTID1.LogicalOperator5_hofo = LogicalOperator3_tmp;

  /* Logic: '<S270>/Logical Operator8' incorporates:
   *  Logic: '<S270>/Logical Operator6'
   *  UnitDelay: '<S1>/Unit Delay'
   *  UnitDelay generated from: '<S1>/Unit Delay1'
   */
  ASW_OBD_B.bitsForTID1.LogicalOperator8_a4kw = ((LogicalOperator3_tmp &&
    (!ASW_OBD_DW.UnitDelay_DSTATE.bol_flgSplyVltgHiLvl1Flg)) &&
    (!ASW_OBD_DW.bitsForTID1.UnitDelay1_5_DSTATE));

  /* Logic: '<S273>/Logical Operator' incorporates:
   *  UnitDelay: '<S1>/Unit Delay'
   */
  rtb_LogicalOperator_dizb = ((rtb_LogicalOperator_cle3_tmp ||
    rtb_stFaltDef_Tmpr_grfu) || rtb_bol_flgPhCurrSensFaltOcc);

  /* Logic: '<S273>/Logical Operator3' incorporates:
   *  Logic: '<S273>/Logical Operator2'
   */
  LogicalOperator3_tmp = !rtb_LogicalOperator_dizb;
  ASW_OBD_B.bitsForTID1.LogicalOperator3_mlkr = LogicalOperator3_tmp;

  /* Logic: '<S273>/Logical Operator4' incorporates:
   *  Logic: '<S273>/Logical Operator2'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  ASW_OBD_B.bitsForTID1.LogicalOperator4 = ((LogicalOperator3_tmp &&
    (!ASW_OBD_DW.UnitDelay_DSTATE.bol_flgMotoStallPermFlg)) &&
    (!ASW_OBD_DW.UnitDelay_DSTATE.bol_flgMotoStallTmpFlg));

  /* Logic: '<S270>/Logical Operator15' incorporates:
   *  Logic: '<S270>/Logical Operator13'
   *  Logic: '<S270>/Logical Operator14'
   */
  ASW_OBD_B.bitsForTID1.LogicalOperator15 =
    ((ASW_OBD_B.bitsForTID1.LogicalOperator1) &&
     (!ASW_OBD_B.bitsForTID1.bol_flgComDiaInitDisbl));

  /* Outputs for Iterator SubSystem: '<S265>/sss_FaltEnFlgConf' */
  ASW_OBD_sss_FaltEnFlgConf();

  /* End of Outputs for SubSystem: '<S265>/sss_FaltEnFlgConf' */

  /* Logic: '<S265>/Logical Operator' incorporates:
   *  Constant: '<S265>/Constant1'
   *  Constant: '<S266>/Constant'
   *  Inport: '<Root>/busOBD_SlwTaskIn'
   *  RelationalOperator: '<S266>/Compare'
   */
  rtb_LogicalOperator_gvnr = (((Gbol_flgFaltManEnFlg_C) &&
    (busOBD_SlwTaskIn.enm_stSysSt != SYSINIT)) &&
    (busOBD_SlwTaskIn.bol_flgFaltEnFlgUDS85));
  for (i = 0; i < 30; i++) {
    /* Switch: '<S265>/Switch' */
    if (rtb_LogicalOperator_gvnr) {
      rtb_Switch[i] = ASW_OBD_B.Assignment_al4c[i];
    } else {
      rtb_Switch[i] = false;
    }

    /* End of Switch: '<S265>/Switch' */

    /* DataTypeConversion: '<S9>/Data Type Conversion' incorporates:
     *  Constant: '<S9>/Constant4'
     *  DataTypeConversion: '<S84>/Extract Desired Bits'
     */
    Gu16_stCtlDFPMSt_C_0 = Gu16_stCtlDFPMSt_C[(i)];
    rtb_DataTypeConversion[i] = (uint8)(((uint8)(((uint32)Gu16_stCtlDFPMSt_C_0) >>
      4)) & 15);

    /* DataTypeConversion: '<S9>/Data Type Conversion1' incorporates:
     *  Constant: '<S9>/Constant4'
     *  DataTypeConversion: '<S85>/Extract Desired Bits'
     */
    rtb_DataTypeConversion1[i] = ((((uint8)Gu16_stCtlDFPMSt_C_0) & 1U) != 0U);

    /* DataTypeConversion: '<S9>/Data Type Conversion3' incorporates:
     *  Constant: '<S9>/Constant4'
     *  DataTypeConversion: '<S87>/Extract Desired Bits'
     */
    ASW_OBD_B.DataTypeConversion3[i] = (uint8)(((uint8)(((uint32)
      Gu16_stCtlDFPMSt_C_0) >> 1)) & 3);
  }

  /* RelationalOperator: '<S92>/Equal' incorporates:
   *  Constant: '<S9>/Constant3'
   *  UnitDelay: '<S92>/Unit Delay'
   */
  rtb_Equal = (Gu16_ctFaltDiaSlwSdlCnt_C == ASW_OBD_DW.UnitDelay_DSTATE_aj4e);

  /* Outputs for Enabled SubSystem: '<S1>/rss_BattPwrHiLvl1Dia' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  if (rtb_Equal) {
    /* Saturate: '<S2>/Saturation2' incorporates:
     *  Inport: '<Root>/busOBD_SlwTaskIn'
     */
    if (busOBD_SlwTaskIn.s16_pwrSplyElecPwr > 16384) {
      rtb_Saturation2_nleq = 16384;
    } else if (busOBD_SlwTaskIn.s16_pwrSplyElecPwr < -16384) {
      rtb_Saturation2_nleq = -16384;
    } else {
      rtb_Saturation2_nleq = busOBD_SlwTaskIn.s16_pwrSplyElecPwr;
    }

    /* End of Saturate: '<S2>/Saturation2' */

    /* Selector: '<S2>/Selector2' incorporates:
     *  Constant: '<S2>/Constant4'
     */
    rtb_Selector2_ghqr = rtb_Switch[BATT_PWR_HI_LVL1];

    /* Outputs for Enabled SubSystem: '<S34>/ens_JudgDeb' incorporates:
     *  EnablePort: '<S35>/Enable'
     */
    if (rtb_Selector2_ghqr) {
      /* Abs: '<S38>/Abs' incorporates:
       *  Saturate: '<S2>/Saturation2'
       */
      if (rtb_Saturation2_nleq < 0) {
        Gu16_stCtlDFPMSt_C_0 = (uint16)(-rtb_Saturation2_nleq);
      } else {
        Gu16_stCtlDFPMSt_C_0 = (uint16)rtb_Saturation2_nleq;
      }

      /* Outputs for Atomic SubSystem: '<S35>/lib_Deb_11' */
      /* RelationalOperator: '<S38>/Relational Operator1' incorporates:
       *  Abs: '<S38>/Abs'
       *  Constant: '<S35>/Constant2'
       *  Constant: '<S35>/Constant3'
       *  Constant: '<S38>/Constant2'
       */
      ASW_OBD_lib_Deb_11((Gu16_stCtlDFPMSt_C_0 > Gu16_pwrBattPwrHiLvl1ConfTrs_C),
                         Gu16_ctBattPwrHiLvl1ConfCnt_C,
                         Gu16_ctBattPwrHiLvl1RcvyCnt_C,
                         &ASW_OBD_B.lb_genOutp_hlnt, &ASW_OBD_DW.lib_Deb_11);

      /* End of Outputs for SubSystem: '<S35>/lib_Deb_11' */
    }

    /* End of Outputs for SubSystem: '<S34>/ens_JudgDeb' */

    /* Outputs for Atomic SubSystem: '<S34>/lib_FaltDefd_21' */
    /* Selector: '<S2>/Selector1' incorporates:
     *  Constant: '<S2>/Constant4'
     *  Selector: '<S2>/Selector2'
     *  Selector: '<S2>/Selector7'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.lb_genOutp_hlnt, rtb_Selector2_ghqr,
      rtb_DataTypeConversion[BATT_PWR_HI_LVL1],
      rtb_DataTypeConversion1[BATT_PWR_HI_LVL1], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_iopf, &ASW_OBD_B.FaltCycAccCnt_if4y,
      Gu16_ctBattPwrHiLvl1ConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_21);

    /* End of Outputs for SubSystem: '<S34>/lib_FaltDefd_21' */
  }

  /* End of Outputs for SubSystem: '<S1>/rss_BattPwrHiLvl1Dia' */

  /* RelationalOperator: '<S91>/Equal' incorporates:
   *  Constant: '<S9>/Constant2'
   *  UnitDelay: '<S91>/Unit Delay'
   */
  rtb_Equal_h0y4 = (Gu16_ctFaltDiaFstSdlCnt_C ==
                    ASW_OBD_DW.UnitDelay_DSTATE_e34g);

  /* Outputs for Enabled SubSystem: '<S1>/rss_ChipFaltDia' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_CRASHFaltDia' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_BusOffFaltDia' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  if (rtb_Equal_h0y4) {
    /* Selector: '<S3>/Selector2' incorporates:
     *  Constant: '<S3>/Constant4'
     */
    rtb_Selector2_p3oh = rtb_Switch[BUSOFF_FALT];

    /* Outputs for Enabled SubSystem: '<S41>/ens_HysDeb' incorporates:
     *  EnablePort: '<S42>/Enable'
     */
    if (rtb_Selector2_p3oh) {
      /* Outputs for Atomic SubSystem: '<S42>/lib_Deb_4' */
      /* SignalConversion generated from: '<S42>/bol_flgBusOffFaltRaw' incorporates:
       *  Constant: '<S42>/Constant2'
       *  Constant: '<S42>/Constant3'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       */
      ASW_OBD_lib_Deb_11(busOBD_SlwTaskIn.bol_flgBusOffFaltRaw,
                         Gu16_ctBusOffFaltConfCnt_C, Gu16_ctBusOffFaltRcvyCnt_C,
                         &ASW_OBD_B.lb_genOutp_euom, &ASW_OBD_DW.lib_Deb_4);

      /* End of Outputs for SubSystem: '<S42>/lib_Deb_4' */
    }

    /* End of Outputs for SubSystem: '<S41>/ens_HysDeb' */

    /* Outputs for Atomic SubSystem: '<S41>/lib_FaltDefd_12' */
    /* Selector: '<S3>/Selector1' incorporates:
     *  Constant: '<S3>/Constant4'
     *  Selector: '<S3>/Selector2'
     *  Selector: '<S3>/Selector7'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.lb_genOutp_euom, rtb_Selector2_p3oh,
      rtb_DataTypeConversion[BUSOFF_FALT], rtb_DataTypeConversion1[BUSOFF_FALT],
      &rtb_stFaltDef_Tmpr_grfu, &ASW_OBD_B.stFaltDef_Perm_nx2u,
      &ASW_OBD_B.FaltCycAccCnt_ozl3, Gu16_ctBusOffFaltConfCnt_C,
      &ASW_OBD_DW.lib_FaltDefd_12);

    /* End of Outputs for SubSystem: '<S41>/lib_FaltDefd_12' */

    /* Selector: '<S4>/Selector2' incorporates:
     *  Constant: '<S48>/Constant2'
     *  Constant: '<S48>/Constant3'
     *  Constant: '<S4>/Constant4'
     *  Inport: '<Root>/busOBD_SlwTaskIn'
     *  Selector: '<S5>/Selector2'
     *  SignalConversion generated from: '<S48>/bol_flgCrashFalt'
     */
    LogicalOperator3_tmp = rtb_Switch[CRASH_FALT];

    /* Outputs for Enabled SubSystem: '<S47>/ens_HysDeb' incorporates:
     *  EnablePort: '<S48>/Enable'
     */
    if (LogicalOperator3_tmp) {
      /* Outputs for Atomic SubSystem: '<S48>/lib_Deb_17' */
      ASW_OBD_lib_Deb_11(busOBD_SlwTaskIn.bol_flgCrashFalt,
                         Gu16_ctCrashFaltConfCnt_C, Gu16_ctCrashFaltRcvyCnt_C,
                         &ASW_OBD_B.lb_genOutp_gufh, &ASW_OBD_DW.lib_Deb_17);

      /* End of Outputs for SubSystem: '<S48>/lib_Deb_17' */
    }

    /* End of Outputs for SubSystem: '<S47>/ens_HysDeb' */

    /* Selector: '<S4>/Selector1' incorporates:
     *  Constant: '<S4>/Constant4'
     *  Selector: '<S4>/Selector2'
     *  Selector: '<S5>/Selector1'
     */
    maxV = rtb_DataTypeConversion[CRASH_FALT];

    /* Selector: '<S4>/Selector7' incorporates:
     *  Constant: '<S4>/Constant4'
     *  Selector: '<S4>/Selector2'
     *  Selector: '<S5>/Selector7'
     */
    rtb_LogicalOperator_cle3_tmp = rtb_DataTypeConversion1[CRASH_FALT];

    /* Outputs for Atomic SubSystem: '<S47>/lib_FaltDefd_9' */
    /* Selector: '<S4>/Selector2' incorporates:
     *  Selector: '<S4>/Selector1'
     *  Selector: '<S4>/Selector7'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.lb_genOutp_gufh, LogicalOperator3_tmp,
      maxV, rtb_LogicalOperator_cle3_tmp, &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_bpps, &ASW_OBD_B.FaltCycAccCnt_okl0,
      Gu16_ctCrashFaltConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_9);

    /* End of Outputs for SubSystem: '<S47>/lib_FaltDefd_9' */

    /* Outputs for Enabled SubSystem: '<S53>/ens_HysDeb' incorporates:
     *  EnablePort: '<S54>/Enable'
     */
    if (LogicalOperator3_tmp) {
      /* Outputs for Atomic SubSystem: '<S54>/lib_Deb_1' */
      /* SignalConversion generated from: '<S54>/bol_flgCrashFalt' incorporates:
       *  Constant: '<S54>/Constant2'
       *  Constant: '<S54>/Constant3'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       */
      ASW_OBD_lib_Deb_11(busOBD_SlwTaskIn.bol_flgChipFalt,
                         Gu16_ctChipFaltConfCnt_C, Gu16_ctChipFaltRcvyCnt_C,
                         &ASW_OBD_B.lb_genOutp_j4ya, &ASW_OBD_DW.lib_Deb_1);

      /* End of Outputs for SubSystem: '<S54>/lib_Deb_1' */
    }

    /* End of Outputs for SubSystem: '<S53>/ens_HysDeb' */

    /* Outputs for Atomic SubSystem: '<S53>/lib_FaltDefd_9' */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.lb_genOutp_j4ya, LogicalOperator3_tmp,
      maxV, rtb_LogicalOperator_cle3_tmp, &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_mvmh, &ASW_OBD_B.FaltCycAccCnt_be2m,
      Gu16_ctChipFaltConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_9_drq2);

    /* End of Outputs for SubSystem: '<S53>/lib_FaltDefd_9' */
  }

  /* End of Outputs for SubSystem: '<S1>/rss_BusOffFaltDia' */
  /* End of Outputs for SubSystem: '<S1>/rss_CRASHFaltDia' */
  /* End of Outputs for SubSystem: '<S1>/rss_ChipFaltDia' */

  /* RelationalOperator: '<S90>/Equal' incorporates:
   *  Constant: '<S9>/Constant7'
   *  UnitDelay: '<S90>/Unit Delay'
   */
  rtb_Equal_mfgh = (Gu16_ctFaltDiaComSdlCnt_C ==
                    ASW_OBD_DW.UnitDelay_DSTATE_c13u);

  /* Outputs for Enabled SubSystem: '<S1>/rss_ComFaltDia' incorporates:
   *  EnablePort: '<S6>/Enable'
   */
  if (rtb_Equal_mfgh) {
    /* Selector: '<S6>/Selector1' incorporates:
     *  Constant: '<S6>/Constant1'
     */
    rtb_Selector1_eamb = rtb_DataTypeConversion[COM_FALT];

    /* Selector: '<S6>/Selector2' incorporates:
     *  Constant: '<S6>/Constant1'
     *  Selector: '<S6>/Selector1'
     */
    rtb_Selector2_mspe = rtb_Switch[COM_FALT];

    /* Outputs for Enabled SubSystem: '<S60>/ens_HysDeb_GEELY' incorporates:
     *  EnablePort: '<S62>/Enable'
     */
    if (rtb_Selector2_mspe) {
      /* Outputs for Atomic SubSystem: '<S62>/lib_Deb_6' */
      /* RelationalOperator: '<S62>/Relational Operator' incorporates:
       *  Constant: '<S62>/Constant1'
       *  Constant: '<S62>/Constant4'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       *  UnitDelay: '<S62>/Unit Delay'
       */
      rtb_stFaltDef_Tmpr_grfu = ASW_OBD_lib_Deb_5
        ((ASW_OBD_DW.UnitDelay_DSTATE_gvyr == busOBD_SlwTaskIn.u8_ctComRolCnt),
         Gu16_ctComRolCntFaltConfCnt_C, Gu16_ctComRolCntFaltRcvyCnt_C,
         &ASW_OBD_DW.lib_Deb_6);

      /* End of Outputs for SubSystem: '<S62>/lib_Deb_6' */

      /* Outputs for Atomic SubSystem: '<S62>/lib_Deb_5' */
      /* Inport: '<Root>/busOBD_SlwTaskIn' incorporates:
       *  Constant: '<S62>/Constant2'
       *  Constant: '<S62>/Constant3'
       *  Constant: '<S62>/Constant6'
       *  Constant: '<S62>/Constant7'
       */
      rtb_lb_genOutp_brm0 = ASW_OBD_lib_Deb_5
        (busOBD_SlwTaskIn.bol_flgComLosFaltRaw, Gu16_ctComLosFaltConfCnt_C,
         Gu16_ctComLosFaltRcvyCnt_C, &ASW_OBD_DW.lib_Deb_5);

      /* End of Outputs for SubSystem: '<S62>/lib_Deb_5' */

      /* Outputs for Atomic SubSystem: '<S62>/lib_Deb_7' */
      rtb_lb_genOutp_c1kx = ASW_OBD_lib_Deb_5(busOBD_SlwTaskIn.bol_flgCRCFaltRaw,
        Gu16_ctCRCFaltConfCnt_C, Gu16_ctCRCFaltRcvyCnt_C, &ASW_OBD_DW.lib_Deb_7);

      /* End of Outputs for SubSystem: '<S62>/lib_Deb_7' */

      /* Logic: '<S62>/Logical Operator' */
      ASW_OBD_B.bitsForTID1.LogicalOperator_hyuk = ((rtb_lb_genOutp_brm0 ||
        rtb_stFaltDef_Tmpr_grfu) || rtb_lb_genOutp_c1kx);

      /* Update for UnitDelay: '<S62>/Unit Delay' incorporates:
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       */
      ASW_OBD_DW.UnitDelay_DSTATE_gvyr = busOBD_SlwTaskIn.u8_ctComRolCnt;
    }

    /* End of Outputs for SubSystem: '<S60>/ens_HysDeb_GEELY' */

    /* Outputs for Atomic SubSystem: '<S59>/lib_FaltDefd_18' */
    /* Chart: '<S61>/sfc_FaultDefiniteness' incorporates:
     *  Constant: '<S6>/Constant1'
     *  Selector: '<S6>/Selector1'
     *  Selector: '<S6>/Selector7'
     */
    /* Gateway: FaultDefiniteness_0/sfc_FaultDefiniteness */
    /* During: FaultDefiniteness_0/sfc_FaultDefiniteness */
    if (ASW_OBD_DW.is_active_c2_sxlzwpHV5Mpl8T4NH6 == 0U) {
      /* Entry: FaultDefiniteness_0/sfc_FaultDefiniteness */
      ASW_OBD_DW.is_active_c2_sxlzwpHV5Mpl8T4NH6 = 1U;

      /* Entry Internal: FaultDefiniteness_0/sfc_FaultDefiniteness */
      /* Transition: '<S69>:222' */
      ASW_OBD_DW.is_c2_sxlzwpHV5Mpl8T4NH6unbF_li = IN_DisableDiagnosis_ixht;

      /* Entry 'DisableDiagnosis': '<S69>:221' */
      /* Clear Bit0 Bit1 */
      ASW_OBD_B.bitsForTID1.stFaltDef_Perm_l1lp = false;
      ASW_OBD_B.FaltCycAccCnt_nakw = 0U;
    } else if (ASW_OBD_DW.is_c2_sxlzwpHV5Mpl8T4NH6unbF_li ==
               IN_DisableDiagnosis_ixht) {
      ASW_OBD_B.bitsForTID1.stFaltDef_Perm_l1lp = false;

      /* During 'DisableDiagnosis': '<S69>:221' */
      /* Fault Need Enable */
      if (rtb_Selector2_mspe) {
        /* Transition: '<S69>:223' */
        ASW_OBD_DW.is_c2_sxlzwpHV5Mpl8T4NH6unbF_li = IN_EnableDiagnosis_mjfq;

        /* Entry Internal 'EnableDiagnosis': '<S69>:220' */
        /* Transition: '<S69>:149' */
        ASW_OBD_DW.is_EnableDiagnosis = IN_Normal_iv3m;

        /* Entry 'Normal': '<S69>:225' */
        /* Clear Bit0 Bit1 */
        ASW_OBD_B.FaltCycAccCnt_nakw = 0U;
      }
    } else {
      /* During 'EnableDiagnosis': '<S69>:220' */
      switch (ASW_OBD_DW.is_EnableDiagnosis) {
       case IN_Confirmed_fog5:
        ASW_OBD_B.bitsForTID1.stFaltDef_Perm_l1lp = true;

        /* During 'Confirmed': '<S69>:165' */
        /* Need Recovery */
        if ((rtb_DataTypeConversion1[COM_FALT]) &&
            (!ASW_OBD_B.bitsForTID1.LogicalOperator_hyuk)) {
          /* Transition: '<S69>:219' */
          /* Transition: '<S69>:230' */
          ASW_OBD_DW.is_EnableDiagnosis = IN_Normal_iv3m;

          /* Entry 'Normal': '<S69>:225' */
          /* Clear Bit0 Bit1 */
          ASW_OBD_B.bitsForTID1.stFaltDef_Perm_l1lp = false;
          ASW_OBD_B.FaltCycAccCnt_nakw = 0U;
        }
        break;

       case IN_Confirming_p012:
        ASW_OBD_B.bitsForTID1.stFaltDef_Perm_l1lp = true;

        /* During 'Confirming': '<S69>:93' */
        /* There is no Fault */
        if (!ASW_OBD_B.bitsForTID1.LogicalOperator_hyuk) {
          /* Transition: '<S69>:173' */
          ASW_OBD_DW.is_EnableDiagnosis = IN_Wait_ax3z;

          /* Entry 'Wait': '<S69>:98' */
          /* Set Bit0 Clear Bit1 */
          ASW_OBD_B.bitsForTID1.stFaltDef_Perm_l1lp = false;
          ASW_OBD_DW.FaltWaitRecvCnt = 0U;
        }
        break;

       case IN_Normal_iv3m:
        ASW_OBD_B.bitsForTID1.stFaltDef_Perm_l1lp = false;

        /* During 'Normal': '<S69>:225' */
        /* There is Fault */
        if (ASW_OBD_B.bitsForTID1.LogicalOperator_hyuk) {
          /* Transition: '<S69>:182' */
          /* Direct Confirm */
          if (rtb_Selector1_eamb == 0) {
            /* Transition: '<S69>:185' */
            /* Transition: '<S69>:188' */
            ASW_OBD_DW.is_EnableDiagnosis = IN_Confirmed_fog5;

            /* Entry 'Confirmed': '<S69>:165' */
            /* Set Bit1 Clear Bit0 */
            ASW_OBD_B.bitsForTID1.stFaltDef_Perm_l1lp = true;
            ASW_OBD_B.FaltCycAccCnt_nakw = 0U;
          } else {
            /* Transition: '<S69>:183' */
            ASW_OBD_DW.is_EnableDiagnosis = IN_Confirming_p012;

            /* Entry 'Confirming': '<S69>:93' */
            /* Set Bit0 Bit1 */
            ASW_OBD_B.bitsForTID1.stFaltDef_Perm_l1lp = true;
            i = ASW_OBD_B.FaltCycAccCnt_nakw + 1;
            if ((ASW_OBD_B.FaltCycAccCnt_nakw + 1) > 255) {
              i = 255;
            }

            ASW_OBD_B.FaltCycAccCnt_nakw = (uint8)i;
          }
        }
        break;

       default:
        ASW_OBD_B.bitsForTID1.stFaltDef_Perm_l1lp = false;

        /* During 'Wait': '<S69>:98' */
        /* There is Fault */
        if (ASW_OBD_B.bitsForTID1.LogicalOperator_hyuk) {
          /* Transition: '<S69>:166' */
          /* Fault is Confirmed */
          if (ASW_OBD_B.FaltCycAccCnt_nakw >= rtb_Selector1_eamb) {
            /* Transition: '<S69>:214' */
            /* Transition: '<S69>:232' */
            /* Exit 'Wait': '<S69>:98' */
            ASW_OBD_DW.FaltWaitRecvCnt = 0U;
            ASW_OBD_DW.is_EnableDiagnosis = IN_Confirmed_fog5;

            /* Entry 'Confirmed': '<S69>:165' */
            /* Set Bit1 Clear Bit0 */
            ASW_OBD_B.bitsForTID1.stFaltDef_Perm_l1lp = true;
            ASW_OBD_B.FaltCycAccCnt_nakw = 0U;
          } else {
            /* Transition: '<S69>:213' */
            /* Need Confirm */
            /* Exit 'Wait': '<S69>:98' */
            ASW_OBD_DW.FaltWaitRecvCnt = 0U;
            ASW_OBD_DW.is_EnableDiagnosis = IN_Confirming_p012;

            /* Entry 'Confirming': '<S69>:93' */
            /* Set Bit0 Bit1 */
            ASW_OBD_B.bitsForTID1.stFaltDef_Perm_l1lp = true;
            ASW_OBD_B.FaltCycAccCnt_nakw++;
          }

          /* Confirm to Recovery */
        } else if ((ASW_OBD_DW.FaltWaitRecvCnt > 0) && rtb_Selector2_mspe) {
          /* Transition: '<S69>:226' */
          /* Transition: '<S69>:234' */
          /* Exit 'Wait': '<S69>:98' */
          ASW_OBD_DW.FaltWaitRecvCnt = 0U;
          ASW_OBD_DW.is_EnableDiagnosis = IN_Normal_iv3m;

          /* Entry 'Normal': '<S69>:225' */
          /* Clear Bit0 Bit1 */
          ASW_OBD_B.FaltCycAccCnt_nakw = 0U;
        } else {
          i = ASW_OBD_DW.FaltWaitRecvCnt + 1;
          if ((ASW_OBD_DW.FaltWaitRecvCnt + 1) > 65535) {
            i = 65535;
          }

          ASW_OBD_DW.FaltWaitRecvCnt = (uint16)i;
        }
        break;
      }
    }

    /* End of Chart: '<S61>/sfc_FaultDefiniteness' */
    /* End of Outputs for SubSystem: '<S59>/lib_FaltDefd_18' */
  }

  /* End of Outputs for SubSystem: '<S1>/rss_ComFaltDia' */

  /* Outputs for Enabled SubSystem: '<S1>/rss_SplyVltgHiLvl1Dia' incorporates:
   *  EnablePort: '<S26>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_SplyVltgLoLvl2Dia' incorporates:
   *  EnablePort: '<S28>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_SplyVltgLoLvl1Dia' incorporates:
   *  EnablePort: '<S27>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_HWOvrCurrDia' incorporates:
   *  EnablePort: '<S14>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_PhCurrHiLvl1Dia' incorporates:
   *  EnablePort: '<S21>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_CtlBrdVltgLoLvl1Dia' incorporates:
   *  EnablePort: '<S8>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_CtlBrdVltgHiLvl1Dia' incorporates:
   *  EnablePort: '<S7>/Enable'
   */
  if (rtb_Equal_h0y4) {
    /* Selector: '<S7>/Selector2' incorporates:
     *  Constant: '<S7>/Constant8'
     */
    rtb_Selector2_h2wg = rtb_Switch[CTL_BRD_VLTG_HI_LVL1];

    /* Outputs for Enabled SubSystem: '<S70>/ens_Deb' incorporates:
     *  EnablePort: '<S71>/Enable'
     */
    if (rtb_Selector2_h2wg) {
      /* Saturate: '<S7>/Saturation1' incorporates:
       *  Constant: '<S71>/Constant16'
       *  Constant: '<S71>/Constant17'
       *  Constant: '<S71>/Constant18'
       *  Constant: '<S71>/Constant19'
       *  Constant: '<S71>/Constant2'
       *  Constant: '<S71>/Constant3'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       */
      if (busOBD_SlwTaskIn.u16_uCtlBrdVltg <= 32767) {
        Gu16_stCtlDFPMSt_C_0 = busOBD_SlwTaskIn.u16_uCtlBrdVltg;
      } else {
        Gu16_stCtlDFPMSt_C_0 = 32767U;
      }

      /* Outputs for Atomic SubSystem: '<S71>/lib_HysDeb_1' */
      ASW_OBD_lib_HysDeb_1(Gu16_stCtlDFPMSt_C_0, Gu16_uCtlBrdVltgHiLvl1ConfTrs_C,
                           Gu16_uCtlBrdVltgHiLvl1RcvyTrs_C,
                           Gu16_ctCtlBrdVltgHiLvl1ConfCnt_C,
                           Gu16_ctCtlBrdVltgHiLvl1RcvyCnt_C, true, false,
                           &ASW_OBD_B.Switch1_l3mi,
                           &ASW_OBD_B.RelationalOperator1_l2l1,
                           &rtb_RelationalOperator_fhti,
                           &ASW_OBD_DW.lib_HysDeb_1);

      /* End of Saturate: '<S7>/Saturation1' */
      /* End of Outputs for SubSystem: '<S71>/lib_HysDeb_1' */
    }

    /* End of Outputs for SubSystem: '<S70>/ens_Deb' */

    /* Outputs for Atomic SubSystem: '<S70>/lib_FaltDefd_1' */
    /* Selector: '<S7>/Selector9' incorporates:
     *  Constant: '<S7>/Constant8'
     *  Selector: '<S7>/Selector2'
     *  Selector: '<S7>/Selector21'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.Switch1_l3mi, rtb_Selector2_h2wg,
      rtb_DataTypeConversion[CTL_BRD_VLTG_HI_LVL1],
      rtb_DataTypeConversion1[CTL_BRD_VLTG_HI_LVL1], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_ofvs, &ASW_OBD_B.FaltCycAccCnt_da1w,
      Gu16_ctCtlBrdVltgHiLvl1ConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_1);

    /* End of Outputs for SubSystem: '<S70>/lib_FaltDefd_1' */

    /* Selector: '<S8>/Selector2' incorporates:
     *  Constant: '<S8>/Constant8'
     */
    rtb_Selector2_lujs = rtb_Switch[CTL_BRD_VLTG_LO_LVL1];

    /* Outputs for Enabled SubSystem: '<S77>/ens_Deb' incorporates:
     *  EnablePort: '<S78>/Enable'
     */
    if (rtb_Selector2_lujs) {
      /* Saturate: '<S8>/Saturation1' incorporates:
       *  Constant: '<S78>/Constant16'
       *  Constant: '<S78>/Constant17'
       *  Constant: '<S78>/Constant18'
       *  Constant: '<S78>/Constant19'
       *  Constant: '<S78>/Constant2'
       *  Constant: '<S78>/Constant3'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       */
      if (busOBD_SlwTaskIn.u16_uCtlBrdVltg <= 32767) {
        Gu16_stCtlDFPMSt_C_0 = busOBD_SlwTaskIn.u16_uCtlBrdVltg;
      } else {
        Gu16_stCtlDFPMSt_C_0 = 32767U;
      }

      /* Outputs for Atomic SubSystem: '<S78>/lib_HysDeb_0' */
      ASW_OBD_lib_HysDeb_1(Gu16_stCtlDFPMSt_C_0, Gu16_uCtlBrdVltgLoLvl1RcvyTrs_C,
                           Gu16_uCtlBrdVltgLoLvl1ConfTrs_C,
                           Gu16_ctCtlBrdVltgLoLvl1RcvyCnt_C,
                           Gu16_ctCtlBrdVltgLoLvl1ConfCnt_C, false, true,
                           &ASW_OBD_B.Switch1_aqbl,
                           &rtb_RelationalOperator1_pnyf,
                           &ASW_OBD_B.RelationalOperator,
                           &ASW_OBD_DW.lib_HysDeb_0);

      /* End of Saturate: '<S8>/Saturation1' */
      /* End of Outputs for SubSystem: '<S78>/lib_HysDeb_0' */
    }

    /* End of Outputs for SubSystem: '<S77>/ens_Deb' */

    /* Outputs for Atomic SubSystem: '<S77>/lib_FaltDefd_0' */
    /* Selector: '<S8>/Selector9' incorporates:
     *  Constant: '<S8>/Constant8'
     *  Selector: '<S8>/Selector2'
     *  Selector: '<S8>/Selector21'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.Switch1_aqbl, rtb_Selector2_lujs,
      rtb_DataTypeConversion[CTL_BRD_VLTG_LO_LVL1],
      rtb_DataTypeConversion1[CTL_BRD_VLTG_LO_LVL1], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_nbju, &ASW_OBD_B.FaltCycAccCnt_kbad,
      Gu16_ctCtlBrdVltgLoLvl1ConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_0);

    /* End of Outputs for SubSystem: '<S77>/lib_FaltDefd_0' */

    /* Selector: '<S21>/Selector2' incorporates:
     *  Constant: '<S21>/Constant4'
     */
    rtb_Selector2_oaom = rtb_Switch[PH_CURR_HI_LVL1];

    /* Outputs for Enabled SubSystem: '<S192>/ens_HysDeb' incorporates:
     *  EnablePort: '<S193>/Enable'
     */
    if (rtb_Selector2_oaom) {
      /* Saturate: '<S21>/Saturation1' incorporates:
       *  Constant: '<S193>/Constant1'
       *  Constant: '<S193>/Constant4'
       *  Constant: '<S193>/Constant5'
       *  Constant: '<S193>/Constant6'
       *  Constant: '<S193>/Constant7'
       *  Constant: '<S193>/Constant8'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       */
      if (busOBD_SlwTaskIn.s16_ampActPhCurrAmp > 14746) {
        minV = 14746;
      } else if (busOBD_SlwTaskIn.s16_ampActPhCurrAmp < 0) {
        minV = 0;
      } else {
        minV = busOBD_SlwTaskIn.s16_ampActPhCurrAmp;
      }

      /* Outputs for Atomic SubSystem: '<S193>/lib_HysDeb_2' */
      ASW_OBD_lib_HysDeb_14(minV, Gs16_iPhCurrHiLvl1ConfTrs_C,
                            Gs16_iPhCurrHiLvl1RcvyTrs_C,
                            Gu16_ctPhCurrHiLvl1ConfCnt_C,
                            Gu16_ctPhCurrHiLvl1RcvyCnt_C, true, false,
                            &ASW_OBD_B.Switch1_pxi3,
                            &rtb_RelationalOperator1_b5ab,
                            &rtb_RelationalOperator_hrn4,
                            &ASW_OBD_DW.lib_HysDeb_2);

      /* End of Saturate: '<S21>/Saturation1' */
      /* End of Outputs for SubSystem: '<S193>/lib_HysDeb_2' */
    }

    /* End of Outputs for SubSystem: '<S192>/ens_HysDeb' */

    /* Outputs for Atomic SubSystem: '<S192>/lib_FaltDefd_2' */
    /* Selector: '<S21>/Selector' incorporates:
     *  Constant: '<S21>/Constant4'
     *  Selector: '<S21>/Selector2'
     *  Selector: '<S21>/Selector9'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.Switch1_pxi3, rtb_Selector2_oaom,
      rtb_DataTypeConversion[PH_CURR_HI_LVL1],
      rtb_DataTypeConversion1[PH_CURR_HI_LVL1], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_lijp, &ASW_OBD_B.FaltCycAccCnt_psnz,
      Gu16_ctPhCurrHiLvl1ConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_2);

    /* End of Outputs for SubSystem: '<S192>/lib_FaltDefd_2' */

    /* Selector: '<S14>/Selector6' incorporates:
     *  Constant: '<S14>/Constant8'
     */
    rtb_Selector6 = rtb_Switch[HW_OVER_CURR];

    /* Outputs for Enabled SubSystem: '<S141>/ens_Deb_0' incorporates:
     *  EnablePort: '<S142>/Enable'
     */
    if (rtb_Selector6) {
      /* Outputs for Atomic SubSystem: '<S142>/lib_Deb_0' */
      /* SignalConversion generated from: '<S142>/bol_flgHWOvrCurrFalt' incorporates:
       *  Constant: '<S142>/Constant1'
       *  Constant: '<S142>/Constant4'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       */
      ASW_OBD_lib_Deb_11(busOBD_SlwTaskIn.bol_flgHWOvrCurrFalt,
                         Gu16_ctHWOvrCurrConfCnt_C, Gu16_ctHWOvrCurrRcvyCnt_C,
                         &ASW_OBD_B.lb_genOutp_neqw, &ASW_OBD_DW.lib_Deb_0);

      /* End of Outputs for SubSystem: '<S142>/lib_Deb_0' */
    }

    /* End of Outputs for SubSystem: '<S141>/ens_Deb_0' */

    /* Outputs for Atomic SubSystem: '<S141>/lib_FaltDefd_3' */
    /* Selector: '<S14>/Selector8' incorporates:
     *  Constant: '<S14>/Constant8'
     *  Selector: '<S14>/Selector12'
     *  Selector: '<S14>/Selector6'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.lb_genOutp_neqw, rtb_Selector6,
      rtb_DataTypeConversion[HW_OVER_CURR], rtb_DataTypeConversion1[HW_OVER_CURR],
      &rtb_stFaltDef_Tmpr_grfu, &ASW_OBD_B.stFaltDef_Perm_dzb0,
      &ASW_OBD_B.FaltCycAccCnt_gwiq, Gu16_ctHWOvrCurrConfCnt_C,
      &ASW_OBD_DW.lib_FaltDefd_3);

    /* End of Outputs for SubSystem: '<S141>/lib_FaltDefd_3' */

    /* Selector: '<S27>/Selector2' incorporates:
     *  Constant: '<S27>/Constant8'
     */
    rtb_Selector2_hatf = rtb_Switch[SPLY_VLTG_LO_LVL1];

    /* Outputs for Enabled SubSystem: '<S251>/ens_HysDeb' incorporates:
     *  EnablePort: '<S252>/Enable'
     */
    if (rtb_Selector2_hatf) {
      /* Saturate: '<S27>/Saturation1' incorporates:
       *  Constant: '<S252>/Constant16'
       *  Constant: '<S252>/Constant17'
       *  Constant: '<S252>/Constant18'
       *  Constant: '<S252>/Constant19'
       *  Constant: '<S252>/Constant2'
       *  Constant: '<S252>/Constant3'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       */
      if (busOBD_SlwTaskIn.u16_uSplyVltg <= 32767) {
        Gu16_stCtlDFPMSt_C_0 = busOBD_SlwTaskIn.u16_uSplyVltg;
      } else {
        Gu16_stCtlDFPMSt_C_0 = 32767U;
      }

      /* Outputs for Atomic SubSystem: '<S252>/lib_HysDeb_3' */
      ASW_OBD_lib_HysDeb_1(Gu16_stCtlDFPMSt_C_0, Gu16_uSplyVltgLoLvl1RcvyTrs_C,
                           Gu16_uSplyVltgLoLvl1ConfTrs_C,
                           Gu16_ctSplyVltgLoLvl1RcvyCnt_C,
                           Gu16_ctSplyVltgLoLvl1ConfCnt_C, false, true,
                           &ASW_OBD_B.Switch1_lspe,
                           &rtb_RelationalOperator1_mwql,
                           &rtb_RelationalOperator_aykv,
                           &ASW_OBD_DW.lib_HysDeb_3);

      /* End of Saturate: '<S27>/Saturation1' */
      /* End of Outputs for SubSystem: '<S252>/lib_HysDeb_3' */
    }

    /* End of Outputs for SubSystem: '<S251>/ens_HysDeb' */

    /* Outputs for Atomic SubSystem: '<S251>/lib_FaltDefd_4' */
    /* Selector: '<S27>/Selector9' incorporates:
     *  Constant: '<S27>/Constant8'
     *  Selector: '<S27>/Selector2'
     *  Selector: '<S27>/Selector21'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.Switch1_lspe, rtb_Selector2_hatf,
      rtb_DataTypeConversion[SPLY_VLTG_LO_LVL1],
      rtb_DataTypeConversion1[SPLY_VLTG_LO_LVL1], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_ktdp, &ASW_OBD_B.FaltCycAccCnt_akrv,
      Gu16_ctSplyVltgLoLvl1ConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_4);

    /* End of Outputs for SubSystem: '<S251>/lib_FaltDefd_4' */

    /* Selector: '<S28>/Selector4' incorporates:
     *  Constant: '<S28>/Constant15'
     */
    rtb_Selector4_eljz = rtb_Switch[SPLY_VLTG_LO_LVL2];

    /* Outputs for Enabled SubSystem: '<S258>/ens_HysDeb' incorporates:
     *  EnablePort: '<S259>/Enable'
     */
    if (rtb_Selector4_eljz) {
      /* Saturate: '<S28>/Saturation1' incorporates:
       *  Constant: '<S259>/Constant1'
       *  Constant: '<S259>/Constant4'
       *  Constant: '<S259>/Constant5'
       *  Constant: '<S259>/Constant6'
       *  Constant: '<S259>/Constant7'
       *  Constant: '<S259>/Constant8'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       */
      if (busOBD_SlwTaskIn.u16_uSplyVltg <= 32767) {
        Gu16_stCtlDFPMSt_C_0 = busOBD_SlwTaskIn.u16_uSplyVltg;
      } else {
        Gu16_stCtlDFPMSt_C_0 = 32767U;
      }

      /* Outputs for Atomic SubSystem: '<S259>/lib_HysDeb_4' */
      ASW_OBD_lib_HysDeb_1(Gu16_stCtlDFPMSt_C_0, Gu16_uSplyVltgLoLvl2RcvyTrs_C,
                           Gu16_uSplyVltgLoLvl2ConfTrs_C,
                           Gu16_ctSplyVltgLoLvl2RcvyCnt_C,
                           Gu16_ctSplyVltgLoLvl2ConfCnt_C, false, true,
                           &ASW_OBD_B.Switch1_le4p,
                           &rtb_RelationalOperator1_orgb,
                           &rtb_RelationalOperator_anpi,
                           &ASW_OBD_DW.lib_HysDeb_4);

      /* End of Saturate: '<S28>/Saturation1' */
      /* End of Outputs for SubSystem: '<S259>/lib_HysDeb_4' */
    }

    /* End of Outputs for SubSystem: '<S258>/ens_HysDeb' */

    /* Outputs for Atomic SubSystem: '<S258>/lib_FaltDefd_5' */
    /* Selector: '<S28>/Selector10' incorporates:
     *  Constant: '<S28>/Constant15'
     *  Selector: '<S28>/Selector15'
     *  Selector: '<S28>/Selector4'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.Switch1_le4p, rtb_Selector4_eljz,
      rtb_DataTypeConversion[SPLY_VLTG_LO_LVL2],
      rtb_DataTypeConversion1[SPLY_VLTG_LO_LVL2], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_efmb, &ASW_OBD_B.FaltCycAccCnt_e00n,
      Gu16_ctSplyVltgLoLvl2ConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_5);

    /* End of Outputs for SubSystem: '<S258>/lib_FaltDefd_5' */

    /* Selector: '<S26>/Selector1' incorporates:
     *  Constant: '<S26>/Constant1'
     */
    rtb_Selector1_ikyn = rtb_Switch[SPLY_VLTG_HI_LVL1];

    /* Outputs for Enabled SubSystem: '<S244>/ens_HysDeb' incorporates:
     *  EnablePort: '<S245>/Enable'
     */
    if (rtb_Selector1_ikyn) {
      /* Saturate: '<S26>/Saturation1' incorporates:
       *  Constant: '<S245>/Constant16'
       *  Constant: '<S245>/Constant17'
       *  Constant: '<S245>/Constant18'
       *  Constant: '<S245>/Constant19'
       *  Constant: '<S245>/Constant2'
       *  Constant: '<S245>/Constant3'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       */
      if (busOBD_SlwTaskIn.u16_uSplyVltg <= 32767) {
        Gu16_stCtlDFPMSt_C_0 = busOBD_SlwTaskIn.u16_uSplyVltg;
      } else {
        Gu16_stCtlDFPMSt_C_0 = 32767U;
      }

      /* Outputs for Atomic SubSystem: '<S245>/lib_HysDeb_5' */
      ASW_OBD_lib_HysDeb_1(Gu16_stCtlDFPMSt_C_0, Gu16_uSplyVltgHiLvl1ConfTrs_C,
                           Gu16_uSplyVltgHiLvl1RcvyTrs_C,
                           Gu16_ctSplyVltgHiLvl1ConfCnt_C,
                           Gu16_ctSplyVltgHiLvl1RcvyCnt_C, true, false,
                           &ASW_OBD_B.Switch1_j0vh,
                           &ASW_OBD_B.RelationalOperator1,
                           &rtb_RelationalOperator_hxz3,
                           &ASW_OBD_DW.lib_HysDeb_5);

      /* End of Saturate: '<S26>/Saturation1' */
      /* End of Outputs for SubSystem: '<S245>/lib_HysDeb_5' */
    }

    /* End of Outputs for SubSystem: '<S244>/ens_HysDeb' */

    /* Outputs for Atomic SubSystem: '<S244>/lib_FaltDefd_6' */
    /* Selector: '<S26>/Selector3' incorporates:
     *  Constant: '<S26>/Constant1'
     *  Selector: '<S26>/Selector1'
     *  Selector: '<S26>/Selector18'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.Switch1_j0vh, rtb_Selector1_ikyn,
      rtb_DataTypeConversion[SPLY_VLTG_HI_LVL1],
      rtb_DataTypeConversion1[SPLY_VLTG_HI_LVL1], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_f4wg, &ASW_OBD_B.FaltCycAccCnt_eksn,
      Gu16_ctSplyVltgHiLvl1ConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_6);

    /* End of Outputs for SubSystem: '<S244>/lib_FaltDefd_6' */
  }

  /* End of Outputs for SubSystem: '<S1>/rss_CtlBrdVltgHiLvl1Dia' */
  /* End of Outputs for SubSystem: '<S1>/rss_CtlBrdVltgLoLvl1Dia' */
  /* End of Outputs for SubSystem: '<S1>/rss_PhCurrHiLvl1Dia' */
  /* End of Outputs for SubSystem: '<S1>/rss_HWOvrCurrDia' */
  /* End of Outputs for SubSystem: '<S1>/rss_SplyVltgLoLvl1Dia' */
  /* End of Outputs for SubSystem: '<S1>/rss_SplyVltgLoLvl2Dia' */
  /* End of Outputs for SubSystem: '<S1>/rss_SplyVltgHiLvl1Dia' */

  /* Outputs for Enabled SubSystem: '<S1>/rss_MotoSpdLoLvl1Dia' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_MotoSpdHiLvl1Dia' incorporates:
   *  EnablePort: '<S15>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_NoLdDia' incorporates:
   *  EnablePort: '<S20>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S30>/rss_MotoStallDiaHybr' incorporates:
   *  EnablePort: '<S285>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_MotoTempHiLvl2Dia' incorporates:
   *  EnablePort: '<S18>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_MotoTempHiLvl1Dia' incorporates:
   *  EnablePort: '<S17>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_PwrTubPCBTempHiLvl2Dia' incorporates:
   *  EnablePort: '<S24>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_PwrTubPCBTempHiLvl1Dia' incorporates:
   *  EnablePort: '<S23>/Enable'
   */
  if (rtb_Equal) {
    /* Selector: '<S23>/Selector2' incorporates:
     *  Constant: '<S23>/Constant4'
     */
    rtb_Selector2_ffcc = rtb_Switch[PWR_TUB_PCB_TEMP_HI_LVL1];

    /* Outputs for Enabled SubSystem: '<S206>/ens_HysDeb' incorporates:
     *  EnablePort: '<S207>/Enable'
     */
    if (rtb_Selector2_ffcc) {
      /* Outputs for Atomic SubSystem: '<S207>/lib_HysDeb_9' */
      /* Inport: '<Root>/busOBD_SlwTaskIn' incorporates:
       *  Constant: '<S207>/Constant1'
       *  Constant: '<S207>/Constant16'
       *  Constant: '<S207>/Constant17'
       *  Constant: '<S207>/Constant18'
       *  Constant: '<S207>/Constant19'
       *  Constant: '<S207>/Constant2'
       *  Constant: '<S207>/Constant3'
       *  Constant: '<S207>/Constant4'
       *  Constant: '<S207>/Constant5'
       *  Constant: '<S207>/Constant6'
       *  Constant: '<S207>/Constant7'
       *  Constant: '<S207>/Constant8'
       */
      ASW_OBD_lib_HysDeb_12(busOBD_SlwTaskIn.u8_tPCBTempSubs,
                            Gu8_tPCBTempHiLvl1ConfTrs_C,
                            Gu8_tPCBTempHiLvl1RcvyTrs_C,
                            Gu16_ctPCBTempHiLvl1ConfCnt_C,
                            Gu16_ctPCBTempHiLvl1RcvyCnt_C, true, false,
                            &rtb_Switch1_pryn, &rtb_RelationalOperator1_gxoo,
                            &rtb_RelationalOperator_gi5a,
                            &ASW_OBD_DW.lib_HysDeb_9);
      /* End of Outputs for SubSystem: '<S207>/lib_HysDeb_9' */

      /* Outputs for Atomic SubSystem: '<S207>/lib_HysDeb_8' */
      ASW_OBD_lib_HysDeb_12(busOBD_SlwTaskIn.u8_tPwrTubTemp,
                            Gu8_tPwrTubTempHiLvl1ConfTrs_C,
                            Gu8_tPwrTubTempHiLvl1RcvyTrs_C,
                            Gu16_ctPwrTubTempHiLvl1ConfCnt_C,
                            Gu16_ctPwrTubTempHiLvl1RcvyCnt_C, true, false,
                            &rtb_Switch1_dd5h, &rtb_RelationalOperator1_f2bj,
                            &rtb_RelationalOperator_bw5n,
                            &ASW_OBD_DW.lib_HysDeb_8);

      /* End of Outputs for SubSystem: '<S207>/lib_HysDeb_8' */

      /* Logic: '<S207>/Logical Operator2' */
      ASW_OBD_B.bitsForTID1.LogicalOperator2_eork = (rtb_Switch1_dd5h ||
        rtb_Switch1_pryn);
    }

    /* End of Outputs for SubSystem: '<S206>/ens_HysDeb' */

    /* Outputs for Atomic SubSystem: '<S206>/lib_FaltDefd_13' */
    /* Selector: '<S23>/Selector1' incorporates:
     *  Constant: '<S23>/Constant4'
     *  Selector: '<S23>/Selector2'
     *  Selector: '<S23>/Selector7'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.bitsForTID1.LogicalOperator2_eork,
      rtb_Selector2_ffcc, rtb_DataTypeConversion[PWR_TUB_PCB_TEMP_HI_LVL1],
      rtb_DataTypeConversion1[PWR_TUB_PCB_TEMP_HI_LVL1],
      &rtb_stFaltDef_Tmpr_grfu, &ASW_OBD_B.stFaltDef_Perm_dthc,
      &ASW_OBD_B.FaltCycAccCnt_k5ca, Gu16_ctPwrTubTempHiLvl1ConfCnt_C,
      &ASW_OBD_DW.lib_FaltDefd_13);

    /* End of Outputs for SubSystem: '<S206>/lib_FaltDefd_13' */

    /* Selector: '<S24>/Selector1' incorporates:
     *  Constant: '<S24>/Constant1'
     */
    rtb_Selector1_eapz = rtb_DataTypeConversion[PWR_TUB_PCB_TEMP_HI_LVL2];

    /* Selector: '<S24>/Selector2' incorporates:
     *  Constant: '<S24>/Constant1'
     *  Selector: '<S24>/Selector1'
     */
    rtb_Selector2_a3oz = rtb_Switch[PWR_TUB_PCB_TEMP_HI_LVL2];

    /* Selector: '<S24>/Selector7' incorporates:
     *  Constant: '<S24>/Constant1'
     *  Selector: '<S24>/Selector1'
     */
    rtb_Selector7_idtg = rtb_DataTypeConversion1[PWR_TUB_PCB_TEMP_HI_LVL2];

    /* Outputs for Enabled SubSystem: '<S216>/ens_HysDeb' incorporates:
     *  EnablePort: '<S217>/Enable'
     */
    if (rtb_Selector2_a3oz) {
      /* Outputs for Atomic SubSystem: '<S217>/lib_HysDeb_10' */
      /* Inport: '<Root>/busOBD_SlwTaskIn' incorporates:
       *  Constant: '<S217>/Constant1'
       *  Constant: '<S217>/Constant16'
       *  Constant: '<S217>/Constant17'
       *  Constant: '<S217>/Constant18'
       *  Constant: '<S217>/Constant19'
       *  Constant: '<S217>/Constant2'
       *  Constant: '<S217>/Constant3'
       *  Constant: '<S217>/Constant4'
       *  Constant: '<S217>/Constant5'
       *  Constant: '<S217>/Constant6'
       *  Constant: '<S217>/Constant7'
       *  Constant: '<S217>/Constant8'
       */
      ASW_OBD_lib_HysDeb_12(busOBD_SlwTaskIn.u8_tPwrTubTemp,
                            Gu8_tPwrTubTempHiLvl2ConfTrs_C,
                            Gu8_tPwrTubTempHiLvl2RcvyTrs_C,
                            Gu16_ctPwrTubTempHiLvl2ConfCnt_C,
                            Gu16_ctPwrTubTempHiLvl2RcvyCnt_C, true, false,
                            &ASW_OBD_B.Switch1_mj3e,
                            &rtb_RelationalOperator1_nmvf,
                            &rtb_RelationalOperator_lryt,
                            &ASW_OBD_DW.lib_HysDeb_10);

      /* End of Outputs for SubSystem: '<S217>/lib_HysDeb_10' */

      /* Outputs for Atomic SubSystem: '<S217>/lib_HysDeb_11' */
      ASW_OBD_lib_HysDeb_12(busOBD_SlwTaskIn.u8_tPCBTempSubs,
                            Gu8_tPCBTempHiLvl2ConfTrs_C,
                            Gu8_tPCBTempHiLvl2RcvyTrs_C,
                            Gu16_ctPCBTempHiLvl2ConfCnt_C,
                            Gu16_ctPCBTempHiLvl2RcvyCnt_C, true, false,
                            &ASW_OBD_B.Switch1_h5dr,
                            &rtb_RelationalOperator1_ilhj,
                            &rtb_RelationalOperator_c0gy,
                            &ASW_OBD_DW.lib_HysDeb_11);

      /* End of Outputs for SubSystem: '<S217>/lib_HysDeb_11' */
    }

    /* End of Outputs for SubSystem: '<S216>/ens_HysDeb' */

    /* Outputs for Atomic SubSystem: '<S216>/lib_FaltDefd_14' */
    ASW_OBD_lib_FaltDefd_14(ASW_OBD_B.Switch1_mj3e, rtb_Selector2_a3oz,
      rtb_Selector1_eapz, rtb_Selector7_idtg, &rtb_lb_genOutp_brm0,
      &rtb_stFaltDef_Tmpr_grfu, &ASW_OBD_B.FaltCycAccCnt_lwpi,
      Gu16_ctPwrTubTempHiLvl2ConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_14);

    /* End of Outputs for SubSystem: '<S216>/lib_FaltDefd_14' */

    /* Outputs for Atomic SubSystem: '<S216>/lib_FaltDefd_15' */
    ASW_OBD_lib_FaltDefd_14(ASW_OBD_B.Switch1_h5dr, rtb_Selector2_a3oz,
      rtb_Selector1_eapz, rtb_Selector7_idtg, &rtb_lb_genOutp_brm0,
      &rtb_lb_genOutp_c1kx, &ASW_OBD_B.FaltCycAccCnt_mbzj,
      Gu16_ctPCBTempHiLvl2ConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_15);

    /* End of Outputs for SubSystem: '<S216>/lib_FaltDefd_15' */

    /* Logic: '<S216>/Logical Operator1' */
    ASW_OBD_B.bitsForTID1.LogicalOperator1_cq5m = (rtb_stFaltDef_Tmpr_grfu ||
      rtb_lb_genOutp_c1kx);

    /* Selector: '<S17>/Selector2' incorporates:
     *  Constant: '<S17>/Constant4'
     */
    rtb_Selector2_hdzo = rtb_Switch[MOTO_TEMP_HI_LVL1];

    /* Outputs for Enabled SubSystem: '<S164>/ens_HysDeb' incorporates:
     *  EnablePort: '<S165>/Enable'
     */
    if (rtb_Selector2_hdzo) {
      /* Outputs for Atomic SubSystem: '<S165>/lib_HysDeb_12' */
      /* Inport: '<Root>/busOBD_SlwTaskIn' incorporates:
       *  Constant: '<S165>/Constant16'
       *  Constant: '<S165>/Constant17'
       *  Constant: '<S165>/Constant18'
       *  Constant: '<S165>/Constant19'
       *  Constant: '<S165>/Constant2'
       *  Constant: '<S165>/Constant3'
       */
      ASW_OBD_lib_HysDeb_12(busOBD_SlwTaskIn.u8_tMotoTemp,
                            Gu8_tMotoTempHiLvl1ConfTrs_C,
                            Gu8_tMotoTempHiLvl1RcvyTrs_C,
                            Gu16_ctMotoTempHiLvl1ConfCnt_C,
                            Gu16_ctMotoTempHiLvl1RcvyCnt_C, true, false,
                            &ASW_OBD_B.Switch1_grgo,
                            &rtb_RelationalOperator1_eghk,
                            &rtb_RelationalOperator_dbzj,
                            &ASW_OBD_DW.lib_HysDeb_12);

      /* End of Outputs for SubSystem: '<S165>/lib_HysDeb_12' */
    }

    /* End of Outputs for SubSystem: '<S164>/ens_HysDeb' */

    /* Outputs for Atomic SubSystem: '<S164>/lib_FaltDefd_16' */
    /* Selector: '<S17>/Selector1' incorporates:
     *  Constant: '<S17>/Constant4'
     *  Selector: '<S17>/Selector2'
     *  Selector: '<S17>/Selector7'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.Switch1_grgo, rtb_Selector2_hdzo,
      rtb_DataTypeConversion[MOTO_TEMP_HI_LVL1],
      rtb_DataTypeConversion1[MOTO_TEMP_HI_LVL1], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_h1g3, &ASW_OBD_B.FaltCycAccCnt_fxmn,
      Gu16_ctMotoTempHiLvl1ConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_16);

    /* End of Outputs for SubSystem: '<S164>/lib_FaltDefd_16' */

    /* Selector: '<S18>/Selector2' incorporates:
     *  Constant: '<S18>/Constant4'
     */
    rtb_Selector2_ap01 = rtb_Switch[MOTO_TEMP_HI_LVL2];

    /* Outputs for Enabled SubSystem: '<S171>/ens_HysDeb' incorporates:
     *  EnablePort: '<S172>/Enable'
     */
    if (rtb_Selector2_ap01) {
      /* Outputs for Atomic SubSystem: '<S172>/lib_HysDeb_13' */
      /* Inport: '<Root>/busOBD_SlwTaskIn' incorporates:
       *  Constant: '<S172>/Constant16'
       *  Constant: '<S172>/Constant17'
       *  Constant: '<S172>/Constant18'
       *  Constant: '<S172>/Constant19'
       *  Constant: '<S172>/Constant2'
       *  Constant: '<S172>/Constant3'
       */
      ASW_OBD_lib_HysDeb_12(busOBD_SlwTaskIn.u8_tMotoTemp,
                            Gu8_tMotoTempHiLvl2ConfTrs_C,
                            Gu8_tMotoTempHiLvl2RcvyTrs_C,
                            Gu16_ctMotoTempHiLvl2ConfCnt_C,
                            Gu16_ctMotoTempHiLvl2RcvyCnt_C, true, false,
                            &ASW_OBD_B.Switch1_j1ol,
                            &rtb_RelationalOperator1_k55m,
                            &rtb_RelationalOperator_k1q4,
                            &ASW_OBD_DW.lib_HysDeb_13);

      /* End of Outputs for SubSystem: '<S172>/lib_HysDeb_13' */
    }

    /* End of Outputs for SubSystem: '<S171>/ens_HysDeb' */

    /* Outputs for Atomic SubSystem: '<S171>/lib_FaltDefd_17' */
    /* Selector: '<S18>/Selector1' incorporates:
     *  Constant: '<S18>/Constant4'
     *  Selector: '<S18>/Selector2'
     *  Selector: '<S18>/Selector7'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.Switch1_j1ol, rtb_Selector2_ap01,
      rtb_DataTypeConversion[MOTO_TEMP_HI_LVL2],
      rtb_DataTypeConversion1[MOTO_TEMP_HI_LVL2], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_b5ga, &ASW_OBD_B.FaltCycAccCnt_mn3a,
      Gu16_ctMotoTempHiLvl2ConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_17);

    /* End of Outputs for SubSystem: '<S171>/lib_FaltDefd_17' */

    /* Selector: '<S285>/Selector1' incorporates:
     *  Constant: '<S285>/Constant1'
     */
    ASW_OBD_B.Selector1 = rtb_DataTypeConversion[MOTO_STALL_PERM];

    /* Logic: '<S285>/Logical Operator' incorporates:
     *  Constant: '<S285>/Constant1'
     *  Constant: '<S285>/Constant2'
     *  Selector: '<S285>/Selector1'
     *  Selector: '<S285>/Selector2'
     *  Selector: '<S285>/Selector3'
     */
    rtb_LogicalOperator_inut = ((rtb_Switch[MOTO_STALL_PERM]) &&
      (rtb_Switch[MOTO_STALL_TMP]));

    /* Saturate: '<S285>/Saturation1' incorporates:
     *  Inport: '<Root>/busOBD_SlwTaskIn'
     */
    if (busOBD_SlwTaskIn.s16_nRmpRefElecSpd >= -32767) {
      rtb_Saturation1_fxo0 = busOBD_SlwTaskIn.s16_nRmpRefElecSpd;
    } else {
      rtb_Saturation1_fxo0 = -32767;
    }

    /* End of Saturate: '<S285>/Saturation1' */

    /* Saturate: '<S285>/Saturation2' incorporates:
     *  Inport: '<Root>/busOBD_SlwTaskIn'
     */
    if (busOBD_SlwTaskIn.s16_nActElecSpd >= -32767) {
      rtb_Saturation2 = busOBD_SlwTaskIn.s16_nActElecSpd;
    } else {
      rtb_Saturation2 = -32767;
    }

    /* End of Saturate: '<S285>/Saturation2' */

    /* Outputs for Enabled SubSystem: '<S286>/ens_JudgDeb' incorporates:
     *  EnablePort: '<S287>/Enable'
     */
    if (rtb_LogicalOperator_inut) {
      /* Switch: '<S290>/Switch' incorporates:
       *  Abs: '<S290>/Abs3'
       *  Constant: '<S290>/Constant2'
       *  Constant: '<S290>/Constant3'
       *  Constant: '<S292>/Constant'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       *  RelationalOperator: '<S290>/Relational Operator1'
       *  RelationalOperator: '<S290>/Relational Operator3'
       *  RelationalOperator: '<S292>/Compare'
       *  Saturate: '<S285>/Saturation4'
       */
      if (busOBD_SlwTaskIn.enm_modeAgEvalMode != SENSORLESS) {
        /* Abs: '<S290>/Abs3' incorporates:
         *  Saturate: '<S285>/Saturation2'
         */
        if (rtb_Saturation2 < 0) {
          minV = (sint16)(-rtb_Saturation2);
        } else {
          minV = rtb_Saturation2;
        }

        rtb_Switch_lbqb = (minV < Gs16_nMotoStallMinRefElecSpd_C);
      } else {
        if (busOBD_SlwTaskIn.u16_psiEstPermMagFlx > 10922) {
          /* Saturate: '<S285>/Saturation4' */
          Gu16_stCtlDFPMSt_C_0 = 10922U;
        } else if (busOBD_SlwTaskIn.u16_psiEstPermMagFlx < 55) {
          /* Saturate: '<S285>/Saturation4' */
          Gu16_stCtlDFPMSt_C_0 = 55U;
        } else {
          /* Saturate: '<S285>/Saturation4' */
          Gu16_stCtlDFPMSt_C_0 = busOBD_SlwTaskIn.u16_psiEstPermMagFlx;
        }

        rtb_Switch_lbqb = (Gu16_stCtlDFPMSt_C_0 < Gu16_psiEstMinPermMagFlx_C);
      }

      /* End of Switch: '<S290>/Switch' */

      /* Abs: '<S290>/Abs' incorporates:
       *  Saturate: '<S285>/Saturation1'
       */
      if (rtb_Saturation1_fxo0 < 0) {
        minV = (sint16)(-rtb_Saturation1_fxo0);
      } else {
        minV = rtb_Saturation1_fxo0;
      }

      /* Outputs for Atomic SubSystem: '<S287>/lib_Deb_9' */
      /* Logic: '<S290>/Logical Operator' incorporates:
       *  Abs: '<S290>/Abs'
       *  Constant: '<S287>/Constant2'
       *  Constant: '<S287>/Constant3'
       *  Constant: '<S290>/Constant1'
       *  RelationalOperator: '<S290>/Relational Operator'
       */
      ASW_OBD_lib_Deb_11(((minV >= Gs16_nMotoStallMinRefElecSpd_C) &&
                          rtb_Switch_lbqb), Gu16_ctMotoStallConfCnt_C,
                         Gu16_ctMotoStallRcvyCnt_C, &ASW_OBD_B.lb_genOutp_hfik,
                         &ASW_OBD_DW.lib_Deb_9);

      /* End of Outputs for SubSystem: '<S287>/lib_Deb_9' */
    }

    /* End of Outputs for SubSystem: '<S286>/ens_JudgDeb' */

    /* Outputs for Atomic SubSystem: '<S286>/lib_FaltDefd_19' */
    /* Chart: '<S288>/sfc_FaultDefiniteness' incorporates:
     *  Constant: '<S285>/Constant1'
     *  Constant: '<S285>/Constant2'
     *  Logic: '<S285>/Logical Operator1'
     *  Selector: '<S285>/Selector1'
     *  Selector: '<S285>/Selector3'
     *  Selector: '<S285>/Selector4'
     *  Selector: '<S285>/Selector7'
     */
    ASW_OBD_sfc_FaultDefiniteness(ASW_OBD_B.lb_genOutp_hfik,
      rtb_LogicalOperator_inut, ASW_OBD_B.Selector1,
      ((rtb_DataTypeConversion1[MOTO_STALL_PERM]) &&
       (rtb_DataTypeConversion1[MOTO_STALL_TMP])), &ASW_OBD_B.stFaltDef_Tmpr,
      &ASW_OBD_B.stFaltDef_Perm_g4b1, &ASW_OBD_B.FaltCycAccCnt_advj,
      Gu16_ctMotoStallConfCnt_C, &ASW_OBD_DW.sf_sfc_FaultDefiniteness_et5q);

    /* End of Outputs for SubSystem: '<S286>/lib_FaltDefd_19' */

    /* Saturate: '<S20>/Saturation1' incorporates:
     *  Inport: '<Root>/busOBD_SlwTaskIn'
     */
    if (busOBD_SlwTaskIn.s16_nActElecSpd >= -32767) {
      rtb_Saturation1_h5iq = busOBD_SlwTaskIn.s16_nActElecSpd;
    } else {
      rtb_Saturation1_h5iq = -32767;
    }

    /* End of Saturate: '<S20>/Saturation1' */

    /* Selector: '<S20>/Selector2' incorporates:
     *  Constant: '<S20>/Constant4'
     */
    rtb_Selector2_aagr = rtb_Switch[NO_LD];

    /* Outputs for Enabled SubSystem: '<S185>/ens_JudgDeb' incorporates:
     *  EnablePort: '<S186>/Enable'
     */
    if (rtb_Selector2_aagr) {
      /* Saturate: '<S20>/Saturation2' incorporates:
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       */
      if (busOBD_SlwTaskIn.s16_ampActPhCurrAmp > 14746) {
        minV = 14746;
      } else if (busOBD_SlwTaskIn.s16_ampActPhCurrAmp < 0) {
        minV = 0;
      } else {
        minV = busOBD_SlwTaskIn.s16_ampActPhCurrAmp;
      }

      /* Outputs for Atomic SubSystem: '<S186>/lib_Deb_10' */
      /* Logic: '<S189>/Logical Operator' incorporates:
       *  Constant: '<S186>/Constant2'
       *  Constant: '<S186>/Constant3'
       *  Constant: '<S189>/Constant2'
       *  Lookup_n-D: '<S189>/ElctTrqMap'
       *  RelationalOperator: '<S189>/Relational Operator1'
       *  RelationalOperator: '<S189>/Relational Operator2'
       *  Saturate: '<S20>/Saturation1'
       *  Saturate: '<S20>/Saturation2'
       */
      ASW_OBD_lib_Deb_11(((minV < look1_is16lu32n32ys16n_eAC3J1UD
                           (rtb_Saturation1_h5iq,
                            &Gs16_iNoLdPhCurr_CUR_nActElecSpd_X[0],
                            &Gs16_iNoLdPhCurr_CUR[0], 4U)) &&
                          (rtb_Saturation1_h5iq >= Gs16_nOpnLpConvActElecSpd_C)),
                         Gu16_ctNoLdConfCnt_C, Gu16_ctNoLdRcvyCnt_C,
                         &ASW_OBD_B.lb_genOutp_hhu4, &ASW_OBD_DW.lib_Deb_10);

      /* End of Outputs for SubSystem: '<S186>/lib_Deb_10' */
    }

    /* End of Outputs for SubSystem: '<S185>/ens_JudgDeb' */

    /* Outputs for Atomic SubSystem: '<S185>/lib_FaltDefd_20' */
    /* Selector: '<S20>/Selector1' incorporates:
     *  Constant: '<S20>/Constant4'
     *  Selector: '<S20>/Selector2'
     *  Selector: '<S20>/Selector7'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.lb_genOutp_hhu4, rtb_Selector2_aagr,
      rtb_DataTypeConversion[NO_LD], rtb_DataTypeConversion1[NO_LD],
      &rtb_stFaltDef_Tmpr_grfu, &ASW_OBD_B.stFaltDef_Perm_kt5c,
      &ASW_OBD_B.FaltCycAccCnt_fh1w, Gu16_ctNoLdConfCnt_C,
      &ASW_OBD_DW.lib_FaltDefd_20);

    /* End of Outputs for SubSystem: '<S185>/lib_FaltDefd_20' */

    /* Saturate: '<S15>/Saturation1' incorporates:
     *  Inport: '<Root>/busOBD_SlwTaskIn'
     */
    if (busOBD_SlwTaskIn.s16_nActElecSpd >= -32767) {
      rtb_Saturation1_kizi = busOBD_SlwTaskIn.s16_nActElecSpd;
    } else {
      rtb_Saturation1_kizi = -32767;
    }

    /* End of Saturate: '<S15>/Saturation1' */

    /* Selector: '<S15>/Selector2' incorporates:
     *  Constant: '<S15>/Constant8'
     */
    rtb_Selector2_bp14 = rtb_Switch[MOTO_SPD_HI_LVL1];

    /* Outputs for Enabled SubSystem: '<S147>/ens_Deb' incorporates:
     *  EnablePort: '<S148>/Enable'
     */
    if (rtb_Selector2_bp14) {
      /* Abs: '<S148>/Abs' incorporates:
       *  Constant: '<S148>/Constant16'
       *  Constant: '<S148>/Constant17'
       *  Constant: '<S148>/Constant18'
       *  Constant: '<S148>/Constant19'
       *  Constant: '<S148>/Constant2'
       *  Constant: '<S148>/Constant3'
       *  Saturate: '<S15>/Saturation1'
       */
      if (rtb_Saturation1_kizi < 0) {
        minV = (sint16)(-rtb_Saturation1_kizi);
      } else {
        minV = rtb_Saturation1_kizi;
      }

      /* Outputs for Atomic SubSystem: '<S148>/lib_HysDeb_14' */
      ASW_OBD_lib_HysDeb_14(minV, Gu16_nMotoSpdHiLvl1ConfTrs_C,
                            Gu16_nMotoSpdHiLvl1RcvyTrs_C,
                            Gu16_ctMotoSpdHiLvl1ConfCnt_C,
                            Gu16_ctMotoSpdHiLvl1RcvyCnt_C, true, false,
                            &ASW_OBD_B.Switch1_asmr,
                            &rtb_RelationalOperator1_d4kk,
                            &rtb_RelationalOperator_hs1s,
                            &ASW_OBD_DW.lib_HysDeb_14);

      /* End of Abs: '<S148>/Abs' */
      /* End of Outputs for SubSystem: '<S148>/lib_HysDeb_14' */
    }

    /* End of Outputs for SubSystem: '<S147>/ens_Deb' */

    /* Outputs for Atomic SubSystem: '<S147>/lib_FaltDefd_22' */
    /* Selector: '<S15>/Selector9' incorporates:
     *  Constant: '<S15>/Constant8'
     *  Selector: '<S15>/Selector2'
     *  Selector: '<S15>/Selector21'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.Switch1_asmr, rtb_Selector2_bp14,
      rtb_DataTypeConversion[MOTO_SPD_HI_LVL1],
      rtb_DataTypeConversion1[MOTO_SPD_HI_LVL1], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_naf3, &ASW_OBD_B.FaltCycAccCnt_beqh,
      Gu16_ctMotoSpdHiLvl1ConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_22);

    /* End of Outputs for SubSystem: '<S147>/lib_FaltDefd_22' */

    /* Saturate: '<S16>/Saturation' incorporates:
     *  Inport: '<Root>/busOBD_SlwTaskIn'
     */
    if (busOBD_SlwTaskIn.s16_nRmpRefElecSpd >= -32767) {
      rtb_Saturation = busOBD_SlwTaskIn.s16_nRmpRefElecSpd;
    } else {
      rtb_Saturation = -32767;
    }

    /* End of Saturate: '<S16>/Saturation' */

    /* Saturate: '<S16>/Saturation1' incorporates:
     *  Inport: '<Root>/busOBD_SlwTaskIn'
     */
    if (busOBD_SlwTaskIn.s16_nActElecSpd >= -32767) {
      rtb_Saturation1_kx2o = busOBD_SlwTaskIn.s16_nActElecSpd;
    } else {
      rtb_Saturation1_kx2o = -32767;
    }

    /* End of Saturate: '<S16>/Saturation1' */

    /* Selector: '<S16>/Selector2' incorporates:
     *  Constant: '<S16>/Constant4'
     */
    rtb_Selector2_cplt = rtb_Switch[MOTO_SPD_LO_LVL1];

    /* Outputs for Enabled SubSystem: '<S154>/ens_JudgDeb' incorporates:
     *  EnablePort: '<S155>/Enable'
     */
    if (rtb_Selector2_cplt) {
      /* Abs: '<S155>/Abs' incorporates:
       *  Saturate: '<S16>/Saturation'
       */
      if (rtb_Saturation < 0) {
        minV = (sint16)(-rtb_Saturation);
      } else {
        minV = rtb_Saturation;
      }

      /* Abs: '<S155>/Abs1' incorporates:
       *  Saturate: '<S16>/Saturation1'
       */
      if (rtb_Saturation1_kx2o < 0) {
        minV_0 = (sint16)(-rtb_Saturation1_kx2o);
      } else {
        minV_0 = rtb_Saturation1_kx2o;
      }

      /* Sum: '<S155>/Subtract' incorporates:
       *  Abs: '<S155>/Abs'
       *  Abs: '<S155>/Abs1'
       */
      rtb_Subtract = (sint16)((minV - minV_0) >> 1);

      /* Saturate: '<S155>/Saturation3' incorporates:
       *  Sum: '<S155>/Subtract'
       */
      i = (rtb_Subtract << 1);
      if (i >= 32767) {
        rtb_Saturation3 = MAX_int16_T;
      } else if (i <= -32767) {
        rtb_Saturation3 = -32767;
      } else {
        rtb_Saturation3 = (sint16)(rtb_Subtract << 1);
      }

      /* End of Saturate: '<S155>/Saturation3' */

      /* Outputs for Atomic SubSystem: '<S155>/lib_HysDeb_15' */
      /* Chart: '<S160>/sfc_Debounce1' incorporates:
       *  Constant: '<S155>/OBD_ctIGBTHiDebOK_C'
       *  Constant: '<S155>/Parameter1'
       *  RelationalOperator: '<S160>/Relational Operator'
       *  Saturate: '<S155>/Saturation3'
       */
      ASW_OBD_sfc_Debounce((rtb_Saturation3 < Gs16_nMinMotoSpdDvtRcvyTrs_C),
                           Gu16_ctMinMotoSpdDvtRcvyCnt_C,
                           &rtb_stFaltDef_Tmpr_grfu,
                           &ASW_OBD_DW.sf_sfc_Debounce1);

      /* Chart: '<S160>/sfc_Debounce' incorporates:
       *  Constant: '<S155>/OBD_ctIGBTHiDebDef_C'
       *  Constant: '<S155>/Parameter2'
       *  RelationalOperator: '<S160>/Relational Operator1'
       *  Saturate: '<S155>/Saturation3'
       */
      ASW_OBD_sfc_Debounce((rtb_Saturation3 > Gs16_nMaxMotoSpdDvtConfTrs_C),
                           Gu16_ctMaxMotoSpdDvtConfCnt_C, &rtb_lb_genOutp_brm0,
                           &ASW_OBD_DW.sf_sfc_Debounce);

      /* Switch: '<S160>/Switch1' incorporates:
       *  Constant: '<S155>/Parameter5'
       *  Switch: '<S160>/Switch'
       *  UnitDelay: '<S160>/Unit Delay2'
       */
      if (rtb_lb_genOutp_brm0) {
        rtb_Switch1_bsfg = true;
      } else {
        rtb_Switch1_bsfg = ((!rtb_stFaltDef_Tmpr_grfu) &&
                            (ASW_OBD_DW.bitsForTID1.UnitDelay2_DSTATE));
      }

      /* End of Switch: '<S160>/Switch1' */

      /* Update for UnitDelay: '<S160>/Unit Delay2' */
      ASW_OBD_DW.bitsForTID1.UnitDelay2_DSTATE = rtb_Switch1_bsfg;

      /* End of Outputs for SubSystem: '<S155>/lib_HysDeb_15' */

      /* Logic: '<S155>/OR2' incorporates:
       *  Constant: '<S157>/Constant'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       *  RelationalOperator: '<S157>/Compare'
       */
      ASW_OBD_B.bitsForTID1.OR2 = ((busOBD_SlwTaskIn.enm_stMotoSt == CLOSED_LOOP)
        && rtb_Switch1_bsfg);
    }

    /* End of Outputs for SubSystem: '<S154>/ens_JudgDeb' */

    /* Outputs for Atomic SubSystem: '<S154>/lib_FaltDefd_23' */
    /* Selector: '<S16>/Selector1' incorporates:
     *  Constant: '<S16>/Constant4'
     *  Selector: '<S16>/Selector2'
     *  Selector: '<S16>/Selector7'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.bitsForTID1.OR2, rtb_Selector2_cplt,
      rtb_DataTypeConversion[MOTO_SPD_LO_LVL1],
      rtb_DataTypeConversion1[MOTO_SPD_LO_LVL1], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_ilgb, &ASW_OBD_B.FaltCycAccCnt_fd2e,
      Gu16_ctMaxMotoSpdDvtConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_23);

    /* End of Outputs for SubSystem: '<S154>/lib_FaltDefd_23' */
  }

  /* End of Outputs for SubSystem: '<S1>/rss_PwrTubPCBTempHiLvl1Dia' */
  /* End of Outputs for SubSystem: '<S1>/rss_PwrTubPCBTempHiLvl2Dia' */
  /* End of Outputs for SubSystem: '<S1>/rss_MotoTempHiLvl1Dia' */
  /* End of Outputs for SubSystem: '<S1>/rss_MotoTempHiLvl2Dia' */
  /* End of Outputs for SubSystem: '<S30>/rss_MotoStallDiaHybr' */
  /* End of Outputs for SubSystem: '<S1>/rss_NoLdDia' */
  /* End of Outputs for SubSystem: '<S1>/rss_MotoSpdHiLvl1Dia' */
  /* End of Outputs for SubSystem: '<S1>/rss_MotoSpdLoLvl1Dia' */

  /* Outputs for Enabled SubSystem: '<S1>/rss_PhCurrSensFaltDia' incorporates:
   *  EnablePort: '<S22>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S31>/rss_PhiSensFaltDiaHybr' incorporates:
   *  EnablePort: '<S294>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_GDVltgHiLvl1Dia' incorporates:
   *  EnablePort: '<S12>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_GDVltgLoLvl1Dia' incorporates:
   *  EnablePort: '<S13>/Enable'
   */
  if (rtb_Equal_h0y4) {
    /* Selector: '<S13>/Selector2' incorporates:
     *  Constant: '<S13>/Constant8'
     */
    rtb_Selector2_kmbg = rtb_Switch[GD_VLTG_LO_LVL1];

    /* Outputs for Enabled SubSystem: '<S135>/ens_Deb_GEELY' incorporates:
     *  EnablePort: '<S137>/Enable'
     */
    if (rtb_Selector2_kmbg) {
      /* SignalConversion generated from: '<S137>/bol_flgGDVltgLoLvl1' incorporates:
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       */
      ASW_OBD_B.bitsForTID1.bol_flgGDVltgLoLvl1 =
        busOBD_SlwTaskIn.bol_flgGDVltgLoLvl1;

      /* Outputs for Atomic SubSystem: '<S137>/lib_Deb_15' */
      /* Constant: '<S137>/Constant1' incorporates:
       *  Constant: '<S137>/Constant4'
       */
      ASW_OBD_lib_Deb_11(ASW_OBD_B.bitsForTID1.bol_flgGDVltgLoLvl1,
                         Gu16_ctGDVltgLoLvl1ConfCnt_C,
                         Gu16_ctGDVltgLoLvl1RcvyCnt_C,
                         &ASW_OBD_B.lb_genOutp_j4vj, &ASW_OBD_DW.lib_Deb_15);

      /* End of Outputs for SubSystem: '<S137>/lib_Deb_15' */
    }

    /* End of Outputs for SubSystem: '<S135>/ens_Deb_GEELY' */

    /* Outputs for Atomic SubSystem: '<S134>/lib_FaltDefd_7' */
    /* Selector: '<S13>/Selector9' incorporates:
     *  Constant: '<S13>/Constant8'
     *  Selector: '<S13>/Selector2'
     *  Selector: '<S13>/Selector21'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.lb_genOutp_j4vj, rtb_Selector2_kmbg,
      rtb_DataTypeConversion[GD_VLTG_LO_LVL1],
      rtb_DataTypeConversion1[GD_VLTG_LO_LVL1], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_g0ii, &ASW_OBD_B.FaltCycAccCnt_ei2t,
      Gu16_ctGDVltgLoLvl1ConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_7);

    /* End of Outputs for SubSystem: '<S134>/lib_FaltDefd_7' */

    /* Selector: '<S12>/Selector2' incorporates:
     *  Constant: '<S12>/Constant8'
     */
    rtb_Selector2_etdq = rtb_Switch[GD_VLTG_HI_LVL1];

    /* Outputs for Enabled SubSystem: '<S128>/ens_Deb_GEELY' incorporates:
     *  EnablePort: '<S130>/Enable'
     */
    if (rtb_Selector2_etdq) {
      /* SignalConversion generated from: '<S130>/bol_flgGDVltgHiLvl1' incorporates:
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       */
      ASW_OBD_B.bitsForTID1.bol_flgGDVltgHiLvl1 =
        busOBD_SlwTaskIn.bol_flgGDVltgHiLvl1;

      /* Outputs for Atomic SubSystem: '<S130>/lib_Deb_16' */
      /* Constant: '<S130>/Constant1' incorporates:
       *  Constant: '<S130>/Constant4'
       */
      ASW_OBD_lib_Deb_11(ASW_OBD_B.bitsForTID1.bol_flgGDVltgHiLvl1,
                         Gu16_ctGDVltgHiLvl1ConfCnt_C,
                         Gu16_ctGDVltgHiLvl1RcvyCnt_C,
                         &ASW_OBD_B.lb_genOutp_hynf, &ASW_OBD_DW.lib_Deb_16);

      /* End of Outputs for SubSystem: '<S130>/lib_Deb_16' */
    }

    /* End of Outputs for SubSystem: '<S128>/ens_Deb_GEELY' */

    /* Outputs for Atomic SubSystem: '<S127>/lib_FaltDefd_8' */
    /* Selector: '<S12>/Selector9' incorporates:
     *  Constant: '<S12>/Constant8'
     *  Selector: '<S12>/Selector2'
     *  Selector: '<S12>/Selector21'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.lb_genOutp_hynf, rtb_Selector2_etdq,
      rtb_DataTypeConversion[GD_VLTG_HI_LVL1],
      rtb_DataTypeConversion1[GD_VLTG_HI_LVL1], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_dgcc, &ASW_OBD_B.FaltCycAccCnt_et1a,
      Gu16_ctGDVltgHiLvl1ConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_8);

    /* End of Outputs for SubSystem: '<S127>/lib_FaltDefd_8' */

    /* Selector: '<S294>/Selector2' incorporates:
     *  Constant: '<S294>/Constant4'
     */
    rtb_Selector2_kfbd = rtb_Switch[PHI_SENS_FALT];

    /* Outputs for Enabled SubSystem: '<S295>/ens_HysDeb' incorporates:
     *  EnablePort: '<S297>/Enable'
     */
    if (rtb_Selector2_kfbd) {
      /* Outputs for Atomic SubSystem: '<S297>/lib_Deb_2' */
      /* SignalConversion generated from: '<S297>/bol_flgPhiSensFalt' incorporates:
       *  Constant: '<S297>/Constant2'
       *  Constant: '<S297>/Constant3'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       */
      ASW_OBD_lib_Deb_11(busOBD_SlwTaskIn.bol_flgPhiSensFalt,
                         Gu16_ctPhiSensFaltConfCnt_C,
                         Gu16_ctPhiSensFaltRcvyCnt_C, &ASW_OBD_B.lb_genOutp,
                         &ASW_OBD_DW.lib_Deb_2);

      /* End of Outputs for SubSystem: '<S297>/lib_Deb_2' */
    }

    /* End of Outputs for SubSystem: '<S295>/ens_HysDeb' */

    /* Outputs for Atomic SubSystem: '<S295>/lib_FaltDefd_10' */
    /* Selector: '<S294>/Selector1' incorporates:
     *  Constant: '<S294>/Constant4'
     *  Selector: '<S294>/Selector2'
     *  Selector: '<S294>/Selector7'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.lb_genOutp, rtb_Selector2_kfbd,
      rtb_DataTypeConversion[PHI_SENS_FALT],
      rtb_DataTypeConversion1[PHI_SENS_FALT], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm, &ASW_OBD_B.FaltCycAccCnt,
      Gu16_ctPhiSensFaltConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_10);

    /* End of Outputs for SubSystem: '<S295>/lib_FaltDefd_10' */

    /* Logic: '<S295>/Logical Operator' incorporates:
     *  Constant: '<S296>/Constant'
     *  Inport: '<Root>/busOBD_SlwTaskIn'
     *  RelationalOperator: '<S296>/Compare'
     */
    ASW_OBD_B.bitsForTID1.LogicalOperator = ((ASW_OBD_B.stFaltDef_Perm) &&
      (busOBD_SlwTaskIn.enm_modeAgEvalMode != SENSORLESS));

    /* Selector: '<S22>/Selector2' incorporates:
     *  Constant: '<S22>/Constant4'
     */
    rtb_Selector2_jj5j = rtb_Switch[PH_CURR_SENS_FALT];

    /* Outputs for Enabled SubSystem: '<S199>/ens_JudgDeb' incorporates:
     *  EnablePort: '<S200>/Enable'
     */
    if (rtb_Selector2_jj5j) {
      /* Logic: '<S203>/Logical Operator2' incorporates:
       *  Constant: '<S203>/Constant1'
       *  Constant: '<S203>/Constant3'
       *  Constant: '<S203>/Constant4'
       *  Constant: '<S203>/Constant5'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       *  Logic: '<S203>/Logical Operator'
       *  Logic: '<S203>/Logical Operator1'
       *  RelationalOperator: '<S203>/Relational Operator'
       *  RelationalOperator: '<S203>/Relational Operator2'
       *  RelationalOperator: '<S203>/Relational Operator3'
       *  RelationalOperator: '<S203>/Relational Operator4'
       */
      ASW_OBD_B.bitsForTID1.LogicalOperator2_fqo5 =
        (((busOBD_SlwTaskIn.u16_uADActPhCurr[0] >= Gu16_uADPhUCurrFaltHiLim_C) ||
          (busOBD_SlwTaskIn.u16_uADActPhCurr[0] <= Gu16_uADPhUCurrFaltLoLim_C)) ||
         ((busOBD_SlwTaskIn.u16_uADActPhCurr[1] >= Gu16_uADPhVCurrFaltHiLim_C) ||
          (busOBD_SlwTaskIn.u16_uADActPhCurr[1] <= Gu16_uADPhVCurrFaltLoLim_C)));

      /* Outputs for Atomic SubSystem: '<S200>/lib_Deb_3' */
      /* Constant: '<S200>/Constant2' incorporates:
       *  Constant: '<S200>/Constant3'
       */
      ASW_OBD_lib_Deb_11(ASW_OBD_B.bitsForTID1.LogicalOperator2_fqo5,
                         Gu16_ctPhCurrSensFaltConfCnt_C,
                         Gu16_ctPhCurrSensFaltRcvyCnt_C,
                         &ASW_OBD_B.lb_genOutp_gw2t, &ASW_OBD_DW.lib_Deb_3);

      /* End of Outputs for SubSystem: '<S200>/lib_Deb_3' */
    }

    /* End of Outputs for SubSystem: '<S199>/ens_JudgDeb' */

    /* Outputs for Atomic SubSystem: '<S199>/lib_FaltDefd_11' */
    /* Selector: '<S22>/Selector1' incorporates:
     *  Constant: '<S22>/Constant4'
     *  Selector: '<S22>/Selector2'
     *  Selector: '<S22>/Selector7'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.lb_genOutp_gw2t, rtb_Selector2_jj5j,
      rtb_DataTypeConversion[PH_CURR_SENS_FALT],
      rtb_DataTypeConversion1[PH_CURR_SENS_FALT], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_omzh, &ASW_OBD_B.FaltCycAccCnt_buyv,
      Gu16_ctPhCurrSensFaltConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_11);

    /* End of Outputs for SubSystem: '<S199>/lib_FaltDefd_11' */
  }

  /* End of Outputs for SubSystem: '<S1>/rss_GDVltgLoLvl1Dia' */
  /* End of Outputs for SubSystem: '<S1>/rss_GDVltgHiLvl1Dia' */
  /* End of Outputs for SubSystem: '<S31>/rss_PhiSensFaltDiaHybr' */
  /* End of Outputs for SubSystem: '<S1>/rss_PhCurrSensFaltDia' */

  /* Outputs for Enabled SubSystem: '<S1>/rss_MotoTempSensFaltDia' incorporates:
   *  EnablePort: '<S19>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/rss_PwrTubPCBTempSensFaltDia' incorporates:
   *  EnablePort: '<S25>/Enable'
   */
  if (rtb_Equal) {
    /* Selector: '<S25>/Selector2' incorporates:
     *  Constant: '<S25>/Constant4'
     */
    rtb_Selector2_bslu = rtb_Switch[PWR_TUB_PCB_TEMP_SENS_FALT];

    /* Outputs for Enabled SubSystem: '<S228>/ens_HysDeb' incorporates:
     *  EnablePort: '<S229>/Enable'
     */
    if (rtb_Selector2_bslu) {
      /* Saturate: '<S242>/Saturation' incorporates:
       *  Constant: '<S242>/Constant'
       */
      if (Gu8_tMaxNTCMCUTempDvt_C > 110) {
        maxV = 110U;
      } else if (Gu8_tMaxNTCMCUTempDvt_C < 40) {
        maxV = 40U;
      } else {
        maxV = Gu8_tMaxNTCMCUTempDvt_C;
      }

      /* Logic: '<S234>/Logical Operator' incorporates:
       *  Constant: '<S234>/Constant2'
       *  Constant: '<S234>/Constant3'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       *  Logic: '<S234>/Logical Operator1'
       *  RelationalOperator: '<S234>/Relational Operator1'
       *  RelationalOperator: '<S234>/Relational Operator2'
       *  RelationalOperator: '<S234>/Relational Operator3'
       *  Saturate: '<S242>/Saturation'
       *  Sum: '<S234>/Add'
       */
      rtb_LogicalOperator_mm50 = (((((uint8)((busOBD_SlwTaskIn.u8_tPwrTubTemp +
        maxV) - 40)) < busOBD_SlwTaskIn.u8_tMCUTemp) &&
        (busOBD_SlwTaskIn.u8_tPwrTubTemp <= Gu8_tNTCTempSensOpnCir_C)) ||
        (busOBD_SlwTaskIn.u16_uADPwrTubTemp <= Gu16_uADPwrTubTempFaltLoLim_C));

      /* Outputs for Atomic SubSystem: '<S229>/lib_Deb_12' */
      /* Constant: '<S229>/Constant9' incorporates:
       *  Constant: '<S229>/Constant10'
       */
      rtb_stFaltDef_Tmpr_grfu = ASW_OBD_lib_Deb_5(rtb_LogicalOperator_mm50,
        Gu16_ctPwrTubTempFaltConfCnt_C, Gu16_ctPwrTubTempFaltRcvyCnt_C,
        &ASW_OBD_DW.lib_Deb_12);

      /* End of Outputs for SubSystem: '<S229>/lib_Deb_12' */

      /* Saturate: '<S239>/Saturation' incorporates:
       *  Constant: '<S239>/Constant'
       */
      if (Gu8_tMaxNTCMCUTempDvt_C > 110) {
        maxV = 110U;
      } else if (Gu8_tMaxNTCMCUTempDvt_C < 40) {
        maxV = 40U;
      } else {
        maxV = Gu8_tMaxNTCMCUTempDvt_C;
      }

      /* Logic: '<S233>/Logical Operator1' incorporates:
       *  Constant: '<S233>/Constant2'
       *  Constant: '<S233>/Constant3'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       *  Logic: '<S233>/Logical Operator2'
       *  RelationalOperator: '<S233>/Relational Operator1'
       *  RelationalOperator: '<S233>/Relational Operator3'
       *  RelationalOperator: '<S233>/Relational Operator4'
       *  Saturate: '<S239>/Saturation'
       *  Sum: '<S233>/Add'
       */
      rtb_LogicalOperator1_cf41 = (((((uint8)((busOBD_SlwTaskIn.u8_tPCBTemp +
        maxV) - 40)) < busOBD_SlwTaskIn.u8_tMCUTemp) &&
        (busOBD_SlwTaskIn.u8_tPCBTemp <= Gu8_tNTCTempSensOpnCir_C)) ||
        (busOBD_SlwTaskIn.u16_uADPCBTemp <= Gu16_uADPCBTempFaltLoLim_C));

      /* Outputs for Atomic SubSystem: '<S229>/lib_Deb_13' */
      /* Constant: '<S229>/Constant12' incorporates:
       *  Constant: '<S229>/Constant11'
       */
      rtb_lb_genOutp_brm0 = ASW_OBD_lib_Deb_5(rtb_LogicalOperator1_cf41,
        Gu16_ctPCBTempFaltConfCnt_C, Gu16_ctPCBTempFaltRcvyCnt_C,
        &ASW_OBD_DW.lib_Deb_13);

      /* End of Outputs for SubSystem: '<S229>/lib_Deb_13' */

      /* Logic: '<S229>/Logical Operator2' */
      ASW_OBD_B.bitsForTID1.LogicalOperator2 = (rtb_stFaltDef_Tmpr_grfu ||
        rtb_lb_genOutp_brm0);

      /* Logic: '<S229>/Logical Operator1' */
      ASW_OBD_B.bitsForTID1.LogicalOperator1_c3mb = (rtb_LogicalOperator_mm50 ||
        rtb_LogicalOperator1_cf41);
    }

    /* End of Outputs for SubSystem: '<S228>/ens_HysDeb' */

    /* Outputs for Atomic SubSystem: '<S228>/lib_FaltDefd_24' */
    /* Selector: '<S25>/Selector1' incorporates:
     *  Constant: '<S25>/Constant4'
     *  Selector: '<S25>/Selector2'
     *  Selector: '<S25>/Selector7'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.bitsForTID1.LogicalOperator2,
      rtb_Selector2_bslu, rtb_DataTypeConversion[PWR_TUB_PCB_TEMP_SENS_FALT],
      rtb_DataTypeConversion1[PWR_TUB_PCB_TEMP_SENS_FALT],
      &rtb_stFaltDef_Tmpr_grfu, &ASW_OBD_B.stFaltDef_Perm_i2o3,
      &ASW_OBD_B.FaltCycAccCnt_kent, Gu16_ctPCBTempFaltConfCnt_C,
      &ASW_OBD_DW.lib_FaltDefd_24);

    /* End of Outputs for SubSystem: '<S228>/lib_FaltDefd_24' */

    /* Selector: '<S19>/Selector2' incorporates:
     *  Constant: '<S19>/Constant4'
     */
    rtb_Selector2_f1p3 = rtb_Switch[MOTO_TEMP_SENS_FALT];

    /* Outputs for Enabled SubSystem: '<S178>/ens_HysDeb' incorporates:
     *  EnablePort: '<S179>/Enable'
     */
    if (rtb_Selector2_f1p3) {
      /* Logic: '<S182>/Logical Operator' incorporates:
       *  Constant: '<S182>/Constant1'
       *  Constant: '<S182>/Constant3'
       *  Inport: '<Root>/busOBD_SlwTaskIn'
       *  RelationalOperator: '<S182>/Relational Operator'
       *  RelationalOperator: '<S182>/Relational Operator2'
       */
      ASW_OBD_B.bitsForTID1.LogicalOperator_kubn =
        ((busOBD_SlwTaskIn.u16_uADMotoTemp >= Gu16_uADMotoTempFaltHiLim_C) ||
         (busOBD_SlwTaskIn.u16_uADMotoTemp <= Gu16_uADMotoTempFaltLoLim_C));

      /* Outputs for Atomic SubSystem: '<S179>/lib_Deb_14' */
      /* Constant: '<S179>/Constant9' incorporates:
       *  Constant: '<S179>/Constant10'
       */
      ASW_OBD_lib_Deb_11(ASW_OBD_B.bitsForTID1.LogicalOperator_kubn,
                         Gu16_ctMotoTempFaltConfCnt_C,
                         Gu16_ctMotoTempFaltRcvyCnt_C,
                         &ASW_OBD_B.lb_genOutp_f0nq, &ASW_OBD_DW.lib_Deb_14);

      /* End of Outputs for SubSystem: '<S179>/lib_Deb_14' */
    }

    /* End of Outputs for SubSystem: '<S178>/ens_HysDeb' */

    /* Outputs for Atomic SubSystem: '<S178>/lib_FaltDefd_25' */
    /* Selector: '<S19>/Selector1' incorporates:
     *  Constant: '<S19>/Constant4'
     *  Selector: '<S19>/Selector2'
     *  Selector: '<S19>/Selector7'
     */
    ASW_OBD_lib_FaltDefd_21(ASW_OBD_B.lb_genOutp_f0nq, rtb_Selector2_f1p3,
      rtb_DataTypeConversion[MOTO_TEMP_SENS_FALT],
      rtb_DataTypeConversion1[MOTO_TEMP_SENS_FALT], &rtb_stFaltDef_Tmpr_grfu,
      &ASW_OBD_B.stFaltDef_Perm_cm35, &ASW_OBD_B.FaltCycAccCnt_ibsm,
      Gu16_ctMotoTempFaltConfCnt_C, &ASW_OBD_DW.lib_FaltDefd_25);

    /* End of Outputs for SubSystem: '<S178>/lib_FaltDefd_25' */
  }

  /* End of Outputs for SubSystem: '<S1>/rss_PwrTubPCBTempSensFaltDia' */
  /* End of Outputs for SubSystem: '<S1>/rss_MotoTempSensFaltDia' */

  /* BusCreator: '<S9>/Bus Creator1' incorporates:
   *  Constant: '<S9>/Constant1'
   */
  ASW_OBD_B.BusCreator1.bol_flgPhCurrHiLvl1Flg = ASW_OBD_B.stFaltDef_Perm_lijp;
  ASW_OBD_B.BusCreator1.bol_flgHWOvrCurrFlg = ASW_OBD_B.stFaltDef_Perm_dzb0;
  ASW_OBD_B.BusCreator1.bol_flgSplyVltgLoLvl1Flg = ASW_OBD_B.stFaltDef_Perm_ktdp;
  ASW_OBD_B.BusCreator1.bol_flgSplyVltgLoLvl2Flg = ASW_OBD_B.stFaltDef_Perm_efmb;
  ASW_OBD_B.BusCreator1.bol_flgSplyVltgHiLvl1Flg = ASW_OBD_B.stFaltDef_Perm_f4wg;
  ASW_OBD_B.BusCreator1.bol_flgPwrTubPCBTempHiLvl1Flg =
    ASW_OBD_B.stFaltDef_Perm_dthc;
  ASW_OBD_B.BusCreator1.bol_flgPwrTubPCBTempHiLvl2Flg =
    ASW_OBD_B.bitsForTID1.LogicalOperator1_cq5m;
  ASW_OBD_B.BusCreator1.bol_flgMotoTempHiLvl1Flg = ASW_OBD_B.stFaltDef_Perm_h1g3;
  ASW_OBD_B.BusCreator1.bol_flgMotoTempHiLvl2Flg = ASW_OBD_B.stFaltDef_Perm_b5ga;
  ASW_OBD_B.BusCreator1.bol_flgComFaltFlg =
    ASW_OBD_B.bitsForTID1.stFaltDef_Perm_l1lp;
  ASW_OBD_B.BusCreator1.bol_flgMotoStallPermFlg = ASW_OBD_B.stFaltDef_Perm_g4b1;
  ASW_OBD_B.BusCreator1.bol_flgMotoStallTmpFlg = ASW_OBD_B.stFaltDef_Tmpr;
  ASW_OBD_B.BusCreator1.bol_flgNoLdFlg = ASW_OBD_B.stFaltDef_Perm_kt5c;
  ASW_OBD_B.BusCreator1.bol_flgBattPwrHiLvl1Flg = ASW_OBD_B.stFaltDef_Perm_iopf;
  ASW_OBD_B.BusCreator1.bol_flgMotoSpdHiLvl1Flg = ASW_OBD_B.stFaltDef_Perm_naf3;
  ASW_OBD_B.BusCreator1.bol_flgMotoSpdLoLvl1Flg = ASW_OBD_B.stFaltDef_Perm_ilgb;
  ASW_OBD_B.BusCreator1.bol_flgCtlBrdVltgLoLvl1Flg =
    ASW_OBD_B.stFaltDef_Perm_nbju;
  ASW_OBD_B.BusCreator1.bol_flgCtlBrdVltgHiLvl1Flg =
    ASW_OBD_B.stFaltDef_Perm_ofvs;
  ASW_OBD_B.BusCreator1.bol_flgGDVltgLoLvl1Flg = ASW_OBD_B.stFaltDef_Perm_g0ii;
  ASW_OBD_B.BusCreator1.bol_flgGDVltgHiLvl1Flg = ASW_OBD_B.stFaltDef_Perm_dgcc;
  ASW_OBD_B.BusCreator1.bol_flgChipFaltFlg = ASW_OBD_B.stFaltDef_Perm_mvmh;
  ASW_OBD_B.BusCreator1.bol_flgPhiSensFaltFlg =
    ASW_OBD_B.bitsForTID1.LogicalOperator;
  ASW_OBD_B.BusCreator1.bol_flgPhCurrSensFaltFlg = ASW_OBD_B.stFaltDef_Perm_omzh;
  ASW_OBD_B.BusCreator1.bol_flgPwrTubPCBTempSensFaltFlg =
    ASW_OBD_B.stFaltDef_Perm_i2o3;
  ASW_OBD_B.BusCreator1.bol_flgMotoTempSensFaltFlg =
    ASW_OBD_B.stFaltDef_Perm_cm35;
  ASW_OBD_B.BusCreator1.bol_flgBusOffFaltFlg = ASW_OBD_B.stFaltDef_Perm_nx2u;
  ASW_OBD_B.BusCreator1.bol_flgCrashFaltFlg = ASW_OBD_B.stFaltDef_Perm_bpps;
  ASW_OBD_B.BusCreator1.bol_flgReserved3Flg = false;
  ASW_OBD_B.BusCreator1.bol_flgReserved4Flg = false;
  ASW_OBD_B.BusCreator1.bol_flgReserved5Flg = false;

  /* Outputs for Iterator SubSystem: '<S10>/sss_FaltLvlConf' */
  ASW_OBD_sss_FaltLvlConf();

  /* End of Outputs for SubSystem: '<S10>/sss_FaltLvlConf' */

  /* Outputs for Triggered SubSystem: '<S111>/sss_ComFaltMechSpdRespDefd_GEELY' incorporates:
   *  TriggerPort: '<S113>/Trigger'
   */
  if (rtb_Equal && (ASW_OBD_PrevZCX.sss_ComFaltMechSpdRespDefd_GEEL != POS_ZCSIG))
  {
    /* Switch: '<S114>/Switch1' incorporates:
     *  Constant: '<S113>/Constant'
     *  Constant: '<S113>/Constant8'
     *  Constant: '<S113>/Constant9'
     *  Inport: '<Root>/busOBD_SlwTaskIn'
     *  RelationalOperator: '<S114>/Relational Operator'
     *  RelationalOperator: '<S114>/Relational Operator1'
     *  UnitDelay: '<S114>/Unit Delay2'
     */
    if (busOBD_SlwTaskIn.u16_uSplyVltg > Gu16_uLimHmeSplyVltgConfTrs_C) {
      rtb_Switch1_avks = true;
    } else {
      rtb_Switch1_avks = ((busOBD_SlwTaskIn.u16_uSplyVltg >=
                           Gu16_uLimHmeSplyVltgRcvyTrs_C) &&
                          (ASW_OBD_DW.bitsForTID1.UnitDelay2_DSTATE_i4n0));
    }

    /* End of Switch: '<S114>/Switch1' */

    /* Switch: '<S113>/Switch3' incorporates:
     *  Constant: '<S113>/Constant6'
     *  Constant: '<S113>/Constant7'
     */
    if (rtb_Switch1_avks) {
      ASW_OBD_B.Switch3 = Gs16_nLmpHmeRefMechSpd_C;
    } else {
      ASW_OBD_B.Switch3 = 0;
    }

    /* End of Switch: '<S113>/Switch3' */

    /* Update for UnitDelay: '<S114>/Unit Delay2' */
    ASW_OBD_DW.bitsForTID1.UnitDelay2_DSTATE_i4n0 = rtb_Switch1_avks;
  }

  ASW_OBD_PrevZCX.sss_ComFaltMechSpdRespDefd_GEEL = rtb_Equal;

  /* End of Outputs for SubSystem: '<S111>/sss_ComFaltMechSpdRespDefd_GEELY' */

  /* Switch: '<S115>/Switch1' incorporates:
   *  Constant: '<S115>/Constant17'
   *  Constant: '<S117>/Constant'
   *  RelationalOperator: '<S117>/Compare'
   */
  if (ASW_OBD_B.FaltCycAccCnt_advj != 0) {
    /* Switch: '<S115>/Switch' incorporates:
     *  Constant: '<S116>/Constant'
     *  Math: '<S115>/Mod'
     *  RelationalOperator: '<S116>/Compare'
     */
    if (((uint8)(ASW_OBD_B.FaltCycAccCnt_advj % 2)) != 0) {
      /* Switch: '<S115>/Switch1' incorporates:
       *  Constant: '<S115>/Constant1'
       */
      ASW_OBD_B.Switch1 = Gs16_nMotoTmpStallRefMechSpd_C;
    } else {
      /* Switch: '<S115>/Switch1' incorporates:
       *  Constant: '<S115>/Constant1'
       *  Gain: '<S115>/Gain'
       */
      ASW_OBD_B.Switch1 = (dt_Standardize_s16p15b0)
        (-Gs16_nMotoTmpStallRefMechSpd_C);
    }

    /* End of Switch: '<S115>/Switch' */
  } else {
    ASW_OBD_B.Switch1 = Gs16_nMaxRefMechSpd_C;
  }

  /* End of Switch: '<S115>/Switch1' */

  /* Product: '<S124>/Divide1' incorporates:
   *  Constant: '<S124>/Constant1'
   *  Product: '<S124>/Divide2'
   */
   ASW_OBD_B.Selector1=1;
  ASW_OBD_B.Divide1 = (dt_Standardize_s16p15b0)(((sint16)div_nde_s32_floor
    (Gs16_trqTqUpLim_C, ASW_OBD_B.Selector1)) * ASW_OBD_B.FaltCycAccCnt_advj);

  /* Outputs for Iterator SubSystem: '<S98>/sss_FaltLvl2Conf' */
  ASW_OBD_sss_FaltLvl2Conf();

  /* End of Outputs for SubSystem: '<S98>/sss_FaltLvl2Conf' */

  /* MinMax: '<S126>/Min' incorporates:
   *  Assignment: '<S125>/Assignment'
   */
  minV = ASW_OBD_B.Assignment[0];

  /* MinMax: '<S95>/Max' */
  maxV = ASW_OBD_B.Assignment_czft[0];

  /* MinMax: '<S126>/Min1' incorporates:
   *  Assignment: '<S125>/Assignment1'
   */
  minV_0 = ASW_OBD_B.Assignment1[0];
  for (i = 0; i < 29; i++) {
    /* MinMax: '<S126>/Min' incorporates:
     *  Assignment: '<S125>/Assignment'
     */
    Assignment = ASW_OBD_B.Assignment[i + 1];
    if (minV <= Assignment) {
    } else {
      minV = Assignment;
    }

    /* MinMax: '<S95>/Max' */
    u1 = ASW_OBD_B.Assignment_czft[i + 1];
    if (maxV >= u1) {
    } else {
      maxV = u1;
    }

    /* MinMax: '<S126>/Min1' incorporates:
     *  Assignment: '<S125>/Assignment1'
     */
    Assignment = ASW_OBD_B.Assignment1[i + 1];
    if (minV_0 <= Assignment) {
    } else {
      minV_0 = Assignment;
    }
  }

  /* SwitchCase: '<S96>/Switch Case' incorporates:
   *  MinMax: '<S95>/Max'
   */
  switch (maxV) {
   case 3:
    /* Outputs for IfAction SubSystem: '<S96>/sas_FaltLvl3' incorporates:
     *  ActionPort: '<S101>/Action Port'
     */
    /* SignalConversion generated from: '<S101>/s16_nFaltRefMechSpdLvl3' incorporates:
     *  Constant: '<S101>/Constant'
     *  Merge: '<S96>/Merge'
     */
    busOBD_SlwTaskOut.s16_nFaltRefMechSpd = 0;

    /* SignalConversion generated from: '<S101>/s16_trqFaltRefTqLimLvl3' incorporates:
     *  Constant: '<S101>/Constant1'
     *  Merge: '<S96>/Merge1'
     */
    busOBD_SlwTaskOut.s16_trqFaltRefTqLim = 0;

    /* End of Outputs for SubSystem: '<S96>/sas_FaltLvl3' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S96>/sas_FaltLvl2' incorporates:
     *  ActionPort: '<S100>/Action Port'
     */
    /* SignalConversion generated from: '<S100>/nFaltRefMechSpdSlcLevl2' incorporates:
     *  Merge: '<S96>/Merge'
     *  MinMax: '<S126>/Min'
     */
    busOBD_SlwTaskOut.s16_nFaltRefMechSpd = minV;

    /* SignalConversion generated from: '<S100>/tqFaltRefTrqLimSlcLevl2' incorporates:
     *  Merge: '<S96>/Merge1'
     *  MinMax: '<S126>/Min1'
     */
    busOBD_SlwTaskOut.s16_trqFaltRefTqLim = minV_0;

    /* End of Outputs for SubSystem: '<S96>/sas_FaltLvl2' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S96>/sas_FaltLvl1' incorporates:
     *  ActionPort: '<S99>/Action Port'
     */
    /* SignalConversion generated from: '<S99>/s16_nFaltRefMechSpdLvl1' incorporates:
     *  Constant: '<S99>/Constant'
     *  Merge: '<S96>/Merge'
     */
    busOBD_SlwTaskOut.s16_nFaltRefMechSpd = Gs16_nMaxRefMechSpd_C;

    /* SignalConversion generated from: '<S99>/s16_trqFaltRefTqLimLvl1' incorporates:
     *  Constant: '<S99>/Constant1'
     *  Merge: '<S96>/Merge1'
     */
    busOBD_SlwTaskOut.s16_trqFaltRefTqLim = Gs16_trqTqUpLim_C;

    /* End of Outputs for SubSystem: '<S96>/sas_FaltLvl1' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S96>/sas_FaltLvlDfl' incorporates:
     *  ActionPort: '<S102>/Action Port'
     */
    /* SignalConversion generated from: '<S102>/s16_nFaltRefMechSpdLvlDfl' incorporates:
     *  Constant: '<S102>/Constant'
     *  Merge: '<S96>/Merge'
     */
    busOBD_SlwTaskOut.s16_nFaltRefMechSpd = Gs16_nMaxRefMechSpd_C;

    /* SignalConversion generated from: '<S102>/s16_trqFaltRefTqLimLvlDfl' incorporates:
     *  Constant: '<S102>/Constant1'
     *  Merge: '<S96>/Merge1'
     */
    busOBD_SlwTaskOut.s16_trqFaltRefTqLim = Gs16_trqTqUpLim_C;

    /* End of Outputs for SubSystem: '<S96>/sas_FaltLvlDfl' */
    break;
  }

  /* End of SwitchCase: '<S96>/Switch Case' */

  /* BusCreator: '<S303>/Bus Creator1' incorporates:
   *  MinMax: '<S95>/Max'
   */
  busOBD_SlwTaskOut.busOBD_FaltSt = ASW_OBD_B.BusCreator1;
  busOBD_SlwTaskOut.u8_stMaxFaltLvl = maxV;
  busOBD_SlwTaskOut.bol_flgPhiSensFaltRawFlg = ASW_OBD_B.stFaltDef_Perm;

  /* Switch: '<S90>/Switch' */
  if (rtb_Equal_mfgh) {
    /* Update for UnitDelay: '<S90>/Unit Delay' incorporates:
     *  Constant: '<S90>/Parameter1'
     */
    ASW_OBD_DW.UnitDelay_DSTATE_c13u = 1U;
  } else {
    /* Update for UnitDelay: '<S90>/Unit Delay' incorporates:
     *  Constant: '<S90>/Parameter2'
     *  Sum: '<S90>/Add1'
     */
    ASW_OBD_DW.UnitDelay_DSTATE_c13u++;
  }

  /* End of Switch: '<S90>/Switch' */

  /* Switch: '<S91>/Switch' */
  if (rtb_Equal_h0y4) {
    /* Update for UnitDelay: '<S91>/Unit Delay' incorporates:
     *  Constant: '<S91>/Parameter1'
     */
    ASW_OBD_DW.UnitDelay_DSTATE_e34g = 1U;
  } else {
    /* Update for UnitDelay: '<S91>/Unit Delay' incorporates:
     *  Constant: '<S91>/Parameter2'
     *  Sum: '<S91>/Add1'
     */
    ASW_OBD_DW.UnitDelay_DSTATE_e34g++;
  }

  /* End of Switch: '<S91>/Switch' */

  /* Switch: '<S92>/Switch' */
  if (rtb_Equal) {
    /* Update for UnitDelay: '<S92>/Unit Delay' incorporates:
     *  Constant: '<S92>/Parameter1'
     */
    ASW_OBD_DW.UnitDelay_DSTATE_aj4e = 1U;
  } else {
    /* Update for UnitDelay: '<S92>/Unit Delay' incorporates:
     *  Constant: '<S92>/Parameter2'
     *  Sum: '<S92>/Add1'
     */
    ASW_OBD_DW.UnitDelay_DSTATE_aj4e++;
  }

  /* End of Switch: '<S92>/Switch' */

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  ASW_OBD_DW.UnitDelay_DSTATE = ASW_OBD_B.BusCreator1;

  /* Update for UnitDelay generated from: '<S1>/Unit Delay1' */
  ASW_OBD_DW.bitsForTID1.UnitDelay1_17_DSTATE = ASW_OBD_B.RelationalOperator;

  /* Update for UnitDelay generated from: '<S1>/Unit Delay1' */
  ASW_OBD_DW.bitsForTID1.UnitDelay1_18_DSTATE =
    ASW_OBD_B.RelationalOperator1_l2l1;

  /* Update for UnitDelay generated from: '<S1>/Unit Delay1' */
  ASW_OBD_DW.bitsForTID1.UnitDelay1_19_DSTATE =
    ASW_OBD_B.bitsForTID1.bol_flgGDVltgLoLvl1;

  /* Update for UnitDelay generated from: '<S1>/Unit Delay1' */
  ASW_OBD_DW.bitsForTID1.UnitDelay1_20_DSTATE =
    ASW_OBD_B.bitsForTID1.bol_flgGDVltgHiLvl1;

  /* Update for UnitDelay generated from: '<S1>/Unit Delay1' */
  ASW_OBD_DW.bitsForTID1.UnitDelay1_23_DSTATE =
    ASW_OBD_B.bitsForTID1.LogicalOperator2_fqo5;

  /* Update for UnitDelay generated from: '<S1>/Unit Delay1' */
  ASW_OBD_DW.bitsForTID1.UnitDelay1_24_DSTATE =
    ASW_OBD_B.bitsForTID1.LogicalOperator1_c3mb;

  /* Update for UnitDelay generated from: '<S1>/Unit Delay1' */
  ASW_OBD_DW.bitsForTID1.UnitDelay1_25_DSTATE =
    ASW_OBD_B.bitsForTID1.LogicalOperator_kubn;

  /* Update for UnitDelay generated from: '<S1>/Unit Delay1' */
  ASW_OBD_DW.bitsForTID1.UnitDelay1_5_DSTATE = ASW_OBD_B.RelationalOperator1;
}


/*
 * File trailer for generated code.
 *
 * [EOF]
 */
/*
 * File: ASW_PhCurrGen.c
 *
 * Code generated for Simulink model 'ASW_PhCurrGen'.
 *
 * Model version                  : 6.173
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Jan 14 13:34:09 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 * */

/* Named constants for Chart: '<S53>/sfc_MotoSTMHybr' */
#define IN_CLOSED_LOOP                 ((uint8)1U)
#define IN_NO_ACTIVE_CHILD             ((uint8)0U)
#define IN_OFF                         ((uint8)2U)
#define IN_OPEN_LOOP                   ((uint8)3U)

const BUS_PHCURRGEN_SLW_TASK_OUT ASW_PhCurrGen_rtZBUS_PHCURRGEN_SLW_TASK_OUT = {
  {
    0, 0 }
  ,                                    /* s16_iRefDaxQaxCurr */
  OFF                                  /* enm_stMotoSt */
};                                     /* BUS_PHCURRGEN_SLW_TASK_OUT ground */

/* Exported block signals */
BUS_PHCURRGEN_SLW_TASK_IN busPhCurrGen_SlwTaskIn;/* '<Root>/busPhCurrGen_SlwTaskIn' */
BUS_PHCURRGEN_SLW_TASK_OUT busPhCurrGen_SlwTaskOut;/* '<S56>/Bus Creator1' */

/* Block signals (default storage) */
B_ASW_PhCurrGen ASW_PhCurrGen_B;

/* Block states (default storage) */
DW_ASW_PhCurrGen ASW_PhCurrGen_DW;

/* Real-time model */
static RT_MODEL_ASW_PhCurrGen ASW_PhCurrGen_M_;
RT_MODEL_ASW_PhCurrGen *const ASW_PhCurrGen_M = &ASW_PhCurrGen_M_;
const BUS_PHCURRGEN_SLW_TASK_IN ASW_PhCurrGen_rtZBUS_PHCURRGEN_ = { 0,/* s16_nRefElecSpd */
  0,                                   /* s16_nActElecSpd */
  0,                                   /* s16_nRmpRefElecSpd */
  0,                                   /* s16_trqRefTqLim */
  false,                               /* bol_flgShOffFlg */
  false,                               /* bol_enPosSCDCalibEnFlg */
  0,                                   /* s16_trqPosSCDCalibRefTq */
  0U                                   /* enm_modeAgEvalMode */
};

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */



/* Output and update for atomic system: '<Root>/PhCurrGen_SlwTask' */
void PhCurrGen_SlwTask(void)
{
  sint32 i;
  sint32 i_0;
  sint32 rtb_DataTypeConversion;
  sint32 rtb_DataTypeConversion1;
  sint32 rtb_Sum;
  sint32 rtb_Switch;
  sint32 rtb_Switch1;
  sint32 rtb_Switch2;
  sint32 rtb_lb_propActn;
  dt_SpdCtrlPropGain_u16p12b0 tmp;
  dt_Standardize_s16p15b0 rtb_VectorConcatenate[20];
  dt_Standardize_s16p15b0 rtb_Add;
  dt_Standardize_s16p15b0 rtb_Add1;
  dt_Standardize_s16p15b0 rtb_DataTypeConversion2_hrkx;
  dt_Standardize_s16p15b0 rtb_DataTypeConversion2_nzfu;
  dt_Standardize_s16p15b0 rtb_Divide_egxj;
  dt_Standardize_s16p15b0 rtb_Merge2;
  dt_Standardize_s16p15b0 rtb_Saturation1_phnk;
  dt_Standardize_s16p15b0 rtb_Saturation2;
  dt_Standardize_s16p15b0 rtb_Saturation3;
  dt_Standardize_s16p15b0 rtb_Saturation4;
  dt_Standardize_s16p15b0 rtb_Switch1_iv22;
  dt_Standardize_s16p15b0 rtb_VectorConcatenate_0;
  dt_Standardize_u16p15b0 rtb_Gain2;
  dt_Standardize_u16p15b0 rtb_Saturation1;
  sint16 maxV;
  sint16 rtb_Add2;
  sint16 rtb_DataTypeConversion1_bu1w;
  sint16 rtb_DataTypeConversion_c14a;
  sint16 rtb_Divide2;
  sint16 rtb_Sum_mxox;
  sint16 rtb_Switch2_m2rf;
  sint16 tmp_1;
  sint16 tmp_2;
  ENM_MOTO_STATUS rtb_enm_stMotoSt;
  uint8 tmp_0;
  boolean guard1;
  boolean guard2;
  boolean guard3;
  boolean guard4;
  boolean guard5;
  boolean out;
  boolean rtb_Compare_oo4d;
  boolean rtb_LogicalOperator;

  /* Saturate: '<S18>/Saturation4' incorporates:
   *  Inport: '<Root>/busPhCurrGen_SlwTaskIn'
   */
  if (busPhCurrGen_SlwTaskIn.s16_trqRefTqLim >= -32767) {
    rtb_Saturation4 = busPhCurrGen_SlwTaskIn.s16_trqRefTqLim;
  } else {
    rtb_Saturation4 = -32767;
  }

  /* End of Saturate: '<S18>/Saturation4' */

  /* DataTypeConversion: '<S30>/Data Type Conversion' incorporates:
   *  Saturate: '<S18>/Saturation4'
   */
  rtb_DataTypeConversion_c14a = (sint16)(rtb_Saturation4 >> 1);

  /* Saturate: '<S53>/Saturation2' incorporates:
   *  Inport: '<Root>/busPhCurrGen_SlwTaskIn'
   */
  if (busPhCurrGen_SlwTaskIn.s16_nRefElecSpd >= -32767) {
    rtb_Saturation2 = busPhCurrGen_SlwTaskIn.s16_nRefElecSpd;
  } else {
    rtb_Saturation2 = -32767;
  }

  /* End of Saturate: '<S53>/Saturation2' */

  /* Saturate: '<S53>/Saturation1' incorporates:
   *  Inport: '<Root>/busPhCurrGen_SlwTaskIn'
   */
  if (busPhCurrGen_SlwTaskIn.s16_nActElecSpd >= -32767) {
    rtb_Saturation1_phnk = busPhCurrGen_SlwTaskIn.s16_nActElecSpd;
  } else {
    rtb_Saturation1_phnk = -32767;
  }

  /* End of Saturate: '<S53>/Saturation1' */

  /* Saturate: '<S53>/Saturation3' incorporates:
   *  Inport: '<Root>/busPhCurrGen_SlwTaskIn'
   */
  if (busPhCurrGen_SlwTaskIn.s16_nRmpRefElecSpd >= -32767) {
    rtb_Saturation3 = busPhCurrGen_SlwTaskIn.s16_nRmpRefElecSpd;
  } else {
    rtb_Saturation3 = -32767;
  }

  /* End of Saturate: '<S53>/Saturation3' */

  /* Chart: '<S53>/sfc_MotoSTMHybr' incorporates:
   *  Inport: '<Root>/busPhCurrGen_SlwTaskIn'
   *  Saturate: '<S53>/Saturation1'
   *  Saturate: '<S53>/Saturation2'
   *  Saturate: '<S53>/Saturation3'
   *  UnitDelay: '<S53>/Unit Delay19'
   */
  /* Gateway: PhCurrGen_SlwTask/vrs_MotoSTM/rss_MotoSTMHybr/sfc_MotoSTMHybr */
  /* During: PhCurrGen_SlwTask/vrs_MotoSTM/rss_MotoSTMHybr/sfc_MotoSTMHybr */
  if (ASW_PhCurrGen_DW.is_active_c1_ASW_PhCurrGen == 0U) {
    /* Entry: PhCurrGen_SlwTask/vrs_MotoSTM/rss_MotoSTMHybr/sfc_MotoSTMHybr */
    ASW_PhCurrGen_DW.is_active_c1_ASW_PhCurrGen = 1U;

    /* Entry Internal: PhCurrGen_SlwTask/vrs_MotoSTM/rss_MotoSTMHybr/sfc_MotoSTMHybr */
    /* Transition: '<S54>:2' */
    ASW_PhCurrGen_DW.is_c1_ASW_PhCurrGen = IN_OFF;

    /* Entry 'OFF': '<S54>:1' */
    rtb_enm_stMotoSt = OFF;
  } else {
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    switch (ASW_PhCurrGen_DW.is_c1_ASW_PhCurrGen) {
     case IN_CLOSED_LOOP:
      rtb_enm_stMotoSt = CLOSED_LOOP;

      /* During 'CLOSED_LOOP': '<S54>:4' */
      if (rtb_Saturation2 == 0) {
        if (rtb_Saturation1_phnk < 0) {
          i_0 = -rtb_Saturation1_phnk;
          if ((-rtb_Saturation1_phnk) > 32767) {
            i_0 = 32767;
          }

          maxV = (sint16)i_0;
        } else {
          maxV = rtb_Saturation1_phnk;
        }

        if (Gs16_nShOffActElecSpd_C < 0) {
          i_0 = -Gs16_nShOffActElecSpd_C;
          if ((-Gs16_nShOffActElecSpd_C) > 32767) {
            i_0 = 32767;
          }

          rtb_VectorConcatenate_0 = (sint16)i_0;
        } else {
          rtb_VectorConcatenate_0 = Gs16_nShOffActElecSpd_C;
        }

        if ((maxV < rtb_VectorConcatenate_0) &&
            (!busPhCurrGen_SlwTaskIn.bol_enPosSCDCalibEnFlg)) {
          guard2 = true;
        } else {
          guard4 = true;
        }
      } else {
        guard4 = true;
      }
      break;

     case IN_OFF:
      rtb_enm_stMotoSt = OFF;

      /* During 'OFF': '<S54>:1' */
      if (rtb_Saturation2 < 0) {
        i_0 = -rtb_Saturation2;
        if ((-rtb_Saturation2) > 32767) {
          i_0 = 32767;
        }

        maxV = (sint16)i_0;
      } else {
        maxV = rtb_Saturation2;
      }

      if (((maxV > 0) || (busPhCurrGen_SlwTaskIn.bol_enPosSCDCalibEnFlg)) &&
          (!busPhCurrGen_SlwTaskIn.bol_flgShOffFlg)) {
        /* Transition: '<S54>:9' */
        /* Transition: '<S54>:125' */
        if (busPhCurrGen_SlwTaskIn.enm_modeAgEvalMode != SENSORLESS) {
          /* Transition: '<S54>:121' */
          ASW_PhCurrGen_DW.is_c1_ASW_PhCurrGen = IN_CLOSED_LOOP;

          /* Entry 'CLOSED_LOOP': '<S54>:4' */
          rtb_enm_stMotoSt = CLOSED_LOOP;
        } else {
          /* Transition: '<S54>:110' */
          ASW_PhCurrGen_DW.is_c1_ASW_PhCurrGen = IN_OPEN_LOOP;

          /* Entry 'OPEN_LOOP': '<S54>:3' */
          rtb_enm_stMotoSt = OPEN_LOOP;
        }
      }
      break;

     default:
      rtb_enm_stMotoSt = OPEN_LOOP;

      /* During 'OPEN_LOOP': '<S54>:3' */
      if ((rtb_Saturation2 != 0) &&
          (ASW_PhCurrGen_DW.bitsForTID1.UnitDelay19_DSTATE)) {
        if (rtb_Saturation3 < 0) {
          i_0 = -rtb_Saturation3;
          if ((-rtb_Saturation3) > 32767) {
            i_0 = 32767;
          }

          maxV = (sint16)i_0;
        } else {
          maxV = rtb_Saturation3;
        }

        if (Gs16_nMinSenlRefElecSpd_C < 0) {
          i_0 = -Gs16_nMinSenlRefElecSpd_C;
          if ((-Gs16_nMinSenlRefElecSpd_C) > 32767) {
            i_0 = 32767;
          }

          rtb_VectorConcatenate_0 = (sint16)i_0;
        } else {
          rtb_VectorConcatenate_0 = Gs16_nMinSenlRefElecSpd_C;
        }

        if (maxV >= rtb_VectorConcatenate_0) {
          guard1 = true;
        } else {
          guard3 = true;
        }
      } else {
        guard3 = true;
      }
      break;
    }

    if (guard4) {
      if (busPhCurrGen_SlwTaskIn.bol_flgShOffFlg) {
        guard2 = true;
      } else if (rtb_Saturation2 != 0) {
        if (rtb_Saturation3 < 0) {
          i_0 = -rtb_Saturation3;
          if ((-rtb_Saturation3) > 32767) {
            i_0 = 32767;
          }

          maxV = (sint16)i_0;
        } else {
          maxV = rtb_Saturation3;
        }

        if (Gs16_nMinSenlRefElecSpd_C < 0) {
          i_0 = -Gs16_nMinSenlRefElecSpd_C;
          if ((-Gs16_nMinSenlRefElecSpd_C) > 32767) {
            i_0 = 32767;
          }

          rtb_VectorConcatenate_0 = (sint16)i_0;
        } else {
          rtb_VectorConcatenate_0 = Gs16_nMinSenlRefElecSpd_C;
        }

        if (maxV < rtb_VectorConcatenate_0) {
          if (rtb_Saturation1_phnk < 0) {
            i_0 = -rtb_Saturation1_phnk;
            if ((-rtb_Saturation1_phnk) > 32767) {
              i_0 = 32767;
            }

            maxV = (sint16)i_0;
          } else {
            maxV = rtb_Saturation1_phnk;
          }

          if (Gs16_nOpnLpConvActElecSpd_C < 0) {
            i_0 = -Gs16_nOpnLpConvActElecSpd_C;
            if ((-Gs16_nOpnLpConvActElecSpd_C) > 32767) {
              i_0 = 32767;
            }

            rtb_VectorConcatenate_0 = (sint16)i_0;
          } else {
            rtb_VectorConcatenate_0 = Gs16_nOpnLpConvActElecSpd_C;
          }

          if ((maxV < rtb_VectorConcatenate_0) &&
              (busPhCurrGen_SlwTaskIn.enm_modeAgEvalMode == SENSORLESS)) {
            /* Transition: '<S54>:32' */
            ASW_PhCurrGen_DW.is_c1_ASW_PhCurrGen = IN_OPEN_LOOP;

            /* Entry 'OPEN_LOOP': '<S54>:3' */
            rtb_enm_stMotoSt = OPEN_LOOP;
          }
        }
      }
    }

    if (guard3) {
      if (busPhCurrGen_SlwTaskIn.enm_modeAgEvalMode != SENSORLESS) {
        guard1 = true;
      } else {
        out = false;
        guard5 = false;
        if (rtb_Saturation2 == 0) {
          if (rtb_Saturation1_phnk < 0) {
            i_0 = -rtb_Saturation1_phnk;
            if ((-rtb_Saturation1_phnk) > 32767) {
              i_0 = 32767;
            }

            maxV = (sint16)i_0;
          } else {
            maxV = rtb_Saturation1_phnk;
          }

          if (Gs16_nShOffActElecSpd_C < 0) {
            i_0 = -Gs16_nShOffActElecSpd_C;
            if ((-Gs16_nShOffActElecSpd_C) > 32767) {
              i_0 = 32767;
            }

            rtb_VectorConcatenate_0 = (sint16)i_0;
          } else {
            rtb_VectorConcatenate_0 = Gs16_nShOffActElecSpd_C;
          }

          if ((maxV < rtb_VectorConcatenate_0) &&
              (!busPhCurrGen_SlwTaskIn.bol_enPosSCDCalibEnFlg)) {
            out = true;
          } else {
            guard5 = true;
          }
        } else {
          guard5 = true;
        }

        if (guard5) {
          if (busPhCurrGen_SlwTaskIn.bol_flgShOffFlg) {
            out = true;
          }
        }

        if (out) {
          /* Transition: '<S54>:111' */
          ASW_PhCurrGen_DW.is_c1_ASW_PhCurrGen = IN_OFF;

          /* Entry 'OFF': '<S54>:1' */
          rtb_enm_stMotoSt = OFF;
        }
      }
    }

    if (guard2) {
      /* Transition: '<S54>:16' */
      /* Transition: '<S54>:15' */
      ASW_PhCurrGen_DW.is_c1_ASW_PhCurrGen = IN_OFF;

      /* Entry 'OFF': '<S54>:1' */
      rtb_enm_stMotoSt = OFF;
    }

    if (guard1) {
      /* Transition: '<S54>:28' */
      ASW_PhCurrGen_DW.is_c1_ASW_PhCurrGen = IN_CLOSED_LOOP;

      /* Entry 'CLOSED_LOOP': '<S54>:4' */
      rtb_enm_stMotoSt = CLOSED_LOOP;
    }
  }

  /* End of Chart: '<S53>/sfc_MotoSTMHybr' */

  /* Logic: '<S18>/Logical Operator' incorporates:
   *  Constant: '<S19>/Constant'
   *  Inport: '<Root>/busPhCurrGen_SlwTaskIn'
   *  RelationalOperator: '<S19>/Compare'
   */
  rtb_LogicalOperator = ((rtb_enm_stMotoSt != CLOSED_LOOP) ||
    (busPhCurrGen_SlwTaskIn.bol_enPosSCDCalibEnFlg));

  /* DataTypeConversion: '<S36>/Data Type Conversion' incorporates:
   *  Saturate: '<S18>/Saturation4'
   */
  rtb_DataTypeConversion = (rtb_Saturation4 << 12);

  /* DataTypeConversion: '<S36>/Data Type Conversion1' incorporates:
   *  Gain: '<S18>/Gain1'
   *  Saturate: '<S18>/Saturation4'
   */
  rtb_DataTypeConversion1 = (((dt_Standardize_s16p15b0)(-rtb_Saturation4)) << 12);

  /* Switch: '<S47>/Switch2' incorporates:
   *  DataTypeConversion: '<S36>/Data Type Conversion'
   *  DataTypeConversion: '<S36>/Data Type Conversion1'
   *  RelationalOperator: '<S47>/Relational Operator2'
   */
  if (rtb_DataTypeConversion > rtb_DataTypeConversion1) {
    /* Saturate: '<S25>/Saturation' incorporates:
     *  Constant: '<S25>/Constant'
     */
    if (Gu16_facSpdCtlKp_C <= 32768) {
      tmp = Gu16_facSpdCtlKp_C;
    } else {
      tmp = 32768U;
    }

    /* Saturate: '<S18>/Saturation1' incorporates:
     *  Inport: '<Root>/busPhCurrGen_SlwTaskIn'
     */
    if (busPhCurrGen_SlwTaskIn.s16_nRmpRefElecSpd >= -32767) {
      maxV = busPhCurrGen_SlwTaskIn.s16_nRmpRefElecSpd;
    } else {
      maxV = -32767;
    }

    /* Saturate: '<S18>/Saturation2' incorporates:
     *  Inport: '<Root>/busPhCurrGen_SlwTaskIn'
     */
    if (busPhCurrGen_SlwTaskIn.s16_nActElecSpd >= -32767) {
      rtb_VectorConcatenate_0 = busPhCurrGen_SlwTaskIn.s16_nActElecSpd;
    } else {
      rtb_VectorConcatenate_0 = -32767;
    }

    /* Product: '<S36>/Product' incorporates:
     *  Saturate: '<S18>/Saturation1'
     *  Saturate: '<S18>/Saturation2'
     *  Saturate: '<S25>/Saturation'
     *  Sum: '<S22>/Add1'
     */
    rtb_lb_propActn = ((tmp * ((maxV - rtb_VectorConcatenate_0) >> 1)) << 1);

    /* Switch: '<S47>/Switch1' incorporates:
     *  Product: '<S36>/Product'
     *  RelationalOperator: '<S47>/Relational Operator1'
     */
    if (rtb_lb_propActn <= rtb_DataTypeConversion) {
      /* Switch: '<S47>/Switch' incorporates:
       *  RelationalOperator: '<S47>/Relational Operator'
       */
      if (rtb_lb_propActn >= rtb_DataTypeConversion1) {
        /* Switch: '<S47>/Switch2' */
        rtb_Switch2 = rtb_lb_propActn;
      } else {
        /* Switch: '<S47>/Switch2' */
        rtb_Switch2 = rtb_DataTypeConversion1;
      }

      /* End of Switch: '<S47>/Switch' */
    } else {
      /* Switch: '<S47>/Switch2' */
      rtb_Switch2 = rtb_DataTypeConversion;
    }

    /* End of Switch: '<S47>/Switch1' */
  } else {
    rtb_Switch2 = rtb_DataTypeConversion;
  }

  /* End of Switch: '<S47>/Switch2' */

  /* DataTypeConversion: '<S36>/Data Type Conversion2' incorporates:
   *  Switch: '<S47>/Switch2'
   */
  rtb_DataTypeConversion2_hrkx = (dt_Standardize_s16p15b0)(rtb_Switch2 >> 12);

  /* Switch: '<S36>/Switch1' incorporates:
   *  Constant: '<S30>/Constant4'
   *  DataTypeConversion: '<S36>/Data Type Conversion2'
   *  Sum: '<S36>/Add'
   */
  if (rtb_LogicalOperator) {
    rtb_Switch1_iv22 = 0;

    /* Switch: '<S38>/Switch1' incorporates:
     *  Constant: '<S30>/Constant4'
     *  Constant: '<S38>/Constant'
     *  Switch: '<S36>/Switch1'
     */
    rtb_Switch1 = 0;
  } else {
    rtb_Switch1_iv22 = rtb_DataTypeConversion2_hrkx;

    /* Saturate: '<S27>/Saturation' incorporates:
     *  Constant: '<S27>/Constant'
     *  DataTypeConversion: '<S36>/Data Type Conversion2'
     *  Sum: '<S36>/Add'
     *  Switch: '<S36>/Switch1'
     *  Switch: '<S38>/Switch1'
     */
    if (Gu16_facSpdCtlKi_C <= 51198) {
      tmp = Gu16_facSpdCtlKi_C;
    } else {
      tmp = 51198U;
    }

    /* Switch: '<S38>/Switch1' incorporates:
     *  Constant: '<S22>/Constant5'
     *  DataTypeConversion: '<S36>/Data Type Conversion2'
     *  Product: '<S38>/Product1'
     *  Product: '<S38>/Product2'
     *  Saturate: '<S27>/Saturation'
     *  Sum: '<S30>/Add1'
     *  Sum: '<S30>/Add3'
     *  UnitDelay: '<S30>/Unit Delay'
     *  UnitDelay: '<S30>/Unit Delay1'
     */
    rtb_Switch1 = mul_ssu32_loSR(((sint16)(rtb_DataTypeConversion2_hrkx +
      (((sint16)((ASW_PhCurrGen_DW.UnitDelay_DSTATE_gwvm -
                  (ASW_PhCurrGen_DW.UnitDelay1_DSTATE << 1)) >> 1)) << 1))) *
      41943, tmp, 15U);
  }

  /* End of Switch: '<S36>/Switch1' */

  /* RelationalOperator: '<S64>/Compare' incorporates:
   *  Constant: '<S64>/Constant'
   *  RelationalOperator: '<S19>/Compare'
   */
  rtb_Compare_oo4d = (rtb_enm_stMotoSt != OPEN_LOOP);

  /* Switch: '<S68>/Switch1' incorporates:
   *  Constant: '<S63>/Cu16_tiSlwTaskSmpTi'
   *  Constant: '<S63>/Gs16_facStrtUpTqRiseRate_C'
   *  Constant: '<S68>/Constant'
   *  Logic: '<S68>/NOT'
   *  Product: '<S68>/Product1'
   */
  if (!rtb_Compare_oo4d) {
    maxV = (sint16)((Gs16_facStrtUpTqRiseRate_C * 41943) >> 15);
  } else {
    maxV = 0;
  }

  /* Switch: '<S73>/Switch1' incorporates:
   *  Constant: '<S73>/Constant1'
   *  UnitDelay: '<S73>/Unit Delay1'
   */
  if (ASW_PhCurrGen_DW.bitsForTID1.UnitDelay1_DSTATE_m2pk) {
    out = rtb_Compare_oo4d;
  } else {
    out = true;
  }

  /* Switch: '<S73>/Switch' incorporates:
   *  Switch: '<S73>/Switch1'
   *  UnitDelay: '<S63>/Unit Delay2'
   *  UnitDelay: '<S73>/Unit Delay'
   */
  if (out) {
    rtb_VectorConcatenate_0 = ASW_PhCurrGen_DW.UnitDelay2_DSTATE;
  } else {
    rtb_VectorConcatenate_0 = ASW_PhCurrGen_DW.UnitDelay_DSTATE_cvdq;
  }

  /* Sum: '<S68>/Sum' incorporates:
   *  Switch: '<S68>/Switch1'
   *  Switch: '<S73>/Switch'
   */
  rtb_Sum_mxox = (sint16)((maxV << 6) + rtb_VectorConcatenate_0);

  /* Switch: '<S72>/Switch2' incorporates:
   *  Constant: '<S63>/Gs16_trqMaxStrtUpTq_C'
   *  Gain: '<S63>/Gain1'
   *  RelationalOperator: '<S72>/Relational Operator2'
   */
  if (Gs16_trqMaxStrtUpTq_C > ((dt_Standardize_s16p15b0)(-Gs16_trqMaxStrtUpTq_C)))
  {
    /* Switch: '<S72>/Switch1' incorporates:
     *  RelationalOperator: '<S72>/Relational Operator1'
     *  Sum: '<S68>/Sum'
     */
    if (rtb_Sum_mxox <= Gs16_trqMaxStrtUpTq_C) {
      /* Switch: '<S72>/Switch' incorporates:
       *  RelationalOperator: '<S72>/Relational Operator'
       */
      if (rtb_Sum_mxox >= ((dt_Standardize_s16p15b0)(-Gs16_trqMaxStrtUpTq_C))) {
        /* Switch: '<S72>/Switch2' */
        rtb_Switch2_m2rf = rtb_Sum_mxox;
      } else {
        /* Switch: '<S72>/Switch2' */
        rtb_Switch2_m2rf = (dt_Standardize_s16p15b0)(-Gs16_trqMaxStrtUpTq_C);
      }

      /* End of Switch: '<S72>/Switch' */
    } else {
      /* Switch: '<S72>/Switch2' */
      rtb_Switch2_m2rf = Gs16_trqMaxStrtUpTq_C;
    }

    /* End of Switch: '<S72>/Switch1' */
  } else {
    rtb_Switch2_m2rf = Gs16_trqMaxStrtUpTq_C;
  }

  /* End of Switch: '<S72>/Switch2' */

  /* SwitchCase: '<S23>/Switch Case1' incorporates:
   *  DataTypeConversion: '<S23>/Data Type Conversion2'
   */
  switch (rtb_enm_stMotoSt) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S23>/sas_OffCs' incorporates:
     *  ActionPort: '<S51>/Action Port'
     */
    /* SignalConversion generated from: '<S51>/s16_trqInitTqOffCs' incorporates:
     *  Constant: '<S51>/Gs16_trqInitCondTq_C'
     *  Merge: '<S23>/Merge2'
     */
    rtb_Merge2 = Gs16_trqInitCondTq_C;

    /* End of Outputs for SubSystem: '<S23>/sas_OffCs' */
    break;

   case 1:
    /* Saturate: '<S18>/Saturation3' incorporates:
     *  Switch: '<S68>/Switch'
     *  Switch: '<S72>/Switch2'
     */
    if (rtb_Switch2_m2rf >= -32767) {
      /* Outputs for IfAction SubSystem: '<S23>/sas_OpnLpCs' incorporates:
       *  ActionPort: '<S52>/Action Port'
       */
      /* SignalConversion generated from: '<S52>/s16_trqStrtUpRefTq' incorporates:
       *  Merge: '<S23>/Merge2'
       */
      rtb_Merge2 = rtb_Switch2_m2rf;

      /* End of Outputs for SubSystem: '<S23>/sas_OpnLpCs' */
    } else {
      /* Outputs for IfAction SubSystem: '<S23>/sas_OpnLpCs' incorporates:
       *  ActionPort: '<S52>/Action Port'
       */
      /* SignalConversion generated from: '<S52>/s16_trqStrtUpRefTq' incorporates:
       *  Merge: '<S23>/Merge2'
       */
      rtb_Merge2 = -32767;

      /* End of Outputs for SubSystem: '<S23>/sas_OpnLpCs' */
    }

    /* End of Saturate: '<S18>/Saturation3' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S23>/sas_ClsLpCs' incorporates:
     *  ActionPort: '<S49>/Action Port'
     */
    /* SignalConversion: '<S49>/Signal Copy' incorporates:
     *  Constant: '<S49>/Gs16_trqInitCondTq_C'
     *  Merge: '<S23>/Merge2'
     */
    rtb_Merge2 = Gs16_trqInitCondTq_C;

    /* End of Outputs for SubSystem: '<S23>/sas_ClsLpCs' */
    break;
  }

  /* End of SwitchCase: '<S23>/Switch Case1' */

  /* Switch: '<S44>/Switch' incorporates:
   *  DataTypeConversion: '<S38>/Data Type Conversion2'
   *  Switch: '<S23>/Switch1'
   *  Switch: '<S44>/Switch1'
   *  UnitDelay: '<S44>/Unit Delay'
   *  UnitDelay: '<S44>/Unit Delay1'
   */
  if ((!ASW_PhCurrGen_DW.bitsForTID1.UnitDelay1_DSTATE_jjio) ||
      rtb_LogicalOperator) {
    /* Switch: '<S23>/Switch1' incorporates:
     *  Constant: '<S48>/Constant'
     *  Merge: '<S23>/Merge2'
     *  RelationalOperator: '<S19>/Compare'
     *  RelationalOperator: '<S48>/Compare'
     */
    if (rtb_enm_stMotoSt != OFF) {
      /* Switch: '<S23>/Switch2' incorporates:
       *  Inport: '<Root>/busPhCurrGen_SlwTaskIn'
       *  Merge: '<S23>/Merge2'
       */
      if (busPhCurrGen_SlwTaskIn.bol_enPosSCDCalibEnFlg) {
        /* Saturate: '<S18>/Saturation9' */
        if (busPhCurrGen_SlwTaskIn.s16_trqPosSCDCalibRefTq >= -32767) {
          maxV = busPhCurrGen_SlwTaskIn.s16_trqPosSCDCalibRefTq;
        } else {
          maxV = -32767;
        }

        /* End of Saturate: '<S18>/Saturation9' */
      } else {
        maxV = rtb_Merge2;
      }

      /* End of Switch: '<S23>/Switch2' */
    } else {
      maxV = rtb_Merge2;
    }

    rtb_Switch = (maxV << 16);
  } else {
    rtb_Switch = ASW_PhCurrGen_DW.UnitDelay_DSTATE;
  }

  /* End of Switch: '<S44>/Switch' */

  /* Sum: '<S38>/Sum' incorporates:
   *  Switch: '<S38>/Switch1'
   *  Switch: '<S44>/Switch'
   */
  rtb_Sum = rtb_Switch1 + rtb_Switch;

  /* Sum: '<S30>/Add2' incorporates:
   *  DataTypeConversion: '<S38>/Data Type Conversion'
   *  Sum: '<S38>/Sum'
   *  Switch: '<S36>/Switch1'
   *  Switch: '<S38>/Switch'
   */
  rtb_Add2 = (sint16)((rtb_Switch1_iv22 + (rtb_Sum >> 16)) >> 1);

  /* DataTypeConversion: '<S30>/Data Type Conversion1' incorporates:
   *  Gain: '<S18>/Gain1'
   *  Saturate: '<S18>/Saturation4'
   */
  rtb_DataTypeConversion1_bu1w = (sint16)(((dt_Standardize_s16p15b0)
    (-rtb_Saturation4)) >> 1);

  /* Switch: '<S35>/Switch2' incorporates:
   *  DataTypeConversion: '<S30>/Data Type Conversion'
   *  DataTypeConversion: '<S30>/Data Type Conversion1'
   *  RelationalOperator: '<S35>/Relational Operator2'
   */
  if (rtb_DataTypeConversion_c14a > rtb_DataTypeConversion1_bu1w) {
    /* Switch: '<S35>/Switch1' incorporates:
     *  RelationalOperator: '<S35>/Relational Operator1'
     *  Sum: '<S30>/Add2'
     */
    if (rtb_Add2 <= rtb_DataTypeConversion_c14a) {
      /* Switch: '<S35>/Switch' incorporates:
       *  RelationalOperator: '<S35>/Relational Operator'
       */
      if (rtb_Add2 >= rtb_DataTypeConversion1_bu1w) {
        maxV = rtb_Add2;
      } else {
        maxV = rtb_DataTypeConversion1_bu1w;
      }

      /* End of Switch: '<S35>/Switch' */
    } else {
      maxV = rtb_DataTypeConversion_c14a;
    }

    /* End of Switch: '<S35>/Switch1' */
  } else {
    maxV = rtb_DataTypeConversion_c14a;
  }

  /* DataTypeConversion: '<S30>/Data Type Conversion2' incorporates:
   *  Switch: '<S35>/Switch2'
   */
  rtb_DataTypeConversion2_nzfu = (dt_Standardize_s16p15b0)(maxV << 1);

  /* Saturate: '<S2>/Saturation' incorporates:
   *  DataTypeConversion: '<S30>/Data Type Conversion2'
   */
  if (rtb_DataTypeConversion2_nzfu >= -32767) {
    maxV = rtb_DataTypeConversion2_nzfu;
  } else {
    maxV = -32767;
  }

  /* Saturate: '<S17>/Saturation' incorporates:
   *  Constant: '<S17>/Constant'
   */
  if (Gu8_numPPNum_C > 6) {
    tmp_0 = 6U;
  } else if (Gu8_numPPNum_C < 2) {
    tmp_0 = 2U;
  } else {
    tmp_0 = Gu8_numPPNum_C;
  }

  /* Product: '<S9>/Divide2' incorporates:
   *  Gain: '<S9>/Gain1'
   *  Saturate: '<S17>/Saturation'
   *  Saturate: '<S2>/Saturation'
   */
  rtb_Divide2 = (sint16)((((21845 * maxV) >> 15) << 1) / tmp_0);

  /* Saturate: '<S2>/Saturation1' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  if (Gu16_psiPermMagFlx_C > 10922) {
    rtb_Saturation1 = 10922U;
  } else if (Gu16_psiPermMagFlx_C < 55) {
    rtb_Saturation1 = 55U;
  } else {
    rtb_Saturation1 = Gu16_psiPermMagFlx_C;
  }

  /* End of Saturate: '<S2>/Saturation1' */

  /* Abs: '<S9>/Abs' incorporates:
   *  Product: '<S9>/Divide2'
   */
  if (rtb_Divide2 < 0) {
    maxV = (sint16)(-rtb_Divide2);
  } else {
    maxV = rtb_Divide2;
  }

  /* Gain: '<S9>/Gain2' incorporates:
   *  Abs: '<S9>/Abs'
   */
  rtb_Gain2 = (dt_Standardize_u16p15b0)((18963 * maxV) >> 17);

  /* BusCreator: '<S56>/Bus Creator1' incorporates:
   *  Constant: '<S9>/Constant1'
   *  SignalConversion generated from: '<S56>/Bus Creator1'
   */
  busPhCurrGen_SlwTaskOut.s16_iRefDaxQaxCurr[0] = 0;

  /* Switch: '<S9>/Switch' incorporates:
   *  Gain: '<S9>/Gain2'
   *  RelationalOperator: '<S9>/Relational Operator'
   *  Saturate: '<S2>/Saturation1'
   */
  if (rtb_Saturation1 >= rtb_Gain2) {
    tmp = rtb_Saturation1;
  } else {
    tmp = rtb_Gain2;
  }

  /* BusCreator: '<S56>/Bus Creator1' incorporates:
   *  Gain: '<S9>/Gain'
   *  Product: '<S9>/Divide'
   *  Product: '<S9>/Divide2'
   *  Switch: '<S9>/Switch'
   */
  busPhCurrGen_SlwTaskOut.s16_iRefDaxQaxCurr[1] = (dt_Standardize_s16p15b0)
    ((rtb_Divide2 << 12) / ((uint16)((62915U * tmp) >> 15)));
  busPhCurrGen_SlwTaskOut.enm_stMotoSt = rtb_enm_stMotoSt;

  /* Saturate: '<S57>/Saturation2' incorporates:
   *  Inport: '<Root>/busPhCurrGen_SlwTaskIn'
   */
  if (busPhCurrGen_SlwTaskIn.s16_nActElecSpd >= -32767) {
    /* Saturate: '<S57>/Saturation2' */
    ASW_PhCurrGen_B.Saturation2 = busPhCurrGen_SlwTaskIn.s16_nActElecSpd;
  } else {
    /* Saturate: '<S57>/Saturation2' */
    ASW_PhCurrGen_B.Saturation2 = -32767;
  }

  /* End of Saturate: '<S57>/Saturation2' */

  /* SignalConversion generated from: '<S61>/Vector Concatenate' incorporates:
   *  Saturate: '<S57>/Saturation2'
   */
  rtb_VectorConcatenate[0] = ASW_PhCurrGen_B.Saturation2;

  /* MinMax: '<S57>/Max' incorporates:
   *  Saturate: '<S57>/Saturation2'
   *  SignalConversion generated from: '<S61>/Vector Concatenate'
   */
  maxV = ASW_PhCurrGen_B.Saturation2;
  for (i_0 = 0; i_0 < 19; i_0++) {
    /* S-Function (sfix_udelay): '<S61>/Tapped Delay' */
    rtb_VectorConcatenate_0 = ASW_PhCurrGen_DW.TappedDelay_DWORK1[i_0];
    rtb_VectorConcatenate[i_0 + 1] = rtb_VectorConcatenate_0;

    /* MinMax: '<S57>/Max' incorporates:
     *  Concatenate: '<S61>/Vector Concatenate'
     */
    if (maxV >= rtb_VectorConcatenate_0) {
    } else {
      maxV = rtb_VectorConcatenate_0;
    }
  }

  /* Sum: '<S61>/Sum of Elements' incorporates:
   *  Concatenate: '<S61>/Vector Concatenate'
   */
  i_0 = 0;
  for (i = 0; i < 20; i++) {
    i_0 += rtb_VectorConcatenate[i];
  }

  /* Product: '<S61>/Divide' incorporates:
   *  Sum: '<S61>/Sum of Elements'
   */
  rtb_Divide_egxj = (dt_Standardize_s16p15b0)((i_0 >> 1) / 10);

  /* Sum: '<S57>/Add' incorporates:
   *  MinMax: '<S57>/Max'
   *  Product: '<S61>/Divide'
   */
  rtb_Add = (dt_Standardize_s16p15b0)(maxV - rtb_Divide_egxj);

  /* MinMax: '<S57>/Max1' incorporates:
   *  Concatenate: '<S61>/Vector Concatenate'
   */
  maxV = rtb_VectorConcatenate[0];
  for (i_0 = 0; i_0 < 19; i_0++) {
    rtb_VectorConcatenate_0 = rtb_VectorConcatenate[i_0 + 1];
    if (maxV <= rtb_VectorConcatenate_0) {
    } else {
      maxV = rtb_VectorConcatenate_0;
    }
  }

  /* Sum: '<S57>/Add1' incorporates:
   *  MinMax: '<S57>/Max1'
   *  Product: '<S61>/Divide'
   */
  rtb_Add1 = (dt_Standardize_s16p15b0)(rtb_Divide_egxj - maxV);

  /* Abs: '<S57>/Abs' incorporates:
   *  Sum: '<S57>/Add'
   */
  if (rtb_Add < 0) {
    maxV = (sint16)(-rtb_Add);
  } else {
    maxV = rtb_Add;
  }

  /* Abs: '<S57>/Abs1' incorporates:
   *  Sum: '<S57>/Add1'
   */
  if (rtb_Add1 < 0) {
    rtb_VectorConcatenate_0 = (sint16)(-rtb_Add1);
  } else {
    rtb_VectorConcatenate_0 = rtb_Add1;
  }

  /* Abs: '<S57>/Abs2' incorporates:
   *  Product: '<S61>/Divide'
   */
  if (rtb_Divide_egxj < 0) {
    tmp_1 = (sint16)(-rtb_Divide_egxj);
  } else {
    tmp_1 = rtb_Divide_egxj;
  }

  /* Abs: '<S57>/Abs3' incorporates:
   *  Constant: '<S57>/Gs16_nMinStrtUpElecSpd_C'
   */
  if (Gs16_nMinStrtUpElecSpd_C < 0) {
    tmp_2 = (sint16)(-Gs16_nMinStrtUpElecSpd_C);
  } else {
    tmp_2 = Gs16_nMinStrtUpElecSpd_C;
  }

  /* Update for UnitDelay: '<S53>/Unit Delay19' incorporates:
   *  Abs: '<S57>/Abs'
   *  Abs: '<S57>/Abs1'
   *  Abs: '<S57>/Abs2'
   *  Abs: '<S57>/Abs3'
   *  Constant: '<S57>/Gs16_nStrtUpProcTolcElecSpd_C_1'
   *  Constant: '<S57>/Gs16_nStrtUpProcTolcElecSpd_C_2'
   *  Constant: '<S58>/Constant'
   *  Logic: '<S57>/AND'
   *  RelationalOperator: '<S19>/Compare'
   *  RelationalOperator: '<S57>/Relational Operator'
   *  RelationalOperator: '<S57>/Relational Operator1'
   *  RelationalOperator: '<S57>/Relational Operator2'
   *  RelationalOperator: '<S58>/Compare'
   */
  ASW_PhCurrGen_DW.bitsForTID1.UnitDelay19_DSTATE = ((((maxV <=
    Gs16_nStrtUpProcTolcElecSpd_C) && (rtb_VectorConcatenate_0 <=
    Gs16_nStrtUpProcTolcElecSpd_C)) && (tmp_1 >= tmp_2)) && (rtb_enm_stMotoSt ==
    OPEN_LOOP));

  /* Update for UnitDelay: '<S30>/Unit Delay' incorporates:
   *  DataTypeConversion: '<S30>/Data Type Conversion2'
   */
  ASW_PhCurrGen_DW.UnitDelay_DSTATE_gwvm = rtb_DataTypeConversion2_nzfu;

  /* Update for UnitDelay: '<S30>/Unit Delay1' incorporates:
   *  Sum: '<S30>/Add2'
   */
  ASW_PhCurrGen_DW.UnitDelay1_DSTATE = rtb_Add2;

  /* Saturate: '<S63>/Saturation3' incorporates:
   *  DataTypeConversion: '<S30>/Data Type Conversion2'
   */
  if (rtb_DataTypeConversion2_nzfu >= -32767) {
    /* Update for UnitDelay: '<S63>/Unit Delay2' */
    ASW_PhCurrGen_DW.UnitDelay2_DSTATE = rtb_DataTypeConversion2_nzfu;
  } else {
    /* Update for UnitDelay: '<S63>/Unit Delay2' */
    ASW_PhCurrGen_DW.UnitDelay2_DSTATE = -32767;
  }

  /* End of Saturate: '<S63>/Saturation3' */

  /* Update for UnitDelay: '<S73>/Unit Delay1' incorporates:
   *  Constant: '<S73>/Constant'
   */
  ASW_PhCurrGen_DW.bitsForTID1.UnitDelay1_DSTATE_m2pk = true;

  /* Update for UnitDelay: '<S73>/Unit Delay' incorporates:
   *  Switch: '<S68>/Switch'
   *  Switch: '<S72>/Switch2'
   */
  ASW_PhCurrGen_DW.UnitDelay_DSTATE_cvdq = rtb_Switch2_m2rf;

  /* Update for UnitDelay: '<S44>/Unit Delay1' incorporates:
   *  Constant: '<S44>/Constant'
   */
  ASW_PhCurrGen_DW.bitsForTID1.UnitDelay1_DSTATE_jjio = true;

  /* Update for UnitDelay: '<S44>/Unit Delay' incorporates:
   *  Sum: '<S38>/Sum'
   *  Switch: '<S38>/Switch'
   */
  ASW_PhCurrGen_DW.UnitDelay_DSTATE = rtb_Sum;

  /* Update for S-Function (sfix_udelay): '<S61>/Tapped Delay' incorporates:
   *  MinMax: '<S57>/Max'
   *  MinMax: '<S57>/Max1'
   *  Saturate: '<S57>/Saturation2'
   *  Sum: '<S61>/Sum of Elements'
   */
  for (i_0 = 0; i_0 < 18; i_0++) {
    ASW_PhCurrGen_DW.TappedDelay_DWORK1[i_0] =
      ASW_PhCurrGen_DW.TappedDelay_DWORK1[i_0 + 1];
  }

  ASW_PhCurrGen_DW.TappedDelay_DWORK1[18] = ASW_PhCurrGen_B.Saturation2;

  /* End of Update for S-Function (sfix_udelay): '<S61>/Tapped Delay' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * File: ASW_PhVltgGen.c
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
/* Named constants for Chart: '<S56>/sfc_FaultDebounce' */
#define IN_Confirm                     ((uint8)1U)
#define IN_Confirming                  ((uint8)2U)
#define IN_NO_ACTIVE_CHILD             ((uint8)0U)
#define IN_Repairing                   ((uint8)3U)
#define IN_Wait                        ((uint8)4U)

const BUS_PHVLTGGEN_MED_TASK_OUT ASW_PhVltgGen_rtZBUS_PHVLTGGEN_MED_TASK_OUT = {
  0U,                                  /* u16_ampDycAmp */
  0U,                                  /* u16_phiDaxQaxVltgAg */
  0U,                                  /* u16_phiActElecAg */
  0,                                   /* s16_nActElecSpd */

  {
    0, 0 }
  ,                                    /* s16_iActDaxQaxCurr */
  0,                                   /* s16_nPredActElecSpd */

  {
    0, 0 }
  ,                                    /* s16_uModulDaxQaxVltg */
  0,                                   /* s16_uRefDaxVltg */
  0U,                                  /* u16_phiSenlElecAgSensElecAgDvt */
  0U                                   /* u16_psiEstPermMagFlx */
};                                     /* BUS_PHVLTGGEN_MED_TASK_OUT ground */

/* Exported block signals */
BUS_PHVLTGGEN_MED_TASK_IN busPhVltgGen_MedTaskIn;/* '<Root>/busPhVltgGen_MedTaskIn' */
BUS_PHVLTGGEN_MED_TASK_OUT busPhVltgGen_MedTaskOut;/* '<S315>/Bus Creator1' */

/* Block signals (default storage) */
B_ASW_PhVltgGen ASW_PhVltgGen_B;

/* Block states (default storage) */
DW_ASW_PhVltgGen ASW_PhVltgGen_DW;

/* Real-time model */
static RT_MODEL_ASW_PhVltgGen ASW_PhVltgGen_M_;
RT_MODEL_ASW_PhVltgGen *const ASW_PhVltgGen_M = &ASW_PhVltgGen_M_;

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */



/* Output and update for atomic system: '<Root>/PhVltgGen_MedTask' */
void PhVltgGen_MedTask(void)
{
  sint32 rtb_Add1;
  sint32 rtb_Add1_l5zk;
  sint32 rtb_Add1_p3bv;
  sint32 rtb_DataTypeConversion;
  sint32 rtb_DataTypeConversion1;
  sint32 rtb_DataTypeConversion1_i3ac;
  sint32 rtb_DataTypeConversion1_p0m2;
  sint32 rtb_DataTypeConversion_bgrg;
  sint32 rtb_DataTypeConversion_lkol;
  sint32 rtb_Subtract_tmp;
  sint32 rtb_Sum;
  sint32 rtb_Sum_cby0;
  sint32 rtb_Sum_fda4;
  sint32 rtb_Sum_jbr1;
  sint32 rtb_Sum_o4qx;
  sint32 rtb_Switch1;
  sint32 rtb_Switch1_hrxo;
  sint32 rtb_Switch1_lnyj;
  sint32 rtb_Switch1_nwtc;
  sint32 rtb_Switch1_oelu;
  sint32 rtb_Switch2;
  sint32 rtb_Switch2_obfd;
  sint32 rtb_Switch2_owyv;
  sint32 rtb_TmpSignalConversionAtBusC_2;
  sint32 rtb_TmpSignalConversionAtBusC_3;
  sint32 rtb_lb_inpDev;
  sint32 rtb_lb_propActn;
  sint32 rtb_lb_propActn_i4nd;
  sint32 rtb_lb_propActn_pdav;
  uint32 rtb_Add1_tmp;
  dt_RadAng_u16r15b0 rtb_Add1_cfcy;
  dt_RadAng_u16r15b0 rtb_Add2;
  dt_RadAng_u16r15b0 rtb_Merge1;
  dt_RadAng_u16r15b0 rtb_Switch1_d0v1;
  dt_RadAng_u16r15b0 rtb_Switch_agfx;
  dt_Standardize_s16p15b0 rtb_Abs1_afkz;
  dt_Standardize_s16p15b0 rtb_Abs1_bbct;
  dt_Standardize_s16p15b0 rtb_Abs_cy22;
  dt_Standardize_s16p15b0 rtb_Abs_doti;
  dt_Standardize_s16p15b0 rtb_Add1_cbzj;
  dt_Standardize_s16p15b0 rtb_Add_pgv0;
  dt_Standardize_s16p15b0 rtb_DataTypeConversion2_bcnl;
  dt_Standardize_s16p15b0 rtb_DataTypeConversion2_gwbl;
  dt_Standardize_s16p15b0 rtb_DataTypeConversion2_hco0;
  dt_Standardize_s16p15b0 rtb_DataTypeConversion2_jzfl;
  dt_Standardize_s16p15b0 rtb_DataTypeConversion2_mweb;
  dt_Standardize_s16p15b0 rtb_DataTypeConversion2_o3w2;
  dt_Standardize_s16p15b0 rtb_DataTypeConversion_ezfk;
  dt_Standardize_s16p15b0 rtb_Gain1_mdnf;
  dt_Standardize_s16p15b0 rtb_Product1_ccy0;
  dt_Standardize_s16p15b0 rtb_Product_bnwf;
  dt_Standardize_s16p15b0 rtb_Saturation1_aitf;
  dt_Standardize_s16p15b0 rtb_Saturation1_htvq;
  dt_Standardize_s16p15b0 rtb_Saturation3;
  dt_Standardize_s16p15b0 rtb_Saturation4_ectf;
  dt_Standardize_s16p15b0 rtb_Saturation4_ioke;
  dt_Standardize_s16p15b0 rtb_Saturation5;
  dt_Standardize_s16p15b0 rtb_Saturation_cnrk;
  dt_Standardize_s16p15b0 rtb_Saturation_f2a5_idx_0;
  dt_Standardize_s16p15b0 rtb_Saturation_lsvn;
  dt_Standardize_s16p15b0 rtb_Switch1_aacv;
  dt_Standardize_s16p15b0 rtb_Switch1_i0ci;
  dt_Standardize_s16p15b0 rtb_Switch1_p2ct;
  dt_Standardize_s16p15b0 rtb_Switch1_p4vc;
  dt_Standardize_s16p15b0 rtb_Switch3;
  dt_Standardize_s16p15b0 rtb_Switch3_eodk;
  dt_Standardize_s16p15b0 rtb_Switch_aifc_idx_1;
  dt_Standardize_s16p15b0 rtb_TmpSignalConversionAtBusC_0;
  dt_Standardize_s16p15b0 rtb_TmpSignalConversionAtBusC_1;
  dt_Standardize_s16p15b0 rtb_lb_genMaxInpMods;
  dt_Standardize_s16p15b0 rtb_lb_genMaxInpMods_j3r1;
  dt_Standardize_u16p15b0 rtb_Merge_jahx;
  dt_Standardize_u16p15b0 rtb_Saturation1;
  dt_Standardize_u16p15b0 rtb_Saturation1_gc55;
  dt_Standardize_u16p15b0 rtb_Saturation_bskp;
  sint16 rtb_Add2_aalz;
  sint16 rtb_Add2_bakf;
  sint16 rtb_Add2_doeq;
  sint16 rtb_DataTypeConversion1_dkcs;
  sint16 rtb_DataTypeConversion1_eqye;
  sint16 rtb_DataTypeConversion1_nu0i;
  sint16 rtb_DataTypeConversion_a45q;
  sint16 rtb_DataTypeConversion_bmde;
  sint16 rtb_DataTypeConversion_des1_i_0;
  sint16 rtb_DataTypeConversion_des1_idx;
  sint16 rtb_DataTypeConversion_erni;
  sint16 rtb_Gain2_mq2i;
  sint16 rtb_Gain3_owmh;
  sint16 rtb_Gain6_hpkv;
  sint16 rtb_Selector1_e13v;
  sint16 rtb_Selector1_k032;
  sint16 rtb_Selector1_majb;
  sint16 rtb_Selector1_mv4i;
  sint16 rtb_Sum_cwuo;
  sint16 rtb_Switch1_ffta;
  sint16 rtb_Switch1_kp25;
  sint16 rtb_Switch2_aaxv;
  sint16 rtb_lb_tmprInpDev;
  sint16 y;
  sint16 y_0;
  uint16 rtb_DataTypeConversion1_i2uy;
  uint16 rtb_Gain7_lg0v;
  uint16 rtb_Gain8_tmp;
  uint16 rtb_Saturation_pmq2;
  uint16 rtb_Sum_e45u;
  uint16 rtb_Sum_fm2f;
  uint16 u0;
  boolean rtb_Compare;
  boolean rtb_Compare_chmk;
  boolean rtb_LogicalOperator1;
  boolean rtb_LogicalOperator4;
  boolean rtb_LogicalOperator_lnae;
  boolean rtb_LogicalOperator_lwqz;
  boolean rtb_lb_genOutp;
  boolean tmp;
  boolean tmp_0;

  /* Saturate: '<S2>/Saturation' incorporates:
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   */
  if (busPhVltgGen_MedTaskIn.s16_iActPhCurr[0] > 14746) {
    rtb_Saturation_f2a5_idx_0 = 14746;
  } else if (busPhVltgGen_MedTaskIn.s16_iActPhCurr[0] < -14746) {
    rtb_Saturation_f2a5_idx_0 = -14746;
  } else {
    rtb_Saturation_f2a5_idx_0 = busPhVltgGen_MedTaskIn.s16_iActPhCurr[0];
  }

  /* Saturate: '<S2>/Saturation2' incorporates:
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   */
  if (busPhVltgGen_MedTaskIn.u16_dcycPhDyc[1] <= 32768) {
    u0 = busPhVltgGen_MedTaskIn.u16_dcycPhDyc[1];
  } else {
    u0 = 32768U;
  }

  /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
   *  Saturate: '<S2>/Saturation2'
   */
  rtb_DataTypeConversion_des1_i_0 = (sint16)(((uint32)u0) >> 1);

  /* Saturate: '<S2>/Saturation2' incorporates:
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   */
  if (busPhVltgGen_MedTaskIn.u16_dcycPhDyc[2] <= 32768) {
    u0 = busPhVltgGen_MedTaskIn.u16_dcycPhDyc[2];
  } else {
    u0 = 32768U;
  }

  /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
   *  Saturate: '<S2>/Saturation2'
   */
  rtb_DataTypeConversion_des1_idx = (sint16)(((uint32)u0) >> 1);

  /* RelationalOperator: '<S348>/Compare' incorporates:
   *  Constant: '<S348>/Constant'
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   */
  rtb_Compare = (busPhVltgGen_MedTaskIn.enm_stMotoSt != OPEN_LOOP);

  /* Switch: '<S353>/Switch1' incorporates:
   *  Constant: '<S353>/Constant'
   *  Gain: '<S347>/Gain'
   *  Logic: '<S353>/NOT'
   *  Product: '<S353>/Product1'
   *  Saturate: '<S347>/Saturation4'
   */
  if (!rtb_Compare) {
    /* Saturate: '<S347>/Saturation4' incorporates:
     *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
     */
    if (busPhVltgGen_MedTaskIn.s16_nRmpRefElecSpd >= -32767) {
      rtb_Switch_aifc_idx_1 = busPhVltgGen_MedTaskIn.s16_nRmpRefElecSpd;
    } else {
      rtb_Switch_aifc_idx_1 = -32767;
    }

    rtb_Switch1_ffta = (sint16)(((rtb_Switch_aifc_idx_1 >> 1) * 16777) >> 14);
  } else {
    rtb_Switch1_ffta = 0;
  }

  /* End of Switch: '<S353>/Switch1' */

  /* Switch: '<S358>/Switch1' incorporates:
   *  Constant: '<S358>/Constant1'
   *  UnitDelay: '<S358>/Unit Delay1'
   */
  if (ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_haua) {
    tmp = rtb_Compare;
  } else {
    tmp = true;
  }

  /* Switch: '<S358>/Switch' incorporates:
   *  Switch: '<S358>/Switch1'
   *  UnitDelay: '<S347>/Unit Delay'
   *  UnitDelay: '<S358>/Unit Delay'
   */
  if (tmp) {
    u0 = ASW_PhVltgGen_DW.UnitDelay_DSTATE_l32u;
  } else {
    u0 = ASW_PhVltgGen_DW.UnitDelay_DSTATE_hdmg;
  }

  /* Sum: '<S353>/Sum' incorporates:
   *  Switch: '<S353>/Switch1'
   *  Switch: '<S358>/Switch'
   */
  rtb_Sum_e45u = (uint16)(((rtb_Switch1_ffta * 20861) + (u0 << 14)) >> 14);

  /* Sum: '<S30>/Subtract' incorporates:
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   *  Sum: '<S1>/Add1'
   *  UnitDelay: '<S91>/Unit Delay1'
   */
  rtb_Subtract_tmp = busPhVltgGen_MedTaskIn.u16_phiSensActElecAg -
    ASW_PhVltgGen_DW.UnitDelay1_DSTATE_hljs;

  /* Abs: '<S30>/Abs2' incorporates:
   *  Sum: '<S30>/Subtract'
   */
  if (((sint16)rtb_Subtract_tmp) < 0) {
    u0 = (uint16)(-((sint16)rtb_Subtract_tmp));
  } else {
    u0 = (uint16)rtb_Subtract_tmp;
  }

  /* Saturate: '<S4>/Saturation4' incorporates:
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   */
  if (busPhVltgGen_MedTaskIn.s16_nRmpRefElecSpd >= -32767) {
    rtb_Switch_aifc_idx_1 = busPhVltgGen_MedTaskIn.s16_nRmpRefElecSpd;
  } else {
    rtb_Switch_aifc_idx_1 = -32767;
  }

  /* Logic: '<S30>/Logical Operator4' incorporates:
   *  Abs: '<S30>/Abs2'
   *  Constant: '<S30>/Gu16_phiMaxSenlTrnsElecAg_C'
   *  RelationalOperator: '<S30>/Relational Operator2'
   *  RelationalOperator: '<S53>/Compare'
   *  Saturate: '<S4>/Saturation4'
   */
  rtb_LogicalOperator4 = ((u0 <= Gu16_phiMaxSenlTrnsElecAg_C) &&
    (rtb_Switch_aifc_idx_1 != 0));

  /* Outputs for Atomic SubSystem: '<S30>/lib_Deb_0' */
  /* Chart: '<S56>/sfc_FaultDebounce' incorporates:
   *  Constant: '<S30>/Constant2'
   *  Constant: '<S30>/Constant3'
   */
  /* Gateway: lib_debounce_0/sfc_FaultDebounce */
  /* During: lib_debounce_0/sfc_FaultDebounce */
  if (ASW_PhVltgGen_DW.is_active_c7_lib_debounce == 0U) {
    /* Entry: lib_debounce_0/sfc_FaultDebounce */
    ASW_PhVltgGen_DW.is_active_c7_lib_debounce = 1U;

    /* Entry Internal: lib_debounce_0/sfc_FaultDebounce */
    /* Transition: '<S60>:149' */
    /* There is Fault */
    if (rtb_LogicalOperator4) {
      /* Transition: '<S60>:182' */
      /* Direct Confirm */
      if (Gu16_ctSenlTrnsElecAgConfCnt_C == 0) {
        /* Transition: '<S60>:185' */
        /* Transition: '<S60>:188' */
        ASW_PhVltgGen_DW.is_c7_lib_debounce = IN_Confirm;

        /* Entry 'Confirm': '<S60>:165' */
        /* Set Bit0 Bit1 */
        ASW_PhVltgGen_DW.lb_cntDebCond = 0U;
        rtb_lb_genOutp = true;
      } else {
        /* Transition: '<S60>:183' */
        ASW_PhVltgGen_DW.is_c7_lib_debounce = IN_Confirming;

        /* Entry 'Confirming': '<S60>:93' */
        /* Set Bit0 */
        rtb_TmpSignalConversionAtBusC_2 = ASW_PhVltgGen_DW.lb_cntDebCond + 1;
        if ((ASW_PhVltgGen_DW.lb_cntDebCond + 1) > 65535) {
          rtb_TmpSignalConversionAtBusC_2 = 65535;
        }

        ASW_PhVltgGen_DW.lb_cntDebCond = (uint16)rtb_TmpSignalConversionAtBusC_2;
        rtb_lb_genOutp = false;
      }
    } else {
      /* Transition: '<S60>:180' */
      ASW_PhVltgGen_DW.is_c7_lib_debounce = IN_Wait;

      /* Entry 'Wait': '<S60>:98' */
      ASW_PhVltgGen_DW.lb_cntDebCond = 0U;
      rtb_lb_genOutp = false;
    }
  } else {
    switch (ASW_PhVltgGen_DW.is_c7_lib_debounce) {
     case IN_Confirm:
      rtb_lb_genOutp = true;

      /* During 'Confirm': '<S60>:165' */
      /* There is no Fault */
      if (!rtb_LogicalOperator4) {
        /* Transition: '<S60>:196' */
        /* Direct Repair */
        if (Gu16_ctSenlTrnsElecAgRcvyCnt_C == 0) {
          /* Transition: '<S60>:197' */
          ASW_PhVltgGen_DW.is_c7_lib_debounce = IN_Wait;

          /* Entry 'Wait': '<S60>:98' */
          ASW_PhVltgGen_DW.lb_cntDebCond = 0U;
          rtb_lb_genOutp = false;
        } else {
          /* Transition: '<S60>:207' */
          /* Need Debounce */
          ASW_PhVltgGen_DW.is_c7_lib_debounce = IN_Repairing;

          /* Entry 'Repairing': '<S60>:100' */
          /* Clear Bit0 */
          rtb_TmpSignalConversionAtBusC_2 = ASW_PhVltgGen_DW.lb_cntDebCond + 1;
          if ((ASW_PhVltgGen_DW.lb_cntDebCond + 1) > 65535) {
            rtb_TmpSignalConversionAtBusC_2 = 65535;
          }

          ASW_PhVltgGen_DW.lb_cntDebCond = (uint16)
            rtb_TmpSignalConversionAtBusC_2;
        }
      }
      break;

     case IN_Confirming:
      rtb_lb_genOutp = false;

      /* During 'Confirming': '<S60>:93' */
      /* There is no Fault */
      if (!rtb_LogicalOperator4) {
        /* Transition: '<S60>:173' */
        ASW_PhVltgGen_DW.is_c7_lib_debounce = IN_Wait;

        /* Entry 'Wait': '<S60>:98' */
        ASW_PhVltgGen_DW.lb_cntDebCond = 0U;

        /* Fault Is Confirmed */
      } else if (ASW_PhVltgGen_DW.lb_cntDebCond >=
                 Gu16_ctSenlTrnsElecAgConfCnt_C) {
        /* Transition: '<S60>:167' */
        ASW_PhVltgGen_DW.is_c7_lib_debounce = IN_Confirm;

        /* Entry 'Confirm': '<S60>:165' */
        /* Set Bit0 Bit1 */
        ASW_PhVltgGen_DW.lb_cntDebCond = 0U;
        rtb_lb_genOutp = true;
      } else {
        ASW_PhVltgGen_DW.lb_cntDebCond++;
      }
      break;

     case IN_Repairing:
      rtb_lb_genOutp = true;

      /* During 'Repairing': '<S60>:100' */
      /* There is Fault */
      if (rtb_LogicalOperator4) {
        /* Transition: '<S60>:172' */
        ASW_PhVltgGen_DW.is_c7_lib_debounce = IN_Confirm;

        /* Entry 'Confirm': '<S60>:165' */
        /* Set Bit0 Bit1 */
        ASW_PhVltgGen_DW.lb_cntDebCond = 0U;

        /* Fault Is Repaired */
      } else if (ASW_PhVltgGen_DW.lb_cntDebCond >=
                 Gu16_ctSenlTrnsElecAgRcvyCnt_C) {
        /* Transition: '<S60>:169' */
        ASW_PhVltgGen_DW.is_c7_lib_debounce = IN_Wait;

        /* Entry 'Wait': '<S60>:98' */
        ASW_PhVltgGen_DW.lb_cntDebCond = 0U;
        rtb_lb_genOutp = false;
      } else {
        ASW_PhVltgGen_DW.lb_cntDebCond++;
      }
      break;

     default:
      rtb_lb_genOutp = false;

      /* During 'Wait': '<S60>:98' */
      /* There is Fault */
      if (rtb_LogicalOperator4) {
        /* Transition: '<S60>:166' */
        /* Direct Confirm */
        if (Gu16_ctSenlTrnsElecAgConfCnt_C == 0) {
          /* Transition: '<S60>:214' */
          ASW_PhVltgGen_DW.is_c7_lib_debounce = IN_Confirm;

          /* Entry 'Confirm': '<S60>:165' */
          /* Set Bit0 Bit1 */
          ASW_PhVltgGen_DW.lb_cntDebCond = 0U;
          rtb_lb_genOutp = true;
        } else {
          /* Transition: '<S60>:213' */
          /* Need Debounce */
          ASW_PhVltgGen_DW.is_c7_lib_debounce = IN_Confirming;

          /* Entry 'Confirming': '<S60>:93' */
          /* Set Bit0 */
          rtb_TmpSignalConversionAtBusC_2 = ASW_PhVltgGen_DW.lb_cntDebCond + 1;
          if ((ASW_PhVltgGen_DW.lb_cntDebCond + 1) > 65535) {
            rtb_TmpSignalConversionAtBusC_2 = 65535;
          }

          ASW_PhVltgGen_DW.lb_cntDebCond = (uint16)
            rtb_TmpSignalConversionAtBusC_2;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S56>/sfc_FaultDebounce' */
  /* End of Outputs for SubSystem: '<S30>/lib_Deb_0' */

  /* Abs: '<S30>/Abs' incorporates:
   *  UnitDelay: '<S30>/Unit Delay1'
   */
  if (ASW_PhVltgGen_DW.UnitDelay1_DSTATE < 0) {
    rtb_Switch_aifc_idx_1 = (sint16)(-ASW_PhVltgGen_DW.UnitDelay1_DSTATE);
  } else {
    rtb_Switch_aifc_idx_1 = ASW_PhVltgGen_DW.UnitDelay1_DSTATE;
  }

  /* Abs: '<S30>/Abs1' incorporates:
   *  Constant: '<S30>/Gs16_nSenlTrnsElecSpd_C'
   */
  if (Gs16_nSenlTrnsElecSpd_C < 0) {
    rtb_TmpSignalConversionAtBusC_1 = (sint16)(-Gs16_nSenlTrnsElecSpd_C);
  } else {
    rtb_TmpSignalConversionAtBusC_1 = Gs16_nSenlTrnsElecSpd_C;
  }

  /* Logic: '<S30>/Logical Operator1' incorporates:
   *  Abs: '<S30>/Abs'
   *  Abs: '<S30>/Abs1'
   *  Constant: '<S51>/Constant'
   *  Constant: '<S52>/Constant'
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   *  Logic: '<S30>/Logical Operator'
   *  Logic: '<S30>/Logical Operator2'
   *  Logic: '<S30>/Logical Operator3'
   *  RelationalOperator: '<S30>/Relational Operator'
   *  RelationalOperator: '<S51>/Compare'
   *  RelationalOperator: '<S52>/Compare'
   */
  rtb_LogicalOperator1 = ((busPhVltgGen_MedTaskIn.enm_modeAgEvalMode == SENSOR) ||
    (((!rtb_lb_genOutp) || (rtb_Switch_aifc_idx_1 <=
    rtb_TmpSignalConversionAtBusC_1)) &&
     (busPhVltgGen_MedTaskIn.enm_modeAgEvalMode == HYBRID)));

  /* Switch: '<S30>/Switch' incorporates:
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   *  UnitDelay: '<S91>/Unit Delay1'
   */
  if (rtb_LogicalOperator1) {
    rtb_Switch_agfx = busPhVltgGen_MedTaskIn.u16_phiSensActElecAg;
  } else {
    rtb_Switch_agfx = ASW_PhVltgGen_DW.UnitDelay1_DSTATE_hljs;
  }

  /* End of Switch: '<S30>/Switch' */

  /* Outputs for Enabled SubSystem: '<S28>/ens_EnOpnLpAgClsLpAgDvtCalc' incorporates:
   *  EnablePort: '<S37>/Enable'
   */
  /* RelationalOperator: '<S36>/Compare' incorporates:
   *  Constant: '<S36>/Constant'
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   *  RelationalOperator: '<S348>/Compare'
   */
  if (busPhVltgGen_MedTaskIn.enm_stMotoSt == OPEN_LOOP) {
    /* Sum: '<S37>/Add1' incorporates:
     *  Sum: '<S353>/Sum'
     *  Switch: '<S30>/Switch'
     *  Switch: '<S353>/Switch'
     */
    ASW_PhVltgGen_B.Add1 = (dt_RadAng_u16r15b0)(rtb_Sum_e45u - rtb_Switch_agfx);
  }

  /* End of RelationalOperator: '<S36>/Compare' */
  /* End of Outputs for SubSystem: '<S28>/ens_EnOpnLpAgClsLpAgDvtCalc' */

  /* Logic: '<S28>/Logical Operator' incorporates:
   *  Constant: '<S33>/Constant'
   *  Constant: '<S35>/Constant'
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S348>/Compare'
   *  RelationalOperator: '<S35>/Compare'
   *  UnitDelay: '<S28>/Unit Delay1'
   */
  rtb_LogicalOperator_lwqz = ((ASW_PhVltgGen_DW.UnitDelay1_DSTATE_hxga ==
    OPEN_LOOP) && (busPhVltgGen_MedTaskIn.enm_stMotoSt == CLOSED_LOOP));

  /* Switch: '<S41>/Switch1' incorporates:
   *  Constant: '<S41>/Constant'
   *  Logic: '<S41>/NOT'
   *  Product: '<S41>/Product1'
   *  Switch: '<S28>/Switch'
   */
  if (!rtb_LogicalOperator_lwqz) {
    /* Switch: '<S28>/Switch' incorporates:
     *  Constant: '<S28>/Gs16_facOpnLpClsLpAgRiseRate_C'
     *  Gain: '<S28>/Gain'
     *  RelationalOperator: '<S34>/Compare'
     *  Sum: '<S37>/Add1'
     */
    if (ASW_PhVltgGen_B.Add1 >= 32768) {
      rtb_Switch_aifc_idx_1 = Gs16_facOpnLpClsLpAgRiseRate_C;
    } else {
      rtb_Switch_aifc_idx_1 = (sint16)(-Gs16_facOpnLpClsLpAgRiseRate_C);
    }

    rtb_Switch1_kp25 = (sint16)((rtb_Switch_aifc_idx_1 * 16777) >> 11);
  } else {
    rtb_Switch1_kp25 = 0;
  }

  /* End of Switch: '<S41>/Switch1' */

  /* Switch: '<S46>/Switch' incorporates:
   *  DataTypeConversion: '<S28>/Data Type Conversion'
   *  Sum: '<S37>/Add1'
   *  Switch: '<S46>/Switch1'
   *  UnitDelay: '<S46>/Unit Delay'
   *  UnitDelay: '<S46>/Unit Delay1'
   */
  if ((!ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_d5fg) ||
      rtb_LogicalOperator_lwqz) {
    rtb_Switch_aifc_idx_1 = (sint16)(((uint32)ASW_PhVltgGen_B.Add1) >> 2);
  } else {
    rtb_Switch_aifc_idx_1 = ASW_PhVltgGen_DW.UnitDelay_DSTATE_j4ol;
  }

  /* Sum: '<S41>/Sum' incorporates:
   *  Switch: '<S41>/Switch1'
   *  Switch: '<S46>/Switch'
   */
  rtb_Sum_cwuo = (sint16)((((rtb_Switch1_kp25 * 20861) >> 4) +
    (rtb_Switch_aifc_idx_1 << 15)) >> 15);

  /* Switch: '<S45>/Switch1' incorporates:
   *  RelationalOperator: '<S45>/Relational Operator1'
   *  Sum: '<S41>/Sum'
   *  Switch: '<S45>/Switch2'
   */
  if (rtb_Sum_cwuo <= 16384) {
    /* Switch: '<S45>/Switch' incorporates:
     *  RelationalOperator: '<S45>/Relational Operator'
     */
    if (rtb_Sum_cwuo >= 0) {
      /* Switch: '<S45>/Switch2' */
      rtb_Switch2_aaxv = rtb_Sum_cwuo;
    } else {
      /* Switch: '<S45>/Switch2' incorporates:
       *  Constant: '<S28>/minElctAng'
       */
      rtb_Switch2_aaxv = 0;
    }

    /* End of Switch: '<S45>/Switch' */
  } else {
    /* Switch: '<S45>/Switch2' incorporates:
     *  Constant: '<S28>/maxElctAng'
     */
    rtb_Switch2_aaxv = 16384;
  }

  /* End of Switch: '<S45>/Switch1' */

  /* Sum: '<S28>/Add2' incorporates:
   *  Switch: '<S30>/Switch'
   *  Switch: '<S41>/Switch'
   *  Switch: '<S45>/Switch2'
   */
  rtb_Add2 = (dt_RadAng_u16r15b0)(rtb_Switch_agfx + (rtb_Switch2_aaxv << 2));

  /* SwitchCase: '<S321>/Switch Case' incorporates:
   *  DataTypeConversion: '<S321>/Data Type Conversion1'
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   */
  switch (busPhVltgGen_MedTaskIn.enm_stMotoSt) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S321>/sas_ZrAg' incorporates:
     *  ActionPort: '<S346>/Action Port'
     */
    /* SignalConversion generated from: '<S346>/u16_phiActElecAgCs0' incorporates:
     *  Constant: '<S346>/Constant'
     *  Merge: '<S321>/Merge1'
     */
    rtb_Merge1 = 0U;

    /* End of Outputs for SubSystem: '<S321>/sas_ZrAg' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S321>/sas_StrtUpAg' incorporates:
     *  ActionPort: '<S345>/Action Port'
     */
    /* SignalConversion: '<S345>/Signal Copy' incorporates:
     *  Merge: '<S321>/Merge1'
     *  Sum: '<S353>/Sum'
     *  Switch: '<S353>/Switch'
     */
    rtb_Merge1 = rtb_Sum_e45u;

    /* End of Outputs for SubSystem: '<S321>/sas_StrtUpAg' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S321>/sas_ActAg' incorporates:
     *  ActionPort: '<S343>/Action Port'
     */
    /* SignalConversion: '<S343>/Signal Copy' incorporates:
     *  Merge: '<S321>/Merge1'
     *  Sum: '<S28>/Add2'
     */
    rtb_Merge1 = rtb_Add2;

    /* End of Outputs for SubSystem: '<S321>/sas_ActAg' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S321>/sas_DflAg' incorporates:
     *  ActionPort: '<S344>/Action Port'
     */
    /* SignalConversion generated from: '<S344>/u16_phiActElecAgCsDfl' incorporates:
     *  Constant: '<S344>/Constant'
     *  Merge: '<S321>/Merge1'
     */
    rtb_Merge1 = 0U;

    /* End of Outputs for SubSystem: '<S321>/sas_DflAg' */
    break;
  }

  /* End of SwitchCase: '<S321>/Switch Case' */

  /* Switch: '<S321>/Switch1' incorporates:
   *  Constant: '<S342>/Constant'
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   *  Merge: '<S321>/Merge1'
   *  RelationalOperator: '<S342>/Compare'
   *  RelationalOperator: '<S348>/Compare'
   */
  if (busPhVltgGen_MedTaskIn.enm_stMotoSt != OFF) {
    /* Switch: '<S321>/Switch2' incorporates:
     *  Merge: '<S321>/Merge1'
     *  Switch: '<S321>/Switch1'
     */
    if (busPhVltgGen_MedTaskIn.bol_enPosSCDCalibEnFlg) {
      rtb_Switch1_d0v1 = busPhVltgGen_MedTaskIn.u16_phiPosSCDCalibElecAg;
    } else {
      rtb_Switch1_d0v1 = rtb_Merge1;
    }

    /* End of Switch: '<S321>/Switch2' */
  } else {
    rtb_Switch1_d0v1 = rtb_Merge1;
  }

  /* End of Switch: '<S321>/Switch1' */

  /* Saturate: '<S2>/Saturation' incorporates:
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   */
  if (busPhVltgGen_MedTaskIn.s16_iActPhCurr[0] > 14746) {
    rtb_Switch_aifc_idx_1 = 14746;
  } else if (busPhVltgGen_MedTaskIn.s16_iActPhCurr[0] < -14746) {
    rtb_Switch_aifc_idx_1 = -14746;
  } else {
    rtb_Switch_aifc_idx_1 = busPhVltgGen_MedTaskIn.s16_iActPhCurr[0];
  }

  if (busPhVltgGen_MedTaskIn.s16_iActPhCurr[1] > 14746) {
    rtb_TmpSignalConversionAtBusC_1 = 14746;
  } else if (busPhVltgGen_MedTaskIn.s16_iActPhCurr[1] < -14746) {
    rtb_TmpSignalConversionAtBusC_1 = -14746;
  } else {
    rtb_TmpSignalConversionAtBusC_1 = busPhVltgGen_MedTaskIn.s16_iActPhCurr[1];
  }

  /* Gain: '<S17>/Gain1' incorporates:
   *  Saturate: '<S2>/Saturation'
   *  Sum: '<S17>/Add'
   */
  rtb_Gain1_mdnf = (dt_Standardize_s16p15b0)((18919 * ((rtb_Switch_aifc_idx_1 +
    (rtb_TmpSignalConversionAtBusC_1 << 1)) >> 1)) >> 14);

  /* Saturate: '<S316>/Saturation1' incorporates:
   *  Gain: '<S17>/Gain1'
   */
  if (rtb_Gain1_mdnf > 14746) {
    rtb_Saturation1_htvq = 14746;
  } else if (rtb_Gain1_mdnf < -14746) {
    rtb_Saturation1_htvq = -14746;
  } else {
    rtb_Saturation1_htvq = rtb_Gain1_mdnf;
  }

  /* End of Saturate: '<S316>/Saturation1' */

  /* Product: '<S331>/Product' incorporates:
   *  Constant: '<S329>/Constant'
   *  Constant: '<S329>/Constant1'
   *  Gain: '<S329>/Gain'
   *  Product: '<S331>/Product5'
   *  Selector: '<S329>/Selector1'
   *  Sum: '<S329>/Add'
   *  Switch: '<S321>/Switch1'
   */
  rtb_TmpSignalConversionAtBusC_2 = rtCP_Constant1_Value_p1ac[(uint16)((1023U *
    ((uint16)(16384 - rtb_Switch1_d0v1))) >> 16)];

  /* Product: '<S331>/Product2' incorporates:
   *  Constant: '<S326>/Constant'
   *  Gain: '<S326>/Gain'
   *  Product: '<S331>/Product1'
   *  Selector: '<S326>/Selector1'
   */
  rtb_TmpSignalConversionAtBusC_3 = rtCP_Constant_Value_o231[(uint16)((1023U *
    rtb_Switch1_d0v1) >> 16)];

  /* SignalConversion generated from: '<S315>/Bus Creator1' incorporates:
   *  Product: '<S331>/Product'
   *  Product: '<S331>/Product1'
   *  Product: '<S331>/Product2'
   *  Product: '<S331>/Product5'
   *  Saturate: '<S316>/Saturation'
   *  Saturate: '<S316>/Saturation1'
   *  Sum: '<S331>/Add1'
   *  Sum: '<S331>/Add3'
   */
  rtb_TmpSignalConversionAtBusC_1 = (dt_Standardize_s16p15b0)
    (((rtb_Saturation_f2a5_idx_0 * rtb_TmpSignalConversionAtBusC_2) >> 14) +
     ((rtb_Saturation1_htvq * rtb_TmpSignalConversionAtBusC_3) >> 14));
  rtb_TmpSignalConversionAtBusC_0 = (dt_Standardize_s16p15b0)
    (((rtb_Saturation1_htvq * rtb_TmpSignalConversionAtBusC_2) >> 14) -
     ((rtb_Saturation_f2a5_idx_0 * rtb_TmpSignalConversionAtBusC_3) >> 14));

  /* Saturate: '<S235>/Saturation1' */
  if (rtb_TmpSignalConversionAtBusC_1 > 14746) {
    y = 14746;
  } else if (rtb_TmpSignalConversionAtBusC_1 < -14746) {
    y = -14746;
  } else {
    y = rtb_TmpSignalConversionAtBusC_1;
  }

  if (rtb_TmpSignalConversionAtBusC_0 > 14746) {
    y_0 = 14746;
  } else if (rtb_TmpSignalConversionAtBusC_0 < -14746) {
    y_0 = -14746;
  } else {
    y_0 = rtb_TmpSignalConversionAtBusC_0;
  }

  /* Saturate: '<S2>/Saturation1' incorporates:
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   */
  if (busPhVltgGen_MedTaskIn.u16_uSplyVltg <= 32767) {
    rtb_Saturation1 = busPhVltgGen_MedTaskIn.u16_uSplyVltg;
  } else {
    rtb_Saturation1 = 32767U;
  }

  /* End of Saturate: '<S2>/Saturation1' */

  /* Saturate: '<S2>/Saturation2' incorporates:
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   */
  if (busPhVltgGen_MedTaskIn.u16_dcycPhDyc[0] <= 32768) {
    u0 = busPhVltgGen_MedTaskIn.u16_dcycPhDyc[0];
  } else {
    u0 = 32768U;
  }

  /* Product: '<S2>/Product' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion'
   *  Gain: '<S20>/Gain'
   *  Gain: '<S20>/Gain1'
   *  Gain: '<S20>/Gain4'
   *  Saturate: '<S2>/Saturation1'
   *  Saturate: '<S2>/Saturation2'
   *  Sum: '<S20>/Add'
   */
  rtb_Product_bnwf = (dt_Standardize_s16p15b0)((rtb_Saturation1 * ((21845 *
    (((((sint16)(((uint32)u0) >> 1)) - (rtb_DataTypeConversion_des1_i_0 >> 1)) -
      (rtb_DataTypeConversion_des1_idx >> 1)) >> 1)) >> 14)) >> 14);

  /* Saturate: '<S316>/Saturation3' incorporates:
   *  Product: '<S2>/Product'
   */
  if (rtb_Product_bnwf >= -32767) {
    rtb_Saturation3 = rtb_Product_bnwf;
  } else {
    rtb_Saturation3 = -32767;
  }

  /* End of Saturate: '<S316>/Saturation3' */

  /* Saturate: '<S112>/Saturation' incorporates:
   *  Constant: '<S112>/Constant'
   */
  if (Gs16_nPLLElecAgSpdUpLim_C >= 0) {
    rtb_Saturation_cnrk = Gs16_nPLLElecAgSpdUpLim_C;
  } else {
    rtb_Saturation_cnrk = 0;
  }

  /* End of Saturate: '<S112>/Saturation' */

  /* DataTypeConversion: '<S126>/Data Type Conversion' incorporates:
   *  Saturate: '<S112>/Saturation'
   */
  rtb_DataTypeConversion_a45q = (sint16)(rtb_Saturation_cnrk >> 1);

  /* Logic: '<S91>/Logical Operator' incorporates:
   *  Constant: '<S93>/Constant'
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   *  RelationalOperator: '<S348>/Compare'
   *  RelationalOperator: '<S93>/Compare'
   */
  rtb_LogicalOperator_lnae = ((busPhVltgGen_MedTaskIn.enm_stMotoSt == OFF) ||
    (busPhVltgGen_MedTaskIn.bol_enPosSCDCalibEnFlg));

  /* DataTypeConversion: '<S132>/Data Type Conversion' incorporates:
   *  Saturate: '<S112>/Saturation'
   */
  rtb_DataTypeConversion_bgrg = (rtb_Saturation_cnrk << 6);

  /* Gain: '<S91>/Gain7' incorporates:
   *  Constant: '<S91>/Gu16_resPhRstn_C'
   */
  rtb_Gain7_lg0v = (uint16)((52429U * Gu16_resPhRstn_C) >> 15);

  /* Gain: '<S91>/Gain2' incorporates:
   *  Saturate: '<S90>/Saturation'
   */
  rtb_Gain2_mq2i = (sint16)(rtb_Saturation_f2a5_idx_0 >> 1);

  /* Logic: '<S189>/NOT' incorporates:
   *  Logic: '<S118>/NOT'
   *  Logic: '<S179>/NOT'
   *  Logic: '<S180>/NOT'
   *  Logic: '<S208>/NOT'
   */
  tmp = !rtb_LogicalOperator_lnae;

  /* Switch: '<S189>/Switch1' incorporates:
   *  Constant: '<S189>/Constant'
   *  Gain: '<S91>/Gain'
   *  Gain: '<S91>/Gain2'
   *  Gain: '<S91>/Gain7'
   *  Logic: '<S189>/NOT'
   *  Product: '<S179>/Product1'
   *  Product: '<S189>/Product1'
   *  Saturate: '<S90>/Saturation3'
   *  Sum: '<S179>/Add'
   */
  if (tmp) {
    /* Saturate: '<S90>/Saturation3' incorporates:
     *  Product: '<S2>/Product'
     */
    if (rtb_Product_bnwf >= -32767) {
      rtb_Switch_aifc_idx_1 = rtb_Product_bnwf;
    } else {
      rtb_Switch_aifc_idx_1 = -32767;
    }

    rtb_Switch1 = mul_ssu32_loSR(((rtb_Switch_aifc_idx_1 >> 1) << 16) -
      (((rtb_Gain7_lg0v * rtb_Gain2_mq2i) << 3) >> 3), 16777U, 14U);
  } else {
    rtb_Switch1 = 0;
  }

  /* End of Switch: '<S189>/Switch1' */

  /* Switch: '<S194>/Switch1' incorporates:
   *  Constant: '<S194>/Constant1'
   *  UnitDelay: '<S194>/Unit Delay1'
   */
  if (ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_ekpq) {
    tmp_0 = rtb_LogicalOperator_lnae;
  } else {
    tmp_0 = true;
  }

  /* Switch: '<S194>/Switch' incorporates:
   *  DataTypeConversion: '<S179>/Data Type Conversion'
   *  Switch: '<S194>/Switch1'
   *  UnitDelay: '<S194>/Unit Delay'
   */
  if (tmp_0) {
    rtb_TmpSignalConversionAtBusC_2 = 0;
  } else {
    rtb_TmpSignalConversionAtBusC_2 = ASW_PhVltgGen_DW.UnitDelay_DSTATE_brib;
  }

  /* Sum: '<S189>/Sum' incorporates:
   *  Switch: '<S189>/Switch1'
   *  Switch: '<S194>/Switch'
   */
  rtb_Sum = (rtb_Switch1 >> 2) + rtb_TmpSignalConversionAtBusC_2;

  /* Product: '<S196>/Product1' incorporates:
   *  Constant: '<S179>/lb_parFiltCoef_1'
   *  Constant: '<S196>/Constant'
   *  Product: '<S215>/Product1'
   *  Sum: '<S196>/Add2'
   *  Sum: '<S215>/Add2'
   */
  rtb_Add1_tmp = (uint32)((131072 - Gu16_facFlxObsFltCoeff_C) >> 2);

  /* Sum: '<S196>/Add1' incorporates:
   *  Constant: '<S179>/lb_parFiltCoef_1'
   *  Product: '<S196>/Product'
   *  Product: '<S196>/Product1'
   *  Sum: '<S189>/Sum'
   *  Sum: '<S196>/Add2'
   *  Switch: '<S189>/Switch'
   *  UnitDelay: '<S196>/Unit Delay'
   */
  rtb_Add1 = (mul_ssu32_loSR(rtb_Sum, Gu16_facFlxObsFltCoeff_C, 14U) >> 3) +
    mul_ssu32_loSR(ASW_PhVltgGen_DW.UnitDelay_DSTATE_jl24, rtb_Add1_tmp, 15U);

  /* Gain: '<S91>/Gain8' incorporates:
   *  Constant: '<S91>/Gu16_resPhRstn_C1'
   *  Gain: '<S235>/Gain8'
   *  Switch: '<S235>/Switch'
   */
  rtb_Gain8_tmp = (uint16)((53687U * Gu16_indQaxIndc_C) >> 15);

  /* Switch: '<S179>/Switch3' incorporates:
   *  Constant: '<S179>/Constant5'
   *  Gain: '<S179>/Gain2'
   *  Gain: '<S91>/Gain2'
   *  Gain: '<S91>/Gain8'
   *  Product: '<S179>/Product2'
   *  Sum: '<S179>/Add1'
   *  Sum: '<S189>/Sum'
   *  Sum: '<S196>/Add1'
   *  Sum: '<S196>/Add3'
   *  Switch: '<S189>/Switch'
   */
  if (tmp) {
    rtb_Switch3 = (dt_Standardize_s16p15b0)((17067 * ((sint16)(((((sint16)
      (((rtb_Sum >> 1) - (rtb_Add1 >> 1)) >> 12)) << 15) - (((rtb_Gain2_mq2i *
      rtb_Gain8_tmp) << 3) >> 2)) >> 15))) >> 15);
  } else {
    rtb_Switch3 = 0;
  }

  /* End of Switch: '<S179>/Switch3' */

  /* DataTypeConversion: '<S91>/Data Type Conversion1' incorporates:
   *  Constant: '<S91>/Gs16_tiSenlElecAgDel_C'
   *  Gain: '<S91>/Gain6'
   *  Product: '<S91>/Product2'
   *  UnitDelay: '<S91>/Unit Delay'
   */
  rtb_DataTypeConversion1_i2uy = (uint16)((((sint16)((Gs16_tiSenlElecAgDel_C *
    (ASW_PhVltgGen_DW.UnitDelay_DSTATE_bg1i >> 1)) >> 10)) * 20861) >> 14);

  /* Selector: '<S177>/Selector1' incorporates:
   *  Constant: '<S177>/Constant'
   *  Constant: '<S177>/Constant1'
   *  DataTypeConversion: '<S91>/Data Type Conversion1'
   *  Gain: '<S177>/Gain'
   *  Sum: '<S177>/Add'
   */
  rtb_Selector1_mv4i = rtCP_Constant1_Value[(sint32)((1023U * ((uint16)(16384 -
    rtb_DataTypeConversion1_i2uy))) >> 16)];

  /* Product: '<S2>/Product1' incorporates:
   *  Gain: '<S20>/Gain2'
   *  Gain: '<S20>/Gain3'
   *  Gain: '<S20>/Gain5'
   *  Saturate: '<S2>/Saturation1'
   *  Sum: '<S20>/Add2'
   */
  rtb_Product1_ccy0 = (dt_Standardize_s16p15b0)((((21845 * ((((14189 *
    rtb_DataTypeConversion_des1_i_0) >> 14) - ((14189 *
    rtb_DataTypeConversion_des1_idx) >> 14)) >> 1)) >> 14) * rtb_Saturation1) >>
    14);

  /* Saturate: '<S90>/Saturation2' incorporates:
   *  Gain: '<S17>/Gain1'
   */
  if (rtb_Gain1_mdnf > 14746) {
    rtb_Switch_aifc_idx_1 = 14746;
  } else if (rtb_Gain1_mdnf < -14746) {
    rtb_Switch_aifc_idx_1 = -14746;
  } else {
    rtb_Switch_aifc_idx_1 = rtb_Gain1_mdnf;
  }

  /* Gain: '<S91>/Gain3' incorporates:
   *  Saturate: '<S90>/Saturation2'
   */
  rtb_Gain3_owmh = (sint16)(rtb_Switch_aifc_idx_1 >> 1);

  /* Switch: '<S208>/Switch1' incorporates:
   *  Constant: '<S208>/Constant'
   *  Gain: '<S91>/Gain1'
   *  Gain: '<S91>/Gain3'
   *  Gain: '<S91>/Gain7'
   *  Product: '<S180>/Product1'
   *  Product: '<S208>/Product1'
   *  Saturate: '<S90>/Saturation1'
   *  Sum: '<S180>/Add'
   */
  if (tmp) {
    /* Saturate: '<S90>/Saturation1' incorporates:
     *  Product: '<S2>/Product1'
     */
    if (rtb_Product1_ccy0 >= -32767) {
      rtb_Switch_aifc_idx_1 = rtb_Product1_ccy0;
    } else {
      rtb_Switch_aifc_idx_1 = -32767;
    }

    rtb_Switch1_nwtc = mul_ssu32_loSR(((rtb_Switch_aifc_idx_1 >> 1) << 16) -
      (((rtb_Gain7_lg0v * rtb_Gain3_owmh) << 3) >> 3), 16777U, 14U);
  } else {
    rtb_Switch1_nwtc = 0;
  }

  /* End of Switch: '<S208>/Switch1' */

  /* Switch: '<S213>/Switch1' incorporates:
   *  Constant: '<S213>/Constant1'
   *  UnitDelay: '<S213>/Unit Delay1'
   */
  if (ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_mq3y) {
    tmp_0 = rtb_LogicalOperator_lnae;
  } else {
    tmp_0 = true;
  }

  /* Switch: '<S213>/Switch' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion'
   *  Switch: '<S213>/Switch1'
   *  UnitDelay: '<S213>/Unit Delay'
   */
  if (tmp_0) {
    rtb_TmpSignalConversionAtBusC_2 = 0;
  } else {
    rtb_TmpSignalConversionAtBusC_2 = ASW_PhVltgGen_DW.UnitDelay_DSTATE_jfag;
  }

  /* Sum: '<S208>/Sum' incorporates:
   *  Switch: '<S208>/Switch1'
   *  Switch: '<S213>/Switch'
   */
  rtb_Sum_o4qx = (rtb_Switch1_nwtc >> 2) + rtb_TmpSignalConversionAtBusC_2;

  /* Sum: '<S215>/Add1' incorporates:
   *  Constant: '<S180>/lb_parFiltCoef_1'
   *  Product: '<S215>/Product'
   *  Product: '<S215>/Product1'
   *  Sum: '<S208>/Sum'
   *  Switch: '<S208>/Switch'
   *  UnitDelay: '<S215>/Unit Delay'
   */
  rtb_Add1_l5zk = (mul_ssu32_loSR(rtb_Sum_o4qx, Gu16_facFlxObsFltCoeff_C, 14U) >>
                   3) + mul_ssu32_loSR(ASW_PhVltgGen_DW.UnitDelay_DSTATE_h5zb,
    rtb_Add1_tmp, 15U);

  /* Switch: '<S180>/Switch3' incorporates:
   *  Constant: '<S180>/Constant5'
   *  Gain: '<S180>/Gain2'
   *  Gain: '<S91>/Gain3'
   *  Gain: '<S91>/Gain8'
   *  Product: '<S180>/Product2'
   *  Sum: '<S180>/Add1'
   *  Sum: '<S208>/Sum'
   *  Sum: '<S215>/Add1'
   *  Sum: '<S215>/Add3'
   *  Switch: '<S208>/Switch'
   */
  if (tmp) {
    rtb_Switch3_eodk = (dt_Standardize_s16p15b0)((17067 * ((sint16)(((((sint16)
      (((rtb_Sum_o4qx >> 1) - (rtb_Add1_l5zk >> 1)) >> 12)) << 15) -
      (((rtb_Gain3_owmh * rtb_Gain8_tmp) << 3) >> 2)) >> 15))) >> 15);
  } else {
    rtb_Switch3_eodk = 0;
  }

  /* End of Switch: '<S180>/Switch3' */

  /* Selector: '<S174>/Selector1' incorporates:
   *  Constant: '<S174>/Constant'
   *  Gain: '<S174>/Gain'
   */
  rtb_Selector1_e13v = rtCP_Constant_Value_k3nb[(sint32)((1023U *
    rtb_DataTypeConversion1_i2uy) >> 16)];

  /* Sum: '<S145>/Add' incorporates:
   *  Product: '<S145>/Product'
   *  Product: '<S145>/Product1'
   *  Selector: '<S174>/Selector1'
   *  Selector: '<S177>/Selector1'
   *  Switch: '<S179>/Switch3'
   *  Switch: '<S180>/Switch3'
   */
  rtb_Add_pgv0 = (dt_Standardize_s16p15b0)(((sint16)((rtb_Switch3 *
    rtb_Selector1_mv4i) >> 14)) - ((sint16)((rtb_Switch3_eodk *
    rtb_Selector1_e13v) >> 14)));

  /* Sum: '<S145>/Add1' incorporates:
   *  Product: '<S145>/Product2'
   *  Product: '<S145>/Product3'
   *  Selector: '<S174>/Selector1'
   *  Selector: '<S177>/Selector1'
   *  Switch: '<S179>/Switch3'
   *  Switch: '<S180>/Switch3'
   */
  rtb_Add1_cbzj = (dt_Standardize_s16p15b0)(((sint16)((rtb_Switch3_eodk *
    rtb_Selector1_mv4i) >> 14)) + ((sint16)((rtb_Switch3 * rtb_Selector1_e13v) >>
    14)));

  /* DataTypeConversion: '<S132>/Data Type Conversion1' incorporates:
   *  Gain: '<S91>/Gain4'
   *  Saturate: '<S112>/Saturation'
   */
  rtb_DataTypeConversion1_p0m2 = (((dt_Standardize_s16p15b0)
    (-rtb_Saturation_cnrk)) << 6);

  /* Switch: '<S143>/Switch2' incorporates:
   *  DataTypeConversion: '<S132>/Data Type Conversion'
   *  DataTypeConversion: '<S132>/Data Type Conversion1'
   *  RelationalOperator: '<S143>/Relational Operator2'
   */
  if (rtb_DataTypeConversion_bgrg > rtb_DataTypeConversion1_p0m2) {
    /* Saturate: '<S114>/Saturation' incorporates:
     *  Constant: '<S114>/Constant'
     */
    if (Gu16_facPLLCtlKp_C <= 64000) {
      u0 = Gu16_facPLLCtlKp_C;
    } else {
      u0 = 64000U;
    }

    /* Product: '<S132>/Product' incorporates:
     *  Constant: '<S223>/Constant'
     *  Constant: '<S226>/Constant'
     *  Constant: '<S226>/Constant1'
     *  Gain: '<S223>/Gain'
     *  Gain: '<S226>/Gain'
     *  Product: '<S228>/Product1'
     *  Product: '<S228>/Product5'
     *  Saturate: '<S114>/Saturation'
     *  Selector: '<S223>/Selector1'
     *  Selector: '<S226>/Selector1'
     *  Sum: '<S145>/Add'
     *  Sum: '<S145>/Add1'
     *  Sum: '<S226>/Add'
     *  Sum: '<S228>/Add3'
     *  UnitDelay: '<S91>/Unit Delay1'
     */
    rtb_lb_propActn_pdav = u0 * ((sint16)(((sint16)((rtb_Add1_cbzj *
      rtCP_Constant1_Value_dstd[(sint32)((1023U * ((uint16)(16384 -
      ASW_PhVltgGen_DW.UnitDelay1_DSTATE_hljs))) >> 16)]) >> 14)) - ((sint16)
      ((rtb_Add_pgv0 * rtCP_Constant_Value_c1xf[(sint32)((1023U *
      ASW_PhVltgGen_DW.UnitDelay1_DSTATE_hljs) >> 16)]) >> 14))));

    /* Switch: '<S143>/Switch1' incorporates:
     *  Product: '<S132>/Product'
     *  RelationalOperator: '<S143>/Relational Operator1'
     */
    if (rtb_lb_propActn_pdav <= rtb_DataTypeConversion_bgrg) {
      /* Switch: '<S143>/Switch' incorporates:
       *  RelationalOperator: '<S143>/Relational Operator'
       */
      if (rtb_lb_propActn_pdav >= rtb_DataTypeConversion1_p0m2) {
        /* Switch: '<S143>/Switch2' */
        rtb_Switch2_owyv = rtb_lb_propActn_pdav;
      } else {
        /* Switch: '<S143>/Switch2' */
        rtb_Switch2_owyv = rtb_DataTypeConversion1_p0m2;
      }

      /* End of Switch: '<S143>/Switch' */
    } else {
      /* Switch: '<S143>/Switch2' */
      rtb_Switch2_owyv = rtb_DataTypeConversion_bgrg;
    }

    /* End of Switch: '<S143>/Switch1' */
  } else {
    rtb_Switch2_owyv = rtb_DataTypeConversion_bgrg;
  }

  /* End of Switch: '<S143>/Switch2' */

  /* DataTypeConversion: '<S132>/Data Type Conversion2' incorporates:
   *  Switch: '<S143>/Switch2'
   */
  rtb_DataTypeConversion2_jzfl = (dt_Standardize_s16p15b0)(rtb_Switch2_owyv >> 6);

  /* Switch: '<S132>/Switch1' incorporates:
   *  Constant: '<S126>/Constant4'
   *  DataTypeConversion: '<S132>/Data Type Conversion2'
   *  Sum: '<S132>/Add'
   */
  if (rtb_LogicalOperator_lnae) {
    rtb_Switch1_aacv = 0;

    /* Switch: '<S134>/Switch1' incorporates:
     *  Constant: '<S126>/Constant4'
     *  Constant: '<S134>/Constant'
     *  Switch: '<S132>/Switch1'
     */
    rtb_Switch1_oelu = 0;
  } else {
    rtb_Switch1_aacv = rtb_DataTypeConversion2_jzfl;

    /* Saturate: '<S116>/Saturation' incorporates:
     *  Constant: '<S116>/Constant'
     *  DataTypeConversion: '<S132>/Data Type Conversion2'
     *  Sum: '<S132>/Add'
     *  Switch: '<S132>/Switch1'
     *  Switch: '<S134>/Switch1'
     */
    if (Gu16_facPLLCtlKi_C <= 64000) {
      u0 = Gu16_facPLLCtlKi_C;
    } else {
      u0 = 64000U;
    }

    /* Switch: '<S134>/Switch1' incorporates:
     *  Constant: '<S108>/Constant5'
     *  DataTypeConversion: '<S132>/Data Type Conversion2'
     *  Product: '<S134>/Product1'
     *  Product: '<S134>/Product2'
     *  Saturate: '<S116>/Saturation'
     *  Sum: '<S126>/Add1'
     *  Sum: '<S126>/Add3'
     *  UnitDelay: '<S126>/Unit Delay'
     *  UnitDelay: '<S126>/Unit Delay1'
     */
    rtb_Switch1_oelu = mul_ssu32_loSR(((sint16)(rtb_DataTypeConversion2_jzfl +
      (((sint16)((ASW_PhVltgGen_DW.UnitDelay_DSTATE_mo0h -
                  (ASW_PhVltgGen_DW.UnitDelay1_DSTATE_fzlc << 1)) >> 1)) << 1)))
      * 33554, u0, 15U);
  }

  /* End of Switch: '<S132>/Switch1' */

  /* Switch: '<S140>/Switch1' incorporates:
   *  Constant: '<S140>/Constant1'
   *  UnitDelay: '<S140>/Unit Delay1'
   */
  if (ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_kcff) {
    tmp_0 = rtb_LogicalOperator_lnae;
  } else {
    tmp_0 = true;
  }

  /* Switch: '<S140>/Switch' incorporates:
   *  DataTypeConversion: '<S134>/Data Type Conversion2'
   *  Switch: '<S140>/Switch1'
   *  UnitDelay: '<S140>/Unit Delay'
   */
  if (tmp_0) {
    rtb_TmpSignalConversionAtBusC_2 = 0;
  } else {
    rtb_TmpSignalConversionAtBusC_2 = ASW_PhVltgGen_DW.UnitDelay_DSTATE;
  }

  /* Sum: '<S134>/Sum' incorporates:
   *  Switch: '<S134>/Switch1'
   *  Switch: '<S140>/Switch'
   */
  rtb_Sum_jbr1 = (rtb_Switch1_oelu >> 1) + rtb_TmpSignalConversionAtBusC_2;

  /* Sum: '<S126>/Add2' incorporates:
   *  DataTypeConversion: '<S134>/Data Type Conversion'
   *  Sum: '<S134>/Sum'
   *  Switch: '<S132>/Switch1'
   *  Switch: '<S134>/Switch'
   */
  rtb_Add2_bakf = (sint16)((rtb_Switch1_aacv + (rtb_Sum_jbr1 >> 16)) >> 1);

  /* DataTypeConversion: '<S126>/Data Type Conversion1' incorporates:
   *  Gain: '<S91>/Gain4'
   *  Saturate: '<S112>/Saturation'
   */
  rtb_DataTypeConversion1_nu0i = (sint16)(((dt_Standardize_s16p15b0)
    (-rtb_Saturation_cnrk)) >> 1);

  /* Switch: '<S131>/Switch2' incorporates:
   *  DataTypeConversion: '<S126>/Data Type Conversion'
   *  DataTypeConversion: '<S126>/Data Type Conversion1'
   *  RelationalOperator: '<S131>/Relational Operator2'
   */
  if (rtb_DataTypeConversion_a45q > rtb_DataTypeConversion1_nu0i) {
    /* Switch: '<S131>/Switch1' incorporates:
     *  RelationalOperator: '<S131>/Relational Operator1'
     *  Sum: '<S126>/Add2'
     */
    if (rtb_Add2_bakf <= rtb_DataTypeConversion_a45q) {
      /* Switch: '<S131>/Switch' incorporates:
       *  RelationalOperator: '<S131>/Relational Operator'
       */
      if (rtb_Add2_bakf >= rtb_DataTypeConversion1_nu0i) {
        rtb_Switch_aifc_idx_1 = rtb_Add2_bakf;
      } else {
        rtb_Switch_aifc_idx_1 = rtb_DataTypeConversion1_nu0i;
      }

      /* End of Switch: '<S131>/Switch' */
    } else {
      rtb_Switch_aifc_idx_1 = rtb_DataTypeConversion_a45q;
    }

    /* End of Switch: '<S131>/Switch1' */
  } else {
    rtb_Switch_aifc_idx_1 = rtb_DataTypeConversion_a45q;
  }

  /* DataTypeConversion: '<S126>/Data Type Conversion2' incorporates:
   *  Switch: '<S131>/Switch2'
   */
  rtb_DataTypeConversion2_hco0 = (dt_Standardize_s16p15b0)(rtb_Switch_aifc_idx_1
    << 1);

  /* Switch: '<S30>/Switch1' incorporates:
   *  DataTypeConversion: '<S126>/Data Type Conversion2'
   *  Saturate: '<S4>/Saturation2'
   */
  if (rtb_LogicalOperator1) {
    /* Sum: '<S229>/Add' incorporates:
     *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
     *  UnitDelay: '<S229>/Unit Delay'
     */
    rtb_lb_tmprInpDev = (sint16)(busPhVltgGen_MedTaskIn.u16_phiSensActElecAg -
      ASW_PhVltgGen_DW.UnitDelay_DSTATE_beui);

    /* Saturate: '<S233>/Saturation' incorporates:
     *  Sum: '<S229>/Add'
     */
    if (rtb_lb_tmprInpDev > 16384) {
      rtb_Switch_aifc_idx_1 = 16384;
    } else if (rtb_lb_tmprInpDev < -16384) {
      rtb_Switch_aifc_idx_1 = -16384;
    } else {
      rtb_Switch_aifc_idx_1 = rtb_lb_tmprInpDev;
    }

    /* Saturate: '<S4>/Saturation1' incorporates:
     *  Gain: '<S229>/Gain'
     *  Product: '<S229>/mul_KdX_part1'
     *  Saturate: '<S233>/Saturation'
     *  Switch: '<S30>/Switch1'
     */
    rtb_Switch1_p4vc = (dt_Standardize_s16p15b0)((((rtb_Switch_aifc_idx_1 << 14)
      / 16777) * 3217) >> 11);
  } else if (rtb_DataTypeConversion2_hco0 >= -32767) {
    /* Saturate: '<S4>/Saturation2' incorporates:
     *  DataTypeConversion: '<S126>/Data Type Conversion2'
     *  Switch: '<S30>/Switch1'
     */
    rtb_Switch1_p4vc = rtb_DataTypeConversion2_hco0;
  } else {
    rtb_Switch1_p4vc = -32767;
  }

  /* End of Switch: '<S30>/Switch1' */

  /* Saturate: '<S59>/Saturation' incorporates:
   *  Constant: '<S59>/Constant'
   */
  if (Gu16_facSpdFltCoeff_C > 39322) {
    rtb_Saturation_pmq2 = 39322U;
  } else if (Gu16_facSpdFltCoeff_C < 4000) {
    rtb_Saturation_pmq2 = 4000U;
  } else {
    rtb_Saturation_pmq2 = Gu16_facSpdFltCoeff_C;
  }

  /* End of Saturate: '<S59>/Saturation' */

  /* Sum: '<S62>/Add1' incorporates:
   *  Constant: '<S62>/Constant'
   *  Product: '<S62>/Product'
   *  Product: '<S62>/Product1'
   *  Saturate: '<S59>/Saturation'
   *  Sum: '<S62>/Add2'
   *  Switch: '<S30>/Switch1'
   *  UnitDelay: '<S62>/Unit Delay'
   */
  rtb_Add1_p3bv = ((rtb_Switch1_p4vc * rtb_Saturation_pmq2) >> 1) +
    mul_ssu32_loSR(ASW_PhVltgGen_DW.UnitDelay_DSTATE_fiwk, (uint32)((131072 -
    rtb_Saturation_pmq2) >> 2), 15U);

  /* DataTypeConversion: '<S62>/Data Type Conversion' incorporates:
   *  Sum: '<S62>/Add1'
   */
  rtb_DataTypeConversion_ezfk = (dt_Standardize_s16p15b0)(rtb_Add1_p3bv >> 16);

  /* Saturate: '<S316>/Saturation2' incorporates:
   *  DataTypeConversion: '<S62>/Data Type Conversion'
   */
  if (rtb_DataTypeConversion_ezfk >= -32767) {
    rtb_Switch_aifc_idx_1 = rtb_DataTypeConversion_ezfk;
  } else {
    rtb_Switch_aifc_idx_1 = -32767;
  }

  /* Sum: '<S316>/Add1' incorporates:
   *  Constant: '<S316>/Gs16_tCtlVltgDelTi_C'
   *  Gain: '<S316>/Gain'
   *  Product: '<S316>/Product2'
   *  Saturate: '<S316>/Saturation2'
   *  Switch: '<S321>/Switch1'
   */
  rtb_Add1_cfcy = (dt_RadAng_u16r15b0)(rtb_Switch1_d0v1 + ((sint16)((((sint16)
    (((rtb_Switch_aifc_idx_1 >> 1) * Gs16_tCtlVltgDelTi_C) >> 10)) * 20861) >>
    14)));

  /* Selector: '<S339>/Selector1' incorporates:
   *  Constant: '<S339>/Constant'
   *  Constant: '<S339>/Constant1'
   *  Gain: '<S339>/Gain'
   *  Sum: '<S316>/Add1'
   *  Sum: '<S339>/Add'
   */
  rtb_Selector1_majb = rtCP_Constant1_Value_hq2b[(sint32)((1023U * ((uint16)
    (16384 - rtb_Add1_cfcy))) >> 16)];

  /* Saturate: '<S316>/Saturation4' incorporates:
   *  Product: '<S2>/Product1'
   */
  if (rtb_Product1_ccy0 >= -32767) {
    rtb_Saturation4_ectf = rtb_Product1_ccy0;
  } else {
    rtb_Saturation4_ectf = -32767;
  }

  /* End of Saturate: '<S316>/Saturation4' */

  /* Selector: '<S336>/Selector1' incorporates:
   *  Constant: '<S336>/Constant'
   *  Gain: '<S336>/Gain'
   */
  rtb_Selector1_k032 = rtCP_Constant_Value_lajm[(sint32)((1023U * rtb_Add1_cfcy)
    >> 16)];

  /* Saturate: '<S235>/Saturation4' incorporates:
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   */
  if (busPhVltgGen_MedTaskIn.s16_uRefDaxVltgLim >= -32767) {
    rtb_Saturation4_ioke = busPhVltgGen_MedTaskIn.s16_uRefDaxVltgLim;
  } else {
    rtb_Saturation4_ioke = -32767;
  }

  /* End of Saturate: '<S235>/Saturation4' */

  /* DataTypeConversion: '<S269>/Data Type Conversion' incorporates:
   *  Saturate: '<S235>/Saturation4'
   */
  rtb_DataTypeConversion_erni = (sint16)(rtb_Saturation4_ioke >> 1);

  /* RelationalOperator: '<S236>/Compare' incorporates:
   *  Constant: '<S236>/Constant'
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   *  RelationalOperator: '<S348>/Compare'
   */
  rtb_Compare_chmk = (busPhVltgGen_MedTaskIn.enm_stMotoSt == OFF);

  /* DataTypeConversion: '<S275>/Data Type Conversion' incorporates:
   *  Saturate: '<S235>/Saturation4'
   */
  rtb_DataTypeConversion = (rtb_Saturation4_ioke << 16);

  /* DataTypeConversion: '<S275>/Data Type Conversion1' incorporates:
   *  Gain: '<S235>/Gain'
   *  Saturate: '<S235>/Saturation4'
   */
  rtb_DataTypeConversion1 = (((dt_Standardize_s16p15b0)(-rtb_Saturation4_ioke)) <<
    16);

  /* Switch: '<S286>/Switch2' incorporates:
   *  DataTypeConversion: '<S275>/Data Type Conversion'
   *  DataTypeConversion: '<S275>/Data Type Conversion1'
   *  RelationalOperator: '<S286>/Relational Operator2'
   */
  if (rtb_DataTypeConversion > rtb_DataTypeConversion1) {
    /* Saturate: '<S264>/Saturation' incorporates:
     *  Constant: '<S264>/Constant'
     */
    if (Gu16_facDaxCurrCtlKp_C <= 18204) {
      u0 = Gu16_facDaxCurrCtlKp_C;
    } else {
      u0 = 18204U;
    }

    /* Saturate: '<S235>/Saturation' incorporates:
     *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
     */
    if (busPhVltgGen_MedTaskIn.s16_iRefDaxQaxCurr[0] > 14746) {
      rtb_Switch_aifc_idx_1 = 14746;
    } else if (busPhVltgGen_MedTaskIn.s16_iRefDaxQaxCurr[0] < -14746) {
      rtb_Switch_aifc_idx_1 = -14746;
    } else {
      rtb_Switch_aifc_idx_1 = busPhVltgGen_MedTaskIn.s16_iRefDaxQaxCurr[0];
    }

    /* Product: '<S275>/Product' incorporates:
     *  Saturate: '<S235>/Saturation'
     *  Saturate: '<S235>/Saturation1'
     *  Saturate: '<S264>/Saturation'
     *  Sum: '<S262>/Add1'
     */
    rtb_lb_propActn_i4nd = ((u0 * (rtb_Switch_aifc_idx_1 - y)) << 2);

    /* Switch: '<S286>/Switch1' incorporates:
     *  Product: '<S275>/Product'
     *  RelationalOperator: '<S286>/Relational Operator1'
     */
    if (rtb_lb_propActn_i4nd <= rtb_DataTypeConversion) {
      /* Switch: '<S286>/Switch' incorporates:
       *  RelationalOperator: '<S286>/Relational Operator'
       */
      if (rtb_lb_propActn_i4nd >= rtb_DataTypeConversion1) {
        /* Switch: '<S286>/Switch2' */
        rtb_Switch2 = rtb_lb_propActn_i4nd;
      } else {
        /* Switch: '<S286>/Switch2' */
        rtb_Switch2 = rtb_DataTypeConversion1;
      }

      /* End of Switch: '<S286>/Switch' */
    } else {
      /* Switch: '<S286>/Switch2' */
      rtb_Switch2 = rtb_DataTypeConversion;
    }

    /* End of Switch: '<S286>/Switch1' */
  } else {
    rtb_Switch2 = rtb_DataTypeConversion;
  }

  /* End of Switch: '<S286>/Switch2' */

  /* DataTypeConversion: '<S275>/Data Type Conversion2' incorporates:
   *  Switch: '<S286>/Switch2'
   */
  rtb_DataTypeConversion2_mweb = (dt_Standardize_s16p15b0)(rtb_Switch2 >> 16);

  /* Switch: '<S275>/Switch1' incorporates:
   *  Constant: '<S269>/Constant4'
   *  DataTypeConversion: '<S275>/Data Type Conversion2'
   *  Sum: '<S275>/Add'
   */
  if (rtb_Compare_chmk) {
    rtb_Switch1_p2ct = 0;

    /* Switch: '<S277>/Switch1' incorporates:
     *  Constant: '<S269>/Constant4'
     *  Constant: '<S277>/Constant'
     *  Switch: '<S275>/Switch1'
     */
    rtb_Switch1_hrxo = 0;
  } else {
    rtb_Switch1_p2ct = rtb_DataTypeConversion2_mweb;

    /* Saturate: '<S266>/Saturation' incorporates:
     *  Constant: '<S266>/Constant'
     *  DataTypeConversion: '<S275>/Data Type Conversion2'
     *  Sum: '<S275>/Add'
     *  Switch: '<S275>/Switch1'
     *  Switch: '<S277>/Switch1'
     */
    if (Gu16_facDaxCurrCtlKi_C <= 63998) {
      u0 = Gu16_facDaxCurrCtlKi_C;
    } else {
      u0 = 63998U;
    }

    /* Switch: '<S277>/Switch1' incorporates:
     *  Constant: '<S262>/Constant5'
     *  DataTypeConversion: '<S275>/Data Type Conversion2'
     *  Product: '<S277>/Product1'
     *  Product: '<S277>/Product2'
     *  Saturate: '<S266>/Saturation'
     *  Sum: '<S269>/Add1'
     *  Sum: '<S269>/Add3'
     *  UnitDelay: '<S269>/Unit Delay'
     *  UnitDelay: '<S269>/Unit Delay1'
     */
    rtb_Switch1_hrxo = mul_ssu32_loSR(((sint16)(rtb_DataTypeConversion2_mweb +
      (((sint16)((ASW_PhVltgGen_DW.UnitDelay_DSTATE_p44p -
                  (ASW_PhVltgGen_DW.UnitDelay1_DSTATE_gk3t << 1)) >> 1)) << 1)))
      * 33554, u0, 15U);
  }

  /* End of Switch: '<S275>/Switch1' */

  /* Switch: '<S283>/Switch1' incorporates:
   *  Constant: '<S283>/Constant1'
   *  UnitDelay: '<S283>/Unit Delay1'
   */
  if (ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_la0o) {
    tmp_0 = rtb_Compare_chmk;
  } else {
    tmp_0 = true;
  }

  /* Switch: '<S283>/Switch' incorporates:
   *  DataTypeConversion: '<S277>/Data Type Conversion2'
   *  Switch: '<S283>/Switch1'
   *  UnitDelay: '<S283>/Unit Delay'
   */
  if (tmp_0) {
    rtb_TmpSignalConversionAtBusC_2 = 0;
  } else {
    rtb_TmpSignalConversionAtBusC_2 = ASW_PhVltgGen_DW.UnitDelay_DSTATE_kt4g;
  }

  /* Sum: '<S277>/Sum' incorporates:
   *  Switch: '<S277>/Switch1'
   *  Switch: '<S283>/Switch'
   */
  rtb_Sum_cby0 = rtb_Switch1_hrxo + rtb_TmpSignalConversionAtBusC_2;

  /* Sum: '<S269>/Add2' incorporates:
   *  DataTypeConversion: '<S277>/Data Type Conversion'
   *  Sum: '<S277>/Sum'
   *  Switch: '<S275>/Switch1'
   *  Switch: '<S277>/Switch'
   */
  rtb_Add2_aalz = (sint16)((rtb_Switch1_p2ct + (rtb_Sum_cby0 >> 16)) >> 1);

  /* DataTypeConversion: '<S269>/Data Type Conversion1' incorporates:
   *  Gain: '<S235>/Gain'
   *  Saturate: '<S235>/Saturation4'
   */
  rtb_DataTypeConversion1_dkcs = (sint16)(((dt_Standardize_s16p15b0)
    (-rtb_Saturation4_ioke)) >> 1);

  /* Switch: '<S274>/Switch2' incorporates:
   *  DataTypeConversion: '<S269>/Data Type Conversion'
   *  DataTypeConversion: '<S269>/Data Type Conversion1'
   *  RelationalOperator: '<S274>/Relational Operator2'
   */
  if (rtb_DataTypeConversion_erni > rtb_DataTypeConversion1_dkcs) {
    /* Switch: '<S274>/Switch1' incorporates:
     *  RelationalOperator: '<S274>/Relational Operator1'
     *  Sum: '<S269>/Add2'
     */
    if (rtb_Add2_aalz <= rtb_DataTypeConversion_erni) {
      /* Switch: '<S274>/Switch' incorporates:
       *  RelationalOperator: '<S274>/Relational Operator'
       */
      if (rtb_Add2_aalz >= rtb_DataTypeConversion1_dkcs) {
        rtb_Switch_aifc_idx_1 = rtb_Add2_aalz;
      } else {
        rtb_Switch_aifc_idx_1 = rtb_DataTypeConversion1_dkcs;
      }

      /* End of Switch: '<S274>/Switch' */
    } else {
      rtb_Switch_aifc_idx_1 = rtb_DataTypeConversion_erni;
    }

    /* End of Switch: '<S274>/Switch1' */
  } else {
    rtb_Switch_aifc_idx_1 = rtb_DataTypeConversion_erni;
  }

  /* DataTypeConversion: '<S269>/Data Type Conversion2' incorporates:
   *  Switch: '<S274>/Switch2'
   */
  rtb_DataTypeConversion2_gwbl = (dt_Standardize_s16p15b0)(rtb_Switch_aifc_idx_1
    << 1);

  /* Saturate: '<S235>/Saturation5' incorporates:
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   */
  if (busPhVltgGen_MedTaskIn.s16_uRefQaxVltgLim >= -32767) {
    rtb_Saturation5 = busPhVltgGen_MedTaskIn.s16_uRefQaxVltgLim;
  } else {
    rtb_Saturation5 = -32767;
  }

  /* End of Saturate: '<S235>/Saturation5' */

  /* DataTypeConversion: '<S296>/Data Type Conversion' incorporates:
   *  Saturate: '<S235>/Saturation5'
   */
  rtb_DataTypeConversion_bmde = (sint16)(rtb_Saturation5 >> 1);

  /* DataTypeConversion: '<S302>/Data Type Conversion' incorporates:
   *  Saturate: '<S235>/Saturation5'
   */
  rtb_DataTypeConversion_lkol = (rtb_Saturation5 << 16);

  /* DataTypeConversion: '<S302>/Data Type Conversion1' incorporates:
   *  Gain: '<S235>/Gain1'
   *  Saturate: '<S235>/Saturation5'
   */
  rtb_DataTypeConversion1_i3ac = (((dt_Standardize_s16p15b0)(-rtb_Saturation5)) <<
    16);

  /* Switch: '<S313>/Switch2' incorporates:
   *  DataTypeConversion: '<S302>/Data Type Conversion'
   *  DataTypeConversion: '<S302>/Data Type Conversion1'
   *  RelationalOperator: '<S313>/Relational Operator2'
   */
  if (rtb_DataTypeConversion_lkol > rtb_DataTypeConversion1_i3ac) {
    /* Saturate: '<S291>/Saturation' incorporates:
     *  Constant: '<S291>/Constant'
     */
    if (Gu16_facQaxCurrCtlKp_C <= 18204) {
      u0 = Gu16_facQaxCurrCtlKp_C;
    } else {
      u0 = 18204U;
    }

    /* Saturate: '<S235>/Saturation' incorporates:
     *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
     */
    if (busPhVltgGen_MedTaskIn.s16_iRefDaxQaxCurr[1] > 14746) {
      rtb_Switch_aifc_idx_1 = 14746;
    } else if (busPhVltgGen_MedTaskIn.s16_iRefDaxQaxCurr[1] < -14746) {
      rtb_Switch_aifc_idx_1 = -14746;
    } else {
      rtb_Switch_aifc_idx_1 = busPhVltgGen_MedTaskIn.s16_iRefDaxQaxCurr[1];
    }

    /* Product: '<S302>/Product' incorporates:
     *  Saturate: '<S235>/Saturation'
     *  Saturate: '<S235>/Saturation1'
     *  Saturate: '<S291>/Saturation'
     *  Sum: '<S289>/Add1'
     */
    rtb_lb_propActn = ((u0 * (rtb_Switch_aifc_idx_1 - y_0)) << 2);

    /* Switch: '<S313>/Switch1' incorporates:
     *  Product: '<S302>/Product'
     *  RelationalOperator: '<S313>/Relational Operator1'
     */
    if (rtb_lb_propActn <= rtb_DataTypeConversion_lkol) {
      /* Switch: '<S313>/Switch' incorporates:
       *  RelationalOperator: '<S313>/Relational Operator'
       */
      if (rtb_lb_propActn >= rtb_DataTypeConversion1_i3ac) {
        /* Switch: '<S313>/Switch2' */
        rtb_Switch2_obfd = rtb_lb_propActn;
      } else {
        /* Switch: '<S313>/Switch2' */
        rtb_Switch2_obfd = rtb_DataTypeConversion1_i3ac;
      }

      /* End of Switch: '<S313>/Switch' */
    } else {
      /* Switch: '<S313>/Switch2' */
      rtb_Switch2_obfd = rtb_DataTypeConversion_lkol;
    }

    /* End of Switch: '<S313>/Switch1' */
  } else {
    rtb_Switch2_obfd = rtb_DataTypeConversion_lkol;
  }

  /* End of Switch: '<S313>/Switch2' */

  /* DataTypeConversion: '<S302>/Data Type Conversion2' incorporates:
   *  Switch: '<S313>/Switch2'
   */
  rtb_DataTypeConversion2_bcnl = (dt_Standardize_s16p15b0)(rtb_Switch2_obfd >>
    16);

  /* Switch: '<S302>/Switch1' incorporates:
   *  Constant: '<S296>/Constant4'
   *  DataTypeConversion: '<S302>/Data Type Conversion2'
   *  Sum: '<S302>/Add'
   */
  if (rtb_Compare_chmk) {
    rtb_Switch1_i0ci = 0;

    /* Switch: '<S304>/Switch1' incorporates:
     *  Constant: '<S296>/Constant4'
     *  Constant: '<S304>/Constant'
     *  Switch: '<S302>/Switch1'
     */
    rtb_Switch1_lnyj = 0;
  } else {
    rtb_Switch1_i0ci = rtb_DataTypeConversion2_bcnl;

    /* Saturate: '<S293>/Saturation' incorporates:
     *  Constant: '<S293>/Constant'
     *  DataTypeConversion: '<S302>/Data Type Conversion2'
     *  Sum: '<S302>/Add'
     *  Switch: '<S302>/Switch1'
     *  Switch: '<S304>/Switch1'
     */
    if (Gu16_facQaxCurrCtlKi_C <= 63998) {
      u0 = Gu16_facQaxCurrCtlKi_C;
    } else {
      u0 = 63998U;
    }

    /* Switch: '<S304>/Switch1' incorporates:
     *  Constant: '<S289>/Constant5'
     *  DataTypeConversion: '<S302>/Data Type Conversion2'
     *  Product: '<S304>/Product1'
     *  Product: '<S304>/Product2'
     *  Saturate: '<S293>/Saturation'
     *  Sum: '<S296>/Add1'
     *  Sum: '<S296>/Add3'
     *  UnitDelay: '<S296>/Unit Delay'
     *  UnitDelay: '<S296>/Unit Delay1'
     */
    rtb_Switch1_lnyj = mul_ssu32_loSR(((sint16)(rtb_DataTypeConversion2_bcnl +
      (((sint16)((ASW_PhVltgGen_DW.UnitDelay_DSTATE_gvry -
                  (ASW_PhVltgGen_DW.UnitDelay1_DSTATE_mewr << 1)) >> 1)) << 1)))
      * 33554, u0, 15U);
  }

  /* End of Switch: '<S302>/Switch1' */

  /* Switch: '<S310>/Switch1' incorporates:
   *  Constant: '<S310>/Constant1'
   *  UnitDelay: '<S310>/Unit Delay1'
   */
  if (ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_l4aj) {
    tmp_0 = rtb_Compare_chmk;
  } else {
    tmp_0 = true;
  }

  /* Switch: '<S310>/Switch' incorporates:
   *  DataTypeConversion: '<S304>/Data Type Conversion2'
   *  Switch: '<S310>/Switch1'
   *  UnitDelay: '<S310>/Unit Delay'
   */
  if (tmp_0) {
    rtb_TmpSignalConversionAtBusC_2 = 0;
  } else {
    rtb_TmpSignalConversionAtBusC_2 = ASW_PhVltgGen_DW.UnitDelay_DSTATE_afgq;
  }

  /* Sum: '<S304>/Sum' incorporates:
   *  Switch: '<S304>/Switch1'
   *  Switch: '<S310>/Switch'
   */
  rtb_Sum_fda4 = rtb_Switch1_lnyj + rtb_TmpSignalConversionAtBusC_2;

  /* Sum: '<S296>/Add2' incorporates:
   *  DataTypeConversion: '<S304>/Data Type Conversion'
   *  Sum: '<S304>/Sum'
   *  Switch: '<S302>/Switch1'
   *  Switch: '<S304>/Switch'
   */
  rtb_Add2_doeq = (sint16)((rtb_Switch1_i0ci + (rtb_Sum_fda4 >> 16)) >> 1);

  /* DataTypeConversion: '<S296>/Data Type Conversion1' incorporates:
   *  Gain: '<S235>/Gain1'
   *  Saturate: '<S235>/Saturation5'
   */
  rtb_DataTypeConversion1_eqye = (sint16)(((dt_Standardize_s16p15b0)
    (-rtb_Saturation5)) >> 1);

  /* Switch: '<S301>/Switch2' incorporates:
   *  DataTypeConversion: '<S296>/Data Type Conversion'
   *  DataTypeConversion: '<S296>/Data Type Conversion1'
   *  RelationalOperator: '<S301>/Relational Operator2'
   */
  if (rtb_DataTypeConversion_bmde > rtb_DataTypeConversion1_eqye) {
    /* Switch: '<S301>/Switch1' incorporates:
     *  RelationalOperator: '<S301>/Relational Operator1'
     *  Sum: '<S296>/Add2'
     */
    if (rtb_Add2_doeq <= rtb_DataTypeConversion_bmde) {
      /* Switch: '<S301>/Switch' incorporates:
       *  RelationalOperator: '<S301>/Relational Operator'
       */
      if (rtb_Add2_doeq >= rtb_DataTypeConversion1_eqye) {
        rtb_Switch_aifc_idx_1 = rtb_Add2_doeq;
      } else {
        rtb_Switch_aifc_idx_1 = rtb_DataTypeConversion1_eqye;
      }

      /* End of Switch: '<S301>/Switch' */
    } else {
      rtb_Switch_aifc_idx_1 = rtb_DataTypeConversion_bmde;
    }

    /* End of Switch: '<S301>/Switch1' */
  } else {
    rtb_Switch_aifc_idx_1 = rtb_DataTypeConversion_bmde;
  }

  /* DataTypeConversion: '<S296>/Data Type Conversion2' incorporates:
   *  Switch: '<S301>/Switch2'
   */
  rtb_DataTypeConversion2_o3w2 = (dt_Standardize_s16p15b0)(rtb_Switch_aifc_idx_1
    << 1);

  /* Switch: '<S235>/Switch' incorporates:
   *  Constant: '<S235>/Gbol_flgDaxQaxCurrClpFlg_C'
   *  Constant: '<S235>/Gu16_psiPermMagFlx_C'
   *  Constant: '<S235>/Gu16_psiPermMagFlx_C2'
   *  DataTypeConversion: '<S269>/Data Type Conversion2'
   *  DataTypeConversion: '<S296>/Data Type Conversion2'
   *  Gain: '<S235>/Gain2'
   *  Gain: '<S235>/Gain3'
   *  Gain: '<S235>/Gain4'
   *  Gain: '<S235>/Gain5'
   *  Gain: '<S235>/Gain6'
   *  Gain: '<S235>/Gain7'
   *  Gain: '<S235>/Gain9'
   *  Gain: '<S248>/Gain'
   *  Gain: '<S249>/Gain'
   *  Product: '<S248>/Product1'
   *  Product: '<S248>/Product4'
   *  Product: '<S249>/Product1'
   *  Product: '<S249>/Product2'
   *  Product: '<S249>/Product3'
   *  Saturate: '<S235>/Saturation1'
   *  Sum: '<S248>/Add'
   *  Sum: '<S249>/Add'
   *  Sum: '<S249>/Add1'
   */
  if (Gbol_flgDaxQaxCurrClpFlg_C) {
    /* Saturate: '<S235>/Saturation3' incorporates:
     *  DataTypeConversion: '<S62>/Data Type Conversion'
     */
    if (rtb_DataTypeConversion_ezfk >= -32767) {
      rtb_Switch_aifc_idx_1 = rtb_DataTypeConversion_ezfk;
    } else {
      rtb_Switch_aifc_idx_1 = -32767;
    }

    /* Gain: '<S235>/Gain6' incorporates:
     *  Saturate: '<S235>/Saturation3'
     */
    rtb_Gain6_hpkv = (sint16)(rtb_Switch_aifc_idx_1 >> 1);
    rtb_DataTypeConversion_des1_i_0 = (sint16)(((sint16)
      ((((rtb_DataTypeConversion2_gwbl >> 1) << 1) - ((((sint16)((rtb_Gain6_hpkv
      * rtb_Gain8_tmp) >> 14)) * (y_0 >> 1)) >> 13)) >> 1)) << 1);
    rtb_Switch_aifc_idx_1 = (sint16)(((sint16)((((((rtb_DataTypeConversion2_o3w2
      >> 1) << 1) + ((((sint16)((rtb_Gain6_hpkv * ((uint16)((53687U *
      Gu16_indDaxIndc_C) >> 15))) >> 14)) * (y >> 1)) >> 13)) >> 1) + ((sint16)
      ((rtb_Gain6_hpkv * ((uint16)((62915U * Gu16_psiPermMagFlx_C) >> 15))) >>
       14))) >> 1)) << 2);
  } else {
    rtb_DataTypeConversion_des1_i_0 = rtb_DataTypeConversion2_gwbl;
    rtb_Switch_aifc_idx_1 = rtb_DataTypeConversion2_o3w2;
  }

  /* Saturate: '<S5>/Saturation' */
  if (rtb_DataTypeConversion_des1_i_0 >= -32767) {
    rtb_Saturation_lsvn = rtb_DataTypeConversion_des1_i_0;
  } else {
    rtb_Saturation_lsvn = -32767;
  }

  /* End of Saturate: '<S5>/Saturation' */

  /* Saturate: '<S5>/Saturation1' */
  if (rtb_Switch_aifc_idx_1 >= -32767) {
    rtb_Saturation1_aitf = rtb_Switch_aifc_idx_1;
  } else {
    rtb_Saturation1_aitf = -32767;
  }

  /* End of Saturate: '<S5>/Saturation1' */

  /* If: '<S66>/If' incorporates:
   *  Abs: '<S70>/Abs'
   *  Logic: '<S66>/AND'
   *  RelationalOperator: '<S68>/Compare'
   *  RelationalOperator: '<S69>/Compare'
   *  Saturate: '<S5>/Saturation'
   *  Saturate: '<S5>/Saturation1'
   */
  if ((rtb_Saturation_lsvn == 0) && (rtb_Saturation1_aitf == 0)) {
    /* Outputs for IfAction SubSystem: '<S66>/ias_ZeroInput' incorporates:
     *  ActionPort: '<S71>/Action Port'
     */
    /* SignalConversion generated from: '<S71>/lb_genHypt' incorporates:
     *  Constant: '<S71>/Constant'
     *  Merge: '<S66>/Merge'
     */
    rtb_Merge_jahx = 0U;

    /* End of Outputs for SubSystem: '<S66>/ias_ZeroInput' */
  } else {
    /* Outputs for IfAction SubSystem: '<S66>/ias_NonZeroInput' incorporates:
     *  ActionPort: '<S70>/Action Port'
     */
    if (rtb_Saturation_lsvn < 0) {
      /* Abs: '<S70>/Abs' */
      rtb_Abs_doti = (dt_Standardize_s16p15b0)(-rtb_Saturation_lsvn);
    } else {
      /* Abs: '<S70>/Abs' */
      rtb_Abs_doti = rtb_Saturation_lsvn;
    }

    /* Abs: '<S70>/Abs1' */
    if (rtb_Saturation1_aitf < 0) {
      rtb_Abs1_afkz = (dt_Standardize_s16p15b0)(-rtb_Saturation1_aitf);
    } else {
      rtb_Abs1_afkz = rtb_Saturation1_aitf;
    }

    /* End of Abs: '<S70>/Abs1' */

    /* MinMax: '<S70>/Min1' incorporates:
     *  Abs: '<S70>/Abs'
     *  Abs: '<S70>/Abs1'
     */
    if (rtb_Abs_doti >= rtb_Abs1_afkz) {
      rtb_lb_genMaxInpMods_j3r1 = rtb_Abs_doti;
    } else {
      rtb_lb_genMaxInpMods_j3r1 = rtb_Abs1_afkz;
    }

    /* End of MinMax: '<S70>/Min1' */

    /* Selector: '<S70>/Selector1' incorporates:
     *  Abs: '<S70>/Abs'
     *  Abs: '<S70>/Abs1'
     *  Gain: '<S70>/Gain'
     *  MinMax: '<S70>/Min'
     *  MinMax: '<S70>/Min1'
     *  Product: '<S70>/Divide2'
     *  Saturate: '<S70>/Saturation'
     */
    if (rtb_Abs_doti <= rtb_Abs1_afkz) {
      rtb_Switch_aifc_idx_1 = rtb_Abs_doti;
    } else {
      rtb_Switch_aifc_idx_1 = rtb_Abs1_afkz;
    }

    u0 = (uint16)((511U * ((uint16)((rtb_Switch_aifc_idx_1 << 15) /
      rtb_lb_genMaxInpMods_j3r1))) >> 15);
    if (u0 <= 511) {
    } else {
      u0 = 511U;
    }

    /* SignalConversion generated from: '<S70>/lb_genHypt' incorporates:
     *  Constant: '<S70>/Constant3'
     *  Merge: '<S66>/Merge'
     *  MinMax: '<S70>/Min1'
     *  Product: '<S70>/Multiply'
     *  Saturate: '<S70>/Saturation'
     *  Selector: '<S70>/Selector1'
     */
    rtb_Merge_jahx = (dt_Standardize_u16p15b0)((rtCP_Constant3_Value_VLTG[u0] *
      rtb_lb_genMaxInpMods_j3r1) >> 15);

    /* End of Outputs for SubSystem: '<S66>/ias_NonZeroInput' */
  }

  /* End of If: '<S66>/If' */

  /* If: '<S67>/If' incorporates:
   *  DataTypeConversion: '<S76>/Data Type Conversion'
   *  DataTypeConversion: '<S76>/Data Type Conversion3'
   *  Gain: '<S76>/Gain'
   *  If: '<S82>/If'
   *  Logic: '<S82>/AND'
   *  Logic: '<S82>/AND1'
   *  Logic: '<S82>/OR'
   *  Merge: '<S66>/Merge'
   *  RelationalOperator: '<S75>/Compare'
   *  RelationalOperator: '<S78>/Relational Operator2'
   *  RelationalOperator: '<S83>/Compare'
   *  RelationalOperator: '<S84>/Compare'
   *  RelationalOperator: '<S85>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   *  Saturate: '<S5>/Saturation'
   *  Saturate: '<S5>/Saturation1'
   *  Switch: '<S78>/Switch2'
   */
  if (rtb_Merge_jahx == 0) {
    /* Outputs for IfAction SubSystem: '<S67>/ias_ZeroInput' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    /* SignalConversion generated from: '<S77>/lb_arOutpPhs' incorporates:
     *  Constant: '<S77>/Constant'
     *  Merge: '<S67>/Merge'
     */
    busPhVltgGen_MedTaskOut.u16_phiDaxQaxVltgAg = 0U;

    /* End of Outputs for SubSystem: '<S67>/ias_ZeroInput' */

    /* Outputs for IfAction SubSystem: '<S67>/ias_NonZeroInput' incorporates:
     *  ActionPort: '<S76>/Action Port'
     */
  } else if (((rtb_Saturation1_aitf >= 0) && (rtb_Saturation_lsvn >= 0)) ||
             ((rtb_Saturation1_aitf < 0) && (rtb_Saturation_lsvn >= 0))) {
    /* Switch: '<S78>/Switch2' incorporates:
     *  DataTypeConversion: '<S76>/Data Type Conversion'
     *  DataTypeConversion: '<S76>/Data Type Conversion3'
     *  Gain: '<S76>/Gain'
     *  RelationalOperator: '<S78>/Relational Operator2'
     */
    if (((dt_Standardize_s16p15b0)rtb_Merge_jahx) > ((dt_Standardize_s16p15b0)
         (-((sint16)rtb_Merge_jahx)))) {
      /* Switch: '<S78>/Switch1' incorporates:
       *  RelationalOperator: '<S78>/Relational Operator1'
       *  Saturate: '<S5>/Saturation1'
       */
      if (rtb_Saturation1_aitf <= ((dt_Standardize_s16p15b0)rtb_Merge_jahx)) {
        /* Switch: '<S78>/Switch' incorporates:
         *  RelationalOperator: '<S78>/Relational Operator'
         */
        if (rtb_Saturation1_aitf >= ((dt_Standardize_s16p15b0)(-((sint16)
               rtb_Merge_jahx)))) {
          rtb_Switch_aifc_idx_1 = rtb_Saturation1_aitf;
        } else {
          rtb_Switch_aifc_idx_1 = (dt_Standardize_s16p15b0)(-((sint16)
            rtb_Merge_jahx));
        }
      } else {
        rtb_Switch_aifc_idx_1 = (dt_Standardize_s16p15b0)rtb_Merge_jahx;
      }
    } else {
      rtb_Switch_aifc_idx_1 = (dt_Standardize_s16p15b0)rtb_Merge_jahx;
    }

    /* Outputs for IfAction SubSystem: '<S82>/ias_AngleShiftNotApplied' incorporates:
     *  ActionPort: '<S88>/Action Port'
     */
    /* If: '<S82>/If' incorporates:
     *  Constant: '<S76>/Constant'
     *  Constant: '<S76>/lb_parAsinFunLkt'
     *  DataTypeConversion: '<S76>/Data Type Conversion1'
     *  DataTypeConversion: '<S76>/Data Type Conversion2'
     *  Gain: '<S76>/Gain1'
     *  Merge: '<S67>/Merge'
     *  Product: '<S76>/Divide'
     *  Selector: '<S76>/Selector1'
     *  SignalConversion: '<S88>/Signal Conversion'
     *  Sum: '<S76>/Add'
     *  Switch: '<S78>/Switch2'
     */
    busPhVltgGen_MedTaskOut.u16_phiDaxQaxVltgAg = (dt_RadAng_u16r15b0)
      rtCP_lb_parAsinFunLkt_Value[(sint32)((2047U * ((uint16)(((sint16)
      ((rtb_Switch_aifc_idx_1 << 14) / ((sint16)rtb_Merge_jahx))) + 16384))) >>
      14)];

    /* End of Outputs for SubSystem: '<S82>/ias_AngleShiftNotApplied' */
  } else {
    if (((dt_Standardize_s16p15b0)rtb_Merge_jahx) > ((dt_Standardize_s16p15b0)
         (-((sint16)rtb_Merge_jahx)))) {
      /* Switch: '<S78>/Switch1' incorporates:
       *  DataTypeConversion: '<S76>/Data Type Conversion'
       *  RelationalOperator: '<S78>/Relational Operator1'
       *  Saturate: '<S5>/Saturation1'
       *  Switch: '<S78>/Switch2'
       */
      if (rtb_Saturation1_aitf <= ((dt_Standardize_s16p15b0)rtb_Merge_jahx)) {
        /* Switch: '<S78>/Switch' incorporates:
         *  DataTypeConversion: '<S76>/Data Type Conversion3'
         *  Gain: '<S76>/Gain'
         *  RelationalOperator: '<S78>/Relational Operator'
         */
        if (rtb_Saturation1_aitf >= ((dt_Standardize_s16p15b0)(-((sint16)
               rtb_Merge_jahx)))) {
          rtb_Switch_aifc_idx_1 = rtb_Saturation1_aitf;
        } else {
          rtb_Switch_aifc_idx_1 = (dt_Standardize_s16p15b0)(-((sint16)
            rtb_Merge_jahx));
        }
      } else {
        rtb_Switch_aifc_idx_1 = (dt_Standardize_s16p15b0)rtb_Merge_jahx;
      }
    } else {
      /* Switch: '<S78>/Switch2' incorporates:
       *  DataTypeConversion: '<S76>/Data Type Conversion'
       */
      rtb_Switch_aifc_idx_1 = (dt_Standardize_s16p15b0)rtb_Merge_jahx;
    }

    /* Outputs for IfAction SubSystem: '<S82>/ias_AngleShiftApplied' incorporates:
     *  ActionPort: '<S87>/Action Port'
     */
    /* If: '<S82>/If' incorporates:
     *  Constant: '<S76>/Constant'
     *  Constant: '<S76>/lb_parAsinFunLkt'
     *  Constant: '<S87>/Constant'
     *  DataTypeConversion: '<S76>/Data Type Conversion1'
     *  DataTypeConversion: '<S76>/Data Type Conversion2'
     *  Gain: '<S76>/Gain1'
     *  Merge: '<S67>/Merge'
     *  Product: '<S76>/Divide'
     *  Selector: '<S76>/Selector1'
     *  SignalConversion generated from: '<S87>/lb_arOutpPhs'
     *  Sum: '<S76>/Add'
     *  Sum: '<S87>/Add'
     *  Switch: '<S78>/Switch2'
     */
    busPhVltgGen_MedTaskOut.u16_phiDaxQaxVltgAg = (dt_RadAng_u16r15b0)(32768 -
      ((uint16)rtCP_lb_parAsinFunLkt_Value[(sint32)((2047U * ((uint16)(((sint16)
      ((rtb_Switch_aifc_idx_1 << 14) / ((sint16)rtb_Merge_jahx))) + 16384))) >>
      14)]));

    /* End of Outputs for SubSystem: '<S82>/ias_AngleShiftApplied' */

    /* End of Outputs for SubSystem: '<S67>/ias_NonZeroInput' */
  }

  /* End of If: '<S67>/If' */

  /* Saturate: '<S3>/Saturation' incorporates:
   *  Merge: '<S66>/Merge'
   */
  if (rtb_Merge_jahx <= 32767) {
    rtb_Saturation_bskp = rtb_Merge_jahx;
  } else {
    rtb_Saturation_bskp = 32767U;
  }

  /* End of Saturate: '<S3>/Saturation' */

  /* Saturate: '<S3>/Saturation1' incorporates:
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   */
  if (busPhVltgGen_MedTaskIn.u16_ampMaxVltgAmp <= 32767) {
    rtb_Saturation1_gc55 = busPhVltgGen_MedTaskIn.u16_ampMaxVltgAmp;
  } else {
    rtb_Saturation1_gc55 = 32767U;
  }

  /* End of Saturate: '<S3>/Saturation1' */

  /* If: '<S3>/If' incorporates:
   *  MinMax: '<S3>/Min'
   *  RelationalOperator: '<S23>/Compare'
   *  Saturate: '<S3>/Saturation'
   *  Saturate: '<S3>/Saturation1'
   */
  if (rtb_Saturation1_gc55 == 0) {
    /* Outputs for IfAction SubSystem: '<S3>/ias_ZrIn' incorporates:
     *  ActionPort: '<S25>/Action Port'
     */
    /* SignalConversion generated from: '<S25>/u16_ampDycAmpZrIn' incorporates:
     *  Constant: '<S25>/Constant'
     *  Merge: '<S3>/Merge'
     */
    busPhVltgGen_MedTaskOut.u16_ampDycAmp = 0U;

    /* End of Outputs for SubSystem: '<S3>/ias_ZrIn' */
  } else {
    if (rtb_Saturation_bskp <= rtb_Saturation1_gc55) {
      /* MinMax: '<S3>/Min' incorporates:
       *  Saturate: '<S3>/Saturation'
       */
      u0 = rtb_Saturation_bskp;
    } else {
      /* MinMax: '<S3>/Min' */
      u0 = rtb_Saturation1_gc55;
    }

    /* Outputs for IfAction SubSystem: '<S3>/ias_NotZrIn' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    /* SignalConversion generated from: '<S24>/u16_ampDycAmpNotZrIn' incorporates:
     *  Merge: '<S3>/Merge'
     *  MinMax: '<S3>/Min'
     *  Product: '<S24>/Divide'
     */
    busPhVltgGen_MedTaskOut.u16_ampDycAmp = (dt_DutyCycl_u16p15b0)((((uint32)u0)
      << 15) / rtb_Saturation1_gc55);

    /* End of Outputs for SubSystem: '<S3>/ias_NotZrIn' */
  }

  /* End of If: '<S3>/If' */

  /* If: '<S147>/If' incorporates:
   *  Abs: '<S151>/Abs'
   *  Logic: '<S147>/AND'
   *  RelationalOperator: '<S149>/Compare'
   *  RelationalOperator: '<S150>/Compare'
   *  Sum: '<S145>/Add'
   *  Sum: '<S145>/Add1'
   */
  if ((rtb_Add_pgv0 == 0) && (rtb_Add1_cbzj == 0)) {
    /* Outputs for IfAction SubSystem: '<S147>/ias_ZeroInput' incorporates:
     *  ActionPort: '<S152>/Action Port'
     */
    /* BusCreator: '<S315>/Bus Creator1' incorporates:
     *  Constant: '<S152>/Constant'
     *  SignalConversion generated from: '<S152>/lb_genHypt'
     */
    busPhVltgGen_MedTaskOut.u16_psiEstPermMagFlx = 0U;

    /* End of Outputs for SubSystem: '<S147>/ias_ZeroInput' */
  } else {
    /* Outputs for IfAction SubSystem: '<S147>/ias_NonZeroInput' incorporates:
     *  ActionPort: '<S151>/Action Port'
     */
    if (rtb_Add_pgv0 < 0) {
      /* Abs: '<S151>/Abs' */
      rtb_Abs_cy22 = (dt_Standardize_s16p15b0)(-rtb_Add_pgv0);
    } else {
      /* Abs: '<S151>/Abs' */
      rtb_Abs_cy22 = rtb_Add_pgv0;
    }

    /* Abs: '<S151>/Abs1' */
    if (rtb_Add1_cbzj < 0) {
      rtb_Abs1_bbct = (dt_Standardize_s16p15b0)(-rtb_Add1_cbzj);
    } else {
      rtb_Abs1_bbct = rtb_Add1_cbzj;
    }

    /* End of Abs: '<S151>/Abs1' */

    /* MinMax: '<S151>/Min1' incorporates:
     *  Abs: '<S151>/Abs'
     *  Abs: '<S151>/Abs1'
     */
    if (rtb_Abs_cy22 >= rtb_Abs1_bbct) {
      rtb_lb_genMaxInpMods = rtb_Abs_cy22;
    } else {
      rtb_lb_genMaxInpMods = rtb_Abs1_bbct;
    }

    /* End of MinMax: '<S151>/Min1' */

    /* Selector: '<S151>/Selector1' incorporates:
     *  Abs: '<S151>/Abs'
     *  Abs: '<S151>/Abs1'
     *  Gain: '<S151>/Gain'
     *  MinMax: '<S151>/Min'
     *  MinMax: '<S151>/Min1'
     *  Product: '<S151>/Divide2'
     *  Saturate: '<S151>/Saturation'
     */
    if (rtb_Abs_cy22 <= rtb_Abs1_bbct) {
      rtb_Switch_aifc_idx_1 = rtb_Abs_cy22;
    } else {
      rtb_Switch_aifc_idx_1 = rtb_Abs1_bbct;
    }

    u0 = (uint16)((511U * ((uint16)((rtb_Switch_aifc_idx_1 << 15) /
      rtb_lb_genMaxInpMods))) >> 15);
    if (u0 <= 511) {
    } else {
      u0 = 511U;
    }

    /* BusCreator: '<S315>/Bus Creator1' incorporates:
     *  Constant: '<S151>/Constant3'
     *  MinMax: '<S151>/Min1'
     *  Product: '<S151>/Multiply'
     *  Saturate: '<S151>/Saturation'
     *  Selector: '<S151>/Selector1'
     *  SignalConversion generated from: '<S151>/lb_genHypt'
     */
    busPhVltgGen_MedTaskOut.u16_psiEstPermMagFlx = (dt_Standardize_u16p15b0)
      ((rtCP_Constant3_Value_n3oq[u0] * rtb_lb_genMaxInpMods) >> 15);

    /* End of Outputs for SubSystem: '<S147>/ias_NonZeroInput' */
  }

  /* End of If: '<S147>/If' */

  /* Sum: '<S1>/Add1' */
  busPhVltgGen_MedTaskOut.u16_phiSenlElecAgSensElecAgDvt = (dt_RadAng_u16r15b0)
    rtb_Subtract_tmp;

  /* Sum: '<S29>/Add' incorporates:
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   *  Sum: '<S28>/Add2'
   */
  rtb_lb_inpDev = ((rtb_Add2 - busPhVltgGen_MedTaskIn.u16_phiModulActElecAg) <<
                   16);

  /* Saturate: '<S29>/Saturation' incorporates:
   *  Sum: '<S29>/Add'
   */
  if (rtb_lb_inpDev > 341782638) {
    rtb_TmpSignalConversionAtBusC_2 = 341782638;
  } else if (rtb_lb_inpDev < -341782638) {
    rtb_TmpSignalConversionAtBusC_2 = -341782638;
  } else {
    rtb_TmpSignalConversionAtBusC_2 = rtb_lb_inpDev;
  }

  /* Saturate: '<S32>/Saturation' incorporates:
   *  Constant: '<S32>/Constant'
   */
  if (Gu16_fEstAgDvtCompFrq_C > 32000) {
    u0 = 32000U;
  } else if (Gu16_fEstAgDvtCompFrq_C < 1130) {
    u0 = 1130U;
  } else {
    u0 = Gu16_fEstAgDvtCompFrq_C;
  }

  /* Sum: '<S29>/Add1' incorporates:
   *  DataTypeConversion: '<S62>/Data Type Conversion'
   *  Gain: '<S29>/Gain'
   *  Product: '<S29>/mul_KdX_part1'
   *  Saturate: '<S29>/Saturation'
   *  Saturate: '<S32>/Saturation'
   */
  busPhVltgGen_MedTaskOut.s16_nPredActElecSpd = (dt_Standardize_s16p15b0)
    ((mul_s32_loSR(mul_ssu32_loSR(rtb_TmpSignalConversionAtBusC_2, u0, 13U),
                   1686629713, 30U) >> 18) + rtb_DataTypeConversion_ezfk);

  /* BusCreator: '<S315>/Bus Creator1' incorporates:
   *  DataTypeConversion: '<S62>/Data Type Conversion'
   *  Product: '<S341>/Product'
   *  Product: '<S341>/Product1'
   *  Product: '<S341>/Product2'
   *  Product: '<S341>/Product5'
   *  Saturate: '<S316>/Saturation3'
   *  Saturate: '<S316>/Saturation4'
   *  Selector: '<S336>/Selector1'
   *  Selector: '<S339>/Selector1'
   *  SignalConversion generated from: '<S315>/Bus Creator1'
   *  Sum: '<S341>/Add1'
   *  Sum: '<S341>/Add3'
   *  Switch: '<S321>/Switch1'
   */
  busPhVltgGen_MedTaskOut.u16_phiActElecAg = rtb_Switch1_d0v1;
  busPhVltgGen_MedTaskOut.s16_nActElecSpd = rtb_DataTypeConversion_ezfk;
  busPhVltgGen_MedTaskOut.s16_iActDaxQaxCurr[0] =
    rtb_TmpSignalConversionAtBusC_1;
  busPhVltgGen_MedTaskOut.s16_iActDaxQaxCurr[1] =
    rtb_TmpSignalConversionAtBusC_0;
  busPhVltgGen_MedTaskOut.s16_uModulDaxQaxVltg[0] = (dt_Standardize_s16p15b0)
    (((sint16)((rtb_Saturation3 * rtb_Selector1_majb) >> 14)) + ((sint16)
      ((rtb_Saturation4_ectf * rtb_Selector1_k032) >> 14)));
  busPhVltgGen_MedTaskOut.s16_uModulDaxQaxVltg[1] = (dt_Standardize_s16p15b0)
    (((sint16)((rtb_Saturation4_ectf * rtb_Selector1_majb) >> 14)) - ((sint16)
      ((rtb_Saturation3 * rtb_Selector1_k032) >> 14)));
  busPhVltgGen_MedTaskOut.s16_uRefDaxVltg = rtb_DataTypeConversion_des1_i_0;

  /* Switch: '<S118>/Switch1' incorporates:
   *  Constant: '<S118>/Constant'
   *  DataTypeConversion: '<S126>/Data Type Conversion2'
   *  Gain: '<S91>/Gain5'
   *  Product: '<S118>/Product1'
   */
  if (tmp) {
    rtb_Switch_aifc_idx_1 = (sint16)(((rtb_DataTypeConversion2_hco0 >> 1) *
      16777) >> 14);
  } else {
    rtb_Switch_aifc_idx_1 = 0;
  }

  /* Switch: '<S123>/Switch1' incorporates:
   *  Constant: '<S123>/Constant1'
   *  UnitDelay: '<S123>/Unit Delay1'
   */
  if (ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_ktzd) {
    tmp = rtb_LogicalOperator_lnae;
  } else {
    tmp = true;
  }

  /* Switch: '<S123>/Switch' incorporates:
   *  Constant: '<S91>/Cu16_tiMedTaskSmpTi1'
   *  Switch: '<S123>/Switch1'
   *  UnitDelay: '<S123>/Unit Delay'
   */
  if (tmp) {
    u0 = 0U;
  } else {
    u0 = ASW_PhVltgGen_DW.UnitDelay_DSTATE_naon;
  }

  /* Sum: '<S118>/Sum' incorporates:
   *  Switch: '<S118>/Switch1'
   *  Switch: '<S123>/Switch'
   */
  rtb_Sum_fm2f = (uint16)(((rtb_Switch_aifc_idx_1 * 20861) + (u0 << 14)) >> 14);

  /* Update for UnitDelay: '<S347>/Unit Delay' incorporates:
   *  Switch: '<S321>/Switch1'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE_l32u = rtb_Switch1_d0v1;

  /* Update for UnitDelay: '<S358>/Unit Delay1' incorporates:
   *  Constant: '<S358>/Constant'
   */
  ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_haua = true;

  /* Update for UnitDelay: '<S358>/Unit Delay' incorporates:
   *  Sum: '<S353>/Sum'
   *  Switch: '<S353>/Switch'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE_hdmg = rtb_Sum_e45u;

  /* Update for UnitDelay: '<S91>/Unit Delay1' incorporates:
   *  Sum: '<S118>/Sum'
   *  Switch: '<S118>/Switch'
   */
  ASW_PhVltgGen_DW.UnitDelay1_DSTATE_hljs = rtb_Sum_fm2f;

  /* Update for UnitDelay: '<S30>/Unit Delay1' incorporates:
   *  DataTypeConversion: '<S62>/Data Type Conversion'
   */
  ASW_PhVltgGen_DW.UnitDelay1_DSTATE = rtb_DataTypeConversion_ezfk;

  /* Update for UnitDelay: '<S28>/Unit Delay1' incorporates:
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   */
  ASW_PhVltgGen_DW.UnitDelay1_DSTATE_hxga = busPhVltgGen_MedTaskIn.enm_stMotoSt;

  /* Update for UnitDelay: '<S46>/Unit Delay1' incorporates:
   *  Constant: '<S46>/Constant'
   */
  ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_d5fg = true;

  /* Update for UnitDelay: '<S46>/Unit Delay' incorporates:
   *  Switch: '<S41>/Switch'
   *  Switch: '<S45>/Switch2'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE_j4ol = rtb_Switch2_aaxv;

  /* Update for UnitDelay: '<S229>/Unit Delay' incorporates:
   *  Inport: '<Root>/busPhVltgGen_MedTaskIn'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE_beui =
    busPhVltgGen_MedTaskIn.u16_phiSensActElecAg;

  /* Update for UnitDelay: '<S194>/Unit Delay1' incorporates:
   *  Constant: '<S194>/Constant'
   */
  ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_ekpq = true;

  /* Update for UnitDelay: '<S194>/Unit Delay' incorporates:
   *  Sum: '<S189>/Sum'
   *  Switch: '<S189>/Switch'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE_brib = rtb_Sum;

  /* Update for UnitDelay: '<S196>/Unit Delay' incorporates:
   *  Sum: '<S196>/Add1'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE_jl24 = rtb_Add1;

  /* Saturate: '<S90>/Saturation4' incorporates:
   *  DataTypeConversion: '<S62>/Data Type Conversion'
   */
  if (rtb_DataTypeConversion_ezfk >= -32767) {
    /* Update for UnitDelay: '<S91>/Unit Delay' */
    ASW_PhVltgGen_DW.UnitDelay_DSTATE_bg1i = rtb_DataTypeConversion_ezfk;
  } else {
    /* Update for UnitDelay: '<S91>/Unit Delay' */
    ASW_PhVltgGen_DW.UnitDelay_DSTATE_bg1i = -32767;
  }

  /* End of Saturate: '<S90>/Saturation4' */

  /* Update for UnitDelay: '<S213>/Unit Delay1' incorporates:
   *  Constant: '<S213>/Constant'
   */
  ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_mq3y = true;

  /* Update for UnitDelay: '<S213>/Unit Delay' incorporates:
   *  Sum: '<S208>/Sum'
   *  Switch: '<S208>/Switch'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE_jfag = rtb_Sum_o4qx;

  /* Update for UnitDelay: '<S215>/Unit Delay' incorporates:
   *  Sum: '<S215>/Add1'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE_h5zb = rtb_Add1_l5zk;

  /* Update for UnitDelay: '<S126>/Unit Delay' incorporates:
   *  DataTypeConversion: '<S126>/Data Type Conversion2'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE_mo0h = rtb_DataTypeConversion2_hco0;

  /* Update for UnitDelay: '<S126>/Unit Delay1' incorporates:
   *  Sum: '<S126>/Add2'
   */
  ASW_PhVltgGen_DW.UnitDelay1_DSTATE_fzlc = rtb_Add2_bakf;

  /* Update for UnitDelay: '<S140>/Unit Delay1' incorporates:
   *  Constant: '<S140>/Constant'
   */
  ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_kcff = true;

  /* Update for UnitDelay: '<S140>/Unit Delay' incorporates:
   *  Sum: '<S134>/Sum'
   *  Switch: '<S134>/Switch'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE = rtb_Sum_jbr1;

  /* Update for UnitDelay: '<S62>/Unit Delay' incorporates:
   *  Sum: '<S62>/Add1'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE_fiwk = rtb_Add1_p3bv;

  /* Update for UnitDelay: '<S269>/Unit Delay' incorporates:
   *  DataTypeConversion: '<S269>/Data Type Conversion2'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE_p44p = rtb_DataTypeConversion2_gwbl;

  /* Update for UnitDelay: '<S269>/Unit Delay1' incorporates:
   *  Sum: '<S269>/Add2'
   */
  ASW_PhVltgGen_DW.UnitDelay1_DSTATE_gk3t = rtb_Add2_aalz;

  /* Update for UnitDelay: '<S283>/Unit Delay1' incorporates:
   *  Constant: '<S283>/Constant'
   */
  ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_la0o = true;

  /* Update for UnitDelay: '<S283>/Unit Delay' incorporates:
   *  Sum: '<S277>/Sum'
   *  Switch: '<S277>/Switch'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE_kt4g = rtb_Sum_cby0;

  /* Update for UnitDelay: '<S296>/Unit Delay' incorporates:
   *  DataTypeConversion: '<S296>/Data Type Conversion2'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE_gvry = rtb_DataTypeConversion2_o3w2;

  /* Update for UnitDelay: '<S296>/Unit Delay1' incorporates:
   *  Sum: '<S296>/Add2'
   */
  ASW_PhVltgGen_DW.UnitDelay1_DSTATE_mewr = rtb_Add2_doeq;

  /* Update for UnitDelay: '<S310>/Unit Delay1' incorporates:
   *  Constant: '<S310>/Constant'
   */
  ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_l4aj = true;

  /* Update for UnitDelay: '<S310>/Unit Delay' incorporates:
   *  Sum: '<S304>/Sum'
   *  Switch: '<S304>/Switch'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE_afgq = rtb_Sum_fda4;

  /* Update for UnitDelay: '<S123>/Unit Delay1' incorporates:
   *  Constant: '<S123>/Constant'
   */
  ASW_PhVltgGen_DW.bitsForTID1.UnitDelay1_DSTATE_ktzd = true;

  /* Update for UnitDelay: '<S123>/Unit Delay' incorporates:
   *  Sum: '<S118>/Sum'
   *  Switch: '<S118>/Switch'
   */
  ASW_PhVltgGen_DW.UnitDelay_DSTATE_naon = rtb_Sum_fm2f;
}
/*
 * File trailer for generated code.
 *
 * [EOF]
 */

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
//static void rate_scheduler(void);
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
/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/***************************************************************************//**
 * \defgroup    MotCtrl_wrap_Defines     MotCtrl_wrap Defines/Macros
 * @{
 ******************************************************************************/
#define Cdbl_nMechSpdPeakVal 32768u
#define Cdbl_nElecAgSpdPeakVal 4096u
#define Cdbl_uSplyVltgPeakVal 64u
#define Cdbl_iPhCurrPeakVal 256u
#define PI 3.14159265
#define Cdbl_uCtlBrdVltgPeakVal 64u
#define Cdbl_iSplyCurrPeakVal 256u

/** @} MotCtrl_wrap_Defines */ 
/***************************************************************************//**
 * \defgroup    MotCtrl_wrap_LocalVariables    MotCtrl_wrap_ Local variables
 * @{
 ******************************************************************************/

////////////////////////////////////////////////////////////////////////////////

sint16 MotState_Nref_s16;
static uint16_t u16_AgADOffset = 0;
static bool bol_flgCalibFin = false;
static uint8 u8_FrzFrmSaveFlg = 0;
static uint8 MCUF_OperationModel;
static sint16 s16_ComIf_nComRefMechSpd;
static uint8_t u8_ComIf_APPTxMsgData1[8];
static uint8_t u8_ComIf_APPTxMsgData2[8];
static bool bol_ComIf_flgComLosFaltRaw;
static uint8_t MCUF_RollingCounter_27A;
static bool bol_ComIf_flgCRCFaltRaw;
static bool bol_ComIf_flgMesgLngthFaltRaw;
static bool bol_ComIf_flgCrashFalt;
static uint8 u8_ComIf_psiUpLimOilFlow = 0;
static uint8 u8_ComIf_TransFluidTemp = 0;
static uint8 u8_ComIf_psiOilFlow = 0;
static uint32 u32_ComIf_tiStamLo = 0;
static uint32 u32_ComIf_tiStamHi = 0;
static uint32 u32_ComIf_disOde = 0;
static uint16 u16_ComIf_vVehSpd = 0;
static sint16 s16_MID_Interface_ActSpd_CAN = 0;
//SRAM_EEPROM_UINT16 offset_buff[2] = {0u};
uint16 offset_buff[2] = {0u};
//SRAM_PRODUCTINFO_UINT8 u8_Interface_HWVersion[10] = {'Y','2','E','O','P','H','H','W','0','2'};
uint8 u8_Interface_HWVersion[10] = {'Y','2','E','O','P','H','H','W','0','2'};
uint8 Temp_OperationModel = 0;
sint16 s16_Temp_nComRefMechSpd = 0;
uint8 Tmp_PCBTemp = 70;

uint8 Gu8_PWM_MedFreqTaskStatus;
uint16 Gu16_PSCD_AngleData_IF;
uint16 Gu16_uPWM_PhFstCurr_IF;
uint16 Gu16_uPWM_PhScndCurr_IF;
uint16 Gu16_uPWM_CsaCalibResult_IF;
uint8 Gu8_PWMSector_IF;
uint16 Gu16_uADC_NTCTemp_IF;
uint16 Gu16_BSWToAPPFault_IF;
uint16 Gu16_uADCVDH_IF;
//uint8 Gu8_tMcuTemp_IF;
uint16 Gu16_uADC_NTCTemp_IF;
uint8 Gu8_ComIf_APPRxMsgData[8];
uint8 Gu8_ComIf_APPRxMesCnt;
BUS_COMIF_UDSREAD_IN busComIf_UDSRead_In;
uint8 Gu8_ComIf_HWVersion[10];
uint8 Gu8_ComIf_UDSWriteFlg;
////////////////////////////////////////////////////////////////////////////////

/** @} MotCtrl_wrap_LocalVariables */

/* CRC algorithm */
uint8 Interface_crc_high_first(uint8 *ptr,uint8 len)
{
  uint8 i;
  uint8 crc=0xFF;/*¼ÆËãµÄ³õÊ¼crcÖµ*/

  while(len--)
  {
    crc ^= *ptr++;/*Ã¿´ÎÏÈÓëÐèÒª¼ÆËãµÄÊý¾ÝÒì»ò£¬¼ÆËãÍêÖ¸ÏòÏÂÒ»¸öÊý¾Ý*/
    for(i=8;i>0;--i)/*Êý¾Ý×óÒÆÁË8Î»£¬ÐèÒª¼ÆËã8´Î*/
    {
      if(crc & 0x80)/*ÅÐ¶Ï×î¸ßÎ»ÊÇ·ñÎª1*/
      {
        crc=(crc << 1)^(0x2F);/*×î¸ßÎ»Îª1£¬Íù×óÒÆÒ»Î»£¬È»ºóÓë0x2FÒì»ò*/
      }
      else
      {
        crc=(crc << 1);/*×î¸ßÎ»Îª0£¬²»ÐèÒªÒì»ò£¬ÕûÌåÊý¾ÝÍù×óÒÆÒ»Î»*/
      }
    }
  }
  crc ^=0xFF;/*CRCÓë0xFF½øÐÐÒì»ò*/
  return(crc);
}

/***************************************************************************//**
 * \defgroup    MotCtrl_wrap_LocalFunctions     MotCtrl_wrap Local functions
 * @{
 ******************************************************************************/
 

/** @} MotCtrl_wrap_LocalFunctions */

/***************************************************************************//**
 * \defgroup    MotCtrl_wrap_GlobalFunctions     MotCtrl_wrap Global functions 
 * @{
 ******************************************************************************/
/**
 * \fn       Interface_StartupTask
 * \brief    Initialize the ASW variables and judge enter sleep mode
 */
/*void Interface_StartupTask(void)
{ 
	ASW_DcycGen_Init();
	ASW_PhVltgGen_Init();
	ASW_PhCurrGen_Init();
	ASW_AST_Init();
	ASW_SigIn_Init();
	ASW_OBD_Init();
}*/


void test_SigIn_SlwTask(int count) {
    if(count<1020){
      //Gu16_uADC_NTCTemp_IF = ADC1_Get(261);
        //Gu16_uADCVDH_IF = data_addr_ADC2_FILT_OUT0(239);
        //Gu16_uADCVDH_IF = data_addr_ADC2_FILT_OUT0(602);
    }else{
      //Gu16_uADC_NTCTemp_IF = ADC1_Get(310);
        //Gu16_uADCVDH_IF = data_addr_ADC2_FILT_OUT0(256);
        //Gu16_uADCVDH_IF = data_addr_ADC2_FILT_OUT0(585);
    }
  Gu16_uADCVDH_IF = data_addr_ADC2_FILT_OUT0(500);
  Gu8_tMcuTemp_IF = ADC2_Temp_Result_C(400);
  Gu16_uADC_NTCTemp_IF = ADC1_Get(310);
  //printf("Gu16_uADCVDH_IF = %d\n",Gu16_uADCVDH_IF);
}

void test_SigIn_MedTask(void){
  Gu16_PSCD_AngleData_IF =  10;
  Gu16_uPWM_PhFstCurr_IF = ADC1_Get(815);
  Gu16_uPWM_PhScndCurr_IF = ADC1_Get(815);
  Gu16_uPWM_CsaCalibResult_IF = ADC1_Get(20);;
  Gu8_PWMSector_IF = 4;
}

 void test_AST_SlwTask(void)
 {
    MCUF_OperationModel = 1;
 }


/**
 * \fn       Interface_FR_Task
 * \brief    Fast rate runnable (16kHz)
 */
#define PWM_PERIOD                  (1249u)
 void Interface_FR_Task(void) {
   static uint16 Su16_Duty[3] = {0};
   /* TO USE WHEN GENERATED CODE WILL HAVE A STRUCT AS INPUT
   // Update the input structure
   motCtrl_read_FR_inputs(&FR_InputStruct);

   // Call the runnable
   rss_FastRateTask_16kHz_step(&FR_InputStruct, &FR_outputStruct);
   */
   Interface_DcycGen_FstTask_Trans();

   DcycGen_FstTask();
   Interface_Set_DutyCycle(&Su16_Duty[0]);
   FILE *log_file = fopen(LOG_FILE, "a");
   if (!log_file) {
     perror("Failed to open log file");
   }
   fprintf(log_file, "u16_dcycPhDyc[3]={%d,%d,%d}\n",
           busDcycGen_FstTaskOut.u16_dcycPhDyc[0],
           busDcycGen_FstTaskOut.u16_dcycPhDyc[1],
           busDcycGen_FstTaskOut.u16_dcycPhDyc[2]);
   fclose(log_file);
   PWM_Set_ClacPwmVals(&Su16_Duty[0], PWM_PERIOD);
 }

/**
 * \fn       Interface_500usTask
 * \brief    Medium rate runnable (2kHz)
 */

void Interface_500usTask(int count) {
  Gu8_PWM_MedFreqTaskStatus = 1;
  /* SigIn_MedTask */
  //	Sys_IntDisIrq();
  FILE *log_file = fopen(LOG_FILE, "a");
  if (!log_file) {
    perror("Failed to open log file");
  }
  fprintf(log_file,"500us,No.%d\n",count);
  test_SigIn_MedTask();
  Interface_SigIn_MedTask_Trans();
  //	Sys_IntEnIrq();
  SigIn_MedTask();
  
  /* PhVltgGen_MedTask */
  //	Sys_IntDisIrq();
  Interface_PhVltgGen_MedTask_Trans();
  // 	Sys_IntEnIrq();

  PhVltgGen_MedTask();
  fprintf(log_file, "s16_nActElecSpd:%d\n",
          busPhVltgGen_MedTaskOut.s16_nActElecSpd);
  fprintf(log_file, "u16_psiEstPermMagFlx:%d\n",
          busPhVltgGen_MedTaskOut.u16_psiEstPermMagFlx);
  fclose(log_file);
  Gu8_PWM_MedFreqTaskStatus = 0;
}

/**
 * \fn       Interface_10msTask
 * \brief    Slow rate runnable (100Hz)
 */
void Interface_10msTask(int count) {

  /* PhCurrGen_SlwTask */
  FILE *log_file = fopen(LOG_FILE, "a");
  if (!log_file) {
    perror("Failed to open log file");
  }
  fprintf(log_file,"10ms,No.%d\n",count);
  Interface_PhCurrGen_SlwTask_Trans();

  PhCurrGen_SlwTask();
  s16_Temp_nComRefMechSpd=801;
  /* AST_SlwTask */
  Interface_AST_SlwTask_Trans();

  AST_SlwTask();
  
  fprintf(log_file, "enm_stSysSt:%d\n", busAST_SlwTaskOut.enm_stSysSt);
  fprintf(log_file, "s16_iEstSplyCurr:%d\n",
          busAST_SlwTaskOut.s16_iEstSplyCurr);
  fprintf(log_file, "s16_ampActPhCurrAmp:%d\n",
          busAST_SlwTaskOut.s16_ampActPhCurrAmp);
  fprintf(log_file, "s16_nRmpRefElecSpd=%d\n",
            busAST_SlwTaskOut.s16_nRmpRefElecSpd);
  fprintf(log_file, "enm_stMotoSt=%d\n",
            busAST_SlwTaskIn.enm_stMotoSt);
  fprintf(log_file, "u8_modeMCUOpMode=%d\n",
            busAST_SlwTaskIn.u8_modeMCUOpMode);
  fprintf(log_file, "s16_nFaltRefMechSpd=%d\n",
            busAST_SlwTaskIn.s16_nFaltRefMechSpd);
  /* OBD_SlwTask */
  Interface_OBD_SlwTask_Trans();
    busOBD_SlwTaskIn.u16_uADPwrTubTemp=110;
    busOBD_SlwTaskIn.u8_tPwrTubTemp=180;
    busOBD_SlwTaskIn.u16_uADMotoTemp=110;
    //busOBD_SlwTaskIn.u16_uCtlBrdVltg=3850;
    //busOBD_SlwTaskIn.u16_uGDVltg=3850;
    busOBD_SlwTaskIn.s16_nComRefMechSpd=1;
  OBD_SlwTask();
  fprintf(log_file, "u8_stMaxFaltLvl=%d\n",
            busOBD_SlwTaskOut.u8_stMaxFaltLvl);
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPhCurrHiLvl1Flg == 1) {
    fprintf(log_file, "bol_flgPhCurrHiLvl1Flg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPhCurrHiLvl1Flg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgHWOvrCurrFlg == 1) {
    fprintf(log_file, "bol_flgHWOvrCurrFlg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgHWOvrCurrFlg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgSplyVltgLoLvl1Flg == 1) {
    fprintf(log_file, "bol_flgSplyVltgLoLvl1Flg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgSplyVltgLoLvl1Flg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgSplyVltgLoLvl2Flg == 1) {
    fprintf(log_file, "bol_flgSplyVltgLoLvl2Flg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgSplyVltgLoLvl2Flg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgSplyVltgHiLvl1Flg == 1) {
    fprintf(log_file, "bol_flgSplyVltgHiLvl1Flg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgSplyVltgHiLvl1Flg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPwrTubPCBTempHiLvl1Flg == 1) {
    fprintf(log_file, "bol_flgPwrTubPCBTempHiLvl1Flg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPwrTubPCBTempHiLvl1Flg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPwrTubPCBTempHiLvl2Flg == 1) {
    fprintf(log_file, "bol_flgPwrTubPCBTempHiLvl2Flg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPwrTubPCBTempHiLvl2Flg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgMotoTempHiLvl1Flg == 1) {
    fprintf(log_file, "bol_flgMotoTempHiLvl1Flg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgMotoTempHiLvl1Flg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgMotoTempHiLvl2Flg == 1) {
    fprintf(log_file, "bol_flgMotoTempHiLvl2Flg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgMotoTempHiLvl2Flg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgComFaltFlg == 1) {
    fprintf(log_file, "bol_flgComFaltFlg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgComFaltFlg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgMotoStallPermFlg == 1) {
    fprintf(log_file, "bol_flgMotoStallPermFlg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgMotoStallPermFlg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgMotoStallTmpFlg == 1) {
    fprintf(log_file, "bol_flgMotoStallTmpFlg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgMotoStallTmpFlg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgNoLdFlg == 1) {
    fprintf(log_file, "bol_flgNoLdFlg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgNoLdFlg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgBattPwrHiLvl1Flg == 1) {
    fprintf(log_file, "bol_flgBattPwrHiLvl1Flg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgBattPwrHiLvl1Flg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgMotoSpdHiLvl1Flg == 1) {
    fprintf(log_file, "bol_flgMotoSpdHiLvl1Flg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgMotoSpdHiLvl1Flg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgMotoSpdLoLvl1Flg == 1) {
    fprintf(log_file, "bol_flgMotoSpdLoLvl1Flg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgMotoSpdLoLvl1Flg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgCtlBrdVltgLoLvl1Flg == 1) {
    fprintf(log_file, "bol_flgCtlBrdVltgLoLvl1Flg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgCtlBrdVltgLoLvl1Flg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgCtlBrdVltgHiLvl1Flg == 1) {
    fprintf(log_file, "bol_flgCtlBrdVltgHiLvl1Flg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgCtlBrdVltgHiLvl1Flg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgGDVltgLoLvl1Flg == 1) {
    fprintf(log_file, "bol_flgGDVltgLoLvl1Flg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgGDVltgLoLvl1Flg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgGDVltgHiLvl1Flg == 1) {
    fprintf(log_file, "bol_flgGDVltgHiLvl1Flg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgGDVltgHiLvl1Flg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgChipFaltFlg == 1) {
    fprintf(log_file, "bol_flgChipFaltFlg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgChipFaltFlg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPhiSensFaltFlg == 1) {
    fprintf(log_file, "bol_flgPhiSensFaltFlg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPhiSensFaltFlg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPhCurrSensFaltFlg == 1) {
    fprintf(log_file, "bol_flgPhCurrSensFaltFlg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPhCurrSensFaltFlg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPwrTubPCBTempSensFaltFlg == 1) {
    fprintf(log_file, "bol_flgPwrTubPCBTempSensFaltFlg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPwrTubPCBTempSensFaltFlg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgMotoTempSensFaltFlg == 1) {
    fprintf(log_file, "bol_flgMotoTempSensFaltFlg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgMotoTempSensFaltFlg);
  }
  if (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgBusOffFaltFlg == 1) {
    fprintf(log_file, "bol_flgBusOffFaltFlg:%d\n",
            busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgBusOffFaltFlg);
  }
  /* SigIn_SlwTask */
  test_SigIn_SlwTask(count);
  Interface_SigIn_SlwTask_Trans();
  
  SigIn_SlwTask();
  
  fprintf(log_file, "when Gu16_uADC_NTCTemp_IF=%d,u8_tPCBTemp:%d\n", Gu16_uADC_NTCTemp_IF,busSigIn_SlwTaskOut.u8_tPCBTemp);
  fprintf(log_file, "when Gu16_uADCVDH_IF=%d,u16_uSplyVltg=%d\n",Gu16_uADCVDH_IF,busSigIn_SlwTaskOut.u16_uSplyVltg);
  fprintf(log_file, "when Gu8_tMcuTemp_IF=%d,u8_tPCBTempSubs:%d\n",Gu8_tMcuTemp_IF,busSigIn_SlwTaskOut.u8_tPCBTempSubs);
  fprintf(log_file, "u8_tPwrTubTemp:%d¡¢u16_uCtlBrdVltg:%d¡¢u16_uGDVltg:%d¡¢u8_tMotoTemp=%d\n",busSigIn_SlwTaskOut.u8_tPwrTubTemp,busSigIn_SlwTaskOut.u16_uCtlBrdVltg,busSigIn_SlwTaskOut.u16_uGDVltg,busSigIn_SlwTaskOut.u8_tMotoTemp);
  fclose(log_file);
  /* Communication */
  Interface_ApplCom_ASW_Trans();

  Interface_FrzUDSCom_ASW_Trans();

  /* Calibration */
  if (bol_flgCalibFin == false) {
    Interface_AgCalib_Trans();
  }

  /* Memeory */
  // Interface_Mem_Trans();
}

void Interface_DcycGen_FstTask_Trans(void)
{
		busDcycGen_FstTaskIn.u16_ampDycAmp = busPhVltgGen_MedTaskOut.u16_ampDycAmp;
    busDcycGen_FstTaskIn.u16_phiActElecAg = busPhVltgGen_MedTaskOut.u16_phiActElecAg;
    busDcycGen_FstTaskIn.u16_phiDaxQaxVltgAg = busPhVltgGen_MedTaskOut.u16_phiDaxQaxVltgAg;
    busDcycGen_FstTaskIn.enm_stMotoSt = busPhCurrGen_SlwTaskOut.enm_stMotoSt;
    busDcycGen_FstTaskIn.s16_nPredActElecSpd = busPhVltgGen_MedTaskOut.s16_nPredActElecSpd;
    busDcycGen_FstTaskIn.bol_enPosSCDCalibEnFlg = !bol_flgCalibFin;
}

void Interface_SigIn_MedTask_Trans(void)
{
 //  Sys_IntDisIrq();
	static uint16 u16_SchM_AgMech;
	//PosSCD_Data_Read();
    if( bol_flgCalibFin == false)
	{
		u16_SchM_AgMech = (0xFFFF - (uint16_t)((0x7FFF & Gu16_PSCD_AngleData_IF)<<1));
	}
else
	{
	  u16_SchM_AgMech = (0xFFFF - (uint16_t)(
                  ((uint32_t)((0x7FFF & Gu16_PSCD_AngleData_IF)<<1) + (uint32_t)u16_AgADOffset)
                              & 0x0000FFFF) );
	}
//   Sys_IntEnIrq();
  	
//  	Sys_IntDisIrq();
    //PWM_SSM_ReconstructCurr();
	  busSigIn_MedTaskIn.u16_ADSensActMechAg = u16_SchM_AgMech;
    busSigIn_MedTaskIn.u16_uADActPhCurr[0] = Gu16_uPWM_PhFstCurr_IF;
    busSigIn_MedTaskIn.u16_uADActPhCurr[1] = Gu16_uPWM_PhScndCurr_IF;
    busSigIn_MedTaskIn.u16_uADActPhCurr[2] = 0;
    busSigIn_MedTaskIn.u16_uADActPhCurrOfs = Gu16_uPWM_CsaCalibResult_IF;
    busSigIn_MedTaskIn.u8_numSectNum = Gu8_PWMSector_IF;
//	   Sys_IntEnIrq();
}

void Interface_PhVltgGen_MedTask_Trans(void)
{
//    Sys_IntDisIrq();

		busPhVltgGen_MedTaskIn.s16_iRefDaxQaxCurr[0] = busPhCurrGen_SlwTaskOut.s16_iRefDaxQaxCurr[0];
    busPhVltgGen_MedTaskIn.s16_iRefDaxQaxCurr[1] = busPhCurrGen_SlwTaskOut.s16_iRefDaxQaxCurr[1];
    busPhVltgGen_MedTaskIn.s16_iActPhCurr[0] = busSigIn_MedTaskOut.s16_iActPhCurr[0];
    busPhVltgGen_MedTaskIn.s16_iActPhCurr[1] = busSigIn_MedTaskOut.s16_iActPhCurr[1];
    busPhVltgGen_MedTaskIn.s16_iActPhCurr[2] = busSigIn_MedTaskOut.s16_iActPhCurr[2];
    busPhVltgGen_MedTaskIn.u16_phiSensActElecAg = busSigIn_MedTaskOut.u16_phiSensActElecAg;
    busPhVltgGen_MedTaskIn.u16_uSplyVltg = busSigIn_SlwTaskOut.u16_uSplyVltg;
    busPhVltgGen_MedTaskIn.enm_stMotoSt = busPhCurrGen_SlwTaskOut.enm_stMotoSt;
    busPhVltgGen_MedTaskIn.u16_phiModulActElecAg = busDcycGen_FstTaskOut.u16_phiModulActElecAg;
    busPhVltgGen_MedTaskIn.u16_phiPosSCDCalibElecAg = busAST_SlwTaskOut.u16_phiPosSCDCalibElecAg;
    busPhVltgGen_MedTaskIn.u16_dcycPhDyc[0] = busDcycGen_FstTaskOut.u16_dcycPhDyc[0];
    busPhVltgGen_MedTaskIn.u16_dcycPhDyc[1] = busDcycGen_FstTaskOut.u16_dcycPhDyc[1];
    busPhVltgGen_MedTaskIn.u16_dcycPhDyc[2] = busDcycGen_FstTaskOut.u16_dcycPhDyc[2];
    busPhVltgGen_MedTaskIn.bol_enPosSCDCalibEnFlg = !bol_flgCalibFin;
    busPhVltgGen_MedTaskIn.enm_modeAgEvalMode = busAST_SlwTaskOut.enm_modeAgEvalMode;
    busPhVltgGen_MedTaskIn.s16_nRmpRefElecSpd = busAST_SlwTaskOut.s16_nRmpRefElecSpd;
    busPhVltgGen_MedTaskIn.s16_uRefDaxVltgLim = busAST_SlwTaskOut.s16_uRefDaxVltgLim;
    busPhVltgGen_MedTaskIn.u16_ampMaxVltgAmp = busAST_SlwTaskOut.u16_ampMaxVltgAmp;
    busPhVltgGen_MedTaskIn.s16_uRefQaxVltgLim = busAST_SlwTaskOut.s16_uRefQaxVltgLim;
//		Sys_IntEnIrq();
}

void Interface_PhCurrGen_SlwTask_Trans(void)
{
  busPhCurrGen_SlwTaskIn.s16_nRefElecSpd = busAST_SlwTaskOut.s16_nRefElecSpd;
  busPhCurrGen_SlwTaskIn.s16_nActElecSpd = busPhVltgGen_MedTaskOut.s16_nActElecSpd;
  busPhCurrGen_SlwTaskIn.s16_nRmpRefElecSpd = busAST_SlwTaskOut.s16_nRmpRefElecSpd;
  busPhCurrGen_SlwTaskIn.s16_trqRefTqLim = busAST_SlwTaskOut.s16_trqRefTqLim;
  busPhCurrGen_SlwTaskIn.bol_flgShOffFlg = busAST_SlwTaskOut.bol_flgShOffFlg;
  busPhCurrGen_SlwTaskIn.bol_enPosSCDCalibEnFlg = !bol_flgCalibFin;
  busPhCurrGen_SlwTaskIn.s16_trqPosSCDCalibRefTq = busAST_SlwTaskOut.s16_trqPosSCDCalibRefTq;
  busPhCurrGen_SlwTaskIn.enm_modeAgEvalMode = busAST_SlwTaskOut.enm_modeAgEvalMode;
}

void Interface_AST_SlwTask_Trans(void)
{
  busAST_SlwTaskIn.s16_nComRefMechSpd = s16_ComIf_nComRefMechSpd;
  busAST_SlwTaskIn.s16_nActElecSpd = busPhVltgGen_MedTaskOut.s16_nActElecSpd;
  busAST_SlwTaskIn.s16_uModulDaxQaxVltg[0] = busPhVltgGen_MedTaskOut.s16_uModulDaxQaxVltg[0];
	busAST_SlwTaskIn.s16_uModulDaxQaxVltg[1] = busPhVltgGen_MedTaskOut.s16_uModulDaxQaxVltg[1];
  busAST_SlwTaskIn.u16_uSplyVltg = busSigIn_SlwTaskOut.u16_uSplyVltg;
  busAST_SlwTaskIn.s16_iActDaxQaxCurr[0] = busPhVltgGen_MedTaskOut.s16_iActDaxQaxCurr[0];
  busAST_SlwTaskIn.s16_iActDaxQaxCurr[1] = busPhVltgGen_MedTaskOut.s16_iActDaxQaxCurr[1];
  busAST_SlwTaskIn.enm_stMotoSt = busPhCurrGen_SlwTaskOut.enm_stMotoSt;
  busAST_SlwTaskIn.bol_enPosSCDCalibEnFlg = !bol_flgCalibFin;
  busAST_SlwTaskIn.u16_phiSensActElecAg = busSigIn_MedTaskOut.u16_phiSensActElecAg;
  busAST_SlwTaskIn.u8_stMaxFaltLvl = busOBD_SlwTaskOut.u8_stMaxFaltLvl;
  busAST_SlwTaskIn.busOBD_FaltSt = busOBD_SlwTaskOut.busOBD_FaltSt;
  busAST_SlwTaskIn.s16_nFaltRefMechSpd = busOBD_SlwTaskOut.s16_nFaltRefMechSpd;
  busAST_SlwTaskIn.s16_trqFaltRefTqLim = busOBD_SlwTaskOut.s16_trqFaltRefTqLim;
  busAST_SlwTaskIn.u8_modeMCUOpMode = MCUF_OperationModel;
  busAST_SlwTaskIn.u8_tPCBTempSubs = busSigIn_SlwTaskOut.u8_tPCBTempSubs;
  busAST_SlwTaskIn.u16_ampMaxNrmVltgAmp = busDcycGen_FstTaskOut.u16_ampMaxNrmVltgAmp;
  busAST_SlwTaskIn.s16_uRefDaxVltg = busPhVltgGen_MedTaskOut.s16_uRefDaxVltg;
  busAST_SlwTaskIn.bol_flgPhiSensFaltRawFlg = busOBD_SlwTaskOut.bol_flgPhiSensFaltRawFlg;
//	busAST_SlwTaskIn.u8_FrzFrmSaveFlg = u8_FrzFrmSaveFlg;
}

void Interface_OBD_SlwTask_Trans(void)
{
busOBD_SlwTaskIn.s16_nRmpRefElecSpd = busAST_SlwTaskOut.s16_nRmpRefElecSpd;
busOBD_SlwTaskIn.s16_nRmpRefElecSpd=801;
busOBD_SlwTaskIn.s16_nActElecSpd = busPhVltgGen_MedTaskOut.s16_nActElecSpd;
busOBD_SlwTaskIn.enm_stMotoSt = busPhCurrGen_SlwTaskOut.enm_stMotoSt;
busOBD_SlwTaskIn.s16_ampActPhCurrAmp = busAST_SlwTaskOut.s16_ampActPhCurrAmp;
busOBD_SlwTaskIn.u16_uSplyVltg = busSigIn_SlwTaskOut.u16_uSplyVltg;
busOBD_SlwTaskIn.u8_tPwrTubTemp = busSigIn_SlwTaskOut.u8_tPwrTubTemp;
busOBD_SlwTaskIn.u8_tPCBTemp = busSigIn_SlwTaskOut.u8_tPCBTemp;
busOBD_SlwTaskIn.u8_tPCBTempSubs = busSigIn_SlwTaskOut.u8_tPCBTempSubs;
busOBD_SlwTaskIn.u8_tMotoTemp = busSigIn_SlwTaskOut.u8_tMotoTemp;
busOBD_SlwTaskIn.bol_flgComLosFaltRaw = bol_ComIf_flgComLosFaltRaw;
busOBD_SlwTaskIn.u8_ctComRolCnt = MCUF_RollingCounter_27A;
busOBD_SlwTaskIn.u16_uCtlBrdVltg = busSigIn_SlwTaskOut.u16_uCtlBrdVltg;
busOBD_SlwTaskIn.enm_stSysSt = busAST_SlwTaskOut.enm_stSysSt;
busOBD_SlwTaskIn.bol_flgHWOvrCurrFalt = (Gu16_BSWToAPPFault_IF&0x10)>>4;
busOBD_SlwTaskIn.bol_flgChipFalt = ((Gu16_BSWToAPPFault_IF&0x01)>>0)||((Gu16_BSWToAPPFault_IF&0x02)>>1);
busOBD_SlwTaskIn.bol_flgPhiSensFalt = (Gu16_BSWToAPPFault_IF&0x20)>>5;
busOBD_SlwTaskIn.bol_flgGDVltgHiLvl1 = (Gu16_BSWToAPPFault_IF&0x04)>>2;
busOBD_SlwTaskIn.bol_flgGDVltgLoLvl1 = (Gu16_BSWToAPPFault_IF&0x08)>>3;
busOBD_SlwTaskIn.u16_uADActPhCurr[0] = Gu16_uPWM_PhFstCurr_IF;
busOBD_SlwTaskIn.u16_uADActPhCurr[1] = Gu16_uPWM_PhScndCurr_IF;
busOBD_SlwTaskIn.u16_uADPCBTemp = Gu16_uADC_NTCTemp_IF;
busOBD_SlwTaskIn.u8_tMCUTemp = Gu8_tMcuTemp_IF;
busOBD_SlwTaskIn.s16_pwrSplyElecPwr = busAST_SlwTaskOut.s16_pwrSplyElecPwr;
busOBD_SlwTaskIn.s16_iActPhCurr[0] = busSigIn_MedTaskOut.s16_iActPhCurr[0];
busOBD_SlwTaskIn.s16_iActPhCurr[1] = busSigIn_MedTaskOut.s16_iActPhCurr[1];
busOBD_SlwTaskIn.s16_iActPhCurr[2] = busSigIn_MedTaskOut.s16_iActPhCurr[2];
busOBD_SlwTaskIn.s16_iEstSplyCurr = busAST_SlwTaskOut.s16_iEstSplyCurr;
busOBD_SlwTaskIn.s16_iRefDaxQaxCurr[0] = busPhCurrGen_SlwTaskOut.s16_iRefDaxQaxCurr[0];
busOBD_SlwTaskIn.s16_iRefDaxQaxCurr[1] = busPhCurrGen_SlwTaskOut.s16_iRefDaxQaxCurr[1];
busOBD_SlwTaskIn.s16_iActDaxQaxCurr[0] = busPhVltgGen_MedTaskOut.s16_iActDaxQaxCurr[0];
busOBD_SlwTaskIn.s16_iActDaxQaxCurr[1] = busPhVltgGen_MedTaskOut.s16_iActDaxQaxCurr[1];
busOBD_SlwTaskIn.bol_flgShOffFlg = busAST_SlwTaskOut.bol_flgShOffFlg;
busOBD_SlwTaskIn.bol_enPosSCDCalibEnFlg = !bol_flgCalibFin;
busOBD_SlwTaskIn.bol_flgCRCFaltRaw = bol_ComIf_flgCRCFaltRaw;;
busOBD_SlwTaskIn.bol_flgCrashFalt = bol_ComIf_flgCrashFalt;
busOBD_SlwTaskIn.s16_nComRefMechSpd = s16_ComIf_nComRefMechSpd;
busOBD_SlwTaskIn.u16_psiEstPermMagFlx = busPhVltgGen_MedTaskOut.u16_psiEstPermMagFlx;
busOBD_SlwTaskIn.enm_modeAgEvalMode = busAST_SlwTaskOut.enm_modeAgEvalMode;
busOBD_SlwTaskIn.bol_flgFaltEnFlgUDS85 = true;
}

void Interface_SigIn_SlwTask_Trans(void)
{
busSigIn_SlwTaskIn.u16_uADSplyVltg = Gu16_uADCVDH_IF;
busSigIn_SlwTaskIn.u8_tMCUTemp = Gu8_tMcuTemp_IF;
busSigIn_SlwTaskIn.u16_uADPCBTemp = Gu16_uADC_NTCTemp_IF;
busSigIn_SlwTaskIn.busOBD_FaltSt =  busOBD_SlwTaskOut.busOBD_FaltSt;
}

void Interface_ApplCom_ASW_Trans(void)
{
	static uint16 MCUF_PumpMotorSpeedReq;
  static uint8 MCUF_CRCCheck_27A;
  static uint8 ComIf_APPRxMesCntOld = 0;
  static sint16 ComIf_BusCurrent;
  static uint8 ComIf_RunningStatus;
  static uint8 ComIf_OffCmdRecFb;
  static sint16 ComIf_PhaseCurrent;
  static sint16 ComIf_ActualSpeed;
  static uint8 ComIf_AlvCnt1;
  static uint8 ComIf_AlvCnt2;
	static uint8 u8_ComIf_APPRxMesCntOld = 0;	
/* Receive Application message */
	MCUF_OperationModel = Temp_OperationModel;
  MCUF_OperationModel=1;//(Gu8_ComIf_APPRxMsgData[2] & (0x40))>>6;
  bol_ComIf_flgCrashFalt = (Gu8_ComIf_APPRxMsgData[2] & (0x80))>>6;
  MCUF_PumpMotorSpeedReq = s16_Temp_nComRefMechSpd;//(Gu8_ComIf_APPRxMsgData[1] & 0xFF) |((Gu8_ComIf_APPRxMsgData[2] & 0x1F)<<8);
  s16_ComIf_nComRefMechSpd = (sint16)((sint32)(MCUF_PumpMotorSpeedReq<<15)/Cdbl_nMechSpdPeakVal);
  MCUF_RollingCounter_27A = (Gu8_ComIf_APPRxMsgData[6] & (0xF0))>>4;
  MCUF_CRCCheck_27A = Gu8_ComIf_APPRxMsgData[7] & (0xFF);
	if(MCUF_CRCCheck_27A == Interface_crc_high_first(&Gu8_ComIf_APPRxMsgData[0],6))
	{
	bol_ComIf_flgCRCFaltRaw = false;
	}
	else
	{
	bol_ComIf_flgCRCFaltRaw = true;
	}
	
	/* Send Application message 0x1F */
  u8_ComIf_APPTxMsgData1[0] = (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPhCurrHiLvl1Flg & 0x01) | ((bol_flgCalibFin<<2) & 0x04) | ((busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgMotoStallPermFlg<<3) & 0x08) | ((busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgHWOvrCurrFlg<<5) & 0x20) | (((busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgComFaltFlg & bol_ComIf_flgComLosFaltRaw)<<6) & 0x40);
  u8_ComIf_APPTxMsgData1[1] = (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPwrTubPCBTempHiLvl2Flg & 0x01) | ((busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPhiSensFaltFlg<<1) & 0x02) | ((busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgGDVltgHiLvl1Flg<<2) & 0x04) | ((busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgSplyVltgHiLvl1Flg<<3) & 0x08) | ((busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgGDVltgLoLvl1Flg<<4) & 0x10) | ((busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgSplyVltgLoLvl1Flg<<5) & 0x20);
	ComIf_BusCurrent = (sint16)((sint32)((sint32)(busAST_SlwTaskOut.s16_iEstSplyCurr)*Cdbl_iSplyCurrPeakVal*10)>>15);
	if(busAST_SlwTaskOut.enm_stSysSt == SYSINIT)
	{
	ComIf_RunningStatus = 0;
	}
	else if (busAST_SlwTaskOut.enm_stSysSt == STANDBY)
	{
	ComIf_RunningStatus = 3;
	}
	else if(busAST_SlwTaskOut.enm_stSysSt == SYSFAIL)
	{
	ComIf_RunningStatus = 7;
	}
	else
	{
	ComIf_RunningStatus = 5;
	}
	u8_ComIf_APPTxMsgData1[2] = ComIf_BusCurrent & 0xFF;
  u8_ComIf_APPTxMsgData1[3] = ((ComIf_BusCurrent >>8) & 0x03) | (((busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgComFaltFlg & (!bol_ComIf_flgComLosFaltRaw & !bol_ComIf_flgCRCFaltRaw))<<2) & 0x04) |(((busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgComFaltFlg & bol_ComIf_flgCRCFaltRaw)<<3) & 0x08) |((ComIf_RunningStatus<<4) & 0xF0);
  if (MCUF_OperationModel == 0 && !busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgComFaltFlg)
	{
	ComIf_OffCmdRecFb = 1;
	}
	else
	{
	ComIf_OffCmdRecFb = 0;
	}
	u8_ComIf_APPTxMsgData1[4] = ComIf_OffCmdRecFb & 0x01;
  ComIf_PhaseCurrent = (sint16)((sint32)((sint32)(busAST_SlwTaskOut.s16_ampActPhCurrAmp)*Cdbl_iPhCurrPeakVal*10)>>15);
  u8_ComIf_APPTxMsgData1[5] = (ComIf_PhaseCurrent <<1) & 0xFE;
	if (ComIf_AlvCnt1 < 15)
	{
	ComIf_AlvCnt1 ++;
	}
	else
	{
	ComIf_AlvCnt1 = 0;
	}
	u8_ComIf_APPTxMsgData1[6] = ((ComIf_AlvCnt1<<4) & 0xF0) |  ((ComIf_PhaseCurrent <<8) & 0x0F);
  u8_ComIf_APPTxMsgData1[7] = Interface_crc_high_first(&u8_ComIf_APPTxMsgData1[0],6);
	//ComIf_Set_APPTxMsgData(u8_ComIf_APPTxMsgData1,0x1F);
	
	/* Send Application message 0x20 */
	u8_ComIf_APPTxMsgData2[0] = Gu8_tMcuTemp_IF & 0xFF;
  u8_ComIf_APPTxMsgData2[1] = busSigIn_SlwTaskOut.u8_tPCBTemp & 0xFF;
  u8_ComIf_APPTxMsgData2[2] =  (uint8)((sint32)((sint32)(busSigIn_SlwTaskOut.u16_uSplyVltg)*Cdbl_uSplyVltgPeakVal*5)>>15) & 0xFF;
  ComIf_ActualSpeed = (sint16)((sint32)((sint32)(busPhVltgGen_MedTaskOut.s16_nActElecSpd)*Cdbl_nElecAgSpdPeakVal*190986/100000)>>15);
  u8_ComIf_APPTxMsgData2[3] = ComIf_ActualSpeed & 0xFF;
  u8_ComIf_APPTxMsgData2[4] = ((ComIf_ActualSpeed>>8) & 0x1F) | ((busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgPwrTubPCBTempSensFaltFlg<<5) & 0x20);
	//ComIf_Set_APPTxMsgData(u8_ComIf_APPTxMsgData2,0x20);
	if(ComIf_AlvCnt2 < 15)
	{
	ComIf_AlvCnt2 ++;
	}
	else
	{
	ComIf_AlvCnt2 == 0;
	}
	u8_ComIf_APPTxMsgData2[6] = (ComIf_AlvCnt2<<4) & 0xF0;
  u8_ComIf_APPTxMsgData2[7] = Interface_crc_high_first(&u8_ComIf_APPTxMsgData2[0],6);
	//ComIf_Set_APPTxMsgData(u8_ComIf_APPTxMsgData2,0x20);
	
	/* Gu8_ComIf_APPRxMesCnt */
	if(Gu8_ComIf_APPRxMesCnt == u8_ComIf_APPRxMesCntOld)
	{
	bol_ComIf_flgComLosFaltRaw = true;
	}
	else
	{
		bol_ComIf_flgComLosFaltRaw = false;
    u8_ComIf_APPRxMesCntOld = Gu8_ComIf_APPRxMesCnt;
	}
		
}

void Interface_FrzUDSCom_ASW_Trans(void)
{
	/* Send 22 service message */
  static uint8_t u8_NumHWVersion = 0;
//	busComIf_UDSRead_In.u8_SysName[7] = {'E','L','O','P','1','8','7'};
//  busComIf_UDSRead_In.u8_WF_SWVersion[10] = {¡®Y¡¯,¡®2¡¯,¡®P¡¯,¡®S¡¯,¡®0¡¯,¡®0¡¯,¡®3¡¯,¡®.¡¯,¡®0¡¯,¡®0¡¯};
 // busComIf_UDSRead_In.u8_CalibDataVersion[25] = {¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯,¡®X¡¯};	

	for(u8_NumHWVersion = 0;u8_NumHWVersion < 10;u8_NumHWVersion++)
	{
	busComIf_UDSRead_In.u8_WF_HWVersion[u8_NumHWVersion] = u8_Interface_HWVersion[u8_NumHWVersion];
	}
}

void Interface_AgCalib_Trans(void)
{
  static uint8_t calib_sts = 0;
	static bool bol_flgPosSCDCalibSucFlgOld = false;
	uint16_t* calib_buff;
	
	switch(calib_sts)
  {
    case 0: //INIT
    {
	/**
	 * Now, charact data not at 'UC_FLASH0_UDATA_START' this address
	 * All Data stored in NVM would be copy to ram by 'Mem_DataNVM2RAM()' at first
	*/
		calib_buff = (uint16_t *)(offset_buff);
	  if ( (calib_buff[0] ^ calib_buff[1]) == 0xFFFFu )
      {
				u16_AgADOffset = calib_buff[0];
        calib_sts = 2;
      }
      else
      {
        calib_sts = 1;
      }

      break;
    }
		
    case 1: //CALIBRATION
		{
		if ((bol_flgPosSCDCalibSucFlgOld == false) && (busAST_SlwTaskOut.bol_flgPosSCDCalibSucFlg ==true))
		{
			u16_AgADOffset = busAST_SlwTaskOut.u16_ADSensMechAgDvt;
			offset_buff[0] = u16_AgADOffset;
      offset_buff[1] = ~u16_AgADOffset;

			/**This palce should make 'u16_AgADOffset' at MEM_CHARACT_DATA_RAM section which use 'MEM_CHARACT_DATA_RAM', 
			 * and call function 'Mem_DataRAM2NVM(MEM_CHARACT_DATA)', can store data to NVM
			 * */
			//Sys_IntDisIrq();
			//(void)Mem_DataRAM2NVM();
			//Sys_IntEnIrq();
			/* Calibration done, execute a WD reset */ 
			for(;;);
		}
		bol_flgPosSCDCalibSucFlgOld = busAST_SlwTaskOut.bol_flgPosSCDCalibSucFlg;
	      break;
		}
	case 2: // CALIBRATED
    {
      bol_flgCalibFin = true;
      break;
    }
    default:
      break;
  }
}

void Interface_Mem_Trans(void)
{
		/* for Save product information  */
	static uint8_t NumWF_HWVersion = 0;
	for(NumWF_HWVersion = 0;NumWF_HWVersion < 10;NumWF_HWVersion++)
	{
	u8_Interface_HWVersion[NumWF_HWVersion] = Gu8_ComIf_HWVersion[NumWF_HWVersion];
	}
	
	if(Gu8_ComIf_UDSWriteFlg == 1)
	{
	  //Mem_DataRAM2NVM();
    Gu8_ComIf_UDSWriteFlg = 0;
	}
}

/**
 * \fn       Interface_Set_DutyCycle
 * \brief    Get fuction to read duty cycles coputed by the control
 */
void Interface_Set_DutyCycle(uint16 u16_dutyCyc[3])
{

  u16_dutyCyc[0] = busDcycGen_FstTaskOut.u16_dcycPhDyc[0];
  u16_dutyCyc[1] = busDcycGen_FstTaskOut.u16_dcycPhDyc[1];
  u16_dutyCyc[2] = busDcycGen_FstTaskOut.u16_dcycPhDyc[2];
}
/**
 * \fn       let motor sleep
 * \brief    //
 */
	void Interface_SleepReq(void)
	{ 
	if ( (busAST_SlwTaskOut.enm_stSysSt == SYSSLEEP) &&  (busOBD_SlwTaskOut.busOBD_FaltSt.bol_flgComFaltFlg == true))
	{
//   Sys_ScuEnterSleepMode();
  }
}
