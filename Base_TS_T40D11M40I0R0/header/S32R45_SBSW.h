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
 * @file S32R45_SBSW.h
 * @version 2.4
 * @date 2022-02-14
 * @brief Peripheral Access Layer for S32R45_SBSW
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
#if !defined(S32R45_SBSW_H_)  /* Check if memory map has not been already included */
#define S32R45_SBSW_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- SBSW Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SBSW_Peripheral_Access_Layer SBSW Peripheral Access Layer
 * @{
 */

/** SBSW - Size of Registers Arrays */
#define SBSW_TMC_COUNT                            32u
#define SBSW_AUT_COUNT                            32u

/** SBSW - Register Layout Typedef */
typedef struct {
  __O  uint32_t TMC_CONFIG_UNLOCK;                 /**< TMC Configuration Unlock, offset: 0x0 */
  __O  uint32_t TMWDP_CONFIG_UNLOCK;               /**< TMWDP Configuration Unlock, offset: 0x4 */
  __I  uint32_t TMC_CONFIG_STATUS;                 /**< TMC Configuration Status, offset: 0x8 */
  __I  uint32_t TMWDP_CONFIG_STATUS;               /**< TMWDP Configuration Status, offset: 0xC */
  __IO uint32_t DEBUG_MODE;                        /**< Debug Mode, offset: 0x10 */
  __I  uint32_t TMC_FAULT_STATUS;                  /**< TMC Fault Status, offset: 0x14 */
  __I  uint32_t TMWDP_FAULT_STATUS;                /**< TMWDP Fault Status, offset: 0x18 */
  uint8_t RESERVED_0[4];
  struct {                                         /* offset: 0x20, array step: 0x20 */
    __IO uint32_t CONFIG;                            /**< TMC Configuration, array offset: 0x20, array step: 0x20 */
    __IO uint32_t DISTANCE;                          /**< TMC Distance, array offset: 0x24, array step: 0x20 */
    __IO uint32_t TIMEOUT;                           /**< TMC Timeout, array offset: 0x28, array step: 0x20 */
    __IO uint32_t CONTROL;                           /**< TMC Control, array offset: 0x2C, array step: 0x20 */
    __IO uint32_t R0;                                /**< TMC R0 Data, array offset: 0x30, array step: 0x20 */
    __IO uint32_t R1;                                /**< TMC R1 Data, array offset: 0x34, array step: 0x20 */
    __IO uint32_t STATUS;                            /**< TMC Status, array offset: 0x38, array step: 0x20 */
    __I  uint32_t TIMER;                             /**< TMC Timer, array offset: 0x3C, array step: 0x20 */
  } TMC[SBSW_TMC_COUNT];
  __IO uint32_t TMWDP_CONFIG_ADDR;                 /**< TMWDP Configuration Address, offset: 0x420 */
  __IO uint32_t TMWDP_CONTROL;                     /**< TMWDP Control, offset: 0x424 */
  __I  uint32_t TMWDP_STATUS;                      /**< TMWDP Status, offset: 0x428 */
  __I  uint32_t TMWDP_AUTOMATA_STATUS;             /**< TMWDP Automata Status, offset: 0x42C */
  __I  uint32_t TMWDP_AUTOMATA_ILLGL_TRANS;        /**< TMWDP Automata Illegal Transition, offset: 0x430 */
  __I  uint32_t TMWDP_AUTOMATA_TIME_VIOLATION;     /**< TMWDP Automata Time Violation, offset: 0x434 */
  uint8_t RESERVED_1[24];
  struct {                                         /* offset: 0x450, array step: 0x8 */
    __I  uint32_t STATUS;                            /**< TMWDP Automaton Status, array offset: 0x450, array step: 0x8 */
    __IO uint32_t PRGS_REQ;                          /**< TMWDP Automaton Progress Request, array offset: 0x454, array step: 0x8 */
  } AUT[SBSW_AUT_COUNT];
  uint8_t RESERVED_2[2732];
  __IO uint32_t TC_ID;                             /**< TMWDP Core Domain ID, offset: 0xFFC */
} SBSW_Type, *SBSW_MemMapPtr;

/** Number of instances of the SBSW module. */
#define SBSW_INSTANCE_COUNT                      (1u)

/* SBSW - Peripheral instance base addresses */
/** Peripheral SBSW base address */
#define IP_SBSW_BASE                             (0x40310000u)
/** Peripheral SBSW base pointer */
#define IP_SBSW                                  ((SBSW_Type *)IP_SBSW_BASE)
/** Array initializer of SBSW peripheral base addresses */
#define IP_SBSW_BASE_ADDRS                       { IP_SBSW_BASE }
/** Array initializer of SBSW peripheral base pointers */
#define IP_SBSW_BASE_PTRS                        { IP_SBSW }

/* ----------------------------------------------------------------------------
   -- SBSW Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SBSW_Register_Masks SBSW Register Masks
 * @{
 */

/*! @name TMC_CONFIG_UNLOCK - TMC Configuration Unlock */
/*! @{ */

#define SBSW_TMC_CONFIG_UNLOCK_KEY_MASK          (0xFFFFFFFFU)
#define SBSW_TMC_CONFIG_UNLOCK_KEY_SHIFT         (0U)
#define SBSW_TMC_CONFIG_UNLOCK_KEY_WIDTH         (32U)
#define SBSW_TMC_CONFIG_UNLOCK_KEY(x)            (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_CONFIG_UNLOCK_KEY_SHIFT)) & SBSW_TMC_CONFIG_UNLOCK_KEY_MASK)
/*! @} */

/*! @name TMWDP_CONFIG_UNLOCK - TMWDP Configuration Unlock */
/*! @{ */

#define SBSW_TMWDP_CONFIG_UNLOCK_KEY_MASK        (0xFFFFFFFFU)
#define SBSW_TMWDP_CONFIG_UNLOCK_KEY_SHIFT       (0U)
#define SBSW_TMWDP_CONFIG_UNLOCK_KEY_WIDTH       (32U)
#define SBSW_TMWDP_CONFIG_UNLOCK_KEY(x)          (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_CONFIG_UNLOCK_KEY_SHIFT)) & SBSW_TMWDP_CONFIG_UNLOCK_KEY_MASK)
/*! @} */

/*! @name TMC_CONFIG_STATUS - TMC Configuration Status */
/*! @{ */

#define SBSW_TMC_CONFIG_STATUS_STATUS_MASK       (0x1U)
#define SBSW_TMC_CONFIG_STATUS_STATUS_SHIFT      (0U)
#define SBSW_TMC_CONFIG_STATUS_STATUS_WIDTH      (1U)
#define SBSW_TMC_CONFIG_STATUS_STATUS(x)         (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_CONFIG_STATUS_STATUS_SHIFT)) & SBSW_TMC_CONFIG_STATUS_STATUS_MASK)
/*! @} */

/*! @name TMWDP_CONFIG_STATUS - TMWDP Configuration Status */
/*! @{ */

#define SBSW_TMWDP_CONFIG_STATUS_STATUS_MASK     (0x1U)
#define SBSW_TMWDP_CONFIG_STATUS_STATUS_SHIFT    (0U)
#define SBSW_TMWDP_CONFIG_STATUS_STATUS_WIDTH    (1U)
#define SBSW_TMWDP_CONFIG_STATUS_STATUS(x)       (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_CONFIG_STATUS_STATUS_SHIFT)) & SBSW_TMWDP_CONFIG_STATUS_STATUS_MASK)
/*! @} */

/*! @name DEBUG_MODE - Debug Mode */
/*! @{ */

#define SBSW_DEBUG_MODE_MODE_MASK                (0x80000000U)
#define SBSW_DEBUG_MODE_MODE_SHIFT               (31U)
#define SBSW_DEBUG_MODE_MODE_WIDTH               (1U)
#define SBSW_DEBUG_MODE_MODE(x)                  (((uint32_t)(((uint32_t)(x)) << SBSW_DEBUG_MODE_MODE_SHIFT)) & SBSW_DEBUG_MODE_MODE_MASK)
/*! @} */

/*! @name TMC_FAULT_STATUS - TMC Fault Status */
/*! @{ */

#define SBSW_TMC_FAULT_STATUS_STATUS0_MASK       (0x1U)
#define SBSW_TMC_FAULT_STATUS_STATUS0_SHIFT      (0U)
#define SBSW_TMC_FAULT_STATUS_STATUS0_WIDTH      (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS0(x)         (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS0_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS0_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS1_MASK       (0x2U)
#define SBSW_TMC_FAULT_STATUS_STATUS1_SHIFT      (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS1_WIDTH      (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS1(x)         (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS1_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS1_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS2_MASK       (0x4U)
#define SBSW_TMC_FAULT_STATUS_STATUS2_SHIFT      (2U)
#define SBSW_TMC_FAULT_STATUS_STATUS2_WIDTH      (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS2(x)         (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS2_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS2_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS3_MASK       (0x8U)
#define SBSW_TMC_FAULT_STATUS_STATUS3_SHIFT      (3U)
#define SBSW_TMC_FAULT_STATUS_STATUS3_WIDTH      (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS3(x)         (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS3_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS3_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS4_MASK       (0x10U)
#define SBSW_TMC_FAULT_STATUS_STATUS4_SHIFT      (4U)
#define SBSW_TMC_FAULT_STATUS_STATUS4_WIDTH      (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS4(x)         (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS4_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS4_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS5_MASK       (0x20U)
#define SBSW_TMC_FAULT_STATUS_STATUS5_SHIFT      (5U)
#define SBSW_TMC_FAULT_STATUS_STATUS5_WIDTH      (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS5(x)         (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS5_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS5_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS6_MASK       (0x40U)
#define SBSW_TMC_FAULT_STATUS_STATUS6_SHIFT      (6U)
#define SBSW_TMC_FAULT_STATUS_STATUS6_WIDTH      (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS6(x)         (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS6_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS6_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS7_MASK       (0x80U)
#define SBSW_TMC_FAULT_STATUS_STATUS7_SHIFT      (7U)
#define SBSW_TMC_FAULT_STATUS_STATUS7_WIDTH      (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS7(x)         (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS7_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS7_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS8_MASK       (0x100U)
#define SBSW_TMC_FAULT_STATUS_STATUS8_SHIFT      (8U)
#define SBSW_TMC_FAULT_STATUS_STATUS8_WIDTH      (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS8(x)         (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS8_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS8_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS9_MASK       (0x200U)
#define SBSW_TMC_FAULT_STATUS_STATUS9_SHIFT      (9U)
#define SBSW_TMC_FAULT_STATUS_STATUS9_WIDTH      (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS9(x)         (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS9_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS9_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS10_MASK      (0x400U)
#define SBSW_TMC_FAULT_STATUS_STATUS10_SHIFT     (10U)
#define SBSW_TMC_FAULT_STATUS_STATUS10_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS10(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS10_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS10_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS11_MASK      (0x800U)
#define SBSW_TMC_FAULT_STATUS_STATUS11_SHIFT     (11U)
#define SBSW_TMC_FAULT_STATUS_STATUS11_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS11(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS11_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS11_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS12_MASK      (0x1000U)
#define SBSW_TMC_FAULT_STATUS_STATUS12_SHIFT     (12U)
#define SBSW_TMC_FAULT_STATUS_STATUS12_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS12(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS12_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS12_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS13_MASK      (0x2000U)
#define SBSW_TMC_FAULT_STATUS_STATUS13_SHIFT     (13U)
#define SBSW_TMC_FAULT_STATUS_STATUS13_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS13(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS13_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS13_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS14_MASK      (0x4000U)
#define SBSW_TMC_FAULT_STATUS_STATUS14_SHIFT     (14U)
#define SBSW_TMC_FAULT_STATUS_STATUS14_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS14(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS14_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS14_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS15_MASK      (0x8000U)
#define SBSW_TMC_FAULT_STATUS_STATUS15_SHIFT     (15U)
#define SBSW_TMC_FAULT_STATUS_STATUS15_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS15(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS15_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS15_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS16_MASK      (0x10000U)
#define SBSW_TMC_FAULT_STATUS_STATUS16_SHIFT     (16U)
#define SBSW_TMC_FAULT_STATUS_STATUS16_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS16(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS16_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS16_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS17_MASK      (0x20000U)
#define SBSW_TMC_FAULT_STATUS_STATUS17_SHIFT     (17U)
#define SBSW_TMC_FAULT_STATUS_STATUS17_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS17(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS17_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS17_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS18_MASK      (0x40000U)
#define SBSW_TMC_FAULT_STATUS_STATUS18_SHIFT     (18U)
#define SBSW_TMC_FAULT_STATUS_STATUS18_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS18(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS18_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS18_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS19_MASK      (0x80000U)
#define SBSW_TMC_FAULT_STATUS_STATUS19_SHIFT     (19U)
#define SBSW_TMC_FAULT_STATUS_STATUS19_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS19(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS19_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS19_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS20_MASK      (0x100000U)
#define SBSW_TMC_FAULT_STATUS_STATUS20_SHIFT     (20U)
#define SBSW_TMC_FAULT_STATUS_STATUS20_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS20(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS20_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS20_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS21_MASK      (0x200000U)
#define SBSW_TMC_FAULT_STATUS_STATUS21_SHIFT     (21U)
#define SBSW_TMC_FAULT_STATUS_STATUS21_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS21(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS21_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS21_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS22_MASK      (0x400000U)
#define SBSW_TMC_FAULT_STATUS_STATUS22_SHIFT     (22U)
#define SBSW_TMC_FAULT_STATUS_STATUS22_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS22(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS22_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS22_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS23_MASK      (0x800000U)
#define SBSW_TMC_FAULT_STATUS_STATUS23_SHIFT     (23U)
#define SBSW_TMC_FAULT_STATUS_STATUS23_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS23(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS23_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS23_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS24_MASK      (0x1000000U)
#define SBSW_TMC_FAULT_STATUS_STATUS24_SHIFT     (24U)
#define SBSW_TMC_FAULT_STATUS_STATUS24_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS24(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS24_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS24_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS25_MASK      (0x2000000U)
#define SBSW_TMC_FAULT_STATUS_STATUS25_SHIFT     (25U)
#define SBSW_TMC_FAULT_STATUS_STATUS25_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS25(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS25_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS25_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS26_MASK      (0x4000000U)
#define SBSW_TMC_FAULT_STATUS_STATUS26_SHIFT     (26U)
#define SBSW_TMC_FAULT_STATUS_STATUS26_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS26(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS26_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS26_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS27_MASK      (0x8000000U)
#define SBSW_TMC_FAULT_STATUS_STATUS27_SHIFT     (27U)
#define SBSW_TMC_FAULT_STATUS_STATUS27_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS27(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS27_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS27_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS28_MASK      (0x10000000U)
#define SBSW_TMC_FAULT_STATUS_STATUS28_SHIFT     (28U)
#define SBSW_TMC_FAULT_STATUS_STATUS28_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS28(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS28_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS28_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS29_MASK      (0x20000000U)
#define SBSW_TMC_FAULT_STATUS_STATUS29_SHIFT     (29U)
#define SBSW_TMC_FAULT_STATUS_STATUS29_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS29(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS29_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS29_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS30_MASK      (0x40000000U)
#define SBSW_TMC_FAULT_STATUS_STATUS30_SHIFT     (30U)
#define SBSW_TMC_FAULT_STATUS_STATUS30_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS30(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS30_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS30_MASK)

#define SBSW_TMC_FAULT_STATUS_STATUS31_MASK      (0x80000000U)
#define SBSW_TMC_FAULT_STATUS_STATUS31_SHIFT     (31U)
#define SBSW_TMC_FAULT_STATUS_STATUS31_WIDTH     (1U)
#define SBSW_TMC_FAULT_STATUS_STATUS31(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMC_FAULT_STATUS_STATUS31_SHIFT)) & SBSW_TMC_FAULT_STATUS_STATUS31_MASK)
/*! @} */

/*! @name TMWDP_FAULT_STATUS - TMWDP Fault Status */
/*! @{ */

#define SBSW_TMWDP_FAULT_STATUS_STATUS0_MASK     (0x1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS0_SHIFT    (0U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS0_WIDTH    (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS0(x)       (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS0_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS0_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS1_MASK     (0x2U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS1_SHIFT    (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS1_WIDTH    (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS1(x)       (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS1_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS1_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS2_MASK     (0x4U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS2_SHIFT    (2U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS2_WIDTH    (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS2(x)       (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS2_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS2_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS3_MASK     (0x8U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS3_SHIFT    (3U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS3_WIDTH    (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS3(x)       (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS3_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS3_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS4_MASK     (0x10U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS4_SHIFT    (4U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS4_WIDTH    (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS4(x)       (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS4_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS4_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS5_MASK     (0x20U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS5_SHIFT    (5U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS5_WIDTH    (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS5(x)       (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS5_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS5_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS6_MASK     (0x40U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS6_SHIFT    (6U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS6_WIDTH    (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS6(x)       (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS6_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS6_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS7_MASK     (0x80U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS7_SHIFT    (7U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS7_WIDTH    (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS7(x)       (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS7_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS7_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS8_MASK     (0x100U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS8_SHIFT    (8U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS8_WIDTH    (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS8(x)       (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS8_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS8_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS9_MASK     (0x200U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS9_SHIFT    (9U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS9_WIDTH    (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS9(x)       (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS9_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS9_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS10_MASK    (0x400U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS10_SHIFT   (10U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS10_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS10(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS10_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS10_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS11_MASK    (0x800U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS11_SHIFT   (11U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS11_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS11(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS11_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS11_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS12_MASK    (0x1000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS12_SHIFT   (12U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS12_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS12(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS12_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS12_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS13_MASK    (0x2000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS13_SHIFT   (13U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS13_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS13(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS13_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS13_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS14_MASK    (0x4000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS14_SHIFT   (14U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS14_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS14(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS14_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS14_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS15_MASK    (0x8000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS15_SHIFT   (15U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS15_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS15(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS15_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS15_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS16_MASK    (0x10000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS16_SHIFT   (16U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS16_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS16(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS16_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS16_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS17_MASK    (0x20000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS17_SHIFT   (17U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS17_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS17(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS17_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS17_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS18_MASK    (0x40000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS18_SHIFT   (18U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS18_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS18(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS18_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS18_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS19_MASK    (0x80000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS19_SHIFT   (19U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS19_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS19(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS19_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS19_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS20_MASK    (0x100000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS20_SHIFT   (20U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS20_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS20(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS20_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS20_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS21_MASK    (0x200000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS21_SHIFT   (21U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS21_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS21(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS21_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS21_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS22_MASK    (0x400000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS22_SHIFT   (22U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS22_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS22(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS22_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS22_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS23_MASK    (0x800000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS23_SHIFT   (23U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS23_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS23(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS23_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS23_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS24_MASK    (0x1000000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS24_SHIFT   (24U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS24_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS24(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS24_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS24_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS25_MASK    (0x2000000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS25_SHIFT   (25U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS25_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS25(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS25_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS25_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS26_MASK    (0x4000000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS26_SHIFT   (26U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS26_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS26(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS26_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS26_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS27_MASK    (0x8000000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS27_SHIFT   (27U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS27_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS27(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS27_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS27_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS28_MASK    (0x10000000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS28_SHIFT   (28U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS28_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS28(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS28_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS28_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS29_MASK    (0x20000000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS29_SHIFT   (29U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS29_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS29(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS29_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS29_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS30_MASK    (0x40000000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS30_SHIFT   (30U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS30_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS30(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS30_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS30_MASK)

#define SBSW_TMWDP_FAULT_STATUS_STATUS31_MASK    (0x80000000U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS31_SHIFT   (31U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS31_WIDTH   (1U)
#define SBSW_TMWDP_FAULT_STATUS_STATUS31(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_FAULT_STATUS_STATUS31_SHIFT)) & SBSW_TMWDP_FAULT_STATUS_STATUS31_MASK)
/*! @} */

/*! @name CONFIG - TMC Configuration */
/*! @{ */

#define SBSW_CONFIG_TIMING_MODE_MASK             (0x1U)
#define SBSW_CONFIG_TIMING_MODE_SHIFT            (0U)
#define SBSW_CONFIG_TIMING_MODE_WIDTH            (1U)
#define SBSW_CONFIG_TIMING_MODE(x)               (((uint32_t)(((uint32_t)(x)) << SBSW_CONFIG_TIMING_MODE_SHIFT)) & SBSW_CONFIG_TIMING_MODE_MASK)

#define SBSW_CONFIG_COMPARE_MODE_MASK            (0x6U)
#define SBSW_CONFIG_COMPARE_MODE_SHIFT           (1U)
#define SBSW_CONFIG_COMPARE_MODE_WIDTH           (2U)
#define SBSW_CONFIG_COMPARE_MODE(x)              (((uint32_t)(((uint32_t)(x)) << SBSW_CONFIG_COMPARE_MODE_SHIFT)) & SBSW_CONFIG_COMPARE_MODE_MASK)
/*! @} */

/*! @name DISTANCE - TMC Distance */
/*! @{ */

#define SBSW_DISTANCE_DISTANCE_MASK              (0xFFFFFFFFU)
#define SBSW_DISTANCE_DISTANCE_SHIFT             (0U)
#define SBSW_DISTANCE_DISTANCE_WIDTH             (32U)
#define SBSW_DISTANCE_DISTANCE(x)                (((uint32_t)(((uint32_t)(x)) << SBSW_DISTANCE_DISTANCE_SHIFT)) & SBSW_DISTANCE_DISTANCE_MASK)
/*! @} */

/*! @name TIMEOUT - TMC Timeout */
/*! @{ */

#define SBSW_TIMEOUT_TIMEOUT_MASK                (0xFFFFFFFFU)
#define SBSW_TIMEOUT_TIMEOUT_SHIFT               (0U)
#define SBSW_TIMEOUT_TIMEOUT_WIDTH               (32U)
#define SBSW_TIMEOUT_TIMEOUT(x)                  (((uint32_t)(((uint32_t)(x)) << SBSW_TIMEOUT_TIMEOUT_SHIFT)) & SBSW_TIMEOUT_TIMEOUT_MASK)
/*! @} */

/*! @name CONTROL - TMC Control */
/*! @{ */

#define SBSW_CONTROL_ENABLE_MASK                 (0x1U)
#define SBSW_CONTROL_ENABLE_SHIFT                (0U)
#define SBSW_CONTROL_ENABLE_WIDTH                (1U)
#define SBSW_CONTROL_ENABLE(x)                   (((uint32_t)(((uint32_t)(x)) << SBSW_CONTROL_ENABLE_SHIFT)) & SBSW_CONTROL_ENABLE_MASK)
/*! @} */

/*! @name R0 - TMC R0 Data */
/*! @{ */

#define SBSW_R0_R0_MASK                          (0xFFFFFFFFU)
#define SBSW_R0_R0_SHIFT                         (0U)
#define SBSW_R0_R0_WIDTH                         (32U)
#define SBSW_R0_R0(x)                            (((uint32_t)(((uint32_t)(x)) << SBSW_R0_R0_SHIFT)) & SBSW_R0_R0_MASK)
/*! @} */

/*! @name R1 - TMC R1 Data */
/*! @{ */

#define SBSW_R1_R1_MASK                          (0xFFFFFFFFU)
#define SBSW_R1_R1_SHIFT                         (0U)
#define SBSW_R1_R1_WIDTH                         (32U)
#define SBSW_R1_R1(x)                            (((uint32_t)(((uint32_t)(x)) << SBSW_R1_R1_SHIFT)) & SBSW_R1_R1_MASK)
/*! @} */

/*! @name STATUS - TMC Status */
/*! @{ */

#define SBSW_STATUS_R0_WRITTEN_MASK              (0x1U)
#define SBSW_STATUS_R0_WRITTEN_SHIFT             (0U)
#define SBSW_STATUS_R0_WRITTEN_WIDTH             (1U)
#define SBSW_STATUS_R0_WRITTEN(x)                (((uint32_t)(((uint32_t)(x)) << SBSW_STATUS_R0_WRITTEN_SHIFT)) & SBSW_STATUS_R0_WRITTEN_MASK)

#define SBSW_STATUS_R1_WRITTEN_MASK              (0x2U)
#define SBSW_STATUS_R1_WRITTEN_SHIFT             (1U)
#define SBSW_STATUS_R1_WRITTEN_WIDTH             (1U)
#define SBSW_STATUS_R1_WRITTEN(x)                (((uint32_t)(((uint32_t)(x)) << SBSW_STATUS_R1_WRITTEN_SHIFT)) & SBSW_STATUS_R1_WRITTEN_MASK)

#define SBSW_STATUS_FAULT_MASK                   (0xCU)
#define SBSW_STATUS_FAULT_SHIFT                  (2U)
#define SBSW_STATUS_FAULT_WIDTH                  (2U)
#define SBSW_STATUS_FAULT(x)                     (((uint32_t)(((uint32_t)(x)) << SBSW_STATUS_FAULT_SHIFT)) & SBSW_STATUS_FAULT_MASK)

#define SBSW_STATUS_OVERWRITTEN_MASK             (0x10U)
#define SBSW_STATUS_OVERWRITTEN_SHIFT            (4U)
#define SBSW_STATUS_OVERWRITTEN_WIDTH            (1U)
#define SBSW_STATUS_OVERWRITTEN(x)               (((uint32_t)(((uint32_t)(x)) << SBSW_STATUS_OVERWRITTEN_SHIFT)) & SBSW_STATUS_OVERWRITTEN_MASK)
/*! @} */

/*! @name TIMER - TMC Timer */
/*! @{ */

#define SBSW_TIMER_TIMER_MASK                    (0xFFFFFFFFU)
#define SBSW_TIMER_TIMER_SHIFT                   (0U)
#define SBSW_TIMER_TIMER_WIDTH                   (32U)
#define SBSW_TIMER_TIMER(x)                      (((uint32_t)(((uint32_t)(x)) << SBSW_TIMER_TIMER_SHIFT)) & SBSW_TIMER_TIMER_MASK)
/*! @} */

/*! @name TMWDP_CONFIG_ADDR - TMWDP Configuration Address */
/*! @{ */

#define SBSW_TMWDP_CONFIG_ADDR_ADDRESS_MASK      (0xFFFFFFFFU)
#define SBSW_TMWDP_CONFIG_ADDR_ADDRESS_SHIFT     (0U)
#define SBSW_TMWDP_CONFIG_ADDR_ADDRESS_WIDTH     (32U)
#define SBSW_TMWDP_CONFIG_ADDR_ADDRESS(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_CONFIG_ADDR_ADDRESS_SHIFT)) & SBSW_TMWDP_CONFIG_ADDR_ADDRESS_MASK)
/*! @} */

/*! @name TMWDP_CONTROL - TMWDP Control */
/*! @{ */

#define SBSW_TMWDP_CONTROL_ENABLE_MASK           (0x1U)
#define SBSW_TMWDP_CONTROL_ENABLE_SHIFT          (0U)
#define SBSW_TMWDP_CONTROL_ENABLE_WIDTH          (1U)
#define SBSW_TMWDP_CONTROL_ENABLE(x)             (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_CONTROL_ENABLE_SHIFT)) & SBSW_TMWDP_CONTROL_ENABLE_MASK)
/*! @} */

/*! @name TMWDP_STATUS - TMWDP Status */
/*! @{ */

#define SBSW_TMWDP_STATUS_INTERNAL_ERROR_MASK    (0x1U)
#define SBSW_TMWDP_STATUS_INTERNAL_ERROR_SHIFT   (0U)
#define SBSW_TMWDP_STATUS_INTERNAL_ERROR_WIDTH   (1U)
#define SBSW_TMWDP_STATUS_INTERNAL_ERROR(x)      (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_STATUS_INTERNAL_ERROR_SHIFT)) & SBSW_TMWDP_STATUS_INTERNAL_ERROR_MASK)

#define SBSW_TMWDP_STATUS_CONFIG_ERROR_MASK      (0x2U)
#define SBSW_TMWDP_STATUS_CONFIG_ERROR_SHIFT     (1U)
#define SBSW_TMWDP_STATUS_CONFIG_ERROR_WIDTH     (1U)
#define SBSW_TMWDP_STATUS_CONFIG_ERROR(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_STATUS_CONFIG_ERROR_SHIFT)) & SBSW_TMWDP_STATUS_CONFIG_ERROR_MASK)

#define SBSW_TMWDP_STATUS_RUNNING_MASK           (0x4U)
#define SBSW_TMWDP_STATUS_RUNNING_SHIFT          (2U)
#define SBSW_TMWDP_STATUS_RUNNING_WIDTH          (1U)
#define SBSW_TMWDP_STATUS_RUNNING(x)             (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_STATUS_RUNNING_SHIFT)) & SBSW_TMWDP_STATUS_RUNNING_MASK)
/*! @} */

/*! @name TMWDP_AUTOMATA_STATUS - TMWDP Automata Status */
/*! @{ */

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS0_MASK  (0x1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS0_SHIFT (0U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS0_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS0(x)    (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS0_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS0_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS1_MASK  (0x2U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS1_SHIFT (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS1_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS1(x)    (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS1_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS1_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS2_MASK  (0x4U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS2_SHIFT (2U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS2_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS2(x)    (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS2_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS2_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS3_MASK  (0x8U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS3_SHIFT (3U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS3_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS3(x)    (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS3_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS3_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS4_MASK  (0x10U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS4_SHIFT (4U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS4_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS4(x)    (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS4_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS4_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS5_MASK  (0x20U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS5_SHIFT (5U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS5_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS5(x)    (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS5_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS5_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS6_MASK  (0x40U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS6_SHIFT (6U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS6_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS6(x)    (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS6_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS6_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS7_MASK  (0x80U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS7_SHIFT (7U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS7_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS7(x)    (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS7_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS7_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS8_MASK  (0x100U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS8_SHIFT (8U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS8_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS8(x)    (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS8_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS8_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS9_MASK  (0x200U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS9_SHIFT (9U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS9_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS9(x)    (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS9_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS9_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS10_MASK (0x400U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS10_SHIFT (10U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS10_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS10(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS10_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS10_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS11_MASK (0x800U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS11_SHIFT (11U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS11_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS11(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS11_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS11_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS12_MASK (0x1000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS12_SHIFT (12U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS12_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS12(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS12_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS12_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS13_MASK (0x2000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS13_SHIFT (13U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS13_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS13(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS13_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS13_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS14_MASK (0x4000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS14_SHIFT (14U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS14_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS14(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS14_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS14_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS15_MASK (0x8000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS15_SHIFT (15U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS15_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS15(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS15_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS15_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS16_MASK (0x10000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS16_SHIFT (16U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS16_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS16(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS16_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS16_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS17_MASK (0x20000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS17_SHIFT (17U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS17_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS17(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS17_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS17_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS18_MASK (0x40000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS18_SHIFT (18U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS18_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS18(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS18_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS18_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS19_MASK (0x80000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS19_SHIFT (19U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS19_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS19(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS19_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS19_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS20_MASK (0x100000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS20_SHIFT (20U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS20_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS20(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS20_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS20_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS21_MASK (0x200000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS21_SHIFT (21U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS21_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS21(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS21_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS21_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS22_MASK (0x400000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS22_SHIFT (22U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS22_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS22(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS22_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS22_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS23_MASK (0x800000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS23_SHIFT (23U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS23_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS23(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS23_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS23_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS24_MASK (0x1000000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS24_SHIFT (24U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS24_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS24(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS24_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS24_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS25_MASK (0x2000000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS25_SHIFT (25U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS25_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS25(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS25_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS25_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS26_MASK (0x4000000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS26_SHIFT (26U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS26_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS26(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS26_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS26_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS27_MASK (0x8000000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS27_SHIFT (27U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS27_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS27(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS27_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS27_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS28_MASK (0x10000000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS28_SHIFT (28U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS28_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS28(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS28_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS28_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS29_MASK (0x20000000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS29_SHIFT (29U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS29_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS29(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS29_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS29_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS30_MASK (0x40000000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS30_SHIFT (30U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS30_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS30(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS30_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS30_MASK)

#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS31_MASK (0x80000000U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS31_SHIFT (31U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS31_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_STATUS_STATUS31(x)   (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_STATUS_STATUS31_SHIFT)) & SBSW_TMWDP_AUTOMATA_STATUS_STATUS31_MASK)
/*! @} */

/*! @name TMWDP_AUTOMATA_ILLGL_TRANS - TMWDP Automata Illegal Transition */
/*! @{ */

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS0_MASK (0x1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS0_SHIFT (0U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS0_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS0(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS0_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS0_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS1_MASK (0x2U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS1_SHIFT (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS1_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS1(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS1_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS1_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS2_MASK (0x4U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS2_SHIFT (2U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS2_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS2(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS2_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS2_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS3_MASK (0x8U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS3_SHIFT (3U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS3_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS3(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS3_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS3_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS4_MASK (0x10U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS4_SHIFT (4U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS4_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS4(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS4_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS4_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS5_MASK (0x20U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS5_SHIFT (5U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS5_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS5(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS5_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS5_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS6_MASK (0x40U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS6_SHIFT (6U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS6_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS6(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS6_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS6_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS7_MASK (0x80U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS7_SHIFT (7U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS7_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS7(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS7_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS7_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS8_MASK (0x100U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS8_SHIFT (8U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS8_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS8(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS8_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS8_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS9_MASK (0x200U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS9_SHIFT (9U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS9_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS9(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS9_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS9_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS10_MASK (0x400U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS10_SHIFT (10U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS10_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS10(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS10_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS10_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS11_MASK (0x800U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS11_SHIFT (11U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS11_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS11(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS11_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS11_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS12_MASK (0x1000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS12_SHIFT (12U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS12_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS12(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS12_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS12_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS13_MASK (0x2000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS13_SHIFT (13U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS13_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS13(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS13_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS13_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS14_MASK (0x4000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS14_SHIFT (14U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS14_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS14(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS14_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS14_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS15_MASK (0x8000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS15_SHIFT (15U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS15_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS15(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS15_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS15_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS16_MASK (0x10000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS16_SHIFT (16U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS16_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS16(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS16_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS16_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS17_MASK (0x20000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS17_SHIFT (17U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS17_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS17(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS17_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS17_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS18_MASK (0x40000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS18_SHIFT (18U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS18_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS18(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS18_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS18_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS19_MASK (0x80000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS19_SHIFT (19U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS19_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS19(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS19_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS19_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS20_MASK (0x100000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS20_SHIFT (20U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS20_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS20(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS20_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS20_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS21_MASK (0x200000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS21_SHIFT (21U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS21_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS21(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS21_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS21_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS22_MASK (0x400000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS22_SHIFT (22U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS22_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS22(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS22_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS22_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS23_MASK (0x800000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS23_SHIFT (23U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS23_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS23(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS23_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS23_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS24_MASK (0x1000000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS24_SHIFT (24U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS24_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS24(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS24_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS24_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS25_MASK (0x2000000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS25_SHIFT (25U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS25_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS25(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS25_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS25_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS26_MASK (0x4000000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS26_SHIFT (26U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS26_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS26(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS26_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS26_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS27_MASK (0x8000000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS27_SHIFT (27U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS27_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS27(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS27_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS27_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS28_MASK (0x10000000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS28_SHIFT (28U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS28_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS28(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS28_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS28_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS29_MASK (0x20000000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS29_SHIFT (29U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS29_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS29(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS29_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS29_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS30_MASK (0x40000000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS30_SHIFT (30U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS30_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS30(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS30_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS30_MASK)

#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS31_MASK (0x80000000U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS31_SHIFT (31U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS31_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS31(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS31_SHIFT)) & SBSW_TMWDP_AUTOMATA_ILLGL_TRANS_STATUS31_MASK)
/*! @} */

/*! @name TMWDP_AUTOMATA_TIME_VIOLATION - TMWDP Automata Time Violation */
/*! @{ */

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS0_MASK (0x1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS0_SHIFT (0U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS0_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS0(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS0_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS0_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS1_MASK (0x2U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS1_SHIFT (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS1_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS1(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS1_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS1_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS2_MASK (0x4U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS2_SHIFT (2U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS2_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS2(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS2_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS2_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS3_MASK (0x8U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS3_SHIFT (3U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS3_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS3(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS3_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS3_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS4_MASK (0x10U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS4_SHIFT (4U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS4_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS4(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS4_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS4_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS5_MASK (0x20U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS5_SHIFT (5U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS5_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS5(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS5_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS5_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS6_MASK (0x40U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS6_SHIFT (6U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS6_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS6(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS6_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS6_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS7_MASK (0x80U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS7_SHIFT (7U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS7_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS7(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS7_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS7_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS8_MASK (0x100U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS8_SHIFT (8U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS8_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS8(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS8_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS8_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS9_MASK (0x200U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS9_SHIFT (9U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS9_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS9(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS9_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS9_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS10_MASK (0x400U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS10_SHIFT (10U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS10_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS10(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS10_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS10_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS11_MASK (0x800U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS11_SHIFT (11U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS11_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS11(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS11_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS11_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS12_MASK (0x1000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS12_SHIFT (12U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS12_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS12(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS12_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS12_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS13_MASK (0x2000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS13_SHIFT (13U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS13_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS13(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS13_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS13_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS14_MASK (0x4000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS14_SHIFT (14U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS14_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS14(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS14_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS14_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS15_MASK (0x8000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS15_SHIFT (15U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS15_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS15(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS15_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS15_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS16_MASK (0x10000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS16_SHIFT (16U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS16_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS16(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS16_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS16_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS17_MASK (0x20000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS17_SHIFT (17U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS17_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS17(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS17_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS17_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS18_MASK (0x40000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS18_SHIFT (18U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS18_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS18(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS18_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS18_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS19_MASK (0x80000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS19_SHIFT (19U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS19_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS19(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS19_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS19_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS20_MASK (0x100000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS20_SHIFT (20U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS20_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS20(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS20_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS20_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS21_MASK (0x200000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS21_SHIFT (21U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS21_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS21(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS21_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS21_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS22_MASK (0x400000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS22_SHIFT (22U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS22_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS22(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS22_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS22_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS23_MASK (0x800000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS23_SHIFT (23U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS23_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS23(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS23_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS23_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS24_MASK (0x1000000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS24_SHIFT (24U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS24_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS24(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS24_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS24_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS25_MASK (0x2000000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS25_SHIFT (25U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS25_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS25(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS25_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS25_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS26_MASK (0x4000000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS26_SHIFT (26U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS26_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS26(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS26_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS26_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS27_MASK (0x8000000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS27_SHIFT (27U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS27_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS27(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS27_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS27_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS28_MASK (0x10000000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS28_SHIFT (28U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS28_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS28(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS28_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS28_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS29_MASK (0x20000000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS29_SHIFT (29U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS29_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS29(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS29_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS29_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS30_MASK (0x40000000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS30_SHIFT (30U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS30_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS30(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS30_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS30_MASK)

#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS31_MASK (0x80000000U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS31_SHIFT (31U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS31_WIDTH (1U)
#define SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS31(x) (((uint32_t)(((uint32_t)(x)) << SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS31_SHIFT)) & SBSW_TMWDP_AUTOMATA_TIME_VIOLATION_STATUS31_MASK)
/*! @} */

/*! @name STATUS - TMWDP Automaton Status */
/*! @{ */

#define SBSW_STATUS_CURRENT_STATE_MASK           (0xFFFFU)
#define SBSW_STATUS_CURRENT_STATE_SHIFT          (0U)
#define SBSW_STATUS_CURRENT_STATE_WIDTH          (16U)
#define SBSW_STATUS_CURRENT_STATE(x)             (((uint32_t)(((uint32_t)(x)) << SBSW_STATUS_CURRENT_STATE_SHIFT)) & SBSW_STATUS_CURRENT_STATE_MASK)

#define SBSW_STATUS_STATUS_MASK                  (0x10000U)
#define SBSW_STATUS_STATUS_SHIFT                 (16U)
#define SBSW_STATUS_STATUS_WIDTH                 (1U)
#define SBSW_STATUS_STATUS(x)                    (((uint32_t)(((uint32_t)(x)) << SBSW_STATUS_STATUS_SHIFT)) & SBSW_STATUS_STATUS_MASK)

#define SBSW_STATUS_ILLEGAL_TRANSITION_MASK      (0x20000U)
#define SBSW_STATUS_ILLEGAL_TRANSITION_SHIFT     (17U)
#define SBSW_STATUS_ILLEGAL_TRANSITION_WIDTH     (1U)
#define SBSW_STATUS_ILLEGAL_TRANSITION(x)        (((uint32_t)(((uint32_t)(x)) << SBSW_STATUS_ILLEGAL_TRANSITION_SHIFT)) & SBSW_STATUS_ILLEGAL_TRANSITION_MASK)

#define SBSW_STATUS_TIME_VIOLATION_MASK          (0x40000U)
#define SBSW_STATUS_TIME_VIOLATION_SHIFT         (18U)
#define SBSW_STATUS_TIME_VIOLATION_WIDTH         (1U)
#define SBSW_STATUS_TIME_VIOLATION(x)            (((uint32_t)(((uint32_t)(x)) << SBSW_STATUS_TIME_VIOLATION_SHIFT)) & SBSW_STATUS_TIME_VIOLATION_MASK)
/*! @} */

/*! @name PRGS_REQ - TMWDP Automaton Progress Request */
/*! @{ */

#define SBSW_PRGS_REQ_PROGRESS_REQ_MASK          (0xFFFFU)
#define SBSW_PRGS_REQ_PROGRESS_REQ_SHIFT         (0U)
#define SBSW_PRGS_REQ_PROGRESS_REQ_WIDTH         (16U)
#define SBSW_PRGS_REQ_PROGRESS_REQ(x)            (((uint32_t)(((uint32_t)(x)) << SBSW_PRGS_REQ_PROGRESS_REQ_SHIFT)) & SBSW_PRGS_REQ_PROGRESS_REQ_MASK)

#define SBSW_PRGS_REQ_WRITTEN_MASK               (0x10000U)
#define SBSW_PRGS_REQ_WRITTEN_SHIFT              (16U)
#define SBSW_PRGS_REQ_WRITTEN_WIDTH              (1U)
#define SBSW_PRGS_REQ_WRITTEN(x)                 (((uint32_t)(((uint32_t)(x)) << SBSW_PRGS_REQ_WRITTEN_SHIFT)) & SBSW_PRGS_REQ_WRITTEN_MASK)

#define SBSW_PRGS_REQ_OVERWRITTEN_MASK           (0x20000U)
#define SBSW_PRGS_REQ_OVERWRITTEN_SHIFT          (17U)
#define SBSW_PRGS_REQ_OVERWRITTEN_WIDTH          (1U)
#define SBSW_PRGS_REQ_OVERWRITTEN(x)             (((uint32_t)(((uint32_t)(x)) << SBSW_PRGS_REQ_OVERWRITTEN_SHIFT)) & SBSW_PRGS_REQ_OVERWRITTEN_MASK)
/*! @} */

/*! @name TC_ID - TMWDP Core Domain ID */
/*! @{ */

#define SBSW_TC_ID_ID_MASK                       (0xFU)
#define SBSW_TC_ID_ID_SHIFT                      (0U)
#define SBSW_TC_ID_ID_WIDTH                      (4U)
#define SBSW_TC_ID_ID(x)                         (((uint32_t)(((uint32_t)(x)) << SBSW_TC_ID_ID_SHIFT)) & SBSW_TC_ID_ID_MASK)

#define SBSW_TC_ID_WRITTEN_MASK                  (0x100U)
#define SBSW_TC_ID_WRITTEN_SHIFT                 (8U)
#define SBSW_TC_ID_WRITTEN_WIDTH                 (1U)
#define SBSW_TC_ID_WRITTEN(x)                    (((uint32_t)(((uint32_t)(x)) << SBSW_TC_ID_WRITTEN_SHIFT)) & SBSW_TC_ID_WRITTEN_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group SBSW_Register_Masks */

/*!
 * @}
 */ /* end of group SBSW_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_SBSW_H_) */
