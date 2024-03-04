/*
** ###################################################################
**     Processor:           S32R45_M7
**     Reference manual:    S32R45 RM Rev.3
**     Version:             rev. 2.4, 2022-02-14
**     Build:               b220214
**
**     Abstract:
**         Peripheral Access Layer for S32R45_M7
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2022 NXP
**
**     NXP Confidential. This software is owned or controlled by NXP and may only be
**     used strictly in accordance with the applicable license terms. By expressly
**     accepting such terms or by downloading, installing, activating and/or otherwise
**     using the software, you are agreeing that you have read, and that you agree to
**     comply with and are bound by, such license terms. If you do not agree to be
**     bound by the applicable license terms, then you may not retain, install,
**     activate or otherwise use the software. The production use license in
**     Section 2.3 is expressly granted for this software.
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
** ###################################################################
*/

/*!
 * @file S32R45_STCU2.h
 * @version 2.4
 * @date 2022-02-14
 * @brief Peripheral Access Layer for S32R45_STCU2
 *
 * This file contains register definitions and macros for easy access to their
 * bit fields.
 *
 * This file assumes LITTLE endian system.
 */

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.3, local typedef not referenced
* The SoC header defines typedef for all modules.
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.5, local macro not referenced
* The SoC header defines macros for all modules and registers.
*
* @section [global]
* Violates MISRA 2012 Advisory Directive 4.9, Function-like macro
* These are generated macros used for accessing the bit-fields from registers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.1, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.2, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.4, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.5, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 21.1, defined macro '__I' is reserved to the compiler
* This type qualifier is needed to ensure correct I/O access and addressing.
*/

/* Prevention from multiple including the same memory map */
#if !defined(S32R45_STCU2_H_)  /* Check if memory map has not been already included */
#define S32R45_STCU2_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- STCU2 Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup STCU2_Peripheral_Access_Layer STCU2 Peripheral Access Layer
 * @{
 */

/** STCU2 - Size of Registers Arrays */
#define STCU2_LBSSW_COUNT                         1u
#define STCU2_LBESW_COUNT                         1u
#define STCU2_LBUFM_COUNT                         1u
#define STCU2_MBSSW_COUNT                         3u
#define STCU2_MBESW_COUNT                         3u
#define STCU2_MBUFM_COUNT                         3u
#define STCU2_LB_COUNT                            60u
#define STCU2_MB_CTRL_COUNT                       110u

/** STCU2 - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[4];
  __IO uint32_t RUNSW;                             /**< STCU2 Run Software, offset: 0x4 */
  __O  uint32_t SKC;                               /**< STCU2 SK Code, offset: 0x8 */
  __IO uint32_t CFG;                               /**< STCU2 Configuration, offset: 0xC */
  uint8_t RESERVED_1[4];
  __IO uint32_t WDG;                               /**< STCU2 Watchdog Granularity, offset: 0x14 */
  __IO uint32_t INT_FLG;                           /**< STCU2 Interrupt Flag, offset: 0x18 */
  uint8_t RESERVED_2[8];
  __IO uint32_t ERR_STAT;                          /**< STCU2 Error, offset: 0x24 */
  __IO uint32_t ERR_FM;                            /**< STCU2 Error FM, offset: 0x28 */
  uint8_t RESERVED_3[32];
  __I  uint32_t LBSSW[STCU2_LBSSW_COUNT];          /**< STCU2 Online LBIST Status, array offset: 0x4C, array step: 0x4 */
  __I  uint32_t LBSSW1;                            /**< STCU2 Online LBIST Status, offset: 0x50 */
  uint8_t RESERVED_4[8];
  __I  uint32_t LBESW[STCU2_LBESW_COUNT];          /**< STCU2 Online LBIST End Flag, array offset: 0x5C, array step: 0x4 */
  __I  uint32_t LBESW1;                            /**< STCU2 Online LBIST End Flag, offset: 0x60 */
  uint8_t RESERVED_5[24];
  __IO uint32_t LBUFM[STCU2_LBUFM_COUNT];          /**< STCU2 Online LBIST Unrecoverable FM, array offset: 0x7C, array step: 0x4 */
  __IO uint32_t LBUFM1;                            /**< STCU2 Online LBIST Unrecoverable FM, offset: 0x80 */
  uint8_t RESERVED_6[136];
  __I  uint32_t MBSSW[STCU2_MBSSW_COUNT];          /**< STCU2 Online MBIST Status, array offset: 0x10C, array step: 0x4 */
  __I  uint32_t MBSSW3;                            /**< STCU2 Online MBIST Status, offset: 0x118 */
  uint8_t RESERVED_7[48];
  __I  uint32_t MBESW[STCU2_MBESW_COUNT];          /**< STCU2 Online MBIST End Flag, array offset: 0x14C, array step: 0x4 */
  __I  uint32_t MBESW3;                            /**< STCU2 Online MBIST End Flag, offset: 0x158 */
  uint8_t RESERVED_8[48];
  __IO uint32_t MBUFM[STCU2_MBUFM_COUNT];          /**< STCU2 MBIST Unrecoverable FM, array offset: 0x18C, array step: 0x4 */
  __IO uint32_t MBUFM3;                            /**< STCU2 MBIST Unrecoverable FM, offset: 0x198 */
  uint8_t RESERVED_9[100];
  struct {                                         /* offset: 0x200, array step: 0x40 */
    __IO uint32_t CTRL;                              /**< STCU2 LBIST Control, array offset: 0x200, array step: 0x40 */
    __IO uint32_t PCS;                               /**< STCU2 LBIST PC Stop, array offset: 0x204, array step: 0x40 */
    uint8_t RESERVED_0[24];
    __IO uint32_t MISRELSW;                          /**< STCU2 Online LBIST MISR Expected Low, array offset: 0x220, array step: 0x40 */
    __IO uint32_t MISREHSW;                          /**< STCU2 Online LBIST MISR Expected High, array offset: 0x224, array step: 0x40 */
    __I  uint32_t MISRRLSW;                          /**< STCU2 Online LBIST MISR Read Low, array offset: 0x228, array step: 0x40 */
    __I  uint32_t MISRRHSW;                          /**< STCU2 Online LBIST MISR Read High, array offset: 0x22C, array step: 0x40 */
    uint8_t RESERVED_1[16];
  } LB[STCU2_LB_COUNT];
  uint8_t RESERVED_10[4352];
  __IO uint32_t ALGOSEL;                           /**< STCU2 Algorithm Select, offset: 0x2200 */
  uint8_t RESERVED_11[8];
  __IO uint32_t STGGR;                             /**< STCU2 MBIST Stagger, offset: 0x220C */
  __IO uint32_t BSTART;                            /**< STCU2 BIST Start, offset: 0x2210 */
  __IO uint32_t MB_CTRL[STCU2_MB_CTRL_COUNT];      /**< STCU2 MBIST Control, array offset: 0x2214, array step: 0x4 */
} STCU2_Type, *STCU2_MemMapPtr;

/** Number of instances of the STCU2 module. */
#define STCU2_INSTANCE_COUNT                     (1u)

/* STCU2 - Peripheral instance base addresses */
/** Peripheral STCU2 base address */
#define IP_STCU2_BASE                            (0x40028000u)
/** Peripheral STCU2 base pointer */
#define IP_STCU2                                 ((STCU2_Type *)IP_STCU2_BASE)
/** Array initializer of STCU2 peripheral base addresses */
#define IP_STCU2_BASE_ADDRS                      { IP_STCU2_BASE }
/** Array initializer of STCU2 peripheral base pointers */
#define IP_STCU2_BASE_PTRS                       { IP_STCU2 }

/* ----------------------------------------------------------------------------
   -- STCU2 Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup STCU2_Register_Masks STCU2 Register Masks
 * @{
 */

/*! @name RUNSW - STCU2 Run Software */
/*! @{ */

#define STCU2_RUNSW_RUNSW_MASK                   (0x1U)
#define STCU2_RUNSW_RUNSW_SHIFT                  (0U)
#define STCU2_RUNSW_RUNSW_WIDTH                  (1U)
#define STCU2_RUNSW_RUNSW(x)                     (((uint32_t)(((uint32_t)(x)) << STCU2_RUNSW_RUNSW_SHIFT)) & STCU2_RUNSW_RUNSW_MASK)

#define STCU2_RUNSW_LBIE_MASK                    (0x400U)
#define STCU2_RUNSW_LBIE_SHIFT                   (10U)
#define STCU2_RUNSW_LBIE_WIDTH                   (1U)
#define STCU2_RUNSW_LBIE(x)                      (((uint32_t)(((uint32_t)(x)) << STCU2_RUNSW_LBIE_SHIFT)) & STCU2_RUNSW_LBIE_MASK)

#define STCU2_RUNSW_MBIE_MASK                    (0x800U)
#define STCU2_RUNSW_MBIE_SHIFT                   (11U)
#define STCU2_RUNSW_MBIE_WIDTH                   (1U)
#define STCU2_RUNSW_MBIE(x)                      (((uint32_t)(((uint32_t)(x)) << STCU2_RUNSW_MBIE_SHIFT)) & STCU2_RUNSW_MBIE_MASK)
/*! @} */

/*! @name SKC - STCU2 SK Code */
/*! @{ */

#define STCU2_SKC_SKC_MASK                       (0xFFFFFFFFU)
#define STCU2_SKC_SKC_SHIFT                      (0U)
#define STCU2_SKC_SKC_WIDTH                      (32U)
#define STCU2_SKC_SKC(x)                         (((uint32_t)(((uint32_t)(x)) << STCU2_SKC_SKC_SHIFT)) & STCU2_SKC_SKC_MASK)
/*! @} */

/*! @name CFG - STCU2 Configuration */
/*! @{ */

#define STCU2_CFG_CLK_CFG_MASK                   (0x7U)
#define STCU2_CFG_CLK_CFG_SHIFT                  (0U)
#define STCU2_CFG_CLK_CFG_WIDTH                  (3U)
#define STCU2_CFG_CLK_CFG(x)                     (((uint32_t)(((uint32_t)(x)) << STCU2_CFG_CLK_CFG_SHIFT)) & STCU2_CFG_CLK_CFG_MASK)

#define STCU2_CFG_WRP_MASK                       (0x100U)
#define STCU2_CFG_WRP_SHIFT                      (8U)
#define STCU2_CFG_WRP_WIDTH                      (1U)
#define STCU2_CFG_WRP(x)                         (((uint32_t)(((uint32_t)(x)) << STCU2_CFG_WRP_SHIFT)) & STCU2_CFG_WRP_MASK)

#define STCU2_CFG_LB_DELAY_MASK                  (0x1FE000U)
#define STCU2_CFG_LB_DELAY_SHIFT                 (13U)
#define STCU2_CFG_LB_DELAY_WIDTH                 (8U)
#define STCU2_CFG_LB_DELAY(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_CFG_LB_DELAY_SHIFT)) & STCU2_CFG_LB_DELAY_MASK)

#define STCU2_CFG_PTR_MASK                       (0x7FE00000U)
#define STCU2_CFG_PTR_SHIFT                      (21U)
#define STCU2_CFG_PTR_WIDTH                      (10U)
#define STCU2_CFG_PTR(x)                         (((uint32_t)(((uint32_t)(x)) << STCU2_CFG_PTR_SHIFT)) & STCU2_CFG_PTR_MASK)
/*! @} */

/*! @name WDG - STCU2 Watchdog Granularity */
/*! @{ */

#define STCU2_WDG_WDGEOC_MASK                    (0xFFFFFFFFU)
#define STCU2_WDG_WDGEOC_SHIFT                   (0U)
#define STCU2_WDG_WDGEOC_WIDTH                   (32U)
#define STCU2_WDG_WDGEOC(x)                      (((uint32_t)(((uint32_t)(x)) << STCU2_WDG_WDGEOC_SHIFT)) & STCU2_WDG_WDGEOC_MASK)
/*! @} */

/*! @name INT_FLG - STCU2 Interrupt Flag */
/*! @{ */

#define STCU2_INT_FLG_LBIFLG_MASK                (0x1U)
#define STCU2_INT_FLG_LBIFLG_SHIFT               (0U)
#define STCU2_INT_FLG_LBIFLG_WIDTH               (1U)
#define STCU2_INT_FLG_LBIFLG(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_INT_FLG_LBIFLG_SHIFT)) & STCU2_INT_FLG_LBIFLG_MASK)

#define STCU2_INT_FLG_MBIFLG_MASK                (0x2U)
#define STCU2_INT_FLG_MBIFLG_SHIFT               (1U)
#define STCU2_INT_FLG_MBIFLG_WIDTH               (1U)
#define STCU2_INT_FLG_MBIFLG(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_INT_FLG_MBIFLG_SHIFT)) & STCU2_INT_FLG_MBIFLG_MASK)
/*! @} */

/*! @name ERR_STAT - STCU2 Error */
/*! @{ */

#define STCU2_ERR_STAT_RFSF_MASK                 (0x100U)
#define STCU2_ERR_STAT_RFSF_SHIFT                (8U)
#define STCU2_ERR_STAT_RFSF_WIDTH                (1U)
#define STCU2_ERR_STAT_RFSF(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_ERR_STAT_RFSF_SHIFT)) & STCU2_ERR_STAT_RFSF_MASK)

#define STCU2_ERR_STAT_UFSF_MASK                 (0x200U)
#define STCU2_ERR_STAT_UFSF_SHIFT                (9U)
#define STCU2_ERR_STAT_UFSF_WIDTH                (1U)
#define STCU2_ERR_STAT_UFSF(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_ERR_STAT_UFSF_SHIFT)) & STCU2_ERR_STAT_UFSF_MASK)

#define STCU2_ERR_STAT_INVPSW_MASK               (0x10000U)
#define STCU2_ERR_STAT_INVPSW_SHIFT              (16U)
#define STCU2_ERR_STAT_INVPSW_WIDTH              (1U)
#define STCU2_ERR_STAT_INVPSW(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_ERR_STAT_INVPSW_SHIFT)) & STCU2_ERR_STAT_INVPSW_MASK)

#define STCU2_ERR_STAT_ENGESW_MASK               (0x20000U)
#define STCU2_ERR_STAT_ENGESW_SHIFT              (17U)
#define STCU2_ERR_STAT_ENGESW_WIDTH              (1U)
#define STCU2_ERR_STAT_ENGESW(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_ERR_STAT_ENGESW_SHIFT)) & STCU2_ERR_STAT_ENGESW_MASK)

#define STCU2_ERR_STAT_WDTOSW_MASK               (0x80000U)
#define STCU2_ERR_STAT_WDTOSW_SHIFT              (19U)
#define STCU2_ERR_STAT_WDTOSW_WIDTH              (1U)
#define STCU2_ERR_STAT_WDTOSW(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_ERR_STAT_WDTOSW_SHIFT)) & STCU2_ERR_STAT_WDTOSW_MASK)

#define STCU2_ERR_STAT_ABORTHW_MASK              (0x2000000U)
#define STCU2_ERR_STAT_ABORTHW_SHIFT             (25U)
#define STCU2_ERR_STAT_ABORTHW_WIDTH             (1U)
#define STCU2_ERR_STAT_ABORTHW(x)                (((uint32_t)(((uint32_t)(x)) << STCU2_ERR_STAT_ABORTHW_SHIFT)) & STCU2_ERR_STAT_ABORTHW_MASK)
/*! @} */

/*! @name ERR_FM - STCU2 Error FM */
/*! @{ */

#define STCU2_ERR_FM_INVPUFM_MASK                (0x1U)
#define STCU2_ERR_FM_INVPUFM_SHIFT               (0U)
#define STCU2_ERR_FM_INVPUFM_WIDTH               (1U)
#define STCU2_ERR_FM_INVPUFM(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_ERR_FM_INVPUFM_SHIFT)) & STCU2_ERR_FM_INVPUFM_MASK)

#define STCU2_ERR_FM_ENGEUFM_MASK                (0x2U)
#define STCU2_ERR_FM_ENGEUFM_SHIFT               (1U)
#define STCU2_ERR_FM_ENGEUFM_WIDTH               (1U)
#define STCU2_ERR_FM_ENGEUFM(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_ERR_FM_ENGEUFM_SHIFT)) & STCU2_ERR_FM_ENGEUFM_MASK)

#define STCU2_ERR_FM_WDTOUFM_MASK                (0x8U)
#define STCU2_ERR_FM_WDTOUFM_SHIFT               (3U)
#define STCU2_ERR_FM_WDTOUFM_WIDTH               (1U)
#define STCU2_ERR_FM_WDTOUFM(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_ERR_FM_WDTOUFM_SHIFT)) & STCU2_ERR_FM_WDTOUFM_MASK)
/*! @} */

/*! @name LBSSW - STCU2 Online LBIST Status */
/*! @{ */

#define STCU2_LBSSW_LBSSW0_MASK                  (0x1U)
#define STCU2_LBSSW_LBSSW0_SHIFT                 (0U)
#define STCU2_LBSSW_LBSSW0_WIDTH                 (1U)
#define STCU2_LBSSW_LBSSW0(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW0_SHIFT)) & STCU2_LBSSW_LBSSW0_MASK)

#define STCU2_LBSSW_LBSSW1_MASK                  (0x2U)
#define STCU2_LBSSW_LBSSW1_SHIFT                 (1U)
#define STCU2_LBSSW_LBSSW1_WIDTH                 (1U)
#define STCU2_LBSSW_LBSSW1(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW1_SHIFT)) & STCU2_LBSSW_LBSSW1_MASK)

#define STCU2_LBSSW_LBSSW2_MASK                  (0x4U)
#define STCU2_LBSSW_LBSSW2_SHIFT                 (2U)
#define STCU2_LBSSW_LBSSW2_WIDTH                 (1U)
#define STCU2_LBSSW_LBSSW2(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW2_SHIFT)) & STCU2_LBSSW_LBSSW2_MASK)

#define STCU2_LBSSW_LBSSW3_MASK                  (0x8U)
#define STCU2_LBSSW_LBSSW3_SHIFT                 (3U)
#define STCU2_LBSSW_LBSSW3_WIDTH                 (1U)
#define STCU2_LBSSW_LBSSW3(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW3_SHIFT)) & STCU2_LBSSW_LBSSW3_MASK)

#define STCU2_LBSSW_LBSSW4_MASK                  (0x10U)
#define STCU2_LBSSW_LBSSW4_SHIFT                 (4U)
#define STCU2_LBSSW_LBSSW4_WIDTH                 (1U)
#define STCU2_LBSSW_LBSSW4(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW4_SHIFT)) & STCU2_LBSSW_LBSSW4_MASK)

#define STCU2_LBSSW_LBSSW5_MASK                  (0x20U)
#define STCU2_LBSSW_LBSSW5_SHIFT                 (5U)
#define STCU2_LBSSW_LBSSW5_WIDTH                 (1U)
#define STCU2_LBSSW_LBSSW5(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW5_SHIFT)) & STCU2_LBSSW_LBSSW5_MASK)

#define STCU2_LBSSW_LBSSW6_MASK                  (0x40U)
#define STCU2_LBSSW_LBSSW6_SHIFT                 (6U)
#define STCU2_LBSSW_LBSSW6_WIDTH                 (1U)
#define STCU2_LBSSW_LBSSW6(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW6_SHIFT)) & STCU2_LBSSW_LBSSW6_MASK)

#define STCU2_LBSSW_LBSSW7_MASK                  (0x80U)
#define STCU2_LBSSW_LBSSW7_SHIFT                 (7U)
#define STCU2_LBSSW_LBSSW7_WIDTH                 (1U)
#define STCU2_LBSSW_LBSSW7(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW7_SHIFT)) & STCU2_LBSSW_LBSSW7_MASK)

#define STCU2_LBSSW_LBSSW8_MASK                  (0x100U)
#define STCU2_LBSSW_LBSSW8_SHIFT                 (8U)
#define STCU2_LBSSW_LBSSW8_WIDTH                 (1U)
#define STCU2_LBSSW_LBSSW8(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW8_SHIFT)) & STCU2_LBSSW_LBSSW8_MASK)

#define STCU2_LBSSW_LBSSW9_MASK                  (0x200U)
#define STCU2_LBSSW_LBSSW9_SHIFT                 (9U)
#define STCU2_LBSSW_LBSSW9_WIDTH                 (1U)
#define STCU2_LBSSW_LBSSW9(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW9_SHIFT)) & STCU2_LBSSW_LBSSW9_MASK)

#define STCU2_LBSSW_LBSSW10_MASK                 (0x400U)
#define STCU2_LBSSW_LBSSW10_SHIFT                (10U)
#define STCU2_LBSSW_LBSSW10_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW10(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW10_SHIFT)) & STCU2_LBSSW_LBSSW10_MASK)

#define STCU2_LBSSW_LBSSW11_MASK                 (0x800U)
#define STCU2_LBSSW_LBSSW11_SHIFT                (11U)
#define STCU2_LBSSW_LBSSW11_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW11(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW11_SHIFT)) & STCU2_LBSSW_LBSSW11_MASK)

#define STCU2_LBSSW_LBSSW12_MASK                 (0x1000U)
#define STCU2_LBSSW_LBSSW12_SHIFT                (12U)
#define STCU2_LBSSW_LBSSW12_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW12(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW12_SHIFT)) & STCU2_LBSSW_LBSSW12_MASK)

#define STCU2_LBSSW_LBSSW13_MASK                 (0x2000U)
#define STCU2_LBSSW_LBSSW13_SHIFT                (13U)
#define STCU2_LBSSW_LBSSW13_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW13(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW13_SHIFT)) & STCU2_LBSSW_LBSSW13_MASK)

#define STCU2_LBSSW_LBSSW14_MASK                 (0x4000U)
#define STCU2_LBSSW_LBSSW14_SHIFT                (14U)
#define STCU2_LBSSW_LBSSW14_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW14(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW14_SHIFT)) & STCU2_LBSSW_LBSSW14_MASK)

#define STCU2_LBSSW_LBSSW15_MASK                 (0x8000U)
#define STCU2_LBSSW_LBSSW15_SHIFT                (15U)
#define STCU2_LBSSW_LBSSW15_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW15(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW15_SHIFT)) & STCU2_LBSSW_LBSSW15_MASK)

#define STCU2_LBSSW_LBSSW16_MASK                 (0x10000U)
#define STCU2_LBSSW_LBSSW16_SHIFT                (16U)
#define STCU2_LBSSW_LBSSW16_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW16(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW16_SHIFT)) & STCU2_LBSSW_LBSSW16_MASK)

#define STCU2_LBSSW_LBSSW17_MASK                 (0x20000U)
#define STCU2_LBSSW_LBSSW17_SHIFT                (17U)
#define STCU2_LBSSW_LBSSW17_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW17(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW17_SHIFT)) & STCU2_LBSSW_LBSSW17_MASK)

#define STCU2_LBSSW_LBSSW18_MASK                 (0x40000U)
#define STCU2_LBSSW_LBSSW18_SHIFT                (18U)
#define STCU2_LBSSW_LBSSW18_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW18(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW18_SHIFT)) & STCU2_LBSSW_LBSSW18_MASK)

#define STCU2_LBSSW_LBSSW19_MASK                 (0x80000U)
#define STCU2_LBSSW_LBSSW19_SHIFT                (19U)
#define STCU2_LBSSW_LBSSW19_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW19(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW19_SHIFT)) & STCU2_LBSSW_LBSSW19_MASK)

#define STCU2_LBSSW_LBSSW20_MASK                 (0x100000U)
#define STCU2_LBSSW_LBSSW20_SHIFT                (20U)
#define STCU2_LBSSW_LBSSW20_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW20(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW20_SHIFT)) & STCU2_LBSSW_LBSSW20_MASK)

#define STCU2_LBSSW_LBSSW21_MASK                 (0x200000U)
#define STCU2_LBSSW_LBSSW21_SHIFT                (21U)
#define STCU2_LBSSW_LBSSW21_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW21(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW21_SHIFT)) & STCU2_LBSSW_LBSSW21_MASK)

#define STCU2_LBSSW_LBSSW22_MASK                 (0x400000U)
#define STCU2_LBSSW_LBSSW22_SHIFT                (22U)
#define STCU2_LBSSW_LBSSW22_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW22(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW22_SHIFT)) & STCU2_LBSSW_LBSSW22_MASK)

#define STCU2_LBSSW_LBSSW23_MASK                 (0x800000U)
#define STCU2_LBSSW_LBSSW23_SHIFT                (23U)
#define STCU2_LBSSW_LBSSW23_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW23(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW23_SHIFT)) & STCU2_LBSSW_LBSSW23_MASK)

#define STCU2_LBSSW_LBSSW24_MASK                 (0x1000000U)
#define STCU2_LBSSW_LBSSW24_SHIFT                (24U)
#define STCU2_LBSSW_LBSSW24_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW24(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW24_SHIFT)) & STCU2_LBSSW_LBSSW24_MASK)

#define STCU2_LBSSW_LBSSW25_MASK                 (0x2000000U)
#define STCU2_LBSSW_LBSSW25_SHIFT                (25U)
#define STCU2_LBSSW_LBSSW25_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW25(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW25_SHIFT)) & STCU2_LBSSW_LBSSW25_MASK)

#define STCU2_LBSSW_LBSSW26_MASK                 (0x4000000U)
#define STCU2_LBSSW_LBSSW26_SHIFT                (26U)
#define STCU2_LBSSW_LBSSW26_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW26(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW26_SHIFT)) & STCU2_LBSSW_LBSSW26_MASK)

#define STCU2_LBSSW_LBSSW27_MASK                 (0x8000000U)
#define STCU2_LBSSW_LBSSW27_SHIFT                (27U)
#define STCU2_LBSSW_LBSSW27_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW27(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW27_SHIFT)) & STCU2_LBSSW_LBSSW27_MASK)

#define STCU2_LBSSW_LBSSW28_MASK                 (0x10000000U)
#define STCU2_LBSSW_LBSSW28_SHIFT                (28U)
#define STCU2_LBSSW_LBSSW28_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW28(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW28_SHIFT)) & STCU2_LBSSW_LBSSW28_MASK)

#define STCU2_LBSSW_LBSSW29_MASK                 (0x20000000U)
#define STCU2_LBSSW_LBSSW29_SHIFT                (29U)
#define STCU2_LBSSW_LBSSW29_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW29(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW29_SHIFT)) & STCU2_LBSSW_LBSSW29_MASK)

#define STCU2_LBSSW_LBSSW30_MASK                 (0x40000000U)
#define STCU2_LBSSW_LBSSW30_SHIFT                (30U)
#define STCU2_LBSSW_LBSSW30_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW30(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW30_SHIFT)) & STCU2_LBSSW_LBSSW30_MASK)

#define STCU2_LBSSW_LBSSW31_MASK                 (0x80000000U)
#define STCU2_LBSSW_LBSSW31_SHIFT                (31U)
#define STCU2_LBSSW_LBSSW31_WIDTH                (1U)
#define STCU2_LBSSW_LBSSW31(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW_LBSSW31_SHIFT)) & STCU2_LBSSW_LBSSW31_MASK)
/*! @} */

/*! @name LBSSW1 - STCU2 Online LBIST Status */
/*! @{ */

#define STCU2_LBSSW1_LBSSW32_MASK                (0x1U)
#define STCU2_LBSSW1_LBSSW32_SHIFT               (0U)
#define STCU2_LBSSW1_LBSSW32_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW32(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW32_SHIFT)) & STCU2_LBSSW1_LBSSW32_MASK)

#define STCU2_LBSSW1_LBSSW33_MASK                (0x2U)
#define STCU2_LBSSW1_LBSSW33_SHIFT               (1U)
#define STCU2_LBSSW1_LBSSW33_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW33(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW33_SHIFT)) & STCU2_LBSSW1_LBSSW33_MASK)

#define STCU2_LBSSW1_LBSSW34_MASK                (0x4U)
#define STCU2_LBSSW1_LBSSW34_SHIFT               (2U)
#define STCU2_LBSSW1_LBSSW34_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW34(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW34_SHIFT)) & STCU2_LBSSW1_LBSSW34_MASK)

#define STCU2_LBSSW1_LBSSW35_MASK                (0x8U)
#define STCU2_LBSSW1_LBSSW35_SHIFT               (3U)
#define STCU2_LBSSW1_LBSSW35_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW35(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW35_SHIFT)) & STCU2_LBSSW1_LBSSW35_MASK)

#define STCU2_LBSSW1_LBSSW36_MASK                (0x10U)
#define STCU2_LBSSW1_LBSSW36_SHIFT               (4U)
#define STCU2_LBSSW1_LBSSW36_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW36(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW36_SHIFT)) & STCU2_LBSSW1_LBSSW36_MASK)

#define STCU2_LBSSW1_LBSSW37_MASK                (0x20U)
#define STCU2_LBSSW1_LBSSW37_SHIFT               (5U)
#define STCU2_LBSSW1_LBSSW37_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW37(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW37_SHIFT)) & STCU2_LBSSW1_LBSSW37_MASK)

#define STCU2_LBSSW1_LBSSW38_MASK                (0x40U)
#define STCU2_LBSSW1_LBSSW38_SHIFT               (6U)
#define STCU2_LBSSW1_LBSSW38_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW38(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW38_SHIFT)) & STCU2_LBSSW1_LBSSW38_MASK)

#define STCU2_LBSSW1_LBSSW39_MASK                (0x80U)
#define STCU2_LBSSW1_LBSSW39_SHIFT               (7U)
#define STCU2_LBSSW1_LBSSW39_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW39(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW39_SHIFT)) & STCU2_LBSSW1_LBSSW39_MASK)

#define STCU2_LBSSW1_LBSSW40_MASK                (0x100U)
#define STCU2_LBSSW1_LBSSW40_SHIFT               (8U)
#define STCU2_LBSSW1_LBSSW40_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW40(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW40_SHIFT)) & STCU2_LBSSW1_LBSSW40_MASK)

#define STCU2_LBSSW1_LBSSW41_MASK                (0x200U)
#define STCU2_LBSSW1_LBSSW41_SHIFT               (9U)
#define STCU2_LBSSW1_LBSSW41_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW41(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW41_SHIFT)) & STCU2_LBSSW1_LBSSW41_MASK)

#define STCU2_LBSSW1_LBSSW42_MASK                (0x400U)
#define STCU2_LBSSW1_LBSSW42_SHIFT               (10U)
#define STCU2_LBSSW1_LBSSW42_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW42(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW42_SHIFT)) & STCU2_LBSSW1_LBSSW42_MASK)

#define STCU2_LBSSW1_LBSSW43_MASK                (0x800U)
#define STCU2_LBSSW1_LBSSW43_SHIFT               (11U)
#define STCU2_LBSSW1_LBSSW43_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW43(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW43_SHIFT)) & STCU2_LBSSW1_LBSSW43_MASK)

#define STCU2_LBSSW1_LBSSW44_MASK                (0x1000U)
#define STCU2_LBSSW1_LBSSW44_SHIFT               (12U)
#define STCU2_LBSSW1_LBSSW44_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW44(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW44_SHIFT)) & STCU2_LBSSW1_LBSSW44_MASK)

#define STCU2_LBSSW1_LBSSW45_MASK                (0x2000U)
#define STCU2_LBSSW1_LBSSW45_SHIFT               (13U)
#define STCU2_LBSSW1_LBSSW45_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW45(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW45_SHIFT)) & STCU2_LBSSW1_LBSSW45_MASK)

#define STCU2_LBSSW1_LBSSW46_MASK                (0x4000U)
#define STCU2_LBSSW1_LBSSW46_SHIFT               (14U)
#define STCU2_LBSSW1_LBSSW46_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW46(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW46_SHIFT)) & STCU2_LBSSW1_LBSSW46_MASK)

#define STCU2_LBSSW1_LBSSW47_MASK                (0x8000U)
#define STCU2_LBSSW1_LBSSW47_SHIFT               (15U)
#define STCU2_LBSSW1_LBSSW47_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW47(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW47_SHIFT)) & STCU2_LBSSW1_LBSSW47_MASK)

#define STCU2_LBSSW1_LBSSW48_MASK                (0x10000U)
#define STCU2_LBSSW1_LBSSW48_SHIFT               (16U)
#define STCU2_LBSSW1_LBSSW48_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW48(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW48_SHIFT)) & STCU2_LBSSW1_LBSSW48_MASK)

#define STCU2_LBSSW1_LBSSW49_MASK                (0x20000U)
#define STCU2_LBSSW1_LBSSW49_SHIFT               (17U)
#define STCU2_LBSSW1_LBSSW49_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW49(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW49_SHIFT)) & STCU2_LBSSW1_LBSSW49_MASK)

#define STCU2_LBSSW1_LBSSW50_MASK                (0x40000U)
#define STCU2_LBSSW1_LBSSW50_SHIFT               (18U)
#define STCU2_LBSSW1_LBSSW50_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW50(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW50_SHIFT)) & STCU2_LBSSW1_LBSSW50_MASK)

#define STCU2_LBSSW1_LBSSW51_MASK                (0x80000U)
#define STCU2_LBSSW1_LBSSW51_SHIFT               (19U)
#define STCU2_LBSSW1_LBSSW51_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW51(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW51_SHIFT)) & STCU2_LBSSW1_LBSSW51_MASK)

#define STCU2_LBSSW1_LBSSW52_MASK                (0x100000U)
#define STCU2_LBSSW1_LBSSW52_SHIFT               (20U)
#define STCU2_LBSSW1_LBSSW52_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW52(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW52_SHIFT)) & STCU2_LBSSW1_LBSSW52_MASK)

#define STCU2_LBSSW1_LBSSW53_MASK                (0x200000U)
#define STCU2_LBSSW1_LBSSW53_SHIFT               (21U)
#define STCU2_LBSSW1_LBSSW53_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW53(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW53_SHIFT)) & STCU2_LBSSW1_LBSSW53_MASK)

#define STCU2_LBSSW1_LBSSW54_MASK                (0x400000U)
#define STCU2_LBSSW1_LBSSW54_SHIFT               (22U)
#define STCU2_LBSSW1_LBSSW54_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW54(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW54_SHIFT)) & STCU2_LBSSW1_LBSSW54_MASK)

#define STCU2_LBSSW1_LBSSW55_MASK                (0x800000U)
#define STCU2_LBSSW1_LBSSW55_SHIFT               (23U)
#define STCU2_LBSSW1_LBSSW55_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW55(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW55_SHIFT)) & STCU2_LBSSW1_LBSSW55_MASK)

#define STCU2_LBSSW1_LBSSW56_MASK                (0x1000000U)
#define STCU2_LBSSW1_LBSSW56_SHIFT               (24U)
#define STCU2_LBSSW1_LBSSW56_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW56(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW56_SHIFT)) & STCU2_LBSSW1_LBSSW56_MASK)

#define STCU2_LBSSW1_LBSSW57_MASK                (0x2000000U)
#define STCU2_LBSSW1_LBSSW57_SHIFT               (25U)
#define STCU2_LBSSW1_LBSSW57_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW57(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW57_SHIFT)) & STCU2_LBSSW1_LBSSW57_MASK)

#define STCU2_LBSSW1_LBSSW58_MASK                (0x4000000U)
#define STCU2_LBSSW1_LBSSW58_SHIFT               (26U)
#define STCU2_LBSSW1_LBSSW58_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW58(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW58_SHIFT)) & STCU2_LBSSW1_LBSSW58_MASK)

#define STCU2_LBSSW1_LBSSW59_MASK                (0x8000000U)
#define STCU2_LBSSW1_LBSSW59_SHIFT               (27U)
#define STCU2_LBSSW1_LBSSW59_WIDTH               (1U)
#define STCU2_LBSSW1_LBSSW59(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBSSW1_LBSSW59_SHIFT)) & STCU2_LBSSW1_LBSSW59_MASK)
/*! @} */

/*! @name LBESW - STCU2 Online LBIST End Flag */
/*! @{ */

#define STCU2_LBESW_LBESW0_MASK                  (0x1U)
#define STCU2_LBESW_LBESW0_SHIFT                 (0U)
#define STCU2_LBESW_LBESW0_WIDTH                 (1U)
#define STCU2_LBESW_LBESW0(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW0_SHIFT)) & STCU2_LBESW_LBESW0_MASK)

#define STCU2_LBESW_LBESW1_MASK                  (0x2U)
#define STCU2_LBESW_LBESW1_SHIFT                 (1U)
#define STCU2_LBESW_LBESW1_WIDTH                 (1U)
#define STCU2_LBESW_LBESW1(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW1_SHIFT)) & STCU2_LBESW_LBESW1_MASK)

#define STCU2_LBESW_LBESW2_MASK                  (0x4U)
#define STCU2_LBESW_LBESW2_SHIFT                 (2U)
#define STCU2_LBESW_LBESW2_WIDTH                 (1U)
#define STCU2_LBESW_LBESW2(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW2_SHIFT)) & STCU2_LBESW_LBESW2_MASK)

#define STCU2_LBESW_LBESW3_MASK                  (0x8U)
#define STCU2_LBESW_LBESW3_SHIFT                 (3U)
#define STCU2_LBESW_LBESW3_WIDTH                 (1U)
#define STCU2_LBESW_LBESW3(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW3_SHIFT)) & STCU2_LBESW_LBESW3_MASK)

#define STCU2_LBESW_LBESW4_MASK                  (0x10U)
#define STCU2_LBESW_LBESW4_SHIFT                 (4U)
#define STCU2_LBESW_LBESW4_WIDTH                 (1U)
#define STCU2_LBESW_LBESW4(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW4_SHIFT)) & STCU2_LBESW_LBESW4_MASK)

#define STCU2_LBESW_LBESW5_MASK                  (0x20U)
#define STCU2_LBESW_LBESW5_SHIFT                 (5U)
#define STCU2_LBESW_LBESW5_WIDTH                 (1U)
#define STCU2_LBESW_LBESW5(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW5_SHIFT)) & STCU2_LBESW_LBESW5_MASK)

#define STCU2_LBESW_LBESW6_MASK                  (0x40U)
#define STCU2_LBESW_LBESW6_SHIFT                 (6U)
#define STCU2_LBESW_LBESW6_WIDTH                 (1U)
#define STCU2_LBESW_LBESW6(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW6_SHIFT)) & STCU2_LBESW_LBESW6_MASK)

#define STCU2_LBESW_LBESW7_MASK                  (0x80U)
#define STCU2_LBESW_LBESW7_SHIFT                 (7U)
#define STCU2_LBESW_LBESW7_WIDTH                 (1U)
#define STCU2_LBESW_LBESW7(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW7_SHIFT)) & STCU2_LBESW_LBESW7_MASK)

#define STCU2_LBESW_LBESW8_MASK                  (0x100U)
#define STCU2_LBESW_LBESW8_SHIFT                 (8U)
#define STCU2_LBESW_LBESW8_WIDTH                 (1U)
#define STCU2_LBESW_LBESW8(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW8_SHIFT)) & STCU2_LBESW_LBESW8_MASK)

#define STCU2_LBESW_LBESW9_MASK                  (0x200U)
#define STCU2_LBESW_LBESW9_SHIFT                 (9U)
#define STCU2_LBESW_LBESW9_WIDTH                 (1U)
#define STCU2_LBESW_LBESW9(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW9_SHIFT)) & STCU2_LBESW_LBESW9_MASK)

#define STCU2_LBESW_LBESW10_MASK                 (0x400U)
#define STCU2_LBESW_LBESW10_SHIFT                (10U)
#define STCU2_LBESW_LBESW10_WIDTH                (1U)
#define STCU2_LBESW_LBESW10(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW10_SHIFT)) & STCU2_LBESW_LBESW10_MASK)

#define STCU2_LBESW_LBESW11_MASK                 (0x800U)
#define STCU2_LBESW_LBESW11_SHIFT                (11U)
#define STCU2_LBESW_LBESW11_WIDTH                (1U)
#define STCU2_LBESW_LBESW11(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW11_SHIFT)) & STCU2_LBESW_LBESW11_MASK)

#define STCU2_LBESW_LBESW12_MASK                 (0x1000U)
#define STCU2_LBESW_LBESW12_SHIFT                (12U)
#define STCU2_LBESW_LBESW12_WIDTH                (1U)
#define STCU2_LBESW_LBESW12(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW12_SHIFT)) & STCU2_LBESW_LBESW12_MASK)

#define STCU2_LBESW_LBESW13_MASK                 (0x2000U)
#define STCU2_LBESW_LBESW13_SHIFT                (13U)
#define STCU2_LBESW_LBESW13_WIDTH                (1U)
#define STCU2_LBESW_LBESW13(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW13_SHIFT)) & STCU2_LBESW_LBESW13_MASK)

#define STCU2_LBESW_LBESW14_MASK                 (0x4000U)
#define STCU2_LBESW_LBESW14_SHIFT                (14U)
#define STCU2_LBESW_LBESW14_WIDTH                (1U)
#define STCU2_LBESW_LBESW14(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW14_SHIFT)) & STCU2_LBESW_LBESW14_MASK)

#define STCU2_LBESW_LBESW15_MASK                 (0x8000U)
#define STCU2_LBESW_LBESW15_SHIFT                (15U)
#define STCU2_LBESW_LBESW15_WIDTH                (1U)
#define STCU2_LBESW_LBESW15(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW15_SHIFT)) & STCU2_LBESW_LBESW15_MASK)

#define STCU2_LBESW_LBESW16_MASK                 (0x10000U)
#define STCU2_LBESW_LBESW16_SHIFT                (16U)
#define STCU2_LBESW_LBESW16_WIDTH                (1U)
#define STCU2_LBESW_LBESW16(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW16_SHIFT)) & STCU2_LBESW_LBESW16_MASK)

#define STCU2_LBESW_LBESW17_MASK                 (0x20000U)
#define STCU2_LBESW_LBESW17_SHIFT                (17U)
#define STCU2_LBESW_LBESW17_WIDTH                (1U)
#define STCU2_LBESW_LBESW17(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW17_SHIFT)) & STCU2_LBESW_LBESW17_MASK)

#define STCU2_LBESW_LBESW18_MASK                 (0x40000U)
#define STCU2_LBESW_LBESW18_SHIFT                (18U)
#define STCU2_LBESW_LBESW18_WIDTH                (1U)
#define STCU2_LBESW_LBESW18(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW18_SHIFT)) & STCU2_LBESW_LBESW18_MASK)

#define STCU2_LBESW_LBESW19_MASK                 (0x80000U)
#define STCU2_LBESW_LBESW19_SHIFT                (19U)
#define STCU2_LBESW_LBESW19_WIDTH                (1U)
#define STCU2_LBESW_LBESW19(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW19_SHIFT)) & STCU2_LBESW_LBESW19_MASK)

#define STCU2_LBESW_LBESW20_MASK                 (0x100000U)
#define STCU2_LBESW_LBESW20_SHIFT                (20U)
#define STCU2_LBESW_LBESW20_WIDTH                (1U)
#define STCU2_LBESW_LBESW20(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW20_SHIFT)) & STCU2_LBESW_LBESW20_MASK)

#define STCU2_LBESW_LBESW21_MASK                 (0x200000U)
#define STCU2_LBESW_LBESW21_SHIFT                (21U)
#define STCU2_LBESW_LBESW21_WIDTH                (1U)
#define STCU2_LBESW_LBESW21(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW21_SHIFT)) & STCU2_LBESW_LBESW21_MASK)

#define STCU2_LBESW_LBESW22_MASK                 (0x400000U)
#define STCU2_LBESW_LBESW22_SHIFT                (22U)
#define STCU2_LBESW_LBESW22_WIDTH                (1U)
#define STCU2_LBESW_LBESW22(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW22_SHIFT)) & STCU2_LBESW_LBESW22_MASK)

#define STCU2_LBESW_LBESW23_MASK                 (0x800000U)
#define STCU2_LBESW_LBESW23_SHIFT                (23U)
#define STCU2_LBESW_LBESW23_WIDTH                (1U)
#define STCU2_LBESW_LBESW23(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW23_SHIFT)) & STCU2_LBESW_LBESW23_MASK)

#define STCU2_LBESW_LBESW24_MASK                 (0x1000000U)
#define STCU2_LBESW_LBESW24_SHIFT                (24U)
#define STCU2_LBESW_LBESW24_WIDTH                (1U)
#define STCU2_LBESW_LBESW24(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW24_SHIFT)) & STCU2_LBESW_LBESW24_MASK)

#define STCU2_LBESW_LBESW25_MASK                 (0x2000000U)
#define STCU2_LBESW_LBESW25_SHIFT                (25U)
#define STCU2_LBESW_LBESW25_WIDTH                (1U)
#define STCU2_LBESW_LBESW25(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW25_SHIFT)) & STCU2_LBESW_LBESW25_MASK)

#define STCU2_LBESW_LBESW26_MASK                 (0x4000000U)
#define STCU2_LBESW_LBESW26_SHIFT                (26U)
#define STCU2_LBESW_LBESW26_WIDTH                (1U)
#define STCU2_LBESW_LBESW26(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW26_SHIFT)) & STCU2_LBESW_LBESW26_MASK)

#define STCU2_LBESW_LBESW27_MASK                 (0x8000000U)
#define STCU2_LBESW_LBESW27_SHIFT                (27U)
#define STCU2_LBESW_LBESW27_WIDTH                (1U)
#define STCU2_LBESW_LBESW27(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW27_SHIFT)) & STCU2_LBESW_LBESW27_MASK)

#define STCU2_LBESW_LBESW28_MASK                 (0x10000000U)
#define STCU2_LBESW_LBESW28_SHIFT                (28U)
#define STCU2_LBESW_LBESW28_WIDTH                (1U)
#define STCU2_LBESW_LBESW28(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW28_SHIFT)) & STCU2_LBESW_LBESW28_MASK)

#define STCU2_LBESW_LBESW29_MASK                 (0x20000000U)
#define STCU2_LBESW_LBESW29_SHIFT                (29U)
#define STCU2_LBESW_LBESW29_WIDTH                (1U)
#define STCU2_LBESW_LBESW29(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW29_SHIFT)) & STCU2_LBESW_LBESW29_MASK)

#define STCU2_LBESW_LBESW30_MASK                 (0x40000000U)
#define STCU2_LBESW_LBESW30_SHIFT                (30U)
#define STCU2_LBESW_LBESW30_WIDTH                (1U)
#define STCU2_LBESW_LBESW30(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW30_SHIFT)) & STCU2_LBESW_LBESW30_MASK)

#define STCU2_LBESW_LBESW31_MASK                 (0x80000000U)
#define STCU2_LBESW_LBESW31_SHIFT                (31U)
#define STCU2_LBESW_LBESW31_WIDTH                (1U)
#define STCU2_LBESW_LBESW31(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW_LBESW31_SHIFT)) & STCU2_LBESW_LBESW31_MASK)
/*! @} */

/*! @name LBESW1 - STCU2 Online LBIST End Flag */
/*! @{ */

#define STCU2_LBESW1_LBESW32_MASK                (0x1U)
#define STCU2_LBESW1_LBESW32_SHIFT               (0U)
#define STCU2_LBESW1_LBESW32_WIDTH               (1U)
#define STCU2_LBESW1_LBESW32(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW32_SHIFT)) & STCU2_LBESW1_LBESW32_MASK)

#define STCU2_LBESW1_LBESW33_MASK                (0x2U)
#define STCU2_LBESW1_LBESW33_SHIFT               (1U)
#define STCU2_LBESW1_LBESW33_WIDTH               (1U)
#define STCU2_LBESW1_LBESW33(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW33_SHIFT)) & STCU2_LBESW1_LBESW33_MASK)

#define STCU2_LBESW1_LBESW34_MASK                (0x4U)
#define STCU2_LBESW1_LBESW34_SHIFT               (2U)
#define STCU2_LBESW1_LBESW34_WIDTH               (1U)
#define STCU2_LBESW1_LBESW34(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW34_SHIFT)) & STCU2_LBESW1_LBESW34_MASK)

#define STCU2_LBESW1_LBESW35_MASK                (0x8U)
#define STCU2_LBESW1_LBESW35_SHIFT               (3U)
#define STCU2_LBESW1_LBESW35_WIDTH               (1U)
#define STCU2_LBESW1_LBESW35(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW35_SHIFT)) & STCU2_LBESW1_LBESW35_MASK)

#define STCU2_LBESW1_LBESW36_MASK                (0x10U)
#define STCU2_LBESW1_LBESW36_SHIFT               (4U)
#define STCU2_LBESW1_LBESW36_WIDTH               (1U)
#define STCU2_LBESW1_LBESW36(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW36_SHIFT)) & STCU2_LBESW1_LBESW36_MASK)

#define STCU2_LBESW1_LBESW37_MASK                (0x20U)
#define STCU2_LBESW1_LBESW37_SHIFT               (5U)
#define STCU2_LBESW1_LBESW37_WIDTH               (1U)
#define STCU2_LBESW1_LBESW37(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW37_SHIFT)) & STCU2_LBESW1_LBESW37_MASK)

#define STCU2_LBESW1_LBESW38_MASK                (0x40U)
#define STCU2_LBESW1_LBESW38_SHIFT               (6U)
#define STCU2_LBESW1_LBESW38_WIDTH               (1U)
#define STCU2_LBESW1_LBESW38(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW38_SHIFT)) & STCU2_LBESW1_LBESW38_MASK)

#define STCU2_LBESW1_LBESW39_MASK                (0x80U)
#define STCU2_LBESW1_LBESW39_SHIFT               (7U)
#define STCU2_LBESW1_LBESW39_WIDTH               (1U)
#define STCU2_LBESW1_LBESW39(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW39_SHIFT)) & STCU2_LBESW1_LBESW39_MASK)

#define STCU2_LBESW1_LBESW40_MASK                (0x100U)
#define STCU2_LBESW1_LBESW40_SHIFT               (8U)
#define STCU2_LBESW1_LBESW40_WIDTH               (1U)
#define STCU2_LBESW1_LBESW40(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW40_SHIFT)) & STCU2_LBESW1_LBESW40_MASK)

#define STCU2_LBESW1_LBESW41_MASK                (0x200U)
#define STCU2_LBESW1_LBESW41_SHIFT               (9U)
#define STCU2_LBESW1_LBESW41_WIDTH               (1U)
#define STCU2_LBESW1_LBESW41(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW41_SHIFT)) & STCU2_LBESW1_LBESW41_MASK)

#define STCU2_LBESW1_LBESW42_MASK                (0x400U)
#define STCU2_LBESW1_LBESW42_SHIFT               (10U)
#define STCU2_LBESW1_LBESW42_WIDTH               (1U)
#define STCU2_LBESW1_LBESW42(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW42_SHIFT)) & STCU2_LBESW1_LBESW42_MASK)

#define STCU2_LBESW1_LBESW43_MASK                (0x800U)
#define STCU2_LBESW1_LBESW43_SHIFT               (11U)
#define STCU2_LBESW1_LBESW43_WIDTH               (1U)
#define STCU2_LBESW1_LBESW43(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW43_SHIFT)) & STCU2_LBESW1_LBESW43_MASK)

#define STCU2_LBESW1_LBESW44_MASK                (0x1000U)
#define STCU2_LBESW1_LBESW44_SHIFT               (12U)
#define STCU2_LBESW1_LBESW44_WIDTH               (1U)
#define STCU2_LBESW1_LBESW44(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW44_SHIFT)) & STCU2_LBESW1_LBESW44_MASK)

#define STCU2_LBESW1_LBESW45_MASK                (0x2000U)
#define STCU2_LBESW1_LBESW45_SHIFT               (13U)
#define STCU2_LBESW1_LBESW45_WIDTH               (1U)
#define STCU2_LBESW1_LBESW45(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW45_SHIFT)) & STCU2_LBESW1_LBESW45_MASK)

#define STCU2_LBESW1_LBESW46_MASK                (0x4000U)
#define STCU2_LBESW1_LBESW46_SHIFT               (14U)
#define STCU2_LBESW1_LBESW46_WIDTH               (1U)
#define STCU2_LBESW1_LBESW46(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW46_SHIFT)) & STCU2_LBESW1_LBESW46_MASK)

#define STCU2_LBESW1_LBESW47_MASK                (0x8000U)
#define STCU2_LBESW1_LBESW47_SHIFT               (15U)
#define STCU2_LBESW1_LBESW47_WIDTH               (1U)
#define STCU2_LBESW1_LBESW47(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW47_SHIFT)) & STCU2_LBESW1_LBESW47_MASK)

#define STCU2_LBESW1_LBESW48_MASK                (0x10000U)
#define STCU2_LBESW1_LBESW48_SHIFT               (16U)
#define STCU2_LBESW1_LBESW48_WIDTH               (1U)
#define STCU2_LBESW1_LBESW48(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW48_SHIFT)) & STCU2_LBESW1_LBESW48_MASK)

#define STCU2_LBESW1_LBESW49_MASK                (0x20000U)
#define STCU2_LBESW1_LBESW49_SHIFT               (17U)
#define STCU2_LBESW1_LBESW49_WIDTH               (1U)
#define STCU2_LBESW1_LBESW49(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW49_SHIFT)) & STCU2_LBESW1_LBESW49_MASK)

#define STCU2_LBESW1_LBESW50_MASK                (0x40000U)
#define STCU2_LBESW1_LBESW50_SHIFT               (18U)
#define STCU2_LBESW1_LBESW50_WIDTH               (1U)
#define STCU2_LBESW1_LBESW50(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW50_SHIFT)) & STCU2_LBESW1_LBESW50_MASK)

#define STCU2_LBESW1_LBESW51_MASK                (0x80000U)
#define STCU2_LBESW1_LBESW51_SHIFT               (19U)
#define STCU2_LBESW1_LBESW51_WIDTH               (1U)
#define STCU2_LBESW1_LBESW51(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW51_SHIFT)) & STCU2_LBESW1_LBESW51_MASK)

#define STCU2_LBESW1_LBESW52_MASK                (0x100000U)
#define STCU2_LBESW1_LBESW52_SHIFT               (20U)
#define STCU2_LBESW1_LBESW52_WIDTH               (1U)
#define STCU2_LBESW1_LBESW52(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW52_SHIFT)) & STCU2_LBESW1_LBESW52_MASK)

#define STCU2_LBESW1_LBESW53_MASK                (0x200000U)
#define STCU2_LBESW1_LBESW53_SHIFT               (21U)
#define STCU2_LBESW1_LBESW53_WIDTH               (1U)
#define STCU2_LBESW1_LBESW53(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW53_SHIFT)) & STCU2_LBESW1_LBESW53_MASK)

#define STCU2_LBESW1_LBESW54_MASK                (0x400000U)
#define STCU2_LBESW1_LBESW54_SHIFT               (22U)
#define STCU2_LBESW1_LBESW54_WIDTH               (1U)
#define STCU2_LBESW1_LBESW54(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW54_SHIFT)) & STCU2_LBESW1_LBESW54_MASK)

#define STCU2_LBESW1_LBESW55_MASK                (0x800000U)
#define STCU2_LBESW1_LBESW55_SHIFT               (23U)
#define STCU2_LBESW1_LBESW55_WIDTH               (1U)
#define STCU2_LBESW1_LBESW55(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW55_SHIFT)) & STCU2_LBESW1_LBESW55_MASK)

#define STCU2_LBESW1_LBESW56_MASK                (0x1000000U)
#define STCU2_LBESW1_LBESW56_SHIFT               (24U)
#define STCU2_LBESW1_LBESW56_WIDTH               (1U)
#define STCU2_LBESW1_LBESW56(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW56_SHIFT)) & STCU2_LBESW1_LBESW56_MASK)

#define STCU2_LBESW1_LBESW57_MASK                (0x2000000U)
#define STCU2_LBESW1_LBESW57_SHIFT               (25U)
#define STCU2_LBESW1_LBESW57_WIDTH               (1U)
#define STCU2_LBESW1_LBESW57(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW57_SHIFT)) & STCU2_LBESW1_LBESW57_MASK)

#define STCU2_LBESW1_LBESW58_MASK                (0x4000000U)
#define STCU2_LBESW1_LBESW58_SHIFT               (26U)
#define STCU2_LBESW1_LBESW58_WIDTH               (1U)
#define STCU2_LBESW1_LBESW58(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW58_SHIFT)) & STCU2_LBESW1_LBESW58_MASK)

#define STCU2_LBESW1_LBESW59_MASK                (0x8000000U)
#define STCU2_LBESW1_LBESW59_SHIFT               (27U)
#define STCU2_LBESW1_LBESW59_WIDTH               (1U)
#define STCU2_LBESW1_LBESW59(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBESW1_LBESW59_SHIFT)) & STCU2_LBESW1_LBESW59_MASK)
/*! @} */

/*! @name LBUFM - STCU2 Online LBIST Unrecoverable FM */
/*! @{ */

#define STCU2_LBUFM_LBUFM0_MASK                  (0x1U)
#define STCU2_LBUFM_LBUFM0_SHIFT                 (0U)
#define STCU2_LBUFM_LBUFM0_WIDTH                 (1U)
#define STCU2_LBUFM_LBUFM0(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM0_SHIFT)) & STCU2_LBUFM_LBUFM0_MASK)

#define STCU2_LBUFM_LBUFM1_MASK                  (0x2U)
#define STCU2_LBUFM_LBUFM1_SHIFT                 (1U)
#define STCU2_LBUFM_LBUFM1_WIDTH                 (1U)
#define STCU2_LBUFM_LBUFM1(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM1_SHIFT)) & STCU2_LBUFM_LBUFM1_MASK)

#define STCU2_LBUFM_LBUFM2_MASK                  (0x4U)
#define STCU2_LBUFM_LBUFM2_SHIFT                 (2U)
#define STCU2_LBUFM_LBUFM2_WIDTH                 (1U)
#define STCU2_LBUFM_LBUFM2(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM2_SHIFT)) & STCU2_LBUFM_LBUFM2_MASK)

#define STCU2_LBUFM_LBUFM3_MASK                  (0x8U)
#define STCU2_LBUFM_LBUFM3_SHIFT                 (3U)
#define STCU2_LBUFM_LBUFM3_WIDTH                 (1U)
#define STCU2_LBUFM_LBUFM3(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM3_SHIFT)) & STCU2_LBUFM_LBUFM3_MASK)

#define STCU2_LBUFM_LBUFM4_MASK                  (0x10U)
#define STCU2_LBUFM_LBUFM4_SHIFT                 (4U)
#define STCU2_LBUFM_LBUFM4_WIDTH                 (1U)
#define STCU2_LBUFM_LBUFM4(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM4_SHIFT)) & STCU2_LBUFM_LBUFM4_MASK)

#define STCU2_LBUFM_LBUFM5_MASK                  (0x20U)
#define STCU2_LBUFM_LBUFM5_SHIFT                 (5U)
#define STCU2_LBUFM_LBUFM5_WIDTH                 (1U)
#define STCU2_LBUFM_LBUFM5(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM5_SHIFT)) & STCU2_LBUFM_LBUFM5_MASK)

#define STCU2_LBUFM_LBUFM6_MASK                  (0x40U)
#define STCU2_LBUFM_LBUFM6_SHIFT                 (6U)
#define STCU2_LBUFM_LBUFM6_WIDTH                 (1U)
#define STCU2_LBUFM_LBUFM6(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM6_SHIFT)) & STCU2_LBUFM_LBUFM6_MASK)

#define STCU2_LBUFM_LBUFM7_MASK                  (0x80U)
#define STCU2_LBUFM_LBUFM7_SHIFT                 (7U)
#define STCU2_LBUFM_LBUFM7_WIDTH                 (1U)
#define STCU2_LBUFM_LBUFM7(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM7_SHIFT)) & STCU2_LBUFM_LBUFM7_MASK)

#define STCU2_LBUFM_LBUFM8_MASK                  (0x100U)
#define STCU2_LBUFM_LBUFM8_SHIFT                 (8U)
#define STCU2_LBUFM_LBUFM8_WIDTH                 (1U)
#define STCU2_LBUFM_LBUFM8(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM8_SHIFT)) & STCU2_LBUFM_LBUFM8_MASK)

#define STCU2_LBUFM_LBUFM9_MASK                  (0x200U)
#define STCU2_LBUFM_LBUFM9_SHIFT                 (9U)
#define STCU2_LBUFM_LBUFM9_WIDTH                 (1U)
#define STCU2_LBUFM_LBUFM9(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM9_SHIFT)) & STCU2_LBUFM_LBUFM9_MASK)

#define STCU2_LBUFM_LBUFM10_MASK                 (0x400U)
#define STCU2_LBUFM_LBUFM10_SHIFT                (10U)
#define STCU2_LBUFM_LBUFM10_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM10(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM10_SHIFT)) & STCU2_LBUFM_LBUFM10_MASK)

#define STCU2_LBUFM_LBUFM11_MASK                 (0x800U)
#define STCU2_LBUFM_LBUFM11_SHIFT                (11U)
#define STCU2_LBUFM_LBUFM11_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM11(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM11_SHIFT)) & STCU2_LBUFM_LBUFM11_MASK)

#define STCU2_LBUFM_LBUFM12_MASK                 (0x1000U)
#define STCU2_LBUFM_LBUFM12_SHIFT                (12U)
#define STCU2_LBUFM_LBUFM12_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM12(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM12_SHIFT)) & STCU2_LBUFM_LBUFM12_MASK)

#define STCU2_LBUFM_LBUFM13_MASK                 (0x2000U)
#define STCU2_LBUFM_LBUFM13_SHIFT                (13U)
#define STCU2_LBUFM_LBUFM13_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM13(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM13_SHIFT)) & STCU2_LBUFM_LBUFM13_MASK)

#define STCU2_LBUFM_LBUFM14_MASK                 (0x4000U)
#define STCU2_LBUFM_LBUFM14_SHIFT                (14U)
#define STCU2_LBUFM_LBUFM14_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM14(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM14_SHIFT)) & STCU2_LBUFM_LBUFM14_MASK)

#define STCU2_LBUFM_LBUFM15_MASK                 (0x8000U)
#define STCU2_LBUFM_LBUFM15_SHIFT                (15U)
#define STCU2_LBUFM_LBUFM15_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM15(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM15_SHIFT)) & STCU2_LBUFM_LBUFM15_MASK)

#define STCU2_LBUFM_LBUFM16_MASK                 (0x10000U)
#define STCU2_LBUFM_LBUFM16_SHIFT                (16U)
#define STCU2_LBUFM_LBUFM16_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM16(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM16_SHIFT)) & STCU2_LBUFM_LBUFM16_MASK)

#define STCU2_LBUFM_LBUFM17_MASK                 (0x20000U)
#define STCU2_LBUFM_LBUFM17_SHIFT                (17U)
#define STCU2_LBUFM_LBUFM17_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM17(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM17_SHIFT)) & STCU2_LBUFM_LBUFM17_MASK)

#define STCU2_LBUFM_LBUFM18_MASK                 (0x40000U)
#define STCU2_LBUFM_LBUFM18_SHIFT                (18U)
#define STCU2_LBUFM_LBUFM18_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM18(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM18_SHIFT)) & STCU2_LBUFM_LBUFM18_MASK)

#define STCU2_LBUFM_LBUFM19_MASK                 (0x80000U)
#define STCU2_LBUFM_LBUFM19_SHIFT                (19U)
#define STCU2_LBUFM_LBUFM19_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM19(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM19_SHIFT)) & STCU2_LBUFM_LBUFM19_MASK)

#define STCU2_LBUFM_LBUFM20_MASK                 (0x100000U)
#define STCU2_LBUFM_LBUFM20_SHIFT                (20U)
#define STCU2_LBUFM_LBUFM20_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM20(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM20_SHIFT)) & STCU2_LBUFM_LBUFM20_MASK)

#define STCU2_LBUFM_LBUFM21_MASK                 (0x200000U)
#define STCU2_LBUFM_LBUFM21_SHIFT                (21U)
#define STCU2_LBUFM_LBUFM21_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM21(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM21_SHIFT)) & STCU2_LBUFM_LBUFM21_MASK)

#define STCU2_LBUFM_LBUFM22_MASK                 (0x400000U)
#define STCU2_LBUFM_LBUFM22_SHIFT                (22U)
#define STCU2_LBUFM_LBUFM22_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM22(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM22_SHIFT)) & STCU2_LBUFM_LBUFM22_MASK)

#define STCU2_LBUFM_LBUFM23_MASK                 (0x800000U)
#define STCU2_LBUFM_LBUFM23_SHIFT                (23U)
#define STCU2_LBUFM_LBUFM23_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM23(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM23_SHIFT)) & STCU2_LBUFM_LBUFM23_MASK)

#define STCU2_LBUFM_LBUFM24_MASK                 (0x1000000U)
#define STCU2_LBUFM_LBUFM24_SHIFT                (24U)
#define STCU2_LBUFM_LBUFM24_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM24(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM24_SHIFT)) & STCU2_LBUFM_LBUFM24_MASK)

#define STCU2_LBUFM_LBUFM25_MASK                 (0x2000000U)
#define STCU2_LBUFM_LBUFM25_SHIFT                (25U)
#define STCU2_LBUFM_LBUFM25_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM25(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM25_SHIFT)) & STCU2_LBUFM_LBUFM25_MASK)

#define STCU2_LBUFM_LBUFM26_MASK                 (0x4000000U)
#define STCU2_LBUFM_LBUFM26_SHIFT                (26U)
#define STCU2_LBUFM_LBUFM26_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM26(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM26_SHIFT)) & STCU2_LBUFM_LBUFM26_MASK)

#define STCU2_LBUFM_LBUFM27_MASK                 (0x8000000U)
#define STCU2_LBUFM_LBUFM27_SHIFT                (27U)
#define STCU2_LBUFM_LBUFM27_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM27(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM27_SHIFT)) & STCU2_LBUFM_LBUFM27_MASK)

#define STCU2_LBUFM_LBUFM28_MASK                 (0x10000000U)
#define STCU2_LBUFM_LBUFM28_SHIFT                (28U)
#define STCU2_LBUFM_LBUFM28_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM28(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM28_SHIFT)) & STCU2_LBUFM_LBUFM28_MASK)

#define STCU2_LBUFM_LBUFM29_MASK                 (0x20000000U)
#define STCU2_LBUFM_LBUFM29_SHIFT                (29U)
#define STCU2_LBUFM_LBUFM29_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM29(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM29_SHIFT)) & STCU2_LBUFM_LBUFM29_MASK)

#define STCU2_LBUFM_LBUFM30_MASK                 (0x40000000U)
#define STCU2_LBUFM_LBUFM30_SHIFT                (30U)
#define STCU2_LBUFM_LBUFM30_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM30(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM30_SHIFT)) & STCU2_LBUFM_LBUFM30_MASK)

#define STCU2_LBUFM_LBUFM31_MASK                 (0x80000000U)
#define STCU2_LBUFM_LBUFM31_SHIFT                (31U)
#define STCU2_LBUFM_LBUFM31_WIDTH                (1U)
#define STCU2_LBUFM_LBUFM31(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM_LBUFM31_SHIFT)) & STCU2_LBUFM_LBUFM31_MASK)
/*! @} */

/*! @name LBUFM1 - STCU2 Online LBIST Unrecoverable FM */
/*! @{ */

#define STCU2_LBUFM1_LBUFM32_MASK                (0x1U)
#define STCU2_LBUFM1_LBUFM32_SHIFT               (0U)
#define STCU2_LBUFM1_LBUFM32_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM32(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM32_SHIFT)) & STCU2_LBUFM1_LBUFM32_MASK)

#define STCU2_LBUFM1_LBUFM33_MASK                (0x2U)
#define STCU2_LBUFM1_LBUFM33_SHIFT               (1U)
#define STCU2_LBUFM1_LBUFM33_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM33(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM33_SHIFT)) & STCU2_LBUFM1_LBUFM33_MASK)

#define STCU2_LBUFM1_LBUFM34_MASK                (0x4U)
#define STCU2_LBUFM1_LBUFM34_SHIFT               (2U)
#define STCU2_LBUFM1_LBUFM34_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM34(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM34_SHIFT)) & STCU2_LBUFM1_LBUFM34_MASK)

#define STCU2_LBUFM1_LBUFM35_MASK                (0x8U)
#define STCU2_LBUFM1_LBUFM35_SHIFT               (3U)
#define STCU2_LBUFM1_LBUFM35_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM35(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM35_SHIFT)) & STCU2_LBUFM1_LBUFM35_MASK)

#define STCU2_LBUFM1_LBUFM36_MASK                (0x10U)
#define STCU2_LBUFM1_LBUFM36_SHIFT               (4U)
#define STCU2_LBUFM1_LBUFM36_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM36(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM36_SHIFT)) & STCU2_LBUFM1_LBUFM36_MASK)

#define STCU2_LBUFM1_LBUFM37_MASK                (0x20U)
#define STCU2_LBUFM1_LBUFM37_SHIFT               (5U)
#define STCU2_LBUFM1_LBUFM37_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM37(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM37_SHIFT)) & STCU2_LBUFM1_LBUFM37_MASK)

#define STCU2_LBUFM1_LBUFM38_MASK                (0x40U)
#define STCU2_LBUFM1_LBUFM38_SHIFT               (6U)
#define STCU2_LBUFM1_LBUFM38_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM38(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM38_SHIFT)) & STCU2_LBUFM1_LBUFM38_MASK)

#define STCU2_LBUFM1_LBUFM39_MASK                (0x80U)
#define STCU2_LBUFM1_LBUFM39_SHIFT               (7U)
#define STCU2_LBUFM1_LBUFM39_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM39(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM39_SHIFT)) & STCU2_LBUFM1_LBUFM39_MASK)

#define STCU2_LBUFM1_LBUFM40_MASK                (0x100U)
#define STCU2_LBUFM1_LBUFM40_SHIFT               (8U)
#define STCU2_LBUFM1_LBUFM40_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM40(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM40_SHIFT)) & STCU2_LBUFM1_LBUFM40_MASK)

#define STCU2_LBUFM1_LBUFM41_MASK                (0x200U)
#define STCU2_LBUFM1_LBUFM41_SHIFT               (9U)
#define STCU2_LBUFM1_LBUFM41_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM41(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM41_SHIFT)) & STCU2_LBUFM1_LBUFM41_MASK)

#define STCU2_LBUFM1_LBUFM42_MASK                (0x400U)
#define STCU2_LBUFM1_LBUFM42_SHIFT               (10U)
#define STCU2_LBUFM1_LBUFM42_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM42(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM42_SHIFT)) & STCU2_LBUFM1_LBUFM42_MASK)

#define STCU2_LBUFM1_LBUFM43_MASK                (0x800U)
#define STCU2_LBUFM1_LBUFM43_SHIFT               (11U)
#define STCU2_LBUFM1_LBUFM43_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM43(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM43_SHIFT)) & STCU2_LBUFM1_LBUFM43_MASK)

#define STCU2_LBUFM1_LBUFM44_MASK                (0x1000U)
#define STCU2_LBUFM1_LBUFM44_SHIFT               (12U)
#define STCU2_LBUFM1_LBUFM44_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM44(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM44_SHIFT)) & STCU2_LBUFM1_LBUFM44_MASK)

#define STCU2_LBUFM1_LBUFM45_MASK                (0x2000U)
#define STCU2_LBUFM1_LBUFM45_SHIFT               (13U)
#define STCU2_LBUFM1_LBUFM45_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM45(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM45_SHIFT)) & STCU2_LBUFM1_LBUFM45_MASK)

#define STCU2_LBUFM1_LBUFM46_MASK                (0x4000U)
#define STCU2_LBUFM1_LBUFM46_SHIFT               (14U)
#define STCU2_LBUFM1_LBUFM46_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM46(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM46_SHIFT)) & STCU2_LBUFM1_LBUFM46_MASK)

#define STCU2_LBUFM1_LBUFM47_MASK                (0x8000U)
#define STCU2_LBUFM1_LBUFM47_SHIFT               (15U)
#define STCU2_LBUFM1_LBUFM47_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM47(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM47_SHIFT)) & STCU2_LBUFM1_LBUFM47_MASK)

#define STCU2_LBUFM1_LBUFM48_MASK                (0x10000U)
#define STCU2_LBUFM1_LBUFM48_SHIFT               (16U)
#define STCU2_LBUFM1_LBUFM48_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM48(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM48_SHIFT)) & STCU2_LBUFM1_LBUFM48_MASK)

#define STCU2_LBUFM1_LBUFM49_MASK                (0x20000U)
#define STCU2_LBUFM1_LBUFM49_SHIFT               (17U)
#define STCU2_LBUFM1_LBUFM49_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM49(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM49_SHIFT)) & STCU2_LBUFM1_LBUFM49_MASK)

#define STCU2_LBUFM1_LBUFM50_MASK                (0x40000U)
#define STCU2_LBUFM1_LBUFM50_SHIFT               (18U)
#define STCU2_LBUFM1_LBUFM50_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM50(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM50_SHIFT)) & STCU2_LBUFM1_LBUFM50_MASK)

#define STCU2_LBUFM1_LBUFM51_MASK                (0x80000U)
#define STCU2_LBUFM1_LBUFM51_SHIFT               (19U)
#define STCU2_LBUFM1_LBUFM51_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM51(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM51_SHIFT)) & STCU2_LBUFM1_LBUFM51_MASK)

#define STCU2_LBUFM1_LBUFM52_MASK                (0x100000U)
#define STCU2_LBUFM1_LBUFM52_SHIFT               (20U)
#define STCU2_LBUFM1_LBUFM52_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM52(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM52_SHIFT)) & STCU2_LBUFM1_LBUFM52_MASK)

#define STCU2_LBUFM1_LBUFM53_MASK                (0x200000U)
#define STCU2_LBUFM1_LBUFM53_SHIFT               (21U)
#define STCU2_LBUFM1_LBUFM53_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM53(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM53_SHIFT)) & STCU2_LBUFM1_LBUFM53_MASK)

#define STCU2_LBUFM1_LBUFM54_MASK                (0x400000U)
#define STCU2_LBUFM1_LBUFM54_SHIFT               (22U)
#define STCU2_LBUFM1_LBUFM54_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM54(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM54_SHIFT)) & STCU2_LBUFM1_LBUFM54_MASK)

#define STCU2_LBUFM1_LBUFM55_MASK                (0x800000U)
#define STCU2_LBUFM1_LBUFM55_SHIFT               (23U)
#define STCU2_LBUFM1_LBUFM55_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM55(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM55_SHIFT)) & STCU2_LBUFM1_LBUFM55_MASK)

#define STCU2_LBUFM1_LBUFM56_MASK                (0x1000000U)
#define STCU2_LBUFM1_LBUFM56_SHIFT               (24U)
#define STCU2_LBUFM1_LBUFM56_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM56(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM56_SHIFT)) & STCU2_LBUFM1_LBUFM56_MASK)

#define STCU2_LBUFM1_LBUFM57_MASK                (0x2000000U)
#define STCU2_LBUFM1_LBUFM57_SHIFT               (25U)
#define STCU2_LBUFM1_LBUFM57_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM57(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM57_SHIFT)) & STCU2_LBUFM1_LBUFM57_MASK)

#define STCU2_LBUFM1_LBUFM58_MASK                (0x4000000U)
#define STCU2_LBUFM1_LBUFM58_SHIFT               (26U)
#define STCU2_LBUFM1_LBUFM58_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM58(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM58_SHIFT)) & STCU2_LBUFM1_LBUFM58_MASK)

#define STCU2_LBUFM1_LBUFM59_MASK                (0x8000000U)
#define STCU2_LBUFM1_LBUFM59_SHIFT               (27U)
#define STCU2_LBUFM1_LBUFM59_WIDTH               (1U)
#define STCU2_LBUFM1_LBUFM59(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_LBUFM1_LBUFM59_SHIFT)) & STCU2_LBUFM1_LBUFM59_MASK)
/*! @} */

/*! @name MBSSW - STCU2 Online MBIST Status */
/*! @{ */

#define STCU2_MBSSW_MBSSW0_MASK                  (0x1U)
#define STCU2_MBSSW_MBSSW0_SHIFT                 (0U)
#define STCU2_MBSSW_MBSSW0_WIDTH                 (1U)
#define STCU2_MBSSW_MBSSW0(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW0_SHIFT)) & STCU2_MBSSW_MBSSW0_MASK)

#define STCU2_MBSSW_MBSSW1_MASK                  (0x2U)
#define STCU2_MBSSW_MBSSW1_SHIFT                 (1U)
#define STCU2_MBSSW_MBSSW1_WIDTH                 (1U)
#define STCU2_MBSSW_MBSSW1(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW1_SHIFT)) & STCU2_MBSSW_MBSSW1_MASK)

#define STCU2_MBSSW_MBSSW2_MASK                  (0x4U)
#define STCU2_MBSSW_MBSSW2_SHIFT                 (2U)
#define STCU2_MBSSW_MBSSW2_WIDTH                 (1U)
#define STCU2_MBSSW_MBSSW2(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW2_SHIFT)) & STCU2_MBSSW_MBSSW2_MASK)

#define STCU2_MBSSW_MBSSW3_MASK                  (0x8U)
#define STCU2_MBSSW_MBSSW3_SHIFT                 (3U)
#define STCU2_MBSSW_MBSSW3_WIDTH                 (1U)
#define STCU2_MBSSW_MBSSW3(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW3_SHIFT)) & STCU2_MBSSW_MBSSW3_MASK)

#define STCU2_MBSSW_MBSSW4_MASK                  (0x10U)
#define STCU2_MBSSW_MBSSW4_SHIFT                 (4U)
#define STCU2_MBSSW_MBSSW4_WIDTH                 (1U)
#define STCU2_MBSSW_MBSSW4(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW4_SHIFT)) & STCU2_MBSSW_MBSSW4_MASK)

#define STCU2_MBSSW_MBSSW5_MASK                  (0x20U)
#define STCU2_MBSSW_MBSSW5_SHIFT                 (5U)
#define STCU2_MBSSW_MBSSW5_WIDTH                 (1U)
#define STCU2_MBSSW_MBSSW5(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW5_SHIFT)) & STCU2_MBSSW_MBSSW5_MASK)

#define STCU2_MBSSW_MBSSW6_MASK                  (0x40U)
#define STCU2_MBSSW_MBSSW6_SHIFT                 (6U)
#define STCU2_MBSSW_MBSSW6_WIDTH                 (1U)
#define STCU2_MBSSW_MBSSW6(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW6_SHIFT)) & STCU2_MBSSW_MBSSW6_MASK)

#define STCU2_MBSSW_MBSSW7_MASK                  (0x80U)
#define STCU2_MBSSW_MBSSW7_SHIFT                 (7U)
#define STCU2_MBSSW_MBSSW7_WIDTH                 (1U)
#define STCU2_MBSSW_MBSSW7(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW7_SHIFT)) & STCU2_MBSSW_MBSSW7_MASK)

#define STCU2_MBSSW_MBSSW8_MASK                  (0x100U)
#define STCU2_MBSSW_MBSSW8_SHIFT                 (8U)
#define STCU2_MBSSW_MBSSW8_WIDTH                 (1U)
#define STCU2_MBSSW_MBSSW8(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW8_SHIFT)) & STCU2_MBSSW_MBSSW8_MASK)

#define STCU2_MBSSW_MBSSW9_MASK                  (0x200U)
#define STCU2_MBSSW_MBSSW9_SHIFT                 (9U)
#define STCU2_MBSSW_MBSSW9_WIDTH                 (1U)
#define STCU2_MBSSW_MBSSW9(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW9_SHIFT)) & STCU2_MBSSW_MBSSW9_MASK)

#define STCU2_MBSSW_MBSSW10_MASK                 (0x400U)
#define STCU2_MBSSW_MBSSW10_SHIFT                (10U)
#define STCU2_MBSSW_MBSSW10_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW10(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW10_SHIFT)) & STCU2_MBSSW_MBSSW10_MASK)

#define STCU2_MBSSW_MBSSW11_MASK                 (0x800U)
#define STCU2_MBSSW_MBSSW11_SHIFT                (11U)
#define STCU2_MBSSW_MBSSW11_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW11(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW11_SHIFT)) & STCU2_MBSSW_MBSSW11_MASK)

#define STCU2_MBSSW_MBSSW12_MASK                 (0x1000U)
#define STCU2_MBSSW_MBSSW12_SHIFT                (12U)
#define STCU2_MBSSW_MBSSW12_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW12(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW12_SHIFT)) & STCU2_MBSSW_MBSSW12_MASK)

#define STCU2_MBSSW_MBSSW13_MASK                 (0x2000U)
#define STCU2_MBSSW_MBSSW13_SHIFT                (13U)
#define STCU2_MBSSW_MBSSW13_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW13(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW13_SHIFT)) & STCU2_MBSSW_MBSSW13_MASK)

#define STCU2_MBSSW_MBSSW14_MASK                 (0x4000U)
#define STCU2_MBSSW_MBSSW14_SHIFT                (14U)
#define STCU2_MBSSW_MBSSW14_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW14(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW14_SHIFT)) & STCU2_MBSSW_MBSSW14_MASK)

#define STCU2_MBSSW_MBSSW15_MASK                 (0x8000U)
#define STCU2_MBSSW_MBSSW15_SHIFT                (15U)
#define STCU2_MBSSW_MBSSW15_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW15(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW15_SHIFT)) & STCU2_MBSSW_MBSSW15_MASK)

#define STCU2_MBSSW_MBSSW16_MASK                 (0x10000U)
#define STCU2_MBSSW_MBSSW16_SHIFT                (16U)
#define STCU2_MBSSW_MBSSW16_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW16(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW16_SHIFT)) & STCU2_MBSSW_MBSSW16_MASK)

#define STCU2_MBSSW_MBSSW17_MASK                 (0x20000U)
#define STCU2_MBSSW_MBSSW17_SHIFT                (17U)
#define STCU2_MBSSW_MBSSW17_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW17(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW17_SHIFT)) & STCU2_MBSSW_MBSSW17_MASK)

#define STCU2_MBSSW_MBSSW18_MASK                 (0x40000U)
#define STCU2_MBSSW_MBSSW18_SHIFT                (18U)
#define STCU2_MBSSW_MBSSW18_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW18(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW18_SHIFT)) & STCU2_MBSSW_MBSSW18_MASK)

#define STCU2_MBSSW_MBSSW19_MASK                 (0x80000U)
#define STCU2_MBSSW_MBSSW19_SHIFT                (19U)
#define STCU2_MBSSW_MBSSW19_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW19(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW19_SHIFT)) & STCU2_MBSSW_MBSSW19_MASK)

#define STCU2_MBSSW_MBSSW20_MASK                 (0x100000U)
#define STCU2_MBSSW_MBSSW20_SHIFT                (20U)
#define STCU2_MBSSW_MBSSW20_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW20(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW20_SHIFT)) & STCU2_MBSSW_MBSSW20_MASK)

#define STCU2_MBSSW_MBSSW21_MASK                 (0x200000U)
#define STCU2_MBSSW_MBSSW21_SHIFT                (21U)
#define STCU2_MBSSW_MBSSW21_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW21(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW21_SHIFT)) & STCU2_MBSSW_MBSSW21_MASK)

#define STCU2_MBSSW_MBSSW22_MASK                 (0x400000U)
#define STCU2_MBSSW_MBSSW22_SHIFT                (22U)
#define STCU2_MBSSW_MBSSW22_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW22(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW22_SHIFT)) & STCU2_MBSSW_MBSSW22_MASK)

#define STCU2_MBSSW_MBSSW23_MASK                 (0x800000U)
#define STCU2_MBSSW_MBSSW23_SHIFT                (23U)
#define STCU2_MBSSW_MBSSW23_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW23(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW23_SHIFT)) & STCU2_MBSSW_MBSSW23_MASK)

#define STCU2_MBSSW_MBSSW24_MASK                 (0x1000000U)
#define STCU2_MBSSW_MBSSW24_SHIFT                (24U)
#define STCU2_MBSSW_MBSSW24_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW24(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW24_SHIFT)) & STCU2_MBSSW_MBSSW24_MASK)

#define STCU2_MBSSW_MBSSW25_MASK                 (0x2000000U)
#define STCU2_MBSSW_MBSSW25_SHIFT                (25U)
#define STCU2_MBSSW_MBSSW25_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW25(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW25_SHIFT)) & STCU2_MBSSW_MBSSW25_MASK)

#define STCU2_MBSSW_MBSSW26_MASK                 (0x4000000U)
#define STCU2_MBSSW_MBSSW26_SHIFT                (26U)
#define STCU2_MBSSW_MBSSW26_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW26(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW26_SHIFT)) & STCU2_MBSSW_MBSSW26_MASK)

#define STCU2_MBSSW_MBSSW27_MASK                 (0x8000000U)
#define STCU2_MBSSW_MBSSW27_SHIFT                (27U)
#define STCU2_MBSSW_MBSSW27_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW27(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW27_SHIFT)) & STCU2_MBSSW_MBSSW27_MASK)

#define STCU2_MBSSW_MBSSW28_MASK                 (0x10000000U)
#define STCU2_MBSSW_MBSSW28_SHIFT                (28U)
#define STCU2_MBSSW_MBSSW28_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW28(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW28_SHIFT)) & STCU2_MBSSW_MBSSW28_MASK)

#define STCU2_MBSSW_MBSSW29_MASK                 (0x20000000U)
#define STCU2_MBSSW_MBSSW29_SHIFT                (29U)
#define STCU2_MBSSW_MBSSW29_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW29(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW29_SHIFT)) & STCU2_MBSSW_MBSSW29_MASK)

#define STCU2_MBSSW_MBSSW30_MASK                 (0x40000000U)
#define STCU2_MBSSW_MBSSW30_SHIFT                (30U)
#define STCU2_MBSSW_MBSSW30_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW30(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW30_SHIFT)) & STCU2_MBSSW_MBSSW30_MASK)

#define STCU2_MBSSW_MBSSW31_MASK                 (0x80000000U)
#define STCU2_MBSSW_MBSSW31_SHIFT                (31U)
#define STCU2_MBSSW_MBSSW31_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW31(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW31_SHIFT)) & STCU2_MBSSW_MBSSW31_MASK)

#define STCU2_MBSSW_MBSSW32_MASK                 (0x1U)
#define STCU2_MBSSW_MBSSW32_SHIFT                (0U)
#define STCU2_MBSSW_MBSSW32_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW32(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW32_SHIFT)) & STCU2_MBSSW_MBSSW32_MASK)

#define STCU2_MBSSW_MBSSW33_MASK                 (0x2U)
#define STCU2_MBSSW_MBSSW33_SHIFT                (1U)
#define STCU2_MBSSW_MBSSW33_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW33(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW33_SHIFT)) & STCU2_MBSSW_MBSSW33_MASK)

#define STCU2_MBSSW_MBSSW34_MASK                 (0x4U)
#define STCU2_MBSSW_MBSSW34_SHIFT                (2U)
#define STCU2_MBSSW_MBSSW34_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW34(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW34_SHIFT)) & STCU2_MBSSW_MBSSW34_MASK)

#define STCU2_MBSSW_MBSSW35_MASK                 (0x8U)
#define STCU2_MBSSW_MBSSW35_SHIFT                (3U)
#define STCU2_MBSSW_MBSSW35_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW35(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW35_SHIFT)) & STCU2_MBSSW_MBSSW35_MASK)

#define STCU2_MBSSW_MBSSW36_MASK                 (0x10U)
#define STCU2_MBSSW_MBSSW36_SHIFT                (4U)
#define STCU2_MBSSW_MBSSW36_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW36(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW36_SHIFT)) & STCU2_MBSSW_MBSSW36_MASK)

#define STCU2_MBSSW_MBSSW37_MASK                 (0x20U)
#define STCU2_MBSSW_MBSSW37_SHIFT                (5U)
#define STCU2_MBSSW_MBSSW37_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW37(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW37_SHIFT)) & STCU2_MBSSW_MBSSW37_MASK)

#define STCU2_MBSSW_MBSSW38_MASK                 (0x40U)
#define STCU2_MBSSW_MBSSW38_SHIFT                (6U)
#define STCU2_MBSSW_MBSSW38_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW38(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW38_SHIFT)) & STCU2_MBSSW_MBSSW38_MASK)

#define STCU2_MBSSW_MBSSW39_MASK                 (0x80U)
#define STCU2_MBSSW_MBSSW39_SHIFT                (7U)
#define STCU2_MBSSW_MBSSW39_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW39(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW39_SHIFT)) & STCU2_MBSSW_MBSSW39_MASK)

#define STCU2_MBSSW_MBSSW40_MASK                 (0x100U)
#define STCU2_MBSSW_MBSSW40_SHIFT                (8U)
#define STCU2_MBSSW_MBSSW40_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW40(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW40_SHIFT)) & STCU2_MBSSW_MBSSW40_MASK)

#define STCU2_MBSSW_MBSSW41_MASK                 (0x200U)
#define STCU2_MBSSW_MBSSW41_SHIFT                (9U)
#define STCU2_MBSSW_MBSSW41_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW41(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW41_SHIFT)) & STCU2_MBSSW_MBSSW41_MASK)

#define STCU2_MBSSW_MBSSW42_MASK                 (0x400U)
#define STCU2_MBSSW_MBSSW42_SHIFT                (10U)
#define STCU2_MBSSW_MBSSW42_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW42(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW42_SHIFT)) & STCU2_MBSSW_MBSSW42_MASK)

#define STCU2_MBSSW_MBSSW43_MASK                 (0x800U)
#define STCU2_MBSSW_MBSSW43_SHIFT                (11U)
#define STCU2_MBSSW_MBSSW43_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW43(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW43_SHIFT)) & STCU2_MBSSW_MBSSW43_MASK)

#define STCU2_MBSSW_MBSSW44_MASK                 (0x1000U)
#define STCU2_MBSSW_MBSSW44_SHIFT                (12U)
#define STCU2_MBSSW_MBSSW44_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW44(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW44_SHIFT)) & STCU2_MBSSW_MBSSW44_MASK)

#define STCU2_MBSSW_MBSSW45_MASK                 (0x2000U)
#define STCU2_MBSSW_MBSSW45_SHIFT                (13U)
#define STCU2_MBSSW_MBSSW45_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW45(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW45_SHIFT)) & STCU2_MBSSW_MBSSW45_MASK)

#define STCU2_MBSSW_MBSSW46_MASK                 (0x4000U)
#define STCU2_MBSSW_MBSSW46_SHIFT                (14U)
#define STCU2_MBSSW_MBSSW46_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW46(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW46_SHIFT)) & STCU2_MBSSW_MBSSW46_MASK)

#define STCU2_MBSSW_MBSSW47_MASK                 (0x8000U)
#define STCU2_MBSSW_MBSSW47_SHIFT                (15U)
#define STCU2_MBSSW_MBSSW47_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW47(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW47_SHIFT)) & STCU2_MBSSW_MBSSW47_MASK)

#define STCU2_MBSSW_MBSSW48_MASK                 (0x10000U)
#define STCU2_MBSSW_MBSSW48_SHIFT                (16U)
#define STCU2_MBSSW_MBSSW48_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW48(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW48_SHIFT)) & STCU2_MBSSW_MBSSW48_MASK)

#define STCU2_MBSSW_MBSSW49_MASK                 (0x20000U)
#define STCU2_MBSSW_MBSSW49_SHIFT                (17U)
#define STCU2_MBSSW_MBSSW49_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW49(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW49_SHIFT)) & STCU2_MBSSW_MBSSW49_MASK)

#define STCU2_MBSSW_MBSSW50_MASK                 (0x40000U)
#define STCU2_MBSSW_MBSSW50_SHIFT                (18U)
#define STCU2_MBSSW_MBSSW50_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW50(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW50_SHIFT)) & STCU2_MBSSW_MBSSW50_MASK)

#define STCU2_MBSSW_MBSSW51_MASK                 (0x80000U)
#define STCU2_MBSSW_MBSSW51_SHIFT                (19U)
#define STCU2_MBSSW_MBSSW51_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW51(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW51_SHIFT)) & STCU2_MBSSW_MBSSW51_MASK)

#define STCU2_MBSSW_MBSSW52_MASK                 (0x100000U)
#define STCU2_MBSSW_MBSSW52_SHIFT                (20U)
#define STCU2_MBSSW_MBSSW52_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW52(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW52_SHIFT)) & STCU2_MBSSW_MBSSW52_MASK)

#define STCU2_MBSSW_MBSSW53_MASK                 (0x200000U)
#define STCU2_MBSSW_MBSSW53_SHIFT                (21U)
#define STCU2_MBSSW_MBSSW53_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW53(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW53_SHIFT)) & STCU2_MBSSW_MBSSW53_MASK)

#define STCU2_MBSSW_MBSSW54_MASK                 (0x400000U)
#define STCU2_MBSSW_MBSSW54_SHIFT                (22U)
#define STCU2_MBSSW_MBSSW54_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW54(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW54_SHIFT)) & STCU2_MBSSW_MBSSW54_MASK)

#define STCU2_MBSSW_MBSSW55_MASK                 (0x800000U)
#define STCU2_MBSSW_MBSSW55_SHIFT                (23U)
#define STCU2_MBSSW_MBSSW55_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW55(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW55_SHIFT)) & STCU2_MBSSW_MBSSW55_MASK)

#define STCU2_MBSSW_MBSSW56_MASK                 (0x1000000U)
#define STCU2_MBSSW_MBSSW56_SHIFT                (24U)
#define STCU2_MBSSW_MBSSW56_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW56(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW56_SHIFT)) & STCU2_MBSSW_MBSSW56_MASK)

#define STCU2_MBSSW_MBSSW57_MASK                 (0x2000000U)
#define STCU2_MBSSW_MBSSW57_SHIFT                (25U)
#define STCU2_MBSSW_MBSSW57_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW57(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW57_SHIFT)) & STCU2_MBSSW_MBSSW57_MASK)

#define STCU2_MBSSW_MBSSW58_MASK                 (0x4000000U)
#define STCU2_MBSSW_MBSSW58_SHIFT                (26U)
#define STCU2_MBSSW_MBSSW58_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW58(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW58_SHIFT)) & STCU2_MBSSW_MBSSW58_MASK)

#define STCU2_MBSSW_MBSSW59_MASK                 (0x8000000U)
#define STCU2_MBSSW_MBSSW59_SHIFT                (27U)
#define STCU2_MBSSW_MBSSW59_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW59(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW59_SHIFT)) & STCU2_MBSSW_MBSSW59_MASK)

#define STCU2_MBSSW_MBSSW60_MASK                 (0x10000000U)
#define STCU2_MBSSW_MBSSW60_SHIFT                (28U)
#define STCU2_MBSSW_MBSSW60_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW60(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW60_SHIFT)) & STCU2_MBSSW_MBSSW60_MASK)

#define STCU2_MBSSW_MBSSW61_MASK                 (0x20000000U)
#define STCU2_MBSSW_MBSSW61_SHIFT                (29U)
#define STCU2_MBSSW_MBSSW61_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW61(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW61_SHIFT)) & STCU2_MBSSW_MBSSW61_MASK)

#define STCU2_MBSSW_MBSSW62_MASK                 (0x40000000U)
#define STCU2_MBSSW_MBSSW62_SHIFT                (30U)
#define STCU2_MBSSW_MBSSW62_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW62(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW62_SHIFT)) & STCU2_MBSSW_MBSSW62_MASK)

#define STCU2_MBSSW_MBSSW63_MASK                 (0x80000000U)
#define STCU2_MBSSW_MBSSW63_SHIFT                (31U)
#define STCU2_MBSSW_MBSSW63_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW63(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW63_SHIFT)) & STCU2_MBSSW_MBSSW63_MASK)

#define STCU2_MBSSW_MBSSW64_MASK                 (0x1U)
#define STCU2_MBSSW_MBSSW64_SHIFT                (0U)
#define STCU2_MBSSW_MBSSW64_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW64(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW64_SHIFT)) & STCU2_MBSSW_MBSSW64_MASK)

#define STCU2_MBSSW_MBSSW65_MASK                 (0x2U)
#define STCU2_MBSSW_MBSSW65_SHIFT                (1U)
#define STCU2_MBSSW_MBSSW65_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW65(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW65_SHIFT)) & STCU2_MBSSW_MBSSW65_MASK)

#define STCU2_MBSSW_MBSSW66_MASK                 (0x4U)
#define STCU2_MBSSW_MBSSW66_SHIFT                (2U)
#define STCU2_MBSSW_MBSSW66_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW66(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW66_SHIFT)) & STCU2_MBSSW_MBSSW66_MASK)

#define STCU2_MBSSW_MBSSW67_MASK                 (0x8U)
#define STCU2_MBSSW_MBSSW67_SHIFT                (3U)
#define STCU2_MBSSW_MBSSW67_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW67(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW67_SHIFT)) & STCU2_MBSSW_MBSSW67_MASK)

#define STCU2_MBSSW_MBSSW68_MASK                 (0x10U)
#define STCU2_MBSSW_MBSSW68_SHIFT                (4U)
#define STCU2_MBSSW_MBSSW68_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW68(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW68_SHIFT)) & STCU2_MBSSW_MBSSW68_MASK)

#define STCU2_MBSSW_MBSSW69_MASK                 (0x20U)
#define STCU2_MBSSW_MBSSW69_SHIFT                (5U)
#define STCU2_MBSSW_MBSSW69_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW69(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW69_SHIFT)) & STCU2_MBSSW_MBSSW69_MASK)

#define STCU2_MBSSW_MBSSW70_MASK                 (0x40U)
#define STCU2_MBSSW_MBSSW70_SHIFT                (6U)
#define STCU2_MBSSW_MBSSW70_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW70(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW70_SHIFT)) & STCU2_MBSSW_MBSSW70_MASK)

#define STCU2_MBSSW_MBSSW71_MASK                 (0x80U)
#define STCU2_MBSSW_MBSSW71_SHIFT                (7U)
#define STCU2_MBSSW_MBSSW71_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW71(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW71_SHIFT)) & STCU2_MBSSW_MBSSW71_MASK)

#define STCU2_MBSSW_MBSSW72_MASK                 (0x100U)
#define STCU2_MBSSW_MBSSW72_SHIFT                (8U)
#define STCU2_MBSSW_MBSSW72_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW72(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW72_SHIFT)) & STCU2_MBSSW_MBSSW72_MASK)

#define STCU2_MBSSW_MBSSW73_MASK                 (0x200U)
#define STCU2_MBSSW_MBSSW73_SHIFT                (9U)
#define STCU2_MBSSW_MBSSW73_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW73(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW73_SHIFT)) & STCU2_MBSSW_MBSSW73_MASK)

#define STCU2_MBSSW_MBSSW74_MASK                 (0x400U)
#define STCU2_MBSSW_MBSSW74_SHIFT                (10U)
#define STCU2_MBSSW_MBSSW74_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW74(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW74_SHIFT)) & STCU2_MBSSW_MBSSW74_MASK)

#define STCU2_MBSSW_MBSSW75_MASK                 (0x800U)
#define STCU2_MBSSW_MBSSW75_SHIFT                (11U)
#define STCU2_MBSSW_MBSSW75_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW75(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW75_SHIFT)) & STCU2_MBSSW_MBSSW75_MASK)

#define STCU2_MBSSW_MBSSW76_MASK                 (0x1000U)
#define STCU2_MBSSW_MBSSW76_SHIFT                (12U)
#define STCU2_MBSSW_MBSSW76_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW76(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW76_SHIFT)) & STCU2_MBSSW_MBSSW76_MASK)

#define STCU2_MBSSW_MBSSW77_MASK                 (0x2000U)
#define STCU2_MBSSW_MBSSW77_SHIFT                (13U)
#define STCU2_MBSSW_MBSSW77_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW77(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW77_SHIFT)) & STCU2_MBSSW_MBSSW77_MASK)

#define STCU2_MBSSW_MBSSW78_MASK                 (0x4000U)
#define STCU2_MBSSW_MBSSW78_SHIFT                (14U)
#define STCU2_MBSSW_MBSSW78_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW78(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW78_SHIFT)) & STCU2_MBSSW_MBSSW78_MASK)

#define STCU2_MBSSW_MBSSW79_MASK                 (0x8000U)
#define STCU2_MBSSW_MBSSW79_SHIFT                (15U)
#define STCU2_MBSSW_MBSSW79_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW79(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW79_SHIFT)) & STCU2_MBSSW_MBSSW79_MASK)

#define STCU2_MBSSW_MBSSW80_MASK                 (0x10000U)
#define STCU2_MBSSW_MBSSW80_SHIFT                (16U)
#define STCU2_MBSSW_MBSSW80_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW80(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW80_SHIFT)) & STCU2_MBSSW_MBSSW80_MASK)

#define STCU2_MBSSW_MBSSW81_MASK                 (0x20000U)
#define STCU2_MBSSW_MBSSW81_SHIFT                (17U)
#define STCU2_MBSSW_MBSSW81_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW81(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW81_SHIFT)) & STCU2_MBSSW_MBSSW81_MASK)

#define STCU2_MBSSW_MBSSW82_MASK                 (0x40000U)
#define STCU2_MBSSW_MBSSW82_SHIFT                (18U)
#define STCU2_MBSSW_MBSSW82_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW82(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW82_SHIFT)) & STCU2_MBSSW_MBSSW82_MASK)

#define STCU2_MBSSW_MBSSW83_MASK                 (0x80000U)
#define STCU2_MBSSW_MBSSW83_SHIFT                (19U)
#define STCU2_MBSSW_MBSSW83_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW83(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW83_SHIFT)) & STCU2_MBSSW_MBSSW83_MASK)

#define STCU2_MBSSW_MBSSW84_MASK                 (0x100000U)
#define STCU2_MBSSW_MBSSW84_SHIFT                (20U)
#define STCU2_MBSSW_MBSSW84_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW84(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW84_SHIFT)) & STCU2_MBSSW_MBSSW84_MASK)

#define STCU2_MBSSW_MBSSW85_MASK                 (0x200000U)
#define STCU2_MBSSW_MBSSW85_SHIFT                (21U)
#define STCU2_MBSSW_MBSSW85_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW85(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW85_SHIFT)) & STCU2_MBSSW_MBSSW85_MASK)

#define STCU2_MBSSW_MBSSW86_MASK                 (0x400000U)
#define STCU2_MBSSW_MBSSW86_SHIFT                (22U)
#define STCU2_MBSSW_MBSSW86_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW86(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW86_SHIFT)) & STCU2_MBSSW_MBSSW86_MASK)

#define STCU2_MBSSW_MBSSW87_MASK                 (0x800000U)
#define STCU2_MBSSW_MBSSW87_SHIFT                (23U)
#define STCU2_MBSSW_MBSSW87_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW87(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW87_SHIFT)) & STCU2_MBSSW_MBSSW87_MASK)

#define STCU2_MBSSW_MBSSW88_MASK                 (0x1000000U)
#define STCU2_MBSSW_MBSSW88_SHIFT                (24U)
#define STCU2_MBSSW_MBSSW88_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW88(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW88_SHIFT)) & STCU2_MBSSW_MBSSW88_MASK)

#define STCU2_MBSSW_MBSSW89_MASK                 (0x2000000U)
#define STCU2_MBSSW_MBSSW89_SHIFT                (25U)
#define STCU2_MBSSW_MBSSW89_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW89(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW89_SHIFT)) & STCU2_MBSSW_MBSSW89_MASK)

#define STCU2_MBSSW_MBSSW90_MASK                 (0x4000000U)
#define STCU2_MBSSW_MBSSW90_SHIFT                (26U)
#define STCU2_MBSSW_MBSSW90_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW90(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW90_SHIFT)) & STCU2_MBSSW_MBSSW90_MASK)

#define STCU2_MBSSW_MBSSW91_MASK                 (0x8000000U)
#define STCU2_MBSSW_MBSSW91_SHIFT                (27U)
#define STCU2_MBSSW_MBSSW91_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW91(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW91_SHIFT)) & STCU2_MBSSW_MBSSW91_MASK)

#define STCU2_MBSSW_MBSSW92_MASK                 (0x10000000U)
#define STCU2_MBSSW_MBSSW92_SHIFT                (28U)
#define STCU2_MBSSW_MBSSW92_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW92(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW92_SHIFT)) & STCU2_MBSSW_MBSSW92_MASK)

#define STCU2_MBSSW_MBSSW93_MASK                 (0x20000000U)
#define STCU2_MBSSW_MBSSW93_SHIFT                (29U)
#define STCU2_MBSSW_MBSSW93_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW93(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW93_SHIFT)) & STCU2_MBSSW_MBSSW93_MASK)

#define STCU2_MBSSW_MBSSW94_MASK                 (0x40000000U)
#define STCU2_MBSSW_MBSSW94_SHIFT                (30U)
#define STCU2_MBSSW_MBSSW94_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW94(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW94_SHIFT)) & STCU2_MBSSW_MBSSW94_MASK)

#define STCU2_MBSSW_MBSSW95_MASK                 (0x80000000U)
#define STCU2_MBSSW_MBSSW95_SHIFT                (31U)
#define STCU2_MBSSW_MBSSW95_WIDTH                (1U)
#define STCU2_MBSSW_MBSSW95(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW_MBSSW95_SHIFT)) & STCU2_MBSSW_MBSSW95_MASK)
/*! @} */

/*! @name MBSSW3 - STCU2 Online MBIST Status */
/*! @{ */

#define STCU2_MBSSW3_MBSSW96_MASK                (0x1U)
#define STCU2_MBSSW3_MBSSW96_SHIFT               (0U)
#define STCU2_MBSSW3_MBSSW96_WIDTH               (1U)
#define STCU2_MBSSW3_MBSSW96(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW3_MBSSW96_SHIFT)) & STCU2_MBSSW3_MBSSW96_MASK)

#define STCU2_MBSSW3_MBSSW97_MASK                (0x2U)
#define STCU2_MBSSW3_MBSSW97_SHIFT               (1U)
#define STCU2_MBSSW3_MBSSW97_WIDTH               (1U)
#define STCU2_MBSSW3_MBSSW97(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW3_MBSSW97_SHIFT)) & STCU2_MBSSW3_MBSSW97_MASK)

#define STCU2_MBSSW3_MBSSW98_MASK                (0x4U)
#define STCU2_MBSSW3_MBSSW98_SHIFT               (2U)
#define STCU2_MBSSW3_MBSSW98_WIDTH               (1U)
#define STCU2_MBSSW3_MBSSW98(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW3_MBSSW98_SHIFT)) & STCU2_MBSSW3_MBSSW98_MASK)

#define STCU2_MBSSW3_MBSSW99_MASK                (0x8U)
#define STCU2_MBSSW3_MBSSW99_SHIFT               (3U)
#define STCU2_MBSSW3_MBSSW99_WIDTH               (1U)
#define STCU2_MBSSW3_MBSSW99(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW3_MBSSW99_SHIFT)) & STCU2_MBSSW3_MBSSW99_MASK)

#define STCU2_MBSSW3_MBSSW100_MASK               (0x10U)
#define STCU2_MBSSW3_MBSSW100_SHIFT              (4U)
#define STCU2_MBSSW3_MBSSW100_WIDTH              (1U)
#define STCU2_MBSSW3_MBSSW100(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW3_MBSSW100_SHIFT)) & STCU2_MBSSW3_MBSSW100_MASK)

#define STCU2_MBSSW3_MBSSW101_MASK               (0x20U)
#define STCU2_MBSSW3_MBSSW101_SHIFT              (5U)
#define STCU2_MBSSW3_MBSSW101_WIDTH              (1U)
#define STCU2_MBSSW3_MBSSW101(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW3_MBSSW101_SHIFT)) & STCU2_MBSSW3_MBSSW101_MASK)

#define STCU2_MBSSW3_MBSSW102_MASK               (0x40U)
#define STCU2_MBSSW3_MBSSW102_SHIFT              (6U)
#define STCU2_MBSSW3_MBSSW102_WIDTH              (1U)
#define STCU2_MBSSW3_MBSSW102(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW3_MBSSW102_SHIFT)) & STCU2_MBSSW3_MBSSW102_MASK)

#define STCU2_MBSSW3_MBSSW103_MASK               (0x80U)
#define STCU2_MBSSW3_MBSSW103_SHIFT              (7U)
#define STCU2_MBSSW3_MBSSW103_WIDTH              (1U)
#define STCU2_MBSSW3_MBSSW103(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW3_MBSSW103_SHIFT)) & STCU2_MBSSW3_MBSSW103_MASK)

#define STCU2_MBSSW3_MBSSW104_MASK               (0x100U)
#define STCU2_MBSSW3_MBSSW104_SHIFT              (8U)
#define STCU2_MBSSW3_MBSSW104_WIDTH              (1U)
#define STCU2_MBSSW3_MBSSW104(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW3_MBSSW104_SHIFT)) & STCU2_MBSSW3_MBSSW104_MASK)

#define STCU2_MBSSW3_MBSSW105_MASK               (0x200U)
#define STCU2_MBSSW3_MBSSW105_SHIFT              (9U)
#define STCU2_MBSSW3_MBSSW105_WIDTH              (1U)
#define STCU2_MBSSW3_MBSSW105(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW3_MBSSW105_SHIFT)) & STCU2_MBSSW3_MBSSW105_MASK)

#define STCU2_MBSSW3_MBSSW106_MASK               (0x400U)
#define STCU2_MBSSW3_MBSSW106_SHIFT              (10U)
#define STCU2_MBSSW3_MBSSW106_WIDTH              (1U)
#define STCU2_MBSSW3_MBSSW106(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW3_MBSSW106_SHIFT)) & STCU2_MBSSW3_MBSSW106_MASK)

#define STCU2_MBSSW3_MBSSW107_MASK               (0x800U)
#define STCU2_MBSSW3_MBSSW107_SHIFT              (11U)
#define STCU2_MBSSW3_MBSSW107_WIDTH              (1U)
#define STCU2_MBSSW3_MBSSW107(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW3_MBSSW107_SHIFT)) & STCU2_MBSSW3_MBSSW107_MASK)

#define STCU2_MBSSW3_MBSSW108_MASK               (0x1000U)
#define STCU2_MBSSW3_MBSSW108_SHIFT              (12U)
#define STCU2_MBSSW3_MBSSW108_WIDTH              (1U)
#define STCU2_MBSSW3_MBSSW108(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW3_MBSSW108_SHIFT)) & STCU2_MBSSW3_MBSSW108_MASK)

#define STCU2_MBSSW3_MBSSW109_MASK               (0x2000U)
#define STCU2_MBSSW3_MBSSW109_SHIFT              (13U)
#define STCU2_MBSSW3_MBSSW109_WIDTH              (1U)
#define STCU2_MBSSW3_MBSSW109(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBSSW3_MBSSW109_SHIFT)) & STCU2_MBSSW3_MBSSW109_MASK)
/*! @} */

/*! @name MBESW - STCU2 Online MBIST End Flag */
/*! @{ */

#define STCU2_MBESW_MBESW0_MASK                  (0x1U)
#define STCU2_MBESW_MBESW0_SHIFT                 (0U)
#define STCU2_MBESW_MBESW0_WIDTH                 (1U)
#define STCU2_MBESW_MBESW0(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW0_SHIFT)) & STCU2_MBESW_MBESW0_MASK)

#define STCU2_MBESW_MBESW1_MASK                  (0x2U)
#define STCU2_MBESW_MBESW1_SHIFT                 (1U)
#define STCU2_MBESW_MBESW1_WIDTH                 (1U)
#define STCU2_MBESW_MBESW1(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW1_SHIFT)) & STCU2_MBESW_MBESW1_MASK)

#define STCU2_MBESW_MBESW2_MASK                  (0x4U)
#define STCU2_MBESW_MBESW2_SHIFT                 (2U)
#define STCU2_MBESW_MBESW2_WIDTH                 (1U)
#define STCU2_MBESW_MBESW2(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW2_SHIFT)) & STCU2_MBESW_MBESW2_MASK)

#define STCU2_MBESW_MBESW3_MASK                  (0x8U)
#define STCU2_MBESW_MBESW3_SHIFT                 (3U)
#define STCU2_MBESW_MBESW3_WIDTH                 (1U)
#define STCU2_MBESW_MBESW3(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW3_SHIFT)) & STCU2_MBESW_MBESW3_MASK)

#define STCU2_MBESW_MBESW4_MASK                  (0x10U)
#define STCU2_MBESW_MBESW4_SHIFT                 (4U)
#define STCU2_MBESW_MBESW4_WIDTH                 (1U)
#define STCU2_MBESW_MBESW4(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW4_SHIFT)) & STCU2_MBESW_MBESW4_MASK)

#define STCU2_MBESW_MBESW5_MASK                  (0x20U)
#define STCU2_MBESW_MBESW5_SHIFT                 (5U)
#define STCU2_MBESW_MBESW5_WIDTH                 (1U)
#define STCU2_MBESW_MBESW5(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW5_SHIFT)) & STCU2_MBESW_MBESW5_MASK)

#define STCU2_MBESW_MBESW6_MASK                  (0x40U)
#define STCU2_MBESW_MBESW6_SHIFT                 (6U)
#define STCU2_MBESW_MBESW6_WIDTH                 (1U)
#define STCU2_MBESW_MBESW6(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW6_SHIFT)) & STCU2_MBESW_MBESW6_MASK)

#define STCU2_MBESW_MBESW7_MASK                  (0x80U)
#define STCU2_MBESW_MBESW7_SHIFT                 (7U)
#define STCU2_MBESW_MBESW7_WIDTH                 (1U)
#define STCU2_MBESW_MBESW7(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW7_SHIFT)) & STCU2_MBESW_MBESW7_MASK)

#define STCU2_MBESW_MBESW8_MASK                  (0x100U)
#define STCU2_MBESW_MBESW8_SHIFT                 (8U)
#define STCU2_MBESW_MBESW8_WIDTH                 (1U)
#define STCU2_MBESW_MBESW8(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW8_SHIFT)) & STCU2_MBESW_MBESW8_MASK)

#define STCU2_MBESW_MBESW9_MASK                  (0x200U)
#define STCU2_MBESW_MBESW9_SHIFT                 (9U)
#define STCU2_MBESW_MBESW9_WIDTH                 (1U)
#define STCU2_MBESW_MBESW9(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW9_SHIFT)) & STCU2_MBESW_MBESW9_MASK)

#define STCU2_MBESW_MBESW10_MASK                 (0x400U)
#define STCU2_MBESW_MBESW10_SHIFT                (10U)
#define STCU2_MBESW_MBESW10_WIDTH                (1U)
#define STCU2_MBESW_MBESW10(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW10_SHIFT)) & STCU2_MBESW_MBESW10_MASK)

#define STCU2_MBESW_MBESW11_MASK                 (0x800U)
#define STCU2_MBESW_MBESW11_SHIFT                (11U)
#define STCU2_MBESW_MBESW11_WIDTH                (1U)
#define STCU2_MBESW_MBESW11(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW11_SHIFT)) & STCU2_MBESW_MBESW11_MASK)

#define STCU2_MBESW_MBESW12_MASK                 (0x1000U)
#define STCU2_MBESW_MBESW12_SHIFT                (12U)
#define STCU2_MBESW_MBESW12_WIDTH                (1U)
#define STCU2_MBESW_MBESW12(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW12_SHIFT)) & STCU2_MBESW_MBESW12_MASK)

#define STCU2_MBESW_MBESW13_MASK                 (0x2000U)
#define STCU2_MBESW_MBESW13_SHIFT                (13U)
#define STCU2_MBESW_MBESW13_WIDTH                (1U)
#define STCU2_MBESW_MBESW13(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW13_SHIFT)) & STCU2_MBESW_MBESW13_MASK)

#define STCU2_MBESW_MBESW14_MASK                 (0x4000U)
#define STCU2_MBESW_MBESW14_SHIFT                (14U)
#define STCU2_MBESW_MBESW14_WIDTH                (1U)
#define STCU2_MBESW_MBESW14(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW14_SHIFT)) & STCU2_MBESW_MBESW14_MASK)

#define STCU2_MBESW_MBESW15_MASK                 (0x8000U)
#define STCU2_MBESW_MBESW15_SHIFT                (15U)
#define STCU2_MBESW_MBESW15_WIDTH                (1U)
#define STCU2_MBESW_MBESW15(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW15_SHIFT)) & STCU2_MBESW_MBESW15_MASK)

#define STCU2_MBESW_MBESW16_MASK                 (0x10000U)
#define STCU2_MBESW_MBESW16_SHIFT                (16U)
#define STCU2_MBESW_MBESW16_WIDTH                (1U)
#define STCU2_MBESW_MBESW16(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW16_SHIFT)) & STCU2_MBESW_MBESW16_MASK)

#define STCU2_MBESW_MBESW17_MASK                 (0x20000U)
#define STCU2_MBESW_MBESW17_SHIFT                (17U)
#define STCU2_MBESW_MBESW17_WIDTH                (1U)
#define STCU2_MBESW_MBESW17(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW17_SHIFT)) & STCU2_MBESW_MBESW17_MASK)

#define STCU2_MBESW_MBESW18_MASK                 (0x40000U)
#define STCU2_MBESW_MBESW18_SHIFT                (18U)
#define STCU2_MBESW_MBESW18_WIDTH                (1U)
#define STCU2_MBESW_MBESW18(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW18_SHIFT)) & STCU2_MBESW_MBESW18_MASK)

#define STCU2_MBESW_MBESW19_MASK                 (0x80000U)
#define STCU2_MBESW_MBESW19_SHIFT                (19U)
#define STCU2_MBESW_MBESW19_WIDTH                (1U)
#define STCU2_MBESW_MBESW19(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW19_SHIFT)) & STCU2_MBESW_MBESW19_MASK)

#define STCU2_MBESW_MBESW20_MASK                 (0x100000U)
#define STCU2_MBESW_MBESW20_SHIFT                (20U)
#define STCU2_MBESW_MBESW20_WIDTH                (1U)
#define STCU2_MBESW_MBESW20(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW20_SHIFT)) & STCU2_MBESW_MBESW20_MASK)

#define STCU2_MBESW_MBESW21_MASK                 (0x200000U)
#define STCU2_MBESW_MBESW21_SHIFT                (21U)
#define STCU2_MBESW_MBESW21_WIDTH                (1U)
#define STCU2_MBESW_MBESW21(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW21_SHIFT)) & STCU2_MBESW_MBESW21_MASK)

#define STCU2_MBESW_MBESW22_MASK                 (0x400000U)
#define STCU2_MBESW_MBESW22_SHIFT                (22U)
#define STCU2_MBESW_MBESW22_WIDTH                (1U)
#define STCU2_MBESW_MBESW22(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW22_SHIFT)) & STCU2_MBESW_MBESW22_MASK)

#define STCU2_MBESW_MBESW23_MASK                 (0x800000U)
#define STCU2_MBESW_MBESW23_SHIFT                (23U)
#define STCU2_MBESW_MBESW23_WIDTH                (1U)
#define STCU2_MBESW_MBESW23(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW23_SHIFT)) & STCU2_MBESW_MBESW23_MASK)

#define STCU2_MBESW_MBESW24_MASK                 (0x1000000U)
#define STCU2_MBESW_MBESW24_SHIFT                (24U)
#define STCU2_MBESW_MBESW24_WIDTH                (1U)
#define STCU2_MBESW_MBESW24(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW24_SHIFT)) & STCU2_MBESW_MBESW24_MASK)

#define STCU2_MBESW_MBESW25_MASK                 (0x2000000U)
#define STCU2_MBESW_MBESW25_SHIFT                (25U)
#define STCU2_MBESW_MBESW25_WIDTH                (1U)
#define STCU2_MBESW_MBESW25(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW25_SHIFT)) & STCU2_MBESW_MBESW25_MASK)

#define STCU2_MBESW_MBESW26_MASK                 (0x4000000U)
#define STCU2_MBESW_MBESW26_SHIFT                (26U)
#define STCU2_MBESW_MBESW26_WIDTH                (1U)
#define STCU2_MBESW_MBESW26(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW26_SHIFT)) & STCU2_MBESW_MBESW26_MASK)

#define STCU2_MBESW_MBESW27_MASK                 (0x8000000U)
#define STCU2_MBESW_MBESW27_SHIFT                (27U)
#define STCU2_MBESW_MBESW27_WIDTH                (1U)
#define STCU2_MBESW_MBESW27(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW27_SHIFT)) & STCU2_MBESW_MBESW27_MASK)

#define STCU2_MBESW_MBESW28_MASK                 (0x10000000U)
#define STCU2_MBESW_MBESW28_SHIFT                (28U)
#define STCU2_MBESW_MBESW28_WIDTH                (1U)
#define STCU2_MBESW_MBESW28(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW28_SHIFT)) & STCU2_MBESW_MBESW28_MASK)

#define STCU2_MBESW_MBESW29_MASK                 (0x20000000U)
#define STCU2_MBESW_MBESW29_SHIFT                (29U)
#define STCU2_MBESW_MBESW29_WIDTH                (1U)
#define STCU2_MBESW_MBESW29(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW29_SHIFT)) & STCU2_MBESW_MBESW29_MASK)

#define STCU2_MBESW_MBESW30_MASK                 (0x40000000U)
#define STCU2_MBESW_MBESW30_SHIFT                (30U)
#define STCU2_MBESW_MBESW30_WIDTH                (1U)
#define STCU2_MBESW_MBESW30(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW30_SHIFT)) & STCU2_MBESW_MBESW30_MASK)

#define STCU2_MBESW_MBESW31_MASK                 (0x80000000U)
#define STCU2_MBESW_MBESW31_SHIFT                (31U)
#define STCU2_MBESW_MBESW31_WIDTH                (1U)
#define STCU2_MBESW_MBESW31(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW31_SHIFT)) & STCU2_MBESW_MBESW31_MASK)

#define STCU2_MBESW_MBESW32_MASK                 (0x1U)
#define STCU2_MBESW_MBESW32_SHIFT                (0U)
#define STCU2_MBESW_MBESW32_WIDTH                (1U)
#define STCU2_MBESW_MBESW32(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW32_SHIFT)) & STCU2_MBESW_MBESW32_MASK)

#define STCU2_MBESW_MBESW33_MASK                 (0x2U)
#define STCU2_MBESW_MBESW33_SHIFT                (1U)
#define STCU2_MBESW_MBESW33_WIDTH                (1U)
#define STCU2_MBESW_MBESW33(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW33_SHIFT)) & STCU2_MBESW_MBESW33_MASK)

#define STCU2_MBESW_MBESW34_MASK                 (0x4U)
#define STCU2_MBESW_MBESW34_SHIFT                (2U)
#define STCU2_MBESW_MBESW34_WIDTH                (1U)
#define STCU2_MBESW_MBESW34(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW34_SHIFT)) & STCU2_MBESW_MBESW34_MASK)

#define STCU2_MBESW_MBESW35_MASK                 (0x8U)
#define STCU2_MBESW_MBESW35_SHIFT                (3U)
#define STCU2_MBESW_MBESW35_WIDTH                (1U)
#define STCU2_MBESW_MBESW35(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW35_SHIFT)) & STCU2_MBESW_MBESW35_MASK)

#define STCU2_MBESW_MBESW36_MASK                 (0x10U)
#define STCU2_MBESW_MBESW36_SHIFT                (4U)
#define STCU2_MBESW_MBESW36_WIDTH                (1U)
#define STCU2_MBESW_MBESW36(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW36_SHIFT)) & STCU2_MBESW_MBESW36_MASK)

#define STCU2_MBESW_MBESW37_MASK                 (0x20U)
#define STCU2_MBESW_MBESW37_SHIFT                (5U)
#define STCU2_MBESW_MBESW37_WIDTH                (1U)
#define STCU2_MBESW_MBESW37(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW37_SHIFT)) & STCU2_MBESW_MBESW37_MASK)

#define STCU2_MBESW_MBESW38_MASK                 (0x40U)
#define STCU2_MBESW_MBESW38_SHIFT                (6U)
#define STCU2_MBESW_MBESW38_WIDTH                (1U)
#define STCU2_MBESW_MBESW38(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW38_SHIFT)) & STCU2_MBESW_MBESW38_MASK)

#define STCU2_MBESW_MBESW39_MASK                 (0x80U)
#define STCU2_MBESW_MBESW39_SHIFT                (7U)
#define STCU2_MBESW_MBESW39_WIDTH                (1U)
#define STCU2_MBESW_MBESW39(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW39_SHIFT)) & STCU2_MBESW_MBESW39_MASK)

#define STCU2_MBESW_MBESW40_MASK                 (0x100U)
#define STCU2_MBESW_MBESW40_SHIFT                (8U)
#define STCU2_MBESW_MBESW40_WIDTH                (1U)
#define STCU2_MBESW_MBESW40(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW40_SHIFT)) & STCU2_MBESW_MBESW40_MASK)

#define STCU2_MBESW_MBESW41_MASK                 (0x200U)
#define STCU2_MBESW_MBESW41_SHIFT                (9U)
#define STCU2_MBESW_MBESW41_WIDTH                (1U)
#define STCU2_MBESW_MBESW41(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW41_SHIFT)) & STCU2_MBESW_MBESW41_MASK)

#define STCU2_MBESW_MBESW42_MASK                 (0x400U)
#define STCU2_MBESW_MBESW42_SHIFT                (10U)
#define STCU2_MBESW_MBESW42_WIDTH                (1U)
#define STCU2_MBESW_MBESW42(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW42_SHIFT)) & STCU2_MBESW_MBESW42_MASK)

#define STCU2_MBESW_MBESW43_MASK                 (0x800U)
#define STCU2_MBESW_MBESW43_SHIFT                (11U)
#define STCU2_MBESW_MBESW43_WIDTH                (1U)
#define STCU2_MBESW_MBESW43(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW43_SHIFT)) & STCU2_MBESW_MBESW43_MASK)

#define STCU2_MBESW_MBESW44_MASK                 (0x1000U)
#define STCU2_MBESW_MBESW44_SHIFT                (12U)
#define STCU2_MBESW_MBESW44_WIDTH                (1U)
#define STCU2_MBESW_MBESW44(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW44_SHIFT)) & STCU2_MBESW_MBESW44_MASK)

#define STCU2_MBESW_MBESW45_MASK                 (0x2000U)
#define STCU2_MBESW_MBESW45_SHIFT                (13U)
#define STCU2_MBESW_MBESW45_WIDTH                (1U)
#define STCU2_MBESW_MBESW45(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW45_SHIFT)) & STCU2_MBESW_MBESW45_MASK)

#define STCU2_MBESW_MBESW46_MASK                 (0x4000U)
#define STCU2_MBESW_MBESW46_SHIFT                (14U)
#define STCU2_MBESW_MBESW46_WIDTH                (1U)
#define STCU2_MBESW_MBESW46(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW46_SHIFT)) & STCU2_MBESW_MBESW46_MASK)

#define STCU2_MBESW_MBESW47_MASK                 (0x8000U)
#define STCU2_MBESW_MBESW47_SHIFT                (15U)
#define STCU2_MBESW_MBESW47_WIDTH                (1U)
#define STCU2_MBESW_MBESW47(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW47_SHIFT)) & STCU2_MBESW_MBESW47_MASK)

#define STCU2_MBESW_MBESW48_MASK                 (0x10000U)
#define STCU2_MBESW_MBESW48_SHIFT                (16U)
#define STCU2_MBESW_MBESW48_WIDTH                (1U)
#define STCU2_MBESW_MBESW48(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW48_SHIFT)) & STCU2_MBESW_MBESW48_MASK)

#define STCU2_MBESW_MBESW49_MASK                 (0x20000U)
#define STCU2_MBESW_MBESW49_SHIFT                (17U)
#define STCU2_MBESW_MBESW49_WIDTH                (1U)
#define STCU2_MBESW_MBESW49(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW49_SHIFT)) & STCU2_MBESW_MBESW49_MASK)

#define STCU2_MBESW_MBESW50_MASK                 (0x40000U)
#define STCU2_MBESW_MBESW50_SHIFT                (18U)
#define STCU2_MBESW_MBESW50_WIDTH                (1U)
#define STCU2_MBESW_MBESW50(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW50_SHIFT)) & STCU2_MBESW_MBESW50_MASK)

#define STCU2_MBESW_MBESW51_MASK                 (0x80000U)
#define STCU2_MBESW_MBESW51_SHIFT                (19U)
#define STCU2_MBESW_MBESW51_WIDTH                (1U)
#define STCU2_MBESW_MBESW51(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW51_SHIFT)) & STCU2_MBESW_MBESW51_MASK)

#define STCU2_MBESW_MBESW52_MASK                 (0x100000U)
#define STCU2_MBESW_MBESW52_SHIFT                (20U)
#define STCU2_MBESW_MBESW52_WIDTH                (1U)
#define STCU2_MBESW_MBESW52(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW52_SHIFT)) & STCU2_MBESW_MBESW52_MASK)

#define STCU2_MBESW_MBESW53_MASK                 (0x200000U)
#define STCU2_MBESW_MBESW53_SHIFT                (21U)
#define STCU2_MBESW_MBESW53_WIDTH                (1U)
#define STCU2_MBESW_MBESW53(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW53_SHIFT)) & STCU2_MBESW_MBESW53_MASK)

#define STCU2_MBESW_MBESW54_MASK                 (0x400000U)
#define STCU2_MBESW_MBESW54_SHIFT                (22U)
#define STCU2_MBESW_MBESW54_WIDTH                (1U)
#define STCU2_MBESW_MBESW54(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW54_SHIFT)) & STCU2_MBESW_MBESW54_MASK)

#define STCU2_MBESW_MBESW55_MASK                 (0x800000U)
#define STCU2_MBESW_MBESW55_SHIFT                (23U)
#define STCU2_MBESW_MBESW55_WIDTH                (1U)
#define STCU2_MBESW_MBESW55(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW55_SHIFT)) & STCU2_MBESW_MBESW55_MASK)

#define STCU2_MBESW_MBESW56_MASK                 (0x1000000U)
#define STCU2_MBESW_MBESW56_SHIFT                (24U)
#define STCU2_MBESW_MBESW56_WIDTH                (1U)
#define STCU2_MBESW_MBESW56(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW56_SHIFT)) & STCU2_MBESW_MBESW56_MASK)

#define STCU2_MBESW_MBESW57_MASK                 (0x2000000U)
#define STCU2_MBESW_MBESW57_SHIFT                (25U)
#define STCU2_MBESW_MBESW57_WIDTH                (1U)
#define STCU2_MBESW_MBESW57(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW57_SHIFT)) & STCU2_MBESW_MBESW57_MASK)

#define STCU2_MBESW_MBESW58_MASK                 (0x4000000U)
#define STCU2_MBESW_MBESW58_SHIFT                (26U)
#define STCU2_MBESW_MBESW58_WIDTH                (1U)
#define STCU2_MBESW_MBESW58(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW58_SHIFT)) & STCU2_MBESW_MBESW58_MASK)

#define STCU2_MBESW_MBESW59_MASK                 (0x8000000U)
#define STCU2_MBESW_MBESW59_SHIFT                (27U)
#define STCU2_MBESW_MBESW59_WIDTH                (1U)
#define STCU2_MBESW_MBESW59(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW59_SHIFT)) & STCU2_MBESW_MBESW59_MASK)

#define STCU2_MBESW_MBESW60_MASK                 (0x10000000U)
#define STCU2_MBESW_MBESW60_SHIFT                (28U)
#define STCU2_MBESW_MBESW60_WIDTH                (1U)
#define STCU2_MBESW_MBESW60(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW60_SHIFT)) & STCU2_MBESW_MBESW60_MASK)

#define STCU2_MBESW_MBESW61_MASK                 (0x20000000U)
#define STCU2_MBESW_MBESW61_SHIFT                (29U)
#define STCU2_MBESW_MBESW61_WIDTH                (1U)
#define STCU2_MBESW_MBESW61(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW61_SHIFT)) & STCU2_MBESW_MBESW61_MASK)

#define STCU2_MBESW_MBESW62_MASK                 (0x40000000U)
#define STCU2_MBESW_MBESW62_SHIFT                (30U)
#define STCU2_MBESW_MBESW62_WIDTH                (1U)
#define STCU2_MBESW_MBESW62(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW62_SHIFT)) & STCU2_MBESW_MBESW62_MASK)

#define STCU2_MBESW_MBESW63_MASK                 (0x80000000U)
#define STCU2_MBESW_MBESW63_SHIFT                (31U)
#define STCU2_MBESW_MBESW63_WIDTH                (1U)
#define STCU2_MBESW_MBESW63(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW63_SHIFT)) & STCU2_MBESW_MBESW63_MASK)

#define STCU2_MBESW_MBESW64_MASK                 (0x1U)
#define STCU2_MBESW_MBESW64_SHIFT                (0U)
#define STCU2_MBESW_MBESW64_WIDTH                (1U)
#define STCU2_MBESW_MBESW64(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW64_SHIFT)) & STCU2_MBESW_MBESW64_MASK)

#define STCU2_MBESW_MBESW65_MASK                 (0x2U)
#define STCU2_MBESW_MBESW65_SHIFT                (1U)
#define STCU2_MBESW_MBESW65_WIDTH                (1U)
#define STCU2_MBESW_MBESW65(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW65_SHIFT)) & STCU2_MBESW_MBESW65_MASK)

#define STCU2_MBESW_MBESW66_MASK                 (0x4U)
#define STCU2_MBESW_MBESW66_SHIFT                (2U)
#define STCU2_MBESW_MBESW66_WIDTH                (1U)
#define STCU2_MBESW_MBESW66(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW66_SHIFT)) & STCU2_MBESW_MBESW66_MASK)

#define STCU2_MBESW_MBESW67_MASK                 (0x8U)
#define STCU2_MBESW_MBESW67_SHIFT                (3U)
#define STCU2_MBESW_MBESW67_WIDTH                (1U)
#define STCU2_MBESW_MBESW67(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW67_SHIFT)) & STCU2_MBESW_MBESW67_MASK)

#define STCU2_MBESW_MBESW68_MASK                 (0x10U)
#define STCU2_MBESW_MBESW68_SHIFT                (4U)
#define STCU2_MBESW_MBESW68_WIDTH                (1U)
#define STCU2_MBESW_MBESW68(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW68_SHIFT)) & STCU2_MBESW_MBESW68_MASK)

#define STCU2_MBESW_MBESW69_MASK                 (0x20U)
#define STCU2_MBESW_MBESW69_SHIFT                (5U)
#define STCU2_MBESW_MBESW69_WIDTH                (1U)
#define STCU2_MBESW_MBESW69(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW69_SHIFT)) & STCU2_MBESW_MBESW69_MASK)

#define STCU2_MBESW_MBESW70_MASK                 (0x40U)
#define STCU2_MBESW_MBESW70_SHIFT                (6U)
#define STCU2_MBESW_MBESW70_WIDTH                (1U)
#define STCU2_MBESW_MBESW70(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW70_SHIFT)) & STCU2_MBESW_MBESW70_MASK)

#define STCU2_MBESW_MBESW71_MASK                 (0x80U)
#define STCU2_MBESW_MBESW71_SHIFT                (7U)
#define STCU2_MBESW_MBESW71_WIDTH                (1U)
#define STCU2_MBESW_MBESW71(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW71_SHIFT)) & STCU2_MBESW_MBESW71_MASK)

#define STCU2_MBESW_MBESW72_MASK                 (0x100U)
#define STCU2_MBESW_MBESW72_SHIFT                (8U)
#define STCU2_MBESW_MBESW72_WIDTH                (1U)
#define STCU2_MBESW_MBESW72(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW72_SHIFT)) & STCU2_MBESW_MBESW72_MASK)

#define STCU2_MBESW_MBESW73_MASK                 (0x200U)
#define STCU2_MBESW_MBESW73_SHIFT                (9U)
#define STCU2_MBESW_MBESW73_WIDTH                (1U)
#define STCU2_MBESW_MBESW73(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW73_SHIFT)) & STCU2_MBESW_MBESW73_MASK)

#define STCU2_MBESW_MBESW74_MASK                 (0x400U)
#define STCU2_MBESW_MBESW74_SHIFT                (10U)
#define STCU2_MBESW_MBESW74_WIDTH                (1U)
#define STCU2_MBESW_MBESW74(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW74_SHIFT)) & STCU2_MBESW_MBESW74_MASK)

#define STCU2_MBESW_MBESW75_MASK                 (0x800U)
#define STCU2_MBESW_MBESW75_SHIFT                (11U)
#define STCU2_MBESW_MBESW75_WIDTH                (1U)
#define STCU2_MBESW_MBESW75(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW75_SHIFT)) & STCU2_MBESW_MBESW75_MASK)

#define STCU2_MBESW_MBESW76_MASK                 (0x1000U)
#define STCU2_MBESW_MBESW76_SHIFT                (12U)
#define STCU2_MBESW_MBESW76_WIDTH                (1U)
#define STCU2_MBESW_MBESW76(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW76_SHIFT)) & STCU2_MBESW_MBESW76_MASK)

#define STCU2_MBESW_MBESW77_MASK                 (0x2000U)
#define STCU2_MBESW_MBESW77_SHIFT                (13U)
#define STCU2_MBESW_MBESW77_WIDTH                (1U)
#define STCU2_MBESW_MBESW77(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW77_SHIFT)) & STCU2_MBESW_MBESW77_MASK)

#define STCU2_MBESW_MBESW78_MASK                 (0x4000U)
#define STCU2_MBESW_MBESW78_SHIFT                (14U)
#define STCU2_MBESW_MBESW78_WIDTH                (1U)
#define STCU2_MBESW_MBESW78(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW78_SHIFT)) & STCU2_MBESW_MBESW78_MASK)

#define STCU2_MBESW_MBESW79_MASK                 (0x8000U)
#define STCU2_MBESW_MBESW79_SHIFT                (15U)
#define STCU2_MBESW_MBESW79_WIDTH                (1U)
#define STCU2_MBESW_MBESW79(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW79_SHIFT)) & STCU2_MBESW_MBESW79_MASK)

#define STCU2_MBESW_MBESW80_MASK                 (0x10000U)
#define STCU2_MBESW_MBESW80_SHIFT                (16U)
#define STCU2_MBESW_MBESW80_WIDTH                (1U)
#define STCU2_MBESW_MBESW80(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW80_SHIFT)) & STCU2_MBESW_MBESW80_MASK)

#define STCU2_MBESW_MBESW81_MASK                 (0x20000U)
#define STCU2_MBESW_MBESW81_SHIFT                (17U)
#define STCU2_MBESW_MBESW81_WIDTH                (1U)
#define STCU2_MBESW_MBESW81(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW81_SHIFT)) & STCU2_MBESW_MBESW81_MASK)

#define STCU2_MBESW_MBESW82_MASK                 (0x40000U)
#define STCU2_MBESW_MBESW82_SHIFT                (18U)
#define STCU2_MBESW_MBESW82_WIDTH                (1U)
#define STCU2_MBESW_MBESW82(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW82_SHIFT)) & STCU2_MBESW_MBESW82_MASK)

#define STCU2_MBESW_MBESW83_MASK                 (0x80000U)
#define STCU2_MBESW_MBESW83_SHIFT                (19U)
#define STCU2_MBESW_MBESW83_WIDTH                (1U)
#define STCU2_MBESW_MBESW83(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW83_SHIFT)) & STCU2_MBESW_MBESW83_MASK)

#define STCU2_MBESW_MBESW84_MASK                 (0x100000U)
#define STCU2_MBESW_MBESW84_SHIFT                (20U)
#define STCU2_MBESW_MBESW84_WIDTH                (1U)
#define STCU2_MBESW_MBESW84(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW84_SHIFT)) & STCU2_MBESW_MBESW84_MASK)

#define STCU2_MBESW_MBESW85_MASK                 (0x200000U)
#define STCU2_MBESW_MBESW85_SHIFT                (21U)
#define STCU2_MBESW_MBESW85_WIDTH                (1U)
#define STCU2_MBESW_MBESW85(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW85_SHIFT)) & STCU2_MBESW_MBESW85_MASK)

#define STCU2_MBESW_MBESW86_MASK                 (0x400000U)
#define STCU2_MBESW_MBESW86_SHIFT                (22U)
#define STCU2_MBESW_MBESW86_WIDTH                (1U)
#define STCU2_MBESW_MBESW86(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW86_SHIFT)) & STCU2_MBESW_MBESW86_MASK)

#define STCU2_MBESW_MBESW87_MASK                 (0x800000U)
#define STCU2_MBESW_MBESW87_SHIFT                (23U)
#define STCU2_MBESW_MBESW87_WIDTH                (1U)
#define STCU2_MBESW_MBESW87(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW87_SHIFT)) & STCU2_MBESW_MBESW87_MASK)

#define STCU2_MBESW_MBESW88_MASK                 (0x1000000U)
#define STCU2_MBESW_MBESW88_SHIFT                (24U)
#define STCU2_MBESW_MBESW88_WIDTH                (1U)
#define STCU2_MBESW_MBESW88(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW88_SHIFT)) & STCU2_MBESW_MBESW88_MASK)

#define STCU2_MBESW_MBESW89_MASK                 (0x2000000U)
#define STCU2_MBESW_MBESW89_SHIFT                (25U)
#define STCU2_MBESW_MBESW89_WIDTH                (1U)
#define STCU2_MBESW_MBESW89(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW89_SHIFT)) & STCU2_MBESW_MBESW89_MASK)

#define STCU2_MBESW_MBESW90_MASK                 (0x4000000U)
#define STCU2_MBESW_MBESW90_SHIFT                (26U)
#define STCU2_MBESW_MBESW90_WIDTH                (1U)
#define STCU2_MBESW_MBESW90(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW90_SHIFT)) & STCU2_MBESW_MBESW90_MASK)

#define STCU2_MBESW_MBESW91_MASK                 (0x8000000U)
#define STCU2_MBESW_MBESW91_SHIFT                (27U)
#define STCU2_MBESW_MBESW91_WIDTH                (1U)
#define STCU2_MBESW_MBESW91(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW91_SHIFT)) & STCU2_MBESW_MBESW91_MASK)

#define STCU2_MBESW_MBESW92_MASK                 (0x10000000U)
#define STCU2_MBESW_MBESW92_SHIFT                (28U)
#define STCU2_MBESW_MBESW92_WIDTH                (1U)
#define STCU2_MBESW_MBESW92(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW92_SHIFT)) & STCU2_MBESW_MBESW92_MASK)

#define STCU2_MBESW_MBESW93_MASK                 (0x20000000U)
#define STCU2_MBESW_MBESW93_SHIFT                (29U)
#define STCU2_MBESW_MBESW93_WIDTH                (1U)
#define STCU2_MBESW_MBESW93(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW93_SHIFT)) & STCU2_MBESW_MBESW93_MASK)

#define STCU2_MBESW_MBESW94_MASK                 (0x40000000U)
#define STCU2_MBESW_MBESW94_SHIFT                (30U)
#define STCU2_MBESW_MBESW94_WIDTH                (1U)
#define STCU2_MBESW_MBESW94(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW94_SHIFT)) & STCU2_MBESW_MBESW94_MASK)

#define STCU2_MBESW_MBESW95_MASK                 (0x80000000U)
#define STCU2_MBESW_MBESW95_SHIFT                (31U)
#define STCU2_MBESW_MBESW95_WIDTH                (1U)
#define STCU2_MBESW_MBESW95(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW_MBESW95_SHIFT)) & STCU2_MBESW_MBESW95_MASK)
/*! @} */

/*! @name MBESW3 - STCU2 Online MBIST End Flag */
/*! @{ */

#define STCU2_MBESW3_MBESW96_MASK                (0x1U)
#define STCU2_MBESW3_MBESW96_SHIFT               (0U)
#define STCU2_MBESW3_MBESW96_WIDTH               (1U)
#define STCU2_MBESW3_MBESW96(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW3_MBESW96_SHIFT)) & STCU2_MBESW3_MBESW96_MASK)

#define STCU2_MBESW3_MBESW97_MASK                (0x2U)
#define STCU2_MBESW3_MBESW97_SHIFT               (1U)
#define STCU2_MBESW3_MBESW97_WIDTH               (1U)
#define STCU2_MBESW3_MBESW97(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW3_MBESW97_SHIFT)) & STCU2_MBESW3_MBESW97_MASK)

#define STCU2_MBESW3_MBESW98_MASK                (0x4U)
#define STCU2_MBESW3_MBESW98_SHIFT               (2U)
#define STCU2_MBESW3_MBESW98_WIDTH               (1U)
#define STCU2_MBESW3_MBESW98(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW3_MBESW98_SHIFT)) & STCU2_MBESW3_MBESW98_MASK)

#define STCU2_MBESW3_MBESW99_MASK                (0x8U)
#define STCU2_MBESW3_MBESW99_SHIFT               (3U)
#define STCU2_MBESW3_MBESW99_WIDTH               (1U)
#define STCU2_MBESW3_MBESW99(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW3_MBESW99_SHIFT)) & STCU2_MBESW3_MBESW99_MASK)

#define STCU2_MBESW3_MBESW100_MASK               (0x10U)
#define STCU2_MBESW3_MBESW100_SHIFT              (4U)
#define STCU2_MBESW3_MBESW100_WIDTH              (1U)
#define STCU2_MBESW3_MBESW100(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW3_MBESW100_SHIFT)) & STCU2_MBESW3_MBESW100_MASK)

#define STCU2_MBESW3_MBESW101_MASK               (0x20U)
#define STCU2_MBESW3_MBESW101_SHIFT              (5U)
#define STCU2_MBESW3_MBESW101_WIDTH              (1U)
#define STCU2_MBESW3_MBESW101(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW3_MBESW101_SHIFT)) & STCU2_MBESW3_MBESW101_MASK)

#define STCU2_MBESW3_MBESW102_MASK               (0x40U)
#define STCU2_MBESW3_MBESW102_SHIFT              (6U)
#define STCU2_MBESW3_MBESW102_WIDTH              (1U)
#define STCU2_MBESW3_MBESW102(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW3_MBESW102_SHIFT)) & STCU2_MBESW3_MBESW102_MASK)

#define STCU2_MBESW3_MBESW103_MASK               (0x80U)
#define STCU2_MBESW3_MBESW103_SHIFT              (7U)
#define STCU2_MBESW3_MBESW103_WIDTH              (1U)
#define STCU2_MBESW3_MBESW103(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW3_MBESW103_SHIFT)) & STCU2_MBESW3_MBESW103_MASK)

#define STCU2_MBESW3_MBESW104_MASK               (0x100U)
#define STCU2_MBESW3_MBESW104_SHIFT              (8U)
#define STCU2_MBESW3_MBESW104_WIDTH              (1U)
#define STCU2_MBESW3_MBESW104(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW3_MBESW104_SHIFT)) & STCU2_MBESW3_MBESW104_MASK)

#define STCU2_MBESW3_MBESW105_MASK               (0x200U)
#define STCU2_MBESW3_MBESW105_SHIFT              (9U)
#define STCU2_MBESW3_MBESW105_WIDTH              (1U)
#define STCU2_MBESW3_MBESW105(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW3_MBESW105_SHIFT)) & STCU2_MBESW3_MBESW105_MASK)

#define STCU2_MBESW3_MBESW106_MASK               (0x400U)
#define STCU2_MBESW3_MBESW106_SHIFT              (10U)
#define STCU2_MBESW3_MBESW106_WIDTH              (1U)
#define STCU2_MBESW3_MBESW106(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW3_MBESW106_SHIFT)) & STCU2_MBESW3_MBESW106_MASK)

#define STCU2_MBESW3_MBESW107_MASK               (0x800U)
#define STCU2_MBESW3_MBESW107_SHIFT              (11U)
#define STCU2_MBESW3_MBESW107_WIDTH              (1U)
#define STCU2_MBESW3_MBESW107(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW3_MBESW107_SHIFT)) & STCU2_MBESW3_MBESW107_MASK)

#define STCU2_MBESW3_MBESW108_MASK               (0x1000U)
#define STCU2_MBESW3_MBESW108_SHIFT              (12U)
#define STCU2_MBESW3_MBESW108_WIDTH              (1U)
#define STCU2_MBESW3_MBESW108(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW3_MBESW108_SHIFT)) & STCU2_MBESW3_MBESW108_MASK)

#define STCU2_MBESW3_MBESW109_MASK               (0x2000U)
#define STCU2_MBESW3_MBESW109_SHIFT              (13U)
#define STCU2_MBESW3_MBESW109_WIDTH              (1U)
#define STCU2_MBESW3_MBESW109(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBESW3_MBESW109_SHIFT)) & STCU2_MBESW3_MBESW109_MASK)
/*! @} */

/*! @name MBUFM - STCU2 MBIST Unrecoverable FM */
/*! @{ */

#define STCU2_MBUFM_MBUFM0_MASK                  (0x1U)
#define STCU2_MBUFM_MBUFM0_SHIFT                 (0U)
#define STCU2_MBUFM_MBUFM0_WIDTH                 (1U)
#define STCU2_MBUFM_MBUFM0(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM0_SHIFT)) & STCU2_MBUFM_MBUFM0_MASK)

#define STCU2_MBUFM_MBUFM1_MASK                  (0x2U)
#define STCU2_MBUFM_MBUFM1_SHIFT                 (1U)
#define STCU2_MBUFM_MBUFM1_WIDTH                 (1U)
#define STCU2_MBUFM_MBUFM1(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM1_SHIFT)) & STCU2_MBUFM_MBUFM1_MASK)

#define STCU2_MBUFM_MBUFM2_MASK                  (0x4U)
#define STCU2_MBUFM_MBUFM2_SHIFT                 (2U)
#define STCU2_MBUFM_MBUFM2_WIDTH                 (1U)
#define STCU2_MBUFM_MBUFM2(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM2_SHIFT)) & STCU2_MBUFM_MBUFM2_MASK)

#define STCU2_MBUFM_MBUFM3_MASK                  (0x8U)
#define STCU2_MBUFM_MBUFM3_SHIFT                 (3U)
#define STCU2_MBUFM_MBUFM3_WIDTH                 (1U)
#define STCU2_MBUFM_MBUFM3(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM3_SHIFT)) & STCU2_MBUFM_MBUFM3_MASK)

#define STCU2_MBUFM_MBUFM4_MASK                  (0x10U)
#define STCU2_MBUFM_MBUFM4_SHIFT                 (4U)
#define STCU2_MBUFM_MBUFM4_WIDTH                 (1U)
#define STCU2_MBUFM_MBUFM4(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM4_SHIFT)) & STCU2_MBUFM_MBUFM4_MASK)

#define STCU2_MBUFM_MBUFM5_MASK                  (0x20U)
#define STCU2_MBUFM_MBUFM5_SHIFT                 (5U)
#define STCU2_MBUFM_MBUFM5_WIDTH                 (1U)
#define STCU2_MBUFM_MBUFM5(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM5_SHIFT)) & STCU2_MBUFM_MBUFM5_MASK)

#define STCU2_MBUFM_MBUFM6_MASK                  (0x40U)
#define STCU2_MBUFM_MBUFM6_SHIFT                 (6U)
#define STCU2_MBUFM_MBUFM6_WIDTH                 (1U)
#define STCU2_MBUFM_MBUFM6(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM6_SHIFT)) & STCU2_MBUFM_MBUFM6_MASK)

#define STCU2_MBUFM_MBUFM7_MASK                  (0x80U)
#define STCU2_MBUFM_MBUFM7_SHIFT                 (7U)
#define STCU2_MBUFM_MBUFM7_WIDTH                 (1U)
#define STCU2_MBUFM_MBUFM7(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM7_SHIFT)) & STCU2_MBUFM_MBUFM7_MASK)

#define STCU2_MBUFM_MBUFM8_MASK                  (0x100U)
#define STCU2_MBUFM_MBUFM8_SHIFT                 (8U)
#define STCU2_MBUFM_MBUFM8_WIDTH                 (1U)
#define STCU2_MBUFM_MBUFM8(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM8_SHIFT)) & STCU2_MBUFM_MBUFM8_MASK)

#define STCU2_MBUFM_MBUFM9_MASK                  (0x200U)
#define STCU2_MBUFM_MBUFM9_SHIFT                 (9U)
#define STCU2_MBUFM_MBUFM9_WIDTH                 (1U)
#define STCU2_MBUFM_MBUFM9(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM9_SHIFT)) & STCU2_MBUFM_MBUFM9_MASK)

#define STCU2_MBUFM_MBUFM10_MASK                 (0x400U)
#define STCU2_MBUFM_MBUFM10_SHIFT                (10U)
#define STCU2_MBUFM_MBUFM10_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM10(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM10_SHIFT)) & STCU2_MBUFM_MBUFM10_MASK)

#define STCU2_MBUFM_MBUFM11_MASK                 (0x800U)
#define STCU2_MBUFM_MBUFM11_SHIFT                (11U)
#define STCU2_MBUFM_MBUFM11_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM11(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM11_SHIFT)) & STCU2_MBUFM_MBUFM11_MASK)

#define STCU2_MBUFM_MBUFM12_MASK                 (0x1000U)
#define STCU2_MBUFM_MBUFM12_SHIFT                (12U)
#define STCU2_MBUFM_MBUFM12_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM12(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM12_SHIFT)) & STCU2_MBUFM_MBUFM12_MASK)

#define STCU2_MBUFM_MBUFM13_MASK                 (0x2000U)
#define STCU2_MBUFM_MBUFM13_SHIFT                (13U)
#define STCU2_MBUFM_MBUFM13_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM13(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM13_SHIFT)) & STCU2_MBUFM_MBUFM13_MASK)

#define STCU2_MBUFM_MBUFM14_MASK                 (0x4000U)
#define STCU2_MBUFM_MBUFM14_SHIFT                (14U)
#define STCU2_MBUFM_MBUFM14_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM14(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM14_SHIFT)) & STCU2_MBUFM_MBUFM14_MASK)

#define STCU2_MBUFM_MBUFM15_MASK                 (0x8000U)
#define STCU2_MBUFM_MBUFM15_SHIFT                (15U)
#define STCU2_MBUFM_MBUFM15_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM15(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM15_SHIFT)) & STCU2_MBUFM_MBUFM15_MASK)

#define STCU2_MBUFM_MBUFM16_MASK                 (0x10000U)
#define STCU2_MBUFM_MBUFM16_SHIFT                (16U)
#define STCU2_MBUFM_MBUFM16_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM16(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM16_SHIFT)) & STCU2_MBUFM_MBUFM16_MASK)

#define STCU2_MBUFM_MBUFM17_MASK                 (0x20000U)
#define STCU2_MBUFM_MBUFM17_SHIFT                (17U)
#define STCU2_MBUFM_MBUFM17_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM17(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM17_SHIFT)) & STCU2_MBUFM_MBUFM17_MASK)

#define STCU2_MBUFM_MBUFM18_MASK                 (0x40000U)
#define STCU2_MBUFM_MBUFM18_SHIFT                (18U)
#define STCU2_MBUFM_MBUFM18_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM18(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM18_SHIFT)) & STCU2_MBUFM_MBUFM18_MASK)

#define STCU2_MBUFM_MBUFM19_MASK                 (0x80000U)
#define STCU2_MBUFM_MBUFM19_SHIFT                (19U)
#define STCU2_MBUFM_MBUFM19_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM19(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM19_SHIFT)) & STCU2_MBUFM_MBUFM19_MASK)

#define STCU2_MBUFM_MBUFM20_MASK                 (0x100000U)
#define STCU2_MBUFM_MBUFM20_SHIFT                (20U)
#define STCU2_MBUFM_MBUFM20_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM20(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM20_SHIFT)) & STCU2_MBUFM_MBUFM20_MASK)

#define STCU2_MBUFM_MBUFM21_MASK                 (0x200000U)
#define STCU2_MBUFM_MBUFM21_SHIFT                (21U)
#define STCU2_MBUFM_MBUFM21_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM21(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM21_SHIFT)) & STCU2_MBUFM_MBUFM21_MASK)

#define STCU2_MBUFM_MBUFM22_MASK                 (0x400000U)
#define STCU2_MBUFM_MBUFM22_SHIFT                (22U)
#define STCU2_MBUFM_MBUFM22_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM22(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM22_SHIFT)) & STCU2_MBUFM_MBUFM22_MASK)

#define STCU2_MBUFM_MBUFM23_MASK                 (0x800000U)
#define STCU2_MBUFM_MBUFM23_SHIFT                (23U)
#define STCU2_MBUFM_MBUFM23_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM23(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM23_SHIFT)) & STCU2_MBUFM_MBUFM23_MASK)

#define STCU2_MBUFM_MBUFM24_MASK                 (0x1000000U)
#define STCU2_MBUFM_MBUFM24_SHIFT                (24U)
#define STCU2_MBUFM_MBUFM24_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM24(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM24_SHIFT)) & STCU2_MBUFM_MBUFM24_MASK)

#define STCU2_MBUFM_MBUFM25_MASK                 (0x2000000U)
#define STCU2_MBUFM_MBUFM25_SHIFT                (25U)
#define STCU2_MBUFM_MBUFM25_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM25(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM25_SHIFT)) & STCU2_MBUFM_MBUFM25_MASK)

#define STCU2_MBUFM_MBUFM26_MASK                 (0x4000000U)
#define STCU2_MBUFM_MBUFM26_SHIFT                (26U)
#define STCU2_MBUFM_MBUFM26_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM26(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM26_SHIFT)) & STCU2_MBUFM_MBUFM26_MASK)

#define STCU2_MBUFM_MBUFM27_MASK                 (0x8000000U)
#define STCU2_MBUFM_MBUFM27_SHIFT                (27U)
#define STCU2_MBUFM_MBUFM27_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM27(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM27_SHIFT)) & STCU2_MBUFM_MBUFM27_MASK)

#define STCU2_MBUFM_MBUFM28_MASK                 (0x10000000U)
#define STCU2_MBUFM_MBUFM28_SHIFT                (28U)
#define STCU2_MBUFM_MBUFM28_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM28(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM28_SHIFT)) & STCU2_MBUFM_MBUFM28_MASK)

#define STCU2_MBUFM_MBUFM29_MASK                 (0x20000000U)
#define STCU2_MBUFM_MBUFM29_SHIFT                (29U)
#define STCU2_MBUFM_MBUFM29_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM29(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM29_SHIFT)) & STCU2_MBUFM_MBUFM29_MASK)

#define STCU2_MBUFM_MBUFM30_MASK                 (0x40000000U)
#define STCU2_MBUFM_MBUFM30_SHIFT                (30U)
#define STCU2_MBUFM_MBUFM30_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM30(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM30_SHIFT)) & STCU2_MBUFM_MBUFM30_MASK)

#define STCU2_MBUFM_MBUFM31_MASK                 (0x80000000U)
#define STCU2_MBUFM_MBUFM31_SHIFT                (31U)
#define STCU2_MBUFM_MBUFM31_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM31(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM31_SHIFT)) & STCU2_MBUFM_MBUFM31_MASK)

#define STCU2_MBUFM_MBUFM32_MASK                 (0x1U)
#define STCU2_MBUFM_MBUFM32_SHIFT                (0U)
#define STCU2_MBUFM_MBUFM32_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM32(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM32_SHIFT)) & STCU2_MBUFM_MBUFM32_MASK)

#define STCU2_MBUFM_MBUFM33_MASK                 (0x2U)
#define STCU2_MBUFM_MBUFM33_SHIFT                (1U)
#define STCU2_MBUFM_MBUFM33_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM33(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM33_SHIFT)) & STCU2_MBUFM_MBUFM33_MASK)

#define STCU2_MBUFM_MBUFM34_MASK                 (0x4U)
#define STCU2_MBUFM_MBUFM34_SHIFT                (2U)
#define STCU2_MBUFM_MBUFM34_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM34(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM34_SHIFT)) & STCU2_MBUFM_MBUFM34_MASK)

#define STCU2_MBUFM_MBUFM35_MASK                 (0x8U)
#define STCU2_MBUFM_MBUFM35_SHIFT                (3U)
#define STCU2_MBUFM_MBUFM35_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM35(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM35_SHIFT)) & STCU2_MBUFM_MBUFM35_MASK)

#define STCU2_MBUFM_MBUFM36_MASK                 (0x10U)
#define STCU2_MBUFM_MBUFM36_SHIFT                (4U)
#define STCU2_MBUFM_MBUFM36_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM36(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM36_SHIFT)) & STCU2_MBUFM_MBUFM36_MASK)

#define STCU2_MBUFM_MBUFM37_MASK                 (0x20U)
#define STCU2_MBUFM_MBUFM37_SHIFT                (5U)
#define STCU2_MBUFM_MBUFM37_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM37(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM37_SHIFT)) & STCU2_MBUFM_MBUFM37_MASK)

#define STCU2_MBUFM_MBUFM38_MASK                 (0x40U)
#define STCU2_MBUFM_MBUFM38_SHIFT                (6U)
#define STCU2_MBUFM_MBUFM38_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM38(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM38_SHIFT)) & STCU2_MBUFM_MBUFM38_MASK)

#define STCU2_MBUFM_MBUFM39_MASK                 (0x80U)
#define STCU2_MBUFM_MBUFM39_SHIFT                (7U)
#define STCU2_MBUFM_MBUFM39_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM39(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM39_SHIFT)) & STCU2_MBUFM_MBUFM39_MASK)

#define STCU2_MBUFM_MBUFM40_MASK                 (0x100U)
#define STCU2_MBUFM_MBUFM40_SHIFT                (8U)
#define STCU2_MBUFM_MBUFM40_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM40(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM40_SHIFT)) & STCU2_MBUFM_MBUFM40_MASK)

#define STCU2_MBUFM_MBUFM41_MASK                 (0x200U)
#define STCU2_MBUFM_MBUFM41_SHIFT                (9U)
#define STCU2_MBUFM_MBUFM41_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM41(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM41_SHIFT)) & STCU2_MBUFM_MBUFM41_MASK)

#define STCU2_MBUFM_MBUFM42_MASK                 (0x400U)
#define STCU2_MBUFM_MBUFM42_SHIFT                (10U)
#define STCU2_MBUFM_MBUFM42_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM42(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM42_SHIFT)) & STCU2_MBUFM_MBUFM42_MASK)

#define STCU2_MBUFM_MBUFM43_MASK                 (0x800U)
#define STCU2_MBUFM_MBUFM43_SHIFT                (11U)
#define STCU2_MBUFM_MBUFM43_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM43(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM43_SHIFT)) & STCU2_MBUFM_MBUFM43_MASK)

#define STCU2_MBUFM_MBUFM44_MASK                 (0x1000U)
#define STCU2_MBUFM_MBUFM44_SHIFT                (12U)
#define STCU2_MBUFM_MBUFM44_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM44(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM44_SHIFT)) & STCU2_MBUFM_MBUFM44_MASK)

#define STCU2_MBUFM_MBUFM45_MASK                 (0x2000U)
#define STCU2_MBUFM_MBUFM45_SHIFT                (13U)
#define STCU2_MBUFM_MBUFM45_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM45(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM45_SHIFT)) & STCU2_MBUFM_MBUFM45_MASK)

#define STCU2_MBUFM_MBUFM46_MASK                 (0x4000U)
#define STCU2_MBUFM_MBUFM46_SHIFT                (14U)
#define STCU2_MBUFM_MBUFM46_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM46(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM46_SHIFT)) & STCU2_MBUFM_MBUFM46_MASK)

#define STCU2_MBUFM_MBUFM47_MASK                 (0x8000U)
#define STCU2_MBUFM_MBUFM47_SHIFT                (15U)
#define STCU2_MBUFM_MBUFM47_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM47(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM47_SHIFT)) & STCU2_MBUFM_MBUFM47_MASK)

#define STCU2_MBUFM_MBUFM48_MASK                 (0x10000U)
#define STCU2_MBUFM_MBUFM48_SHIFT                (16U)
#define STCU2_MBUFM_MBUFM48_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM48(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM48_SHIFT)) & STCU2_MBUFM_MBUFM48_MASK)

#define STCU2_MBUFM_MBUFM49_MASK                 (0x20000U)
#define STCU2_MBUFM_MBUFM49_SHIFT                (17U)
#define STCU2_MBUFM_MBUFM49_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM49(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM49_SHIFT)) & STCU2_MBUFM_MBUFM49_MASK)

#define STCU2_MBUFM_MBUFM50_MASK                 (0x40000U)
#define STCU2_MBUFM_MBUFM50_SHIFT                (18U)
#define STCU2_MBUFM_MBUFM50_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM50(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM50_SHIFT)) & STCU2_MBUFM_MBUFM50_MASK)

#define STCU2_MBUFM_MBUFM51_MASK                 (0x80000U)
#define STCU2_MBUFM_MBUFM51_SHIFT                (19U)
#define STCU2_MBUFM_MBUFM51_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM51(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM51_SHIFT)) & STCU2_MBUFM_MBUFM51_MASK)

#define STCU2_MBUFM_MBUFM52_MASK                 (0x100000U)
#define STCU2_MBUFM_MBUFM52_SHIFT                (20U)
#define STCU2_MBUFM_MBUFM52_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM52(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM52_SHIFT)) & STCU2_MBUFM_MBUFM52_MASK)

#define STCU2_MBUFM_MBUFM53_MASK                 (0x200000U)
#define STCU2_MBUFM_MBUFM53_SHIFT                (21U)
#define STCU2_MBUFM_MBUFM53_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM53(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM53_SHIFT)) & STCU2_MBUFM_MBUFM53_MASK)

#define STCU2_MBUFM_MBUFM54_MASK                 (0x400000U)
#define STCU2_MBUFM_MBUFM54_SHIFT                (22U)
#define STCU2_MBUFM_MBUFM54_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM54(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM54_SHIFT)) & STCU2_MBUFM_MBUFM54_MASK)

#define STCU2_MBUFM_MBUFM55_MASK                 (0x800000U)
#define STCU2_MBUFM_MBUFM55_SHIFT                (23U)
#define STCU2_MBUFM_MBUFM55_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM55(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM55_SHIFT)) & STCU2_MBUFM_MBUFM55_MASK)

#define STCU2_MBUFM_MBUFM56_MASK                 (0x1000000U)
#define STCU2_MBUFM_MBUFM56_SHIFT                (24U)
#define STCU2_MBUFM_MBUFM56_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM56(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM56_SHIFT)) & STCU2_MBUFM_MBUFM56_MASK)

#define STCU2_MBUFM_MBUFM57_MASK                 (0x2000000U)
#define STCU2_MBUFM_MBUFM57_SHIFT                (25U)
#define STCU2_MBUFM_MBUFM57_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM57(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM57_SHIFT)) & STCU2_MBUFM_MBUFM57_MASK)

#define STCU2_MBUFM_MBUFM58_MASK                 (0x4000000U)
#define STCU2_MBUFM_MBUFM58_SHIFT                (26U)
#define STCU2_MBUFM_MBUFM58_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM58(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM58_SHIFT)) & STCU2_MBUFM_MBUFM58_MASK)

#define STCU2_MBUFM_MBUFM59_MASK                 (0x8000000U)
#define STCU2_MBUFM_MBUFM59_SHIFT                (27U)
#define STCU2_MBUFM_MBUFM59_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM59(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM59_SHIFT)) & STCU2_MBUFM_MBUFM59_MASK)

#define STCU2_MBUFM_MBUFM60_MASK                 (0x10000000U)
#define STCU2_MBUFM_MBUFM60_SHIFT                (28U)
#define STCU2_MBUFM_MBUFM60_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM60(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM60_SHIFT)) & STCU2_MBUFM_MBUFM60_MASK)

#define STCU2_MBUFM_MBUFM61_MASK                 (0x20000000U)
#define STCU2_MBUFM_MBUFM61_SHIFT                (29U)
#define STCU2_MBUFM_MBUFM61_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM61(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM61_SHIFT)) & STCU2_MBUFM_MBUFM61_MASK)

#define STCU2_MBUFM_MBUFM62_MASK                 (0x40000000U)
#define STCU2_MBUFM_MBUFM62_SHIFT                (30U)
#define STCU2_MBUFM_MBUFM62_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM62(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM62_SHIFT)) & STCU2_MBUFM_MBUFM62_MASK)

#define STCU2_MBUFM_MBUFM63_MASK                 (0x80000000U)
#define STCU2_MBUFM_MBUFM63_SHIFT                (31U)
#define STCU2_MBUFM_MBUFM63_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM63(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM63_SHIFT)) & STCU2_MBUFM_MBUFM63_MASK)

#define STCU2_MBUFM_MBUFM64_MASK                 (0x1U)
#define STCU2_MBUFM_MBUFM64_SHIFT                (0U)
#define STCU2_MBUFM_MBUFM64_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM64(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM64_SHIFT)) & STCU2_MBUFM_MBUFM64_MASK)

#define STCU2_MBUFM_MBUFM65_MASK                 (0x2U)
#define STCU2_MBUFM_MBUFM65_SHIFT                (1U)
#define STCU2_MBUFM_MBUFM65_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM65(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM65_SHIFT)) & STCU2_MBUFM_MBUFM65_MASK)

#define STCU2_MBUFM_MBUFM66_MASK                 (0x4U)
#define STCU2_MBUFM_MBUFM66_SHIFT                (2U)
#define STCU2_MBUFM_MBUFM66_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM66(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM66_SHIFT)) & STCU2_MBUFM_MBUFM66_MASK)

#define STCU2_MBUFM_MBUFM67_MASK                 (0x8U)
#define STCU2_MBUFM_MBUFM67_SHIFT                (3U)
#define STCU2_MBUFM_MBUFM67_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM67(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM67_SHIFT)) & STCU2_MBUFM_MBUFM67_MASK)

#define STCU2_MBUFM_MBUFM68_MASK                 (0x10U)
#define STCU2_MBUFM_MBUFM68_SHIFT                (4U)
#define STCU2_MBUFM_MBUFM68_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM68(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM68_SHIFT)) & STCU2_MBUFM_MBUFM68_MASK)

#define STCU2_MBUFM_MBUFM69_MASK                 (0x20U)
#define STCU2_MBUFM_MBUFM69_SHIFT                (5U)
#define STCU2_MBUFM_MBUFM69_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM69(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM69_SHIFT)) & STCU2_MBUFM_MBUFM69_MASK)

#define STCU2_MBUFM_MBUFM70_MASK                 (0x40U)
#define STCU2_MBUFM_MBUFM70_SHIFT                (6U)
#define STCU2_MBUFM_MBUFM70_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM70(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM70_SHIFT)) & STCU2_MBUFM_MBUFM70_MASK)

#define STCU2_MBUFM_MBUFM71_MASK                 (0x80U)
#define STCU2_MBUFM_MBUFM71_SHIFT                (7U)
#define STCU2_MBUFM_MBUFM71_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM71(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM71_SHIFT)) & STCU2_MBUFM_MBUFM71_MASK)

#define STCU2_MBUFM_MBUFM72_MASK                 (0x100U)
#define STCU2_MBUFM_MBUFM72_SHIFT                (8U)
#define STCU2_MBUFM_MBUFM72_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM72(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM72_SHIFT)) & STCU2_MBUFM_MBUFM72_MASK)

#define STCU2_MBUFM_MBUFM73_MASK                 (0x200U)
#define STCU2_MBUFM_MBUFM73_SHIFT                (9U)
#define STCU2_MBUFM_MBUFM73_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM73(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM73_SHIFT)) & STCU2_MBUFM_MBUFM73_MASK)

#define STCU2_MBUFM_MBUFM74_MASK                 (0x400U)
#define STCU2_MBUFM_MBUFM74_SHIFT                (10U)
#define STCU2_MBUFM_MBUFM74_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM74(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM74_SHIFT)) & STCU2_MBUFM_MBUFM74_MASK)

#define STCU2_MBUFM_MBUFM75_MASK                 (0x800U)
#define STCU2_MBUFM_MBUFM75_SHIFT                (11U)
#define STCU2_MBUFM_MBUFM75_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM75(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM75_SHIFT)) & STCU2_MBUFM_MBUFM75_MASK)

#define STCU2_MBUFM_MBUFM76_MASK                 (0x1000U)
#define STCU2_MBUFM_MBUFM76_SHIFT                (12U)
#define STCU2_MBUFM_MBUFM76_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM76(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM76_SHIFT)) & STCU2_MBUFM_MBUFM76_MASK)

#define STCU2_MBUFM_MBUFM77_MASK                 (0x2000U)
#define STCU2_MBUFM_MBUFM77_SHIFT                (13U)
#define STCU2_MBUFM_MBUFM77_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM77(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM77_SHIFT)) & STCU2_MBUFM_MBUFM77_MASK)

#define STCU2_MBUFM_MBUFM78_MASK                 (0x4000U)
#define STCU2_MBUFM_MBUFM78_SHIFT                (14U)
#define STCU2_MBUFM_MBUFM78_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM78(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM78_SHIFT)) & STCU2_MBUFM_MBUFM78_MASK)

#define STCU2_MBUFM_MBUFM79_MASK                 (0x8000U)
#define STCU2_MBUFM_MBUFM79_SHIFT                (15U)
#define STCU2_MBUFM_MBUFM79_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM79(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM79_SHIFT)) & STCU2_MBUFM_MBUFM79_MASK)

#define STCU2_MBUFM_MBUFM80_MASK                 (0x10000U)
#define STCU2_MBUFM_MBUFM80_SHIFT                (16U)
#define STCU2_MBUFM_MBUFM80_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM80(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM80_SHIFT)) & STCU2_MBUFM_MBUFM80_MASK)

#define STCU2_MBUFM_MBUFM81_MASK                 (0x20000U)
#define STCU2_MBUFM_MBUFM81_SHIFT                (17U)
#define STCU2_MBUFM_MBUFM81_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM81(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM81_SHIFT)) & STCU2_MBUFM_MBUFM81_MASK)

#define STCU2_MBUFM_MBUFM82_MASK                 (0x40000U)
#define STCU2_MBUFM_MBUFM82_SHIFT                (18U)
#define STCU2_MBUFM_MBUFM82_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM82(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM82_SHIFT)) & STCU2_MBUFM_MBUFM82_MASK)

#define STCU2_MBUFM_MBUFM83_MASK                 (0x80000U)
#define STCU2_MBUFM_MBUFM83_SHIFT                (19U)
#define STCU2_MBUFM_MBUFM83_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM83(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM83_SHIFT)) & STCU2_MBUFM_MBUFM83_MASK)

#define STCU2_MBUFM_MBUFM84_MASK                 (0x100000U)
#define STCU2_MBUFM_MBUFM84_SHIFT                (20U)
#define STCU2_MBUFM_MBUFM84_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM84(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM84_SHIFT)) & STCU2_MBUFM_MBUFM84_MASK)

#define STCU2_MBUFM_MBUFM85_MASK                 (0x200000U)
#define STCU2_MBUFM_MBUFM85_SHIFT                (21U)
#define STCU2_MBUFM_MBUFM85_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM85(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM85_SHIFT)) & STCU2_MBUFM_MBUFM85_MASK)

#define STCU2_MBUFM_MBUFM86_MASK                 (0x400000U)
#define STCU2_MBUFM_MBUFM86_SHIFT                (22U)
#define STCU2_MBUFM_MBUFM86_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM86(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM86_SHIFT)) & STCU2_MBUFM_MBUFM86_MASK)

#define STCU2_MBUFM_MBUFM87_MASK                 (0x800000U)
#define STCU2_MBUFM_MBUFM87_SHIFT                (23U)
#define STCU2_MBUFM_MBUFM87_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM87(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM87_SHIFT)) & STCU2_MBUFM_MBUFM87_MASK)

#define STCU2_MBUFM_MBUFM88_MASK                 (0x1000000U)
#define STCU2_MBUFM_MBUFM88_SHIFT                (24U)
#define STCU2_MBUFM_MBUFM88_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM88(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM88_SHIFT)) & STCU2_MBUFM_MBUFM88_MASK)

#define STCU2_MBUFM_MBUFM89_MASK                 (0x2000000U)
#define STCU2_MBUFM_MBUFM89_SHIFT                (25U)
#define STCU2_MBUFM_MBUFM89_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM89(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM89_SHIFT)) & STCU2_MBUFM_MBUFM89_MASK)

#define STCU2_MBUFM_MBUFM90_MASK                 (0x4000000U)
#define STCU2_MBUFM_MBUFM90_SHIFT                (26U)
#define STCU2_MBUFM_MBUFM90_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM90(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM90_SHIFT)) & STCU2_MBUFM_MBUFM90_MASK)

#define STCU2_MBUFM_MBUFM91_MASK                 (0x8000000U)
#define STCU2_MBUFM_MBUFM91_SHIFT                (27U)
#define STCU2_MBUFM_MBUFM91_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM91(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM91_SHIFT)) & STCU2_MBUFM_MBUFM91_MASK)

#define STCU2_MBUFM_MBUFM92_MASK                 (0x10000000U)
#define STCU2_MBUFM_MBUFM92_SHIFT                (28U)
#define STCU2_MBUFM_MBUFM92_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM92(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM92_SHIFT)) & STCU2_MBUFM_MBUFM92_MASK)

#define STCU2_MBUFM_MBUFM93_MASK                 (0x20000000U)
#define STCU2_MBUFM_MBUFM93_SHIFT                (29U)
#define STCU2_MBUFM_MBUFM93_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM93(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM93_SHIFT)) & STCU2_MBUFM_MBUFM93_MASK)

#define STCU2_MBUFM_MBUFM94_MASK                 (0x40000000U)
#define STCU2_MBUFM_MBUFM94_SHIFT                (30U)
#define STCU2_MBUFM_MBUFM94_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM94(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM94_SHIFT)) & STCU2_MBUFM_MBUFM94_MASK)

#define STCU2_MBUFM_MBUFM95_MASK                 (0x80000000U)
#define STCU2_MBUFM_MBUFM95_SHIFT                (31U)
#define STCU2_MBUFM_MBUFM95_WIDTH                (1U)
#define STCU2_MBUFM_MBUFM95(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM_MBUFM95_SHIFT)) & STCU2_MBUFM_MBUFM95_MASK)
/*! @} */

/*! @name MBUFM3 - STCU2 MBIST Unrecoverable FM */
/*! @{ */

#define STCU2_MBUFM3_MBUFM96_MASK                (0x1U)
#define STCU2_MBUFM3_MBUFM96_SHIFT               (0U)
#define STCU2_MBUFM3_MBUFM96_WIDTH               (1U)
#define STCU2_MBUFM3_MBUFM96(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM3_MBUFM96_SHIFT)) & STCU2_MBUFM3_MBUFM96_MASK)

#define STCU2_MBUFM3_MBUFM97_MASK                (0x2U)
#define STCU2_MBUFM3_MBUFM97_SHIFT               (1U)
#define STCU2_MBUFM3_MBUFM97_WIDTH               (1U)
#define STCU2_MBUFM3_MBUFM97(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM3_MBUFM97_SHIFT)) & STCU2_MBUFM3_MBUFM97_MASK)

#define STCU2_MBUFM3_MBUFM98_MASK                (0x4U)
#define STCU2_MBUFM3_MBUFM98_SHIFT               (2U)
#define STCU2_MBUFM3_MBUFM98_WIDTH               (1U)
#define STCU2_MBUFM3_MBUFM98(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM3_MBUFM98_SHIFT)) & STCU2_MBUFM3_MBUFM98_MASK)

#define STCU2_MBUFM3_MBUFM99_MASK                (0x8U)
#define STCU2_MBUFM3_MBUFM99_SHIFT               (3U)
#define STCU2_MBUFM3_MBUFM99_WIDTH               (1U)
#define STCU2_MBUFM3_MBUFM99(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM3_MBUFM99_SHIFT)) & STCU2_MBUFM3_MBUFM99_MASK)

#define STCU2_MBUFM3_MBUFM100_MASK               (0x10U)
#define STCU2_MBUFM3_MBUFM100_SHIFT              (4U)
#define STCU2_MBUFM3_MBUFM100_WIDTH              (1U)
#define STCU2_MBUFM3_MBUFM100(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM3_MBUFM100_SHIFT)) & STCU2_MBUFM3_MBUFM100_MASK)

#define STCU2_MBUFM3_MBUFM101_MASK               (0x20U)
#define STCU2_MBUFM3_MBUFM101_SHIFT              (5U)
#define STCU2_MBUFM3_MBUFM101_WIDTH              (1U)
#define STCU2_MBUFM3_MBUFM101(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM3_MBUFM101_SHIFT)) & STCU2_MBUFM3_MBUFM101_MASK)

#define STCU2_MBUFM3_MBUFM102_MASK               (0x40U)
#define STCU2_MBUFM3_MBUFM102_SHIFT              (6U)
#define STCU2_MBUFM3_MBUFM102_WIDTH              (1U)
#define STCU2_MBUFM3_MBUFM102(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM3_MBUFM102_SHIFT)) & STCU2_MBUFM3_MBUFM102_MASK)

#define STCU2_MBUFM3_MBUFM103_MASK               (0x80U)
#define STCU2_MBUFM3_MBUFM103_SHIFT              (7U)
#define STCU2_MBUFM3_MBUFM103_WIDTH              (1U)
#define STCU2_MBUFM3_MBUFM103(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM3_MBUFM103_SHIFT)) & STCU2_MBUFM3_MBUFM103_MASK)

#define STCU2_MBUFM3_MBUFM104_MASK               (0x100U)
#define STCU2_MBUFM3_MBUFM104_SHIFT              (8U)
#define STCU2_MBUFM3_MBUFM104_WIDTH              (1U)
#define STCU2_MBUFM3_MBUFM104(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM3_MBUFM104_SHIFT)) & STCU2_MBUFM3_MBUFM104_MASK)

#define STCU2_MBUFM3_MBUFM105_MASK               (0x200U)
#define STCU2_MBUFM3_MBUFM105_SHIFT              (9U)
#define STCU2_MBUFM3_MBUFM105_WIDTH              (1U)
#define STCU2_MBUFM3_MBUFM105(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM3_MBUFM105_SHIFT)) & STCU2_MBUFM3_MBUFM105_MASK)

#define STCU2_MBUFM3_MBUFM106_MASK               (0x400U)
#define STCU2_MBUFM3_MBUFM106_SHIFT              (10U)
#define STCU2_MBUFM3_MBUFM106_WIDTH              (1U)
#define STCU2_MBUFM3_MBUFM106(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM3_MBUFM106_SHIFT)) & STCU2_MBUFM3_MBUFM106_MASK)

#define STCU2_MBUFM3_MBUFM107_MASK               (0x800U)
#define STCU2_MBUFM3_MBUFM107_SHIFT              (11U)
#define STCU2_MBUFM3_MBUFM107_WIDTH              (1U)
#define STCU2_MBUFM3_MBUFM107(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM3_MBUFM107_SHIFT)) & STCU2_MBUFM3_MBUFM107_MASK)

#define STCU2_MBUFM3_MBUFM108_MASK               (0x1000U)
#define STCU2_MBUFM3_MBUFM108_SHIFT              (12U)
#define STCU2_MBUFM3_MBUFM108_WIDTH              (1U)
#define STCU2_MBUFM3_MBUFM108(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM3_MBUFM108_SHIFT)) & STCU2_MBUFM3_MBUFM108_MASK)

#define STCU2_MBUFM3_MBUFM109_MASK               (0x2000U)
#define STCU2_MBUFM3_MBUFM109_SHIFT              (13U)
#define STCU2_MBUFM3_MBUFM109_WIDTH              (1U)
#define STCU2_MBUFM3_MBUFM109(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_MBUFM3_MBUFM109_SHIFT)) & STCU2_MBUFM3_MBUFM109_MASK)
/*! @} */

/*! @name CTRL - STCU2 LBIST Control */
/*! @{ */

#define STCU2_CTRL_CWS_MASK                      (0x3FU)
#define STCU2_CTRL_CWS_SHIFT                     (0U)
#define STCU2_CTRL_CWS_WIDTH                     (6U)
#define STCU2_CTRL_CWS(x)                        (((uint32_t)(((uint32_t)(x)) << STCU2_CTRL_CWS_SHIFT)) & STCU2_CTRL_CWS_MASK)

#define STCU2_CTRL_SCEN_ON_MASK                  (0xF00U)
#define STCU2_CTRL_SCEN_ON_SHIFT                 (8U)
#define STCU2_CTRL_SCEN_ON_WIDTH                 (4U)
#define STCU2_CTRL_SCEN_ON(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_CTRL_SCEN_ON_SHIFT)) & STCU2_CTRL_SCEN_ON_MASK)

#define STCU2_CTRL_SCEN_OFF_MASK                 (0xF000U)
#define STCU2_CTRL_SCEN_OFF_SHIFT                (12U)
#define STCU2_CTRL_SCEN_OFF_WIDTH                (4U)
#define STCU2_CTRL_SCEN_OFF(x)                   (((uint32_t)(((uint32_t)(x)) << STCU2_CTRL_SCEN_OFF_SHIFT)) & STCU2_CTRL_SCEN_OFF_MASK)

#define STCU2_CTRL_SHS_MASK                      (0x70000U)
#define STCU2_CTRL_SHS_SHIFT                     (16U)
#define STCU2_CTRL_SHS_WIDTH                     (3U)
#define STCU2_CTRL_SHS(x)                        (((uint32_t)(((uint32_t)(x)) << STCU2_CTRL_SHS_SHIFT)) & STCU2_CTRL_SHS_MASK)

#define STCU2_CTRL_PTR_MASK                      (0x7FE00000U)
#define STCU2_CTRL_PTR_SHIFT                     (21U)
#define STCU2_CTRL_PTR_WIDTH                     (10U)
#define STCU2_CTRL_PTR(x)                        (((uint32_t)(((uint32_t)(x)) << STCU2_CTRL_PTR_SHIFT)) & STCU2_CTRL_PTR_MASK)

#define STCU2_CTRL_CSM_MASK                      (0x80000000U)
#define STCU2_CTRL_CSM_SHIFT                     (31U)
#define STCU2_CTRL_CSM_WIDTH                     (1U)
#define STCU2_CTRL_CSM(x)                        (((uint32_t)(((uint32_t)(x)) << STCU2_CTRL_CSM_SHIFT)) & STCU2_CTRL_CSM_MASK)
/*! @} */

/*! @name PCS - STCU2 LBIST PC Stop */
/*! @{ */

#define STCU2_PCS_PCS_MASK                       (0x3FFFFFFU)
#define STCU2_PCS_PCS_SHIFT                      (0U)
#define STCU2_PCS_PCS_WIDTH                      (26U)
#define STCU2_PCS_PCS(x)                         (((uint32_t)(((uint32_t)(x)) << STCU2_PCS_PCS_SHIFT)) & STCU2_PCS_PCS_MASK)
/*! @} */

/*! @name MISRELSW - STCU2 Online LBIST MISR Expected Low */
/*! @{ */

#define STCU2_MISRELSW_MISRESWx_MASK             (0xFFFFFFFFU)
#define STCU2_MISRELSW_MISRESWx_SHIFT            (0U)
#define STCU2_MISRELSW_MISRESWx_WIDTH            (32U)
#define STCU2_MISRELSW_MISRESWx(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_MISRELSW_MISRESWx_SHIFT)) & STCU2_MISRELSW_MISRESWx_MASK)
/*! @} */

/*! @name MISREHSW - STCU2 Online LBIST MISR Expected High */
/*! @{ */

#define STCU2_MISREHSW_MISRESWx_MASK             (0xFFFFFFFFU)
#define STCU2_MISREHSW_MISRESWx_SHIFT            (0U)
#define STCU2_MISREHSW_MISRESWx_WIDTH            (32U)
#define STCU2_MISREHSW_MISRESWx(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_MISREHSW_MISRESWx_SHIFT)) & STCU2_MISREHSW_MISRESWx_MASK)
/*! @} */

/*! @name MISRRLSW - STCU2 Online LBIST MISR Read Low */
/*! @{ */

#define STCU2_MISRRLSW_MISRRSWx_MASK             (0xFFFFFFFFU)
#define STCU2_MISRRLSW_MISRRSWx_SHIFT            (0U)
#define STCU2_MISRRLSW_MISRRSWx_WIDTH            (32U)
#define STCU2_MISRRLSW_MISRRSWx(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_MISRRLSW_MISRRSWx_SHIFT)) & STCU2_MISRRLSW_MISRRSWx_MASK)
/*! @} */

/*! @name MISRRHSW - STCU2 Online LBIST MISR Read High */
/*! @{ */

#define STCU2_MISRRHSW_MISRRSWx_MASK             (0xFFFFFFFFU)
#define STCU2_MISRRHSW_MISRRSWx_SHIFT            (0U)
#define STCU2_MISRRHSW_MISRRSWx_WIDTH            (32U)
#define STCU2_MISRRHSW_MISRRSWx(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_MISRRHSW_MISRRSWx_SHIFT)) & STCU2_MISRRHSW_MISRRSWx_MASK)
/*! @} */

/*! @name ALGOSEL - STCU2 Algorithm Select */
/*! @{ */

#define STCU2_ALGOSEL_ALGOSEL0_MASK              (0x1U)
#define STCU2_ALGOSEL_ALGOSEL0_SHIFT             (0U)
#define STCU2_ALGOSEL_ALGOSEL0_WIDTH             (1U)
#define STCU2_ALGOSEL_ALGOSEL0(x)                (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL0_SHIFT)) & STCU2_ALGOSEL_ALGOSEL0_MASK)

#define STCU2_ALGOSEL_ALGOSEL1_MASK              (0x2U)
#define STCU2_ALGOSEL_ALGOSEL1_SHIFT             (1U)
#define STCU2_ALGOSEL_ALGOSEL1_WIDTH             (1U)
#define STCU2_ALGOSEL_ALGOSEL1(x)                (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL1_SHIFT)) & STCU2_ALGOSEL_ALGOSEL1_MASK)

#define STCU2_ALGOSEL_ALGOSEL2_MASK              (0x4U)
#define STCU2_ALGOSEL_ALGOSEL2_SHIFT             (2U)
#define STCU2_ALGOSEL_ALGOSEL2_WIDTH             (1U)
#define STCU2_ALGOSEL_ALGOSEL2(x)                (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL2_SHIFT)) & STCU2_ALGOSEL_ALGOSEL2_MASK)

#define STCU2_ALGOSEL_ALGOSEL3_MASK              (0x8U)
#define STCU2_ALGOSEL_ALGOSEL3_SHIFT             (3U)
#define STCU2_ALGOSEL_ALGOSEL3_WIDTH             (1U)
#define STCU2_ALGOSEL_ALGOSEL3(x)                (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL3_SHIFT)) & STCU2_ALGOSEL_ALGOSEL3_MASK)

#define STCU2_ALGOSEL_ALGOSEL4_MASK              (0x10U)
#define STCU2_ALGOSEL_ALGOSEL4_SHIFT             (4U)
#define STCU2_ALGOSEL_ALGOSEL4_WIDTH             (1U)
#define STCU2_ALGOSEL_ALGOSEL4(x)                (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL4_SHIFT)) & STCU2_ALGOSEL_ALGOSEL4_MASK)

#define STCU2_ALGOSEL_ALGOSEL5_MASK              (0x20U)
#define STCU2_ALGOSEL_ALGOSEL5_SHIFT             (5U)
#define STCU2_ALGOSEL_ALGOSEL5_WIDTH             (1U)
#define STCU2_ALGOSEL_ALGOSEL5(x)                (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL5_SHIFT)) & STCU2_ALGOSEL_ALGOSEL5_MASK)

#define STCU2_ALGOSEL_ALGOSEL6_MASK              (0x40U)
#define STCU2_ALGOSEL_ALGOSEL6_SHIFT             (6U)
#define STCU2_ALGOSEL_ALGOSEL6_WIDTH             (1U)
#define STCU2_ALGOSEL_ALGOSEL6(x)                (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL6_SHIFT)) & STCU2_ALGOSEL_ALGOSEL6_MASK)

#define STCU2_ALGOSEL_ALGOSEL7_MASK              (0x80U)
#define STCU2_ALGOSEL_ALGOSEL7_SHIFT             (7U)
#define STCU2_ALGOSEL_ALGOSEL7_WIDTH             (1U)
#define STCU2_ALGOSEL_ALGOSEL7(x)                (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL7_SHIFT)) & STCU2_ALGOSEL_ALGOSEL7_MASK)

#define STCU2_ALGOSEL_ALGOSEL8_MASK              (0x100U)
#define STCU2_ALGOSEL_ALGOSEL8_SHIFT             (8U)
#define STCU2_ALGOSEL_ALGOSEL8_WIDTH             (1U)
#define STCU2_ALGOSEL_ALGOSEL8(x)                (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL8_SHIFT)) & STCU2_ALGOSEL_ALGOSEL8_MASK)

#define STCU2_ALGOSEL_ALGOSEL9_MASK              (0x200U)
#define STCU2_ALGOSEL_ALGOSEL9_SHIFT             (9U)
#define STCU2_ALGOSEL_ALGOSEL9_WIDTH             (1U)
#define STCU2_ALGOSEL_ALGOSEL9(x)                (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL9_SHIFT)) & STCU2_ALGOSEL_ALGOSEL9_MASK)

#define STCU2_ALGOSEL_ALGOSEL10_MASK             (0x400U)
#define STCU2_ALGOSEL_ALGOSEL10_SHIFT            (10U)
#define STCU2_ALGOSEL_ALGOSEL10_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL10(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL10_SHIFT)) & STCU2_ALGOSEL_ALGOSEL10_MASK)

#define STCU2_ALGOSEL_ALGOSEL11_MASK             (0x800U)
#define STCU2_ALGOSEL_ALGOSEL11_SHIFT            (11U)
#define STCU2_ALGOSEL_ALGOSEL11_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL11(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL11_SHIFT)) & STCU2_ALGOSEL_ALGOSEL11_MASK)

#define STCU2_ALGOSEL_ALGOSEL12_MASK             (0x1000U)
#define STCU2_ALGOSEL_ALGOSEL12_SHIFT            (12U)
#define STCU2_ALGOSEL_ALGOSEL12_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL12(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL12_SHIFT)) & STCU2_ALGOSEL_ALGOSEL12_MASK)

#define STCU2_ALGOSEL_ALGOSEL13_MASK             (0x2000U)
#define STCU2_ALGOSEL_ALGOSEL13_SHIFT            (13U)
#define STCU2_ALGOSEL_ALGOSEL13_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL13(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL13_SHIFT)) & STCU2_ALGOSEL_ALGOSEL13_MASK)

#define STCU2_ALGOSEL_ALGOSEL14_MASK             (0x4000U)
#define STCU2_ALGOSEL_ALGOSEL14_SHIFT            (14U)
#define STCU2_ALGOSEL_ALGOSEL14_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL14(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL14_SHIFT)) & STCU2_ALGOSEL_ALGOSEL14_MASK)

#define STCU2_ALGOSEL_ALGOSEL15_MASK             (0x8000U)
#define STCU2_ALGOSEL_ALGOSEL15_SHIFT            (15U)
#define STCU2_ALGOSEL_ALGOSEL15_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL15(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL15_SHIFT)) & STCU2_ALGOSEL_ALGOSEL15_MASK)

#define STCU2_ALGOSEL_ALGOSEL16_MASK             (0x10000U)
#define STCU2_ALGOSEL_ALGOSEL16_SHIFT            (16U)
#define STCU2_ALGOSEL_ALGOSEL16_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL16(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL16_SHIFT)) & STCU2_ALGOSEL_ALGOSEL16_MASK)

#define STCU2_ALGOSEL_ALGOSEL17_MASK             (0x20000U)
#define STCU2_ALGOSEL_ALGOSEL17_SHIFT            (17U)
#define STCU2_ALGOSEL_ALGOSEL17_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL17(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL17_SHIFT)) & STCU2_ALGOSEL_ALGOSEL17_MASK)

#define STCU2_ALGOSEL_ALGOSEL18_MASK             (0x40000U)
#define STCU2_ALGOSEL_ALGOSEL18_SHIFT            (18U)
#define STCU2_ALGOSEL_ALGOSEL18_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL18(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL18_SHIFT)) & STCU2_ALGOSEL_ALGOSEL18_MASK)

#define STCU2_ALGOSEL_ALGOSEL19_MASK             (0x80000U)
#define STCU2_ALGOSEL_ALGOSEL19_SHIFT            (19U)
#define STCU2_ALGOSEL_ALGOSEL19_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL19(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL19_SHIFT)) & STCU2_ALGOSEL_ALGOSEL19_MASK)

#define STCU2_ALGOSEL_ALGOSEL20_MASK             (0x100000U)
#define STCU2_ALGOSEL_ALGOSEL20_SHIFT            (20U)
#define STCU2_ALGOSEL_ALGOSEL20_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL20(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL20_SHIFT)) & STCU2_ALGOSEL_ALGOSEL20_MASK)

#define STCU2_ALGOSEL_ALGOSEL21_MASK             (0x200000U)
#define STCU2_ALGOSEL_ALGOSEL21_SHIFT            (21U)
#define STCU2_ALGOSEL_ALGOSEL21_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL21(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL21_SHIFT)) & STCU2_ALGOSEL_ALGOSEL21_MASK)

#define STCU2_ALGOSEL_ALGOSEL22_MASK             (0x400000U)
#define STCU2_ALGOSEL_ALGOSEL22_SHIFT            (22U)
#define STCU2_ALGOSEL_ALGOSEL22_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL22(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL22_SHIFT)) & STCU2_ALGOSEL_ALGOSEL22_MASK)

#define STCU2_ALGOSEL_ALGOSEL23_MASK             (0x800000U)
#define STCU2_ALGOSEL_ALGOSEL23_SHIFT            (23U)
#define STCU2_ALGOSEL_ALGOSEL23_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL23(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL23_SHIFT)) & STCU2_ALGOSEL_ALGOSEL23_MASK)

#define STCU2_ALGOSEL_ALGOSEL24_MASK             (0x1000000U)
#define STCU2_ALGOSEL_ALGOSEL24_SHIFT            (24U)
#define STCU2_ALGOSEL_ALGOSEL24_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL24(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL24_SHIFT)) & STCU2_ALGOSEL_ALGOSEL24_MASK)

#define STCU2_ALGOSEL_ALGOSEL25_MASK             (0x2000000U)
#define STCU2_ALGOSEL_ALGOSEL25_SHIFT            (25U)
#define STCU2_ALGOSEL_ALGOSEL25_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL25(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL25_SHIFT)) & STCU2_ALGOSEL_ALGOSEL25_MASK)

#define STCU2_ALGOSEL_ALGOSEL26_MASK             (0x4000000U)
#define STCU2_ALGOSEL_ALGOSEL26_SHIFT            (26U)
#define STCU2_ALGOSEL_ALGOSEL26_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL26(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL26_SHIFT)) & STCU2_ALGOSEL_ALGOSEL26_MASK)

#define STCU2_ALGOSEL_ALGOSEL27_MASK             (0x8000000U)
#define STCU2_ALGOSEL_ALGOSEL27_SHIFT            (27U)
#define STCU2_ALGOSEL_ALGOSEL27_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL27(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL27_SHIFT)) & STCU2_ALGOSEL_ALGOSEL27_MASK)

#define STCU2_ALGOSEL_ALGOSEL28_MASK             (0x10000000U)
#define STCU2_ALGOSEL_ALGOSEL28_SHIFT            (28U)
#define STCU2_ALGOSEL_ALGOSEL28_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL28(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL28_SHIFT)) & STCU2_ALGOSEL_ALGOSEL28_MASK)

#define STCU2_ALGOSEL_ALGOSEL29_MASK             (0x20000000U)
#define STCU2_ALGOSEL_ALGOSEL29_SHIFT            (29U)
#define STCU2_ALGOSEL_ALGOSEL29_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL29(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL29_SHIFT)) & STCU2_ALGOSEL_ALGOSEL29_MASK)

#define STCU2_ALGOSEL_ALGOSEL30_MASK             (0x40000000U)
#define STCU2_ALGOSEL_ALGOSEL30_SHIFT            (30U)
#define STCU2_ALGOSEL_ALGOSEL30_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL30(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL30_SHIFT)) & STCU2_ALGOSEL_ALGOSEL30_MASK)

#define STCU2_ALGOSEL_ALGOSEL31_MASK             (0x80000000U)
#define STCU2_ALGOSEL_ALGOSEL31_SHIFT            (31U)
#define STCU2_ALGOSEL_ALGOSEL31_WIDTH            (1U)
#define STCU2_ALGOSEL_ALGOSEL31(x)               (((uint32_t)(((uint32_t)(x)) << STCU2_ALGOSEL_ALGOSEL31_SHIFT)) & STCU2_ALGOSEL_ALGOSEL31_MASK)
/*! @} */

/*! @name STGGR - STCU2 MBIST Stagger */
/*! @{ */

#define STCU2_STGGR_STAG_MASK                    (0xFFFFFFFFU)
#define STCU2_STGGR_STAG_SHIFT                   (0U)
#define STCU2_STGGR_STAG_WIDTH                   (32U)
#define STCU2_STGGR_STAG(x)                      (((uint32_t)(((uint32_t)(x)) << STCU2_STGGR_STAG_SHIFT)) & STCU2_STGGR_STAG_MASK)
/*! @} */

/*! @name BSTART - STCU2 BIST Start */
/*! @{ */

#define STCU2_BSTART_BSTART0_MASK                (0x1U)
#define STCU2_BSTART_BSTART0_SHIFT               (0U)
#define STCU2_BSTART_BSTART0_WIDTH               (1U)
#define STCU2_BSTART_BSTART0(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART0_SHIFT)) & STCU2_BSTART_BSTART0_MASK)

#define STCU2_BSTART_BSTART1_MASK                (0x2U)
#define STCU2_BSTART_BSTART1_SHIFT               (1U)
#define STCU2_BSTART_BSTART1_WIDTH               (1U)
#define STCU2_BSTART_BSTART1(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART1_SHIFT)) & STCU2_BSTART_BSTART1_MASK)

#define STCU2_BSTART_BSTART2_MASK                (0x4U)
#define STCU2_BSTART_BSTART2_SHIFT               (2U)
#define STCU2_BSTART_BSTART2_WIDTH               (1U)
#define STCU2_BSTART_BSTART2(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART2_SHIFT)) & STCU2_BSTART_BSTART2_MASK)

#define STCU2_BSTART_BSTART3_MASK                (0x8U)
#define STCU2_BSTART_BSTART3_SHIFT               (3U)
#define STCU2_BSTART_BSTART3_WIDTH               (1U)
#define STCU2_BSTART_BSTART3(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART3_SHIFT)) & STCU2_BSTART_BSTART3_MASK)

#define STCU2_BSTART_BSTART4_MASK                (0x10U)
#define STCU2_BSTART_BSTART4_SHIFT               (4U)
#define STCU2_BSTART_BSTART4_WIDTH               (1U)
#define STCU2_BSTART_BSTART4(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART4_SHIFT)) & STCU2_BSTART_BSTART4_MASK)

#define STCU2_BSTART_BSTART5_MASK                (0x20U)
#define STCU2_BSTART_BSTART5_SHIFT               (5U)
#define STCU2_BSTART_BSTART5_WIDTH               (1U)
#define STCU2_BSTART_BSTART5(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART5_SHIFT)) & STCU2_BSTART_BSTART5_MASK)

#define STCU2_BSTART_BSTART6_MASK                (0x40U)
#define STCU2_BSTART_BSTART6_SHIFT               (6U)
#define STCU2_BSTART_BSTART6_WIDTH               (1U)
#define STCU2_BSTART_BSTART6(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART6_SHIFT)) & STCU2_BSTART_BSTART6_MASK)

#define STCU2_BSTART_BSTART7_MASK                (0x80U)
#define STCU2_BSTART_BSTART7_SHIFT               (7U)
#define STCU2_BSTART_BSTART7_WIDTH               (1U)
#define STCU2_BSTART_BSTART7(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART7_SHIFT)) & STCU2_BSTART_BSTART7_MASK)

#define STCU2_BSTART_BSTART8_MASK                (0x100U)
#define STCU2_BSTART_BSTART8_SHIFT               (8U)
#define STCU2_BSTART_BSTART8_WIDTH               (1U)
#define STCU2_BSTART_BSTART8(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART8_SHIFT)) & STCU2_BSTART_BSTART8_MASK)

#define STCU2_BSTART_BSTART9_MASK                (0x200U)
#define STCU2_BSTART_BSTART9_SHIFT               (9U)
#define STCU2_BSTART_BSTART9_WIDTH               (1U)
#define STCU2_BSTART_BSTART9(x)                  (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART9_SHIFT)) & STCU2_BSTART_BSTART9_MASK)

#define STCU2_BSTART_BSTART10_MASK               (0x400U)
#define STCU2_BSTART_BSTART10_SHIFT              (10U)
#define STCU2_BSTART_BSTART10_WIDTH              (1U)
#define STCU2_BSTART_BSTART10(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART10_SHIFT)) & STCU2_BSTART_BSTART10_MASK)

#define STCU2_BSTART_BSTART11_MASK               (0x800U)
#define STCU2_BSTART_BSTART11_SHIFT              (11U)
#define STCU2_BSTART_BSTART11_WIDTH              (1U)
#define STCU2_BSTART_BSTART11(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART11_SHIFT)) & STCU2_BSTART_BSTART11_MASK)

#define STCU2_BSTART_BSTART12_MASK               (0x1000U)
#define STCU2_BSTART_BSTART12_SHIFT              (12U)
#define STCU2_BSTART_BSTART12_WIDTH              (1U)
#define STCU2_BSTART_BSTART12(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART12_SHIFT)) & STCU2_BSTART_BSTART12_MASK)

#define STCU2_BSTART_BSTART13_MASK               (0x2000U)
#define STCU2_BSTART_BSTART13_SHIFT              (13U)
#define STCU2_BSTART_BSTART13_WIDTH              (1U)
#define STCU2_BSTART_BSTART13(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART13_SHIFT)) & STCU2_BSTART_BSTART13_MASK)

#define STCU2_BSTART_BSTART14_MASK               (0x4000U)
#define STCU2_BSTART_BSTART14_SHIFT              (14U)
#define STCU2_BSTART_BSTART14_WIDTH              (1U)
#define STCU2_BSTART_BSTART14(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART14_SHIFT)) & STCU2_BSTART_BSTART14_MASK)

#define STCU2_BSTART_BSTART15_MASK               (0x8000U)
#define STCU2_BSTART_BSTART15_SHIFT              (15U)
#define STCU2_BSTART_BSTART15_WIDTH              (1U)
#define STCU2_BSTART_BSTART15(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART15_SHIFT)) & STCU2_BSTART_BSTART15_MASK)

#define STCU2_BSTART_BSTART16_MASK               (0x10000U)
#define STCU2_BSTART_BSTART16_SHIFT              (16U)
#define STCU2_BSTART_BSTART16_WIDTH              (1U)
#define STCU2_BSTART_BSTART16(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART16_SHIFT)) & STCU2_BSTART_BSTART16_MASK)

#define STCU2_BSTART_BSTART17_MASK               (0x20000U)
#define STCU2_BSTART_BSTART17_SHIFT              (17U)
#define STCU2_BSTART_BSTART17_WIDTH              (1U)
#define STCU2_BSTART_BSTART17(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART17_SHIFT)) & STCU2_BSTART_BSTART17_MASK)

#define STCU2_BSTART_BSTART18_MASK               (0x40000U)
#define STCU2_BSTART_BSTART18_SHIFT              (18U)
#define STCU2_BSTART_BSTART18_WIDTH              (1U)
#define STCU2_BSTART_BSTART18(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART18_SHIFT)) & STCU2_BSTART_BSTART18_MASK)

#define STCU2_BSTART_BSTART19_MASK               (0x80000U)
#define STCU2_BSTART_BSTART19_SHIFT              (19U)
#define STCU2_BSTART_BSTART19_WIDTH              (1U)
#define STCU2_BSTART_BSTART19(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART19_SHIFT)) & STCU2_BSTART_BSTART19_MASK)

#define STCU2_BSTART_BSTART20_MASK               (0x100000U)
#define STCU2_BSTART_BSTART20_SHIFT              (20U)
#define STCU2_BSTART_BSTART20_WIDTH              (1U)
#define STCU2_BSTART_BSTART20(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART20_SHIFT)) & STCU2_BSTART_BSTART20_MASK)

#define STCU2_BSTART_BSTART21_MASK               (0x200000U)
#define STCU2_BSTART_BSTART21_SHIFT              (21U)
#define STCU2_BSTART_BSTART21_WIDTH              (1U)
#define STCU2_BSTART_BSTART21(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART21_SHIFT)) & STCU2_BSTART_BSTART21_MASK)

#define STCU2_BSTART_BSTART22_MASK               (0x400000U)
#define STCU2_BSTART_BSTART22_SHIFT              (22U)
#define STCU2_BSTART_BSTART22_WIDTH              (1U)
#define STCU2_BSTART_BSTART22(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART22_SHIFT)) & STCU2_BSTART_BSTART22_MASK)

#define STCU2_BSTART_BSTART23_MASK               (0x800000U)
#define STCU2_BSTART_BSTART23_SHIFT              (23U)
#define STCU2_BSTART_BSTART23_WIDTH              (1U)
#define STCU2_BSTART_BSTART23(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART23_SHIFT)) & STCU2_BSTART_BSTART23_MASK)

#define STCU2_BSTART_BSTART24_MASK               (0x1000000U)
#define STCU2_BSTART_BSTART24_SHIFT              (24U)
#define STCU2_BSTART_BSTART24_WIDTH              (1U)
#define STCU2_BSTART_BSTART24(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART24_SHIFT)) & STCU2_BSTART_BSTART24_MASK)

#define STCU2_BSTART_BSTART25_MASK               (0x2000000U)
#define STCU2_BSTART_BSTART25_SHIFT              (25U)
#define STCU2_BSTART_BSTART25_WIDTH              (1U)
#define STCU2_BSTART_BSTART25(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART25_SHIFT)) & STCU2_BSTART_BSTART25_MASK)

#define STCU2_BSTART_BSTART26_MASK               (0x4000000U)
#define STCU2_BSTART_BSTART26_SHIFT              (26U)
#define STCU2_BSTART_BSTART26_WIDTH              (1U)
#define STCU2_BSTART_BSTART26(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART26_SHIFT)) & STCU2_BSTART_BSTART26_MASK)

#define STCU2_BSTART_BSTART27_MASK               (0x8000000U)
#define STCU2_BSTART_BSTART27_SHIFT              (27U)
#define STCU2_BSTART_BSTART27_WIDTH              (1U)
#define STCU2_BSTART_BSTART27(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART27_SHIFT)) & STCU2_BSTART_BSTART27_MASK)

#define STCU2_BSTART_BSTART28_MASK               (0x10000000U)
#define STCU2_BSTART_BSTART28_SHIFT              (28U)
#define STCU2_BSTART_BSTART28_WIDTH              (1U)
#define STCU2_BSTART_BSTART28(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART28_SHIFT)) & STCU2_BSTART_BSTART28_MASK)

#define STCU2_BSTART_BSTART29_MASK               (0x20000000U)
#define STCU2_BSTART_BSTART29_SHIFT              (29U)
#define STCU2_BSTART_BSTART29_WIDTH              (1U)
#define STCU2_BSTART_BSTART29(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART29_SHIFT)) & STCU2_BSTART_BSTART29_MASK)

#define STCU2_BSTART_BSTART30_MASK               (0x40000000U)
#define STCU2_BSTART_BSTART30_SHIFT              (30U)
#define STCU2_BSTART_BSTART30_WIDTH              (1U)
#define STCU2_BSTART_BSTART30(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART30_SHIFT)) & STCU2_BSTART_BSTART30_MASK)

#define STCU2_BSTART_BSTART31_MASK               (0x80000000U)
#define STCU2_BSTART_BSTART31_SHIFT              (31U)
#define STCU2_BSTART_BSTART31_WIDTH              (1U)
#define STCU2_BSTART_BSTART31(x)                 (((uint32_t)(((uint32_t)(x)) << STCU2_BSTART_BSTART31_SHIFT)) & STCU2_BSTART_BSTART31_MASK)
/*! @} */

/*! @name MB_CTRL - STCU2 MBIST Control */
/*! @{ */

#define STCU2_MB_CTRL_BSEL_MASK                  (0x100000U)
#define STCU2_MB_CTRL_BSEL_SHIFT                 (20U)
#define STCU2_MB_CTRL_BSEL_WIDTH                 (1U)
#define STCU2_MB_CTRL_BSEL(x)                    (((uint32_t)(((uint32_t)(x)) << STCU2_MB_CTRL_BSEL_SHIFT)) & STCU2_MB_CTRL_BSEL_MASK)

#define STCU2_MB_CTRL_PTR_MASK                   (0x7FE00000U)
#define STCU2_MB_CTRL_PTR_SHIFT                  (21U)
#define STCU2_MB_CTRL_PTR_WIDTH                  (10U)
#define STCU2_MB_CTRL_PTR(x)                     (((uint32_t)(((uint32_t)(x)) << STCU2_MB_CTRL_PTR_SHIFT)) & STCU2_MB_CTRL_PTR_MASK)

#define STCU2_MB_CTRL_CSM_MASK                   (0x80000000U)
#define STCU2_MB_CTRL_CSM_SHIFT                  (31U)
#define STCU2_MB_CTRL_CSM_WIDTH                  (1U)
#define STCU2_MB_CTRL_CSM(x)                     (((uint32_t)(((uint32_t)(x)) << STCU2_MB_CTRL_CSM_SHIFT)) & STCU2_MB_CTRL_CSM_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group STCU2_Register_Masks */

/*!
 * @}
 */ /* end of group STCU2_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_STCU2_H_) */
