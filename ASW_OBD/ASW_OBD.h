/*
 * File: ASW_OBD.h
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

#ifndef RTW_HEADER_ASW_OBD_h_
#define RTW_HEADER_ASW_OBD_h_
#ifndef ASW_OBD_COMMON_INCLUDES_
#define ASW_OBD_COMMON_INCLUDES_
#include "../ASW_share/rtwtypes.h"
#endif                                 /* ASW_OBD_COMMON_INCLUDES_ */

//#include "ASW_OBD_types.h"
#include "../ASW_share/custom_type_definition.h"
#include "../ASW_share/motor_control_interface.h"
#include <string.h>
#include "../ASW_share/zero_crossing_types.h"

/* Block states (default storage) for system '<S37>/sfc_FaultDebounce' */
typedef struct {
  uint16 lb_cntDebCond;                /* '<S37>/sfc_FaultDebounce' */
  uint8 is_active_c7_lib_debounce;     /* '<S37>/sfc_FaultDebounce' */
  uint8 is_c7_lib_debounce;            /* '<S37>/sfc_FaultDebounce' */
} DW_sfc_FaultDebounce_ASW_OBD;

/* Block states (default storage) for system '<S35>/lib_Deb_11' */
typedef struct {
  DW_sfc_FaultDebounce_ASW_OBD sf_sfc_FaultDebounce;/* '<S37>/sfc_FaultDebounce' */
} DW_lib_Deb_11_ASW_OBD;

/* Block states (default storage) for system '<S36>/sfc_FaultDefiniteness' */
typedef struct {
  uint16 FaltWaitRecvCnt;              /* '<S36>/sfc_FaultDefiniteness' */
  uint8 is_active_c2_s2gUMFbtGpNo4AAroJ;/* '<S36>/sfc_FaultDefiniteness' */
  uint8 is_c2_s2gUMFbtGpNo4AAroJTbGcH_l;/* '<S36>/sfc_FaultDefiniteness' */
  uint8 is_EnableDiagnosis;            /* '<S36>/sfc_FaultDefiniteness' */
} DW_sfc_FaultDefiniteness_ASW_OB;

/* Block states (default storage) for system '<S34>/lib_FaltDefd_21' */
typedef struct {
  DW_sfc_FaultDefiniteness_ASW_OB sf_sfc_FaultDefiniteness;/* '<S36>/sfc_FaultDefiniteness' */
} DW_lib_FaltDefd_21_ASW_OBD;

/* Block states (default storage) for system '<S62>/lib_Deb_5' */
typedef struct {
  DW_sfc_FaultDebounce_ASW_OBD sf_sfc_FaultDebounce;/* '<S63>/sfc_FaultDebounce' */
} DW_lib_Deb_5_ASW_OBD;

/* Block states (default storage) for system '<S73>/sfc_Debounce' */
typedef struct {
  uint16 lb_cntDebCond;                /* '<S73>/sfc_Debounce' */
  uint8 is_active_c7_vhit_control_libra;/* '<S73>/sfc_Debounce' */
  uint8 is_c7_vhit_control_library;    /* '<S73>/sfc_Debounce' */
} DW_sfc_Debounce_ASW_OBD;

/* Block states (default storage) for system '<S71>/lib_HysDeb_1' */
typedef struct {
  struct {
    uint_T UnitDelay2_DSTATE:1;        /* '<S73>/Unit Delay2' */
  } bitsForTID1;

  DW_sfc_Debounce_ASW_OBD sf_sfc_Debounce1;/* '<S73>/sfc_Debounce1' */
  DW_sfc_Debounce_ASW_OBD sf_sfc_Debounce;/* '<S73>/sfc_Debounce' */
} DW_lib_HysDeb_1_ASW_OBD;

/* Block states (default storage) for system '<S148>/lib_HysDeb_14' */
typedef struct {
  struct {
    uint_T UnitDelay2_DSTATE:1;        /* '<S150>/Unit Delay2' */
  } bitsForTID1;

  DW_sfc_Debounce_ASW_OBD sf_sfc_Debounce1;/* '<S150>/sfc_Debounce1' */
  DW_sfc_Debounce_ASW_OBD sf_sfc_Debounce;/* '<S150>/sfc_Debounce' */
} DW_lib_HysDeb_14_ASW_OBD;

/* Block states (default storage) for system '<S165>/lib_HysDeb_12' */
typedef struct {
  struct {
    uint_T UnitDelay2_DSTATE:1;        /* '<S167>/Unit Delay2' */
  } bitsForTID1;

  DW_sfc_Debounce_ASW_OBD sf_sfc_Debounce1;/* '<S167>/sfc_Debounce1' */
  DW_sfc_Debounce_ASW_OBD sf_sfc_Debounce;/* '<S167>/sfc_Debounce' */
} DW_lib_HysDeb_12_ASW_OBD;

/* Block states (default storage) for system '<S216>/lib_FaltDefd_14' */
typedef struct {
  DW_sfc_FaultDefiniteness_ASW_OB sf_sfc_FaultDefiniteness;/* '<S218>/sfc_FaultDefiniteness' */
} DW_lib_FaltDefd_14_ASW_OBD;

/* Block signals (default storage) */
typedef struct {
  dt_Standardize_s16p15b0 Assignment[30];/* '<S125>/Assignment' */
  dt_Standardize_s16p15b0 Assignment1[30];/* '<S125>/Assignment1' */
  BUS_OBD_FALT_STS BusCreator1;        /* '<S9>/Bus Creator1' */
  uint8 DataTypeConversion3[30];       /* '<S9>/Data Type Conversion3' */
  uint8 Assignment_czft[30];           /* '<S94>/Assignment' */
  boolean DataTypeConversion2[30];     /* '<S9>/Data Type Conversion2' */
  boolean Assignment_al4c[30];         /* '<S267>/Assignment' */
  struct {
    uint_T LogicalOperator1:1;         /* '<S271>/Logical Operator1' */
    uint_T LogicalOperator3:1;         /* '<S269>/Logical Operator3' */
    uint_T LogicalOperator5:1;         /* '<S275>/Logical Operator5' */
    uint_T LogicalOperator6:1;         /* '<S275>/Logical Operator6' */
    uint_T LogicalOperator8:1;         /* '<S274>/Logical Operator8' */
    uint_T LogicalOperator3_k1jc:1;    /* '<S274>/Logical Operator3' */
    uint_T LogicalOperator9:1;         /* '<S274>/Logical Operator9' */
    uint_T LogicalOperator5_opu4:1;    /* '<S274>/Logical Operator5' */
    uint_T LogicalOperator11:1;        /* '<S270>/Logical Operator11' */
    uint_T LogicalOperator3_nufb:1;    /* '<S270>/Logical Operator3' */
    uint_T LogicalOperator5_hofo:1;    /* '<S270>/Logical Operator5' */
    uint_T LogicalOperator8_a4kw:1;    /* '<S270>/Logical Operator8' */
    uint_T LogicalOperator3_mlkr:1;    /* '<S273>/Logical Operator3' */
    uint_T LogicalOperator4:1;         /* '<S273>/Logical Operator4' */
    uint_T LogicalOperator15:1;        /* '<S270>/Logical Operator15' */
    uint_T LogicalOperator:1;          /* '<S295>/Logical Operator' */
    uint_T bol_flgComDiaInitDisbl:1;   /* '<S270>/sfc_ComDiaInitEn' */
    uint_T LogicalOperator2:1;         /* '<S229>/Logical Operator2' */
    uint_T LogicalOperator1_c3mb:1;    /* '<S229>/Logical Operator1' */
    uint_T LogicalOperator1_cq5m:1;    /* '<S216>/Logical Operator1' */
    uint_T LogicalOperator2_eork:1;    /* '<S207>/Logical Operator2' */
    uint_T LogicalOperator2_fqo5:1;    /* '<S203>/Logical Operator2' */
    uint_T LogicalOperator_kubn:1;     /* '<S182>/Logical Operator' */
    uint_T OR2:1;                      /* '<S155>/OR2' */
    uint_T bol_flgGDVltgLoLvl1:1;      /* '<S137>/bol_flgGDVltgLoLvl1' */
    uint_T bol_flgGDVltgHiLvl1:1;      /* '<S130>/bol_flgGDVltgHiLvl1' */
    uint_T stFaltDef_Perm_l1lp:1;      /* '<S61>/sfc_FaultDefiniteness' */
    uint_T LogicalOperator_hyuk:1;     /* '<S62>/Logical Operator' */
  } bitsForTID1;

  dt_Standardize_s16p15b0 Switch1;     /* '<S115>/Switch1' */
  dt_Standardize_s16p15b0 Divide1;     /* '<S124>/Divide1' */
  dt_Standardize_s16p15b0 Switch3;     /* '<S113>/Switch3' */
  uint8 FaltCycAccCnt;                 /* '<S298>/sfc_FaultDefiniteness' */
  uint8 Selector1;                     /* '<S285>/Selector1' */
  uint8 FaltCycAccCnt_advj;            /* '<S288>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_e00n;            /* '<S260>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_akrv;            /* '<S253>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_eksn;            /* '<S246>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_kent;            /* '<S230>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_mbzj;            /* '<S219>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_lwpi;            /* '<S218>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_k5ca;            /* '<S208>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_buyv;            /* '<S201>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_psnz;            /* '<S194>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_fh1w;            /* '<S187>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_ibsm;            /* '<S180>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_mn3a;            /* '<S173>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_fxmn;            /* '<S166>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_fd2e;            /* '<S156>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_beqh;            /* '<S149>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_gwiq;            /* '<S143>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_ei2t;            /* '<S136>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_et1a;            /* '<S129>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_kbad;            /* '<S79>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_da1w;            /* '<S72>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_nakw;            /* '<S61>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_be2m;            /* '<S55>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_okl0;            /* '<S49>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_ozl3;            /* '<S43>/sfc_FaultDefiniteness' */
  uint8 FaltCycAccCnt_if4y;            /* '<S36>/sfc_FaultDefiniteness' */
  boolean stFaltDef_Perm;              /* '<S298>/sfc_FaultDefiniteness' */
  boolean lb_genOutp;                  /* '<S299>/sfc_FaultDebounce' */
  boolean stFaltDef_Tmpr;              /* '<S288>/sfc_FaultDefiniteness' */
  boolean stFaltDef_Perm_g4b1;         /* '<S288>/sfc_FaultDefiniteness' */
  boolean lb_genOutp_hfik;             /* '<S289>/sfc_FaultDebounce' */
  boolean stFaltDef_Perm_efmb;         /* '<S260>/sfc_FaultDefiniteness' */
  boolean Switch1_le4p;                /* '<S261>/Switch1' */
  boolean stFaltDef_Perm_ktdp;         /* '<S253>/sfc_FaultDefiniteness' */
  boolean Switch1_lspe;                /* '<S254>/Switch1' */
  boolean stFaltDef_Perm_f4wg;         /* '<S246>/sfc_FaultDefiniteness' */
  boolean RelationalOperator1;         /* '<S247>/Relational Operator1' */
  boolean Switch1_j0vh;                /* '<S247>/Switch1' */
  boolean stFaltDef_Perm_i2o3;         /* '<S230>/sfc_FaultDefiniteness' */
  boolean Switch1_h5dr;                /* '<S221>/Switch1' */
  boolean Switch1_mj3e;                /* '<S220>/Switch1' */
  boolean stFaltDef_Perm_dthc;         /* '<S208>/sfc_FaultDefiniteness' */
  boolean stFaltDef_Perm_omzh;         /* '<S201>/sfc_FaultDefiniteness' */
  boolean lb_genOutp_gw2t;             /* '<S202>/sfc_FaultDebounce' */
  boolean stFaltDef_Perm_lijp;         /* '<S194>/sfc_FaultDefiniteness' */
  boolean Switch1_pxi3;                /* '<S195>/Switch1' */
  boolean stFaltDef_Perm_kt5c;         /* '<S187>/sfc_FaultDefiniteness' */
  boolean lb_genOutp_hhu4;             /* '<S188>/sfc_FaultDebounce' */
  boolean stFaltDef_Perm_cm35;         /* '<S180>/sfc_FaultDefiniteness' */
  boolean lb_genOutp_f0nq;             /* '<S181>/sfc_FaultDebounce' */
  boolean stFaltDef_Perm_b5ga;         /* '<S173>/sfc_FaultDefiniteness' */
  boolean Switch1_j1ol;                /* '<S174>/Switch1' */
  boolean stFaltDef_Perm_h1g3;         /* '<S166>/sfc_FaultDefiniteness' */
  boolean Switch1_grgo;                /* '<S167>/Switch1' */
  boolean stFaltDef_Perm_ilgb;         /* '<S156>/sfc_FaultDefiniteness' */
  boolean stFaltDef_Perm_naf3;         /* '<S149>/sfc_FaultDefiniteness' */
  boolean Switch1_asmr;                /* '<S150>/Switch1' */
  boolean stFaltDef_Perm_dzb0;         /* '<S143>/sfc_FaultDefiniteness' */
  boolean lb_genOutp_neqw;             /* '<S144>/sfc_FaultDebounce' */
  boolean stFaltDef_Perm_g0ii;         /* '<S136>/sfc_FaultDefiniteness' */
  boolean lb_genOutp_j4vj;             /* '<S138>/sfc_FaultDebounce' */
  boolean stFaltDef_Perm_dgcc;         /* '<S129>/sfc_FaultDefiniteness' */
  boolean lb_genOutp_hynf;             /* '<S131>/sfc_FaultDebounce' */
  boolean stFaltDef_Perm_nbju;         /* '<S79>/sfc_FaultDefiniteness' */
  boolean RelationalOperator;          /* '<S80>/Relational Operator' */
  boolean Switch1_aqbl;                /* '<S80>/Switch1' */
  boolean stFaltDef_Perm_ofvs;         /* '<S72>/sfc_FaultDefiniteness' */
  boolean RelationalOperator1_l2l1;    /* '<S73>/Relational Operator1' */
  boolean Switch1_l3mi;                /* '<S73>/Switch1' */
  boolean stFaltDef_Perm_mvmh;         /* '<S55>/sfc_FaultDefiniteness' */
  boolean lb_genOutp_j4ya;             /* '<S56>/sfc_FaultDebounce' */
  boolean stFaltDef_Perm_bpps;         /* '<S49>/sfc_FaultDefiniteness' */
  boolean lb_genOutp_gufh;             /* '<S50>/sfc_FaultDebounce' */
  boolean stFaltDef_Perm_nx2u;         /* '<S43>/sfc_FaultDefiniteness' */
  boolean lb_genOutp_euom;             /* '<S44>/sfc_FaultDebounce' */
  boolean stFaltDef_Perm_iopf;         /* '<S36>/sfc_FaultDefiniteness' */
  boolean lb_genOutp_hlnt;             /* '<S37>/sfc_FaultDebounce' */
} B_ASW_OBD;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  BUS_OBD_FALT_STS UnitDelay_DSTATE;   /* '<S1>/Unit Delay' */
  struct {
    uint_T UnitDelay1_17_DSTATE:1;     /* '<S1>/Unit Delay1' */
    uint_T UnitDelay1_18_DSTATE:1;     /* '<S1>/Unit Delay1' */
    uint_T UnitDelay1_19_DSTATE:1;     /* '<S1>/Unit Delay1' */
    uint_T UnitDelay1_20_DSTATE:1;     /* '<S1>/Unit Delay1' */
    uint_T UnitDelay1_23_DSTATE:1;     /* '<S1>/Unit Delay1' */
    uint_T UnitDelay1_24_DSTATE:1;     /* '<S1>/Unit Delay1' */
    uint_T UnitDelay1_25_DSTATE:1;     /* '<S1>/Unit Delay1' */
    uint_T UnitDelay1_5_DSTATE:1;      /* '<S1>/Unit Delay1' */
    uint_T UnitDelay2_DSTATE:1;        /* '<S160>/Unit Delay2' */
    uint_T UnitDelay2_DSTATE_i4n0:1;   /* '<S114>/Unit Delay2' */
  } bitsForTID1;

  uint16 UnitDelay_DSTATE_aj4e;        /* '<S92>/Unit Delay' */
  uint16 UnitDelay_DSTATE_e34g;        /* '<S91>/Unit Delay' */
  uint16 UnitDelay_DSTATE_c13u;        /* '<S90>/Unit Delay' */
  uint16 FaltWaitRecvCnt;              /* '<S61>/sfc_FaultDefiniteness' */
  uint8 UnitDelay_DSTATE_gvyr;         /* '<S62>/Unit Delay' */
  uint8 u8_ctInitDisblCnt;             /* '<S270>/sfc_ComDiaInitEn' */
  uint8 is_active_c4_ASW_OBD;          /* '<S270>/sfc_ComDiaInitEn' */
  uint8 is_c4_ASW_OBD;                 /* '<S270>/sfc_ComDiaInitEn' */
  uint8 is_active_c2_sxlzwpHV5Mpl8T4NH6;/* '<S61>/sfc_FaultDefiniteness' */
  uint8 is_c2_sxlzwpHV5Mpl8T4NH6unbF_li;/* '<S61>/sfc_FaultDefiniteness' */
  uint8 is_EnableDiagnosis;            /* '<S61>/sfc_FaultDefiniteness' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_10;/* '<S295>/lib_FaltDefd_10' */
  DW_lib_Deb_11_ASW_OBD lib_Deb_2;     /* '<S297>/lib_Deb_2' */
  DW_sfc_FaultDefiniteness_ASW_OB sf_sfc_FaultDefiniteness_et5q;/* '<S288>/sfc_FaultDefiniteness' */
  DW_lib_Deb_11_ASW_OBD lib_Deb_9;     /* '<S287>/lib_Deb_9' */
  DW_lib_HysDeb_1_ASW_OBD lib_HysDeb_17;/* '<S270>/lib_HysDeb_17' */
  DW_lib_HysDeb_1_ASW_OBD lib_HysDeb_16;/* '<S270>/lib_HysDeb_16' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_5;/* '<S258>/lib_FaltDefd_5' */
  DW_lib_HysDeb_1_ASW_OBD lib_HysDeb_4;/* '<S259>/lib_HysDeb_4' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_4;/* '<S251>/lib_FaltDefd_4' */
  DW_lib_HysDeb_1_ASW_OBD lib_HysDeb_3;/* '<S252>/lib_HysDeb_3' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_6;/* '<S244>/lib_FaltDefd_6' */
  DW_lib_HysDeb_1_ASW_OBD lib_HysDeb_5;/* '<S245>/lib_HysDeb_5' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_24;/* '<S228>/lib_FaltDefd_24' */
  DW_lib_Deb_5_ASW_OBD lib_Deb_13;     /* '<S229>/lib_Deb_13' */
  DW_lib_Deb_5_ASW_OBD lib_Deb_12;     /* '<S229>/lib_Deb_12' */
  DW_lib_FaltDefd_14_ASW_OBD lib_FaltDefd_15;/* '<S216>/lib_FaltDefd_15' */
  DW_lib_FaltDefd_14_ASW_OBD lib_FaltDefd_14;/* '<S216>/lib_FaltDefd_14' */
  DW_lib_HysDeb_12_ASW_OBD lib_HysDeb_11;/* '<S217>/lib_HysDeb_11' */
  DW_lib_HysDeb_12_ASW_OBD lib_HysDeb_10;/* '<S217>/lib_HysDeb_10' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_13;/* '<S206>/lib_FaltDefd_13' */
  DW_lib_HysDeb_12_ASW_OBD lib_HysDeb_9;/* '<S207>/lib_HysDeb_9' */
  DW_lib_HysDeb_12_ASW_OBD lib_HysDeb_8;/* '<S207>/lib_HysDeb_8' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_11;/* '<S199>/lib_FaltDefd_11' */
  DW_lib_Deb_11_ASW_OBD lib_Deb_3;     /* '<S200>/lib_Deb_3' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_2;/* '<S192>/lib_FaltDefd_2' */
  DW_lib_HysDeb_14_ASW_OBD lib_HysDeb_2;/* '<S193>/lib_HysDeb_2' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_20;/* '<S185>/lib_FaltDefd_20' */
  DW_lib_Deb_11_ASW_OBD lib_Deb_10;    /* '<S186>/lib_Deb_10' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_25;/* '<S178>/lib_FaltDefd_25' */
  DW_lib_Deb_11_ASW_OBD lib_Deb_14;    /* '<S179>/lib_Deb_14' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_17;/* '<S171>/lib_FaltDefd_17' */
  DW_lib_HysDeb_12_ASW_OBD lib_HysDeb_13;/* '<S172>/lib_HysDeb_13' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_16;/* '<S164>/lib_FaltDefd_16' */
  DW_lib_HysDeb_12_ASW_OBD lib_HysDeb_12;/* '<S165>/lib_HysDeb_12' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_23;/* '<S154>/lib_FaltDefd_23' */
  DW_sfc_Debounce_ASW_OBD sf_sfc_Debounce1;/* '<S160>/sfc_Debounce1' */
  DW_sfc_Debounce_ASW_OBD sf_sfc_Debounce;/* '<S160>/sfc_Debounce' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_22;/* '<S147>/lib_FaltDefd_22' */
  DW_lib_HysDeb_14_ASW_OBD lib_HysDeb_14;/* '<S148>/lib_HysDeb_14' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_3;/* '<S141>/lib_FaltDefd_3' */
  DW_lib_Deb_11_ASW_OBD lib_Deb_0;     /* '<S142>/lib_Deb_0' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_7;/* '<S134>/lib_FaltDefd_7' */
  DW_lib_Deb_11_ASW_OBD lib_Deb_15;    /* '<S137>/lib_Deb_15' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_8;/* '<S127>/lib_FaltDefd_8' */
  DW_lib_Deb_11_ASW_OBD lib_Deb_16;    /* '<S130>/lib_Deb_16' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_0;/* '<S77>/lib_FaltDefd_0' */
  DW_lib_HysDeb_1_ASW_OBD lib_HysDeb_0;/* '<S78>/lib_HysDeb_0' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_1;/* '<S70>/lib_FaltDefd_1' */
  DW_lib_HysDeb_1_ASW_OBD lib_HysDeb_1;/* '<S71>/lib_HysDeb_1' */
  DW_lib_Deb_5_ASW_OBD lib_Deb_7;      /* '<S62>/lib_Deb_7' */
  DW_lib_Deb_5_ASW_OBD lib_Deb_6;      /* '<S62>/lib_Deb_6' */
  DW_lib_Deb_5_ASW_OBD lib_Deb_5;      /* '<S62>/lib_Deb_5' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_9_drq2;/* '<S53>/lib_FaltDefd_9' */
  DW_lib_Deb_11_ASW_OBD lib_Deb_1;     /* '<S54>/lib_Deb_1' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_9;/* '<S47>/lib_FaltDefd_9' */
  DW_lib_Deb_11_ASW_OBD lib_Deb_17;    /* '<S48>/lib_Deb_17' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_12;/* '<S41>/lib_FaltDefd_12' */
  DW_lib_Deb_11_ASW_OBD lib_Deb_4;     /* '<S42>/lib_Deb_4' */
  DW_lib_FaltDefd_21_ASW_OBD lib_FaltDefd_21;/* '<S34>/lib_FaltDefd_21' */
  DW_lib_Deb_11_ASW_OBD lib_Deb_11;    /* '<S35>/lib_Deb_11' */
} DW_ASW_OBD;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState sss_ComFaltMechSpdRespDefd_GEEL;
                                 /* '<S111>/sss_ComFaltMechSpdRespDefd_GEELY' */
} PrevZCX_ASW_OBD;

/* Real-time Model Data Structure */
struct tag_RTM_ASW_OBD {
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
extern B_ASW_OBD ASW_OBD_B;

/* Block states (default storage) */
extern DW_ASW_OBD ASW_OBD_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_ASW_OBD ASW_OBD_PrevZCX;

/* External data declarations for dependent source files */
extern const BUS_OBD_SLW_TASK_IN ASW_OBD_rtZBUS_OBD_SLW_TASK_IN;/* BUS_OBD_SLW_TASK_IN ground */
extern const BUS_OBD_SLW_TASK_OUT ASW_OBD_rtZBUS_OBD_SLW_TASK_OUT;/* BUS_OBD_SLW_TASK_OUT ground */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern BUS_OBD_SLW_TASK_IN busOBD_SlwTaskIn;/* '<Root>/busOBD_SlwTaskIn' */
extern BUS_OBD_SLW_TASK_OUT busOBD_SlwTaskOut;/* '<S303>/Bus Creator1' */

/* Model entry point functions */
extern void ASW_OBD_Init(void);
extern void ASW_OBD_step(void);

/* Real-time Model object */
extern RT_MODEL_ASW_OBD *const ASW_OBD_M;

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
 * '<Root>' : 'ASW_OBD'
 * '<S1>'   : 'ASW_OBD/OBD_SlwTask'
 * '<S2>'   : 'ASW_OBD/OBD_SlwTask/rss_BattPwrHiLvl1Dia'
 * '<S3>'   : 'ASW_OBD/OBD_SlwTask/rss_BusOffFaltDia'
 * '<S4>'   : 'ASW_OBD/OBD_SlwTask/rss_CRASHFaltDia'
 * '<S5>'   : 'ASW_OBD/OBD_SlwTask/rss_ChipFaltDia'
 * '<S6>'   : 'ASW_OBD/OBD_SlwTask/rss_ComFaltDia'
 * '<S7>'   : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgHiLvl1Dia'
 * '<S8>'   : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgLoLvl1Dia'
 * '<S9>'   : 'ASW_OBD/OBD_SlwTask/rss_FaltInfoMng'
 * '<S10>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltLevlCmpt'
 * '<S11>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltResp'
 * '<S12>'  : 'ASW_OBD/OBD_SlwTask/rss_GDVltgHiLvl1Dia'
 * '<S13>'  : 'ASW_OBD/OBD_SlwTask/rss_GDVltgLoLvl1Dia'
 * '<S14>'  : 'ASW_OBD/OBD_SlwTask/rss_HWOvrCurrDia'
 * '<S15>'  : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdHiLvl1Dia'
 * '<S16>'  : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdLoLvl1Dia'
 * '<S17>'  : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl1Dia'
 * '<S18>'  : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl2Dia'
 * '<S19>'  : 'ASW_OBD/OBD_SlwTask/rss_MotoTempSensFaltDia'
 * '<S20>'  : 'ASW_OBD/OBD_SlwTask/rss_NoLdDia'
 * '<S21>'  : 'ASW_OBD/OBD_SlwTask/rss_PhCurrHiLvl1Dia'
 * '<S22>'  : 'ASW_OBD/OBD_SlwTask/rss_PhCurrSensFaltDia'
 * '<S23>'  : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl1Dia'
 * '<S24>'  : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl2Dia'
 * '<S25>'  : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia'
 * '<S26>'  : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgHiLvl1Dia'
 * '<S27>'  : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl1Dia'
 * '<S28>'  : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl2Dia'
 * '<S29>'  : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf'
 * '<S30>'  : 'ASW_OBD/OBD_SlwTask/vrs_MotoStallDia'
 * '<S31>'  : 'ASW_OBD/OBD_SlwTask/vrs_PhiSensFaltDia'
 * '<S32>'  : 'ASW_OBD/OBD_SlwTask/vrs_SlwTaskIn'
 * '<S33>'  : 'ASW_OBD/OBD_SlwTask/vrs_SlwTaskOut'
 * '<S34>'  : 'ASW_OBD/OBD_SlwTask/rss_BattPwrHiLvl1Dia/sss_BattPwrHiLvl1'
 * '<S35>'  : 'ASW_OBD/OBD_SlwTask/rss_BattPwrHiLvl1Dia/sss_BattPwrHiLvl1/ens_JudgDeb'
 * '<S36>'  : 'ASW_OBD/OBD_SlwTask/rss_BattPwrHiLvl1Dia/sss_BattPwrHiLvl1/lib_FaltDefd_21'
 * '<S37>'  : 'ASW_OBD/OBD_SlwTask/rss_BattPwrHiLvl1Dia/sss_BattPwrHiLvl1/ens_JudgDeb/lib_Deb_11'
 * '<S38>'  : 'ASW_OBD/OBD_SlwTask/rss_BattPwrHiLvl1Dia/sss_BattPwrHiLvl1/ens_JudgDeb/sss_BattPwrHiLvl1PreJudg'
 * '<S39>'  : 'ASW_OBD/OBD_SlwTask/rss_BattPwrHiLvl1Dia/sss_BattPwrHiLvl1/ens_JudgDeb/lib_Deb_11/sfc_FaultDebounce'
 * '<S40>'  : 'ASW_OBD/OBD_SlwTask/rss_BattPwrHiLvl1Dia/sss_BattPwrHiLvl1/lib_FaltDefd_21/sfc_FaultDefiniteness'
 * '<S41>'  : 'ASW_OBD/OBD_SlwTask/rss_BusOffFaltDia/sss_BusOffFalt'
 * '<S42>'  : 'ASW_OBD/OBD_SlwTask/rss_BusOffFaltDia/sss_BusOffFalt/ens_HysDeb'
 * '<S43>'  : 'ASW_OBD/OBD_SlwTask/rss_BusOffFaltDia/sss_BusOffFalt/lib_FaltDefd_12'
 * '<S44>'  : 'ASW_OBD/OBD_SlwTask/rss_BusOffFaltDia/sss_BusOffFalt/ens_HysDeb/lib_Deb_4'
 * '<S45>'  : 'ASW_OBD/OBD_SlwTask/rss_BusOffFaltDia/sss_BusOffFalt/ens_HysDeb/lib_Deb_4/sfc_FaultDebounce'
 * '<S46>'  : 'ASW_OBD/OBD_SlwTask/rss_BusOffFaltDia/sss_BusOffFalt/lib_FaltDefd_12/sfc_FaultDefiniteness'
 * '<S47>'  : 'ASW_OBD/OBD_SlwTask/rss_CRASHFaltDia/sss_CrashFalt'
 * '<S48>'  : 'ASW_OBD/OBD_SlwTask/rss_CRASHFaltDia/sss_CrashFalt/ens_HysDeb'
 * '<S49>'  : 'ASW_OBD/OBD_SlwTask/rss_CRASHFaltDia/sss_CrashFalt/lib_FaltDefd_9'
 * '<S50>'  : 'ASW_OBD/OBD_SlwTask/rss_CRASHFaltDia/sss_CrashFalt/ens_HysDeb/lib_Deb_17'
 * '<S51>'  : 'ASW_OBD/OBD_SlwTask/rss_CRASHFaltDia/sss_CrashFalt/ens_HysDeb/lib_Deb_17/sfc_FaultDebounce'
 * '<S52>'  : 'ASW_OBD/OBD_SlwTask/rss_CRASHFaltDia/sss_CrashFalt/lib_FaltDefd_9/sfc_FaultDefiniteness'
 * '<S53>'  : 'ASW_OBD/OBD_SlwTask/rss_ChipFaltDia/sss_CrashFalt'
 * '<S54>'  : 'ASW_OBD/OBD_SlwTask/rss_ChipFaltDia/sss_CrashFalt/ens_HysDeb'
 * '<S55>'  : 'ASW_OBD/OBD_SlwTask/rss_ChipFaltDia/sss_CrashFalt/lib_FaltDefd_9'
 * '<S56>'  : 'ASW_OBD/OBD_SlwTask/rss_ChipFaltDia/sss_CrashFalt/ens_HysDeb/lib_Deb_1'
 * '<S57>'  : 'ASW_OBD/OBD_SlwTask/rss_ChipFaltDia/sss_CrashFalt/ens_HysDeb/lib_Deb_1/sfc_FaultDebounce'
 * '<S58>'  : 'ASW_OBD/OBD_SlwTask/rss_ChipFaltDia/sss_CrashFalt/lib_FaltDefd_9/sfc_FaultDefiniteness'
 * '<S59>'  : 'ASW_OBD/OBD_SlwTask/rss_ComFaltDia/sss_ComFalt'
 * '<S60>'  : 'ASW_OBD/OBD_SlwTask/rss_ComFaltDia/sss_ComFalt/ens_HysDeb'
 * '<S61>'  : 'ASW_OBD/OBD_SlwTask/rss_ComFaltDia/sss_ComFalt/lib_FaltDefd_18'
 * '<S62>'  : 'ASW_OBD/OBD_SlwTask/rss_ComFaltDia/sss_ComFalt/ens_HysDeb/ens_HysDeb_GEELY'
 * '<S63>'  : 'ASW_OBD/OBD_SlwTask/rss_ComFaltDia/sss_ComFalt/ens_HysDeb/ens_HysDeb_GEELY/lib_Deb_5'
 * '<S64>'  : 'ASW_OBD/OBD_SlwTask/rss_ComFaltDia/sss_ComFalt/ens_HysDeb/ens_HysDeb_GEELY/lib_Deb_6'
 * '<S65>'  : 'ASW_OBD/OBD_SlwTask/rss_ComFaltDia/sss_ComFalt/ens_HysDeb/ens_HysDeb_GEELY/lib_Deb_7'
 * '<S66>'  : 'ASW_OBD/OBD_SlwTask/rss_ComFaltDia/sss_ComFalt/ens_HysDeb/ens_HysDeb_GEELY/lib_Deb_5/sfc_FaultDebounce'
 * '<S67>'  : 'ASW_OBD/OBD_SlwTask/rss_ComFaltDia/sss_ComFalt/ens_HysDeb/ens_HysDeb_GEELY/lib_Deb_6/sfc_FaultDebounce'
 * '<S68>'  : 'ASW_OBD/OBD_SlwTask/rss_ComFaltDia/sss_ComFalt/ens_HysDeb/ens_HysDeb_GEELY/lib_Deb_7/sfc_FaultDebounce'
 * '<S69>'  : 'ASW_OBD/OBD_SlwTask/rss_ComFaltDia/sss_ComFalt/lib_FaltDefd_18/sfc_FaultDefiniteness'
 * '<S70>'  : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgHiLvl1Dia/sss_CtlBrdVltgHiLvl1'
 * '<S71>'  : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgHiLvl1Dia/sss_CtlBrdVltgHiLvl1/ens_Deb'
 * '<S72>'  : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgHiLvl1Dia/sss_CtlBrdVltgHiLvl1/lib_FaltDefd_1'
 * '<S73>'  : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgHiLvl1Dia/sss_CtlBrdVltgHiLvl1/ens_Deb/lib_HysDeb_1'
 * '<S74>'  : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgHiLvl1Dia/sss_CtlBrdVltgHiLvl1/ens_Deb/lib_HysDeb_1/sfc_Debounce'
 * '<S75>'  : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgHiLvl1Dia/sss_CtlBrdVltgHiLvl1/ens_Deb/lib_HysDeb_1/sfc_Debounce1'
 * '<S76>'  : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgHiLvl1Dia/sss_CtlBrdVltgHiLvl1/lib_FaltDefd_1/sfc_FaultDefiniteness'
 * '<S77>'  : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgLoLvl1Dia/sss_CtlBrdVltgLoLvl1'
 * '<S78>'  : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgLoLvl1Dia/sss_CtlBrdVltgLoLvl1/ens_Deb'
 * '<S79>'  : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgLoLvl1Dia/sss_CtlBrdVltgLoLvl1/lib_FaltDefd_0'
 * '<S80>'  : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgLoLvl1Dia/sss_CtlBrdVltgLoLvl1/ens_Deb/lib_HysDeb_0'
 * '<S81>'  : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgLoLvl1Dia/sss_CtlBrdVltgLoLvl1/ens_Deb/lib_HysDeb_0/sfc_Debounce'
 * '<S82>'  : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgLoLvl1Dia/sss_CtlBrdVltgLoLvl1/ens_Deb/lib_HysDeb_0/sfc_Debounce1'
 * '<S83>'  : 'ASW_OBD/OBD_SlwTask/rss_CtlBrdVltgLoLvl1Dia/sss_CtlBrdVltgLoLvl1/lib_FaltDefd_0/sfc_FaultDefiniteness'
 * '<S84>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltInfoMng/Extract Bits'
 * '<S85>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltInfoMng/Extract Bits1'
 * '<S86>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltInfoMng/Extract Bits2'
 * '<S87>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltInfoMng/Extract Bits3'
 * '<S88>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltInfoMng/sss_FaltDiaSdlEn'
 * '<S89>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltInfoMng/vrs_DSMSaveInfo'
 * '<S90>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltInfoMng/sss_FaltDiaSdlEn/sss_ComSdlCnt'
 * '<S91>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltInfoMng/sss_FaltDiaSdlEn/sss_FstSdlCnt'
 * '<S92>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltInfoMng/sss_FaltDiaSdlEn/sss_SlwSdlCnt'
 * '<S93>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltInfoMng/vrs_DSMSaveInfo/sss_DSMSaveInfoNoNeed'
 * '<S94>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltLevlCmpt/sss_FaltLvlConf'
 * '<S95>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltLevlCmpt/sss_MaxFaltLvlSel'
 * '<S96>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespConf'
 * '<S97>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd'
 * '<S98>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespSel'
 * '<S99>'  : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespConf/sas_FaltLvl1'
 * '<S100>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespConf/sas_FaltLvl2'
 * '<S101>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespConf/sas_FaltLvl3'
 * '<S102>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespConf/sas_FaltLvlDfl'
 * '<S103>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltMechSpdRespDefd'
 * '<S104>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltTqLimRespDefd'
 * '<S105>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltMechSpdRespDefd/sss_CurrRlv'
 * '<S106>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltMechSpdRespDefd/sss_Else'
 * '<S107>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltMechSpdRespDefd/sss_SensRlv'
 * '<S108>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltMechSpdRespDefd/sss_SpdRlv'
 * '<S109>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltMechSpdRespDefd/sss_TempRlv'
 * '<S110>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltMechSpdRespDefd/sss_VltgRlv'
 * '<S111>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltMechSpdRespDefd/sss_Else/sss_ComFaltMechSpdRespDefd'
 * '<S112>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltMechSpdRespDefd/sss_Else/sss_MotoStallFaltMechSpdRespDefd'
 * '<S113>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltMechSpdRespDefd/sss_Else/sss_ComFaltMechSpdRespDefd/sss_ComFaltMechSpdRespDefd_GEELY'
 * '<S114>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltMechSpdRespDefd/sss_Else/sss_ComFaltMechSpdRespDefd/sss_ComFaltMechSpdRespDefd_GEELY/lib_hysteresis_0'
 * '<S115>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltMechSpdRespDefd/sss_Else/sss_MotoStallFaltMechSpdRespDefd/sss_MotoStallTmpSpd'
 * '<S116>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltMechSpdRespDefd/sss_Else/sss_MotoStallFaltMechSpdRespDefd/sss_MotoStallTmpSpd/Compare To Constant'
 * '<S117>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltMechSpdRespDefd/sss_Else/sss_MotoStallFaltMechSpdRespDefd/sss_MotoStallTmpSpd/Compare To Constant1'
 * '<S118>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltTqLimRespDefd/sss_CurrRlv'
 * '<S119>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltTqLimRespDefd/sss_Else'
 * '<S120>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltTqLimRespDefd/sss_SensRlv'
 * '<S121>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltTqLimRespDefd/sss_SpdRlv'
 * '<S122>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltTqLimRespDefd/sss_TempRlv'
 * '<S123>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltTqLimRespDefd/sss_VltgRlv'
 * '<S124>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespDefd/sss_FaltTqLimRespDefd/sss_Else/sss_trqMotoStallTmpTqLim'
 * '<S125>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespSel/sss_FaltLvl2Conf'
 * '<S126>' : 'ASW_OBD/OBD_SlwTask/rss_FaltResp/sss_FaltRespSel/sss_MinFaltRespSel'
 * '<S127>' : 'ASW_OBD/OBD_SlwTask/rss_GDVltgHiLvl1Dia/sss_GDVltgHiLvl1'
 * '<S128>' : 'ASW_OBD/OBD_SlwTask/rss_GDVltgHiLvl1Dia/sss_GDVltgHiLvl1/ens_Deb'
 * '<S129>' : 'ASW_OBD/OBD_SlwTask/rss_GDVltgHiLvl1Dia/sss_GDVltgHiLvl1/lib_FaltDefd_8'
 * '<S130>' : 'ASW_OBD/OBD_SlwTask/rss_GDVltgHiLvl1Dia/sss_GDVltgHiLvl1/ens_Deb/ens_Deb_GEELY'
 * '<S131>' : 'ASW_OBD/OBD_SlwTask/rss_GDVltgHiLvl1Dia/sss_GDVltgHiLvl1/ens_Deb/ens_Deb_GEELY/lib_Deb_16'
 * '<S132>' : 'ASW_OBD/OBD_SlwTask/rss_GDVltgHiLvl1Dia/sss_GDVltgHiLvl1/ens_Deb/ens_Deb_GEELY/lib_Deb_16/sfc_FaultDebounce'
 * '<S133>' : 'ASW_OBD/OBD_SlwTask/rss_GDVltgHiLvl1Dia/sss_GDVltgHiLvl1/lib_FaltDefd_8/sfc_FaultDefiniteness'
 * '<S134>' : 'ASW_OBD/OBD_SlwTask/rss_GDVltgLoLvl1Dia/sss_GDVltgLoLvl1'
 * '<S135>' : 'ASW_OBD/OBD_SlwTask/rss_GDVltgLoLvl1Dia/sss_GDVltgLoLvl1/ens_Deb'
 * '<S136>' : 'ASW_OBD/OBD_SlwTask/rss_GDVltgLoLvl1Dia/sss_GDVltgLoLvl1/lib_FaltDefd_7'
 * '<S137>' : 'ASW_OBD/OBD_SlwTask/rss_GDVltgLoLvl1Dia/sss_GDVltgLoLvl1/ens_Deb/ens_Deb_GEELY'
 * '<S138>' : 'ASW_OBD/OBD_SlwTask/rss_GDVltgLoLvl1Dia/sss_GDVltgLoLvl1/ens_Deb/ens_Deb_GEELY/lib_Deb_15'
 * '<S139>' : 'ASW_OBD/OBD_SlwTask/rss_GDVltgLoLvl1Dia/sss_GDVltgLoLvl1/ens_Deb/ens_Deb_GEELY/lib_Deb_15/sfc_FaultDebounce'
 * '<S140>' : 'ASW_OBD/OBD_SlwTask/rss_GDVltgLoLvl1Dia/sss_GDVltgLoLvl1/lib_FaltDefd_7/sfc_FaultDefiniteness'
 * '<S141>' : 'ASW_OBD/OBD_SlwTask/rss_HWOvrCurrDia/sss_HWOvrCurr'
 * '<S142>' : 'ASW_OBD/OBD_SlwTask/rss_HWOvrCurrDia/sss_HWOvrCurr/ens_Deb_0'
 * '<S143>' : 'ASW_OBD/OBD_SlwTask/rss_HWOvrCurrDia/sss_HWOvrCurr/lib_FaltDefd_3'
 * '<S144>' : 'ASW_OBD/OBD_SlwTask/rss_HWOvrCurrDia/sss_HWOvrCurr/ens_Deb_0/lib_Deb_0'
 * '<S145>' : 'ASW_OBD/OBD_SlwTask/rss_HWOvrCurrDia/sss_HWOvrCurr/ens_Deb_0/lib_Deb_0/sfc_FaultDebounce'
 * '<S146>' : 'ASW_OBD/OBD_SlwTask/rss_HWOvrCurrDia/sss_HWOvrCurr/lib_FaltDefd_3/sfc_FaultDefiniteness'
 * '<S147>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdHiLvl1Dia/sss_MotoSpdHiLvl1'
 * '<S148>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdHiLvl1Dia/sss_MotoSpdHiLvl1/ens_Deb'
 * '<S149>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdHiLvl1Dia/sss_MotoSpdHiLvl1/lib_FaltDefd_22'
 * '<S150>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdHiLvl1Dia/sss_MotoSpdHiLvl1/ens_Deb/lib_HysDeb_14'
 * '<S151>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdHiLvl1Dia/sss_MotoSpdHiLvl1/ens_Deb/lib_HysDeb_14/sfc_Debounce'
 * '<S152>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdHiLvl1Dia/sss_MotoSpdHiLvl1/ens_Deb/lib_HysDeb_14/sfc_Debounce1'
 * '<S153>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdHiLvl1Dia/sss_MotoSpdHiLvl1/lib_FaltDefd_22/sfc_FaultDefiniteness'
 * '<S154>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdLoLvl1Dia/sss_MotoSpdLoLvl1'
 * '<S155>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdLoLvl1Dia/sss_MotoSpdLoLvl1/ens_JudgDeb'
 * '<S156>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdLoLvl1Dia/sss_MotoSpdLoLvl1/lib_FaltDefd_23'
 * '<S157>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdLoLvl1Dia/sss_MotoSpdLoLvl1/ens_JudgDeb/Compare To Constant1'
 * '<S158>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdLoLvl1Dia/sss_MotoSpdLoLvl1/ens_JudgDeb/Compare To Constant3'
 * '<S159>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdLoLvl1Dia/sss_MotoSpdLoLvl1/ens_JudgDeb/lib_Cnvr_0'
 * '<S160>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdLoLvl1Dia/sss_MotoSpdLoLvl1/ens_JudgDeb/lib_HysDeb_15'
 * '<S161>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdLoLvl1Dia/sss_MotoSpdLoLvl1/ens_JudgDeb/lib_HysDeb_15/sfc_Debounce'
 * '<S162>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdLoLvl1Dia/sss_MotoSpdLoLvl1/ens_JudgDeb/lib_HysDeb_15/sfc_Debounce1'
 * '<S163>' : 'ASW_OBD/OBD_SlwTask/rss_MotoSpdLoLvl1Dia/sss_MotoSpdLoLvl1/lib_FaltDefd_23/sfc_FaultDefiniteness'
 * '<S164>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl1Dia/sss_MotoTempHiLvl1'
 * '<S165>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl1Dia/sss_MotoTempHiLvl1/ens_HysDeb'
 * '<S166>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl1Dia/sss_MotoTempHiLvl1/lib_FaltDefd_16'
 * '<S167>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl1Dia/sss_MotoTempHiLvl1/ens_HysDeb/lib_HysDeb_12'
 * '<S168>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl1Dia/sss_MotoTempHiLvl1/ens_HysDeb/lib_HysDeb_12/sfc_Debounce'
 * '<S169>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl1Dia/sss_MotoTempHiLvl1/ens_HysDeb/lib_HysDeb_12/sfc_Debounce1'
 * '<S170>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl1Dia/sss_MotoTempHiLvl1/lib_FaltDefd_16/sfc_FaultDefiniteness'
 * '<S171>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl2Dia/sss_MotoTempHiLvl2'
 * '<S172>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl2Dia/sss_MotoTempHiLvl2/ens_HysDeb'
 * '<S173>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl2Dia/sss_MotoTempHiLvl2/lib_FaltDefd_17'
 * '<S174>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl2Dia/sss_MotoTempHiLvl2/ens_HysDeb/lib_HysDeb_13'
 * '<S175>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl2Dia/sss_MotoTempHiLvl2/ens_HysDeb/lib_HysDeb_13/sfc_Debounce'
 * '<S176>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl2Dia/sss_MotoTempHiLvl2/ens_HysDeb/lib_HysDeb_13/sfc_Debounce1'
 * '<S177>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempHiLvl2Dia/sss_MotoTempHiLvl2/lib_FaltDefd_17/sfc_FaultDefiniteness'
 * '<S178>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempSensFaltDia/sss_MotoTempSensFalt'
 * '<S179>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempSensFaltDia/sss_MotoTempSensFalt/ens_HysDeb'
 * '<S180>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempSensFaltDia/sss_MotoTempSensFalt/lib_FaltDefd_25'
 * '<S181>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempSensFaltDia/sss_MotoTempSensFalt/ens_HysDeb/lib_Deb_14'
 * '<S182>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempSensFaltDia/sss_MotoTempSensFalt/ens_HysDeb/sss_MotoTempSensPreJudg'
 * '<S183>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempSensFaltDia/sss_MotoTempSensFalt/ens_HysDeb/lib_Deb_14/sfc_FaultDebounce'
 * '<S184>' : 'ASW_OBD/OBD_SlwTask/rss_MotoTempSensFaltDia/sss_MotoTempSensFalt/lib_FaltDefd_25/sfc_FaultDefiniteness'
 * '<S185>' : 'ASW_OBD/OBD_SlwTask/rss_NoLdDia/sss_NoLd'
 * '<S186>' : 'ASW_OBD/OBD_SlwTask/rss_NoLdDia/sss_NoLd/ens_JudgDeb'
 * '<S187>' : 'ASW_OBD/OBD_SlwTask/rss_NoLdDia/sss_NoLd/lib_FaltDefd_20'
 * '<S188>' : 'ASW_OBD/OBD_SlwTask/rss_NoLdDia/sss_NoLd/ens_JudgDeb/lib_Deb_10'
 * '<S189>' : 'ASW_OBD/OBD_SlwTask/rss_NoLdDia/sss_NoLd/ens_JudgDeb/sss_NoLdPreJudg'
 * '<S190>' : 'ASW_OBD/OBD_SlwTask/rss_NoLdDia/sss_NoLd/ens_JudgDeb/lib_Deb_10/sfc_FaultDebounce'
 * '<S191>' : 'ASW_OBD/OBD_SlwTask/rss_NoLdDia/sss_NoLd/lib_FaltDefd_20/sfc_FaultDefiniteness'
 * '<S192>' : 'ASW_OBD/OBD_SlwTask/rss_PhCurrHiLvl1Dia/sss_PhCurrHiLvl1'
 * '<S193>' : 'ASW_OBD/OBD_SlwTask/rss_PhCurrHiLvl1Dia/sss_PhCurrHiLvl1/ens_HysDeb'
 * '<S194>' : 'ASW_OBD/OBD_SlwTask/rss_PhCurrHiLvl1Dia/sss_PhCurrHiLvl1/lib_FaltDefd_2'
 * '<S195>' : 'ASW_OBD/OBD_SlwTask/rss_PhCurrHiLvl1Dia/sss_PhCurrHiLvl1/ens_HysDeb/lib_HysDeb_2'
 * '<S196>' : 'ASW_OBD/OBD_SlwTask/rss_PhCurrHiLvl1Dia/sss_PhCurrHiLvl1/ens_HysDeb/lib_HysDeb_2/sfc_Debounce'
 * '<S197>' : 'ASW_OBD/OBD_SlwTask/rss_PhCurrHiLvl1Dia/sss_PhCurrHiLvl1/ens_HysDeb/lib_HysDeb_2/sfc_Debounce1'
 * '<S198>' : 'ASW_OBD/OBD_SlwTask/rss_PhCurrHiLvl1Dia/sss_PhCurrHiLvl1/lib_FaltDefd_2/sfc_FaultDefiniteness'
 * '<S199>' : 'ASW_OBD/OBD_SlwTask/rss_PhCurrSensFaltDia/sss_PhCurrSensFalt'
 * '<S200>' : 'ASW_OBD/OBD_SlwTask/rss_PhCurrSensFaltDia/sss_PhCurrSensFalt/ens_JudgDeb'
 * '<S201>' : 'ASW_OBD/OBD_SlwTask/rss_PhCurrSensFaltDia/sss_PhCurrSensFalt/lib_FaltDefd_11'
 * '<S202>' : 'ASW_OBD/OBD_SlwTask/rss_PhCurrSensFaltDia/sss_PhCurrSensFalt/ens_JudgDeb/lib_Deb_3'
 * '<S203>' : 'ASW_OBD/OBD_SlwTask/rss_PhCurrSensFaltDia/sss_PhCurrSensFalt/ens_JudgDeb/sss_PhCurrSensPreJudg'
 * '<S204>' : 'ASW_OBD/OBD_SlwTask/rss_PhCurrSensFaltDia/sss_PhCurrSensFalt/ens_JudgDeb/lib_Deb_3/sfc_FaultDebounce'
 * '<S205>' : 'ASW_OBD/OBD_SlwTask/rss_PhCurrSensFaltDia/sss_PhCurrSensFalt/lib_FaltDefd_11/sfc_FaultDefiniteness'
 * '<S206>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl1Dia/sss_PwrTubPCBTempHiLvl1'
 * '<S207>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl1Dia/sss_PwrTubPCBTempHiLvl1/ens_HysDeb'
 * '<S208>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl1Dia/sss_PwrTubPCBTempHiLvl1/lib_FaltDefd_13'
 * '<S209>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl1Dia/sss_PwrTubPCBTempHiLvl1/ens_HysDeb/lib_HysDeb_8'
 * '<S210>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl1Dia/sss_PwrTubPCBTempHiLvl1/ens_HysDeb/lib_HysDeb_9'
 * '<S211>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl1Dia/sss_PwrTubPCBTempHiLvl1/ens_HysDeb/lib_HysDeb_8/sfc_Debounce'
 * '<S212>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl1Dia/sss_PwrTubPCBTempHiLvl1/ens_HysDeb/lib_HysDeb_8/sfc_Debounce1'
 * '<S213>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl1Dia/sss_PwrTubPCBTempHiLvl1/ens_HysDeb/lib_HysDeb_9/sfc_Debounce'
 * '<S214>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl1Dia/sss_PwrTubPCBTempHiLvl1/ens_HysDeb/lib_HysDeb_9/sfc_Debounce1'
 * '<S215>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl1Dia/sss_PwrTubPCBTempHiLvl1/lib_FaltDefd_13/sfc_FaultDefiniteness'
 * '<S216>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl2Dia/sss_PwrTubPCBTempHiLvl2'
 * '<S217>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl2Dia/sss_PwrTubPCBTempHiLvl2/ens_HysDeb'
 * '<S218>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl2Dia/sss_PwrTubPCBTempHiLvl2/lib_FaltDefd_14'
 * '<S219>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl2Dia/sss_PwrTubPCBTempHiLvl2/lib_FaltDefd_15'
 * '<S220>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl2Dia/sss_PwrTubPCBTempHiLvl2/ens_HysDeb/lib_HysDeb_10'
 * '<S221>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl2Dia/sss_PwrTubPCBTempHiLvl2/ens_HysDeb/lib_HysDeb_11'
 * '<S222>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl2Dia/sss_PwrTubPCBTempHiLvl2/ens_HysDeb/lib_HysDeb_10/sfc_Debounce'
 * '<S223>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl2Dia/sss_PwrTubPCBTempHiLvl2/ens_HysDeb/lib_HysDeb_10/sfc_Debounce1'
 * '<S224>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl2Dia/sss_PwrTubPCBTempHiLvl2/ens_HysDeb/lib_HysDeb_11/sfc_Debounce'
 * '<S225>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl2Dia/sss_PwrTubPCBTempHiLvl2/ens_HysDeb/lib_HysDeb_11/sfc_Debounce1'
 * '<S226>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl2Dia/sss_PwrTubPCBTempHiLvl2/lib_FaltDefd_14/sfc_FaultDefiniteness'
 * '<S227>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempHiLvl2Dia/sss_PwrTubPCBTempHiLvl2/lib_FaltDefd_15/sfc_FaultDefiniteness'
 * '<S228>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt'
 * '<S229>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt/ens_HysDeb'
 * '<S230>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt/lib_FaltDefd_24'
 * '<S231>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt/ens_HysDeb/lib_Deb_12'
 * '<S232>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt/ens_HysDeb/lib_Deb_13'
 * '<S233>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt/ens_HysDeb/sss_PCBTempSensPreJudg'
 * '<S234>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt/ens_HysDeb/sss_PwrTubTempSensPreJudg'
 * '<S235>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt/ens_HysDeb/lib_Deb_12/sfc_FaultDebounce'
 * '<S236>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt/ens_HysDeb/lib_Deb_13/sfc_FaultDebounce'
 * '<S237>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt/ens_HysDeb/sss_PCBTempSensPreJudg/lib_CfgPar_0'
 * '<S238>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt/ens_HysDeb/sss_PCBTempSensPreJudg/lib_CfgPar_0/vss_SaturationActivation'
 * '<S239>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt/ens_HysDeb/sss_PCBTempSensPreJudg/lib_CfgPar_0/vss_SaturationActivation/vss_SaturationRequired'
 * '<S240>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt/ens_HysDeb/sss_PwrTubTempSensPreJudg/lib_CfgPar_0'
 * '<S241>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt/ens_HysDeb/sss_PwrTubTempSensPreJudg/lib_CfgPar_0/vss_SaturationActivation'
 * '<S242>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt/ens_HysDeb/sss_PwrTubTempSensPreJudg/lib_CfgPar_0/vss_SaturationActivation/vss_SaturationRequired'
 * '<S243>' : 'ASW_OBD/OBD_SlwTask/rss_PwrTubPCBTempSensFaltDia/sss_PwrTubPCBTempSensFalt/lib_FaltDefd_24/sfc_FaultDefiniteness'
 * '<S244>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgHiLvl1Dia/sss_SplyVltgHiLvl1'
 * '<S245>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgHiLvl1Dia/sss_SplyVltgHiLvl1/ens_HysDeb'
 * '<S246>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgHiLvl1Dia/sss_SplyVltgHiLvl1/lib_FaltDefd_6'
 * '<S247>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgHiLvl1Dia/sss_SplyVltgHiLvl1/ens_HysDeb/lib_HysDeb_5'
 * '<S248>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgHiLvl1Dia/sss_SplyVltgHiLvl1/ens_HysDeb/lib_HysDeb_5/sfc_Debounce'
 * '<S249>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgHiLvl1Dia/sss_SplyVltgHiLvl1/ens_HysDeb/lib_HysDeb_5/sfc_Debounce1'
 * '<S250>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgHiLvl1Dia/sss_SplyVltgHiLvl1/lib_FaltDefd_6/sfc_FaultDefiniteness'
 * '<S251>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl1Dia/sss_SplyVltgLoLvl1'
 * '<S252>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl1Dia/sss_SplyVltgLoLvl1/ens_HysDeb'
 * '<S253>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl1Dia/sss_SplyVltgLoLvl1/lib_FaltDefd_4'
 * '<S254>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl1Dia/sss_SplyVltgLoLvl1/ens_HysDeb/lib_HysDeb_3'
 * '<S255>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl1Dia/sss_SplyVltgLoLvl1/ens_HysDeb/lib_HysDeb_3/sfc_Debounce'
 * '<S256>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl1Dia/sss_SplyVltgLoLvl1/ens_HysDeb/lib_HysDeb_3/sfc_Debounce1'
 * '<S257>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl1Dia/sss_SplyVltgLoLvl1/lib_FaltDefd_4/sfc_FaultDefiniteness'
 * '<S258>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl2Dia/sss_SplyVltgLoLvl2'
 * '<S259>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl2Dia/sss_SplyVltgLoLvl2/ens_HysDeb'
 * '<S260>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl2Dia/sss_SplyVltgLoLvl2/lib_FaltDefd_5'
 * '<S261>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl2Dia/sss_SplyVltgLoLvl2/ens_HysDeb/lib_HysDeb_4'
 * '<S262>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl2Dia/sss_SplyVltgLoLvl2/ens_HysDeb/lib_HysDeb_4/sfc_Debounce'
 * '<S263>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl2Dia/sss_SplyVltgLoLvl2/ens_HysDeb/lib_HysDeb_4/sfc_Debounce1'
 * '<S264>' : 'ASW_OBD/OBD_SlwTask/rss_SplyVltgLoLvl2Dia/sss_SplyVltgLoLvl2/lib_FaltDefd_5/sfc_FaultDefiniteness'
 * '<S265>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl'
 * '<S266>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/Compare To Constant3'
 * '<S267>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltEnFlgConf'
 * '<S268>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg'
 * '<S269>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_CurrRlv'
 * '<S270>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_Else'
 * '<S271>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_HiPrioLvlConf'
 * '<S272>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_SensRlv'
 * '<S273>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_SpdRlv'
 * '<S274>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_TempRlv'
 * '<S275>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_VltgRlv'
 * '<S276>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_Else/lib_HysDeb_16'
 * '<S277>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_Else/lib_HysDeb_17'
 * '<S278>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_Else/sfc_ComDiaInitEn'
 * '<S279>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_Else/lib_HysDeb_16/sfc_Debounce'
 * '<S280>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_Else/lib_HysDeb_16/sfc_Debounce1'
 * '<S281>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_Else/lib_HysDeb_17/sfc_Debounce'
 * '<S282>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_Else/lib_HysDeb_17/sfc_Debounce1'
 * '<S283>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_VltgRlv/Compare To Constant1'
 * '<S284>' : 'ASW_OBD/OBD_SlwTask/vrs_FaltEnFlgConf/rss_FaltEnFlgConfSenl/sss_FaltPrioJudg/sss_VltgRlv/Compare To Constant3'
 * '<S285>' : 'ASW_OBD/OBD_SlwTask/vrs_MotoStallDia/rss_MotoStallDiaHybr'
 * '<S286>' : 'ASW_OBD/OBD_SlwTask/vrs_MotoStallDia/rss_MotoStallDiaHybr/sss_MotoStall'
 * '<S287>' : 'ASW_OBD/OBD_SlwTask/vrs_MotoStallDia/rss_MotoStallDiaHybr/sss_MotoStall/ens_JudgDeb'
 * '<S288>' : 'ASW_OBD/OBD_SlwTask/vrs_MotoStallDia/rss_MotoStallDiaHybr/sss_MotoStall/lib_FaltDefd_19'
 * '<S289>' : 'ASW_OBD/OBD_SlwTask/vrs_MotoStallDia/rss_MotoStallDiaHybr/sss_MotoStall/ens_JudgDeb/lib_Deb_9'
 * '<S290>' : 'ASW_OBD/OBD_SlwTask/vrs_MotoStallDia/rss_MotoStallDiaHybr/sss_MotoStall/ens_JudgDeb/sss_MotoStallPreJudg'
 * '<S291>' : 'ASW_OBD/OBD_SlwTask/vrs_MotoStallDia/rss_MotoStallDiaHybr/sss_MotoStall/ens_JudgDeb/lib_Deb_9/sfc_FaultDebounce'
 * '<S292>' : 'ASW_OBD/OBD_SlwTask/vrs_MotoStallDia/rss_MotoStallDiaHybr/sss_MotoStall/ens_JudgDeb/sss_MotoStallPreJudg/Compare To Constant'
 * '<S293>' : 'ASW_OBD/OBD_SlwTask/vrs_MotoStallDia/rss_MotoStallDiaHybr/sss_MotoStall/lib_FaltDefd_19/sfc_FaultDefiniteness'
 * '<S294>' : 'ASW_OBD/OBD_SlwTask/vrs_PhiSensFaltDia/rss_PhiSensFaltDiaHybr'
 * '<S295>' : 'ASW_OBD/OBD_SlwTask/vrs_PhiSensFaltDia/rss_PhiSensFaltDiaHybr/sss_PhiSensFalt'
 * '<S296>' : 'ASW_OBD/OBD_SlwTask/vrs_PhiSensFaltDia/rss_PhiSensFaltDiaHybr/sss_PhiSensFalt/Compare To Constant'
 * '<S297>' : 'ASW_OBD/OBD_SlwTask/vrs_PhiSensFaltDia/rss_PhiSensFaltDiaHybr/sss_PhiSensFalt/ens_HysDeb'
 * '<S298>' : 'ASW_OBD/OBD_SlwTask/vrs_PhiSensFaltDia/rss_PhiSensFaltDiaHybr/sss_PhiSensFalt/lib_FaltDefd_10'
 * '<S299>' : 'ASW_OBD/OBD_SlwTask/vrs_PhiSensFaltDia/rss_PhiSensFaltDiaHybr/sss_PhiSensFalt/ens_HysDeb/lib_Deb_2'
 * '<S300>' : 'ASW_OBD/OBD_SlwTask/vrs_PhiSensFaltDia/rss_PhiSensFaltDiaHybr/sss_PhiSensFalt/ens_HysDeb/lib_Deb_2/sfc_FaultDebounce'
 * '<S301>' : 'ASW_OBD/OBD_SlwTask/vrs_PhiSensFaltDia/rss_PhiSensFaltDiaHybr/sss_PhiSensFalt/lib_FaltDefd_10/sfc_FaultDefiniteness'
 * '<S302>' : 'ASW_OBD/OBD_SlwTask/vrs_SlwTaskIn/sss_SlwTaskInHybr'
 * '<S303>' : 'ASW_OBD/OBD_SlwTask/vrs_SlwTaskOut/sss_SlwTaskOutHybr'
 */
#endif                                 /* RTW_HEADER_ASW_OBD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
