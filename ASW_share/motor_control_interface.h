/*
 * File: motor_control_interface.h
 *
 * Code generated for Simulink model 'ASW_SigIn'.
 *
 * Model version                  : 6.141
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Jan 14 13:36:13 2025
 */

#ifndef RTW_HEADER_motor_control_interface_h_
#define RTW_HEADER_motor_control_interface_h_
#include "rtwtypes.h"
#include "custom_type_definition.h"

typedef struct {
  boolean bol_flgPhCurrHiLvl1Flg;

  /* Actual electric angle  */
  boolean bol_flgHWOvrCurrFlg;

  /* Actual electric angle  */
  boolean bol_flgSplyVltgLoLvl1Flg;

  /* Actual electric angle  */
  boolean bol_flgSplyVltgLoLvl2Flg;

  /* Actual electric angle  */
  boolean bol_flgSplyVltgHiLvl1Flg;

  /* Actual electric angle  */
  boolean bol_flgPwrTubPCBTempHiLvl1Flg;

  /* Actual electric angle  */
  boolean bol_flgPwrTubPCBTempHiLvl2Flg;

  /* Actual electric angle  */
  boolean bol_flgMotoTempHiLvl1Flg;

  /* Actual electric angle  */
  boolean bol_flgMotoTempHiLvl2Flg;

  /* Actual electric angle  */
  boolean bol_flgComFaltFlg;

  /* Actual electric angle  */
  boolean bol_flgMotoStallPermFlg;

  /* Actual electric angle  */
  boolean bol_flgMotoStallTmpFlg;

  /* Actual electric angle  */
  boolean bol_flgNoLdFlg;

  /* Actual electric angle  */
  boolean bol_flgBattPwrHiLvl1Flg;

  /* Actual electric angle  */
  boolean bol_flgMotoSpdHiLvl1Flg;

  /* Actual electric angle  */
  boolean bol_flgMotoSpdLoLvl1Flg;

  /* Actual electric angle  */
  boolean bol_flgCtlBrdVltgLoLvl1Flg;

  /* Actual electric angle  */
  boolean bol_flgCtlBrdVltgHiLvl1Flg;

  /* Actual electric angle  */
  boolean bol_flgGDVltgLoLvl1Flg;

  /* Actual electric angle  */
  boolean bol_flgGDVltgHiLvl1Flg;

  /* Actual electric angle  */
  boolean bol_flgChipFaltFlg;

  /* Actual electric angle  */
  boolean bol_flgPhiSensFaltFlg;

  /* Actual electric angle  */
  boolean bol_flgPhCurrSensFaltFlg;

  /* Actual electric angle  */
  boolean bol_flgPwrTubPCBTempSensFaltFlg;

  /* Actual electric angle  */
  boolean bol_flgMotoTempSensFaltFlg;

  /* Actual electric angle  */
  boolean bol_flgBusOffFaltFlg;

  /* Actual electric angle  */
  boolean bol_flgCrashFaltFlg;

  /* Actual electric angle  */
  boolean bol_flgReserved3Flg;

  /* Actual electric angle  */
  boolean bol_flgReserved4Flg;

  /* Actual electric angle  */
  boolean bol_flgReserved5Flg;
} BUS_OBD_FALT_STS;

typedef struct {
  /* Reference mechanical speed in RPM */
  dt_Standardize_s16p15b0 s16_nComRefMechSpd;

  /* Actual electric speed in rad/s */
  dt_Standardize_s16p15b0 s16_nActElecSpd;
  dt_Standardize_s16p15b0 s16_uModulDaxQaxVltg[2];
  dt_Standardize_u16p15b0 u16_uSplyVltg;
  dt_Standardize_s16p15b0 s16_iActDaxQaxCurr[2];

  /* Actual electric angle  */
  ENM_MOTO_STATUS enm_stMotoSt;

  /* Actual electric angle  */
  boolean bol_enPosSCDCalibEnFlg;

  /* Measured rotor angle by the GMR sensor */
  dt_RadAng_u16r15b0 u16_phiSensActElecAg;

  /* Measured rotor angle by the GMR sensor */
  uint8 u8_stMaxFaltLvl;

  /* Measured rotor angle by the GMR sensor */
  BUS_OBD_FALT_STS busOBD_FaltSt;

  /* Measured rotor angle by the GMR sensor */
  dt_Standardize_s16p15b0 s16_nFaltRefMechSpd;

  /* Measured rotor angle by the GMR sensor */
  dt_Standardize_s16p15b0 s16_trqFaltRefTqLim;

  /* Measured rotor angle by the GMR sensor */
  uint8 u8_modeMCUOpMode;

  /* Measured rotor angle by the GMR sensor */
  dt_Temp_u8p0bn40 u8_tPCBTempSubs;
  dt_DutyCycl_u16p15b0 u16_ampMaxNrmVltgAmp;
  dt_Standardize_s16p15b0 s16_uRefDaxVltg;
  boolean bol_flgOvrTstCtlUDS2F;

  /* Reference Direct and Quadrature curents */
  boolean bol_flgPhiSensFaltRawFlg;

  /* Reference Direct and Quadrature curents */
  uint8 u8_FrzFrmSaveFlg;

  /* Reference Direct and Quadrature curents */
  boolean bol_flgSlepEn;
} BUS_AST_SLW_TASK_IN;

typedef struct {
  /* Estimated DC supply current */
  dt_Standardize_s16p15b0 s16_iEstSplyCurr;

  /* Actual line current */
  dt_Standardize_s16p15b0 s16_ampActPhCurrAmp;

  /* Reference current in align state */
  dt_Standardize_s16p15b0 s16_trqPosSCDCalibRefTq;

  /* Reference electric angle in align state */
  dt_RadAng_u16r15b0 u16_phiPosSCDCalibElecAg;

  /* Judge whether calibration is successful */
  boolean bol_flgPosSCDCalibSucFlg;

  /* mechanical angle error */
  uint16 u16_ADSensMechAgDvt;

  /* Align state */
  ENM_AG_SENS_CALIB_STATUS enm_stPosSCDCalibSt;

  /* Align fail */
  boolean bol_flgPosSCDCalibPermFail;

  /* Align fail */
  dt_Standardize_s16p15b0 s16_trqRefTqLim;

  /* Align fail */
  dt_Standardize_s16p15b0 s16_nRmpRefElecSpd;
  boolean bol_flgShOffFlg;
  dt_Standardize_s16p15b0 s16_nRefElecSpd;
  ENM_SYS_STATUS enm_stSysSt;
  dt_Standardize_u16p15b0 u16_ampMaxVltgAmp;
  dt_Standardize_s16p15b0 s16_uRefDaxVltgLim;
  dt_Standardize_s16p15b0 s16_uRefQaxVltgLim;
  dt_Standardize_s16p15b0 s16_pwrSplyElecPwr;
  ENM_AG_POS_EVAL_MODE enm_modeAgEvalMode;
} BUS_AST_SLW_TASK_OUT;

typedef struct {
  /* Duty cycle amplitude */
  dt_DutyCycl_u16p15b0 u16_ampDycAmp;

  /* Electric angle */
  dt_RadAng_u16r15b0 u16_phiActElecAg;

  /* Voltage angle */
  dt_RadAng_u16r15b0 u16_phiDaxQaxVltgAg;

  /* Motor status */
  ENM_MOTO_STATUS enm_stMotoSt;

  /* Predicted electric speed */
  dt_Standardize_s16p15b0 s16_nPredActElecSpd;

  /* Predicted electric speed */
  boolean bol_enPosSCDCalibEnFlg;
} BUS_DCYCGEN_FST_TASK_IN;

typedef struct {
  /* Duty cycle for XYZ phases */
  dt_DutyCycl_u16p15b0 u16_dcycPhDyc[3];

  /* Maximum normalized voltage amplitude */
  dt_DutyCycl_u16p15b0 u16_ampMaxNrmVltgAmp;

  /* Estimated electric angle */
  dt_RadAng_u16r15b0 u16_phiModulActElecAg;
} BUS_DCYCGEN_FST_TASK_OUT;

typedef struct {
  dt_Standardize_s16p15b0 s16_nRmpRefElecSpd;

  /* Actual electric speed in rad/s */
  dt_Standardize_s16p15b0 s16_nActElecSpd;

  /* Actual electric angle  */
  ENM_MOTO_STATUS enm_stMotoSt;

  /* Actual electric angle  */
  dt_Standardize_s16p15b0 s16_ampActPhCurrAmp;

  /* Actual electric angle  */
  dt_Standardize_u16p15b0 u16_uSplyVltg;

  /* Actual electric angle  */
  dt_Temp_u8p0bn40 u8_tPwrTubTemp;

  /* Actual electric angle  */
  dt_Temp_u8p0bn40 u8_tPCBTemp;

  /* Actual electric angle  */
  dt_Temp_u8p0bn40 u8_tMotoTemp;

  /* Actual electric angle  */
  boolean bol_flgComLosFaltRaw;

  /* Actual electric angle  */
  uint8 u8_ctComRolCnt;

  /* Actual electric angle  */
  dt_Standardize_u16p15b0 u16_uCtlBrdVltg;
  ENM_SYS_STATUS enm_stSysSt;
  boolean bol_flgHWOvrCurrFalt;
  boolean bol_flgChipFalt;
  boolean bol_flgPhiSensFalt;
  uint16 u16_uADActPhCurr[3];
  uint16 u16_uADPwrTubTemp;
  uint16 u16_uADPCBTemp;
  uint16 u16_uADMotoTemp;
  dt_Standardize_s16p15b0 s16_pwrSplyElecPwr;
  dt_Standardize_s16p15b0 s16_iActPhCurr[3];
  dt_Standardize_s16p15b0 s16_iEstSplyCurr;
  dt_Standardize_s16p15b0 s16_iRefDaxQaxCurr[2];
  dt_Standardize_s16p15b0 s16_iActDaxQaxCurr[2];
  boolean bol_flgShOffFlg;
  boolean bol_enFaltInfoClrUDS14;
  uint16 u16_vVehSpd;
  uint32 u32_disOde;
  uint32 u32_tiStamHi;
  uint32 u32_tiStamLo;
  uint8 u8_psiOilFlow;
  dt_Temp_u8p0bn40 u8_tOilTemp;
  boolean bol_enPosSCDCalibEnFlg;
  uint8 u8_psiUpLimOilFlow;
  boolean bol_flgBusOffFaltRaw;
  boolean bol_flgFaltEnFlgUDS85;
  boolean bol_flgWBSSt;
  boolean bol_flgCRCFaltRaw;
  boolean bol_flgMesgLngthFaltRaw;
  dt_Standardize_s16p15b0 s16_nComRefMechSpd;
  dt_Standardize_u16p15b0 u16_psiEstPermMagFlx;
  ENM_AG_POS_EVAL_MODE enm_modeAgEvalMode;
  boolean bol_flgCrashFalt;
  boolean bol_flgGDVltgHiLvl1;
  boolean bol_flgGDVltgLoLvl1;
  dt_Temp_u8p0bn40 u8_tMCUTemp;
  dt_Temp_u8p0bn40 u8_tPCBTempSubs;
  dt_Standardize_u16p15b0 u16_uGDVltg;
} BUS_OBD_SLW_TASK_IN;

typedef struct {
  BUS_OBD_FALT_STS busOBD_FaltSt;

  /* Reference Direct and Quadrature curents */
  uint8 u8_stMaxFaltLvl;

  /* Reference Direct and Quadrature curents */
  dt_Standardize_s16p15b0 s16_nFaltRefMechSpd;

  /* Reference Direct and Quadrature curents */
  dt_Standardize_s16p15b0 s16_trqFaltRefTqLim;

  /* Reference Direct and Quadrature curents */
  boolean bol_flgPhiSensFaltRawFlg;
} BUS_OBD_SLW_TASK_OUT;

typedef struct {
  /* Reference mechanical speed in RPM */
  dt_Standardize_s16p15b0 s16_nRefElecSpd;

  /* Actual electric speed in rad/s */
  dt_Standardize_s16p15b0 s16_nActElecSpd;

  /* Permanent magnetic flux */
  dt_Standardize_s16p15b0 s16_nRmpRefElecSpd;

  /* DC supply current limit for derating provided by BSW */
  dt_Standardize_s16p15b0 s16_trqRefTqLim;
  boolean bol_flgShOffFlg;
  boolean bol_enPosSCDCalibEnFlg;

  /* Reference Direct and Quadrature currents */
  dt_Standardize_s16p15b0 s16_trqPosSCDCalibRefTq;

  /* Reference Direct and Quadrature currents */
  ENM_AG_POS_EVAL_MODE enm_modeAgEvalMode;
} BUS_PHCURRGEN_SLW_TASK_IN;

typedef struct {
  /* Reference Direct and Quadrature currents */
  dt_Standardize_s16p15b0 s16_iRefDaxQaxCurr[2];

  /* enmMotStas */
  ENM_MOTO_STATUS enm_stMotoSt;
} BUS_PHCURRGEN_SLW_TASK_OUT;

typedef struct {
  /* Reference Direct and Quadrature curents */
  dt_Standardize_s16p15b0 s16_iRefDaxQaxCurr[2];

  /* Actual Direct and Quadrature curents */
  dt_Standardize_s16p15b0 s16_iActPhCurr[3];

  /* Actual Direct and Quadrature curents */
  dt_RadAng_u16r15b0 u16_phiSensActElecAg;

  /* Supply DC voltage */
  dt_Standardize_u16p15b0 u16_uSplyVltg;

  /* Motor status */
  ENM_MOTO_STATUS enm_stMotoSt;

  /* Estimated electric angle */
  dt_RadAng_u16r15b0 u16_phiModulActElecAg;

  /* Reference electric angle in align state */
  dt_RadAng_u16r15b0 u16_phiPosSCDCalibElecAg;
  dt_DutyCycl_u16p15b0 u16_dcycPhDyc[3];

  /* Reference electric angle in align state */
  boolean bol_enPosSCDCalibEnFlg;

  /* Reference electric angle in align state */
  ENM_AG_POS_EVAL_MODE enm_modeAgEvalMode;
  dt_Standardize_s16p15b0 s16_nRmpRefElecSpd;

  /* Reference electric angle in align state */
  dt_Standardize_u16p15b0 u16_ampMaxVltgAmp;

  /* Reference electric angle in align state */
  dt_Standardize_s16p15b0 s16_uRefDaxVltgLim;

  /* Reference electric angle in align state */
  dt_Standardize_s16p15b0 s16_uRefQaxVltgLim;
} BUS_PHVLTGGEN_MED_TASK_IN;

typedef struct {
  /* Duty cycle amplitude */
  dt_DutyCycl_u16p15b0 u16_ampDycAmp;

  /* Voltage angle */
  dt_RadAng_u16r15b0 u16_phiDaxQaxVltgAg;

  /* Actual electric angle */
  dt_RadAng_u16r15b0 u16_phiActElecAg;

  /* Actual electric speed */
  dt_Standardize_s16p15b0 s16_nActElecSpd;

  /* Actual Direct and Quadrature current */
  dt_Standardize_s16p15b0 s16_iActDaxQaxCurr[2];

  /* Predicted electric speed */
  dt_Standardize_s16p15b0 s16_nPredActElecSpd;

  /* Reference Direct and Quadrature currents */
  dt_Standardize_s16p15b0 s16_uModulDaxQaxVltg[2];
  dt_Standardize_s16p15b0 s16_uRefDaxVltg;
  dt_RadAng_u16r15b0 u16_phiSenlElecAgSensElecAgDvt;
  dt_Standardize_u16p15b0 u16_psiEstPermMagFlx;
} BUS_PHVLTGGEN_MED_TASK_OUT;

typedef struct {
  /* Reference Direct and Quadrature curents */
  uint16 u16_ADSensActMechAg;

  /* Reference Direct and Quadrature curents */
  uint16 u16_uADActPhCurr[3];

  /* Reference Direct and Quadrature curents */
  uint16 u16_uADActPhCurrOfs;
  uint8 u8_numSectNum;
} BUS_SIGIN_MED_TASK_IN;

typedef struct {
  /* Duty cycle amplitude */
  dt_RadAng_u16r15b0 u16_phiSensActElecAg;

  /* Duty cycle amplitude */
  dt_Standardize_s16p15b0 s16_iActPhCurr[3];
} BUS_SIGIN_MED_TASK_OUT;

typedef struct {
  /* Reference Direct and Quadrature curents */
  uint16 u16_uADSplyVltg;

  /* Reference Direct and Quadrature curents */
  uint16 u16_uADCtlBrdVltg;

  /* Reference Direct and Quadrature curents */
  uint16 u16_uADGDVltg;

  /* Reference Direct and Quadrature curents */
  uint16 u16_uADPwrTubTemp;

  /* Reference Direct and Quadrature curents */
  uint16 u16_uADPCBTemp;

  /* Reference Direct and Quadrature curents */
  uint16 u16_uADMotoTemp;
  dt_Temp_u8p0bn40 u8_tMCUTemp;
  BUS_OBD_FALT_STS busOBD_FaltSt;
} BUS_SIGIN_SLW_TASK_IN;

typedef struct {
  /* Reference Direct and Quadrature curents */
  dt_Standardize_u16p15b0 u16_uSplyVltg;

  /* Reference Direct and Quadrature curents */
  dt_Standardize_u16p15b0 u16_uCtlBrdVltg;

  /* Reference Direct and Quadrature curents */
  dt_Standardize_u16p15b0 u16_uGDVltg;

  /* Reference Direct and Quadrature curents */
  dt_Temp_u8p0bn40 u8_tPwrTubTemp;

  /* Reference Direct and Quadrature curents */
  dt_Temp_u8p0bn40 u8_tPCBTemp;

  /* Reference Direct and Quadrature curents */
  dt_Temp_u8p0bn40 u8_tMotoTemp;

  /* Reference Direct and Quadrature curents */
  dt_Temp_u8p0bn40 u8_tPCBTempSubs;
} BUS_SIGIN_SLW_TASK_OUT;

#endif                               /* RTW_HEADER_motor_control_interface_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
