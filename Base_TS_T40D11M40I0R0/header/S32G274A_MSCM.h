/*
** ###################################################################
**     Processor:           S32G274A_M7
**     Compiler:            Keil ARM C/C++ Compiler
**     Reference manual:    S32G274A RM Rev.5
**     Version:             rev. 2.1, 2022-06-27
**     Build:               b220627
**
**     Abstract:
**         Peripheral Access Layer for S32G274A_M7
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
 * @file S32G274A_MSCM.h
 * @version 2.1
 * @date 2022-06-27
 * @brief Peripheral Access Layer for S32G274A_MSCM
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
#if !defined(S32G274A_MSCM_H_)  /* Check if memory map has not been already included */
#define S32G274A_MSCM_H_

#include "S32G274A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- MSCM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MSCM_Peripheral_Access_Layer MSCM Peripheral Access Layer
 * @{
 */

/** MSCM - Size of Registers Arrays */
#define MSCM_IRSPRC_COUNT                         240u

/** MSCM - Register Layout Typedef */
typedef struct {
  __I  uint32_t CPXTYPE;                           /**< Processor X Type Register, offset: 0x0 */
  __I  uint32_t CPXNUM;                            /**< Processor X Number Register, offset: 0x4 */
  __I  uint32_t CPXREV;                            /**< Processor X Revision Register, offset: 0x8 */
  __I  uint32_t CPXCFG0;                           /**< Processor X Configuration 0 Register, offset: 0xC */
  __I  uint32_t CPXCFG1;                           /**< Processor X Configuration 1 Register, offset: 0x10 */
  __I  uint32_t CPXCFG2;                           /**< Processor X Configuration 2 Register, offset: 0x14 */
  __I  uint32_t CPXCFG3;                           /**< Processor X Configuration 3 Register, offset: 0x18 */
  uint8_t RESERVED_0[4];
  __I  uint32_t CP0TYPE;                           /**< Processor Type Register, offset: 0x20 */
  __I  uint32_t CP0NUM;                            /**< Processor Number Register, offset: 0x24 */
  __I  uint32_t CP0REV;                            /**< Processor Count Register, offset: 0x28 */
  __I  uint32_t CP0CFG0;                           /**< Processor Configuration 0 Register, offset: 0x2C */
  __I  uint32_t CP0CFG1;                           /**< Processor Configuration 1 Register, offset: 0x30 */
  __I  uint32_t CP0CFG2;                           /**< Processor Configuration 2 Register, offset: 0x34 */
  __I  uint32_t CP0CFG3;                           /**< Processor Configuration 3 Register, offset: 0x38 */
  uint8_t RESERVED_1[4];
  __I  uint32_t CP1TYPE;                           /**< Processor Type Register, offset: 0x40 */
  __I  uint32_t CP1NUM;                            /**< Processor Number Register, offset: 0x44 */
  __I  uint32_t CP1REV;                            /**< Processor Count Register, offset: 0x48 */
  __I  uint32_t CP1CFG0;                           /**< Processor Configuration 0 Register, offset: 0x4C */
  __I  uint32_t CP1CFG1;                           /**< Processor Configuration 1 Register, offset: 0x50 */
  __I  uint32_t CP1CFG2;                           /**< Processor Configuration 2 Register, offset: 0x54 */
  __I  uint32_t CP1CFG3;                           /**< Processor Configuration 3 Register, offset: 0x58 */
  uint8_t RESERVED_2[4];
  __I  uint32_t CP2TYPE;                           /**< Processor Type Register, offset: 0x60 */
  __I  uint32_t CP2NUM;                            /**< Processor Number Register, offset: 0x64 */
  __I  uint32_t CP2REV;                            /**< Processor Count Register, offset: 0x68 */
  __I  uint32_t CP2CFG0;                           /**< Processor Configuration 0 Register, offset: 0x6C */
  __I  uint32_t CP2CFG1;                           /**< Processor Configuration 1 Register, offset: 0x70 */
  __I  uint32_t CP2CFG2;                           /**< Processor Configuration 2 Register, offset: 0x74 */
  __I  uint32_t CP2CFG3;                           /**< Processor Configuration 3 Register, offset: 0x78 */
  uint8_t RESERVED_3[4];
  __I  uint32_t CP3TYPE;                           /**< Processor Type Register, offset: 0x80 */
  __I  uint32_t CP3NUM;                            /**< Processor Number Register, offset: 0x84 */
  __I  uint32_t CP3REV;                            /**< Processor Count Register, offset: 0x88 */
  __I  uint32_t CP3CFG0;                           /**< Processor Configuration 0 Register, offset: 0x8C */
  __I  uint32_t CP3CFG1;                           /**< Processor Configuration 1 Register, offset: 0x90 */
  __I  uint32_t CP3CFG2;                           /**< Processor Configuration 2 Register, offset: 0x94 */
  __I  uint32_t CP3CFG3;                           /**< Processor Configuration 3 Register, offset: 0x98 */
  uint8_t RESERVED_4[4];
  __I  uint32_t CP4TYPE;                           /**< Processor Type Register, offset: 0xA0 */
  __I  uint32_t CP4NUM;                            /**< Processor Number Register, offset: 0xA4 */
  __I  uint32_t CP4REV;                            /**< Processor Count Register, offset: 0xA8 */
  __I  uint32_t CP4CFG0;                           /**< Processor Configuration 0 Register, offset: 0xAC */
  __I  uint32_t CP4CFG1;                           /**< Processor Configuration 1 Register, offset: 0xB0 */
  __I  uint32_t CP4CFG2;                           /**< Processor Configuration 2 Register, offset: 0xB4 */
  __I  uint32_t CP4CFG3;                           /**< Processor Configuration 3 Register, offset: 0xB8 */
  uint8_t RESERVED_5[4];
  __I  uint32_t CP5TYPE;                           /**< Processor Type Register, offset: 0xC0 */
  __I  uint32_t CP5NUM;                            /**< Processor Number Register, offset: 0xC4 */
  __I  uint32_t CP5REV;                            /**< Processor Count Register, offset: 0xC8 */
  __I  uint32_t CP5CFG0;                           /**< Processor Configuration 0 Register, offset: 0xCC */
  __I  uint32_t CP5CFG1;                           /**< Processor Configuration 1 Register, offset: 0xD0 */
  __I  uint32_t CP5CFG2;                           /**< Processor Configuration 2 Register, offset: 0xD4 */
  __I  uint32_t CP5CFG3;                           /**< Processor Configuration 3 Register, offset: 0xD8 */
  uint8_t RESERVED_6[4];
  __I  uint32_t CP6TYPE;                           /**< Processor Type Register, offset: 0xE0 */
  __I  uint32_t CP6NUM;                            /**< Processor Number Register, offset: 0xE4 */
  __I  uint32_t CP6REV;                            /**< Processor Count Register, offset: 0xE8 */
  __I  uint32_t CP6CFG0;                           /**< Processor Configuration 0 Register, offset: 0xEC */
  __I  uint32_t CP6CFG1;                           /**< Processor Configuration 1 Register, offset: 0xF0 */
  __I  uint32_t CP6CFG2;                           /**< Processor Configuration 2 Register, offset: 0xF4 */
  __I  uint32_t CP6CFG3;                           /**< Processor Configuration 3 Register, offset: 0xF8 */
  uint8_t RESERVED_7[260];
  __IO uint32_t IRCP0ISR0;                         /**< Interrupt Router CP0 Interrupt0 Status Register, offset: 0x200 */
  __O  uint32_t IRCP0IGR0;                         /**< Interrupt Router CP0 Interrupt0 Generation Register, offset: 0x204 */
  __IO uint32_t IRCP0ISR1;                         /**< Interrupt Router CP0 Interrupt1 Status Register, offset: 0x208 */
  __O  uint32_t IRCP0IGR1;                         /**< Interrupt Router CP0 Interrupt1 Generation Register, offset: 0x20C */
  __IO uint32_t IRCP0ISR2;                         /**< Interrupt Router CP0 Interrupt2 Status Register, offset: 0x210 */
  __O  uint32_t IRCP0IGR2;                         /**< Interrupt Router CP0 Interrupt2 Generation Register, offset: 0x214 */
  __IO uint32_t IRCP0ISR3;                         /**< Interrupt Router CP0 Interrupt3 Status Register, offset: 0x218 */
  __O  uint32_t IRCP0IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0x21C */
  __IO uint32_t IRCP1ISR0;                         /**< Interrupt Router CP1 Interrupt0 Status Register, offset: 0x220 */
  __O  uint32_t IRCP1IGR0;                         /**< Interrupt Router CP1 Interrupt0 Generation Register, offset: 0x224 */
  __IO uint32_t IRCP1ISR1;                         /**< Interrupt Router CP1 Interrupt1 Status Register, offset: 0x228 */
  __O  uint32_t IRCP1IGR1;                         /**< Interrupt Router CP1 Interrupt1 Generation Register, offset: 0x22C */
  __IO uint32_t IRCP1ISR2;                         /**< Interrupt Router CP1 Interrupt2 Status Register, offset: 0x230 */
  __O  uint32_t IRCP1IGR2;                         /**< Interrupt Router CP1 Interrupt2 Generation Register, offset: 0x234 */
  __IO uint32_t IRCP1ISR3;                         /**< Interrupt Router CP1 Interrupt3 Status Register, offset: 0x238 */
  __O  uint32_t IRCP1IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0x23C */
  __IO uint32_t IRCP2ISR0;                         /**< Interrupt Router CP2 Interrupt0 Status Register, offset: 0x240 */
  __O  uint32_t IRCP2IGR0;                         /**< Interrupt Router CP2 Interrupt0 Generation Register, offset: 0x244 */
  __IO uint32_t IRCP2ISR1;                         /**< Interrupt Router CP2 Interrupt1 Status Register, offset: 0x248 */
  __O  uint32_t IRCP2IGR1;                         /**< Interrupt Router CP2 Interrupt1 Generation Register, offset: 0x24C */
  __IO uint32_t IRCP2ISR2;                         /**< Interrupt Router CP2 Interrupt2 Status Register, offset: 0x250 */
  __O  uint32_t IRCP2IGR2;                         /**< Interrupt Router CP2 Interrupt2 Generation Register, offset: 0x254 */
  __IO uint32_t IRCP2ISR3;                         /**< Interrupt Router CP2 Interrupt3 Status Register, offset: 0x258 */
  __O  uint32_t IRCP2IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0x25C */
  __IO uint32_t IRCP3ISR0;                         /**< Interrupt Router CP3 Interrupt0 Status Register, offset: 0x260 */
  __O  uint32_t IRCP3IGR0;                         /**< Interrupt Router CP3 Interrupt0 Generation Register, offset: 0x264 */
  __IO uint32_t IRCP3ISR1;                         /**< Interrupt Router CP3 Interrupt1 Status Register, offset: 0x268 */
  __O  uint32_t IRCP3IGR1;                         /**< Interrupt Router CP3 Interrupt1 Generation Register, offset: 0x26C */
  __IO uint32_t IRCP3ISR2;                         /**< Interrupt Router CP3 Interrupt2 Status Register, offset: 0x270 */
  __O  uint32_t IRCP3IGR2;                         /**< Interrupt Router CP3 Interrupt2 Generation Register, offset: 0x274 */
  __IO uint32_t IRCP3ISR3;                         /**< Interrupt Router CP3 Interrupt3 Status Register, offset: 0x278 */
  __O  uint32_t IRCP3IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0x27C */
  __IO uint32_t IRCP4ISR0;                         /**< Interrupt Router CP4 Interrupt0 Status Register, offset: 0x280 */
  __O  uint32_t IRCP4IGR0;                         /**< Interrupt Router CP4 Interrupt0 Generation Register, offset: 0x284 */
  __IO uint32_t IRCP4ISR1;                         /**< Interrupt Router CP4 Interrupt1 Status Register, offset: 0x288 */
  __O  uint32_t IRCP4IGR1;                         /**< Interrupt Router CP4 Interrupt1 Generation Register, offset: 0x28C */
  __IO uint32_t IRCP4ISR2;                         /**< Interrupt Router CP4 Interrupt2 Status Register, offset: 0x290 */
  __O  uint32_t IRCP4IGR2;                         /**< Interrupt Router CP4 Interrupt2 Generation Register, offset: 0x294 */
  __IO uint32_t IRCP4ISR3;                         /**< Interrupt Router CP4 Interrupt3 Status Register, offset: 0x298 */
  __O  uint32_t IRCP4IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0x29C */
  __IO uint32_t IRCP5ISR0;                         /**< Interrupt Router CP5 Interrupt0 Status Register, offset: 0x2A0 */
  __O  uint32_t IRCP5IGR0;                         /**< Interrupt Router CP5 Interrupt0 Generation Register, offset: 0x2A4 */
  __IO uint32_t IRCP5ISR1;                         /**< Interrupt Router CP5 Interrupt1 Status Register, offset: 0x2A8 */
  __O  uint32_t IRCP5IGR1;                         /**< Interrupt Router CP5 Interrupt1 Generation Register, offset: 0x2AC */
  __IO uint32_t IRCP5ISR2;                         /**< Interrupt Router CP5 Interrupt2 Status Register, offset: 0x2B0 */
  __O  uint32_t IRCP5IGR2;                         /**< Interrupt Router CP5 Interrupt2 Generation Register, offset: 0x2B4 */
  __IO uint32_t IRCP5ISR3;                         /**< Interrupt Router CP5 Interrupt3 Status Register, offset: 0x2B8 */
  __O  uint32_t IRCP5IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0x2BC */
  __IO uint32_t IRCP6ISR0;                         /**< Interrupt Router CP6 Interrupt0 Status Register, offset: 0x2C0 */
  __O  uint32_t IRCP6IGR0;                         /**< Interrupt Router CP6 Interrupt0 Generation Register, offset: 0x2C4 */
  __IO uint32_t IRCP6ISR1;                         /**< Interrupt Router CP6 Interrupt1 Status Register, offset: 0x2C8 */
  __O  uint32_t IRCP6IGR1;                         /**< Interrupt Router CP6 Interrupt1 Generation Register, offset: 0x2CC */
  __IO uint32_t IRCP6ISR2;                         /**< Interrupt Router CP6 Interrupt2 Status Register, offset: 0x2D0 */
  __O  uint32_t IRCP6IGR2;                         /**< Interrupt Router CP6 Interrupt2 Generation Register, offset: 0x2D4 */
  __IO uint32_t IRCP6ISR3;                         /**< Interrupt Router CP6 Interrupt3 Status Register, offset: 0x2D8 */
  __O  uint32_t IRCP6IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0x2DC */
  uint8_t RESERVED_8[56];
  __IO uint32_t IRCP0ISR4;                         /**< Interrupt Router CP0 Interrupt4 Status Register, offset: 0x318 */
  __O  uint32_t IRCP0IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0x31C */
  uint8_t RESERVED_9[24];
  __IO uint32_t IRCP1ISR4;                         /**< Interrupt Router CP1 Interrupt4 Status Register, offset: 0x338 */
  __O  uint32_t IRCP1IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0x33C */
  uint8_t RESERVED_10[24];
  __IO uint32_t IRCP2ISR4;                         /**< Interrupt Router CP2 Interrupt4 Status Register, offset: 0x358 */
  __O  uint32_t IRCP2IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0x35C */
  uint8_t RESERVED_11[24];
  __IO uint32_t IRCP3ISR4;                         /**< Interrupt Router CP3 Interrupt4 Status Register, offset: 0x378 */
  __O  uint32_t IRCP3IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0x37C */
  uint8_t RESERVED_12[24];
  __IO uint32_t IRCP4ISR4;                         /**< Interrupt Router CP4 Interrupt4 Status Register, offset: 0x398 */
  __O  uint32_t IRCP4IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0x39C */
  uint8_t RESERVED_13[24];
  __IO uint32_t IRCP5ISR4;                         /**< Interrupt Router CP5 Interrupt4 Status Register, offset: 0x3B8 */
  __O  uint32_t IRCP5IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0x3BC */
  uint8_t RESERVED_14[24];
  __IO uint32_t IRCP6ISR4;                         /**< Interrupt Router CP6 Interrupt4 Status Register, offset: 0x3D8 */
  __O  uint32_t IRCP6IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0x3DC */
  uint8_t RESERVED_15[32];
  __IO uint32_t IRCPCFG;                           /**< Interrupt Router Configuration Register, offset: 0x400 */
  uint8_t RESERVED_16[1020];
  __IO uint32_t IRNMIC;                            /**< Interrupt Router Non-Maskable Interrupt Control Register, offset: 0x800 */
  uint8_t RESERVED_17[124];
  __IO uint16_t IRSPRC[MSCM_IRSPRC_COUNT];         /**< Interrupt Router Shared Peripheral Routing Control Register, array offset: 0x880, array step: 0x2 */
} MSCM_Type, *MSCM_MemMapPtr;

/** Number of instances of the MSCM module. */
#define MSCM_INSTANCE_COUNT                      (1u)

/* MSCM - Peripheral instance base addresses */
/** Peripheral MSCM base address */
#define IP_MSCM_BASE                             (0x40198000u)
/** Peripheral MSCM base pointer */
#define IP_MSCM                                  ((MSCM_Type *)IP_MSCM_BASE)
/** Array initializer of MSCM peripheral base addresses */
#define IP_MSCM_BASE_ADDRS                       { IP_MSCM_BASE }
/** Array initializer of MSCM peripheral base pointers */
#define IP_MSCM_BASE_PTRS                        { IP_MSCM }

/* ----------------------------------------------------------------------------
   -- MSCM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MSCM_Register_Masks MSCM Register Masks
 * @{
 */

/*! @name CPXTYPE - Processor X Type Register */
/*! @{ */

#define MSCM_CPXTYPE_PERSONALITY_MASK            (0xFFFFFFFFU)
#define MSCM_CPXTYPE_PERSONALITY_SHIFT           (0U)
#define MSCM_CPXTYPE_PERSONALITY_WIDTH           (32U)
#define MSCM_CPXTYPE_PERSONALITY(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_CPXTYPE_PERSONALITY_SHIFT)) & MSCM_CPXTYPE_PERSONALITY_MASK)
/*! @} */

/*! @name CPXNUM - Processor X Number Register */
/*! @{ */

#define MSCM_CPXNUM_CPN_MASK                     (0xFFU)
#define MSCM_CPXNUM_CPN_SHIFT                    (0U)
#define MSCM_CPXNUM_CPN_WIDTH                    (8U)
#define MSCM_CPXNUM_CPN(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CPXNUM_CPN_SHIFT)) & MSCM_CPXNUM_CPN_MASK)
/*! @} */

/*! @name CPXREV - Processor X Revision Register */
/*! @{ */

#define MSCM_CPXREV_RYPZ_MASK                    (0xFFU)
#define MSCM_CPXREV_RYPZ_SHIFT                   (0U)
#define MSCM_CPXREV_RYPZ_WIDTH                   (8U)
#define MSCM_CPXREV_RYPZ(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CPXREV_RYPZ_SHIFT)) & MSCM_CPXREV_RYPZ_MASK)
/*! @} */

/*! @name CPXCFG0 - Processor X Configuration 0 Register */
/*! @{ */

#define MSCM_CPXCFG0_DCWY_MASK                   (0xFFU)
#define MSCM_CPXCFG0_DCWY_SHIFT                  (0U)
#define MSCM_CPXCFG0_DCWY_WIDTH                  (8U)
#define MSCM_CPXCFG0_DCWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG0_DCWY_SHIFT)) & MSCM_CPXCFG0_DCWY_MASK)

#define MSCM_CPXCFG0_DCSZ_MASK                   (0xFF00U)
#define MSCM_CPXCFG0_DCSZ_SHIFT                  (8U)
#define MSCM_CPXCFG0_DCSZ_WIDTH                  (8U)
#define MSCM_CPXCFG0_DCSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG0_DCSZ_SHIFT)) & MSCM_CPXCFG0_DCSZ_MASK)

#define MSCM_CPXCFG0_ICWY_MASK                   (0xFF0000U)
#define MSCM_CPXCFG0_ICWY_SHIFT                  (16U)
#define MSCM_CPXCFG0_ICWY_WIDTH                  (8U)
#define MSCM_CPXCFG0_ICWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG0_ICWY_SHIFT)) & MSCM_CPXCFG0_ICWY_MASK)

#define MSCM_CPXCFG0_ICSZ_MASK                   (0xFF000000U)
#define MSCM_CPXCFG0_ICSZ_SHIFT                  (24U)
#define MSCM_CPXCFG0_ICSZ_WIDTH                  (8U)
#define MSCM_CPXCFG0_ICSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG0_ICSZ_SHIFT)) & MSCM_CPXCFG0_ICSZ_MASK)
/*! @} */

/*! @name CPXCFG1 - Processor X Configuration 1 Register */
/*! @{ */

#define MSCM_CPXCFG1_L2WY_MASK                   (0xFF0000U)
#define MSCM_CPXCFG1_L2WY_SHIFT                  (16U)
#define MSCM_CPXCFG1_L2WY_WIDTH                  (8U)
#define MSCM_CPXCFG1_L2WY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG1_L2WY_SHIFT)) & MSCM_CPXCFG1_L2WY_MASK)

#define MSCM_CPXCFG1_L2SZ_MASK                   (0xFF000000U)
#define MSCM_CPXCFG1_L2SZ_SHIFT                  (24U)
#define MSCM_CPXCFG1_L2SZ_WIDTH                  (8U)
#define MSCM_CPXCFG1_L2SZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG1_L2SZ_SHIFT)) & MSCM_CPXCFG1_L2SZ_MASK)
/*! @} */

/*! @name CPXCFG2 - Processor X Configuration 2 Register */
/*! @{ */

#define MSCM_CPXCFG2_ITCMSZ_MASK                 (0xFF00U)
#define MSCM_CPXCFG2_ITCMSZ_SHIFT                (8U)
#define MSCM_CPXCFG2_ITCMSZ_WIDTH                (8U)
#define MSCM_CPXCFG2_ITCMSZ(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG2_ITCMSZ_SHIFT)) & MSCM_CPXCFG2_ITCMSZ_MASK)

#define MSCM_CPXCFG2_DTCMSZ_MASK                 (0xFF000000U)
#define MSCM_CPXCFG2_DTCMSZ_SHIFT                (24U)
#define MSCM_CPXCFG2_DTCMSZ_WIDTH                (8U)
#define MSCM_CPXCFG2_DTCMSZ(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG2_DTCMSZ_SHIFT)) & MSCM_CPXCFG2_DTCMSZ_MASK)
/*! @} */

/*! @name CPXCFG3 - Processor X Configuration 3 Register */
/*! @{ */

#define MSCM_CPXCFG3_HW_FPU_MASK                 (0x1U)
#define MSCM_CPXCFG3_HW_FPU_SHIFT                (0U)
#define MSCM_CPXCFG3_HW_FPU_WIDTH                (1U)
#define MSCM_CPXCFG3_HW_FPU(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG3_HW_FPU_SHIFT)) & MSCM_CPXCFG3_HW_FPU_MASK)

#define MSCM_CPXCFG3_SIMD_MASK                   (0x2U)
#define MSCM_CPXCFG3_SIMD_SHIFT                  (1U)
#define MSCM_CPXCFG3_SIMD_WIDTH                  (1U)
#define MSCM_CPXCFG3_SIMD(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG3_SIMD_SHIFT)) & MSCM_CPXCFG3_SIMD_MASK)

#define MSCM_CPXCFG3_MMU_MASK                    (0x4U)
#define MSCM_CPXCFG3_MMU_SHIFT                   (2U)
#define MSCM_CPXCFG3_MMU_WIDTH                   (1U)
#define MSCM_CPXCFG3_MMU(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG3_MMU_SHIFT)) & MSCM_CPXCFG3_MMU_MASK)

#define MSCM_CPXCFG3_CMP_MASK                    (0x8U)
#define MSCM_CPXCFG3_CMP_SHIFT                   (3U)
#define MSCM_CPXCFG3_CMP_WIDTH                   (1U)
#define MSCM_CPXCFG3_CMP(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG3_CMP_SHIFT)) & MSCM_CPXCFG3_CMP_MASK)

#define MSCM_CPXCFG3_CPY_MASK                    (0x10U)
#define MSCM_CPXCFG3_CPY_SHIFT                   (4U)
#define MSCM_CPXCFG3_CPY_WIDTH                   (1U)
#define MSCM_CPXCFG3_CPY(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CPXCFG3_CPY_SHIFT)) & MSCM_CPXCFG3_CPY_MASK)
/*! @} */

/*! @name CP0TYPE - Processor Type Register */
/*! @{ */

#define MSCM_CP0TYPE_PERSONALITY_MASK            (0xFFFFFFFFU)
#define MSCM_CP0TYPE_PERSONALITY_SHIFT           (0U)
#define MSCM_CP0TYPE_PERSONALITY_WIDTH           (32U)
#define MSCM_CP0TYPE_PERSONALITY(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_CP0TYPE_PERSONALITY_SHIFT)) & MSCM_CP0TYPE_PERSONALITY_MASK)
/*! @} */

/*! @name CP0NUM - Processor Number Register */
/*! @{ */

#define MSCM_CP0NUM_CPN_MASK                     (0xFFU)
#define MSCM_CP0NUM_CPN_SHIFT                    (0U)
#define MSCM_CP0NUM_CPN_WIDTH                    (8U)
#define MSCM_CP0NUM_CPN(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CP0NUM_CPN_SHIFT)) & MSCM_CP0NUM_CPN_MASK)
/*! @} */

/*! @name CP0REV - Processor Count Register */
/*! @{ */

#define MSCM_CP0REV_RYPZ_MASK                    (0xFFU)
#define MSCM_CP0REV_RYPZ_SHIFT                   (0U)
#define MSCM_CP0REV_RYPZ_WIDTH                   (8U)
#define MSCM_CP0REV_RYPZ(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP0REV_RYPZ_SHIFT)) & MSCM_CP0REV_RYPZ_MASK)
/*! @} */

/*! @name CP0CFG0 - Processor Configuration 0 Register */
/*! @{ */

#define MSCM_CP0CFG0_DCWY_MASK                   (0xFFU)
#define MSCM_CP0CFG0_DCWY_SHIFT                  (0U)
#define MSCM_CP0CFG0_DCWY_WIDTH                  (8U)
#define MSCM_CP0CFG0_DCWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP0CFG0_DCWY_SHIFT)) & MSCM_CP0CFG0_DCWY_MASK)

#define MSCM_CP0CFG0_DCSZ_MASK                   (0xFF00U)
#define MSCM_CP0CFG0_DCSZ_SHIFT                  (8U)
#define MSCM_CP0CFG0_DCSZ_WIDTH                  (8U)
#define MSCM_CP0CFG0_DCSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP0CFG0_DCSZ_SHIFT)) & MSCM_CP0CFG0_DCSZ_MASK)

#define MSCM_CP0CFG0_ICWY_MASK                   (0xFF0000U)
#define MSCM_CP0CFG0_ICWY_SHIFT                  (16U)
#define MSCM_CP0CFG0_ICWY_WIDTH                  (8U)
#define MSCM_CP0CFG0_ICWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP0CFG0_ICWY_SHIFT)) & MSCM_CP0CFG0_ICWY_MASK)

#define MSCM_CP0CFG0_ICSZ_MASK                   (0xFF000000U)
#define MSCM_CP0CFG0_ICSZ_SHIFT                  (24U)
#define MSCM_CP0CFG0_ICSZ_WIDTH                  (8U)
#define MSCM_CP0CFG0_ICSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP0CFG0_ICSZ_SHIFT)) & MSCM_CP0CFG0_ICSZ_MASK)
/*! @} */

/*! @name CP0CFG1 - Processor Configuration 1 Register */
/*! @{ */

#define MSCM_CP0CFG1_L2WY_MASK                   (0xFF0000U)
#define MSCM_CP0CFG1_L2WY_SHIFT                  (16U)
#define MSCM_CP0CFG1_L2WY_WIDTH                  (8U)
#define MSCM_CP0CFG1_L2WY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP0CFG1_L2WY_SHIFT)) & MSCM_CP0CFG1_L2WY_MASK)

#define MSCM_CP0CFG1_L2SZ_MASK                   (0xFF000000U)
#define MSCM_CP0CFG1_L2SZ_SHIFT                  (24U)
#define MSCM_CP0CFG1_L2SZ_WIDTH                  (8U)
#define MSCM_CP0CFG1_L2SZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP0CFG1_L2SZ_SHIFT)) & MSCM_CP0CFG1_L2SZ_MASK)
/*! @} */

/*! @name CP0CFG2 - Processor Configuration 2 Register */
/*! @{ */

#define MSCM_CP0CFG2_TMUSZ_MASK                  (0xFF00U)
#define MSCM_CP0CFG2_TMUSZ_SHIFT                 (8U)
#define MSCM_CP0CFG2_TMUSZ_WIDTH                 (8U)
#define MSCM_CP0CFG2_TMUSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP0CFG2_TMUSZ_SHIFT)) & MSCM_CP0CFG2_TMUSZ_MASK)

#define MSCM_CP0CFG2_TMLSZ_MASK                  (0xFF000000U)
#define MSCM_CP0CFG2_TMLSZ_SHIFT                 (24U)
#define MSCM_CP0CFG2_TMLSZ_WIDTH                 (8U)
#define MSCM_CP0CFG2_TMLSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP0CFG2_TMLSZ_SHIFT)) & MSCM_CP0CFG2_TMLSZ_MASK)
/*! @} */

/*! @name CP0CFG3 - Processor Configuration 3 Register */
/*! @{ */

#define MSCM_CP0CFG3_HW_FPU_MASK                 (0x1U)
#define MSCM_CP0CFG3_HW_FPU_SHIFT                (0U)
#define MSCM_CP0CFG3_HW_FPU_WIDTH                (1U)
#define MSCM_CP0CFG3_HW_FPU(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CP0CFG3_HW_FPU_SHIFT)) & MSCM_CP0CFG3_HW_FPU_MASK)

#define MSCM_CP0CFG3_SIMD_MASK                   (0x2U)
#define MSCM_CP0CFG3_SIMD_SHIFT                  (1U)
#define MSCM_CP0CFG3_SIMD_WIDTH                  (1U)
#define MSCM_CP0CFG3_SIMD(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP0CFG3_SIMD_SHIFT)) & MSCM_CP0CFG3_SIMD_MASK)

#define MSCM_CP0CFG3_MMU_MASK                    (0x4U)
#define MSCM_CP0CFG3_MMU_SHIFT                   (2U)
#define MSCM_CP0CFG3_MMU_WIDTH                   (1U)
#define MSCM_CP0CFG3_MMU(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP0CFG3_MMU_SHIFT)) & MSCM_CP0CFG3_MMU_MASK)

#define MSCM_CP0CFG3_CMP_MASK                    (0x8U)
#define MSCM_CP0CFG3_CMP_SHIFT                   (3U)
#define MSCM_CP0CFG3_CMP_WIDTH                   (1U)
#define MSCM_CP0CFG3_CMP(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP0CFG3_CMP_SHIFT)) & MSCM_CP0CFG3_CMP_MASK)

#define MSCM_CP0CFG3_CPY_MASK                    (0x10U)
#define MSCM_CP0CFG3_CPY_SHIFT                   (4U)
#define MSCM_CP0CFG3_CPY_WIDTH                   (1U)
#define MSCM_CP0CFG3_CPY(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP0CFG3_CPY_SHIFT)) & MSCM_CP0CFG3_CPY_MASK)
/*! @} */

/*! @name CP1TYPE - Processor Type Register */
/*! @{ */

#define MSCM_CP1TYPE_PERSONALITY_MASK            (0xFFFFFFFFU)
#define MSCM_CP1TYPE_PERSONALITY_SHIFT           (0U)
#define MSCM_CP1TYPE_PERSONALITY_WIDTH           (32U)
#define MSCM_CP1TYPE_PERSONALITY(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_CP1TYPE_PERSONALITY_SHIFT)) & MSCM_CP1TYPE_PERSONALITY_MASK)
/*! @} */

/*! @name CP1NUM - Processor Number Register */
/*! @{ */

#define MSCM_CP1NUM_CPN_MASK                     (0xFFU)
#define MSCM_CP1NUM_CPN_SHIFT                    (0U)
#define MSCM_CP1NUM_CPN_WIDTH                    (8U)
#define MSCM_CP1NUM_CPN(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CP1NUM_CPN_SHIFT)) & MSCM_CP1NUM_CPN_MASK)
/*! @} */

/*! @name CP1REV - Processor Count Register */
/*! @{ */

#define MSCM_CP1REV_RYPZ_MASK                    (0xFFU)
#define MSCM_CP1REV_RYPZ_SHIFT                   (0U)
#define MSCM_CP1REV_RYPZ_WIDTH                   (8U)
#define MSCM_CP1REV_RYPZ(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP1REV_RYPZ_SHIFT)) & MSCM_CP1REV_RYPZ_MASK)
/*! @} */

/*! @name CP1CFG0 - Processor Configuration 0 Register */
/*! @{ */

#define MSCM_CP1CFG0_DCWY_MASK                   (0xFFU)
#define MSCM_CP1CFG0_DCWY_SHIFT                  (0U)
#define MSCM_CP1CFG0_DCWY_WIDTH                  (8U)
#define MSCM_CP1CFG0_DCWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP1CFG0_DCWY_SHIFT)) & MSCM_CP1CFG0_DCWY_MASK)

#define MSCM_CP1CFG0_DCSZ_MASK                   (0xFF00U)
#define MSCM_CP1CFG0_DCSZ_SHIFT                  (8U)
#define MSCM_CP1CFG0_DCSZ_WIDTH                  (8U)
#define MSCM_CP1CFG0_DCSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP1CFG0_DCSZ_SHIFT)) & MSCM_CP1CFG0_DCSZ_MASK)

#define MSCM_CP1CFG0_ICWY_MASK                   (0xFF0000U)
#define MSCM_CP1CFG0_ICWY_SHIFT                  (16U)
#define MSCM_CP1CFG0_ICWY_WIDTH                  (8U)
#define MSCM_CP1CFG0_ICWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP1CFG0_ICWY_SHIFT)) & MSCM_CP1CFG0_ICWY_MASK)

#define MSCM_CP1CFG0_ICSZ_MASK                   (0xFF000000U)
#define MSCM_CP1CFG0_ICSZ_SHIFT                  (24U)
#define MSCM_CP1CFG0_ICSZ_WIDTH                  (8U)
#define MSCM_CP1CFG0_ICSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP1CFG0_ICSZ_SHIFT)) & MSCM_CP1CFG0_ICSZ_MASK)
/*! @} */

/*! @name CP1CFG1 - Processor Configuration 1 Register */
/*! @{ */

#define MSCM_CP1CFG1_L2WY_MASK                   (0xFF0000U)
#define MSCM_CP1CFG1_L2WY_SHIFT                  (16U)
#define MSCM_CP1CFG1_L2WY_WIDTH                  (8U)
#define MSCM_CP1CFG1_L2WY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP1CFG1_L2WY_SHIFT)) & MSCM_CP1CFG1_L2WY_MASK)

#define MSCM_CP1CFG1_L2SZ_MASK                   (0xFF000000U)
#define MSCM_CP1CFG1_L2SZ_SHIFT                  (24U)
#define MSCM_CP1CFG1_L2SZ_WIDTH                  (8U)
#define MSCM_CP1CFG1_L2SZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP1CFG1_L2SZ_SHIFT)) & MSCM_CP1CFG1_L2SZ_MASK)
/*! @} */

/*! @name CP1CFG2 - Processor Configuration 2 Register */
/*! @{ */

#define MSCM_CP1CFG2_TMUSZ_MASK                  (0xFF00U)
#define MSCM_CP1CFG2_TMUSZ_SHIFT                 (8U)
#define MSCM_CP1CFG2_TMUSZ_WIDTH                 (8U)
#define MSCM_CP1CFG2_TMUSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP1CFG2_TMUSZ_SHIFT)) & MSCM_CP1CFG2_TMUSZ_MASK)

#define MSCM_CP1CFG2_TMLSZ_MASK                  (0xFF000000U)
#define MSCM_CP1CFG2_TMLSZ_SHIFT                 (24U)
#define MSCM_CP1CFG2_TMLSZ_WIDTH                 (8U)
#define MSCM_CP1CFG2_TMLSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP1CFG2_TMLSZ_SHIFT)) & MSCM_CP1CFG2_TMLSZ_MASK)
/*! @} */

/*! @name CP1CFG3 - Processor Configuration 3 Register */
/*! @{ */

#define MSCM_CP1CFG3_HW_FPU_MASK                 (0x1U)
#define MSCM_CP1CFG3_HW_FPU_SHIFT                (0U)
#define MSCM_CP1CFG3_HW_FPU_WIDTH                (1U)
#define MSCM_CP1CFG3_HW_FPU(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CP1CFG3_HW_FPU_SHIFT)) & MSCM_CP1CFG3_HW_FPU_MASK)

#define MSCM_CP1CFG3_SIMD_MASK                   (0x2U)
#define MSCM_CP1CFG3_SIMD_SHIFT                  (1U)
#define MSCM_CP1CFG3_SIMD_WIDTH                  (1U)
#define MSCM_CP1CFG3_SIMD(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP1CFG3_SIMD_SHIFT)) & MSCM_CP1CFG3_SIMD_MASK)

#define MSCM_CP1CFG3_MMU_MASK                    (0x4U)
#define MSCM_CP1CFG3_MMU_SHIFT                   (2U)
#define MSCM_CP1CFG3_MMU_WIDTH                   (1U)
#define MSCM_CP1CFG3_MMU(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP1CFG3_MMU_SHIFT)) & MSCM_CP1CFG3_MMU_MASK)

#define MSCM_CP1CFG3_CMP_MASK                    (0x8U)
#define MSCM_CP1CFG3_CMP_SHIFT                   (3U)
#define MSCM_CP1CFG3_CMP_WIDTH                   (1U)
#define MSCM_CP1CFG3_CMP(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP1CFG3_CMP_SHIFT)) & MSCM_CP1CFG3_CMP_MASK)

#define MSCM_CP1CFG3_CPY_MASK                    (0x10U)
#define MSCM_CP1CFG3_CPY_SHIFT                   (4U)
#define MSCM_CP1CFG3_CPY_WIDTH                   (1U)
#define MSCM_CP1CFG3_CPY(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP1CFG3_CPY_SHIFT)) & MSCM_CP1CFG3_CPY_MASK)
/*! @} */

/*! @name CP2TYPE - Processor Type Register */
/*! @{ */

#define MSCM_CP2TYPE_PERSONALITY_MASK            (0xFFFFFFFFU)
#define MSCM_CP2TYPE_PERSONALITY_SHIFT           (0U)
#define MSCM_CP2TYPE_PERSONALITY_WIDTH           (32U)
#define MSCM_CP2TYPE_PERSONALITY(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_CP2TYPE_PERSONALITY_SHIFT)) & MSCM_CP2TYPE_PERSONALITY_MASK)
/*! @} */

/*! @name CP2NUM - Processor Number Register */
/*! @{ */

#define MSCM_CP2NUM_CPN_MASK                     (0xFFU)
#define MSCM_CP2NUM_CPN_SHIFT                    (0U)
#define MSCM_CP2NUM_CPN_WIDTH                    (8U)
#define MSCM_CP2NUM_CPN(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CP2NUM_CPN_SHIFT)) & MSCM_CP2NUM_CPN_MASK)
/*! @} */

/*! @name CP2REV - Processor Count Register */
/*! @{ */

#define MSCM_CP2REV_RYPZ_MASK                    (0xFFU)
#define MSCM_CP2REV_RYPZ_SHIFT                   (0U)
#define MSCM_CP2REV_RYPZ_WIDTH                   (8U)
#define MSCM_CP2REV_RYPZ(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP2REV_RYPZ_SHIFT)) & MSCM_CP2REV_RYPZ_MASK)
/*! @} */

/*! @name CP2CFG0 - Processor Configuration 0 Register */
/*! @{ */

#define MSCM_CP2CFG0_DCWY_MASK                   (0xFFU)
#define MSCM_CP2CFG0_DCWY_SHIFT                  (0U)
#define MSCM_CP2CFG0_DCWY_WIDTH                  (8U)
#define MSCM_CP2CFG0_DCWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP2CFG0_DCWY_SHIFT)) & MSCM_CP2CFG0_DCWY_MASK)

#define MSCM_CP2CFG0_DCSZ_MASK                   (0xFF00U)
#define MSCM_CP2CFG0_DCSZ_SHIFT                  (8U)
#define MSCM_CP2CFG0_DCSZ_WIDTH                  (8U)
#define MSCM_CP2CFG0_DCSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP2CFG0_DCSZ_SHIFT)) & MSCM_CP2CFG0_DCSZ_MASK)

#define MSCM_CP2CFG0_ICWY_MASK                   (0xFF0000U)
#define MSCM_CP2CFG0_ICWY_SHIFT                  (16U)
#define MSCM_CP2CFG0_ICWY_WIDTH                  (8U)
#define MSCM_CP2CFG0_ICWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP2CFG0_ICWY_SHIFT)) & MSCM_CP2CFG0_ICWY_MASK)

#define MSCM_CP2CFG0_ICSZ_MASK                   (0xFF000000U)
#define MSCM_CP2CFG0_ICSZ_SHIFT                  (24U)
#define MSCM_CP2CFG0_ICSZ_WIDTH                  (8U)
#define MSCM_CP2CFG0_ICSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP2CFG0_ICSZ_SHIFT)) & MSCM_CP2CFG0_ICSZ_MASK)
/*! @} */

/*! @name CP2CFG1 - Processor Configuration 1 Register */
/*! @{ */

#define MSCM_CP2CFG1_L2WY_MASK                   (0xFF0000U)
#define MSCM_CP2CFG1_L2WY_SHIFT                  (16U)
#define MSCM_CP2CFG1_L2WY_WIDTH                  (8U)
#define MSCM_CP2CFG1_L2WY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP2CFG1_L2WY_SHIFT)) & MSCM_CP2CFG1_L2WY_MASK)

#define MSCM_CP2CFG1_L2SZ_MASK                   (0xFF000000U)
#define MSCM_CP2CFG1_L2SZ_SHIFT                  (24U)
#define MSCM_CP2CFG1_L2SZ_WIDTH                  (8U)
#define MSCM_CP2CFG1_L2SZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP2CFG1_L2SZ_SHIFT)) & MSCM_CP2CFG1_L2SZ_MASK)
/*! @} */

/*! @name CP2CFG2 - Processor Configuration 2 Register */
/*! @{ */

#define MSCM_CP2CFG2_TMUSZ_MASK                  (0xFF00U)
#define MSCM_CP2CFG2_TMUSZ_SHIFT                 (8U)
#define MSCM_CP2CFG2_TMUSZ_WIDTH                 (8U)
#define MSCM_CP2CFG2_TMUSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP2CFG2_TMUSZ_SHIFT)) & MSCM_CP2CFG2_TMUSZ_MASK)

#define MSCM_CP2CFG2_TMLSZ_MASK                  (0xFF000000U)
#define MSCM_CP2CFG2_TMLSZ_SHIFT                 (24U)
#define MSCM_CP2CFG2_TMLSZ_WIDTH                 (8U)
#define MSCM_CP2CFG2_TMLSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP2CFG2_TMLSZ_SHIFT)) & MSCM_CP2CFG2_TMLSZ_MASK)
/*! @} */

/*! @name CP2CFG3 - Processor Configuration 3 Register */
/*! @{ */

#define MSCM_CP2CFG3_HW_FPU_MASK                 (0x1U)
#define MSCM_CP2CFG3_HW_FPU_SHIFT                (0U)
#define MSCM_CP2CFG3_HW_FPU_WIDTH                (1U)
#define MSCM_CP2CFG3_HW_FPU(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CP2CFG3_HW_FPU_SHIFT)) & MSCM_CP2CFG3_HW_FPU_MASK)

#define MSCM_CP2CFG3_SIMD_MASK                   (0x2U)
#define MSCM_CP2CFG3_SIMD_SHIFT                  (1U)
#define MSCM_CP2CFG3_SIMD_WIDTH                  (1U)
#define MSCM_CP2CFG3_SIMD(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP2CFG3_SIMD_SHIFT)) & MSCM_CP2CFG3_SIMD_MASK)

#define MSCM_CP2CFG3_MMU_MASK                    (0x4U)
#define MSCM_CP2CFG3_MMU_SHIFT                   (2U)
#define MSCM_CP2CFG3_MMU_WIDTH                   (1U)
#define MSCM_CP2CFG3_MMU(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP2CFG3_MMU_SHIFT)) & MSCM_CP2CFG3_MMU_MASK)

#define MSCM_CP2CFG3_CMP_MASK                    (0x8U)
#define MSCM_CP2CFG3_CMP_SHIFT                   (3U)
#define MSCM_CP2CFG3_CMP_WIDTH                   (1U)
#define MSCM_CP2CFG3_CMP(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP2CFG3_CMP_SHIFT)) & MSCM_CP2CFG3_CMP_MASK)

#define MSCM_CP2CFG3_CPY_MASK                    (0x10U)
#define MSCM_CP2CFG3_CPY_SHIFT                   (4U)
#define MSCM_CP2CFG3_CPY_WIDTH                   (1U)
#define MSCM_CP2CFG3_CPY(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP2CFG3_CPY_SHIFT)) & MSCM_CP2CFG3_CPY_MASK)
/*! @} */

/*! @name CP3TYPE - Processor Type Register */
/*! @{ */

#define MSCM_CP3TYPE_PERSONALITY_MASK            (0xFFFFFFFFU)
#define MSCM_CP3TYPE_PERSONALITY_SHIFT           (0U)
#define MSCM_CP3TYPE_PERSONALITY_WIDTH           (32U)
#define MSCM_CP3TYPE_PERSONALITY(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_CP3TYPE_PERSONALITY_SHIFT)) & MSCM_CP3TYPE_PERSONALITY_MASK)
/*! @} */

/*! @name CP3NUM - Processor Number Register */
/*! @{ */

#define MSCM_CP3NUM_CPN_MASK                     (0xFFU)
#define MSCM_CP3NUM_CPN_SHIFT                    (0U)
#define MSCM_CP3NUM_CPN_WIDTH                    (8U)
#define MSCM_CP3NUM_CPN(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CP3NUM_CPN_SHIFT)) & MSCM_CP3NUM_CPN_MASK)
/*! @} */

/*! @name CP3REV - Processor Count Register */
/*! @{ */

#define MSCM_CP3REV_RYPZ_MASK                    (0xFFU)
#define MSCM_CP3REV_RYPZ_SHIFT                   (0U)
#define MSCM_CP3REV_RYPZ_WIDTH                   (8U)
#define MSCM_CP3REV_RYPZ(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP3REV_RYPZ_SHIFT)) & MSCM_CP3REV_RYPZ_MASK)
/*! @} */

/*! @name CP3CFG0 - Processor Configuration 0 Register */
/*! @{ */

#define MSCM_CP3CFG0_DCWY_MASK                   (0xFFU)
#define MSCM_CP3CFG0_DCWY_SHIFT                  (0U)
#define MSCM_CP3CFG0_DCWY_WIDTH                  (8U)
#define MSCM_CP3CFG0_DCWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP3CFG0_DCWY_SHIFT)) & MSCM_CP3CFG0_DCWY_MASK)

#define MSCM_CP3CFG0_DCSZ_MASK                   (0xFF00U)
#define MSCM_CP3CFG0_DCSZ_SHIFT                  (8U)
#define MSCM_CP3CFG0_DCSZ_WIDTH                  (8U)
#define MSCM_CP3CFG0_DCSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP3CFG0_DCSZ_SHIFT)) & MSCM_CP3CFG0_DCSZ_MASK)

#define MSCM_CP3CFG0_ICWY_MASK                   (0xFF0000U)
#define MSCM_CP3CFG0_ICWY_SHIFT                  (16U)
#define MSCM_CP3CFG0_ICWY_WIDTH                  (8U)
#define MSCM_CP3CFG0_ICWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP3CFG0_ICWY_SHIFT)) & MSCM_CP3CFG0_ICWY_MASK)

#define MSCM_CP3CFG0_ICSZ_MASK                   (0xFF000000U)
#define MSCM_CP3CFG0_ICSZ_SHIFT                  (24U)
#define MSCM_CP3CFG0_ICSZ_WIDTH                  (8U)
#define MSCM_CP3CFG0_ICSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP3CFG0_ICSZ_SHIFT)) & MSCM_CP3CFG0_ICSZ_MASK)
/*! @} */

/*! @name CP3CFG1 - Processor Configuration 1 Register */
/*! @{ */

#define MSCM_CP3CFG1_L2WY_MASK                   (0xFF0000U)
#define MSCM_CP3CFG1_L2WY_SHIFT                  (16U)
#define MSCM_CP3CFG1_L2WY_WIDTH                  (8U)
#define MSCM_CP3CFG1_L2WY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP3CFG1_L2WY_SHIFT)) & MSCM_CP3CFG1_L2WY_MASK)

#define MSCM_CP3CFG1_L2SZ_MASK                   (0xFF000000U)
#define MSCM_CP3CFG1_L2SZ_SHIFT                  (24U)
#define MSCM_CP3CFG1_L2SZ_WIDTH                  (8U)
#define MSCM_CP3CFG1_L2SZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP3CFG1_L2SZ_SHIFT)) & MSCM_CP3CFG1_L2SZ_MASK)
/*! @} */

/*! @name CP3CFG2 - Processor Configuration 2 Register */
/*! @{ */

#define MSCM_CP3CFG2_TMUSZ_MASK                  (0xFF00U)
#define MSCM_CP3CFG2_TMUSZ_SHIFT                 (8U)
#define MSCM_CP3CFG2_TMUSZ_WIDTH                 (8U)
#define MSCM_CP3CFG2_TMUSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP3CFG2_TMUSZ_SHIFT)) & MSCM_CP3CFG2_TMUSZ_MASK)

#define MSCM_CP3CFG2_TMLSZ_MASK                  (0xFF000000U)
#define MSCM_CP3CFG2_TMLSZ_SHIFT                 (24U)
#define MSCM_CP3CFG2_TMLSZ_WIDTH                 (8U)
#define MSCM_CP3CFG2_TMLSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP3CFG2_TMLSZ_SHIFT)) & MSCM_CP3CFG2_TMLSZ_MASK)
/*! @} */

/*! @name CP3CFG3 - Processor Configuration 3 Register */
/*! @{ */

#define MSCM_CP3CFG3_HW_FPU_MASK                 (0x1U)
#define MSCM_CP3CFG3_HW_FPU_SHIFT                (0U)
#define MSCM_CP3CFG3_HW_FPU_WIDTH                (1U)
#define MSCM_CP3CFG3_HW_FPU(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CP3CFG3_HW_FPU_SHIFT)) & MSCM_CP3CFG3_HW_FPU_MASK)

#define MSCM_CP3CFG3_SIMD_MASK                   (0x2U)
#define MSCM_CP3CFG3_SIMD_SHIFT                  (1U)
#define MSCM_CP3CFG3_SIMD_WIDTH                  (1U)
#define MSCM_CP3CFG3_SIMD(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP3CFG3_SIMD_SHIFT)) & MSCM_CP3CFG3_SIMD_MASK)

#define MSCM_CP3CFG3_MMU_MASK                    (0x4U)
#define MSCM_CP3CFG3_MMU_SHIFT                   (2U)
#define MSCM_CP3CFG3_MMU_WIDTH                   (1U)
#define MSCM_CP3CFG3_MMU(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP3CFG3_MMU_SHIFT)) & MSCM_CP3CFG3_MMU_MASK)

#define MSCM_CP3CFG3_CMP_MASK                    (0x8U)
#define MSCM_CP3CFG3_CMP_SHIFT                   (3U)
#define MSCM_CP3CFG3_CMP_WIDTH                   (1U)
#define MSCM_CP3CFG3_CMP(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP3CFG3_CMP_SHIFT)) & MSCM_CP3CFG3_CMP_MASK)

#define MSCM_CP3CFG3_CPY_MASK                    (0x10U)
#define MSCM_CP3CFG3_CPY_SHIFT                   (4U)
#define MSCM_CP3CFG3_CPY_WIDTH                   (1U)
#define MSCM_CP3CFG3_CPY(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP3CFG3_CPY_SHIFT)) & MSCM_CP3CFG3_CPY_MASK)
/*! @} */

/*! @name CP4TYPE - Processor Type Register */
/*! @{ */

#define MSCM_CP4TYPE_PERSONALITY_MASK            (0xFFFFFFFFU)
#define MSCM_CP4TYPE_PERSONALITY_SHIFT           (0U)
#define MSCM_CP4TYPE_PERSONALITY_WIDTH           (32U)
#define MSCM_CP4TYPE_PERSONALITY(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_CP4TYPE_PERSONALITY_SHIFT)) & MSCM_CP4TYPE_PERSONALITY_MASK)
/*! @} */

/*! @name CP4NUM - Processor Number Register */
/*! @{ */

#define MSCM_CP4NUM_CPN_MASK                     (0xFFU)
#define MSCM_CP4NUM_CPN_SHIFT                    (0U)
#define MSCM_CP4NUM_CPN_WIDTH                    (8U)
#define MSCM_CP4NUM_CPN(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CP4NUM_CPN_SHIFT)) & MSCM_CP4NUM_CPN_MASK)
/*! @} */

/*! @name CP4REV - Processor Count Register */
/*! @{ */

#define MSCM_CP4REV_RYPZ_MASK                    (0xFFU)
#define MSCM_CP4REV_RYPZ_SHIFT                   (0U)
#define MSCM_CP4REV_RYPZ_WIDTH                   (8U)
#define MSCM_CP4REV_RYPZ(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP4REV_RYPZ_SHIFT)) & MSCM_CP4REV_RYPZ_MASK)
/*! @} */

/*! @name CP4CFG0 - Processor Configuration 0 Register */
/*! @{ */

#define MSCM_CP4CFG0_DCWY_MASK                   (0xFFU)
#define MSCM_CP4CFG0_DCWY_SHIFT                  (0U)
#define MSCM_CP4CFG0_DCWY_WIDTH                  (8U)
#define MSCM_CP4CFG0_DCWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP4CFG0_DCWY_SHIFT)) & MSCM_CP4CFG0_DCWY_MASK)

#define MSCM_CP4CFG0_DCSZ_MASK                   (0xFF00U)
#define MSCM_CP4CFG0_DCSZ_SHIFT                  (8U)
#define MSCM_CP4CFG0_DCSZ_WIDTH                  (8U)
#define MSCM_CP4CFG0_DCSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP4CFG0_DCSZ_SHIFT)) & MSCM_CP4CFG0_DCSZ_MASK)

#define MSCM_CP4CFG0_ICWY_MASK                   (0xFF0000U)
#define MSCM_CP4CFG0_ICWY_SHIFT                  (16U)
#define MSCM_CP4CFG0_ICWY_WIDTH                  (8U)
#define MSCM_CP4CFG0_ICWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP4CFG0_ICWY_SHIFT)) & MSCM_CP4CFG0_ICWY_MASK)

#define MSCM_CP4CFG0_ICSZ_MASK                   (0xFF000000U)
#define MSCM_CP4CFG0_ICSZ_SHIFT                  (24U)
#define MSCM_CP4CFG0_ICSZ_WIDTH                  (8U)
#define MSCM_CP4CFG0_ICSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP4CFG0_ICSZ_SHIFT)) & MSCM_CP4CFG0_ICSZ_MASK)
/*! @} */

/*! @name CP4CFG1 - Processor Configuration 1 Register */
/*! @{ */

#define MSCM_CP4CFG1_L2WY_MASK                   (0xFF0000U)
#define MSCM_CP4CFG1_L2WY_SHIFT                  (16U)
#define MSCM_CP4CFG1_L2WY_WIDTH                  (8U)
#define MSCM_CP4CFG1_L2WY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP4CFG1_L2WY_SHIFT)) & MSCM_CP4CFG1_L2WY_MASK)

#define MSCM_CP4CFG1_L2SZ_MASK                   (0xFF000000U)
#define MSCM_CP4CFG1_L2SZ_SHIFT                  (24U)
#define MSCM_CP4CFG1_L2SZ_WIDTH                  (8U)
#define MSCM_CP4CFG1_L2SZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP4CFG1_L2SZ_SHIFT)) & MSCM_CP4CFG1_L2SZ_MASK)
/*! @} */

/*! @name CP4CFG2 - Processor Configuration 2 Register */
/*! @{ */

#define MSCM_CP4CFG2_TMUSZ_MASK                  (0xFF00U)
#define MSCM_CP4CFG2_TMUSZ_SHIFT                 (8U)
#define MSCM_CP4CFG2_TMUSZ_WIDTH                 (8U)
#define MSCM_CP4CFG2_TMUSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP4CFG2_TMUSZ_SHIFT)) & MSCM_CP4CFG2_TMUSZ_MASK)

#define MSCM_CP4CFG2_TMLSZ_MASK                  (0xFF000000U)
#define MSCM_CP4CFG2_TMLSZ_SHIFT                 (24U)
#define MSCM_CP4CFG2_TMLSZ_WIDTH                 (8U)
#define MSCM_CP4CFG2_TMLSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP4CFG2_TMLSZ_SHIFT)) & MSCM_CP4CFG2_TMLSZ_MASK)
/*! @} */

/*! @name CP4CFG3 - Processor Configuration 3 Register */
/*! @{ */

#define MSCM_CP4CFG3_HW_FPU_MASK                 (0x1U)
#define MSCM_CP4CFG3_HW_FPU_SHIFT                (0U)
#define MSCM_CP4CFG3_HW_FPU_WIDTH                (1U)
#define MSCM_CP4CFG3_HW_FPU(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CP4CFG3_HW_FPU_SHIFT)) & MSCM_CP4CFG3_HW_FPU_MASK)

#define MSCM_CP4CFG3_SIMD_MASK                   (0x2U)
#define MSCM_CP4CFG3_SIMD_SHIFT                  (1U)
#define MSCM_CP4CFG3_SIMD_WIDTH                  (1U)
#define MSCM_CP4CFG3_SIMD(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP4CFG3_SIMD_SHIFT)) & MSCM_CP4CFG3_SIMD_MASK)

#define MSCM_CP4CFG3_MMU_MASK                    (0x4U)
#define MSCM_CP4CFG3_MMU_SHIFT                   (2U)
#define MSCM_CP4CFG3_MMU_WIDTH                   (1U)
#define MSCM_CP4CFG3_MMU(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP4CFG3_MMU_SHIFT)) & MSCM_CP4CFG3_MMU_MASK)

#define MSCM_CP4CFG3_CMP_MASK                    (0x8U)
#define MSCM_CP4CFG3_CMP_SHIFT                   (3U)
#define MSCM_CP4CFG3_CMP_WIDTH                   (1U)
#define MSCM_CP4CFG3_CMP(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP4CFG3_CMP_SHIFT)) & MSCM_CP4CFG3_CMP_MASK)

#define MSCM_CP4CFG3_CPY_MASK                    (0x10U)
#define MSCM_CP4CFG3_CPY_SHIFT                   (4U)
#define MSCM_CP4CFG3_CPY_WIDTH                   (1U)
#define MSCM_CP4CFG3_CPY(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP4CFG3_CPY_SHIFT)) & MSCM_CP4CFG3_CPY_MASK)
/*! @} */

/*! @name CP5TYPE - Processor Type Register */
/*! @{ */

#define MSCM_CP5TYPE_PERSONALITY_MASK            (0xFFFFFFFFU)
#define MSCM_CP5TYPE_PERSONALITY_SHIFT           (0U)
#define MSCM_CP5TYPE_PERSONALITY_WIDTH           (32U)
#define MSCM_CP5TYPE_PERSONALITY(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_CP5TYPE_PERSONALITY_SHIFT)) & MSCM_CP5TYPE_PERSONALITY_MASK)
/*! @} */

/*! @name CP5NUM - Processor Number Register */
/*! @{ */

#define MSCM_CP5NUM_CPN_MASK                     (0xFFU)
#define MSCM_CP5NUM_CPN_SHIFT                    (0U)
#define MSCM_CP5NUM_CPN_WIDTH                    (8U)
#define MSCM_CP5NUM_CPN(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CP5NUM_CPN_SHIFT)) & MSCM_CP5NUM_CPN_MASK)
/*! @} */

/*! @name CP5REV - Processor Count Register */
/*! @{ */

#define MSCM_CP5REV_RYPZ_MASK                    (0xFFU)
#define MSCM_CP5REV_RYPZ_SHIFT                   (0U)
#define MSCM_CP5REV_RYPZ_WIDTH                   (8U)
#define MSCM_CP5REV_RYPZ(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP5REV_RYPZ_SHIFT)) & MSCM_CP5REV_RYPZ_MASK)
/*! @} */

/*! @name CP5CFG0 - Processor Configuration 0 Register */
/*! @{ */

#define MSCM_CP5CFG0_DCWY_MASK                   (0xFFU)
#define MSCM_CP5CFG0_DCWY_SHIFT                  (0U)
#define MSCM_CP5CFG0_DCWY_WIDTH                  (8U)
#define MSCM_CP5CFG0_DCWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP5CFG0_DCWY_SHIFT)) & MSCM_CP5CFG0_DCWY_MASK)

#define MSCM_CP5CFG0_DCSZ_MASK                   (0xFF00U)
#define MSCM_CP5CFG0_DCSZ_SHIFT                  (8U)
#define MSCM_CP5CFG0_DCSZ_WIDTH                  (8U)
#define MSCM_CP5CFG0_DCSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP5CFG0_DCSZ_SHIFT)) & MSCM_CP5CFG0_DCSZ_MASK)

#define MSCM_CP5CFG0_ICWY_MASK                   (0xFF0000U)
#define MSCM_CP5CFG0_ICWY_SHIFT                  (16U)
#define MSCM_CP5CFG0_ICWY_WIDTH                  (8U)
#define MSCM_CP5CFG0_ICWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP5CFG0_ICWY_SHIFT)) & MSCM_CP5CFG0_ICWY_MASK)

#define MSCM_CP5CFG0_ICSZ_MASK                   (0xFF000000U)
#define MSCM_CP5CFG0_ICSZ_SHIFT                  (24U)
#define MSCM_CP5CFG0_ICSZ_WIDTH                  (8U)
#define MSCM_CP5CFG0_ICSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP5CFG0_ICSZ_SHIFT)) & MSCM_CP5CFG0_ICSZ_MASK)
/*! @} */

/*! @name CP5CFG1 - Processor Configuration 1 Register */
/*! @{ */

#define MSCM_CP5CFG1_L2WY_MASK                   (0xFF0000U)
#define MSCM_CP5CFG1_L2WY_SHIFT                  (16U)
#define MSCM_CP5CFG1_L2WY_WIDTH                  (8U)
#define MSCM_CP5CFG1_L2WY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP5CFG1_L2WY_SHIFT)) & MSCM_CP5CFG1_L2WY_MASK)

#define MSCM_CP5CFG1_L2SZ_MASK                   (0xFF000000U)
#define MSCM_CP5CFG1_L2SZ_SHIFT                  (24U)
#define MSCM_CP5CFG1_L2SZ_WIDTH                  (8U)
#define MSCM_CP5CFG1_L2SZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP5CFG1_L2SZ_SHIFT)) & MSCM_CP5CFG1_L2SZ_MASK)
/*! @} */

/*! @name CP5CFG2 - Processor Configuration 2 Register */
/*! @{ */

#define MSCM_CP5CFG2_TMUSZ_MASK                  (0xFF00U)
#define MSCM_CP5CFG2_TMUSZ_SHIFT                 (8U)
#define MSCM_CP5CFG2_TMUSZ_WIDTH                 (8U)
#define MSCM_CP5CFG2_TMUSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP5CFG2_TMUSZ_SHIFT)) & MSCM_CP5CFG2_TMUSZ_MASK)

#define MSCM_CP5CFG2_TMLSZ_MASK                  (0xFF000000U)
#define MSCM_CP5CFG2_TMLSZ_SHIFT                 (24U)
#define MSCM_CP5CFG2_TMLSZ_WIDTH                 (8U)
#define MSCM_CP5CFG2_TMLSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP5CFG2_TMLSZ_SHIFT)) & MSCM_CP5CFG2_TMLSZ_MASK)
/*! @} */

/*! @name CP5CFG3 - Processor Configuration 3 Register */
/*! @{ */

#define MSCM_CP5CFG3_HW_FPU_MASK                 (0x1U)
#define MSCM_CP5CFG3_HW_FPU_SHIFT                (0U)
#define MSCM_CP5CFG3_HW_FPU_WIDTH                (1U)
#define MSCM_CP5CFG3_HW_FPU(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CP5CFG3_HW_FPU_SHIFT)) & MSCM_CP5CFG3_HW_FPU_MASK)

#define MSCM_CP5CFG3_SIMD_MASK                   (0x2U)
#define MSCM_CP5CFG3_SIMD_SHIFT                  (1U)
#define MSCM_CP5CFG3_SIMD_WIDTH                  (1U)
#define MSCM_CP5CFG3_SIMD(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP5CFG3_SIMD_SHIFT)) & MSCM_CP5CFG3_SIMD_MASK)

#define MSCM_CP5CFG3_MMU_MASK                    (0x4U)
#define MSCM_CP5CFG3_MMU_SHIFT                   (2U)
#define MSCM_CP5CFG3_MMU_WIDTH                   (1U)
#define MSCM_CP5CFG3_MMU(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP5CFG3_MMU_SHIFT)) & MSCM_CP5CFG3_MMU_MASK)

#define MSCM_CP5CFG3_CMP_MASK                    (0x8U)
#define MSCM_CP5CFG3_CMP_SHIFT                   (3U)
#define MSCM_CP5CFG3_CMP_WIDTH                   (1U)
#define MSCM_CP5CFG3_CMP(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP5CFG3_CMP_SHIFT)) & MSCM_CP5CFG3_CMP_MASK)

#define MSCM_CP5CFG3_CPY_MASK                    (0x10U)
#define MSCM_CP5CFG3_CPY_SHIFT                   (4U)
#define MSCM_CP5CFG3_CPY_WIDTH                   (1U)
#define MSCM_CP5CFG3_CPY(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP5CFG3_CPY_SHIFT)) & MSCM_CP5CFG3_CPY_MASK)
/*! @} */

/*! @name CP6TYPE - Processor Type Register */
/*! @{ */

#define MSCM_CP6TYPE_PERSONALITY_MASK            (0xFFFFFFFFU)
#define MSCM_CP6TYPE_PERSONALITY_SHIFT           (0U)
#define MSCM_CP6TYPE_PERSONALITY_WIDTH           (32U)
#define MSCM_CP6TYPE_PERSONALITY(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_CP6TYPE_PERSONALITY_SHIFT)) & MSCM_CP6TYPE_PERSONALITY_MASK)
/*! @} */

/*! @name CP6NUM - Processor Number Register */
/*! @{ */

#define MSCM_CP6NUM_CPN_MASK                     (0xFFU)
#define MSCM_CP6NUM_CPN_SHIFT                    (0U)
#define MSCM_CP6NUM_CPN_WIDTH                    (8U)
#define MSCM_CP6NUM_CPN(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CP6NUM_CPN_SHIFT)) & MSCM_CP6NUM_CPN_MASK)
/*! @} */

/*! @name CP6REV - Processor Count Register */
/*! @{ */

#define MSCM_CP6REV_RYPZ_MASK                    (0xFFU)
#define MSCM_CP6REV_RYPZ_SHIFT                   (0U)
#define MSCM_CP6REV_RYPZ_WIDTH                   (8U)
#define MSCM_CP6REV_RYPZ(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP6REV_RYPZ_SHIFT)) & MSCM_CP6REV_RYPZ_MASK)
/*! @} */

/*! @name CP6CFG0 - Processor Configuration 0 Register */
/*! @{ */

#define MSCM_CP6CFG0_DCWY_MASK                   (0xFFU)
#define MSCM_CP6CFG0_DCWY_SHIFT                  (0U)
#define MSCM_CP6CFG0_DCWY_WIDTH                  (8U)
#define MSCM_CP6CFG0_DCWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP6CFG0_DCWY_SHIFT)) & MSCM_CP6CFG0_DCWY_MASK)

#define MSCM_CP6CFG0_DCSZ_MASK                   (0xFF00U)
#define MSCM_CP6CFG0_DCSZ_SHIFT                  (8U)
#define MSCM_CP6CFG0_DCSZ_WIDTH                  (8U)
#define MSCM_CP6CFG0_DCSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP6CFG0_DCSZ_SHIFT)) & MSCM_CP6CFG0_DCSZ_MASK)

#define MSCM_CP6CFG0_ICWY_MASK                   (0xFF0000U)
#define MSCM_CP6CFG0_ICWY_SHIFT                  (16U)
#define MSCM_CP6CFG0_ICWY_WIDTH                  (8U)
#define MSCM_CP6CFG0_ICWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP6CFG0_ICWY_SHIFT)) & MSCM_CP6CFG0_ICWY_MASK)

#define MSCM_CP6CFG0_ICSZ_MASK                   (0xFF000000U)
#define MSCM_CP6CFG0_ICSZ_SHIFT                  (24U)
#define MSCM_CP6CFG0_ICSZ_WIDTH                  (8U)
#define MSCM_CP6CFG0_ICSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP6CFG0_ICSZ_SHIFT)) & MSCM_CP6CFG0_ICSZ_MASK)
/*! @} */

/*! @name CP6CFG1 - Processor Configuration 1 Register */
/*! @{ */

#define MSCM_CP6CFG1_L2WY_MASK                   (0xFF0000U)
#define MSCM_CP6CFG1_L2WY_SHIFT                  (16U)
#define MSCM_CP6CFG1_L2WY_WIDTH                  (8U)
#define MSCM_CP6CFG1_L2WY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP6CFG1_L2WY_SHIFT)) & MSCM_CP6CFG1_L2WY_MASK)

#define MSCM_CP6CFG1_L2SZ_MASK                   (0xFF000000U)
#define MSCM_CP6CFG1_L2SZ_SHIFT                  (24U)
#define MSCM_CP6CFG1_L2SZ_WIDTH                  (8U)
#define MSCM_CP6CFG1_L2SZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP6CFG1_L2SZ_SHIFT)) & MSCM_CP6CFG1_L2SZ_MASK)
/*! @} */

/*! @name CP6CFG2 - Processor Configuration 2 Register */
/*! @{ */

#define MSCM_CP6CFG2_TMUSZ_MASK                  (0xFF00U)
#define MSCM_CP6CFG2_TMUSZ_SHIFT                 (8U)
#define MSCM_CP6CFG2_TMUSZ_WIDTH                 (8U)
#define MSCM_CP6CFG2_TMUSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP6CFG2_TMUSZ_SHIFT)) & MSCM_CP6CFG2_TMUSZ_MASK)

#define MSCM_CP6CFG2_TMLSZ_MASK                  (0xFF000000U)
#define MSCM_CP6CFG2_TMLSZ_SHIFT                 (24U)
#define MSCM_CP6CFG2_TMLSZ_WIDTH                 (8U)
#define MSCM_CP6CFG2_TMLSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP6CFG2_TMLSZ_SHIFT)) & MSCM_CP6CFG2_TMLSZ_MASK)
/*! @} */

/*! @name CP6CFG3 - Processor Configuration 3 Register */
/*! @{ */

#define MSCM_CP6CFG3_HW_FPU_MASK                 (0x1U)
#define MSCM_CP6CFG3_HW_FPU_SHIFT                (0U)
#define MSCM_CP6CFG3_HW_FPU_WIDTH                (1U)
#define MSCM_CP6CFG3_HW_FPU(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CP6CFG3_HW_FPU_SHIFT)) & MSCM_CP6CFG3_HW_FPU_MASK)

#define MSCM_CP6CFG3_SIMD_MASK                   (0x2U)
#define MSCM_CP6CFG3_SIMD_SHIFT                  (1U)
#define MSCM_CP6CFG3_SIMD_WIDTH                  (1U)
#define MSCM_CP6CFG3_SIMD(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP6CFG3_SIMD_SHIFT)) & MSCM_CP6CFG3_SIMD_MASK)

#define MSCM_CP6CFG3_MMU_MASK                    (0x4U)
#define MSCM_CP6CFG3_MMU_SHIFT                   (2U)
#define MSCM_CP6CFG3_MMU_WIDTH                   (1U)
#define MSCM_CP6CFG3_MMU(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP6CFG3_MMU_SHIFT)) & MSCM_CP6CFG3_MMU_MASK)

#define MSCM_CP6CFG3_CMP_MASK                    (0x8U)
#define MSCM_CP6CFG3_CMP_SHIFT                   (3U)
#define MSCM_CP6CFG3_CMP_WIDTH                   (1U)
#define MSCM_CP6CFG3_CMP(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP6CFG3_CMP_SHIFT)) & MSCM_CP6CFG3_CMP_MASK)

#define MSCM_CP6CFG3_CPY_MASK                    (0x10U)
#define MSCM_CP6CFG3_CPY_SHIFT                   (4U)
#define MSCM_CP6CFG3_CPY_WIDTH                   (1U)
#define MSCM_CP6CFG3_CPY(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP6CFG3_CPY_SHIFT)) & MSCM_CP6CFG3_CPY_MASK)
/*! @} */

/*! @name IRCP0ISR0 - Interrupt Router CP0 Interrupt0 Status Register */
/*! @{ */

#define MSCM_IRCP0ISR0_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP0ISR0_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP0ISR0_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR0_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR0_CP0_INT_SHIFT)) & MSCM_IRCP0ISR0_CP0_INT_MASK)

#define MSCM_IRCP0ISR0_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP0ISR0_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP0ISR0_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR0_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR0_CP1_INT_SHIFT)) & MSCM_IRCP0ISR0_CP1_INT_MASK)

#define MSCM_IRCP0ISR0_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP0ISR0_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP0ISR0_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR0_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR0_CP2_INT_SHIFT)) & MSCM_IRCP0ISR0_CP2_INT_MASK)

#define MSCM_IRCP0ISR0_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP0ISR0_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP0ISR0_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR0_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR0_CP3_INT_SHIFT)) & MSCM_IRCP0ISR0_CP3_INT_MASK)

#define MSCM_IRCP0ISR0_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP0ISR0_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP0ISR0_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR0_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR0_CP4_INT_SHIFT)) & MSCM_IRCP0ISR0_CP4_INT_MASK)

#define MSCM_IRCP0ISR0_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP0ISR0_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP0ISR0_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR0_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR0_CP5_INT_SHIFT)) & MSCM_IRCP0ISR0_CP5_INT_MASK)

#define MSCM_IRCP0ISR0_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP0ISR0_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP0ISR0_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR0_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR0_CP6_INT_SHIFT)) & MSCM_IRCP0ISR0_CP6_INT_MASK)
/*! @} */

/*! @name IRCP0IGR0 - Interrupt Router CP0 Interrupt0 Generation Register */
/*! @{ */

#define MSCM_IRCP0IGR0_INT_EN_MASK               (0x1U)
#define MSCM_IRCP0IGR0_INT_EN_SHIFT              (0U)
#define MSCM_IRCP0IGR0_INT_EN_WIDTH              (1U)
#define MSCM_IRCP0IGR0_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR0_INT_EN_SHIFT)) & MSCM_IRCP0IGR0_INT_EN_MASK)
/*! @} */

/*! @name IRCP0ISR1 - Interrupt Router CP0 Interrupt1 Status Register */
/*! @{ */

#define MSCM_IRCP0ISR1_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP0ISR1_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP0ISR1_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR1_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR1_CP0_INT_SHIFT)) & MSCM_IRCP0ISR1_CP0_INT_MASK)

#define MSCM_IRCP0ISR1_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP0ISR1_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP0ISR1_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR1_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR1_CP1_INT_SHIFT)) & MSCM_IRCP0ISR1_CP1_INT_MASK)

#define MSCM_IRCP0ISR1_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP0ISR1_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP0ISR1_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR1_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR1_CP2_INT_SHIFT)) & MSCM_IRCP0ISR1_CP2_INT_MASK)

#define MSCM_IRCP0ISR1_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP0ISR1_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP0ISR1_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR1_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR1_CP3_INT_SHIFT)) & MSCM_IRCP0ISR1_CP3_INT_MASK)

#define MSCM_IRCP0ISR1_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP0ISR1_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP0ISR1_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR1_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR1_CP4_INT_SHIFT)) & MSCM_IRCP0ISR1_CP4_INT_MASK)

#define MSCM_IRCP0ISR1_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP0ISR1_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP0ISR1_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR1_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR1_CP5_INT_SHIFT)) & MSCM_IRCP0ISR1_CP5_INT_MASK)

#define MSCM_IRCP0ISR1_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP0ISR1_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP0ISR1_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR1_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR1_CP6_INT_SHIFT)) & MSCM_IRCP0ISR1_CP6_INT_MASK)
/*! @} */

/*! @name IRCP0IGR1 - Interrupt Router CP0 Interrupt1 Generation Register */
/*! @{ */

#define MSCM_IRCP0IGR1_INT_EN_MASK               (0x1U)
#define MSCM_IRCP0IGR1_INT_EN_SHIFT              (0U)
#define MSCM_IRCP0IGR1_INT_EN_WIDTH              (1U)
#define MSCM_IRCP0IGR1_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR1_INT_EN_SHIFT)) & MSCM_IRCP0IGR1_INT_EN_MASK)
/*! @} */

/*! @name IRCP0ISR2 - Interrupt Router CP0 Interrupt2 Status Register */
/*! @{ */

#define MSCM_IRCP0ISR2_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP0ISR2_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP0ISR2_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR2_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR2_CP0_INT_SHIFT)) & MSCM_IRCP0ISR2_CP0_INT_MASK)

#define MSCM_IRCP0ISR2_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP0ISR2_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP0ISR2_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR2_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR2_CP1_INT_SHIFT)) & MSCM_IRCP0ISR2_CP1_INT_MASK)

#define MSCM_IRCP0ISR2_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP0ISR2_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP0ISR2_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR2_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR2_CP2_INT_SHIFT)) & MSCM_IRCP0ISR2_CP2_INT_MASK)

#define MSCM_IRCP0ISR2_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP0ISR2_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP0ISR2_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR2_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR2_CP3_INT_SHIFT)) & MSCM_IRCP0ISR2_CP3_INT_MASK)

#define MSCM_IRCP0ISR2_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP0ISR2_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP0ISR2_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR2_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR2_CP4_INT_SHIFT)) & MSCM_IRCP0ISR2_CP4_INT_MASK)

#define MSCM_IRCP0ISR2_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP0ISR2_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP0ISR2_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR2_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR2_CP5_INT_SHIFT)) & MSCM_IRCP0ISR2_CP5_INT_MASK)

#define MSCM_IRCP0ISR2_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP0ISR2_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP0ISR2_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR2_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR2_CP6_INT_SHIFT)) & MSCM_IRCP0ISR2_CP6_INT_MASK)
/*! @} */

/*! @name IRCP0IGR2 - Interrupt Router CP0 Interrupt2 Generation Register */
/*! @{ */

#define MSCM_IRCP0IGR2_INT_EN_MASK               (0x1U)
#define MSCM_IRCP0IGR2_INT_EN_SHIFT              (0U)
#define MSCM_IRCP0IGR2_INT_EN_WIDTH              (1U)
#define MSCM_IRCP0IGR2_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR2_INT_EN_SHIFT)) & MSCM_IRCP0IGR2_INT_EN_MASK)
/*! @} */

/*! @name IRCP0ISR3 - Interrupt Router CP0 Interrupt3 Status Register */
/*! @{ */

#define MSCM_IRCP0ISR3_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP0ISR3_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP0ISR3_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP0ISR3_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT0_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT0_MASK)

#define MSCM_IRCP0ISR3_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP0ISR3_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP0ISR3_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP0ISR3_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT1_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT1_MASK)

#define MSCM_IRCP0ISR3_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP0ISR3_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP0ISR3_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP0ISR3_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT2_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT2_MASK)

#define MSCM_IRCP0ISR3_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP0ISR3_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP0ISR3_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP0ISR3_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT3_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT3_MASK)

#define MSCM_IRCP0ISR3_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP0ISR3_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP0ISR3_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP0ISR3_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT4_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT4_MASK)

#define MSCM_IRCP0ISR3_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP0ISR3_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP0ISR3_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP0ISR3_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT5_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT5_MASK)

#define MSCM_IRCP0ISR3_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP0ISR3_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP0ISR3_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP0ISR3_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT6_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT6_MASK)

#define MSCM_IRCP0ISR3_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP0ISR3_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP0ISR3_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP0ISR3_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT7_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT7_MASK)

#define MSCM_IRCP0ISR3_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP0ISR3_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP0ISR3_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP0ISR3_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT8_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT8_MASK)

#define MSCM_IRCP0ISR3_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP0ISR3_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP0ISR3_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP0ISR3_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT9_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT9_MASK)

#define MSCM_IRCP0ISR3_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP0ISR3_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP0ISR3_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP0ISR3_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT10_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT10_MASK)

#define MSCM_IRCP0ISR3_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP0ISR3_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP0ISR3_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP0ISR3_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT11_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT11_MASK)

#define MSCM_IRCP0ISR3_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP0ISR3_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP0ISR3_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP0ISR3_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT12_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT12_MASK)

#define MSCM_IRCP0ISR3_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP0ISR3_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP0ISR3_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP0ISR3_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT13_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT13_MASK)

#define MSCM_IRCP0ISR3_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP0ISR3_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP0ISR3_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP0ISR3_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT14_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT14_MASK)

#define MSCM_IRCP0ISR3_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP0ISR3_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP0ISR3_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP0ISR3_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR3_PCIE_INT15_SHIFT)) & MSCM_IRCP0ISR3_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP0IGR3 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP0IGR3_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP0IGR3_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP0IGR3_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR3_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT0_EN_SHIFT)) & MSCM_IRCP0IGR3_INT0_EN_MASK)

#define MSCM_IRCP0IGR3_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP0IGR3_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP0IGR3_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR3_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT1_EN_SHIFT)) & MSCM_IRCP0IGR3_INT1_EN_MASK)

#define MSCM_IRCP0IGR3_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP0IGR3_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP0IGR3_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR3_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT2_EN_SHIFT)) & MSCM_IRCP0IGR3_INT2_EN_MASK)

#define MSCM_IRCP0IGR3_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP0IGR3_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP0IGR3_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR3_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT3_EN_SHIFT)) & MSCM_IRCP0IGR3_INT3_EN_MASK)

#define MSCM_IRCP0IGR3_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP0IGR3_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP0IGR3_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR3_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT4_EN_SHIFT)) & MSCM_IRCP0IGR3_INT4_EN_MASK)

#define MSCM_IRCP0IGR3_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP0IGR3_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP0IGR3_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR3_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT5_EN_SHIFT)) & MSCM_IRCP0IGR3_INT5_EN_MASK)

#define MSCM_IRCP0IGR3_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP0IGR3_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP0IGR3_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR3_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT6_EN_SHIFT)) & MSCM_IRCP0IGR3_INT6_EN_MASK)

#define MSCM_IRCP0IGR3_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP0IGR3_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP0IGR3_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR3_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT7_EN_SHIFT)) & MSCM_IRCP0IGR3_INT7_EN_MASK)

#define MSCM_IRCP0IGR3_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP0IGR3_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP0IGR3_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR3_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT8_EN_SHIFT)) & MSCM_IRCP0IGR3_INT8_EN_MASK)

#define MSCM_IRCP0IGR3_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP0IGR3_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP0IGR3_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR3_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT9_EN_SHIFT)) & MSCM_IRCP0IGR3_INT9_EN_MASK)

#define MSCM_IRCP0IGR3_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP0IGR3_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP0IGR3_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP0IGR3_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT10_EN_SHIFT)) & MSCM_IRCP0IGR3_INT10_EN_MASK)

#define MSCM_IRCP0IGR3_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP0IGR3_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP0IGR3_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP0IGR3_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT11_EN_SHIFT)) & MSCM_IRCP0IGR3_INT11_EN_MASK)

#define MSCM_IRCP0IGR3_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP0IGR3_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP0IGR3_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP0IGR3_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT12_EN_SHIFT)) & MSCM_IRCP0IGR3_INT12_EN_MASK)

#define MSCM_IRCP0IGR3_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP0IGR3_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP0IGR3_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP0IGR3_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT13_EN_SHIFT)) & MSCM_IRCP0IGR3_INT13_EN_MASK)

#define MSCM_IRCP0IGR3_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP0IGR3_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP0IGR3_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP0IGR3_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT14_EN_SHIFT)) & MSCM_IRCP0IGR3_INT14_EN_MASK)

#define MSCM_IRCP0IGR3_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP0IGR3_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP0IGR3_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP0IGR3_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR3_INT15_EN_SHIFT)) & MSCM_IRCP0IGR3_INT15_EN_MASK)
/*! @} */

/*! @name IRCP1ISR0 - Interrupt Router CP1 Interrupt0 Status Register */
/*! @{ */

#define MSCM_IRCP1ISR0_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP1ISR0_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP1ISR0_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR0_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR0_CP0_INT_SHIFT)) & MSCM_IRCP1ISR0_CP0_INT_MASK)

#define MSCM_IRCP1ISR0_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP1ISR0_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP1ISR0_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR0_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR0_CP1_INT_SHIFT)) & MSCM_IRCP1ISR0_CP1_INT_MASK)

#define MSCM_IRCP1ISR0_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP1ISR0_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP1ISR0_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR0_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR0_CP2_INT_SHIFT)) & MSCM_IRCP1ISR0_CP2_INT_MASK)

#define MSCM_IRCP1ISR0_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP1ISR0_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP1ISR0_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR0_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR0_CP3_INT_SHIFT)) & MSCM_IRCP1ISR0_CP3_INT_MASK)

#define MSCM_IRCP1ISR0_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP1ISR0_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP1ISR0_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR0_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR0_CP4_INT_SHIFT)) & MSCM_IRCP1ISR0_CP4_INT_MASK)

#define MSCM_IRCP1ISR0_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP1ISR0_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP1ISR0_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR0_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR0_CP5_INT_SHIFT)) & MSCM_IRCP1ISR0_CP5_INT_MASK)

#define MSCM_IRCP1ISR0_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP1ISR0_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP1ISR0_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR0_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR0_CP6_INT_SHIFT)) & MSCM_IRCP1ISR0_CP6_INT_MASK)
/*! @} */

/*! @name IRCP1IGR0 - Interrupt Router CP1 Interrupt0 Generation Register */
/*! @{ */

#define MSCM_IRCP1IGR0_INT_EN_MASK               (0x1U)
#define MSCM_IRCP1IGR0_INT_EN_SHIFT              (0U)
#define MSCM_IRCP1IGR0_INT_EN_WIDTH              (1U)
#define MSCM_IRCP1IGR0_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR0_INT_EN_SHIFT)) & MSCM_IRCP1IGR0_INT_EN_MASK)
/*! @} */

/*! @name IRCP1ISR1 - Interrupt Router CP1 Interrupt1 Status Register */
/*! @{ */

#define MSCM_IRCP1ISR1_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP1ISR1_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP1ISR1_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR1_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR1_CP0_INT_SHIFT)) & MSCM_IRCP1ISR1_CP0_INT_MASK)

#define MSCM_IRCP1ISR1_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP1ISR1_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP1ISR1_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR1_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR1_CP1_INT_SHIFT)) & MSCM_IRCP1ISR1_CP1_INT_MASK)

#define MSCM_IRCP1ISR1_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP1ISR1_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP1ISR1_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR1_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR1_CP2_INT_SHIFT)) & MSCM_IRCP1ISR1_CP2_INT_MASK)

#define MSCM_IRCP1ISR1_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP1ISR1_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP1ISR1_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR1_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR1_CP3_INT_SHIFT)) & MSCM_IRCP1ISR1_CP3_INT_MASK)

#define MSCM_IRCP1ISR1_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP1ISR1_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP1ISR1_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR1_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR1_CP4_INT_SHIFT)) & MSCM_IRCP1ISR1_CP4_INT_MASK)

#define MSCM_IRCP1ISR1_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP1ISR1_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP1ISR1_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR1_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR1_CP5_INT_SHIFT)) & MSCM_IRCP1ISR1_CP5_INT_MASK)

#define MSCM_IRCP1ISR1_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP1ISR1_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP1ISR1_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR1_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR1_CP6_INT_SHIFT)) & MSCM_IRCP1ISR1_CP6_INT_MASK)
/*! @} */

/*! @name IRCP1IGR1 - Interrupt Router CP1 Interrupt1 Generation Register */
/*! @{ */

#define MSCM_IRCP1IGR1_INT_EN_MASK               (0x1U)
#define MSCM_IRCP1IGR1_INT_EN_SHIFT              (0U)
#define MSCM_IRCP1IGR1_INT_EN_WIDTH              (1U)
#define MSCM_IRCP1IGR1_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR1_INT_EN_SHIFT)) & MSCM_IRCP1IGR1_INT_EN_MASK)
/*! @} */

/*! @name IRCP1ISR2 - Interrupt Router CP1 Interrupt2 Status Register */
/*! @{ */

#define MSCM_IRCP1ISR2_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP1ISR2_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP1ISR2_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR2_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR2_CP0_INT_SHIFT)) & MSCM_IRCP1ISR2_CP0_INT_MASK)

#define MSCM_IRCP1ISR2_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP1ISR2_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP1ISR2_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR2_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR2_CP1_INT_SHIFT)) & MSCM_IRCP1ISR2_CP1_INT_MASK)

#define MSCM_IRCP1ISR2_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP1ISR2_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP1ISR2_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR2_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR2_CP2_INT_SHIFT)) & MSCM_IRCP1ISR2_CP2_INT_MASK)

#define MSCM_IRCP1ISR2_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP1ISR2_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP1ISR2_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR2_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR2_CP3_INT_SHIFT)) & MSCM_IRCP1ISR2_CP3_INT_MASK)

#define MSCM_IRCP1ISR2_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP1ISR2_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP1ISR2_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR2_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR2_CP4_INT_SHIFT)) & MSCM_IRCP1ISR2_CP4_INT_MASK)

#define MSCM_IRCP1ISR2_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP1ISR2_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP1ISR2_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR2_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR2_CP5_INT_SHIFT)) & MSCM_IRCP1ISR2_CP5_INT_MASK)

#define MSCM_IRCP1ISR2_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP1ISR2_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP1ISR2_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR2_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR2_CP6_INT_SHIFT)) & MSCM_IRCP1ISR2_CP6_INT_MASK)
/*! @} */

/*! @name IRCP1IGR2 - Interrupt Router CP1 Interrupt2 Generation Register */
/*! @{ */

#define MSCM_IRCP1IGR2_INT_EN_MASK               (0x1U)
#define MSCM_IRCP1IGR2_INT_EN_SHIFT              (0U)
#define MSCM_IRCP1IGR2_INT_EN_WIDTH              (1U)
#define MSCM_IRCP1IGR2_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR2_INT_EN_SHIFT)) & MSCM_IRCP1IGR2_INT_EN_MASK)
/*! @} */

/*! @name IRCP1ISR3 - Interrupt Router CP1 Interrupt3 Status Register */
/*! @{ */

#define MSCM_IRCP1ISR3_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP1ISR3_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP1ISR3_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP1ISR3_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT0_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT0_MASK)

#define MSCM_IRCP1ISR3_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP1ISR3_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP1ISR3_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP1ISR3_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT1_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT1_MASK)

#define MSCM_IRCP1ISR3_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP1ISR3_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP1ISR3_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP1ISR3_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT2_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT2_MASK)

#define MSCM_IRCP1ISR3_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP1ISR3_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP1ISR3_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP1ISR3_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT3_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT3_MASK)

#define MSCM_IRCP1ISR3_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP1ISR3_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP1ISR3_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP1ISR3_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT4_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT4_MASK)

#define MSCM_IRCP1ISR3_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP1ISR3_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP1ISR3_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP1ISR3_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT5_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT5_MASK)

#define MSCM_IRCP1ISR3_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP1ISR3_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP1ISR3_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP1ISR3_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT6_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT6_MASK)

#define MSCM_IRCP1ISR3_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP1ISR3_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP1ISR3_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP1ISR3_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT7_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT7_MASK)

#define MSCM_IRCP1ISR3_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP1ISR3_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP1ISR3_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP1ISR3_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT8_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT8_MASK)

#define MSCM_IRCP1ISR3_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP1ISR3_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP1ISR3_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP1ISR3_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT9_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT9_MASK)

#define MSCM_IRCP1ISR3_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP1ISR3_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP1ISR3_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP1ISR3_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT10_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT10_MASK)

#define MSCM_IRCP1ISR3_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP1ISR3_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP1ISR3_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP1ISR3_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT11_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT11_MASK)

#define MSCM_IRCP1ISR3_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP1ISR3_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP1ISR3_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP1ISR3_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT12_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT12_MASK)

#define MSCM_IRCP1ISR3_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP1ISR3_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP1ISR3_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP1ISR3_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT13_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT13_MASK)

#define MSCM_IRCP1ISR3_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP1ISR3_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP1ISR3_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP1ISR3_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT14_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT14_MASK)

#define MSCM_IRCP1ISR3_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP1ISR3_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP1ISR3_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP1ISR3_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR3_PCIE_INT15_SHIFT)) & MSCM_IRCP1ISR3_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP1IGR3 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP1IGR3_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP1IGR3_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP1IGR3_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR3_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT0_EN_SHIFT)) & MSCM_IRCP1IGR3_INT0_EN_MASK)

#define MSCM_IRCP1IGR3_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP1IGR3_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP1IGR3_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR3_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT1_EN_SHIFT)) & MSCM_IRCP1IGR3_INT1_EN_MASK)

#define MSCM_IRCP1IGR3_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP1IGR3_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP1IGR3_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR3_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT2_EN_SHIFT)) & MSCM_IRCP1IGR3_INT2_EN_MASK)

#define MSCM_IRCP1IGR3_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP1IGR3_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP1IGR3_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR3_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT3_EN_SHIFT)) & MSCM_IRCP1IGR3_INT3_EN_MASK)

#define MSCM_IRCP1IGR3_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP1IGR3_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP1IGR3_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR3_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT4_EN_SHIFT)) & MSCM_IRCP1IGR3_INT4_EN_MASK)

#define MSCM_IRCP1IGR3_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP1IGR3_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP1IGR3_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR3_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT5_EN_SHIFT)) & MSCM_IRCP1IGR3_INT5_EN_MASK)

#define MSCM_IRCP1IGR3_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP1IGR3_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP1IGR3_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR3_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT6_EN_SHIFT)) & MSCM_IRCP1IGR3_INT6_EN_MASK)

#define MSCM_IRCP1IGR3_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP1IGR3_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP1IGR3_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR3_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT7_EN_SHIFT)) & MSCM_IRCP1IGR3_INT7_EN_MASK)

#define MSCM_IRCP1IGR3_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP1IGR3_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP1IGR3_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR3_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT8_EN_SHIFT)) & MSCM_IRCP1IGR3_INT8_EN_MASK)

#define MSCM_IRCP1IGR3_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP1IGR3_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP1IGR3_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR3_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT9_EN_SHIFT)) & MSCM_IRCP1IGR3_INT9_EN_MASK)

#define MSCM_IRCP1IGR3_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP1IGR3_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP1IGR3_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP1IGR3_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT10_EN_SHIFT)) & MSCM_IRCP1IGR3_INT10_EN_MASK)

#define MSCM_IRCP1IGR3_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP1IGR3_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP1IGR3_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP1IGR3_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT11_EN_SHIFT)) & MSCM_IRCP1IGR3_INT11_EN_MASK)

#define MSCM_IRCP1IGR3_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP1IGR3_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP1IGR3_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP1IGR3_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT12_EN_SHIFT)) & MSCM_IRCP1IGR3_INT12_EN_MASK)

#define MSCM_IRCP1IGR3_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP1IGR3_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP1IGR3_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP1IGR3_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT13_EN_SHIFT)) & MSCM_IRCP1IGR3_INT13_EN_MASK)

#define MSCM_IRCP1IGR3_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP1IGR3_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP1IGR3_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP1IGR3_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT14_EN_SHIFT)) & MSCM_IRCP1IGR3_INT14_EN_MASK)

#define MSCM_IRCP1IGR3_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP1IGR3_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP1IGR3_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP1IGR3_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR3_INT15_EN_SHIFT)) & MSCM_IRCP1IGR3_INT15_EN_MASK)
/*! @} */

/*! @name IRCP2ISR0 - Interrupt Router CP2 Interrupt0 Status Register */
/*! @{ */

#define MSCM_IRCP2ISR0_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP2ISR0_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP2ISR0_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR0_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR0_CP0_INT_SHIFT)) & MSCM_IRCP2ISR0_CP0_INT_MASK)

#define MSCM_IRCP2ISR0_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP2ISR0_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP2ISR0_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR0_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR0_CP1_INT_SHIFT)) & MSCM_IRCP2ISR0_CP1_INT_MASK)

#define MSCM_IRCP2ISR0_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP2ISR0_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP2ISR0_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR0_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR0_CP2_INT_SHIFT)) & MSCM_IRCP2ISR0_CP2_INT_MASK)

#define MSCM_IRCP2ISR0_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP2ISR0_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP2ISR0_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR0_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR0_CP3_INT_SHIFT)) & MSCM_IRCP2ISR0_CP3_INT_MASK)

#define MSCM_IRCP2ISR0_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP2ISR0_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP2ISR0_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR0_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR0_CP4_INT_SHIFT)) & MSCM_IRCP2ISR0_CP4_INT_MASK)

#define MSCM_IRCP2ISR0_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP2ISR0_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP2ISR0_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR0_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR0_CP5_INT_SHIFT)) & MSCM_IRCP2ISR0_CP5_INT_MASK)

#define MSCM_IRCP2ISR0_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP2ISR0_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP2ISR0_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR0_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR0_CP6_INT_SHIFT)) & MSCM_IRCP2ISR0_CP6_INT_MASK)
/*! @} */

/*! @name IRCP2IGR0 - Interrupt Router CP2 Interrupt0 Generation Register */
/*! @{ */

#define MSCM_IRCP2IGR0_INT_EN_MASK               (0x1U)
#define MSCM_IRCP2IGR0_INT_EN_SHIFT              (0U)
#define MSCM_IRCP2IGR0_INT_EN_WIDTH              (1U)
#define MSCM_IRCP2IGR0_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR0_INT_EN_SHIFT)) & MSCM_IRCP2IGR0_INT_EN_MASK)
/*! @} */

/*! @name IRCP2ISR1 - Interrupt Router CP2 Interrupt1 Status Register */
/*! @{ */

#define MSCM_IRCP2ISR1_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP2ISR1_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP2ISR1_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR1_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR1_CP0_INT_SHIFT)) & MSCM_IRCP2ISR1_CP0_INT_MASK)

#define MSCM_IRCP2ISR1_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP2ISR1_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP2ISR1_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR1_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR1_CP1_INT_SHIFT)) & MSCM_IRCP2ISR1_CP1_INT_MASK)

#define MSCM_IRCP2ISR1_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP2ISR1_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP2ISR1_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR1_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR1_CP2_INT_SHIFT)) & MSCM_IRCP2ISR1_CP2_INT_MASK)

#define MSCM_IRCP2ISR1_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP2ISR1_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP2ISR1_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR1_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR1_CP3_INT_SHIFT)) & MSCM_IRCP2ISR1_CP3_INT_MASK)

#define MSCM_IRCP2ISR1_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP2ISR1_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP2ISR1_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR1_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR1_CP4_INT_SHIFT)) & MSCM_IRCP2ISR1_CP4_INT_MASK)

#define MSCM_IRCP2ISR1_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP2ISR1_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP2ISR1_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR1_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR1_CP5_INT_SHIFT)) & MSCM_IRCP2ISR1_CP5_INT_MASK)

#define MSCM_IRCP2ISR1_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP2ISR1_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP2ISR1_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR1_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR1_CP6_INT_SHIFT)) & MSCM_IRCP2ISR1_CP6_INT_MASK)
/*! @} */

/*! @name IRCP2IGR1 - Interrupt Router CP2 Interrupt1 Generation Register */
/*! @{ */

#define MSCM_IRCP2IGR1_INT_EN_MASK               (0x1U)
#define MSCM_IRCP2IGR1_INT_EN_SHIFT              (0U)
#define MSCM_IRCP2IGR1_INT_EN_WIDTH              (1U)
#define MSCM_IRCP2IGR1_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR1_INT_EN_SHIFT)) & MSCM_IRCP2IGR1_INT_EN_MASK)
/*! @} */

/*! @name IRCP2ISR2 - Interrupt Router CP2 Interrupt2 Status Register */
/*! @{ */

#define MSCM_IRCP2ISR2_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP2ISR2_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP2ISR2_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR2_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR2_CP0_INT_SHIFT)) & MSCM_IRCP2ISR2_CP0_INT_MASK)

#define MSCM_IRCP2ISR2_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP2ISR2_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP2ISR2_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR2_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR2_CP1_INT_SHIFT)) & MSCM_IRCP2ISR2_CP1_INT_MASK)

#define MSCM_IRCP2ISR2_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP2ISR2_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP2ISR2_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR2_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR2_CP2_INT_SHIFT)) & MSCM_IRCP2ISR2_CP2_INT_MASK)

#define MSCM_IRCP2ISR2_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP2ISR2_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP2ISR2_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR2_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR2_CP3_INT_SHIFT)) & MSCM_IRCP2ISR2_CP3_INT_MASK)

#define MSCM_IRCP2ISR2_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP2ISR2_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP2ISR2_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR2_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR2_CP4_INT_SHIFT)) & MSCM_IRCP2ISR2_CP4_INT_MASK)

#define MSCM_IRCP2ISR2_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP2ISR2_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP2ISR2_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR2_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR2_CP5_INT_SHIFT)) & MSCM_IRCP2ISR2_CP5_INT_MASK)

#define MSCM_IRCP2ISR2_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP2ISR2_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP2ISR2_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR2_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR2_CP6_INT_SHIFT)) & MSCM_IRCP2ISR2_CP6_INT_MASK)
/*! @} */

/*! @name IRCP2IGR2 - Interrupt Router CP2 Interrupt2 Generation Register */
/*! @{ */

#define MSCM_IRCP2IGR2_INT_EN_MASK               (0x1U)
#define MSCM_IRCP2IGR2_INT_EN_SHIFT              (0U)
#define MSCM_IRCP2IGR2_INT_EN_WIDTH              (1U)
#define MSCM_IRCP2IGR2_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR2_INT_EN_SHIFT)) & MSCM_IRCP2IGR2_INT_EN_MASK)
/*! @} */

/*! @name IRCP2ISR3 - Interrupt Router CP2 Interrupt3 Status Register */
/*! @{ */

#define MSCM_IRCP2ISR3_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP2ISR3_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP2ISR3_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP2ISR3_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT0_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT0_MASK)

#define MSCM_IRCP2ISR3_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP2ISR3_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP2ISR3_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP2ISR3_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT1_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT1_MASK)

#define MSCM_IRCP2ISR3_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP2ISR3_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP2ISR3_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP2ISR3_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT2_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT2_MASK)

#define MSCM_IRCP2ISR3_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP2ISR3_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP2ISR3_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP2ISR3_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT3_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT3_MASK)

#define MSCM_IRCP2ISR3_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP2ISR3_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP2ISR3_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP2ISR3_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT4_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT4_MASK)

#define MSCM_IRCP2ISR3_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP2ISR3_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP2ISR3_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP2ISR3_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT5_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT5_MASK)

#define MSCM_IRCP2ISR3_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP2ISR3_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP2ISR3_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP2ISR3_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT6_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT6_MASK)

#define MSCM_IRCP2ISR3_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP2ISR3_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP2ISR3_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP2ISR3_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT7_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT7_MASK)

#define MSCM_IRCP2ISR3_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP2ISR3_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP2ISR3_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP2ISR3_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT8_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT8_MASK)

#define MSCM_IRCP2ISR3_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP2ISR3_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP2ISR3_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP2ISR3_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT9_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT9_MASK)

#define MSCM_IRCP2ISR3_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP2ISR3_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP2ISR3_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP2ISR3_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT10_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT10_MASK)

#define MSCM_IRCP2ISR3_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP2ISR3_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP2ISR3_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP2ISR3_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT11_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT11_MASK)

#define MSCM_IRCP2ISR3_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP2ISR3_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP2ISR3_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP2ISR3_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT12_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT12_MASK)

#define MSCM_IRCP2ISR3_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP2ISR3_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP2ISR3_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP2ISR3_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT13_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT13_MASK)

#define MSCM_IRCP2ISR3_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP2ISR3_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP2ISR3_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP2ISR3_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT14_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT14_MASK)

#define MSCM_IRCP2ISR3_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP2ISR3_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP2ISR3_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP2ISR3_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR3_PCIE_INT15_SHIFT)) & MSCM_IRCP2ISR3_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP2IGR3 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP2IGR3_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP2IGR3_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP2IGR3_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR3_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT0_EN_SHIFT)) & MSCM_IRCP2IGR3_INT0_EN_MASK)

#define MSCM_IRCP2IGR3_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP2IGR3_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP2IGR3_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR3_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT1_EN_SHIFT)) & MSCM_IRCP2IGR3_INT1_EN_MASK)

#define MSCM_IRCP2IGR3_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP2IGR3_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP2IGR3_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR3_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT2_EN_SHIFT)) & MSCM_IRCP2IGR3_INT2_EN_MASK)

#define MSCM_IRCP2IGR3_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP2IGR3_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP2IGR3_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR3_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT3_EN_SHIFT)) & MSCM_IRCP2IGR3_INT3_EN_MASK)

#define MSCM_IRCP2IGR3_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP2IGR3_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP2IGR3_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR3_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT4_EN_SHIFT)) & MSCM_IRCP2IGR3_INT4_EN_MASK)

#define MSCM_IRCP2IGR3_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP2IGR3_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP2IGR3_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR3_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT5_EN_SHIFT)) & MSCM_IRCP2IGR3_INT5_EN_MASK)

#define MSCM_IRCP2IGR3_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP2IGR3_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP2IGR3_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR3_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT6_EN_SHIFT)) & MSCM_IRCP2IGR3_INT6_EN_MASK)

#define MSCM_IRCP2IGR3_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP2IGR3_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP2IGR3_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR3_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT7_EN_SHIFT)) & MSCM_IRCP2IGR3_INT7_EN_MASK)

#define MSCM_IRCP2IGR3_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP2IGR3_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP2IGR3_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR3_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT8_EN_SHIFT)) & MSCM_IRCP2IGR3_INT8_EN_MASK)

#define MSCM_IRCP2IGR3_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP2IGR3_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP2IGR3_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR3_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT9_EN_SHIFT)) & MSCM_IRCP2IGR3_INT9_EN_MASK)

#define MSCM_IRCP2IGR3_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP2IGR3_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP2IGR3_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP2IGR3_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT10_EN_SHIFT)) & MSCM_IRCP2IGR3_INT10_EN_MASK)

#define MSCM_IRCP2IGR3_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP2IGR3_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP2IGR3_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP2IGR3_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT11_EN_SHIFT)) & MSCM_IRCP2IGR3_INT11_EN_MASK)

#define MSCM_IRCP2IGR3_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP2IGR3_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP2IGR3_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP2IGR3_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT12_EN_SHIFT)) & MSCM_IRCP2IGR3_INT12_EN_MASK)

#define MSCM_IRCP2IGR3_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP2IGR3_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP2IGR3_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP2IGR3_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT13_EN_SHIFT)) & MSCM_IRCP2IGR3_INT13_EN_MASK)

#define MSCM_IRCP2IGR3_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP2IGR3_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP2IGR3_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP2IGR3_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT14_EN_SHIFT)) & MSCM_IRCP2IGR3_INT14_EN_MASK)

#define MSCM_IRCP2IGR3_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP2IGR3_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP2IGR3_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP2IGR3_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR3_INT15_EN_SHIFT)) & MSCM_IRCP2IGR3_INT15_EN_MASK)
/*! @} */

/*! @name IRCP3ISR0 - Interrupt Router CP3 Interrupt0 Status Register */
/*! @{ */

#define MSCM_IRCP3ISR0_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP3ISR0_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP3ISR0_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR0_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR0_CP0_INT_SHIFT)) & MSCM_IRCP3ISR0_CP0_INT_MASK)

#define MSCM_IRCP3ISR0_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP3ISR0_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP3ISR0_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR0_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR0_CP1_INT_SHIFT)) & MSCM_IRCP3ISR0_CP1_INT_MASK)

#define MSCM_IRCP3ISR0_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP3ISR0_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP3ISR0_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR0_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR0_CP2_INT_SHIFT)) & MSCM_IRCP3ISR0_CP2_INT_MASK)

#define MSCM_IRCP3ISR0_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP3ISR0_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP3ISR0_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR0_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR0_CP3_INT_SHIFT)) & MSCM_IRCP3ISR0_CP3_INT_MASK)

#define MSCM_IRCP3ISR0_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP3ISR0_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP3ISR0_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR0_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR0_CP4_INT_SHIFT)) & MSCM_IRCP3ISR0_CP4_INT_MASK)

#define MSCM_IRCP3ISR0_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP3ISR0_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP3ISR0_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR0_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR0_CP5_INT_SHIFT)) & MSCM_IRCP3ISR0_CP5_INT_MASK)

#define MSCM_IRCP3ISR0_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP3ISR0_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP3ISR0_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR0_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR0_CP6_INT_SHIFT)) & MSCM_IRCP3ISR0_CP6_INT_MASK)
/*! @} */

/*! @name IRCP3IGR0 - Interrupt Router CP3 Interrupt0 Generation Register */
/*! @{ */

#define MSCM_IRCP3IGR0_INT_EN_MASK               (0x1U)
#define MSCM_IRCP3IGR0_INT_EN_SHIFT              (0U)
#define MSCM_IRCP3IGR0_INT_EN_WIDTH              (1U)
#define MSCM_IRCP3IGR0_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR0_INT_EN_SHIFT)) & MSCM_IRCP3IGR0_INT_EN_MASK)
/*! @} */

/*! @name IRCP3ISR1 - Interrupt Router CP3 Interrupt1 Status Register */
/*! @{ */

#define MSCM_IRCP3ISR1_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP3ISR1_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP3ISR1_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR1_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR1_CP0_INT_SHIFT)) & MSCM_IRCP3ISR1_CP0_INT_MASK)

#define MSCM_IRCP3ISR1_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP3ISR1_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP3ISR1_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR1_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR1_CP1_INT_SHIFT)) & MSCM_IRCP3ISR1_CP1_INT_MASK)

#define MSCM_IRCP3ISR1_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP3ISR1_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP3ISR1_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR1_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR1_CP2_INT_SHIFT)) & MSCM_IRCP3ISR1_CP2_INT_MASK)

#define MSCM_IRCP3ISR1_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP3ISR1_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP3ISR1_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR1_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR1_CP3_INT_SHIFT)) & MSCM_IRCP3ISR1_CP3_INT_MASK)

#define MSCM_IRCP3ISR1_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP3ISR1_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP3ISR1_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR1_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR1_CP4_INT_SHIFT)) & MSCM_IRCP3ISR1_CP4_INT_MASK)

#define MSCM_IRCP3ISR1_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP3ISR1_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP3ISR1_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR1_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR1_CP5_INT_SHIFT)) & MSCM_IRCP3ISR1_CP5_INT_MASK)

#define MSCM_IRCP3ISR1_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP3ISR1_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP3ISR1_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR1_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR1_CP6_INT_SHIFT)) & MSCM_IRCP3ISR1_CP6_INT_MASK)
/*! @} */

/*! @name IRCP3IGR1 - Interrupt Router CP3 Interrupt1 Generation Register */
/*! @{ */

#define MSCM_IRCP3IGR1_INT_EN_MASK               (0x1U)
#define MSCM_IRCP3IGR1_INT_EN_SHIFT              (0U)
#define MSCM_IRCP3IGR1_INT_EN_WIDTH              (1U)
#define MSCM_IRCP3IGR1_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR1_INT_EN_SHIFT)) & MSCM_IRCP3IGR1_INT_EN_MASK)
/*! @} */

/*! @name IRCP3ISR2 - Interrupt Router CP3 Interrupt2 Status Register */
/*! @{ */

#define MSCM_IRCP3ISR2_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP3ISR2_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP3ISR2_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR2_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR2_CP0_INT_SHIFT)) & MSCM_IRCP3ISR2_CP0_INT_MASK)

#define MSCM_IRCP3ISR2_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP3ISR2_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP3ISR2_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR2_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR2_CP1_INT_SHIFT)) & MSCM_IRCP3ISR2_CP1_INT_MASK)

#define MSCM_IRCP3ISR2_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP3ISR2_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP3ISR2_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR2_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR2_CP2_INT_SHIFT)) & MSCM_IRCP3ISR2_CP2_INT_MASK)

#define MSCM_IRCP3ISR2_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP3ISR2_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP3ISR2_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR2_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR2_CP3_INT_SHIFT)) & MSCM_IRCP3ISR2_CP3_INT_MASK)

#define MSCM_IRCP3ISR2_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP3ISR2_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP3ISR2_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR2_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR2_CP4_INT_SHIFT)) & MSCM_IRCP3ISR2_CP4_INT_MASK)

#define MSCM_IRCP3ISR2_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP3ISR2_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP3ISR2_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR2_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR2_CP5_INT_SHIFT)) & MSCM_IRCP3ISR2_CP5_INT_MASK)

#define MSCM_IRCP3ISR2_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP3ISR2_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP3ISR2_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR2_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR2_CP6_INT_SHIFT)) & MSCM_IRCP3ISR2_CP6_INT_MASK)
/*! @} */

/*! @name IRCP3IGR2 - Interrupt Router CP3 Interrupt2 Generation Register */
/*! @{ */

#define MSCM_IRCP3IGR2_INT_EN_MASK               (0x1U)
#define MSCM_IRCP3IGR2_INT_EN_SHIFT              (0U)
#define MSCM_IRCP3IGR2_INT_EN_WIDTH              (1U)
#define MSCM_IRCP3IGR2_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR2_INT_EN_SHIFT)) & MSCM_IRCP3IGR2_INT_EN_MASK)
/*! @} */

/*! @name IRCP3ISR3 - Interrupt Router CP3 Interrupt3 Status Register */
/*! @{ */

#define MSCM_IRCP3ISR3_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP3ISR3_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP3ISR3_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP3ISR3_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT0_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT0_MASK)

#define MSCM_IRCP3ISR3_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP3ISR3_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP3ISR3_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP3ISR3_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT1_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT1_MASK)

#define MSCM_IRCP3ISR3_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP3ISR3_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP3ISR3_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP3ISR3_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT2_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT2_MASK)

#define MSCM_IRCP3ISR3_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP3ISR3_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP3ISR3_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP3ISR3_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT3_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT3_MASK)

#define MSCM_IRCP3ISR3_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP3ISR3_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP3ISR3_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP3ISR3_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT4_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT4_MASK)

#define MSCM_IRCP3ISR3_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP3ISR3_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP3ISR3_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP3ISR3_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT5_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT5_MASK)

#define MSCM_IRCP3ISR3_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP3ISR3_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP3ISR3_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP3ISR3_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT6_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT6_MASK)

#define MSCM_IRCP3ISR3_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP3ISR3_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP3ISR3_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP3ISR3_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT7_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT7_MASK)

#define MSCM_IRCP3ISR3_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP3ISR3_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP3ISR3_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP3ISR3_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT8_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT8_MASK)

#define MSCM_IRCP3ISR3_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP3ISR3_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP3ISR3_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP3ISR3_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT9_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT9_MASK)

#define MSCM_IRCP3ISR3_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP3ISR3_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP3ISR3_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP3ISR3_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT10_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT10_MASK)

#define MSCM_IRCP3ISR3_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP3ISR3_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP3ISR3_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP3ISR3_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT11_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT11_MASK)

#define MSCM_IRCP3ISR3_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP3ISR3_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP3ISR3_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP3ISR3_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT12_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT12_MASK)

#define MSCM_IRCP3ISR3_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP3ISR3_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP3ISR3_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP3ISR3_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT13_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT13_MASK)

#define MSCM_IRCP3ISR3_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP3ISR3_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP3ISR3_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP3ISR3_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT14_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT14_MASK)

#define MSCM_IRCP3ISR3_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP3ISR3_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP3ISR3_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP3ISR3_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR3_PCIE_INT15_SHIFT)) & MSCM_IRCP3ISR3_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP3IGR3 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP3IGR3_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP3IGR3_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP3IGR3_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR3_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT0_EN_SHIFT)) & MSCM_IRCP3IGR3_INT0_EN_MASK)

#define MSCM_IRCP3IGR3_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP3IGR3_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP3IGR3_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR3_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT1_EN_SHIFT)) & MSCM_IRCP3IGR3_INT1_EN_MASK)

#define MSCM_IRCP3IGR3_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP3IGR3_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP3IGR3_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR3_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT2_EN_SHIFT)) & MSCM_IRCP3IGR3_INT2_EN_MASK)

#define MSCM_IRCP3IGR3_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP3IGR3_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP3IGR3_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR3_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT3_EN_SHIFT)) & MSCM_IRCP3IGR3_INT3_EN_MASK)

#define MSCM_IRCP3IGR3_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP3IGR3_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP3IGR3_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR3_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT4_EN_SHIFT)) & MSCM_IRCP3IGR3_INT4_EN_MASK)

#define MSCM_IRCP3IGR3_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP3IGR3_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP3IGR3_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR3_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT5_EN_SHIFT)) & MSCM_IRCP3IGR3_INT5_EN_MASK)

#define MSCM_IRCP3IGR3_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP3IGR3_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP3IGR3_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR3_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT6_EN_SHIFT)) & MSCM_IRCP3IGR3_INT6_EN_MASK)

#define MSCM_IRCP3IGR3_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP3IGR3_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP3IGR3_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR3_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT7_EN_SHIFT)) & MSCM_IRCP3IGR3_INT7_EN_MASK)

#define MSCM_IRCP3IGR3_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP3IGR3_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP3IGR3_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR3_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT8_EN_SHIFT)) & MSCM_IRCP3IGR3_INT8_EN_MASK)

#define MSCM_IRCP3IGR3_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP3IGR3_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP3IGR3_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR3_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT9_EN_SHIFT)) & MSCM_IRCP3IGR3_INT9_EN_MASK)

#define MSCM_IRCP3IGR3_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP3IGR3_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP3IGR3_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP3IGR3_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT10_EN_SHIFT)) & MSCM_IRCP3IGR3_INT10_EN_MASK)

#define MSCM_IRCP3IGR3_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP3IGR3_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP3IGR3_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP3IGR3_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT11_EN_SHIFT)) & MSCM_IRCP3IGR3_INT11_EN_MASK)

#define MSCM_IRCP3IGR3_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP3IGR3_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP3IGR3_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP3IGR3_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT12_EN_SHIFT)) & MSCM_IRCP3IGR3_INT12_EN_MASK)

#define MSCM_IRCP3IGR3_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP3IGR3_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP3IGR3_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP3IGR3_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT13_EN_SHIFT)) & MSCM_IRCP3IGR3_INT13_EN_MASK)

#define MSCM_IRCP3IGR3_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP3IGR3_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP3IGR3_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP3IGR3_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT14_EN_SHIFT)) & MSCM_IRCP3IGR3_INT14_EN_MASK)

#define MSCM_IRCP3IGR3_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP3IGR3_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP3IGR3_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP3IGR3_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR3_INT15_EN_SHIFT)) & MSCM_IRCP3IGR3_INT15_EN_MASK)
/*! @} */

/*! @name IRCP4ISR0 - Interrupt Router CP4 Interrupt0 Status Register */
/*! @{ */

#define MSCM_IRCP4ISR0_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP4ISR0_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP4ISR0_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR0_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR0_CP0_INT_SHIFT)) & MSCM_IRCP4ISR0_CP0_INT_MASK)

#define MSCM_IRCP4ISR0_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP4ISR0_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP4ISR0_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR0_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR0_CP1_INT_SHIFT)) & MSCM_IRCP4ISR0_CP1_INT_MASK)

#define MSCM_IRCP4ISR0_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP4ISR0_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP4ISR0_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR0_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR0_CP2_INT_SHIFT)) & MSCM_IRCP4ISR0_CP2_INT_MASK)

#define MSCM_IRCP4ISR0_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP4ISR0_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP4ISR0_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR0_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR0_CP3_INT_SHIFT)) & MSCM_IRCP4ISR0_CP3_INT_MASK)

#define MSCM_IRCP4ISR0_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP4ISR0_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP4ISR0_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR0_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR0_CP4_INT_SHIFT)) & MSCM_IRCP4ISR0_CP4_INT_MASK)

#define MSCM_IRCP4ISR0_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP4ISR0_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP4ISR0_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR0_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR0_CP5_INT_SHIFT)) & MSCM_IRCP4ISR0_CP5_INT_MASK)

#define MSCM_IRCP4ISR0_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP4ISR0_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP4ISR0_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR0_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR0_CP6_INT_SHIFT)) & MSCM_IRCP4ISR0_CP6_INT_MASK)
/*! @} */

/*! @name IRCP4IGR0 - Interrupt Router CP4 Interrupt0 Generation Register */
/*! @{ */

#define MSCM_IRCP4IGR0_INT_EN_MASK               (0x1U)
#define MSCM_IRCP4IGR0_INT_EN_SHIFT              (0U)
#define MSCM_IRCP4IGR0_INT_EN_WIDTH              (1U)
#define MSCM_IRCP4IGR0_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR0_INT_EN_SHIFT)) & MSCM_IRCP4IGR0_INT_EN_MASK)
/*! @} */

/*! @name IRCP4ISR1 - Interrupt Router CP4 Interrupt1 Status Register */
/*! @{ */

#define MSCM_IRCP4ISR1_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP4ISR1_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP4ISR1_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR1_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR1_CP0_INT_SHIFT)) & MSCM_IRCP4ISR1_CP0_INT_MASK)

#define MSCM_IRCP4ISR1_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP4ISR1_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP4ISR1_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR1_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR1_CP1_INT_SHIFT)) & MSCM_IRCP4ISR1_CP1_INT_MASK)

#define MSCM_IRCP4ISR1_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP4ISR1_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP4ISR1_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR1_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR1_CP2_INT_SHIFT)) & MSCM_IRCP4ISR1_CP2_INT_MASK)

#define MSCM_IRCP4ISR1_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP4ISR1_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP4ISR1_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR1_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR1_CP3_INT_SHIFT)) & MSCM_IRCP4ISR1_CP3_INT_MASK)

#define MSCM_IRCP4ISR1_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP4ISR1_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP4ISR1_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR1_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR1_CP4_INT_SHIFT)) & MSCM_IRCP4ISR1_CP4_INT_MASK)

#define MSCM_IRCP4ISR1_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP4ISR1_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP4ISR1_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR1_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR1_CP5_INT_SHIFT)) & MSCM_IRCP4ISR1_CP5_INT_MASK)

#define MSCM_IRCP4ISR1_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP4ISR1_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP4ISR1_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR1_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR1_CP6_INT_SHIFT)) & MSCM_IRCP4ISR1_CP6_INT_MASK)
/*! @} */

/*! @name IRCP4IGR1 - Interrupt Router CP4 Interrupt1 Generation Register */
/*! @{ */

#define MSCM_IRCP4IGR1_INT_EN_MASK               (0x1U)
#define MSCM_IRCP4IGR1_INT_EN_SHIFT              (0U)
#define MSCM_IRCP4IGR1_INT_EN_WIDTH              (1U)
#define MSCM_IRCP4IGR1_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR1_INT_EN_SHIFT)) & MSCM_IRCP4IGR1_INT_EN_MASK)
/*! @} */

/*! @name IRCP4ISR2 - Interrupt Router CP4 Interrupt2 Status Register */
/*! @{ */

#define MSCM_IRCP4ISR2_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP4ISR2_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP4ISR2_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR2_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR2_CP0_INT_SHIFT)) & MSCM_IRCP4ISR2_CP0_INT_MASK)

#define MSCM_IRCP4ISR2_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP4ISR2_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP4ISR2_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR2_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR2_CP1_INT_SHIFT)) & MSCM_IRCP4ISR2_CP1_INT_MASK)

#define MSCM_IRCP4ISR2_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP4ISR2_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP4ISR2_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR2_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR2_CP2_INT_SHIFT)) & MSCM_IRCP4ISR2_CP2_INT_MASK)

#define MSCM_IRCP4ISR2_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP4ISR2_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP4ISR2_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR2_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR2_CP3_INT_SHIFT)) & MSCM_IRCP4ISR2_CP3_INT_MASK)

#define MSCM_IRCP4ISR2_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP4ISR2_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP4ISR2_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR2_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR2_CP4_INT_SHIFT)) & MSCM_IRCP4ISR2_CP4_INT_MASK)

#define MSCM_IRCP4ISR2_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP4ISR2_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP4ISR2_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR2_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR2_CP5_INT_SHIFT)) & MSCM_IRCP4ISR2_CP5_INT_MASK)

#define MSCM_IRCP4ISR2_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP4ISR2_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP4ISR2_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR2_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR2_CP6_INT_SHIFT)) & MSCM_IRCP4ISR2_CP6_INT_MASK)
/*! @} */

/*! @name IRCP4IGR2 - Interrupt Router CP4 Interrupt2 Generation Register */
/*! @{ */

#define MSCM_IRCP4IGR2_INT_EN_MASK               (0x1U)
#define MSCM_IRCP4IGR2_INT_EN_SHIFT              (0U)
#define MSCM_IRCP4IGR2_INT_EN_WIDTH              (1U)
#define MSCM_IRCP4IGR2_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR2_INT_EN_SHIFT)) & MSCM_IRCP4IGR2_INT_EN_MASK)
/*! @} */

/*! @name IRCP4ISR3 - Interrupt Router CP4 Interrupt3 Status Register */
/*! @{ */

#define MSCM_IRCP4ISR3_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP4ISR3_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP4ISR3_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP4ISR3_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT0_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT0_MASK)

#define MSCM_IRCP4ISR3_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP4ISR3_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP4ISR3_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP4ISR3_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT1_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT1_MASK)

#define MSCM_IRCP4ISR3_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP4ISR3_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP4ISR3_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP4ISR3_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT2_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT2_MASK)

#define MSCM_IRCP4ISR3_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP4ISR3_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP4ISR3_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP4ISR3_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT3_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT3_MASK)

#define MSCM_IRCP4ISR3_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP4ISR3_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP4ISR3_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP4ISR3_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT4_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT4_MASK)

#define MSCM_IRCP4ISR3_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP4ISR3_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP4ISR3_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP4ISR3_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT5_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT5_MASK)

#define MSCM_IRCP4ISR3_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP4ISR3_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP4ISR3_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP4ISR3_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT6_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT6_MASK)

#define MSCM_IRCP4ISR3_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP4ISR3_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP4ISR3_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP4ISR3_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT7_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT7_MASK)

#define MSCM_IRCP4ISR3_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP4ISR3_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP4ISR3_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP4ISR3_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT8_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT8_MASK)

#define MSCM_IRCP4ISR3_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP4ISR3_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP4ISR3_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP4ISR3_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT9_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT9_MASK)

#define MSCM_IRCP4ISR3_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP4ISR3_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP4ISR3_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP4ISR3_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT10_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT10_MASK)

#define MSCM_IRCP4ISR3_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP4ISR3_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP4ISR3_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP4ISR3_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT11_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT11_MASK)

#define MSCM_IRCP4ISR3_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP4ISR3_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP4ISR3_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP4ISR3_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT12_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT12_MASK)

#define MSCM_IRCP4ISR3_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP4ISR3_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP4ISR3_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP4ISR3_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT13_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT13_MASK)

#define MSCM_IRCP4ISR3_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP4ISR3_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP4ISR3_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP4ISR3_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT14_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT14_MASK)

#define MSCM_IRCP4ISR3_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP4ISR3_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP4ISR3_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP4ISR3_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR3_PCIE_INT15_SHIFT)) & MSCM_IRCP4ISR3_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP4IGR3 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP4IGR3_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP4IGR3_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP4IGR3_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR3_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT0_EN_SHIFT)) & MSCM_IRCP4IGR3_INT0_EN_MASK)

#define MSCM_IRCP4IGR3_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP4IGR3_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP4IGR3_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR3_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT1_EN_SHIFT)) & MSCM_IRCP4IGR3_INT1_EN_MASK)

#define MSCM_IRCP4IGR3_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP4IGR3_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP4IGR3_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR3_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT2_EN_SHIFT)) & MSCM_IRCP4IGR3_INT2_EN_MASK)

#define MSCM_IRCP4IGR3_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP4IGR3_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP4IGR3_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR3_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT3_EN_SHIFT)) & MSCM_IRCP4IGR3_INT3_EN_MASK)

#define MSCM_IRCP4IGR3_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP4IGR3_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP4IGR3_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR3_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT4_EN_SHIFT)) & MSCM_IRCP4IGR3_INT4_EN_MASK)

#define MSCM_IRCP4IGR3_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP4IGR3_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP4IGR3_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR3_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT5_EN_SHIFT)) & MSCM_IRCP4IGR3_INT5_EN_MASK)

#define MSCM_IRCP4IGR3_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP4IGR3_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP4IGR3_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR3_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT6_EN_SHIFT)) & MSCM_IRCP4IGR3_INT6_EN_MASK)

#define MSCM_IRCP4IGR3_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP4IGR3_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP4IGR3_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR3_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT7_EN_SHIFT)) & MSCM_IRCP4IGR3_INT7_EN_MASK)

#define MSCM_IRCP4IGR3_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP4IGR3_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP4IGR3_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR3_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT8_EN_SHIFT)) & MSCM_IRCP4IGR3_INT8_EN_MASK)

#define MSCM_IRCP4IGR3_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP4IGR3_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP4IGR3_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR3_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT9_EN_SHIFT)) & MSCM_IRCP4IGR3_INT9_EN_MASK)

#define MSCM_IRCP4IGR3_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP4IGR3_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP4IGR3_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP4IGR3_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT10_EN_SHIFT)) & MSCM_IRCP4IGR3_INT10_EN_MASK)

#define MSCM_IRCP4IGR3_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP4IGR3_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP4IGR3_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP4IGR3_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT11_EN_SHIFT)) & MSCM_IRCP4IGR3_INT11_EN_MASK)

#define MSCM_IRCP4IGR3_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP4IGR3_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP4IGR3_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP4IGR3_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT12_EN_SHIFT)) & MSCM_IRCP4IGR3_INT12_EN_MASK)

#define MSCM_IRCP4IGR3_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP4IGR3_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP4IGR3_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP4IGR3_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT13_EN_SHIFT)) & MSCM_IRCP4IGR3_INT13_EN_MASK)

#define MSCM_IRCP4IGR3_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP4IGR3_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP4IGR3_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP4IGR3_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT14_EN_SHIFT)) & MSCM_IRCP4IGR3_INT14_EN_MASK)

#define MSCM_IRCP4IGR3_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP4IGR3_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP4IGR3_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP4IGR3_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR3_INT15_EN_SHIFT)) & MSCM_IRCP4IGR3_INT15_EN_MASK)
/*! @} */

/*! @name IRCP5ISR0 - Interrupt Router CP5 Interrupt0 Status Register */
/*! @{ */

#define MSCM_IRCP5ISR0_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP5ISR0_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP5ISR0_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR0_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR0_CP0_INT_SHIFT)) & MSCM_IRCP5ISR0_CP0_INT_MASK)

#define MSCM_IRCP5ISR0_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP5ISR0_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP5ISR0_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR0_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR0_CP1_INT_SHIFT)) & MSCM_IRCP5ISR0_CP1_INT_MASK)

#define MSCM_IRCP5ISR0_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP5ISR0_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP5ISR0_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR0_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR0_CP2_INT_SHIFT)) & MSCM_IRCP5ISR0_CP2_INT_MASK)

#define MSCM_IRCP5ISR0_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP5ISR0_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP5ISR0_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR0_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR0_CP3_INT_SHIFT)) & MSCM_IRCP5ISR0_CP3_INT_MASK)

#define MSCM_IRCP5ISR0_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP5ISR0_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP5ISR0_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR0_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR0_CP4_INT_SHIFT)) & MSCM_IRCP5ISR0_CP4_INT_MASK)

#define MSCM_IRCP5ISR0_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP5ISR0_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP5ISR0_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR0_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR0_CP5_INT_SHIFT)) & MSCM_IRCP5ISR0_CP5_INT_MASK)

#define MSCM_IRCP5ISR0_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP5ISR0_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP5ISR0_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR0_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR0_CP6_INT_SHIFT)) & MSCM_IRCP5ISR0_CP6_INT_MASK)
/*! @} */

/*! @name IRCP5IGR0 - Interrupt Router CP5 Interrupt0 Generation Register */
/*! @{ */

#define MSCM_IRCP5IGR0_INT_EN_MASK               (0x1U)
#define MSCM_IRCP5IGR0_INT_EN_SHIFT              (0U)
#define MSCM_IRCP5IGR0_INT_EN_WIDTH              (1U)
#define MSCM_IRCP5IGR0_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR0_INT_EN_SHIFT)) & MSCM_IRCP5IGR0_INT_EN_MASK)
/*! @} */

/*! @name IRCP5ISR1 - Interrupt Router CP5 Interrupt1 Status Register */
/*! @{ */

#define MSCM_IRCP5ISR1_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP5ISR1_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP5ISR1_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR1_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR1_CP0_INT_SHIFT)) & MSCM_IRCP5ISR1_CP0_INT_MASK)

#define MSCM_IRCP5ISR1_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP5ISR1_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP5ISR1_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR1_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR1_CP1_INT_SHIFT)) & MSCM_IRCP5ISR1_CP1_INT_MASK)

#define MSCM_IRCP5ISR1_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP5ISR1_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP5ISR1_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR1_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR1_CP2_INT_SHIFT)) & MSCM_IRCP5ISR1_CP2_INT_MASK)

#define MSCM_IRCP5ISR1_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP5ISR1_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP5ISR1_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR1_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR1_CP3_INT_SHIFT)) & MSCM_IRCP5ISR1_CP3_INT_MASK)

#define MSCM_IRCP5ISR1_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP5ISR1_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP5ISR1_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR1_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR1_CP4_INT_SHIFT)) & MSCM_IRCP5ISR1_CP4_INT_MASK)

#define MSCM_IRCP5ISR1_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP5ISR1_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP5ISR1_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR1_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR1_CP5_INT_SHIFT)) & MSCM_IRCP5ISR1_CP5_INT_MASK)

#define MSCM_IRCP5ISR1_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP5ISR1_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP5ISR1_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR1_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR1_CP6_INT_SHIFT)) & MSCM_IRCP5ISR1_CP6_INT_MASK)
/*! @} */

/*! @name IRCP5IGR1 - Interrupt Router CP5 Interrupt1 Generation Register */
/*! @{ */

#define MSCM_IRCP5IGR1_INT_EN_MASK               (0x1U)
#define MSCM_IRCP5IGR1_INT_EN_SHIFT              (0U)
#define MSCM_IRCP5IGR1_INT_EN_WIDTH              (1U)
#define MSCM_IRCP5IGR1_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR1_INT_EN_SHIFT)) & MSCM_IRCP5IGR1_INT_EN_MASK)
/*! @} */

/*! @name IRCP5ISR2 - Interrupt Router CP5 Interrupt2 Status Register */
/*! @{ */

#define MSCM_IRCP5ISR2_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP5ISR2_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP5ISR2_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR2_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR2_CP0_INT_SHIFT)) & MSCM_IRCP5ISR2_CP0_INT_MASK)

#define MSCM_IRCP5ISR2_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP5ISR2_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP5ISR2_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR2_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR2_CP1_INT_SHIFT)) & MSCM_IRCP5ISR2_CP1_INT_MASK)

#define MSCM_IRCP5ISR2_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP5ISR2_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP5ISR2_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR2_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR2_CP2_INT_SHIFT)) & MSCM_IRCP5ISR2_CP2_INT_MASK)

#define MSCM_IRCP5ISR2_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP5ISR2_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP5ISR2_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR2_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR2_CP3_INT_SHIFT)) & MSCM_IRCP5ISR2_CP3_INT_MASK)

#define MSCM_IRCP5ISR2_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP5ISR2_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP5ISR2_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR2_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR2_CP4_INT_SHIFT)) & MSCM_IRCP5ISR2_CP4_INT_MASK)

#define MSCM_IRCP5ISR2_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP5ISR2_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP5ISR2_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR2_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR2_CP5_INT_SHIFT)) & MSCM_IRCP5ISR2_CP5_INT_MASK)

#define MSCM_IRCP5ISR2_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP5ISR2_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP5ISR2_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR2_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR2_CP6_INT_SHIFT)) & MSCM_IRCP5ISR2_CP6_INT_MASK)
/*! @} */

/*! @name IRCP5IGR2 - Interrupt Router CP5 Interrupt2 Generation Register */
/*! @{ */

#define MSCM_IRCP5IGR2_INT_EN_MASK               (0x1U)
#define MSCM_IRCP5IGR2_INT_EN_SHIFT              (0U)
#define MSCM_IRCP5IGR2_INT_EN_WIDTH              (1U)
#define MSCM_IRCP5IGR2_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR2_INT_EN_SHIFT)) & MSCM_IRCP5IGR2_INT_EN_MASK)
/*! @} */

/*! @name IRCP5ISR3 - Interrupt Router CP5 Interrupt3 Status Register */
/*! @{ */

#define MSCM_IRCP5ISR3_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP5ISR3_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP5ISR3_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP5ISR3_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT0_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT0_MASK)

#define MSCM_IRCP5ISR3_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP5ISR3_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP5ISR3_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP5ISR3_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT1_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT1_MASK)

#define MSCM_IRCP5ISR3_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP5ISR3_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP5ISR3_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP5ISR3_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT2_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT2_MASK)

#define MSCM_IRCP5ISR3_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP5ISR3_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP5ISR3_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP5ISR3_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT3_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT3_MASK)

#define MSCM_IRCP5ISR3_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP5ISR3_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP5ISR3_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP5ISR3_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT4_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT4_MASK)

#define MSCM_IRCP5ISR3_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP5ISR3_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP5ISR3_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP5ISR3_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT5_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT5_MASK)

#define MSCM_IRCP5ISR3_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP5ISR3_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP5ISR3_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP5ISR3_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT6_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT6_MASK)

#define MSCM_IRCP5ISR3_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP5ISR3_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP5ISR3_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP5ISR3_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT7_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT7_MASK)

#define MSCM_IRCP5ISR3_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP5ISR3_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP5ISR3_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP5ISR3_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT8_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT8_MASK)

#define MSCM_IRCP5ISR3_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP5ISR3_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP5ISR3_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP5ISR3_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT9_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT9_MASK)

#define MSCM_IRCP5ISR3_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP5ISR3_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP5ISR3_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP5ISR3_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT10_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT10_MASK)

#define MSCM_IRCP5ISR3_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP5ISR3_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP5ISR3_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP5ISR3_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT11_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT11_MASK)

#define MSCM_IRCP5ISR3_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP5ISR3_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP5ISR3_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP5ISR3_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT12_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT12_MASK)

#define MSCM_IRCP5ISR3_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP5ISR3_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP5ISR3_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP5ISR3_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT13_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT13_MASK)

#define MSCM_IRCP5ISR3_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP5ISR3_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP5ISR3_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP5ISR3_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT14_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT14_MASK)

#define MSCM_IRCP5ISR3_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP5ISR3_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP5ISR3_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP5ISR3_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR3_PCIE_INT15_SHIFT)) & MSCM_IRCP5ISR3_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP5IGR3 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP5IGR3_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP5IGR3_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP5IGR3_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR3_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT0_EN_SHIFT)) & MSCM_IRCP5IGR3_INT0_EN_MASK)

#define MSCM_IRCP5IGR3_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP5IGR3_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP5IGR3_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR3_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT1_EN_SHIFT)) & MSCM_IRCP5IGR3_INT1_EN_MASK)

#define MSCM_IRCP5IGR3_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP5IGR3_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP5IGR3_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR3_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT2_EN_SHIFT)) & MSCM_IRCP5IGR3_INT2_EN_MASK)

#define MSCM_IRCP5IGR3_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP5IGR3_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP5IGR3_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR3_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT3_EN_SHIFT)) & MSCM_IRCP5IGR3_INT3_EN_MASK)

#define MSCM_IRCP5IGR3_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP5IGR3_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP5IGR3_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR3_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT4_EN_SHIFT)) & MSCM_IRCP5IGR3_INT4_EN_MASK)

#define MSCM_IRCP5IGR3_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP5IGR3_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP5IGR3_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR3_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT5_EN_SHIFT)) & MSCM_IRCP5IGR3_INT5_EN_MASK)

#define MSCM_IRCP5IGR3_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP5IGR3_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP5IGR3_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR3_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT6_EN_SHIFT)) & MSCM_IRCP5IGR3_INT6_EN_MASK)

#define MSCM_IRCP5IGR3_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP5IGR3_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP5IGR3_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR3_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT7_EN_SHIFT)) & MSCM_IRCP5IGR3_INT7_EN_MASK)

#define MSCM_IRCP5IGR3_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP5IGR3_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP5IGR3_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR3_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT8_EN_SHIFT)) & MSCM_IRCP5IGR3_INT8_EN_MASK)

#define MSCM_IRCP5IGR3_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP5IGR3_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP5IGR3_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR3_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT9_EN_SHIFT)) & MSCM_IRCP5IGR3_INT9_EN_MASK)

#define MSCM_IRCP5IGR3_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP5IGR3_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP5IGR3_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP5IGR3_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT10_EN_SHIFT)) & MSCM_IRCP5IGR3_INT10_EN_MASK)

#define MSCM_IRCP5IGR3_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP5IGR3_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP5IGR3_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP5IGR3_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT11_EN_SHIFT)) & MSCM_IRCP5IGR3_INT11_EN_MASK)

#define MSCM_IRCP5IGR3_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP5IGR3_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP5IGR3_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP5IGR3_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT12_EN_SHIFT)) & MSCM_IRCP5IGR3_INT12_EN_MASK)

#define MSCM_IRCP5IGR3_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP5IGR3_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP5IGR3_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP5IGR3_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT13_EN_SHIFT)) & MSCM_IRCP5IGR3_INT13_EN_MASK)

#define MSCM_IRCP5IGR3_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP5IGR3_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP5IGR3_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP5IGR3_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT14_EN_SHIFT)) & MSCM_IRCP5IGR3_INT14_EN_MASK)

#define MSCM_IRCP5IGR3_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP5IGR3_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP5IGR3_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP5IGR3_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR3_INT15_EN_SHIFT)) & MSCM_IRCP5IGR3_INT15_EN_MASK)
/*! @} */

/*! @name IRCP6ISR0 - Interrupt Router CP6 Interrupt0 Status Register */
/*! @{ */

#define MSCM_IRCP6ISR0_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP6ISR0_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP6ISR0_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR0_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR0_CP0_INT_SHIFT)) & MSCM_IRCP6ISR0_CP0_INT_MASK)

#define MSCM_IRCP6ISR0_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP6ISR0_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP6ISR0_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR0_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR0_CP1_INT_SHIFT)) & MSCM_IRCP6ISR0_CP1_INT_MASK)

#define MSCM_IRCP6ISR0_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP6ISR0_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP6ISR0_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR0_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR0_CP2_INT_SHIFT)) & MSCM_IRCP6ISR0_CP2_INT_MASK)

#define MSCM_IRCP6ISR0_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP6ISR0_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP6ISR0_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR0_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR0_CP3_INT_SHIFT)) & MSCM_IRCP6ISR0_CP3_INT_MASK)

#define MSCM_IRCP6ISR0_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP6ISR0_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP6ISR0_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR0_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR0_CP4_INT_SHIFT)) & MSCM_IRCP6ISR0_CP4_INT_MASK)

#define MSCM_IRCP6ISR0_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP6ISR0_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP6ISR0_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR0_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR0_CP5_INT_SHIFT)) & MSCM_IRCP6ISR0_CP5_INT_MASK)

#define MSCM_IRCP6ISR0_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP6ISR0_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP6ISR0_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR0_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR0_CP6_INT_SHIFT)) & MSCM_IRCP6ISR0_CP6_INT_MASK)
/*! @} */

/*! @name IRCP6IGR0 - Interrupt Router CP6 Interrupt0 Generation Register */
/*! @{ */

#define MSCM_IRCP6IGR0_INT_EN_MASK               (0x1U)
#define MSCM_IRCP6IGR0_INT_EN_SHIFT              (0U)
#define MSCM_IRCP6IGR0_INT_EN_WIDTH              (1U)
#define MSCM_IRCP6IGR0_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR0_INT_EN_SHIFT)) & MSCM_IRCP6IGR0_INT_EN_MASK)
/*! @} */

/*! @name IRCP6ISR1 - Interrupt Router CP6 Interrupt1 Status Register */
/*! @{ */

#define MSCM_IRCP6ISR1_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP6ISR1_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP6ISR1_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR1_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR1_CP0_INT_SHIFT)) & MSCM_IRCP6ISR1_CP0_INT_MASK)

#define MSCM_IRCP6ISR1_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP6ISR1_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP6ISR1_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR1_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR1_CP1_INT_SHIFT)) & MSCM_IRCP6ISR1_CP1_INT_MASK)

#define MSCM_IRCP6ISR1_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP6ISR1_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP6ISR1_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR1_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR1_CP2_INT_SHIFT)) & MSCM_IRCP6ISR1_CP2_INT_MASK)

#define MSCM_IRCP6ISR1_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP6ISR1_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP6ISR1_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR1_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR1_CP3_INT_SHIFT)) & MSCM_IRCP6ISR1_CP3_INT_MASK)

#define MSCM_IRCP6ISR1_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP6ISR1_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP6ISR1_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR1_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR1_CP4_INT_SHIFT)) & MSCM_IRCP6ISR1_CP4_INT_MASK)

#define MSCM_IRCP6ISR1_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP6ISR1_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP6ISR1_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR1_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR1_CP5_INT_SHIFT)) & MSCM_IRCP6ISR1_CP5_INT_MASK)

#define MSCM_IRCP6ISR1_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP6ISR1_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP6ISR1_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR1_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR1_CP6_INT_SHIFT)) & MSCM_IRCP6ISR1_CP6_INT_MASK)
/*! @} */

/*! @name IRCP6IGR1 - Interrupt Router CP6 Interrupt1 Generation Register */
/*! @{ */

#define MSCM_IRCP6IGR1_INT_EN_MASK               (0x1U)
#define MSCM_IRCP6IGR1_INT_EN_SHIFT              (0U)
#define MSCM_IRCP6IGR1_INT_EN_WIDTH              (1U)
#define MSCM_IRCP6IGR1_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR1_INT_EN_SHIFT)) & MSCM_IRCP6IGR1_INT_EN_MASK)
/*! @} */

/*! @name IRCP6ISR2 - Interrupt Router CP6 Interrupt2 Status Register */
/*! @{ */

#define MSCM_IRCP6ISR2_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP6ISR2_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP6ISR2_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR2_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR2_CP0_INT_SHIFT)) & MSCM_IRCP6ISR2_CP0_INT_MASK)

#define MSCM_IRCP6ISR2_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP6ISR2_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP6ISR2_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR2_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR2_CP1_INT_SHIFT)) & MSCM_IRCP6ISR2_CP1_INT_MASK)

#define MSCM_IRCP6ISR2_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP6ISR2_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP6ISR2_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR2_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR2_CP2_INT_SHIFT)) & MSCM_IRCP6ISR2_CP2_INT_MASK)

#define MSCM_IRCP6ISR2_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP6ISR2_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP6ISR2_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR2_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR2_CP3_INT_SHIFT)) & MSCM_IRCP6ISR2_CP3_INT_MASK)

#define MSCM_IRCP6ISR2_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP6ISR2_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP6ISR2_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR2_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR2_CP4_INT_SHIFT)) & MSCM_IRCP6ISR2_CP4_INT_MASK)

#define MSCM_IRCP6ISR2_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP6ISR2_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP6ISR2_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR2_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR2_CP5_INT_SHIFT)) & MSCM_IRCP6ISR2_CP5_INT_MASK)

#define MSCM_IRCP6ISR2_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP6ISR2_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP6ISR2_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR2_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR2_CP6_INT_SHIFT)) & MSCM_IRCP6ISR2_CP6_INT_MASK)
/*! @} */

/*! @name IRCP6IGR2 - Interrupt Router CP6 Interrupt2 Generation Register */
/*! @{ */

#define MSCM_IRCP6IGR2_INT_EN_MASK               (0x1U)
#define MSCM_IRCP6IGR2_INT_EN_SHIFT              (0U)
#define MSCM_IRCP6IGR2_INT_EN_WIDTH              (1U)
#define MSCM_IRCP6IGR2_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR2_INT_EN_SHIFT)) & MSCM_IRCP6IGR2_INT_EN_MASK)
/*! @} */

/*! @name IRCP6ISR3 - Interrupt Router CP6 Interrupt3 Status Register */
/*! @{ */

#define MSCM_IRCP6ISR3_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP6ISR3_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP6ISR3_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP6ISR3_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT0_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT0_MASK)

#define MSCM_IRCP6ISR3_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP6ISR3_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP6ISR3_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP6ISR3_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT1_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT1_MASK)

#define MSCM_IRCP6ISR3_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP6ISR3_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP6ISR3_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP6ISR3_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT2_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT2_MASK)

#define MSCM_IRCP6ISR3_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP6ISR3_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP6ISR3_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP6ISR3_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT3_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT3_MASK)

#define MSCM_IRCP6ISR3_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP6ISR3_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP6ISR3_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP6ISR3_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT4_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT4_MASK)

#define MSCM_IRCP6ISR3_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP6ISR3_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP6ISR3_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP6ISR3_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT5_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT5_MASK)

#define MSCM_IRCP6ISR3_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP6ISR3_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP6ISR3_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP6ISR3_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT6_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT6_MASK)

#define MSCM_IRCP6ISR3_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP6ISR3_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP6ISR3_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP6ISR3_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT7_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT7_MASK)

#define MSCM_IRCP6ISR3_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP6ISR3_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP6ISR3_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP6ISR3_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT8_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT8_MASK)

#define MSCM_IRCP6ISR3_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP6ISR3_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP6ISR3_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP6ISR3_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT9_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT9_MASK)

#define MSCM_IRCP6ISR3_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP6ISR3_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP6ISR3_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP6ISR3_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT10_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT10_MASK)

#define MSCM_IRCP6ISR3_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP6ISR3_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP6ISR3_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP6ISR3_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT11_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT11_MASK)

#define MSCM_IRCP6ISR3_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP6ISR3_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP6ISR3_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP6ISR3_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT12_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT12_MASK)

#define MSCM_IRCP6ISR3_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP6ISR3_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP6ISR3_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP6ISR3_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT13_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT13_MASK)

#define MSCM_IRCP6ISR3_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP6ISR3_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP6ISR3_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP6ISR3_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT14_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT14_MASK)

#define MSCM_IRCP6ISR3_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP6ISR3_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP6ISR3_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP6ISR3_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR3_PCIE_INT15_SHIFT)) & MSCM_IRCP6ISR3_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP6IGR3 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP6IGR3_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP6IGR3_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP6IGR3_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR3_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT0_EN_SHIFT)) & MSCM_IRCP6IGR3_INT0_EN_MASK)

#define MSCM_IRCP6IGR3_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP6IGR3_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP6IGR3_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR3_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT1_EN_SHIFT)) & MSCM_IRCP6IGR3_INT1_EN_MASK)

#define MSCM_IRCP6IGR3_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP6IGR3_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP6IGR3_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR3_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT2_EN_SHIFT)) & MSCM_IRCP6IGR3_INT2_EN_MASK)

#define MSCM_IRCP6IGR3_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP6IGR3_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP6IGR3_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR3_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT3_EN_SHIFT)) & MSCM_IRCP6IGR3_INT3_EN_MASK)

#define MSCM_IRCP6IGR3_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP6IGR3_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP6IGR3_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR3_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT4_EN_SHIFT)) & MSCM_IRCP6IGR3_INT4_EN_MASK)

#define MSCM_IRCP6IGR3_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP6IGR3_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP6IGR3_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR3_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT5_EN_SHIFT)) & MSCM_IRCP6IGR3_INT5_EN_MASK)

#define MSCM_IRCP6IGR3_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP6IGR3_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP6IGR3_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR3_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT6_EN_SHIFT)) & MSCM_IRCP6IGR3_INT6_EN_MASK)

#define MSCM_IRCP6IGR3_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP6IGR3_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP6IGR3_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR3_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT7_EN_SHIFT)) & MSCM_IRCP6IGR3_INT7_EN_MASK)

#define MSCM_IRCP6IGR3_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP6IGR3_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP6IGR3_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR3_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT8_EN_SHIFT)) & MSCM_IRCP6IGR3_INT8_EN_MASK)

#define MSCM_IRCP6IGR3_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP6IGR3_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP6IGR3_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR3_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT9_EN_SHIFT)) & MSCM_IRCP6IGR3_INT9_EN_MASK)

#define MSCM_IRCP6IGR3_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP6IGR3_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP6IGR3_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP6IGR3_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT10_EN_SHIFT)) & MSCM_IRCP6IGR3_INT10_EN_MASK)

#define MSCM_IRCP6IGR3_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP6IGR3_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP6IGR3_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP6IGR3_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT11_EN_SHIFT)) & MSCM_IRCP6IGR3_INT11_EN_MASK)

#define MSCM_IRCP6IGR3_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP6IGR3_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP6IGR3_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP6IGR3_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT12_EN_SHIFT)) & MSCM_IRCP6IGR3_INT12_EN_MASK)

#define MSCM_IRCP6IGR3_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP6IGR3_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP6IGR3_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP6IGR3_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT13_EN_SHIFT)) & MSCM_IRCP6IGR3_INT13_EN_MASK)

#define MSCM_IRCP6IGR3_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP6IGR3_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP6IGR3_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP6IGR3_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT14_EN_SHIFT)) & MSCM_IRCP6IGR3_INT14_EN_MASK)

#define MSCM_IRCP6IGR3_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP6IGR3_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP6IGR3_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP6IGR3_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR3_INT15_EN_SHIFT)) & MSCM_IRCP6IGR3_INT15_EN_MASK)
/*! @} */

/*! @name IRCP0ISR4 - Interrupt Router CP0 Interrupt4 Status Register */
/*! @{ */

#define MSCM_IRCP0ISR4_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP0ISR4_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP0ISR4_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP0ISR4_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT0_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT0_MASK)

#define MSCM_IRCP0ISR4_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP0ISR4_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP0ISR4_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP0ISR4_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT1_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT1_MASK)

#define MSCM_IRCP0ISR4_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP0ISR4_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP0ISR4_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP0ISR4_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT2_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT2_MASK)

#define MSCM_IRCP0ISR4_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP0ISR4_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP0ISR4_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP0ISR4_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT3_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT3_MASK)

#define MSCM_IRCP0ISR4_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP0ISR4_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP0ISR4_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP0ISR4_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT4_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT4_MASK)

#define MSCM_IRCP0ISR4_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP0ISR4_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP0ISR4_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP0ISR4_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT5_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT5_MASK)

#define MSCM_IRCP0ISR4_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP0ISR4_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP0ISR4_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP0ISR4_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT6_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT6_MASK)

#define MSCM_IRCP0ISR4_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP0ISR4_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP0ISR4_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP0ISR4_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT7_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT7_MASK)

#define MSCM_IRCP0ISR4_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP0ISR4_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP0ISR4_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP0ISR4_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT8_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT8_MASK)

#define MSCM_IRCP0ISR4_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP0ISR4_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP0ISR4_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP0ISR4_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT9_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT9_MASK)

#define MSCM_IRCP0ISR4_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP0ISR4_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP0ISR4_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP0ISR4_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT10_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT10_MASK)

#define MSCM_IRCP0ISR4_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP0ISR4_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP0ISR4_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP0ISR4_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT11_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT11_MASK)

#define MSCM_IRCP0ISR4_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP0ISR4_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP0ISR4_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP0ISR4_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT12_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT12_MASK)

#define MSCM_IRCP0ISR4_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP0ISR4_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP0ISR4_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP0ISR4_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT13_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT13_MASK)

#define MSCM_IRCP0ISR4_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP0ISR4_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP0ISR4_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP0ISR4_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT14_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT14_MASK)

#define MSCM_IRCP0ISR4_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP0ISR4_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP0ISR4_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP0ISR4_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR4_PCIE_INT15_SHIFT)) & MSCM_IRCP0ISR4_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP0IGR4 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP0IGR4_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP0IGR4_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP0IGR4_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR4_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT0_EN_SHIFT)) & MSCM_IRCP0IGR4_INT0_EN_MASK)

#define MSCM_IRCP0IGR4_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP0IGR4_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP0IGR4_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR4_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT1_EN_SHIFT)) & MSCM_IRCP0IGR4_INT1_EN_MASK)

#define MSCM_IRCP0IGR4_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP0IGR4_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP0IGR4_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR4_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT2_EN_SHIFT)) & MSCM_IRCP0IGR4_INT2_EN_MASK)

#define MSCM_IRCP0IGR4_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP0IGR4_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP0IGR4_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR4_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT3_EN_SHIFT)) & MSCM_IRCP0IGR4_INT3_EN_MASK)

#define MSCM_IRCP0IGR4_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP0IGR4_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP0IGR4_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR4_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT4_EN_SHIFT)) & MSCM_IRCP0IGR4_INT4_EN_MASK)

#define MSCM_IRCP0IGR4_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP0IGR4_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP0IGR4_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR4_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT5_EN_SHIFT)) & MSCM_IRCP0IGR4_INT5_EN_MASK)

#define MSCM_IRCP0IGR4_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP0IGR4_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP0IGR4_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR4_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT6_EN_SHIFT)) & MSCM_IRCP0IGR4_INT6_EN_MASK)

#define MSCM_IRCP0IGR4_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP0IGR4_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP0IGR4_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR4_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT7_EN_SHIFT)) & MSCM_IRCP0IGR4_INT7_EN_MASK)

#define MSCM_IRCP0IGR4_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP0IGR4_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP0IGR4_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR4_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT8_EN_SHIFT)) & MSCM_IRCP0IGR4_INT8_EN_MASK)

#define MSCM_IRCP0IGR4_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP0IGR4_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP0IGR4_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR4_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT9_EN_SHIFT)) & MSCM_IRCP0IGR4_INT9_EN_MASK)

#define MSCM_IRCP0IGR4_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP0IGR4_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP0IGR4_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP0IGR4_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT10_EN_SHIFT)) & MSCM_IRCP0IGR4_INT10_EN_MASK)

#define MSCM_IRCP0IGR4_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP0IGR4_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP0IGR4_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP0IGR4_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT11_EN_SHIFT)) & MSCM_IRCP0IGR4_INT11_EN_MASK)

#define MSCM_IRCP0IGR4_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP0IGR4_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP0IGR4_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP0IGR4_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT12_EN_SHIFT)) & MSCM_IRCP0IGR4_INT12_EN_MASK)

#define MSCM_IRCP0IGR4_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP0IGR4_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP0IGR4_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP0IGR4_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT13_EN_SHIFT)) & MSCM_IRCP0IGR4_INT13_EN_MASK)

#define MSCM_IRCP0IGR4_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP0IGR4_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP0IGR4_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP0IGR4_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT14_EN_SHIFT)) & MSCM_IRCP0IGR4_INT14_EN_MASK)

#define MSCM_IRCP0IGR4_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP0IGR4_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP0IGR4_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP0IGR4_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR4_INT15_EN_SHIFT)) & MSCM_IRCP0IGR4_INT15_EN_MASK)
/*! @} */

/*! @name IRCP1ISR4 - Interrupt Router CP1 Interrupt4 Status Register */
/*! @{ */

#define MSCM_IRCP1ISR4_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP1ISR4_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP1ISR4_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP1ISR4_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT0_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT0_MASK)

#define MSCM_IRCP1ISR4_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP1ISR4_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP1ISR4_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP1ISR4_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT1_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT1_MASK)

#define MSCM_IRCP1ISR4_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP1ISR4_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP1ISR4_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP1ISR4_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT2_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT2_MASK)

#define MSCM_IRCP1ISR4_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP1ISR4_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP1ISR4_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP1ISR4_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT3_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT3_MASK)

#define MSCM_IRCP1ISR4_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP1ISR4_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP1ISR4_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP1ISR4_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT4_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT4_MASK)

#define MSCM_IRCP1ISR4_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP1ISR4_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP1ISR4_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP1ISR4_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT5_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT5_MASK)

#define MSCM_IRCP1ISR4_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP1ISR4_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP1ISR4_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP1ISR4_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT6_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT6_MASK)

#define MSCM_IRCP1ISR4_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP1ISR4_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP1ISR4_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP1ISR4_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT7_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT7_MASK)

#define MSCM_IRCP1ISR4_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP1ISR4_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP1ISR4_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP1ISR4_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT8_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT8_MASK)

#define MSCM_IRCP1ISR4_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP1ISR4_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP1ISR4_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP1ISR4_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT9_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT9_MASK)

#define MSCM_IRCP1ISR4_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP1ISR4_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP1ISR4_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP1ISR4_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT10_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT10_MASK)

#define MSCM_IRCP1ISR4_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP1ISR4_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP1ISR4_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP1ISR4_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT11_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT11_MASK)

#define MSCM_IRCP1ISR4_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP1ISR4_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP1ISR4_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP1ISR4_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT12_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT12_MASK)

#define MSCM_IRCP1ISR4_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP1ISR4_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP1ISR4_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP1ISR4_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT13_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT13_MASK)

#define MSCM_IRCP1ISR4_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP1ISR4_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP1ISR4_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP1ISR4_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT14_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT14_MASK)

#define MSCM_IRCP1ISR4_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP1ISR4_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP1ISR4_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP1ISR4_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR4_PCIE_INT15_SHIFT)) & MSCM_IRCP1ISR4_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP1IGR4 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP1IGR4_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP1IGR4_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP1IGR4_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR4_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT0_EN_SHIFT)) & MSCM_IRCP1IGR4_INT0_EN_MASK)

#define MSCM_IRCP1IGR4_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP1IGR4_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP1IGR4_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR4_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT1_EN_SHIFT)) & MSCM_IRCP1IGR4_INT1_EN_MASK)

#define MSCM_IRCP1IGR4_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP1IGR4_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP1IGR4_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR4_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT2_EN_SHIFT)) & MSCM_IRCP1IGR4_INT2_EN_MASK)

#define MSCM_IRCP1IGR4_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP1IGR4_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP1IGR4_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR4_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT3_EN_SHIFT)) & MSCM_IRCP1IGR4_INT3_EN_MASK)

#define MSCM_IRCP1IGR4_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP1IGR4_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP1IGR4_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR4_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT4_EN_SHIFT)) & MSCM_IRCP1IGR4_INT4_EN_MASK)

#define MSCM_IRCP1IGR4_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP1IGR4_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP1IGR4_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR4_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT5_EN_SHIFT)) & MSCM_IRCP1IGR4_INT5_EN_MASK)

#define MSCM_IRCP1IGR4_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP1IGR4_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP1IGR4_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR4_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT6_EN_SHIFT)) & MSCM_IRCP1IGR4_INT6_EN_MASK)

#define MSCM_IRCP1IGR4_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP1IGR4_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP1IGR4_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR4_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT7_EN_SHIFT)) & MSCM_IRCP1IGR4_INT7_EN_MASK)

#define MSCM_IRCP1IGR4_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP1IGR4_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP1IGR4_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR4_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT8_EN_SHIFT)) & MSCM_IRCP1IGR4_INT8_EN_MASK)

#define MSCM_IRCP1IGR4_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP1IGR4_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP1IGR4_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR4_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT9_EN_SHIFT)) & MSCM_IRCP1IGR4_INT9_EN_MASK)

#define MSCM_IRCP1IGR4_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP1IGR4_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP1IGR4_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP1IGR4_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT10_EN_SHIFT)) & MSCM_IRCP1IGR4_INT10_EN_MASK)

#define MSCM_IRCP1IGR4_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP1IGR4_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP1IGR4_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP1IGR4_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT11_EN_SHIFT)) & MSCM_IRCP1IGR4_INT11_EN_MASK)

#define MSCM_IRCP1IGR4_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP1IGR4_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP1IGR4_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP1IGR4_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT12_EN_SHIFT)) & MSCM_IRCP1IGR4_INT12_EN_MASK)

#define MSCM_IRCP1IGR4_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP1IGR4_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP1IGR4_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP1IGR4_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT13_EN_SHIFT)) & MSCM_IRCP1IGR4_INT13_EN_MASK)

#define MSCM_IRCP1IGR4_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP1IGR4_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP1IGR4_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP1IGR4_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT14_EN_SHIFT)) & MSCM_IRCP1IGR4_INT14_EN_MASK)

#define MSCM_IRCP1IGR4_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP1IGR4_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP1IGR4_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP1IGR4_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR4_INT15_EN_SHIFT)) & MSCM_IRCP1IGR4_INT15_EN_MASK)
/*! @} */

/*! @name IRCP2ISR4 - Interrupt Router CP2 Interrupt4 Status Register */
/*! @{ */

#define MSCM_IRCP2ISR4_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP2ISR4_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP2ISR4_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP2ISR4_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT0_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT0_MASK)

#define MSCM_IRCP2ISR4_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP2ISR4_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP2ISR4_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP2ISR4_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT1_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT1_MASK)

#define MSCM_IRCP2ISR4_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP2ISR4_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP2ISR4_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP2ISR4_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT2_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT2_MASK)

#define MSCM_IRCP2ISR4_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP2ISR4_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP2ISR4_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP2ISR4_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT3_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT3_MASK)

#define MSCM_IRCP2ISR4_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP2ISR4_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP2ISR4_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP2ISR4_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT4_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT4_MASK)

#define MSCM_IRCP2ISR4_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP2ISR4_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP2ISR4_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP2ISR4_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT5_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT5_MASK)

#define MSCM_IRCP2ISR4_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP2ISR4_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP2ISR4_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP2ISR4_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT6_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT6_MASK)

#define MSCM_IRCP2ISR4_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP2ISR4_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP2ISR4_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP2ISR4_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT7_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT7_MASK)

#define MSCM_IRCP2ISR4_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP2ISR4_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP2ISR4_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP2ISR4_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT8_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT8_MASK)

#define MSCM_IRCP2ISR4_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP2ISR4_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP2ISR4_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP2ISR4_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT9_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT9_MASK)

#define MSCM_IRCP2ISR4_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP2ISR4_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP2ISR4_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP2ISR4_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT10_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT10_MASK)

#define MSCM_IRCP2ISR4_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP2ISR4_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP2ISR4_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP2ISR4_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT11_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT11_MASK)

#define MSCM_IRCP2ISR4_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP2ISR4_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP2ISR4_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP2ISR4_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT12_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT12_MASK)

#define MSCM_IRCP2ISR4_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP2ISR4_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP2ISR4_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP2ISR4_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT13_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT13_MASK)

#define MSCM_IRCP2ISR4_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP2ISR4_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP2ISR4_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP2ISR4_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT14_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT14_MASK)

#define MSCM_IRCP2ISR4_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP2ISR4_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP2ISR4_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP2ISR4_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR4_PCIE_INT15_SHIFT)) & MSCM_IRCP2ISR4_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP2IGR4 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP2IGR4_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP2IGR4_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP2IGR4_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR4_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT0_EN_SHIFT)) & MSCM_IRCP2IGR4_INT0_EN_MASK)

#define MSCM_IRCP2IGR4_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP2IGR4_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP2IGR4_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR4_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT1_EN_SHIFT)) & MSCM_IRCP2IGR4_INT1_EN_MASK)

#define MSCM_IRCP2IGR4_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP2IGR4_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP2IGR4_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR4_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT2_EN_SHIFT)) & MSCM_IRCP2IGR4_INT2_EN_MASK)

#define MSCM_IRCP2IGR4_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP2IGR4_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP2IGR4_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR4_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT3_EN_SHIFT)) & MSCM_IRCP2IGR4_INT3_EN_MASK)

#define MSCM_IRCP2IGR4_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP2IGR4_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP2IGR4_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR4_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT4_EN_SHIFT)) & MSCM_IRCP2IGR4_INT4_EN_MASK)

#define MSCM_IRCP2IGR4_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP2IGR4_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP2IGR4_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR4_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT5_EN_SHIFT)) & MSCM_IRCP2IGR4_INT5_EN_MASK)

#define MSCM_IRCP2IGR4_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP2IGR4_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP2IGR4_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR4_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT6_EN_SHIFT)) & MSCM_IRCP2IGR4_INT6_EN_MASK)

#define MSCM_IRCP2IGR4_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP2IGR4_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP2IGR4_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR4_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT7_EN_SHIFT)) & MSCM_IRCP2IGR4_INT7_EN_MASK)

#define MSCM_IRCP2IGR4_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP2IGR4_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP2IGR4_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR4_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT8_EN_SHIFT)) & MSCM_IRCP2IGR4_INT8_EN_MASK)

#define MSCM_IRCP2IGR4_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP2IGR4_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP2IGR4_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR4_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT9_EN_SHIFT)) & MSCM_IRCP2IGR4_INT9_EN_MASK)

#define MSCM_IRCP2IGR4_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP2IGR4_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP2IGR4_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP2IGR4_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT10_EN_SHIFT)) & MSCM_IRCP2IGR4_INT10_EN_MASK)

#define MSCM_IRCP2IGR4_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP2IGR4_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP2IGR4_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP2IGR4_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT11_EN_SHIFT)) & MSCM_IRCP2IGR4_INT11_EN_MASK)

#define MSCM_IRCP2IGR4_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP2IGR4_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP2IGR4_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP2IGR4_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT12_EN_SHIFT)) & MSCM_IRCP2IGR4_INT12_EN_MASK)

#define MSCM_IRCP2IGR4_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP2IGR4_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP2IGR4_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP2IGR4_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT13_EN_SHIFT)) & MSCM_IRCP2IGR4_INT13_EN_MASK)

#define MSCM_IRCP2IGR4_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP2IGR4_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP2IGR4_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP2IGR4_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT14_EN_SHIFT)) & MSCM_IRCP2IGR4_INT14_EN_MASK)

#define MSCM_IRCP2IGR4_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP2IGR4_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP2IGR4_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP2IGR4_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR4_INT15_EN_SHIFT)) & MSCM_IRCP2IGR4_INT15_EN_MASK)
/*! @} */

/*! @name IRCP3ISR4 - Interrupt Router CP3 Interrupt4 Status Register */
/*! @{ */

#define MSCM_IRCP3ISR4_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP3ISR4_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP3ISR4_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP3ISR4_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT0_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT0_MASK)

#define MSCM_IRCP3ISR4_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP3ISR4_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP3ISR4_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP3ISR4_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT1_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT1_MASK)

#define MSCM_IRCP3ISR4_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP3ISR4_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP3ISR4_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP3ISR4_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT2_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT2_MASK)

#define MSCM_IRCP3ISR4_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP3ISR4_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP3ISR4_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP3ISR4_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT3_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT3_MASK)

#define MSCM_IRCP3ISR4_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP3ISR4_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP3ISR4_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP3ISR4_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT4_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT4_MASK)

#define MSCM_IRCP3ISR4_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP3ISR4_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP3ISR4_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP3ISR4_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT5_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT5_MASK)

#define MSCM_IRCP3ISR4_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP3ISR4_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP3ISR4_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP3ISR4_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT6_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT6_MASK)

#define MSCM_IRCP3ISR4_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP3ISR4_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP3ISR4_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP3ISR4_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT7_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT7_MASK)

#define MSCM_IRCP3ISR4_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP3ISR4_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP3ISR4_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP3ISR4_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT8_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT8_MASK)

#define MSCM_IRCP3ISR4_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP3ISR4_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP3ISR4_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP3ISR4_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT9_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT9_MASK)

#define MSCM_IRCP3ISR4_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP3ISR4_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP3ISR4_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP3ISR4_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT10_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT10_MASK)

#define MSCM_IRCP3ISR4_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP3ISR4_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP3ISR4_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP3ISR4_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT11_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT11_MASK)

#define MSCM_IRCP3ISR4_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP3ISR4_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP3ISR4_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP3ISR4_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT12_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT12_MASK)

#define MSCM_IRCP3ISR4_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP3ISR4_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP3ISR4_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP3ISR4_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT13_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT13_MASK)

#define MSCM_IRCP3ISR4_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP3ISR4_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP3ISR4_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP3ISR4_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT14_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT14_MASK)

#define MSCM_IRCP3ISR4_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP3ISR4_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP3ISR4_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP3ISR4_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR4_PCIE_INT15_SHIFT)) & MSCM_IRCP3ISR4_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP3IGR4 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP3IGR4_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP3IGR4_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP3IGR4_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR4_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT0_EN_SHIFT)) & MSCM_IRCP3IGR4_INT0_EN_MASK)

#define MSCM_IRCP3IGR4_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP3IGR4_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP3IGR4_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR4_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT1_EN_SHIFT)) & MSCM_IRCP3IGR4_INT1_EN_MASK)

#define MSCM_IRCP3IGR4_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP3IGR4_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP3IGR4_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR4_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT2_EN_SHIFT)) & MSCM_IRCP3IGR4_INT2_EN_MASK)

#define MSCM_IRCP3IGR4_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP3IGR4_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP3IGR4_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR4_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT3_EN_SHIFT)) & MSCM_IRCP3IGR4_INT3_EN_MASK)

#define MSCM_IRCP3IGR4_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP3IGR4_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP3IGR4_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR4_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT4_EN_SHIFT)) & MSCM_IRCP3IGR4_INT4_EN_MASK)

#define MSCM_IRCP3IGR4_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP3IGR4_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP3IGR4_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR4_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT5_EN_SHIFT)) & MSCM_IRCP3IGR4_INT5_EN_MASK)

#define MSCM_IRCP3IGR4_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP3IGR4_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP3IGR4_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR4_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT6_EN_SHIFT)) & MSCM_IRCP3IGR4_INT6_EN_MASK)

#define MSCM_IRCP3IGR4_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP3IGR4_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP3IGR4_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR4_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT7_EN_SHIFT)) & MSCM_IRCP3IGR4_INT7_EN_MASK)

#define MSCM_IRCP3IGR4_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP3IGR4_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP3IGR4_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR4_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT8_EN_SHIFT)) & MSCM_IRCP3IGR4_INT8_EN_MASK)

#define MSCM_IRCP3IGR4_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP3IGR4_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP3IGR4_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR4_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT9_EN_SHIFT)) & MSCM_IRCP3IGR4_INT9_EN_MASK)

#define MSCM_IRCP3IGR4_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP3IGR4_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP3IGR4_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP3IGR4_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT10_EN_SHIFT)) & MSCM_IRCP3IGR4_INT10_EN_MASK)

#define MSCM_IRCP3IGR4_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP3IGR4_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP3IGR4_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP3IGR4_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT11_EN_SHIFT)) & MSCM_IRCP3IGR4_INT11_EN_MASK)

#define MSCM_IRCP3IGR4_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP3IGR4_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP3IGR4_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP3IGR4_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT12_EN_SHIFT)) & MSCM_IRCP3IGR4_INT12_EN_MASK)

#define MSCM_IRCP3IGR4_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP3IGR4_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP3IGR4_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP3IGR4_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT13_EN_SHIFT)) & MSCM_IRCP3IGR4_INT13_EN_MASK)

#define MSCM_IRCP3IGR4_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP3IGR4_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP3IGR4_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP3IGR4_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT14_EN_SHIFT)) & MSCM_IRCP3IGR4_INT14_EN_MASK)

#define MSCM_IRCP3IGR4_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP3IGR4_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP3IGR4_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP3IGR4_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR4_INT15_EN_SHIFT)) & MSCM_IRCP3IGR4_INT15_EN_MASK)
/*! @} */

/*! @name IRCP4ISR4 - Interrupt Router CP4 Interrupt4 Status Register */
/*! @{ */

#define MSCM_IRCP4ISR4_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP4ISR4_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP4ISR4_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP4ISR4_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT0_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT0_MASK)

#define MSCM_IRCP4ISR4_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP4ISR4_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP4ISR4_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP4ISR4_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT1_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT1_MASK)

#define MSCM_IRCP4ISR4_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP4ISR4_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP4ISR4_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP4ISR4_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT2_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT2_MASK)

#define MSCM_IRCP4ISR4_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP4ISR4_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP4ISR4_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP4ISR4_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT3_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT3_MASK)

#define MSCM_IRCP4ISR4_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP4ISR4_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP4ISR4_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP4ISR4_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT4_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT4_MASK)

#define MSCM_IRCP4ISR4_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP4ISR4_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP4ISR4_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP4ISR4_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT5_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT5_MASK)

#define MSCM_IRCP4ISR4_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP4ISR4_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP4ISR4_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP4ISR4_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT6_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT6_MASK)

#define MSCM_IRCP4ISR4_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP4ISR4_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP4ISR4_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP4ISR4_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT7_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT7_MASK)

#define MSCM_IRCP4ISR4_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP4ISR4_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP4ISR4_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP4ISR4_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT8_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT8_MASK)

#define MSCM_IRCP4ISR4_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP4ISR4_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP4ISR4_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP4ISR4_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT9_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT9_MASK)

#define MSCM_IRCP4ISR4_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP4ISR4_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP4ISR4_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP4ISR4_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT10_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT10_MASK)

#define MSCM_IRCP4ISR4_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP4ISR4_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP4ISR4_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP4ISR4_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT11_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT11_MASK)

#define MSCM_IRCP4ISR4_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP4ISR4_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP4ISR4_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP4ISR4_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT12_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT12_MASK)

#define MSCM_IRCP4ISR4_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP4ISR4_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP4ISR4_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP4ISR4_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT13_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT13_MASK)

#define MSCM_IRCP4ISR4_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP4ISR4_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP4ISR4_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP4ISR4_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT14_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT14_MASK)

#define MSCM_IRCP4ISR4_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP4ISR4_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP4ISR4_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP4ISR4_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR4_PCIE_INT15_SHIFT)) & MSCM_IRCP4ISR4_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP4IGR4 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP4IGR4_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP4IGR4_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP4IGR4_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR4_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT0_EN_SHIFT)) & MSCM_IRCP4IGR4_INT0_EN_MASK)

#define MSCM_IRCP4IGR4_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP4IGR4_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP4IGR4_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR4_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT1_EN_SHIFT)) & MSCM_IRCP4IGR4_INT1_EN_MASK)

#define MSCM_IRCP4IGR4_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP4IGR4_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP4IGR4_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR4_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT2_EN_SHIFT)) & MSCM_IRCP4IGR4_INT2_EN_MASK)

#define MSCM_IRCP4IGR4_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP4IGR4_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP4IGR4_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR4_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT3_EN_SHIFT)) & MSCM_IRCP4IGR4_INT3_EN_MASK)

#define MSCM_IRCP4IGR4_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP4IGR4_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP4IGR4_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR4_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT4_EN_SHIFT)) & MSCM_IRCP4IGR4_INT4_EN_MASK)

#define MSCM_IRCP4IGR4_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP4IGR4_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP4IGR4_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR4_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT5_EN_SHIFT)) & MSCM_IRCP4IGR4_INT5_EN_MASK)

#define MSCM_IRCP4IGR4_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP4IGR4_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP4IGR4_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR4_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT6_EN_SHIFT)) & MSCM_IRCP4IGR4_INT6_EN_MASK)

#define MSCM_IRCP4IGR4_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP4IGR4_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP4IGR4_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR4_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT7_EN_SHIFT)) & MSCM_IRCP4IGR4_INT7_EN_MASK)

#define MSCM_IRCP4IGR4_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP4IGR4_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP4IGR4_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR4_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT8_EN_SHIFT)) & MSCM_IRCP4IGR4_INT8_EN_MASK)

#define MSCM_IRCP4IGR4_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP4IGR4_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP4IGR4_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR4_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT9_EN_SHIFT)) & MSCM_IRCP4IGR4_INT9_EN_MASK)

#define MSCM_IRCP4IGR4_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP4IGR4_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP4IGR4_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP4IGR4_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT10_EN_SHIFT)) & MSCM_IRCP4IGR4_INT10_EN_MASK)

#define MSCM_IRCP4IGR4_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP4IGR4_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP4IGR4_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP4IGR4_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT11_EN_SHIFT)) & MSCM_IRCP4IGR4_INT11_EN_MASK)

#define MSCM_IRCP4IGR4_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP4IGR4_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP4IGR4_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP4IGR4_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT12_EN_SHIFT)) & MSCM_IRCP4IGR4_INT12_EN_MASK)

#define MSCM_IRCP4IGR4_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP4IGR4_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP4IGR4_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP4IGR4_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT13_EN_SHIFT)) & MSCM_IRCP4IGR4_INT13_EN_MASK)

#define MSCM_IRCP4IGR4_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP4IGR4_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP4IGR4_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP4IGR4_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT14_EN_SHIFT)) & MSCM_IRCP4IGR4_INT14_EN_MASK)

#define MSCM_IRCP4IGR4_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP4IGR4_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP4IGR4_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP4IGR4_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR4_INT15_EN_SHIFT)) & MSCM_IRCP4IGR4_INT15_EN_MASK)
/*! @} */

/*! @name IRCP5ISR4 - Interrupt Router CP5 Interrupt4 Status Register */
/*! @{ */

#define MSCM_IRCP5ISR4_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP5ISR4_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP5ISR4_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP5ISR4_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT0_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT0_MASK)

#define MSCM_IRCP5ISR4_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP5ISR4_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP5ISR4_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP5ISR4_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT1_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT1_MASK)

#define MSCM_IRCP5ISR4_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP5ISR4_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP5ISR4_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP5ISR4_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT2_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT2_MASK)

#define MSCM_IRCP5ISR4_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP5ISR4_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP5ISR4_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP5ISR4_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT3_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT3_MASK)

#define MSCM_IRCP5ISR4_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP5ISR4_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP5ISR4_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP5ISR4_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT4_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT4_MASK)

#define MSCM_IRCP5ISR4_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP5ISR4_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP5ISR4_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP5ISR4_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT5_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT5_MASK)

#define MSCM_IRCP5ISR4_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP5ISR4_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP5ISR4_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP5ISR4_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT6_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT6_MASK)

#define MSCM_IRCP5ISR4_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP5ISR4_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP5ISR4_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP5ISR4_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT7_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT7_MASK)

#define MSCM_IRCP5ISR4_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP5ISR4_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP5ISR4_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP5ISR4_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT8_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT8_MASK)

#define MSCM_IRCP5ISR4_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP5ISR4_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP5ISR4_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP5ISR4_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT9_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT9_MASK)

#define MSCM_IRCP5ISR4_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP5ISR4_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP5ISR4_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP5ISR4_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT10_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT10_MASK)

#define MSCM_IRCP5ISR4_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP5ISR4_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP5ISR4_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP5ISR4_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT11_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT11_MASK)

#define MSCM_IRCP5ISR4_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP5ISR4_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP5ISR4_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP5ISR4_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT12_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT12_MASK)

#define MSCM_IRCP5ISR4_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP5ISR4_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP5ISR4_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP5ISR4_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT13_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT13_MASK)

#define MSCM_IRCP5ISR4_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP5ISR4_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP5ISR4_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP5ISR4_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT14_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT14_MASK)

#define MSCM_IRCP5ISR4_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP5ISR4_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP5ISR4_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP5ISR4_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR4_PCIE_INT15_SHIFT)) & MSCM_IRCP5ISR4_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP5IGR4 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP5IGR4_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP5IGR4_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP5IGR4_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR4_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT0_EN_SHIFT)) & MSCM_IRCP5IGR4_INT0_EN_MASK)

#define MSCM_IRCP5IGR4_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP5IGR4_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP5IGR4_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR4_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT1_EN_SHIFT)) & MSCM_IRCP5IGR4_INT1_EN_MASK)

#define MSCM_IRCP5IGR4_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP5IGR4_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP5IGR4_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR4_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT2_EN_SHIFT)) & MSCM_IRCP5IGR4_INT2_EN_MASK)

#define MSCM_IRCP5IGR4_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP5IGR4_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP5IGR4_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR4_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT3_EN_SHIFT)) & MSCM_IRCP5IGR4_INT3_EN_MASK)

#define MSCM_IRCP5IGR4_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP5IGR4_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP5IGR4_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR4_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT4_EN_SHIFT)) & MSCM_IRCP5IGR4_INT4_EN_MASK)

#define MSCM_IRCP5IGR4_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP5IGR4_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP5IGR4_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR4_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT5_EN_SHIFT)) & MSCM_IRCP5IGR4_INT5_EN_MASK)

#define MSCM_IRCP5IGR4_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP5IGR4_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP5IGR4_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR4_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT6_EN_SHIFT)) & MSCM_IRCP5IGR4_INT6_EN_MASK)

#define MSCM_IRCP5IGR4_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP5IGR4_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP5IGR4_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR4_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT7_EN_SHIFT)) & MSCM_IRCP5IGR4_INT7_EN_MASK)

#define MSCM_IRCP5IGR4_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP5IGR4_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP5IGR4_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR4_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT8_EN_SHIFT)) & MSCM_IRCP5IGR4_INT8_EN_MASK)

#define MSCM_IRCP5IGR4_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP5IGR4_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP5IGR4_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR4_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT9_EN_SHIFT)) & MSCM_IRCP5IGR4_INT9_EN_MASK)

#define MSCM_IRCP5IGR4_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP5IGR4_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP5IGR4_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP5IGR4_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT10_EN_SHIFT)) & MSCM_IRCP5IGR4_INT10_EN_MASK)

#define MSCM_IRCP5IGR4_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP5IGR4_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP5IGR4_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP5IGR4_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT11_EN_SHIFT)) & MSCM_IRCP5IGR4_INT11_EN_MASK)

#define MSCM_IRCP5IGR4_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP5IGR4_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP5IGR4_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP5IGR4_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT12_EN_SHIFT)) & MSCM_IRCP5IGR4_INT12_EN_MASK)

#define MSCM_IRCP5IGR4_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP5IGR4_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP5IGR4_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP5IGR4_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT13_EN_SHIFT)) & MSCM_IRCP5IGR4_INT13_EN_MASK)

#define MSCM_IRCP5IGR4_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP5IGR4_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP5IGR4_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP5IGR4_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT14_EN_SHIFT)) & MSCM_IRCP5IGR4_INT14_EN_MASK)

#define MSCM_IRCP5IGR4_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP5IGR4_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP5IGR4_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP5IGR4_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR4_INT15_EN_SHIFT)) & MSCM_IRCP5IGR4_INT15_EN_MASK)
/*! @} */

/*! @name IRCP6ISR4 - Interrupt Router CP6 Interrupt4 Status Register */
/*! @{ */

#define MSCM_IRCP6ISR4_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP6ISR4_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP6ISR4_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP6ISR4_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT0_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT0_MASK)

#define MSCM_IRCP6ISR4_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP6ISR4_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP6ISR4_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP6ISR4_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT1_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT1_MASK)

#define MSCM_IRCP6ISR4_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP6ISR4_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP6ISR4_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP6ISR4_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT2_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT2_MASK)

#define MSCM_IRCP6ISR4_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP6ISR4_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP6ISR4_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP6ISR4_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT3_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT3_MASK)

#define MSCM_IRCP6ISR4_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP6ISR4_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP6ISR4_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP6ISR4_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT4_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT4_MASK)

#define MSCM_IRCP6ISR4_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP6ISR4_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP6ISR4_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP6ISR4_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT5_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT5_MASK)

#define MSCM_IRCP6ISR4_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP6ISR4_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP6ISR4_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP6ISR4_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT6_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT6_MASK)

#define MSCM_IRCP6ISR4_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP6ISR4_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP6ISR4_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP6ISR4_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT7_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT7_MASK)

#define MSCM_IRCP6ISR4_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP6ISR4_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP6ISR4_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP6ISR4_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT8_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT8_MASK)

#define MSCM_IRCP6ISR4_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP6ISR4_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP6ISR4_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP6ISR4_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT9_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT9_MASK)

#define MSCM_IRCP6ISR4_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP6ISR4_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP6ISR4_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP6ISR4_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT10_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT10_MASK)

#define MSCM_IRCP6ISR4_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP6ISR4_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP6ISR4_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP6ISR4_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT11_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT11_MASK)

#define MSCM_IRCP6ISR4_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP6ISR4_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP6ISR4_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP6ISR4_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT12_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT12_MASK)

#define MSCM_IRCP6ISR4_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP6ISR4_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP6ISR4_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP6ISR4_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT13_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT13_MASK)

#define MSCM_IRCP6ISR4_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP6ISR4_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP6ISR4_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP6ISR4_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT14_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT14_MASK)

#define MSCM_IRCP6ISR4_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP6ISR4_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP6ISR4_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP6ISR4_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR4_PCIE_INT15_SHIFT)) & MSCM_IRCP6ISR4_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP6IGR4 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP6IGR4_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP6IGR4_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP6IGR4_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR4_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT0_EN_SHIFT)) & MSCM_IRCP6IGR4_INT0_EN_MASK)

#define MSCM_IRCP6IGR4_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP6IGR4_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP6IGR4_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR4_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT1_EN_SHIFT)) & MSCM_IRCP6IGR4_INT1_EN_MASK)

#define MSCM_IRCP6IGR4_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP6IGR4_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP6IGR4_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR4_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT2_EN_SHIFT)) & MSCM_IRCP6IGR4_INT2_EN_MASK)

#define MSCM_IRCP6IGR4_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP6IGR4_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP6IGR4_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR4_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT3_EN_SHIFT)) & MSCM_IRCP6IGR4_INT3_EN_MASK)

#define MSCM_IRCP6IGR4_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP6IGR4_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP6IGR4_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR4_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT4_EN_SHIFT)) & MSCM_IRCP6IGR4_INT4_EN_MASK)

#define MSCM_IRCP6IGR4_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP6IGR4_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP6IGR4_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR4_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT5_EN_SHIFT)) & MSCM_IRCP6IGR4_INT5_EN_MASK)

#define MSCM_IRCP6IGR4_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP6IGR4_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP6IGR4_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR4_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT6_EN_SHIFT)) & MSCM_IRCP6IGR4_INT6_EN_MASK)

#define MSCM_IRCP6IGR4_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP6IGR4_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP6IGR4_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR4_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT7_EN_SHIFT)) & MSCM_IRCP6IGR4_INT7_EN_MASK)

#define MSCM_IRCP6IGR4_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP6IGR4_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP6IGR4_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR4_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT8_EN_SHIFT)) & MSCM_IRCP6IGR4_INT8_EN_MASK)

#define MSCM_IRCP6IGR4_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP6IGR4_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP6IGR4_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR4_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT9_EN_SHIFT)) & MSCM_IRCP6IGR4_INT9_EN_MASK)

#define MSCM_IRCP6IGR4_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP6IGR4_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP6IGR4_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP6IGR4_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT10_EN_SHIFT)) & MSCM_IRCP6IGR4_INT10_EN_MASK)

#define MSCM_IRCP6IGR4_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP6IGR4_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP6IGR4_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP6IGR4_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT11_EN_SHIFT)) & MSCM_IRCP6IGR4_INT11_EN_MASK)

#define MSCM_IRCP6IGR4_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP6IGR4_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP6IGR4_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP6IGR4_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT12_EN_SHIFT)) & MSCM_IRCP6IGR4_INT12_EN_MASK)

#define MSCM_IRCP6IGR4_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP6IGR4_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP6IGR4_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP6IGR4_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT13_EN_SHIFT)) & MSCM_IRCP6IGR4_INT13_EN_MASK)

#define MSCM_IRCP6IGR4_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP6IGR4_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP6IGR4_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP6IGR4_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT14_EN_SHIFT)) & MSCM_IRCP6IGR4_INT14_EN_MASK)

#define MSCM_IRCP6IGR4_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP6IGR4_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP6IGR4_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP6IGR4_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR4_INT15_EN_SHIFT)) & MSCM_IRCP6IGR4_INT15_EN_MASK)
/*! @} */

/*! @name IRCPCFG - Interrupt Router Configuration Register */
/*! @{ */

#define MSCM_IRCPCFG_CP0_TR_MASK                 (0x1U)
#define MSCM_IRCPCFG_CP0_TR_SHIFT                (0U)
#define MSCM_IRCPCFG_CP0_TR_WIDTH                (1U)
#define MSCM_IRCPCFG_CP0_TR(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_IRCPCFG_CP0_TR_SHIFT)) & MSCM_IRCPCFG_CP0_TR_MASK)

#define MSCM_IRCPCFG_CP1_TR_MASK                 (0x2U)
#define MSCM_IRCPCFG_CP1_TR_SHIFT                (1U)
#define MSCM_IRCPCFG_CP1_TR_WIDTH                (1U)
#define MSCM_IRCPCFG_CP1_TR(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_IRCPCFG_CP1_TR_SHIFT)) & MSCM_IRCPCFG_CP1_TR_MASK)

#define MSCM_IRCPCFG_CP2_TR_MASK                 (0x4U)
#define MSCM_IRCPCFG_CP2_TR_SHIFT                (2U)
#define MSCM_IRCPCFG_CP2_TR_WIDTH                (1U)
#define MSCM_IRCPCFG_CP2_TR(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_IRCPCFG_CP2_TR_SHIFT)) & MSCM_IRCPCFG_CP2_TR_MASK)

#define MSCM_IRCPCFG_CP3_TR_MASK                 (0x8U)
#define MSCM_IRCPCFG_CP3_TR_SHIFT                (3U)
#define MSCM_IRCPCFG_CP3_TR_WIDTH                (1U)
#define MSCM_IRCPCFG_CP3_TR(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_IRCPCFG_CP3_TR_SHIFT)) & MSCM_IRCPCFG_CP3_TR_MASK)

#define MSCM_IRCPCFG_CP4_TR_MASK                 (0x10U)
#define MSCM_IRCPCFG_CP4_TR_SHIFT                (4U)
#define MSCM_IRCPCFG_CP4_TR_WIDTH                (1U)
#define MSCM_IRCPCFG_CP4_TR(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_IRCPCFG_CP4_TR_SHIFT)) & MSCM_IRCPCFG_CP4_TR_MASK)

#define MSCM_IRCPCFG_CP5_TR_MASK                 (0x20U)
#define MSCM_IRCPCFG_CP5_TR_SHIFT                (5U)
#define MSCM_IRCPCFG_CP5_TR_WIDTH                (1U)
#define MSCM_IRCPCFG_CP5_TR(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_IRCPCFG_CP5_TR_SHIFT)) & MSCM_IRCPCFG_CP5_TR_MASK)

#define MSCM_IRCPCFG_CP6_TR_MASK                 (0x40U)
#define MSCM_IRCPCFG_CP6_TR_SHIFT                (6U)
#define MSCM_IRCPCFG_CP6_TR_WIDTH                (1U)
#define MSCM_IRCPCFG_CP6_TR(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_IRCPCFG_CP6_TR_SHIFT)) & MSCM_IRCPCFG_CP6_TR_MASK)

#define MSCM_IRCPCFG_LOCK_MASK                   (0x80000000U)
#define MSCM_IRCPCFG_LOCK_SHIFT                  (31U)
#define MSCM_IRCPCFG_LOCK_WIDTH                  (1U)
#define MSCM_IRCPCFG_LOCK(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_IRCPCFG_LOCK_SHIFT)) & MSCM_IRCPCFG_LOCK_MASK)
/*! @} */

/*! @name IRNMIC - Interrupt Router Non-Maskable Interrupt Control Register */
/*! @{ */

#define MSCM_IRNMIC_CP0_NMI_EN_MASK              (0x1U)
#define MSCM_IRNMIC_CP0_NMI_EN_SHIFT             (0U)
#define MSCM_IRNMIC_CP0_NMI_EN_WIDTH             (1U)
#define MSCM_IRNMIC_CP0_NMI_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRNMIC_CP0_NMI_EN_SHIFT)) & MSCM_IRNMIC_CP0_NMI_EN_MASK)

#define MSCM_IRNMIC_CP1_NMI_EN_MASK              (0x2U)
#define MSCM_IRNMIC_CP1_NMI_EN_SHIFT             (1U)
#define MSCM_IRNMIC_CP1_NMI_EN_WIDTH             (1U)
#define MSCM_IRNMIC_CP1_NMI_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRNMIC_CP1_NMI_EN_SHIFT)) & MSCM_IRNMIC_CP1_NMI_EN_MASK)

#define MSCM_IRNMIC_CP2_NMI_EN_MASK              (0x4U)
#define MSCM_IRNMIC_CP2_NMI_EN_SHIFT             (2U)
#define MSCM_IRNMIC_CP2_NMI_EN_WIDTH             (1U)
#define MSCM_IRNMIC_CP2_NMI_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRNMIC_CP2_NMI_EN_SHIFT)) & MSCM_IRNMIC_CP2_NMI_EN_MASK)

#define MSCM_IRNMIC_CP3_NMI_EN_MASK              (0x8U)
#define MSCM_IRNMIC_CP3_NMI_EN_SHIFT             (3U)
#define MSCM_IRNMIC_CP3_NMI_EN_WIDTH             (1U)
#define MSCM_IRNMIC_CP3_NMI_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRNMIC_CP3_NMI_EN_SHIFT)) & MSCM_IRNMIC_CP3_NMI_EN_MASK)

#define MSCM_IRNMIC_CP4_NMI_EN_MASK              (0x10U)
#define MSCM_IRNMIC_CP4_NMI_EN_SHIFT             (4U)
#define MSCM_IRNMIC_CP4_NMI_EN_WIDTH             (1U)
#define MSCM_IRNMIC_CP4_NMI_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRNMIC_CP4_NMI_EN_SHIFT)) & MSCM_IRNMIC_CP4_NMI_EN_MASK)

#define MSCM_IRNMIC_CP5_NMI_EN_MASK              (0x20U)
#define MSCM_IRNMIC_CP5_NMI_EN_SHIFT             (5U)
#define MSCM_IRNMIC_CP5_NMI_EN_WIDTH             (1U)
#define MSCM_IRNMIC_CP5_NMI_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRNMIC_CP5_NMI_EN_SHIFT)) & MSCM_IRNMIC_CP5_NMI_EN_MASK)

#define MSCM_IRNMIC_CP6_NMI_EN_MASK              (0x40U)
#define MSCM_IRNMIC_CP6_NMI_EN_SHIFT             (6U)
#define MSCM_IRNMIC_CP6_NMI_EN_WIDTH             (1U)
#define MSCM_IRNMIC_CP6_NMI_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRNMIC_CP6_NMI_EN_SHIFT)) & MSCM_IRNMIC_CP6_NMI_EN_MASK)
/*! @} */

/*! @name IRSPRC - Interrupt Router Shared Peripheral Routing Control Register */
/*! @{ */

#define MSCM_IRSPRC_GIC500_MASK                  (0x1U)
#define MSCM_IRSPRC_GIC500_SHIFT                 (0U)
#define MSCM_IRSPRC_GIC500_WIDTH                 (1U)
#define MSCM_IRSPRC_GIC500(x)                    (((uint16_t)(((uint16_t)(x)) << MSCM_IRSPRC_GIC500_SHIFT)) & MSCM_IRSPRC_GIC500_MASK)

#define MSCM_IRSPRC_M7_0_MASK                    (0x2U)
#define MSCM_IRSPRC_M7_0_SHIFT                   (1U)
#define MSCM_IRSPRC_M7_0_WIDTH                   (1U)
#define MSCM_IRSPRC_M7_0(x)                      (((uint16_t)(((uint16_t)(x)) << MSCM_IRSPRC_M7_0_SHIFT)) & MSCM_IRSPRC_M7_0_MASK)

#define MSCM_IRSPRC_M7_1_MASK                    (0x4U)
#define MSCM_IRSPRC_M7_1_SHIFT                   (2U)
#define MSCM_IRSPRC_M7_1_WIDTH                   (1U)
#define MSCM_IRSPRC_M7_1(x)                      (((uint16_t)(((uint16_t)(x)) << MSCM_IRSPRC_M7_1_SHIFT)) & MSCM_IRSPRC_M7_1_MASK)

#define MSCM_IRSPRC_M7_2_MASK                    (0x8U)
#define MSCM_IRSPRC_M7_2_SHIFT                   (3U)
#define MSCM_IRSPRC_M7_2_WIDTH                   (1U)
#define MSCM_IRSPRC_M7_2(x)                      (((uint16_t)(((uint16_t)(x)) << MSCM_IRSPRC_M7_2_SHIFT)) & MSCM_IRSPRC_M7_2_MASK)

#define MSCM_IRSPRC_LOCK_MASK                    (0x8000U)
#define MSCM_IRSPRC_LOCK_SHIFT                   (15U)
#define MSCM_IRSPRC_LOCK_WIDTH                   (1U)
#define MSCM_IRSPRC_LOCK(x)                      (((uint16_t)(((uint16_t)(x)) << MSCM_IRSPRC_LOCK_SHIFT)) & MSCM_IRSPRC_LOCK_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group MSCM_Register_Masks */

/*!
 * @}
 */ /* end of group MSCM_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G274A_MSCM_H_) */
