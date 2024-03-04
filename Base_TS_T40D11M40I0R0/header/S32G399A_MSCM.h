/*
** ###################################################################
**     Processor:           S32G399A_M7
**     Compiler:            Keil ARM C/C++ Compiler
**     Reference manual:    S32G3xx RM Rev.2 Draft C
**     Version:             rev. 2.7, 2022-07-21
**     Build:               b220721
**
**     Abstract:
**         Peripheral Access Layer for S32G399A_M7
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
 * @file S32G399A_MSCM.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_MSCM
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
#if !defined(S32G399A_MSCM_H_)  /* Check if memory map has not been already included */
#define S32G399A_MSCM_H_

#include "S32G399A_COMMON.h"

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
  uint8_t RESERVED_7[4];
  __I  uint32_t CP7TYPE;                           /**< Processor Type Register, offset: 0x100 */
  __I  uint32_t CP7NUM;                            /**< Processor Number Register, offset: 0x104 */
  __I  uint32_t CP7REV;                            /**< Processor Count Register, offset: 0x108 */
  __I  uint32_t CP7CFG0;                           /**< Processor Configuration 0 Register, offset: 0x10C */
  __I  uint32_t CP7CFG1;                           /**< Processor Configuration 1 Register, offset: 0x110 */
  __I  uint32_t CP7CFG2;                           /**< Processor Configuration 2 Register, offset: 0x114 */
  __I  uint32_t CP7CFG3;                           /**< Processor Configuration 3 Register, offset: 0x118 */
  uint8_t RESERVED_8[4];
  __I  uint32_t CP8TYPE;                           /**< Processor Type Register, offset: 0x120 */
  __I  uint32_t CP8NUM;                            /**< Processor Number Register, offset: 0x124 */
  __I  uint32_t CP8REV;                            /**< Processor Count Register, offset: 0x128 */
  __I  uint32_t CP8CFG0;                           /**< Processor Configuration 0 Register, offset: 0x12C */
  __I  uint32_t CP8CFG1;                           /**< Processor Configuration 1 Register, offset: 0x130 */
  __I  uint32_t CP8CFG2;                           /**< Processor Configuration 2 Register, offset: 0x134 */
  __I  uint32_t CP8CFG3;                           /**< Processor Configuration 3 Register, offset: 0x138 */
  uint8_t RESERVED_9[4];
  __I  uint32_t CP9TYPE;                           /**< Processor Type Register, offset: 0x140 */
  __I  uint32_t CP9NUM;                            /**< Processor Number Register, offset: 0x144 */
  __I  uint32_t CP9REV;                            /**< Processor Count Register, offset: 0x148 */
  __I  uint32_t CP9CFG0;                           /**< Processor Configuration 0 Register, offset: 0x14C */
  __I  uint32_t CP9CFG1;                           /**< Processor Configuration 1 Register, offset: 0x150 */
  __I  uint32_t CP9CFG2;                           /**< Processor Configuration 2 Register, offset: 0x154 */
  __I  uint32_t CP9CFG3;                           /**< Processor Configuration 3 Register, offset: 0x158 */
  uint8_t RESERVED_10[4];
  __I  uint32_t CP10TYPE;                          /**< Processor Type Register, offset: 0x160 */
  __I  uint32_t CP10NUM;                           /**< Processor Number Register, offset: 0x164 */
  __I  uint32_t CP10REV;                           /**< Processor Count Register, offset: 0x168 */
  __I  uint32_t CP10CFG0;                          /**< Processor Configuration 0 Register, offset: 0x16C */
  __I  uint32_t CP10CFG1;                          /**< Processor Configuration 1 Register, offset: 0x170 */
  __I  uint32_t CP10CFG2;                          /**< Processor Configuration 2 Register, offset: 0x174 */
  __I  uint32_t CP10CFG3;                          /**< Processor Configuration 3 Register, offset: 0x178 */
  uint8_t RESERVED_11[4];
  __I  uint32_t CP11TYPE;                          /**< Processor Type Register, offset: 0x180 */
  __I  uint32_t CP11NUM;                           /**< Processor Number Register, offset: 0x184 */
  __I  uint32_t CP11REV;                           /**< Processor Count Register, offset: 0x188 */
  __I  uint32_t CP11CFG0;                          /**< Processor Configuration 0 Register, offset: 0x18C */
  __I  uint32_t CP11CFG1;                          /**< Processor Configuration 1 Register, offset: 0x190 */
  __I  uint32_t CP11CFG2;                          /**< Processor Configuration 2 Register, offset: 0x194 */
  __I  uint32_t CP11CFG3;                          /**< Processor Configuration 3 Register, offset: 0x198 */
  uint8_t RESERVED_12[612];
  __IO uint32_t IRCPCFG;                           /**< Interrupt Router Configuration Register, offset: 0x400 */
  uint8_t RESERVED_13[1020];
  __IO uint32_t IRNMIC;                            /**< Interrupt Router Non-Maskable Interrupt Control Register, offset: 0x800 */
  uint8_t RESERVED_14[124];
  __IO uint16_t IRSPRC[MSCM_IRSPRC_COUNT];         /**< Interrupt Router Shared Peripheral Routing Control Register, array offset: 0x880, array step: 0x2 */
  __IO uint32_t IRCP0ISR0;                         /**< Interrupt Router CP0 Interrupt0 Status Register, offset: 0xA60 */
  __O  uint32_t IRCP0IGR0;                         /**< Interrupt Router CP0 Interrupt0 Generation Register, offset: 0xA64 */
  __IO uint32_t IRCP0ISR1;                         /**< Interrupt Router CP0 Interrupt1 Status Register, offset: 0xA68 */
  __O  uint32_t IRCP0IGR1;                         /**< Interrupt Router CP0 Interrupt1 Generation Register, offset: 0xA6C */
  __IO uint32_t IRCP0ISR2;                         /**< Interrupt Router CP0 Interrupt2 Status Register, offset: 0xA70 */
  __O  uint32_t IRCP0IGR2;                         /**< Interrupt Router CP0 Interrupt2 Generation Register, offset: 0xA74 */
  __IO uint32_t IRCP0ISR3;                         /**< Interrupt Router CP0 Interrupt3 Status Register, offset: 0xA78 */
  __O  uint32_t IRCP0IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xA7C */
  __IO uint32_t IRCP0ISR4;                         /**< Interrupt Router CP0 Interrupt4 Status Register, offset: 0xA80 */
  __O  uint32_t IRCP0IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xA84 */
  __IO uint32_t IRCP0ISR5;                         /**< Interrupt Router CP0 Interrupt5 Status Register, offset: 0xA88 */
  __O  uint32_t IRCP0IGR5;                         /**< Interrupt Router CP0 Interrupt5 Generation Register, offset: 0xA8C */
  __IO uint32_t IRCP0ISR6;                         /**< Interrupt Router CP0 Interrupt6 Status Register, offset: 0xA90 */
  __O  uint32_t IRCP0IGR6;                         /**< Interrupt Router CP0 Interrupt6 Generation Register, offset: 0xA94 */
  __IO uint32_t IRCP0ISR7;                         /**< Interrupt Router CP0 Interrupt7 Status Register, offset: 0xA98 */
  __O  uint32_t IRCP0IGR7;                         /**< Interrupt Router CP0 Interrupt7 Generation Register, offset: 0xA9C */
  __IO uint32_t IRCP0ISR8;                         /**< Interrupt Router CP0 Interrupt8 Status Register, offset: 0xAA0 */
  __O  uint32_t IRCP0IGR8;                         /**< Interrupt Router CP0 Interrupt8 Generation Register, offset: 0xAA4 */
  __IO uint32_t IRCP0ISR9;                         /**< Interrupt Router CP0 Interrupt9 Status Register, offset: 0xAA8 */
  __O  uint32_t IRCP0IGR9;                         /**< Interrupt Router CP0 Interrupt9 Generation Register, offset: 0xAAC */
  __IO uint32_t IRCP0ISR10;                        /**< Interrupt Router CP0 Interrupt10 Status Register, offset: 0xAB0 */
  __O  uint32_t IRCP0IGR10;                        /**< Interrupt Router CP0 Interrupt10 Generation Register, offset: 0xAB4 */
  __IO uint32_t IRCP0ISR11;                        /**< Interrupt Router CP0 Interrupt11 Status Register, offset: 0xAB8 */
  __O  uint32_t IRCP0IGR11;                        /**< Interrupt Router CP0 Interrupt11 Generation Register, offset: 0xABC */
  __IO uint32_t IRCP0ISR12;                        /**< Interrupt Router CP0 Interrupt12 Status Register, offset: 0xAC0 */
  __O  uint32_t IRCP0IGR12;                        /**< Interrupt Router CP0 Interrupt12 Generation Register, offset: 0xAC4 */
  __IO uint32_t IRCP0ISR13;                        /**< Interrupt Router CP0 Interrupt13 Status Register, offset: 0xAC8 */
  __O  uint32_t IRCP0IGR13;                        /**< Interrupt Router CP0 Interrupt13 Generation Register, offset: 0xACC */
  __IO uint32_t IRCP1ISR0;                         /**< Interrupt Router CP1 Interrupt0 Status Register, offset: 0xAD0 */
  __O  uint32_t IRCP1IGR0;                         /**< Interrupt Router CP1 Interrupt0 Generation Register, offset: 0xAD4 */
  __IO uint32_t IRCP1ISR1;                         /**< Interrupt Router CP1 Interrupt1 Status Register, offset: 0xAD8 */
  __O  uint32_t IRCP1IGR1;                         /**< Interrupt Router CP1 Interrupt1 Generation Register, offset: 0xADC */
  __IO uint32_t IRCP1ISR2;                         /**< Interrupt Router CP1 Interrupt2 Status Register, offset: 0xAE0 */
  __O  uint32_t IRCP1IGR2;                         /**< Interrupt Router CP1 Interrupt2 Generation Register, offset: 0xAE4 */
  __IO uint32_t IRCP1ISR3;                         /**< Interrupt Router CP1 Interrupt3 Status Register, offset: 0xAE8 */
  __O  uint32_t IRCP1IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xAEC */
  __IO uint32_t IRCP1ISR4;                         /**< Interrupt Router CP1 Interrupt4 Status Register, offset: 0xAF0 */
  __O  uint32_t IRCP1IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xAF4 */
  __IO uint32_t IRCP1ISR5;                         /**< Interrupt Router CP1 Interrupt5 Status Register, offset: 0xAF8 */
  __O  uint32_t IRCP1IGR5;                         /**< Interrupt Router CP1 Interrupt5 Generation Register, offset: 0xAFC */
  __IO uint32_t IRCP1ISR6;                         /**< Interrupt Router CP1 Interrupt6 Status Register, offset: 0xB00 */
  __O  uint32_t IRCP1IGR6;                         /**< Interrupt Router CP1 Interrupt6 Generation Register, offset: 0xB04 */
  __IO uint32_t IRCP1ISR7;                         /**< Interrupt Router CP1 Interrupt7 Status Register, offset: 0xB08 */
  __O  uint32_t IRCP1IGR7;                         /**< Interrupt Router CP1 Interrupt7 Generation Register, offset: 0xB0C */
  __IO uint32_t IRCP1ISR8;                         /**< Interrupt Router CP1 Interrupt8 Status Register, offset: 0xB10 */
  __O  uint32_t IRCP1IGR8;                         /**< Interrupt Router CP1 Interrupt8 Generation Register, offset: 0xB14 */
  __IO uint32_t IRCP1ISR9;                         /**< Interrupt Router CP1 Interrupt9 Status Register, offset: 0xB18 */
  __O  uint32_t IRCP1IGR9;                         /**< Interrupt Router CP1 Interrupt9 Generation Register, offset: 0xB1C */
  __IO uint32_t IRCP1ISR10;                        /**< Interrupt Router CP1 Interrupt10 Status Register, offset: 0xB20 */
  __O  uint32_t IRCP1IGR10;                        /**< Interrupt Router CP1 Interrupt10 Generation Register, offset: 0xB24 */
  __IO uint32_t IRCP1ISR11;                        /**< Interrupt Router CP1 Interrupt11 Status Register, offset: 0xB28 */
  __O  uint32_t IRCP1IGR11;                        /**< Interrupt Router CP1 Interrupt11 Generation Register, offset: 0xB2C */
  __IO uint32_t IRCP1ISR12;                        /**< Interrupt Router CP1 Interrupt12 Status Register, offset: 0xB30 */
  __O  uint32_t IRCP1IGR12;                        /**< Interrupt Router CP1 Interrupt12 Generation Register, offset: 0xB34 */
  __IO uint32_t IRCP1ISR13;                        /**< Interrupt Router CP1 Interrupt13 Status Register, offset: 0xB38 */
  __O  uint32_t IRCP1IGR13;                        /**< Interrupt Router CP1 Interrupt13 Generation Register, offset: 0xB3C */
  __IO uint32_t IRCP2ISR0;                         /**< Interrupt Router CP2 Interrupt0 Status Register, offset: 0xB40 */
  __O  uint32_t IRCP2IGR0;                         /**< Interrupt Router CP2 Interrupt0 Generation Register, offset: 0xB44 */
  __IO uint32_t IRCP2ISR1;                         /**< Interrupt Router CP2 Interrupt1 Status Register, offset: 0xB48 */
  __O  uint32_t IRCP2IGR1;                         /**< Interrupt Router CP2 Interrupt1 Generation Register, offset: 0xB4C */
  __IO uint32_t IRCP2ISR2;                         /**< Interrupt Router CP2 Interrupt2 Status Register, offset: 0xB50 */
  __O  uint32_t IRCP2IGR2;                         /**< Interrupt Router CP2 Interrupt2 Generation Register, offset: 0xB54 */
  __IO uint32_t IRCP2ISR3;                         /**< Interrupt Router CP2 Interrupt3 Status Register, offset: 0xB58 */
  __O  uint32_t IRCP2IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xB5C */
  __IO uint32_t IRCP2ISR4;                         /**< Interrupt Router CP2 Interrupt4 Status Register, offset: 0xB60 */
  __O  uint32_t IRCP2IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xB64 */
  __IO uint32_t IRCP2ISR5;                         /**< Interrupt Router CP2 Interrupt5 Status Register, offset: 0xB68 */
  __O  uint32_t IRCP2IGR5;                         /**< Interrupt Router CP2 Interrupt5 Generation Register, offset: 0xB6C */
  __IO uint32_t IRCP2ISR6;                         /**< Interrupt Router CP2 Interrupt6 Status Register, offset: 0xB70 */
  __O  uint32_t IRCP2IGR6;                         /**< Interrupt Router CP2 Interrupt6 Generation Register, offset: 0xB74 */
  __IO uint32_t IRCP2ISR7;                         /**< Interrupt Router CP2 Interrupt7 Status Register, offset: 0xB78 */
  __O  uint32_t IRCP2IGR7;                         /**< Interrupt Router CP2 Interrupt7 Generation Register, offset: 0xB7C */
  __IO uint32_t IRCP2ISR8;                         /**< Interrupt Router CP2 Interrupt8 Status Register, offset: 0xB80 */
  __O  uint32_t IRCP2IGR8;                         /**< Interrupt Router CP2 Interrupt8 Generation Register, offset: 0xB84 */
  __IO uint32_t IRCP2ISR9;                         /**< Interrupt Router CP2 Interrupt9 Status Register, offset: 0xB88 */
  __O  uint32_t IRCP2IGR9;                         /**< Interrupt Router CP2 Interrupt9 Generation Register, offset: 0xB8C */
  __IO uint32_t IRCP2ISR10;                        /**< Interrupt Router CP2 Interrupt10 Status Register, offset: 0xB90 */
  __O  uint32_t IRCP2IGR10;                        /**< Interrupt Router CP2 Interrupt10 Generation Register, offset: 0xB94 */
  __IO uint32_t IRCP2ISR11;                        /**< Interrupt Router CP2 Interrupt11 Status Register, offset: 0xB98 */
  __O  uint32_t IRCP2IGR11;                        /**< Interrupt Router CP2 Interrupt11 Generation Register, offset: 0xB9C */
  __IO uint32_t IRCP2ISR12;                        /**< Interrupt Router CP2 Interrupt12 Status Register, offset: 0xBA0 */
  __O  uint32_t IRCP2IGR12;                        /**< Interrupt Router CP2 Interrupt12 Generation Register, offset: 0xBA4 */
  __IO uint32_t IRCP2ISR13;                        /**< Interrupt Router CP2 Interrupt13 Status Register, offset: 0xBA8 */
  __O  uint32_t IRCP2IGR13;                        /**< Interrupt Router CP2 Interrupt13 Generation Register, offset: 0xBAC */
  __IO uint32_t IRCP3ISR0;                         /**< Interrupt Router CP3 Interrupt0 Status Register, offset: 0xBB0 */
  __O  uint32_t IRCP3IGR0;                         /**< Interrupt Router CP3 Interrupt0 Generation Register, offset: 0xBB4 */
  __IO uint32_t IRCP3ISR1;                         /**< Interrupt Router CP3 Interrupt1 Status Register, offset: 0xBB8 */
  __O  uint32_t IRCP3IGR1;                         /**< Interrupt Router CP3 Interrupt1 Generation Register, offset: 0xBBC */
  __IO uint32_t IRCP3ISR2;                         /**< Interrupt Router CP3 Interrupt2 Status Register, offset: 0xBC0 */
  __O  uint32_t IRCP3IGR2;                         /**< Interrupt Router CP3 Interrupt2 Generation Register, offset: 0xBC4 */
  __IO uint32_t IRCP3ISR3;                         /**< Interrupt Router CP3 Interrupt3 Status Register, offset: 0xBC8 */
  __O  uint32_t IRCP3IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xBCC */
  __IO uint32_t IRCP3ISR4;                         /**< Interrupt Router CP3 Interrupt4 Status Register, offset: 0xBD0 */
  __O  uint32_t IRCP3IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xBD4 */
  __IO uint32_t IRCP3ISR5;                         /**< Interrupt Router CP3 Interrupt5 Status Register, offset: 0xBD8 */
  __O  uint32_t IRCP3IGR5;                         /**< Interrupt Router CP3 Interrupt5 Generation Register, offset: 0xBDC */
  __IO uint32_t IRCP3ISR6;                         /**< Interrupt Router CP3 Interrupt6 Status Register, offset: 0xBE0 */
  __O  uint32_t IRCP3IGR6;                         /**< Interrupt Router CP3 Interrupt6 Generation Register, offset: 0xBE4 */
  __IO uint32_t IRCP3ISR7;                         /**< Interrupt Router CP3 Interrupt7 Status Register, offset: 0xBE8 */
  __O  uint32_t IRCP3IGR7;                         /**< Interrupt Router CP3 Interrupt7 Generation Register, offset: 0xBEC */
  __IO uint32_t IRCP3ISR8;                         /**< Interrupt Router CP3 Interrupt8 Status Register, offset: 0xBF0 */
  __O  uint32_t IRCP3IGR8;                         /**< Interrupt Router CP3 Interrupt8 Generation Register, offset: 0xBF4 */
  __IO uint32_t IRCP3ISR9;                         /**< Interrupt Router CP3 Interrupt9 Status Register, offset: 0xBF8 */
  __O  uint32_t IRCP3IGR9;                         /**< Interrupt Router CP3 Interrupt9 Generation Register, offset: 0xBFC */
  __IO uint32_t IRCP3ISR10;                        /**< Interrupt Router CP3 Interrupt10 Status Register, offset: 0xC00 */
  __O  uint32_t IRCP3IGR10;                        /**< Interrupt Router CP3 Interrupt10 Generation Register, offset: 0xC04 */
  __IO uint32_t IRCP3ISR11;                        /**< Interrupt Router CP3 Interrupt11 Status Register, offset: 0xC08 */
  __O  uint32_t IRCP3IGR11;                        /**< Interrupt Router CP3 Interrupt11 Generation Register, offset: 0xC0C */
  __IO uint32_t IRCP3ISR12;                        /**< Interrupt Router CP3 Interrupt12 Status Register, offset: 0xC10 */
  __O  uint32_t IRCP3IGR12;                        /**< Interrupt Router CP3 Interrupt12 Generation Register, offset: 0xC14 */
  __IO uint32_t IRCP3ISR13;                        /**< Interrupt Router CP3 Interrupt13 Status Register, offset: 0xC18 */
  __O  uint32_t IRCP3IGR13;                        /**< Interrupt Router CP3 Interrupt13 Generation Register, offset: 0xC1C */
  __IO uint32_t IRCP4ISR0;                         /**< Interrupt Router CP4 Interrupt0 Status Register, offset: 0xC20 */
  __O  uint32_t IRCP4IGR0;                         /**< Interrupt Router CP4 Interrupt0 Generation Register, offset: 0xC24 */
  __IO uint32_t IRCP4ISR1;                         /**< Interrupt Router CP4 Interrupt1 Status Register, offset: 0xC28 */
  __O  uint32_t IRCP4IGR1;                         /**< Interrupt Router CP4 Interrupt1 Generation Register, offset: 0xC2C */
  __IO uint32_t IRCP4ISR2;                         /**< Interrupt Router CP4 Interrupt2 Status Register, offset: 0xC30 */
  __O  uint32_t IRCP4IGR2;                         /**< Interrupt Router CP4 Interrupt2 Generation Register, offset: 0xC34 */
  __IO uint32_t IRCP4ISR3;                         /**< Interrupt Router CP4 Interrupt3 Status Register, offset: 0xC38 */
  __O  uint32_t IRCP4IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xC3C */
  __IO uint32_t IRCP4ISR4;                         /**< Interrupt Router CP4 Interrupt4 Status Register, offset: 0xC40 */
  __O  uint32_t IRCP4IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xC44 */
  __IO uint32_t IRCP4ISR5;                         /**< Interrupt Router CP4 Interrupt5 Status Register, offset: 0xC48 */
  __O  uint32_t IRCP4IGR5;                         /**< Interrupt Router CP4 Interrupt5 Generation Register, offset: 0xC4C */
  __IO uint32_t IRCP4ISR6;                         /**< Interrupt Router CP4 Interrupt6 Status Register, offset: 0xC50 */
  __O  uint32_t IRCP4IGR6;                         /**< Interrupt Router CP4 Interrupt6 Generation Register, offset: 0xC54 */
  __IO uint32_t IRCP4ISR7;                         /**< Interrupt Router CP4 Interrupt7 Status Register, offset: 0xC58 */
  __O  uint32_t IRCP4IGR7;                         /**< Interrupt Router CP4 Interrupt7 Generation Register, offset: 0xC5C */
  __IO uint32_t IRCP4ISR8;                         /**< Interrupt Router CP4 Interrupt8 Status Register, offset: 0xC60 */
  __O  uint32_t IRCP4IGR8;                         /**< Interrupt Router CP4 Interrupt8 Generation Register, offset: 0xC64 */
  __IO uint32_t IRCP4ISR9;                         /**< Interrupt Router CP4 Interrupt9 Status Register, offset: 0xC68 */
  __O  uint32_t IRCP4IGR9;                         /**< Interrupt Router CP4 Interrupt9 Generation Register, offset: 0xC6C */
  __IO uint32_t IRCP4ISR10;                        /**< Interrupt Router CP4 Interrupt10 Status Register, offset: 0xC70 */
  __O  uint32_t IRCP4IGR10;                        /**< Interrupt Router CP4 Interrupt10 Generation Register, offset: 0xC74 */
  __IO uint32_t IRCP4ISR11;                        /**< Interrupt Router CP4 Interrupt11 Status Register, offset: 0xC78 */
  __O  uint32_t IRCP4IGR11;                        /**< Interrupt Router CP4 Interrupt11 Generation Register, offset: 0xC7C */
  __IO uint32_t IRCP4ISR12;                        /**< Interrupt Router CP4 Interrupt12 Status Register, offset: 0xC80 */
  __O  uint32_t IRCP4IGR12;                        /**< Interrupt Router CP4 Interrupt12 Generation Register, offset: 0xC84 */
  __IO uint32_t IRCP4ISR13;                        /**< Interrupt Router CP4 Interrupt13 Status Register, offset: 0xC88 */
  __O  uint32_t IRCP4IGR13;                        /**< Interrupt Router CP4 Interrupt13 Generation Register, offset: 0xC8C */
  __IO uint32_t IRCP5ISR0;                         /**< Interrupt Router CP5 Interrupt0 Status Register, offset: 0xC90 */
  __O  uint32_t IRCP5IGR0;                         /**< Interrupt Router CP5 Interrupt0 Generation Register, offset: 0xC94 */
  __IO uint32_t IRCP5ISR1;                         /**< Interrupt Router CP5 Interrupt1 Status Register, offset: 0xC98 */
  __O  uint32_t IRCP5IGR1;                         /**< Interrupt Router CP5 Interrupt1 Generation Register, offset: 0xC9C */
  __IO uint32_t IRCP5ISR2;                         /**< Interrupt Router CP5 Interrupt2 Status Register, offset: 0xCA0 */
  __O  uint32_t IRCP5IGR2;                         /**< Interrupt Router CP5 Interrupt2 Generation Register, offset: 0xCA4 */
  __IO uint32_t IRCP5ISR3;                         /**< Interrupt Router CP5 Interrupt3 Status Register, offset: 0xCA8 */
  __O  uint32_t IRCP5IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xCAC */
  __IO uint32_t IRCP5ISR4;                         /**< Interrupt Router CP5 Interrupt4 Status Register, offset: 0xCB0 */
  __O  uint32_t IRCP5IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xCB4 */
  __IO uint32_t IRCP5ISR5;                         /**< Interrupt Router CP5 Interrupt5 Status Register, offset: 0xCB8 */
  __O  uint32_t IRCP5IGR5;                         /**< Interrupt Router CP5 Interrupt5 Generation Register, offset: 0xCBC */
  __IO uint32_t IRCP5ISR6;                         /**< Interrupt Router CP5 Interrupt6 Status Register, offset: 0xCC0 */
  __O  uint32_t IRCP5IGR6;                         /**< Interrupt Router CP5 Interrupt6 Generation Register, offset: 0xCC4 */
  __IO uint32_t IRCP5ISR7;                         /**< Interrupt Router CP5 Interrupt7 Status Register, offset: 0xCC8 */
  __O  uint32_t IRCP5IGR7;                         /**< Interrupt Router CP5 Interrupt7 Generation Register, offset: 0xCCC */
  __IO uint32_t IRCP5ISR8;                         /**< Interrupt Router CP5 Interrupt8 Status Register, offset: 0xCD0 */
  __O  uint32_t IRCP5IGR8;                         /**< Interrupt Router CP5 Interrupt8 Generation Register, offset: 0xCD4 */
  __IO uint32_t IRCP5ISR9;                         /**< Interrupt Router CP5 Interrupt9 Status Register, offset: 0xCD8 */
  __O  uint32_t IRCP5IGR9;                         /**< Interrupt Router CP5 Interrupt9 Generation Register, offset: 0xCDC */
  __IO uint32_t IRCP5ISR10;                        /**< Interrupt Router CP5 Interrupt10 Status Register, offset: 0xCE0 */
  __O  uint32_t IRCP5IGR10;                        /**< Interrupt Router CP5 Interrupt10 Generation Register, offset: 0xCE4 */
  __IO uint32_t IRCP5ISR11;                        /**< Interrupt Router CP5 Interrupt11 Status Register, offset: 0xCE8 */
  __O  uint32_t IRCP5IGR11;                        /**< Interrupt Router CP5 Interrupt11 Generation Register, offset: 0xCEC */
  __IO uint32_t IRCP5ISR12;                        /**< Interrupt Router CP5 Interrupt12 Status Register, offset: 0xCF0 */
  __O  uint32_t IRCP5IGR12;                        /**< Interrupt Router CP5 Interrupt12 Generation Register, offset: 0xCF4 */
  __IO uint32_t IRCP5ISR13;                        /**< Interrupt Router CP5 Interrupt13 Status Register, offset: 0xCF8 */
  __O  uint32_t IRCP5IGR13;                        /**< Interrupt Router CP5 Interrupt13 Generation Register, offset: 0xCFC */
  __IO uint32_t IRCP6ISR0;                         /**< Interrupt Router CP6 Interrupt0 Status Register, offset: 0xD00 */
  __O  uint32_t IRCP6IGR0;                         /**< Interrupt Router CP6 Interrupt0 Generation Register, offset: 0xD04 */
  __IO uint32_t IRCP6ISR1;                         /**< Interrupt Router CP6 Interrupt1 Status Register, offset: 0xD08 */
  __O  uint32_t IRCP6IGR1;                         /**< Interrupt Router CP6 Interrupt1 Generation Register, offset: 0xD0C */
  __IO uint32_t IRCP6ISR2;                         /**< Interrupt Router CP6 Interrupt2 Status Register, offset: 0xD10 */
  __O  uint32_t IRCP6IGR2;                         /**< Interrupt Router CP6 Interrupt2 Generation Register, offset: 0xD14 */
  __IO uint32_t IRCP6ISR3;                         /**< Interrupt Router CP6 Interrupt3 Status Register, offset: 0xD18 */
  __O  uint32_t IRCP6IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xD1C */
  __IO uint32_t IRCP6ISR4;                         /**< Interrupt Router CP6 Interrupt4 Status Register, offset: 0xD20 */
  __O  uint32_t IRCP6IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xD24 */
  __IO uint32_t IRCP6ISR5;                         /**< Interrupt Router CP6 Interrupt5 Status Register, offset: 0xD28 */
  __O  uint32_t IRCP6IGR5;                         /**< Interrupt Router CP6 Interrupt5 Generation Register, offset: 0xD2C */
  __IO uint32_t IRCP6ISR6;                         /**< Interrupt Router CP6 Interrupt6 Status Register, offset: 0xD30 */
  __O  uint32_t IRCP6IGR6;                         /**< Interrupt Router CP6 Interrupt6 Generation Register, offset: 0xD34 */
  __IO uint32_t IRCP6ISR7;                         /**< Interrupt Router CP6 Interrupt7 Status Register, offset: 0xD38 */
  __O  uint32_t IRCP6IGR7;                         /**< Interrupt Router CP6 Interrupt7 Generation Register, offset: 0xD3C */
  __IO uint32_t IRCP6ISR8;                         /**< Interrupt Router CP6 Interrupt8 Status Register, offset: 0xD40 */
  __O  uint32_t IRCP6IGR8;                         /**< Interrupt Router CP6 Interrupt8 Generation Register, offset: 0xD44 */
  __IO uint32_t IRCP6ISR9;                         /**< Interrupt Router CP6 Interrupt9 Status Register, offset: 0xD48 */
  __O  uint32_t IRCP6IGR9;                         /**< Interrupt Router CP6 Interrupt9 Generation Register, offset: 0xD4C */
  __IO uint32_t IRCP6ISR10;                        /**< Interrupt Router CP6 Interrupt10 Status Register, offset: 0xD50 */
  __O  uint32_t IRCP6IGR10;                        /**< Interrupt Router CP6 Interrupt10 Generation Register, offset: 0xD54 */
  __IO uint32_t IRCP6ISR11;                        /**< Interrupt Router CP6 Interrupt11 Status Register, offset: 0xD58 */
  __O  uint32_t IRCP6IGR11;                        /**< Interrupt Router CP6 Interrupt11 Generation Register, offset: 0xD5C */
  __IO uint32_t IRCP6ISR12;                        /**< Interrupt Router CP6 Interrupt12 Status Register, offset: 0xD60 */
  __O  uint32_t IRCP6IGR12;                        /**< Interrupt Router CP6 Interrupt12 Generation Register, offset: 0xD64 */
  __IO uint32_t IRCP6ISR13;                        /**< Interrupt Router CP6 Interrupt13 Status Register, offset: 0xD68 */
  __O  uint32_t IRCP6IGR13;                        /**< Interrupt Router CP6 Interrupt13 Generation Register, offset: 0xD6C */
  __IO uint32_t IRCP7ISR0;                         /**< Interrupt Router CP7 Interrupt0 Status Register, offset: 0xD70 */
  __O  uint32_t IRCP7IGR0;                         /**< Interrupt Router CP7 Interrupt0 Generation Register, offset: 0xD74 */
  __IO uint32_t IRCP7ISR1;                         /**< Interrupt Router CP7 Interrupt1 Status Register, offset: 0xD78 */
  __O  uint32_t IRCP7IGR1;                         /**< Interrupt Router CP7 Interrupt1 Generation Register, offset: 0xD7C */
  __IO uint32_t IRCP7ISR2;                         /**< Interrupt Router CP7 Interrupt2 Status Register, offset: 0xD80 */
  __O  uint32_t IRCP7IGR2;                         /**< Interrupt Router CP7 Interrupt2 Generation Register, offset: 0xD84 */
  __IO uint32_t IRCP7ISR3;                         /**< Interrupt Router CP7 Interrupt3 Status Register, offset: 0xD88 */
  __O  uint32_t IRCP7IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xD8C */
  __IO uint32_t IRCP7ISR4;                         /**< Interrupt Router CP7 Interrupt4 Status Register, offset: 0xD90 */
  __O  uint32_t IRCP7IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xD94 */
  __IO uint32_t IRCP7ISR5;                         /**< Interrupt Router CP7 Interrupt5 Status Register, offset: 0xD98 */
  __O  uint32_t IRCP7IGR5;                         /**< Interrupt Router CP7 Interrupt5 Generation Register, offset: 0xD9C */
  __IO uint32_t IRCP7ISR6;                         /**< Interrupt Router CP7 Interrupt6 Status Register, offset: 0xDA0 */
  __O  uint32_t IRCP7IGR6;                         /**< Interrupt Router CP7 Interrupt6 Generation Register, offset: 0xDA4 */
  __IO uint32_t IRCP7ISR7;                         /**< Interrupt Router CP7 Interrupt7 Status Register, offset: 0xDA8 */
  __O  uint32_t IRCP7IGR7;                         /**< Interrupt Router CP7 Interrupt7 Generation Register, offset: 0xDAC */
  __IO uint32_t IRCP7ISR8;                         /**< Interrupt Router CP7 Interrupt8 Status Register, offset: 0xDB0 */
  __O  uint32_t IRCP7IGR8;                         /**< Interrupt Router CP7 Interrupt8 Generation Register, offset: 0xDB4 */
  __IO uint32_t IRCP7ISR9;                         /**< Interrupt Router CP7 Interrupt9 Status Register, offset: 0xDB8 */
  __O  uint32_t IRCP7IGR9;                         /**< Interrupt Router CP7 Interrupt9 Generation Register, offset: 0xDBC */
  __IO uint32_t IRCP7ISR10;                        /**< Interrupt Router CP7 Interrupt10 Status Register, offset: 0xDC0 */
  __O  uint32_t IRCP7IGR10;                        /**< Interrupt Router CP7 Interrupt10 Generation Register, offset: 0xDC4 */
  __IO uint32_t IRCP7ISR11;                        /**< Interrupt Router CP7 Interrupt11 Status Register, offset: 0xDC8 */
  __O  uint32_t IRCP7IGR11;                        /**< Interrupt Router CP7 Interrupt11 Generation Register, offset: 0xDCC */
  __IO uint32_t IRCP7ISR12;                        /**< Interrupt Router CP7 Interrupt12 Status Register, offset: 0xDD0 */
  __O  uint32_t IRCP7IGR12;                        /**< Interrupt Router CP7 Interrupt12 Generation Register, offset: 0xDD4 */
  __IO uint32_t IRCP7ISR13;                        /**< Interrupt Router CP7 Interrupt13 Status Register, offset: 0xDD8 */
  __O  uint32_t IRCP7IGR13;                        /**< Interrupt Router CP7 Interrupt13 Generation Register, offset: 0xDDC */
  __IO uint32_t IRCP8ISR0;                         /**< Interrupt Router CP8 Interrupt0 Status Register, offset: 0xDE0 */
  __O  uint32_t IRCP8IGR0;                         /**< Interrupt Router CP8 Interrupt0 Generation Register, offset: 0xDE4 */
  __IO uint32_t IRCP8ISR1;                         /**< Interrupt Router CP8 Interrupt1 Status Register, offset: 0xDE8 */
  __O  uint32_t IRCP8IGR1;                         /**< Interrupt Router CP8 Interrupt1 Generation Register, offset: 0xDEC */
  __IO uint32_t IRCP8ISR2;                         /**< Interrupt Router CP8 Interrupt2 Status Register, offset: 0xDF0 */
  __O  uint32_t IRCP8IGR2;                         /**< Interrupt Router CP8 Interrupt2 Generation Register, offset: 0xDF4 */
  __IO uint32_t IRCP8ISR3;                         /**< Interrupt Router CP8 Interrupt3 Status Register, offset: 0xDF8 */
  __O  uint32_t IRCP8IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xDFC */
  __IO uint32_t IRCP8ISR4;                         /**< Interrupt Router CP8 Interrupt4 Status Register, offset: 0xE00 */
  __O  uint32_t IRCP8IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xE04 */
  __IO uint32_t IRCP8ISR5;                         /**< Interrupt Router CP8 Interrupt5 Status Register, offset: 0xE08 */
  __O  uint32_t IRCP8IGR5;                         /**< Interrupt Router CP8 Interrupt5 Generation Register, offset: 0xE0C */
  __IO uint32_t IRCP8ISR6;                         /**< Interrupt Router CP8 Interrupt6 Status Register, offset: 0xE10 */
  __O  uint32_t IRCP8IGR6;                         /**< Interrupt Router CP8 Interrupt6 Generation Register, offset: 0xE14 */
  __IO uint32_t IRCP8ISR7;                         /**< Interrupt Router CP8 Interrupt7 Status Register, offset: 0xE18 */
  __O  uint32_t IRCP8IGR7;                         /**< Interrupt Router CP8 Interrupt7 Generation Register, offset: 0xE1C */
  __IO uint32_t IRCP8ISR8;                         /**< Interrupt Router CP8 Interrupt8 Status Register, offset: 0xE20 */
  __O  uint32_t IRCP8IGR8;                         /**< Interrupt Router CP8 Interrupt8 Generation Register, offset: 0xE24 */
  __IO uint32_t IRCP8ISR9;                         /**< Interrupt Router CP8 Interrupt9 Status Register, offset: 0xE28 */
  __O  uint32_t IRCP8IGR9;                         /**< Interrupt Router CP8 Interrupt9 Generation Register, offset: 0xE2C */
  __IO uint32_t IRCP8ISR10;                        /**< Interrupt Router CP8 Interrupt10 Status Register, offset: 0xE30 */
  __O  uint32_t IRCP8IGR10;                        /**< Interrupt Router CP8 Interrupt10 Generation Register, offset: 0xE34 */
  __IO uint32_t IRCP8ISR11;                        /**< Interrupt Router CP8 Interrupt11 Status Register, offset: 0xE38 */
  __O  uint32_t IRCP8IGR11;                        /**< Interrupt Router CP8 Interrupt11 Generation Register, offset: 0xE3C */
  __IO uint32_t IRCP8ISR12;                        /**< Interrupt Router CP8 Interrupt12 Status Register, offset: 0xE40 */
  __O  uint32_t IRCP8IGR12;                        /**< Interrupt Router CP8 Interrupt12 Generation Register, offset: 0xE44 */
  __IO uint32_t IRCP8ISR13;                        /**< Interrupt Router CP8 Interrupt13 Status Register, offset: 0xE48 */
  __O  uint32_t IRCP8IGR13;                        /**< Interrupt Router CP8 Interrupt13 Generation Register, offset: 0xE4C */
  __IO uint32_t IRCP9ISR0;                         /**< Interrupt Router CP9 Interrupt0 Status Register, offset: 0xE50 */
  __O  uint32_t IRCP9IGR0;                         /**< Interrupt Router CP9 Interrupt0 Generation Register, offset: 0xE54 */
  __IO uint32_t IRCP9ISR1;                         /**< Interrupt Router CP9 Interrupt1 Status Register, offset: 0xE58 */
  __O  uint32_t IRCP9IGR1;                         /**< Interrupt Router CP9 Interrupt1 Generation Register, offset: 0xE5C */
  __IO uint32_t IRCP9ISR2;                         /**< Interrupt Router CP9 Interrupt2 Status Register, offset: 0xE60 */
  __O  uint32_t IRCP9IGR2;                         /**< Interrupt Router CP9 Interrupt2 Generation Register, offset: 0xE64 */
  __IO uint32_t IRCP9ISR3;                         /**< Interrupt Router CP9 Interrupt3 Status Register, offset: 0xE68 */
  __O  uint32_t IRCP9IGR3;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xE6C */
  __IO uint32_t IRCP9ISR4;                         /**< Interrupt Router CP9 Interrupt4 Status Register, offset: 0xE70 */
  __O  uint32_t IRCP9IGR4;                         /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xE74 */
  __IO uint32_t IRCP9ISR5;                         /**< Interrupt Router CP9 Interrupt5 Status Register, offset: 0xE78 */
  __O  uint32_t IRCP9IGR5;                         /**< Interrupt Router CP9 Interrupt5 Generation Register, offset: 0xE7C */
  __IO uint32_t IRCP9ISR6;                         /**< Interrupt Router CP9 Interrupt6 Status Register, offset: 0xE80 */
  __O  uint32_t IRCP9IGR6;                         /**< Interrupt Router CP9 Interrupt6 Generation Register, offset: 0xE84 */
  __IO uint32_t IRCP9ISR7;                         /**< Interrupt Router CP9 Interrupt7 Status Register, offset: 0xE88 */
  __O  uint32_t IRCP9IGR7;                         /**< Interrupt Router CP9 Interrupt7 Generation Register, offset: 0xE8C */
  __IO uint32_t IRCP9ISR8;                         /**< Interrupt Router CP9 Interrupt8 Status Register, offset: 0xE90 */
  __O  uint32_t IRCP9IGR8;                         /**< Interrupt Router CP9 Interrupt8 Generation Register, offset: 0xE94 */
  __IO uint32_t IRCP9ISR9;                         /**< Interrupt Router CP9 Interrupt9 Status Register, offset: 0xE98 */
  __O  uint32_t IRCP9IGR9;                         /**< Interrupt Router CP9 Interrupt9 Generation Register, offset: 0xE9C */
  __IO uint32_t IRCP9ISR10;                        /**< Interrupt Router CP9 Interrupt10 Status Register, offset: 0xEA0 */
  __O  uint32_t IRCP9IGR10;                        /**< Interrupt Router CP9 Interrupt10 Generation Register, offset: 0xEA4 */
  __IO uint32_t IRCP9ISR11;                        /**< Interrupt Router CP9 Interrupt11 Status Register, offset: 0xEA8 */
  __O  uint32_t IRCP9IGR11;                        /**< Interrupt Router CP9 Interrupt11 Generation Register, offset: 0xEAC */
  __IO uint32_t IRCP9ISR12;                        /**< Interrupt Router CP9 Interrupt12 Status Register, offset: 0xEB0 */
  __O  uint32_t IRCP9IGR12;                        /**< Interrupt Router CP9 Interrupt12 Generation Register, offset: 0xEB4 */
  __IO uint32_t IRCP9ISR13;                        /**< Interrupt Router CP9 Interrupt13 Status Register, offset: 0xEB8 */
  __O  uint32_t IRCP9IGR13;                        /**< Interrupt Router CP9 Interrupt13 Generation Register, offset: 0xEBC */
  __IO uint32_t IRCP10ISR0;                        /**< Interrupt Router CP10 Interrupt0 Status Register, offset: 0xEC0 */
  __O  uint32_t IRCP10IGR0;                        /**< Interrupt Router CP10 Interrupt0 Generation Register, offset: 0xEC4 */
  __IO uint32_t IRCP10ISR1;                        /**< Interrupt Router CP10 Interrupt1 Status Register, offset: 0xEC8 */
  __O  uint32_t IRCP10IGR1;                        /**< Interrupt Router CP10 Interrupt1 Generation Register, offset: 0xECC */
  __IO uint32_t IRCP10ISR2;                        /**< Interrupt Router CP10 Interrupt2 Status Register, offset: 0xED0 */
  __O  uint32_t IRCP10IGR2;                        /**< Interrupt Router CP10 Interrupt2 Generation Register, offset: 0xED4 */
  __IO uint32_t IRCP10ISR3;                        /**< Interrupt Router CP10 Interrupt3 Status Register, offset: 0xED8 */
  __O  uint32_t IRCP10IGR3;                        /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xEDC */
  __IO uint32_t IRCP10ISR4;                        /**< Interrupt Router CP10 Interrupt4 Status Register, offset: 0xEE0 */
  __O  uint32_t IRCP10IGR4;                        /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xEE4 */
  __IO uint32_t IRCP10ISR5;                        /**< Interrupt Router CP10 Interrupt5 Status Register, offset: 0xEE8 */
  __O  uint32_t IRCP10IGR5;                        /**< Interrupt Router CP10 Interrupt5 Generation Register, offset: 0xEEC */
  __IO uint32_t IRCP10ISR6;                        /**< Interrupt Router CP10 Interrupt6 Status Register, offset: 0xEF0 */
  __O  uint32_t IRCP10IGR6;                        /**< Interrupt Router CP10 Interrupt6 Generation Register, offset: 0xEF4 */
  __IO uint32_t IRCP10ISR7;                        /**< Interrupt Router CP10 Interrupt7 Status Register, offset: 0xEF8 */
  __O  uint32_t IRCP10IGR7;                        /**< Interrupt Router CP10 Interrupt7 Generation Register, offset: 0xEFC */
  __IO uint32_t IRCP10ISR8;                        /**< Interrupt Router CP10 Interrupt8 Status Register, offset: 0xF00 */
  __O  uint32_t IRCP10IGR8;                        /**< Interrupt Router CP10 Interrupt8 Generation Register, offset: 0xF04 */
  __IO uint32_t IRCP10ISR9;                        /**< Interrupt Router CP10 Interrupt9 Status Register, offset: 0xF08 */
  __O  uint32_t IRCP10IGR9;                        /**< Interrupt Router CP10 Interrupt9 Generation Register, offset: 0xF0C */
  __IO uint32_t IRCP10ISR10;                       /**< Interrupt Router CP10 Interrupt10 Status Register, offset: 0xF10 */
  __O  uint32_t IRCP10IGR10;                       /**< Interrupt Router CP10 Interrupt10 Generation Register, offset: 0xF14 */
  __IO uint32_t IRCP10ISR11;                       /**< Interrupt Router CP10 Interrupt11 Status Register, offset: 0xF18 */
  __O  uint32_t IRCP10IGR11;                       /**< Interrupt Router CP10 Interrupt11 Generation Register, offset: 0xF1C */
  __IO uint32_t IRCP10ISR12;                       /**< Interrupt Router CP10 Interrupt12 Status Register, offset: 0xF20 */
  __O  uint32_t IRCP10IGR12;                       /**< Interrupt Router CP10 Interrupt12 Generation Register, offset: 0xF24 */
  __IO uint32_t IRCP10ISR13;                       /**< Interrupt Router CP10 Interrupt13 Status Register, offset: 0xF28 */
  __O  uint32_t IRCP10IGR13;                       /**< Interrupt Router CP10 Interrupt13 Generation Register, offset: 0xF2C */
  __IO uint32_t IRCP11ISR0;                        /**< Interrupt Router CP11 Interrupt0 Status Register, offset: 0xF30 */
  __O  uint32_t IRCP11IGR0;                        /**< Interrupt Router CP11 Interrupt0 Generation Register, offset: 0xF34 */
  __IO uint32_t IRCP11ISR1;                        /**< Interrupt Router CP11 Interrupt1 Status Register, offset: 0xF38 */
  __O  uint32_t IRCP11IGR1;                        /**< Interrupt Router CP11 Interrupt1 Generation Register, offset: 0xF3C */
  __IO uint32_t IRCP11ISR2;                        /**< Interrupt Router CP11 Interrupt2 Status Register, offset: 0xF40 */
  __O  uint32_t IRCP11IGR2;                        /**< Interrupt Router CP11 Interrupt2 Generation Register, offset: 0xF44 */
  __IO uint32_t IRCP11ISR3;                        /**< Interrupt Router CP11 Interrupt3 Status Register, offset: 0xF48 */
  __O  uint32_t IRCP11IGR3;                        /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xF4C */
  __IO uint32_t IRCP11ISR4;                        /**< Interrupt Router CP11 Interrupt4 Status Register, offset: 0xF50 */
  __O  uint32_t IRCP11IGR4;                        /**< Interrupt Router CPn Interruptx Generation Register, offset: 0xF54 */
  __IO uint32_t IRCP11ISR5;                        /**< Interrupt Router CP11 Interrupt5 Status Register, offset: 0xF58 */
  __O  uint32_t IRCP11IGR5;                        /**< Interrupt Router CP11 Interrupt5 Generation Register, offset: 0xF5C */
  __IO uint32_t IRCP11ISR6;                        /**< Interrupt Router CP11 Interrupt6 Status Register, offset: 0xF60 */
  __O  uint32_t IRCP11IGR6;                        /**< Interrupt Router CP11 Interrupt6 Generation Register, offset: 0xF64 */
  __IO uint32_t IRCP11ISR7;                        /**< Interrupt Router CP11 Interrupt7 Status Register, offset: 0xF68 */
  __O  uint32_t IRCP11IGR7;                        /**< Interrupt Router CP11 Interrupt7 Generation Register, offset: 0xF6C */
  __IO uint32_t IRCP11ISR8;                        /**< Interrupt Router CP11 Interrupt8 Status Register, offset: 0xF70 */
  __O  uint32_t IRCP11IGR8;                        /**< Interrupt Router CP11 Interrupt8 Generation Register, offset: 0xF74 */
  __IO uint32_t IRCP11ISR9;                        /**< Interrupt Router CP11 Interrupt9 Status Register, offset: 0xF78 */
  __O  uint32_t IRCP11IGR9;                        /**< Interrupt Router CP11 Interrupt9 Generation Register, offset: 0xF7C */
  __IO uint32_t IRCP11ISR10;                       /**< Interrupt Router CP11 Interrupt10 Status Register, offset: 0xF80 */
  __O  uint32_t IRCP11IGR10;                       /**< Interrupt Router CP11 Interrupt10 Generation Register, offset: 0xF84 */
  __IO uint32_t IRCP11ISR11;                       /**< Interrupt Router CP11 Interrupt11 Status Register, offset: 0xF88 */
  __O  uint32_t IRCP11IGR11;                       /**< Interrupt Router CP11 Interrupt11 Generation Register, offset: 0xF8C */
  __IO uint32_t IRCP11ISR12;                       /**< Interrupt Router CP11 Interrupt12 Status Register, offset: 0xF90 */
  __O  uint32_t IRCP11IGR12;                       /**< Interrupt Router CP11 Interrupt12 Generation Register, offset: 0xF94 */
  __IO uint32_t IRCP11ISR13;                       /**< Interrupt Router CP11 Interrupt13 Status Register, offset: 0xF98 */
  __O  uint32_t IRCP11IGR13;                       /**< Interrupt Router CP11 Interrupt13 Generation Register, offset: 0xF9C */
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

/*! @name CP7TYPE - Processor Type Register */
/*! @{ */

#define MSCM_CP7TYPE_PERSONALITY_MASK            (0xFFFFFFFFU)
#define MSCM_CP7TYPE_PERSONALITY_SHIFT           (0U)
#define MSCM_CP7TYPE_PERSONALITY_WIDTH           (32U)
#define MSCM_CP7TYPE_PERSONALITY(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_CP7TYPE_PERSONALITY_SHIFT)) & MSCM_CP7TYPE_PERSONALITY_MASK)
/*! @} */

/*! @name CP7NUM - Processor Number Register */
/*! @{ */

#define MSCM_CP7NUM_CPN_MASK                     (0xFFU)
#define MSCM_CP7NUM_CPN_SHIFT                    (0U)
#define MSCM_CP7NUM_CPN_WIDTH                    (8U)
#define MSCM_CP7NUM_CPN(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CP7NUM_CPN_SHIFT)) & MSCM_CP7NUM_CPN_MASK)
/*! @} */

/*! @name CP7REV - Processor Count Register */
/*! @{ */

#define MSCM_CP7REV_RYPZ_MASK                    (0xFFU)
#define MSCM_CP7REV_RYPZ_SHIFT                   (0U)
#define MSCM_CP7REV_RYPZ_WIDTH                   (8U)
#define MSCM_CP7REV_RYPZ(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP7REV_RYPZ_SHIFT)) & MSCM_CP7REV_RYPZ_MASK)
/*! @} */

/*! @name CP7CFG0 - Processor Configuration 0 Register */
/*! @{ */

#define MSCM_CP7CFG0_DCWY_MASK                   (0xFFU)
#define MSCM_CP7CFG0_DCWY_SHIFT                  (0U)
#define MSCM_CP7CFG0_DCWY_WIDTH                  (8U)
#define MSCM_CP7CFG0_DCWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP7CFG0_DCWY_SHIFT)) & MSCM_CP7CFG0_DCWY_MASK)

#define MSCM_CP7CFG0_DCSZ_MASK                   (0xFF00U)
#define MSCM_CP7CFG0_DCSZ_SHIFT                  (8U)
#define MSCM_CP7CFG0_DCSZ_WIDTH                  (8U)
#define MSCM_CP7CFG0_DCSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP7CFG0_DCSZ_SHIFT)) & MSCM_CP7CFG0_DCSZ_MASK)

#define MSCM_CP7CFG0_ICWY_MASK                   (0xFF0000U)
#define MSCM_CP7CFG0_ICWY_SHIFT                  (16U)
#define MSCM_CP7CFG0_ICWY_WIDTH                  (8U)
#define MSCM_CP7CFG0_ICWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP7CFG0_ICWY_SHIFT)) & MSCM_CP7CFG0_ICWY_MASK)

#define MSCM_CP7CFG0_ICSZ_MASK                   (0xFF000000U)
#define MSCM_CP7CFG0_ICSZ_SHIFT                  (24U)
#define MSCM_CP7CFG0_ICSZ_WIDTH                  (8U)
#define MSCM_CP7CFG0_ICSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP7CFG0_ICSZ_SHIFT)) & MSCM_CP7CFG0_ICSZ_MASK)
/*! @} */

/*! @name CP7CFG1 - Processor Configuration 1 Register */
/*! @{ */

#define MSCM_CP7CFG1_L2WY_MASK                   (0xFF0000U)
#define MSCM_CP7CFG1_L2WY_SHIFT                  (16U)
#define MSCM_CP7CFG1_L2WY_WIDTH                  (8U)
#define MSCM_CP7CFG1_L2WY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP7CFG1_L2WY_SHIFT)) & MSCM_CP7CFG1_L2WY_MASK)

#define MSCM_CP7CFG1_L2SZ_MASK                   (0xFF000000U)
#define MSCM_CP7CFG1_L2SZ_SHIFT                  (24U)
#define MSCM_CP7CFG1_L2SZ_WIDTH                  (8U)
#define MSCM_CP7CFG1_L2SZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP7CFG1_L2SZ_SHIFT)) & MSCM_CP7CFG1_L2SZ_MASK)
/*! @} */

/*! @name CP7CFG2 - Processor Configuration 2 Register */
/*! @{ */

#define MSCM_CP7CFG2_TMUSZ_MASK                  (0xFF00U)
#define MSCM_CP7CFG2_TMUSZ_SHIFT                 (8U)
#define MSCM_CP7CFG2_TMUSZ_WIDTH                 (8U)
#define MSCM_CP7CFG2_TMUSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP7CFG2_TMUSZ_SHIFT)) & MSCM_CP7CFG2_TMUSZ_MASK)

#define MSCM_CP7CFG2_TMLSZ_MASK                  (0xFF000000U)
#define MSCM_CP7CFG2_TMLSZ_SHIFT                 (24U)
#define MSCM_CP7CFG2_TMLSZ_WIDTH                 (8U)
#define MSCM_CP7CFG2_TMLSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP7CFG2_TMLSZ_SHIFT)) & MSCM_CP7CFG2_TMLSZ_MASK)
/*! @} */

/*! @name CP7CFG3 - Processor Configuration 3 Register */
/*! @{ */

#define MSCM_CP7CFG3_HW_FPU_MASK                 (0x1U)
#define MSCM_CP7CFG3_HW_FPU_SHIFT                (0U)
#define MSCM_CP7CFG3_HW_FPU_WIDTH                (1U)
#define MSCM_CP7CFG3_HW_FPU(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CP7CFG3_HW_FPU_SHIFT)) & MSCM_CP7CFG3_HW_FPU_MASK)

#define MSCM_CP7CFG3_SIMD_MASK                   (0x2U)
#define MSCM_CP7CFG3_SIMD_SHIFT                  (1U)
#define MSCM_CP7CFG3_SIMD_WIDTH                  (1U)
#define MSCM_CP7CFG3_SIMD(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP7CFG3_SIMD_SHIFT)) & MSCM_CP7CFG3_SIMD_MASK)

#define MSCM_CP7CFG3_MMU_MASK                    (0x4U)
#define MSCM_CP7CFG3_MMU_SHIFT                   (2U)
#define MSCM_CP7CFG3_MMU_WIDTH                   (1U)
#define MSCM_CP7CFG3_MMU(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP7CFG3_MMU_SHIFT)) & MSCM_CP7CFG3_MMU_MASK)

#define MSCM_CP7CFG3_CMP_MASK                    (0x8U)
#define MSCM_CP7CFG3_CMP_SHIFT                   (3U)
#define MSCM_CP7CFG3_CMP_WIDTH                   (1U)
#define MSCM_CP7CFG3_CMP(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP7CFG3_CMP_SHIFT)) & MSCM_CP7CFG3_CMP_MASK)

#define MSCM_CP7CFG3_CPY_MASK                    (0x10U)
#define MSCM_CP7CFG3_CPY_SHIFT                   (4U)
#define MSCM_CP7CFG3_CPY_WIDTH                   (1U)
#define MSCM_CP7CFG3_CPY(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP7CFG3_CPY_SHIFT)) & MSCM_CP7CFG3_CPY_MASK)
/*! @} */

/*! @name CP8TYPE - Processor Type Register */
/*! @{ */

#define MSCM_CP8TYPE_PERSONALITY_MASK            (0xFFFFFFFFU)
#define MSCM_CP8TYPE_PERSONALITY_SHIFT           (0U)
#define MSCM_CP8TYPE_PERSONALITY_WIDTH           (32U)
#define MSCM_CP8TYPE_PERSONALITY(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_CP8TYPE_PERSONALITY_SHIFT)) & MSCM_CP8TYPE_PERSONALITY_MASK)
/*! @} */

/*! @name CP8NUM - Processor Number Register */
/*! @{ */

#define MSCM_CP8NUM_CPN_MASK                     (0xFFU)
#define MSCM_CP8NUM_CPN_SHIFT                    (0U)
#define MSCM_CP8NUM_CPN_WIDTH                    (8U)
#define MSCM_CP8NUM_CPN(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CP8NUM_CPN_SHIFT)) & MSCM_CP8NUM_CPN_MASK)
/*! @} */

/*! @name CP8REV - Processor Count Register */
/*! @{ */

#define MSCM_CP8REV_RYPZ_MASK                    (0xFFU)
#define MSCM_CP8REV_RYPZ_SHIFT                   (0U)
#define MSCM_CP8REV_RYPZ_WIDTH                   (8U)
#define MSCM_CP8REV_RYPZ(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP8REV_RYPZ_SHIFT)) & MSCM_CP8REV_RYPZ_MASK)
/*! @} */

/*! @name CP8CFG0 - Processor Configuration 0 Register */
/*! @{ */

#define MSCM_CP8CFG0_DCWY_MASK                   (0xFFU)
#define MSCM_CP8CFG0_DCWY_SHIFT                  (0U)
#define MSCM_CP8CFG0_DCWY_WIDTH                  (8U)
#define MSCM_CP8CFG0_DCWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP8CFG0_DCWY_SHIFT)) & MSCM_CP8CFG0_DCWY_MASK)

#define MSCM_CP8CFG0_DCSZ_MASK                   (0xFF00U)
#define MSCM_CP8CFG0_DCSZ_SHIFT                  (8U)
#define MSCM_CP8CFG0_DCSZ_WIDTH                  (8U)
#define MSCM_CP8CFG0_DCSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP8CFG0_DCSZ_SHIFT)) & MSCM_CP8CFG0_DCSZ_MASK)

#define MSCM_CP8CFG0_ICWY_MASK                   (0xFF0000U)
#define MSCM_CP8CFG0_ICWY_SHIFT                  (16U)
#define MSCM_CP8CFG0_ICWY_WIDTH                  (8U)
#define MSCM_CP8CFG0_ICWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP8CFG0_ICWY_SHIFT)) & MSCM_CP8CFG0_ICWY_MASK)

#define MSCM_CP8CFG0_ICSZ_MASK                   (0xFF000000U)
#define MSCM_CP8CFG0_ICSZ_SHIFT                  (24U)
#define MSCM_CP8CFG0_ICSZ_WIDTH                  (8U)
#define MSCM_CP8CFG0_ICSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP8CFG0_ICSZ_SHIFT)) & MSCM_CP8CFG0_ICSZ_MASK)
/*! @} */

/*! @name CP8CFG1 - Processor Configuration 1 Register */
/*! @{ */

#define MSCM_CP8CFG1_L2WY_MASK                   (0xFF0000U)
#define MSCM_CP8CFG1_L2WY_SHIFT                  (16U)
#define MSCM_CP8CFG1_L2WY_WIDTH                  (8U)
#define MSCM_CP8CFG1_L2WY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP8CFG1_L2WY_SHIFT)) & MSCM_CP8CFG1_L2WY_MASK)

#define MSCM_CP8CFG1_L2SZ_MASK                   (0xFF000000U)
#define MSCM_CP8CFG1_L2SZ_SHIFT                  (24U)
#define MSCM_CP8CFG1_L2SZ_WIDTH                  (8U)
#define MSCM_CP8CFG1_L2SZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP8CFG1_L2SZ_SHIFT)) & MSCM_CP8CFG1_L2SZ_MASK)
/*! @} */

/*! @name CP8CFG2 - Processor Configuration 2 Register */
/*! @{ */

#define MSCM_CP8CFG2_TMUSZ_MASK                  (0xFF00U)
#define MSCM_CP8CFG2_TMUSZ_SHIFT                 (8U)
#define MSCM_CP8CFG2_TMUSZ_WIDTH                 (8U)
#define MSCM_CP8CFG2_TMUSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP8CFG2_TMUSZ_SHIFT)) & MSCM_CP8CFG2_TMUSZ_MASK)

#define MSCM_CP8CFG2_TMLSZ_MASK                  (0xFF000000U)
#define MSCM_CP8CFG2_TMLSZ_SHIFT                 (24U)
#define MSCM_CP8CFG2_TMLSZ_WIDTH                 (8U)
#define MSCM_CP8CFG2_TMLSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP8CFG2_TMLSZ_SHIFT)) & MSCM_CP8CFG2_TMLSZ_MASK)
/*! @} */

/*! @name CP8CFG3 - Processor Configuration 3 Register */
/*! @{ */

#define MSCM_CP8CFG3_HW_FPU_MASK                 (0x1U)
#define MSCM_CP8CFG3_HW_FPU_SHIFT                (0U)
#define MSCM_CP8CFG3_HW_FPU_WIDTH                (1U)
#define MSCM_CP8CFG3_HW_FPU(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CP8CFG3_HW_FPU_SHIFT)) & MSCM_CP8CFG3_HW_FPU_MASK)

#define MSCM_CP8CFG3_SIMD_MASK                   (0x2U)
#define MSCM_CP8CFG3_SIMD_SHIFT                  (1U)
#define MSCM_CP8CFG3_SIMD_WIDTH                  (1U)
#define MSCM_CP8CFG3_SIMD(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP8CFG3_SIMD_SHIFT)) & MSCM_CP8CFG3_SIMD_MASK)

#define MSCM_CP8CFG3_MMU_MASK                    (0x4U)
#define MSCM_CP8CFG3_MMU_SHIFT                   (2U)
#define MSCM_CP8CFG3_MMU_WIDTH                   (1U)
#define MSCM_CP8CFG3_MMU(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP8CFG3_MMU_SHIFT)) & MSCM_CP8CFG3_MMU_MASK)

#define MSCM_CP8CFG3_CMP_MASK                    (0x8U)
#define MSCM_CP8CFG3_CMP_SHIFT                   (3U)
#define MSCM_CP8CFG3_CMP_WIDTH                   (1U)
#define MSCM_CP8CFG3_CMP(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP8CFG3_CMP_SHIFT)) & MSCM_CP8CFG3_CMP_MASK)

#define MSCM_CP8CFG3_CPY_MASK                    (0x10U)
#define MSCM_CP8CFG3_CPY_SHIFT                   (4U)
#define MSCM_CP8CFG3_CPY_WIDTH                   (1U)
#define MSCM_CP8CFG3_CPY(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP8CFG3_CPY_SHIFT)) & MSCM_CP8CFG3_CPY_MASK)
/*! @} */

/*! @name CP9TYPE - Processor Type Register */
/*! @{ */

#define MSCM_CP9TYPE_PERSONALITY_MASK            (0xFFFFFFFFU)
#define MSCM_CP9TYPE_PERSONALITY_SHIFT           (0U)
#define MSCM_CP9TYPE_PERSONALITY_WIDTH           (32U)
#define MSCM_CP9TYPE_PERSONALITY(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_CP9TYPE_PERSONALITY_SHIFT)) & MSCM_CP9TYPE_PERSONALITY_MASK)
/*! @} */

/*! @name CP9NUM - Processor Number Register */
/*! @{ */

#define MSCM_CP9NUM_CPN_MASK                     (0xFFU)
#define MSCM_CP9NUM_CPN_SHIFT                    (0U)
#define MSCM_CP9NUM_CPN_WIDTH                    (8U)
#define MSCM_CP9NUM_CPN(x)                       (((uint32_t)(((uint32_t)(x)) << MSCM_CP9NUM_CPN_SHIFT)) & MSCM_CP9NUM_CPN_MASK)
/*! @} */

/*! @name CP9REV - Processor Count Register */
/*! @{ */

#define MSCM_CP9REV_RYPZ_MASK                    (0xFFU)
#define MSCM_CP9REV_RYPZ_SHIFT                   (0U)
#define MSCM_CP9REV_RYPZ_WIDTH                   (8U)
#define MSCM_CP9REV_RYPZ(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP9REV_RYPZ_SHIFT)) & MSCM_CP9REV_RYPZ_MASK)
/*! @} */

/*! @name CP9CFG0 - Processor Configuration 0 Register */
/*! @{ */

#define MSCM_CP9CFG0_DCWY_MASK                   (0xFFU)
#define MSCM_CP9CFG0_DCWY_SHIFT                  (0U)
#define MSCM_CP9CFG0_DCWY_WIDTH                  (8U)
#define MSCM_CP9CFG0_DCWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP9CFG0_DCWY_SHIFT)) & MSCM_CP9CFG0_DCWY_MASK)

#define MSCM_CP9CFG0_DCSZ_MASK                   (0xFF00U)
#define MSCM_CP9CFG0_DCSZ_SHIFT                  (8U)
#define MSCM_CP9CFG0_DCSZ_WIDTH                  (8U)
#define MSCM_CP9CFG0_DCSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP9CFG0_DCSZ_SHIFT)) & MSCM_CP9CFG0_DCSZ_MASK)

#define MSCM_CP9CFG0_ICWY_MASK                   (0xFF0000U)
#define MSCM_CP9CFG0_ICWY_SHIFT                  (16U)
#define MSCM_CP9CFG0_ICWY_WIDTH                  (8U)
#define MSCM_CP9CFG0_ICWY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP9CFG0_ICWY_SHIFT)) & MSCM_CP9CFG0_ICWY_MASK)

#define MSCM_CP9CFG0_ICSZ_MASK                   (0xFF000000U)
#define MSCM_CP9CFG0_ICSZ_SHIFT                  (24U)
#define MSCM_CP9CFG0_ICSZ_WIDTH                  (8U)
#define MSCM_CP9CFG0_ICSZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP9CFG0_ICSZ_SHIFT)) & MSCM_CP9CFG0_ICSZ_MASK)
/*! @} */

/*! @name CP9CFG1 - Processor Configuration 1 Register */
/*! @{ */

#define MSCM_CP9CFG1_L2WY_MASK                   (0xFF0000U)
#define MSCM_CP9CFG1_L2WY_SHIFT                  (16U)
#define MSCM_CP9CFG1_L2WY_WIDTH                  (8U)
#define MSCM_CP9CFG1_L2WY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP9CFG1_L2WY_SHIFT)) & MSCM_CP9CFG1_L2WY_MASK)

#define MSCM_CP9CFG1_L2SZ_MASK                   (0xFF000000U)
#define MSCM_CP9CFG1_L2SZ_SHIFT                  (24U)
#define MSCM_CP9CFG1_L2SZ_WIDTH                  (8U)
#define MSCM_CP9CFG1_L2SZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP9CFG1_L2SZ_SHIFT)) & MSCM_CP9CFG1_L2SZ_MASK)
/*! @} */

/*! @name CP9CFG2 - Processor Configuration 2 Register */
/*! @{ */

#define MSCM_CP9CFG2_TMUSZ_MASK                  (0xFF00U)
#define MSCM_CP9CFG2_TMUSZ_SHIFT                 (8U)
#define MSCM_CP9CFG2_TMUSZ_WIDTH                 (8U)
#define MSCM_CP9CFG2_TMUSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP9CFG2_TMUSZ_SHIFT)) & MSCM_CP9CFG2_TMUSZ_MASK)

#define MSCM_CP9CFG2_TMLSZ_MASK                  (0xFF000000U)
#define MSCM_CP9CFG2_TMLSZ_SHIFT                 (24U)
#define MSCM_CP9CFG2_TMLSZ_WIDTH                 (8U)
#define MSCM_CP9CFG2_TMLSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP9CFG2_TMLSZ_SHIFT)) & MSCM_CP9CFG2_TMLSZ_MASK)
/*! @} */

/*! @name CP9CFG3 - Processor Configuration 3 Register */
/*! @{ */

#define MSCM_CP9CFG3_HW_FPU_MASK                 (0x1U)
#define MSCM_CP9CFG3_HW_FPU_SHIFT                (0U)
#define MSCM_CP9CFG3_HW_FPU_WIDTH                (1U)
#define MSCM_CP9CFG3_HW_FPU(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CP9CFG3_HW_FPU_SHIFT)) & MSCM_CP9CFG3_HW_FPU_MASK)

#define MSCM_CP9CFG3_SIMD_MASK                   (0x2U)
#define MSCM_CP9CFG3_SIMD_SHIFT                  (1U)
#define MSCM_CP9CFG3_SIMD_WIDTH                  (1U)
#define MSCM_CP9CFG3_SIMD(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP9CFG3_SIMD_SHIFT)) & MSCM_CP9CFG3_SIMD_MASK)

#define MSCM_CP9CFG3_MMU_MASK                    (0x4U)
#define MSCM_CP9CFG3_MMU_SHIFT                   (2U)
#define MSCM_CP9CFG3_MMU_WIDTH                   (1U)
#define MSCM_CP9CFG3_MMU(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP9CFG3_MMU_SHIFT)) & MSCM_CP9CFG3_MMU_MASK)

#define MSCM_CP9CFG3_CMP_MASK                    (0x8U)
#define MSCM_CP9CFG3_CMP_SHIFT                   (3U)
#define MSCM_CP9CFG3_CMP_WIDTH                   (1U)
#define MSCM_CP9CFG3_CMP(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP9CFG3_CMP_SHIFT)) & MSCM_CP9CFG3_CMP_MASK)

#define MSCM_CP9CFG3_CPY_MASK                    (0x10U)
#define MSCM_CP9CFG3_CPY_SHIFT                   (4U)
#define MSCM_CP9CFG3_CPY_WIDTH                   (1U)
#define MSCM_CP9CFG3_CPY(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP9CFG3_CPY_SHIFT)) & MSCM_CP9CFG3_CPY_MASK)
/*! @} */

/*! @name CP10TYPE - Processor Type Register */
/*! @{ */

#define MSCM_CP10TYPE_PERSONALITY_MASK           (0xFFFFFFFFU)
#define MSCM_CP10TYPE_PERSONALITY_SHIFT          (0U)
#define MSCM_CP10TYPE_PERSONALITY_WIDTH          (32U)
#define MSCM_CP10TYPE_PERSONALITY(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_CP10TYPE_PERSONALITY_SHIFT)) & MSCM_CP10TYPE_PERSONALITY_MASK)
/*! @} */

/*! @name CP10NUM - Processor Number Register */
/*! @{ */

#define MSCM_CP10NUM_CPN_MASK                    (0xFFU)
#define MSCM_CP10NUM_CPN_SHIFT                   (0U)
#define MSCM_CP10NUM_CPN_WIDTH                   (8U)
#define MSCM_CP10NUM_CPN(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP10NUM_CPN_SHIFT)) & MSCM_CP10NUM_CPN_MASK)
/*! @} */

/*! @name CP10REV - Processor Count Register */
/*! @{ */

#define MSCM_CP10REV_RYPZ_MASK                   (0xFFU)
#define MSCM_CP10REV_RYPZ_SHIFT                  (0U)
#define MSCM_CP10REV_RYPZ_WIDTH                  (8U)
#define MSCM_CP10REV_RYPZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP10REV_RYPZ_SHIFT)) & MSCM_CP10REV_RYPZ_MASK)
/*! @} */

/*! @name CP10CFG0 - Processor Configuration 0 Register */
/*! @{ */

#define MSCM_CP10CFG0_DCWY_MASK                  (0xFFU)
#define MSCM_CP10CFG0_DCWY_SHIFT                 (0U)
#define MSCM_CP10CFG0_DCWY_WIDTH                 (8U)
#define MSCM_CP10CFG0_DCWY(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP10CFG0_DCWY_SHIFT)) & MSCM_CP10CFG0_DCWY_MASK)

#define MSCM_CP10CFG0_DCSZ_MASK                  (0xFF00U)
#define MSCM_CP10CFG0_DCSZ_SHIFT                 (8U)
#define MSCM_CP10CFG0_DCSZ_WIDTH                 (8U)
#define MSCM_CP10CFG0_DCSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP10CFG0_DCSZ_SHIFT)) & MSCM_CP10CFG0_DCSZ_MASK)

#define MSCM_CP10CFG0_ICWY_MASK                  (0xFF0000U)
#define MSCM_CP10CFG0_ICWY_SHIFT                 (16U)
#define MSCM_CP10CFG0_ICWY_WIDTH                 (8U)
#define MSCM_CP10CFG0_ICWY(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP10CFG0_ICWY_SHIFT)) & MSCM_CP10CFG0_ICWY_MASK)

#define MSCM_CP10CFG0_ICSZ_MASK                  (0xFF000000U)
#define MSCM_CP10CFG0_ICSZ_SHIFT                 (24U)
#define MSCM_CP10CFG0_ICSZ_WIDTH                 (8U)
#define MSCM_CP10CFG0_ICSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP10CFG0_ICSZ_SHIFT)) & MSCM_CP10CFG0_ICSZ_MASK)
/*! @} */

/*! @name CP10CFG1 - Processor Configuration 1 Register */
/*! @{ */

#define MSCM_CP10CFG1_L2WY_MASK                  (0xFF0000U)
#define MSCM_CP10CFG1_L2WY_SHIFT                 (16U)
#define MSCM_CP10CFG1_L2WY_WIDTH                 (8U)
#define MSCM_CP10CFG1_L2WY(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP10CFG1_L2WY_SHIFT)) & MSCM_CP10CFG1_L2WY_MASK)

#define MSCM_CP10CFG1_L2SZ_MASK                  (0xFF000000U)
#define MSCM_CP10CFG1_L2SZ_SHIFT                 (24U)
#define MSCM_CP10CFG1_L2SZ_WIDTH                 (8U)
#define MSCM_CP10CFG1_L2SZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP10CFG1_L2SZ_SHIFT)) & MSCM_CP10CFG1_L2SZ_MASK)
/*! @} */

/*! @name CP10CFG2 - Processor Configuration 2 Register */
/*! @{ */

#define MSCM_CP10CFG2_TMUSZ_MASK                 (0xFF00U)
#define MSCM_CP10CFG2_TMUSZ_SHIFT                (8U)
#define MSCM_CP10CFG2_TMUSZ_WIDTH                (8U)
#define MSCM_CP10CFG2_TMUSZ(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CP10CFG2_TMUSZ_SHIFT)) & MSCM_CP10CFG2_TMUSZ_MASK)

#define MSCM_CP10CFG2_TMLSZ_MASK                 (0xFF000000U)
#define MSCM_CP10CFG2_TMLSZ_SHIFT                (24U)
#define MSCM_CP10CFG2_TMLSZ_WIDTH                (8U)
#define MSCM_CP10CFG2_TMLSZ(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CP10CFG2_TMLSZ_SHIFT)) & MSCM_CP10CFG2_TMLSZ_MASK)
/*! @} */

/*! @name CP10CFG3 - Processor Configuration 3 Register */
/*! @{ */

#define MSCM_CP10CFG3_HW_FPU_MASK                (0x1U)
#define MSCM_CP10CFG3_HW_FPU_SHIFT               (0U)
#define MSCM_CP10CFG3_HW_FPU_WIDTH               (1U)
#define MSCM_CP10CFG3_HW_FPU(x)                  (((uint32_t)(((uint32_t)(x)) << MSCM_CP10CFG3_HW_FPU_SHIFT)) & MSCM_CP10CFG3_HW_FPU_MASK)

#define MSCM_CP10CFG3_SIMD_MASK                  (0x2U)
#define MSCM_CP10CFG3_SIMD_SHIFT                 (1U)
#define MSCM_CP10CFG3_SIMD_WIDTH                 (1U)
#define MSCM_CP10CFG3_SIMD(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP10CFG3_SIMD_SHIFT)) & MSCM_CP10CFG3_SIMD_MASK)

#define MSCM_CP10CFG3_MMU_MASK                   (0x4U)
#define MSCM_CP10CFG3_MMU_SHIFT                  (2U)
#define MSCM_CP10CFG3_MMU_WIDTH                  (1U)
#define MSCM_CP10CFG3_MMU(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP10CFG3_MMU_SHIFT)) & MSCM_CP10CFG3_MMU_MASK)

#define MSCM_CP10CFG3_CMP_MASK                   (0x8U)
#define MSCM_CP10CFG3_CMP_SHIFT                  (3U)
#define MSCM_CP10CFG3_CMP_WIDTH                  (1U)
#define MSCM_CP10CFG3_CMP(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP10CFG3_CMP_SHIFT)) & MSCM_CP10CFG3_CMP_MASK)

#define MSCM_CP10CFG3_CPY_MASK                   (0x10U)
#define MSCM_CP10CFG3_CPY_SHIFT                  (4U)
#define MSCM_CP10CFG3_CPY_WIDTH                  (1U)
#define MSCM_CP10CFG3_CPY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP10CFG3_CPY_SHIFT)) & MSCM_CP10CFG3_CPY_MASK)
/*! @} */

/*! @name CP11TYPE - Processor Type Register */
/*! @{ */

#define MSCM_CP11TYPE_PERSONALITY_MASK           (0xFFFFFFFFU)
#define MSCM_CP11TYPE_PERSONALITY_SHIFT          (0U)
#define MSCM_CP11TYPE_PERSONALITY_WIDTH          (32U)
#define MSCM_CP11TYPE_PERSONALITY(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_CP11TYPE_PERSONALITY_SHIFT)) & MSCM_CP11TYPE_PERSONALITY_MASK)
/*! @} */

/*! @name CP11NUM - Processor Number Register */
/*! @{ */

#define MSCM_CP11NUM_CPN_MASK                    (0xFFU)
#define MSCM_CP11NUM_CPN_SHIFT                   (0U)
#define MSCM_CP11NUM_CPN_WIDTH                   (8U)
#define MSCM_CP11NUM_CPN(x)                      (((uint32_t)(((uint32_t)(x)) << MSCM_CP11NUM_CPN_SHIFT)) & MSCM_CP11NUM_CPN_MASK)
/*! @} */

/*! @name CP11REV - Processor Count Register */
/*! @{ */

#define MSCM_CP11REV_RYPZ_MASK                   (0xFFU)
#define MSCM_CP11REV_RYPZ_SHIFT                  (0U)
#define MSCM_CP11REV_RYPZ_WIDTH                  (8U)
#define MSCM_CP11REV_RYPZ(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP11REV_RYPZ_SHIFT)) & MSCM_CP11REV_RYPZ_MASK)
/*! @} */

/*! @name CP11CFG0 - Processor Configuration 0 Register */
/*! @{ */

#define MSCM_CP11CFG0_DCWY_MASK                  (0xFFU)
#define MSCM_CP11CFG0_DCWY_SHIFT                 (0U)
#define MSCM_CP11CFG0_DCWY_WIDTH                 (8U)
#define MSCM_CP11CFG0_DCWY(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP11CFG0_DCWY_SHIFT)) & MSCM_CP11CFG0_DCWY_MASK)

#define MSCM_CP11CFG0_DCSZ_MASK                  (0xFF00U)
#define MSCM_CP11CFG0_DCSZ_SHIFT                 (8U)
#define MSCM_CP11CFG0_DCSZ_WIDTH                 (8U)
#define MSCM_CP11CFG0_DCSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP11CFG0_DCSZ_SHIFT)) & MSCM_CP11CFG0_DCSZ_MASK)

#define MSCM_CP11CFG0_ICWY_MASK                  (0xFF0000U)
#define MSCM_CP11CFG0_ICWY_SHIFT                 (16U)
#define MSCM_CP11CFG0_ICWY_WIDTH                 (8U)
#define MSCM_CP11CFG0_ICWY(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP11CFG0_ICWY_SHIFT)) & MSCM_CP11CFG0_ICWY_MASK)

#define MSCM_CP11CFG0_ICSZ_MASK                  (0xFF000000U)
#define MSCM_CP11CFG0_ICSZ_SHIFT                 (24U)
#define MSCM_CP11CFG0_ICSZ_WIDTH                 (8U)
#define MSCM_CP11CFG0_ICSZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP11CFG0_ICSZ_SHIFT)) & MSCM_CP11CFG0_ICSZ_MASK)
/*! @} */

/*! @name CP11CFG1 - Processor Configuration 1 Register */
/*! @{ */

#define MSCM_CP11CFG1_L2WY_MASK                  (0xFF0000U)
#define MSCM_CP11CFG1_L2WY_SHIFT                 (16U)
#define MSCM_CP11CFG1_L2WY_WIDTH                 (8U)
#define MSCM_CP11CFG1_L2WY(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP11CFG1_L2WY_SHIFT)) & MSCM_CP11CFG1_L2WY_MASK)

#define MSCM_CP11CFG1_L2SZ_MASK                  (0xFF000000U)
#define MSCM_CP11CFG1_L2SZ_SHIFT                 (24U)
#define MSCM_CP11CFG1_L2SZ_WIDTH                 (8U)
#define MSCM_CP11CFG1_L2SZ(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP11CFG1_L2SZ_SHIFT)) & MSCM_CP11CFG1_L2SZ_MASK)
/*! @} */

/*! @name CP11CFG2 - Processor Configuration 2 Register */
/*! @{ */

#define MSCM_CP11CFG2_TMUSZ_MASK                 (0xFF00U)
#define MSCM_CP11CFG2_TMUSZ_SHIFT                (8U)
#define MSCM_CP11CFG2_TMUSZ_WIDTH                (8U)
#define MSCM_CP11CFG2_TMUSZ(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CP11CFG2_TMUSZ_SHIFT)) & MSCM_CP11CFG2_TMUSZ_MASK)

#define MSCM_CP11CFG2_TMLSZ_MASK                 (0xFF000000U)
#define MSCM_CP11CFG2_TMLSZ_SHIFT                (24U)
#define MSCM_CP11CFG2_TMLSZ_WIDTH                (8U)
#define MSCM_CP11CFG2_TMLSZ(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_CP11CFG2_TMLSZ_SHIFT)) & MSCM_CP11CFG2_TMLSZ_MASK)
/*! @} */

/*! @name CP11CFG3 - Processor Configuration 3 Register */
/*! @{ */

#define MSCM_CP11CFG3_HW_FPU_MASK                (0x1U)
#define MSCM_CP11CFG3_HW_FPU_SHIFT               (0U)
#define MSCM_CP11CFG3_HW_FPU_WIDTH               (1U)
#define MSCM_CP11CFG3_HW_FPU(x)                  (((uint32_t)(((uint32_t)(x)) << MSCM_CP11CFG3_HW_FPU_SHIFT)) & MSCM_CP11CFG3_HW_FPU_MASK)

#define MSCM_CP11CFG3_SIMD_MASK                  (0x2U)
#define MSCM_CP11CFG3_SIMD_SHIFT                 (1U)
#define MSCM_CP11CFG3_SIMD_WIDTH                 (1U)
#define MSCM_CP11CFG3_SIMD(x)                    (((uint32_t)(((uint32_t)(x)) << MSCM_CP11CFG3_SIMD_SHIFT)) & MSCM_CP11CFG3_SIMD_MASK)

#define MSCM_CP11CFG3_MMU_MASK                   (0x4U)
#define MSCM_CP11CFG3_MMU_SHIFT                  (2U)
#define MSCM_CP11CFG3_MMU_WIDTH                  (1U)
#define MSCM_CP11CFG3_MMU(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP11CFG3_MMU_SHIFT)) & MSCM_CP11CFG3_MMU_MASK)

#define MSCM_CP11CFG3_CMP_MASK                   (0x8U)
#define MSCM_CP11CFG3_CMP_SHIFT                  (3U)
#define MSCM_CP11CFG3_CMP_WIDTH                  (1U)
#define MSCM_CP11CFG3_CMP(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP11CFG3_CMP_SHIFT)) & MSCM_CP11CFG3_CMP_MASK)

#define MSCM_CP11CFG3_CPY_MASK                   (0x10U)
#define MSCM_CP11CFG3_CPY_SHIFT                  (4U)
#define MSCM_CP11CFG3_CPY_WIDTH                  (1U)
#define MSCM_CP11CFG3_CPY(x)                     (((uint32_t)(((uint32_t)(x)) << MSCM_CP11CFG3_CPY_SHIFT)) & MSCM_CP11CFG3_CPY_MASK)
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

#define MSCM_IRCPCFG_CP7_TR_MASK                 (0x80U)
#define MSCM_IRCPCFG_CP7_TR_SHIFT                (7U)
#define MSCM_IRCPCFG_CP7_TR_WIDTH                (1U)
#define MSCM_IRCPCFG_CP7_TR(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_IRCPCFG_CP7_TR_SHIFT)) & MSCM_IRCPCFG_CP7_TR_MASK)

#define MSCM_IRCPCFG_CP8_TR_MASK                 (0x100U)
#define MSCM_IRCPCFG_CP8_TR_SHIFT                (8U)
#define MSCM_IRCPCFG_CP8_TR_WIDTH                (1U)
#define MSCM_IRCPCFG_CP8_TR(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_IRCPCFG_CP8_TR_SHIFT)) & MSCM_IRCPCFG_CP8_TR_MASK)

#define MSCM_IRCPCFG_CP9_TR_MASK                 (0x200U)
#define MSCM_IRCPCFG_CP9_TR_SHIFT                (9U)
#define MSCM_IRCPCFG_CP9_TR_WIDTH                (1U)
#define MSCM_IRCPCFG_CP9_TR(x)                   (((uint32_t)(((uint32_t)(x)) << MSCM_IRCPCFG_CP9_TR_SHIFT)) & MSCM_IRCPCFG_CP9_TR_MASK)

#define MSCM_IRCPCFG_CP10_TR_MASK                (0x400U)
#define MSCM_IRCPCFG_CP10_TR_SHIFT               (10U)
#define MSCM_IRCPCFG_CP10_TR_WIDTH               (1U)
#define MSCM_IRCPCFG_CP10_TR(x)                  (((uint32_t)(((uint32_t)(x)) << MSCM_IRCPCFG_CP10_TR_SHIFT)) & MSCM_IRCPCFG_CP10_TR_MASK)

#define MSCM_IRCPCFG_CP11_TR_MASK                (0x800U)
#define MSCM_IRCPCFG_CP11_TR_SHIFT               (11U)
#define MSCM_IRCPCFG_CP11_TR_WIDTH               (1U)
#define MSCM_IRCPCFG_CP11_TR(x)                  (((uint32_t)(((uint32_t)(x)) << MSCM_IRCPCFG_CP11_TR_SHIFT)) & MSCM_IRCPCFG_CP11_TR_MASK)

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

#define MSCM_IRNMIC_CP7_NMI_EN_MASK              (0x80U)
#define MSCM_IRNMIC_CP7_NMI_EN_SHIFT             (7U)
#define MSCM_IRNMIC_CP7_NMI_EN_WIDTH             (1U)
#define MSCM_IRNMIC_CP7_NMI_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRNMIC_CP7_NMI_EN_SHIFT)) & MSCM_IRNMIC_CP7_NMI_EN_MASK)

#define MSCM_IRNMIC_CP8_NMI_EN_MASK              (0x100U)
#define MSCM_IRNMIC_CP8_NMI_EN_SHIFT             (8U)
#define MSCM_IRNMIC_CP8_NMI_EN_WIDTH             (1U)
#define MSCM_IRNMIC_CP8_NMI_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRNMIC_CP8_NMI_EN_SHIFT)) & MSCM_IRNMIC_CP8_NMI_EN_MASK)

#define MSCM_IRNMIC_CP9_NMI_EN_MASK              (0x200U)
#define MSCM_IRNMIC_CP9_NMI_EN_SHIFT             (9U)
#define MSCM_IRNMIC_CP9_NMI_EN_WIDTH             (1U)
#define MSCM_IRNMIC_CP9_NMI_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRNMIC_CP9_NMI_EN_SHIFT)) & MSCM_IRNMIC_CP9_NMI_EN_MASK)

#define MSCM_IRNMIC_CP10_NMI_EN_MASK             (0x400U)
#define MSCM_IRNMIC_CP10_NMI_EN_SHIFT            (10U)
#define MSCM_IRNMIC_CP10_NMI_EN_WIDTH            (1U)
#define MSCM_IRNMIC_CP10_NMI_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRNMIC_CP10_NMI_EN_SHIFT)) & MSCM_IRNMIC_CP10_NMI_EN_MASK)

#define MSCM_IRNMIC_CP11_NMI_EN_MASK             (0x800U)
#define MSCM_IRNMIC_CP11_NMI_EN_SHIFT            (11U)
#define MSCM_IRNMIC_CP11_NMI_EN_WIDTH            (1U)
#define MSCM_IRNMIC_CP11_NMI_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRNMIC_CP11_NMI_EN_SHIFT)) & MSCM_IRNMIC_CP11_NMI_EN_MASK)
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

#define MSCM_IRSPRC_M7_3_MASK                    (0x10U)
#define MSCM_IRSPRC_M7_3_SHIFT                   (4U)
#define MSCM_IRSPRC_M7_3_WIDTH                   (1U)
#define MSCM_IRSPRC_M7_3(x)                      (((uint16_t)(((uint16_t)(x)) << MSCM_IRSPRC_M7_3_SHIFT)) & MSCM_IRSPRC_M7_3_MASK)

#define MSCM_IRSPRC_LOCK_MASK                    (0x8000U)
#define MSCM_IRSPRC_LOCK_SHIFT                   (15U)
#define MSCM_IRSPRC_LOCK_WIDTH                   (1U)
#define MSCM_IRSPRC_LOCK(x)                      (((uint16_t)(((uint16_t)(x)) << MSCM_IRSPRC_LOCK_SHIFT)) & MSCM_IRSPRC_LOCK_MASK)
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

#define MSCM_IRCP0ISR0_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP0ISR0_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP0ISR0_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR0_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR0_CP7_INT_SHIFT)) & MSCM_IRCP0ISR0_CP7_INT_MASK)

#define MSCM_IRCP0ISR0_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP0ISR0_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP0ISR0_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR0_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR0_CP8_INT_SHIFT)) & MSCM_IRCP0ISR0_CP8_INT_MASK)

#define MSCM_IRCP0ISR0_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP0ISR0_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP0ISR0_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR0_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR0_CP9_INT_SHIFT)) & MSCM_IRCP0ISR0_CP9_INT_MASK)

#define MSCM_IRCP0ISR0_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP0ISR0_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP0ISR0_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR0_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR0_CP10_INT_SHIFT)) & MSCM_IRCP0ISR0_CP10_INT_MASK)

#define MSCM_IRCP0ISR0_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP0ISR0_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP0ISR0_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR0_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR0_CP11_INT_SHIFT)) & MSCM_IRCP0ISR0_CP11_INT_MASK)
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

#define MSCM_IRCP0ISR1_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP0ISR1_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP0ISR1_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR1_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR1_CP7_INT_SHIFT)) & MSCM_IRCP0ISR1_CP7_INT_MASK)

#define MSCM_IRCP0ISR1_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP0ISR1_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP0ISR1_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR1_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR1_CP8_INT_SHIFT)) & MSCM_IRCP0ISR1_CP8_INT_MASK)

#define MSCM_IRCP0ISR1_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP0ISR1_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP0ISR1_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR1_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR1_CP9_INT_SHIFT)) & MSCM_IRCP0ISR1_CP9_INT_MASK)

#define MSCM_IRCP0ISR1_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP0ISR1_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP0ISR1_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR1_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR1_CP10_INT_SHIFT)) & MSCM_IRCP0ISR1_CP10_INT_MASK)

#define MSCM_IRCP0ISR1_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP0ISR1_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP0ISR1_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR1_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR1_CP11_INT_SHIFT)) & MSCM_IRCP0ISR1_CP11_INT_MASK)
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

#define MSCM_IRCP0ISR2_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP0ISR2_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP0ISR2_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR2_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR2_CP7_INT_SHIFT)) & MSCM_IRCP0ISR2_CP7_INT_MASK)

#define MSCM_IRCP0ISR2_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP0ISR2_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP0ISR2_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR2_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR2_CP8_INT_SHIFT)) & MSCM_IRCP0ISR2_CP8_INT_MASK)

#define MSCM_IRCP0ISR2_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP0ISR2_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP0ISR2_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR2_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR2_CP9_INT_SHIFT)) & MSCM_IRCP0ISR2_CP9_INT_MASK)

#define MSCM_IRCP0ISR2_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP0ISR2_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP0ISR2_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR2_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR2_CP10_INT_SHIFT)) & MSCM_IRCP0ISR2_CP10_INT_MASK)

#define MSCM_IRCP0ISR2_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP0ISR2_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP0ISR2_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR2_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR2_CP11_INT_SHIFT)) & MSCM_IRCP0ISR2_CP11_INT_MASK)
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

/*! @name IRCP0ISR5 - Interrupt Router CP0 Interrupt5 Status Register */
/*! @{ */

#define MSCM_IRCP0ISR5_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP0ISR5_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP0ISR5_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR5_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR5_CP0_INT_SHIFT)) & MSCM_IRCP0ISR5_CP0_INT_MASK)

#define MSCM_IRCP0ISR5_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP0ISR5_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP0ISR5_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR5_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR5_CP1_INT_SHIFT)) & MSCM_IRCP0ISR5_CP1_INT_MASK)

#define MSCM_IRCP0ISR5_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP0ISR5_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP0ISR5_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR5_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR5_CP2_INT_SHIFT)) & MSCM_IRCP0ISR5_CP2_INT_MASK)

#define MSCM_IRCP0ISR5_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP0ISR5_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP0ISR5_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR5_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR5_CP3_INT_SHIFT)) & MSCM_IRCP0ISR5_CP3_INT_MASK)

#define MSCM_IRCP0ISR5_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP0ISR5_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP0ISR5_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR5_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR5_CP4_INT_SHIFT)) & MSCM_IRCP0ISR5_CP4_INT_MASK)

#define MSCM_IRCP0ISR5_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP0ISR5_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP0ISR5_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR5_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR5_CP5_INT_SHIFT)) & MSCM_IRCP0ISR5_CP5_INT_MASK)

#define MSCM_IRCP0ISR5_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP0ISR5_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP0ISR5_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR5_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR5_CP6_INT_SHIFT)) & MSCM_IRCP0ISR5_CP6_INT_MASK)

#define MSCM_IRCP0ISR5_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP0ISR5_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP0ISR5_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR5_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR5_CP7_INT_SHIFT)) & MSCM_IRCP0ISR5_CP7_INT_MASK)

#define MSCM_IRCP0ISR5_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP0ISR5_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP0ISR5_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR5_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR5_CP8_INT_SHIFT)) & MSCM_IRCP0ISR5_CP8_INT_MASK)

#define MSCM_IRCP0ISR5_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP0ISR5_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP0ISR5_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR5_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR5_CP9_INT_SHIFT)) & MSCM_IRCP0ISR5_CP9_INT_MASK)

#define MSCM_IRCP0ISR5_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP0ISR5_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP0ISR5_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR5_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR5_CP10_INT_SHIFT)) & MSCM_IRCP0ISR5_CP10_INT_MASK)

#define MSCM_IRCP0ISR5_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP0ISR5_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP0ISR5_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR5_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR5_CP11_INT_SHIFT)) & MSCM_IRCP0ISR5_CP11_INT_MASK)
/*! @} */

/*! @name IRCP0IGR5 - Interrupt Router CP0 Interrupt5 Generation Register */
/*! @{ */

#define MSCM_IRCP0IGR5_INT_EN_MASK               (0x1U)
#define MSCM_IRCP0IGR5_INT_EN_SHIFT              (0U)
#define MSCM_IRCP0IGR5_INT_EN_WIDTH              (1U)
#define MSCM_IRCP0IGR5_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR5_INT_EN_SHIFT)) & MSCM_IRCP0IGR5_INT_EN_MASK)
/*! @} */

/*! @name IRCP0ISR6 - Interrupt Router CP0 Interrupt6 Status Register */
/*! @{ */

#define MSCM_IRCP0ISR6_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP0ISR6_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP0ISR6_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR6_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR6_CP0_INT_SHIFT)) & MSCM_IRCP0ISR6_CP0_INT_MASK)

#define MSCM_IRCP0ISR6_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP0ISR6_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP0ISR6_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR6_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR6_CP1_INT_SHIFT)) & MSCM_IRCP0ISR6_CP1_INT_MASK)

#define MSCM_IRCP0ISR6_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP0ISR6_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP0ISR6_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR6_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR6_CP2_INT_SHIFT)) & MSCM_IRCP0ISR6_CP2_INT_MASK)

#define MSCM_IRCP0ISR6_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP0ISR6_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP0ISR6_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR6_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR6_CP3_INT_SHIFT)) & MSCM_IRCP0ISR6_CP3_INT_MASK)

#define MSCM_IRCP0ISR6_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP0ISR6_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP0ISR6_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR6_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR6_CP4_INT_SHIFT)) & MSCM_IRCP0ISR6_CP4_INT_MASK)

#define MSCM_IRCP0ISR6_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP0ISR6_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP0ISR6_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR6_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR6_CP5_INT_SHIFT)) & MSCM_IRCP0ISR6_CP5_INT_MASK)

#define MSCM_IRCP0ISR6_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP0ISR6_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP0ISR6_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR6_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR6_CP6_INT_SHIFT)) & MSCM_IRCP0ISR6_CP6_INT_MASK)

#define MSCM_IRCP0ISR6_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP0ISR6_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP0ISR6_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR6_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR6_CP7_INT_SHIFT)) & MSCM_IRCP0ISR6_CP7_INT_MASK)

#define MSCM_IRCP0ISR6_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP0ISR6_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP0ISR6_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR6_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR6_CP8_INT_SHIFT)) & MSCM_IRCP0ISR6_CP8_INT_MASK)

#define MSCM_IRCP0ISR6_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP0ISR6_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP0ISR6_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR6_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR6_CP9_INT_SHIFT)) & MSCM_IRCP0ISR6_CP9_INT_MASK)

#define MSCM_IRCP0ISR6_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP0ISR6_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP0ISR6_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR6_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR6_CP10_INT_SHIFT)) & MSCM_IRCP0ISR6_CP10_INT_MASK)

#define MSCM_IRCP0ISR6_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP0ISR6_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP0ISR6_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR6_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR6_CP11_INT_SHIFT)) & MSCM_IRCP0ISR6_CP11_INT_MASK)
/*! @} */

/*! @name IRCP0IGR6 - Interrupt Router CP0 Interrupt6 Generation Register */
/*! @{ */

#define MSCM_IRCP0IGR6_INT_EN_MASK               (0x1U)
#define MSCM_IRCP0IGR6_INT_EN_SHIFT              (0U)
#define MSCM_IRCP0IGR6_INT_EN_WIDTH              (1U)
#define MSCM_IRCP0IGR6_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR6_INT_EN_SHIFT)) & MSCM_IRCP0IGR6_INT_EN_MASK)
/*! @} */

/*! @name IRCP0ISR7 - Interrupt Router CP0 Interrupt7 Status Register */
/*! @{ */

#define MSCM_IRCP0ISR7_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP0ISR7_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP0ISR7_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR7_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR7_CP0_INT_SHIFT)) & MSCM_IRCP0ISR7_CP0_INT_MASK)

#define MSCM_IRCP0ISR7_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP0ISR7_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP0ISR7_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR7_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR7_CP1_INT_SHIFT)) & MSCM_IRCP0ISR7_CP1_INT_MASK)

#define MSCM_IRCP0ISR7_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP0ISR7_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP0ISR7_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR7_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR7_CP2_INT_SHIFT)) & MSCM_IRCP0ISR7_CP2_INT_MASK)

#define MSCM_IRCP0ISR7_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP0ISR7_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP0ISR7_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR7_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR7_CP3_INT_SHIFT)) & MSCM_IRCP0ISR7_CP3_INT_MASK)

#define MSCM_IRCP0ISR7_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP0ISR7_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP0ISR7_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR7_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR7_CP4_INT_SHIFT)) & MSCM_IRCP0ISR7_CP4_INT_MASK)

#define MSCM_IRCP0ISR7_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP0ISR7_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP0ISR7_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR7_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR7_CP5_INT_SHIFT)) & MSCM_IRCP0ISR7_CP5_INT_MASK)

#define MSCM_IRCP0ISR7_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP0ISR7_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP0ISR7_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR7_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR7_CP6_INT_SHIFT)) & MSCM_IRCP0ISR7_CP6_INT_MASK)

#define MSCM_IRCP0ISR7_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP0ISR7_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP0ISR7_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR7_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR7_CP7_INT_SHIFT)) & MSCM_IRCP0ISR7_CP7_INT_MASK)

#define MSCM_IRCP0ISR7_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP0ISR7_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP0ISR7_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR7_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR7_CP8_INT_SHIFT)) & MSCM_IRCP0ISR7_CP8_INT_MASK)

#define MSCM_IRCP0ISR7_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP0ISR7_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP0ISR7_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR7_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR7_CP9_INT_SHIFT)) & MSCM_IRCP0ISR7_CP9_INT_MASK)

#define MSCM_IRCP0ISR7_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP0ISR7_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP0ISR7_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR7_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR7_CP10_INT_SHIFT)) & MSCM_IRCP0ISR7_CP10_INT_MASK)

#define MSCM_IRCP0ISR7_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP0ISR7_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP0ISR7_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR7_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR7_CP11_INT_SHIFT)) & MSCM_IRCP0ISR7_CP11_INT_MASK)
/*! @} */

/*! @name IRCP0IGR7 - Interrupt Router CP0 Interrupt7 Generation Register */
/*! @{ */

#define MSCM_IRCP0IGR7_INT_EN_MASK               (0x1U)
#define MSCM_IRCP0IGR7_INT_EN_SHIFT              (0U)
#define MSCM_IRCP0IGR7_INT_EN_WIDTH              (1U)
#define MSCM_IRCP0IGR7_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR7_INT_EN_SHIFT)) & MSCM_IRCP0IGR7_INT_EN_MASK)
/*! @} */

/*! @name IRCP0ISR8 - Interrupt Router CP0 Interrupt8 Status Register */
/*! @{ */

#define MSCM_IRCP0ISR8_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP0ISR8_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP0ISR8_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR8_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR8_CP0_INT_SHIFT)) & MSCM_IRCP0ISR8_CP0_INT_MASK)

#define MSCM_IRCP0ISR8_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP0ISR8_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP0ISR8_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR8_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR8_CP1_INT_SHIFT)) & MSCM_IRCP0ISR8_CP1_INT_MASK)

#define MSCM_IRCP0ISR8_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP0ISR8_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP0ISR8_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR8_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR8_CP2_INT_SHIFT)) & MSCM_IRCP0ISR8_CP2_INT_MASK)

#define MSCM_IRCP0ISR8_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP0ISR8_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP0ISR8_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR8_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR8_CP3_INT_SHIFT)) & MSCM_IRCP0ISR8_CP3_INT_MASK)

#define MSCM_IRCP0ISR8_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP0ISR8_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP0ISR8_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR8_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR8_CP4_INT_SHIFT)) & MSCM_IRCP0ISR8_CP4_INT_MASK)

#define MSCM_IRCP0ISR8_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP0ISR8_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP0ISR8_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR8_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR8_CP5_INT_SHIFT)) & MSCM_IRCP0ISR8_CP5_INT_MASK)

#define MSCM_IRCP0ISR8_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP0ISR8_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP0ISR8_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR8_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR8_CP6_INT_SHIFT)) & MSCM_IRCP0ISR8_CP6_INT_MASK)

#define MSCM_IRCP0ISR8_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP0ISR8_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP0ISR8_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR8_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR8_CP7_INT_SHIFT)) & MSCM_IRCP0ISR8_CP7_INT_MASK)

#define MSCM_IRCP0ISR8_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP0ISR8_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP0ISR8_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR8_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR8_CP8_INT_SHIFT)) & MSCM_IRCP0ISR8_CP8_INT_MASK)

#define MSCM_IRCP0ISR8_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP0ISR8_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP0ISR8_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR8_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR8_CP9_INT_SHIFT)) & MSCM_IRCP0ISR8_CP9_INT_MASK)

#define MSCM_IRCP0ISR8_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP0ISR8_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP0ISR8_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR8_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR8_CP10_INT_SHIFT)) & MSCM_IRCP0ISR8_CP10_INT_MASK)

#define MSCM_IRCP0ISR8_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP0ISR8_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP0ISR8_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR8_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR8_CP11_INT_SHIFT)) & MSCM_IRCP0ISR8_CP11_INT_MASK)
/*! @} */

/*! @name IRCP0IGR8 - Interrupt Router CP0 Interrupt8 Generation Register */
/*! @{ */

#define MSCM_IRCP0IGR8_INT_EN_MASK               (0x1U)
#define MSCM_IRCP0IGR8_INT_EN_SHIFT              (0U)
#define MSCM_IRCP0IGR8_INT_EN_WIDTH              (1U)
#define MSCM_IRCP0IGR8_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR8_INT_EN_SHIFT)) & MSCM_IRCP0IGR8_INT_EN_MASK)
/*! @} */

/*! @name IRCP0ISR9 - Interrupt Router CP0 Interrupt9 Status Register */
/*! @{ */

#define MSCM_IRCP0ISR9_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP0ISR9_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP0ISR9_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR9_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR9_CP0_INT_SHIFT)) & MSCM_IRCP0ISR9_CP0_INT_MASK)

#define MSCM_IRCP0ISR9_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP0ISR9_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP0ISR9_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR9_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR9_CP1_INT_SHIFT)) & MSCM_IRCP0ISR9_CP1_INT_MASK)

#define MSCM_IRCP0ISR9_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP0ISR9_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP0ISR9_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR9_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR9_CP2_INT_SHIFT)) & MSCM_IRCP0ISR9_CP2_INT_MASK)

#define MSCM_IRCP0ISR9_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP0ISR9_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP0ISR9_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR9_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR9_CP3_INT_SHIFT)) & MSCM_IRCP0ISR9_CP3_INT_MASK)

#define MSCM_IRCP0ISR9_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP0ISR9_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP0ISR9_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR9_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR9_CP4_INT_SHIFT)) & MSCM_IRCP0ISR9_CP4_INT_MASK)

#define MSCM_IRCP0ISR9_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP0ISR9_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP0ISR9_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR9_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR9_CP5_INT_SHIFT)) & MSCM_IRCP0ISR9_CP5_INT_MASK)

#define MSCM_IRCP0ISR9_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP0ISR9_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP0ISR9_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR9_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR9_CP6_INT_SHIFT)) & MSCM_IRCP0ISR9_CP6_INT_MASK)

#define MSCM_IRCP0ISR9_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP0ISR9_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP0ISR9_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR9_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR9_CP7_INT_SHIFT)) & MSCM_IRCP0ISR9_CP7_INT_MASK)

#define MSCM_IRCP0ISR9_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP0ISR9_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP0ISR9_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR9_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR9_CP8_INT_SHIFT)) & MSCM_IRCP0ISR9_CP8_INT_MASK)

#define MSCM_IRCP0ISR9_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP0ISR9_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP0ISR9_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP0ISR9_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR9_CP9_INT_SHIFT)) & MSCM_IRCP0ISR9_CP9_INT_MASK)

#define MSCM_IRCP0ISR9_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP0ISR9_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP0ISR9_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR9_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR9_CP10_INT_SHIFT)) & MSCM_IRCP0ISR9_CP10_INT_MASK)

#define MSCM_IRCP0ISR9_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP0ISR9_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP0ISR9_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR9_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR9_CP11_INT_SHIFT)) & MSCM_IRCP0ISR9_CP11_INT_MASK)
/*! @} */

/*! @name IRCP0IGR9 - Interrupt Router CP0 Interrupt9 Generation Register */
/*! @{ */

#define MSCM_IRCP0IGR9_INT_EN_MASK               (0x1U)
#define MSCM_IRCP0IGR9_INT_EN_SHIFT              (0U)
#define MSCM_IRCP0IGR9_INT_EN_WIDTH              (1U)
#define MSCM_IRCP0IGR9_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR9_INT_EN_SHIFT)) & MSCM_IRCP0IGR9_INT_EN_MASK)
/*! @} */

/*! @name IRCP0ISR10 - Interrupt Router CP0 Interrupt10 Status Register */
/*! @{ */

#define MSCM_IRCP0ISR10_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP0ISR10_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP0ISR10_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR10_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR10_CP0_INT_SHIFT)) & MSCM_IRCP0ISR10_CP0_INT_MASK)

#define MSCM_IRCP0ISR10_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP0ISR10_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP0ISR10_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR10_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR10_CP1_INT_SHIFT)) & MSCM_IRCP0ISR10_CP1_INT_MASK)

#define MSCM_IRCP0ISR10_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP0ISR10_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP0ISR10_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR10_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR10_CP2_INT_SHIFT)) & MSCM_IRCP0ISR10_CP2_INT_MASK)

#define MSCM_IRCP0ISR10_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP0ISR10_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP0ISR10_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR10_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR10_CP3_INT_SHIFT)) & MSCM_IRCP0ISR10_CP3_INT_MASK)

#define MSCM_IRCP0ISR10_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP0ISR10_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP0ISR10_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR10_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR10_CP4_INT_SHIFT)) & MSCM_IRCP0ISR10_CP4_INT_MASK)

#define MSCM_IRCP0ISR10_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP0ISR10_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP0ISR10_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR10_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR10_CP5_INT_SHIFT)) & MSCM_IRCP0ISR10_CP5_INT_MASK)

#define MSCM_IRCP0ISR10_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP0ISR10_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP0ISR10_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR10_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR10_CP6_INT_SHIFT)) & MSCM_IRCP0ISR10_CP6_INT_MASK)

#define MSCM_IRCP0ISR10_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP0ISR10_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP0ISR10_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR10_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR10_CP7_INT_SHIFT)) & MSCM_IRCP0ISR10_CP7_INT_MASK)

#define MSCM_IRCP0ISR10_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP0ISR10_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP0ISR10_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR10_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR10_CP8_INT_SHIFT)) & MSCM_IRCP0ISR10_CP8_INT_MASK)

#define MSCM_IRCP0ISR10_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP0ISR10_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP0ISR10_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR10_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR10_CP9_INT_SHIFT)) & MSCM_IRCP0ISR10_CP9_INT_MASK)

#define MSCM_IRCP0ISR10_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP0ISR10_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP0ISR10_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP0ISR10_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR10_CP10_INT_SHIFT)) & MSCM_IRCP0ISR10_CP10_INT_MASK)

#define MSCM_IRCP0ISR10_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP0ISR10_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP0ISR10_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP0ISR10_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR10_CP11_INT_SHIFT)) & MSCM_IRCP0ISR10_CP11_INT_MASK)
/*! @} */

/*! @name IRCP0IGR10 - Interrupt Router CP0 Interrupt10 Generation Register */
/*! @{ */

#define MSCM_IRCP0IGR10_INT_EN_MASK              (0x1U)
#define MSCM_IRCP0IGR10_INT_EN_SHIFT             (0U)
#define MSCM_IRCP0IGR10_INT_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR10_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR10_INT_EN_SHIFT)) & MSCM_IRCP0IGR10_INT_EN_MASK)
/*! @} */

/*! @name IRCP0ISR11 - Interrupt Router CP0 Interrupt11 Status Register */
/*! @{ */

#define MSCM_IRCP0ISR11_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP0ISR11_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP0ISR11_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR11_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR11_CP0_INT_SHIFT)) & MSCM_IRCP0ISR11_CP0_INT_MASK)

#define MSCM_IRCP0ISR11_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP0ISR11_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP0ISR11_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR11_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR11_CP1_INT_SHIFT)) & MSCM_IRCP0ISR11_CP1_INT_MASK)

#define MSCM_IRCP0ISR11_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP0ISR11_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP0ISR11_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR11_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR11_CP2_INT_SHIFT)) & MSCM_IRCP0ISR11_CP2_INT_MASK)

#define MSCM_IRCP0ISR11_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP0ISR11_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP0ISR11_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR11_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR11_CP3_INT_SHIFT)) & MSCM_IRCP0ISR11_CP3_INT_MASK)

#define MSCM_IRCP0ISR11_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP0ISR11_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP0ISR11_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR11_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR11_CP4_INT_SHIFT)) & MSCM_IRCP0ISR11_CP4_INT_MASK)

#define MSCM_IRCP0ISR11_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP0ISR11_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP0ISR11_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR11_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR11_CP5_INT_SHIFT)) & MSCM_IRCP0ISR11_CP5_INT_MASK)

#define MSCM_IRCP0ISR11_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP0ISR11_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP0ISR11_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR11_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR11_CP6_INT_SHIFT)) & MSCM_IRCP0ISR11_CP6_INT_MASK)

#define MSCM_IRCP0ISR11_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP0ISR11_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP0ISR11_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR11_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR11_CP7_INT_SHIFT)) & MSCM_IRCP0ISR11_CP7_INT_MASK)

#define MSCM_IRCP0ISR11_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP0ISR11_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP0ISR11_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR11_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR11_CP8_INT_SHIFT)) & MSCM_IRCP0ISR11_CP8_INT_MASK)

#define MSCM_IRCP0ISR11_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP0ISR11_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP0ISR11_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR11_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR11_CP9_INT_SHIFT)) & MSCM_IRCP0ISR11_CP9_INT_MASK)

#define MSCM_IRCP0ISR11_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP0ISR11_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP0ISR11_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP0ISR11_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR11_CP10_INT_SHIFT)) & MSCM_IRCP0ISR11_CP10_INT_MASK)

#define MSCM_IRCP0ISR11_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP0ISR11_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP0ISR11_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP0ISR11_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR11_CP11_INT_SHIFT)) & MSCM_IRCP0ISR11_CP11_INT_MASK)
/*! @} */

/*! @name IRCP0IGR11 - Interrupt Router CP0 Interrupt11 Generation Register */
/*! @{ */

#define MSCM_IRCP0IGR11_INT_EN_MASK              (0x1U)
#define MSCM_IRCP0IGR11_INT_EN_SHIFT             (0U)
#define MSCM_IRCP0IGR11_INT_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR11_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR11_INT_EN_SHIFT)) & MSCM_IRCP0IGR11_INT_EN_MASK)
/*! @} */

/*! @name IRCP0ISR12 - Interrupt Router CP0 Interrupt12 Status Register */
/*! @{ */

#define MSCM_IRCP0ISR12_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP0ISR12_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP0ISR12_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR12_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR12_CP0_INT_SHIFT)) & MSCM_IRCP0ISR12_CP0_INT_MASK)

#define MSCM_IRCP0ISR12_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP0ISR12_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP0ISR12_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR12_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR12_CP1_INT_SHIFT)) & MSCM_IRCP0ISR12_CP1_INT_MASK)

#define MSCM_IRCP0ISR12_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP0ISR12_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP0ISR12_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR12_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR12_CP2_INT_SHIFT)) & MSCM_IRCP0ISR12_CP2_INT_MASK)

#define MSCM_IRCP0ISR12_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP0ISR12_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP0ISR12_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR12_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR12_CP3_INT_SHIFT)) & MSCM_IRCP0ISR12_CP3_INT_MASK)

#define MSCM_IRCP0ISR12_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP0ISR12_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP0ISR12_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR12_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR12_CP4_INT_SHIFT)) & MSCM_IRCP0ISR12_CP4_INT_MASK)

#define MSCM_IRCP0ISR12_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP0ISR12_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP0ISR12_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR12_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR12_CP5_INT_SHIFT)) & MSCM_IRCP0ISR12_CP5_INT_MASK)

#define MSCM_IRCP0ISR12_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP0ISR12_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP0ISR12_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR12_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR12_CP6_INT_SHIFT)) & MSCM_IRCP0ISR12_CP6_INT_MASK)

#define MSCM_IRCP0ISR12_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP0ISR12_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP0ISR12_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR12_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR12_CP7_INT_SHIFT)) & MSCM_IRCP0ISR12_CP7_INT_MASK)

#define MSCM_IRCP0ISR12_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP0ISR12_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP0ISR12_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR12_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR12_CP8_INT_SHIFT)) & MSCM_IRCP0ISR12_CP8_INT_MASK)

#define MSCM_IRCP0ISR12_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP0ISR12_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP0ISR12_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR12_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR12_CP9_INT_SHIFT)) & MSCM_IRCP0ISR12_CP9_INT_MASK)

#define MSCM_IRCP0ISR12_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP0ISR12_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP0ISR12_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP0ISR12_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR12_CP10_INT_SHIFT)) & MSCM_IRCP0ISR12_CP10_INT_MASK)

#define MSCM_IRCP0ISR12_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP0ISR12_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP0ISR12_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP0ISR12_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR12_CP11_INT_SHIFT)) & MSCM_IRCP0ISR12_CP11_INT_MASK)
/*! @} */

/*! @name IRCP0IGR12 - Interrupt Router CP0 Interrupt12 Generation Register */
/*! @{ */

#define MSCM_IRCP0IGR12_INT_EN_MASK              (0x1U)
#define MSCM_IRCP0IGR12_INT_EN_SHIFT             (0U)
#define MSCM_IRCP0IGR12_INT_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR12_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR12_INT_EN_SHIFT)) & MSCM_IRCP0IGR12_INT_EN_MASK)
/*! @} */

/*! @name IRCP0ISR13 - Interrupt Router CP0 Interrupt13 Status Register */
/*! @{ */

#define MSCM_IRCP0ISR13_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP0ISR13_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP0ISR13_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR13_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR13_CP0_INT_SHIFT)) & MSCM_IRCP0ISR13_CP0_INT_MASK)

#define MSCM_IRCP0ISR13_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP0ISR13_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP0ISR13_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR13_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR13_CP1_INT_SHIFT)) & MSCM_IRCP0ISR13_CP1_INT_MASK)

#define MSCM_IRCP0ISR13_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP0ISR13_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP0ISR13_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR13_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR13_CP2_INT_SHIFT)) & MSCM_IRCP0ISR13_CP2_INT_MASK)

#define MSCM_IRCP0ISR13_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP0ISR13_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP0ISR13_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR13_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR13_CP3_INT_SHIFT)) & MSCM_IRCP0ISR13_CP3_INT_MASK)

#define MSCM_IRCP0ISR13_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP0ISR13_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP0ISR13_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR13_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR13_CP4_INT_SHIFT)) & MSCM_IRCP0ISR13_CP4_INT_MASK)

#define MSCM_IRCP0ISR13_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP0ISR13_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP0ISR13_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR13_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR13_CP5_INT_SHIFT)) & MSCM_IRCP0ISR13_CP5_INT_MASK)

#define MSCM_IRCP0ISR13_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP0ISR13_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP0ISR13_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR13_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR13_CP6_INT_SHIFT)) & MSCM_IRCP0ISR13_CP6_INT_MASK)

#define MSCM_IRCP0ISR13_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP0ISR13_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP0ISR13_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR13_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR13_CP7_INT_SHIFT)) & MSCM_IRCP0ISR13_CP7_INT_MASK)

#define MSCM_IRCP0ISR13_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP0ISR13_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP0ISR13_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR13_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR13_CP8_INT_SHIFT)) & MSCM_IRCP0ISR13_CP8_INT_MASK)

#define MSCM_IRCP0ISR13_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP0ISR13_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP0ISR13_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP0ISR13_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR13_CP9_INT_SHIFT)) & MSCM_IRCP0ISR13_CP9_INT_MASK)

#define MSCM_IRCP0ISR13_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP0ISR13_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP0ISR13_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP0ISR13_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR13_CP10_INT_SHIFT)) & MSCM_IRCP0ISR13_CP10_INT_MASK)

#define MSCM_IRCP0ISR13_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP0ISR13_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP0ISR13_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP0ISR13_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0ISR13_CP11_INT_SHIFT)) & MSCM_IRCP0ISR13_CP11_INT_MASK)
/*! @} */

/*! @name IRCP0IGR13 - Interrupt Router CP0 Interrupt13 Generation Register */
/*! @{ */

#define MSCM_IRCP0IGR13_INT_EN_MASK              (0x1U)
#define MSCM_IRCP0IGR13_INT_EN_SHIFT             (0U)
#define MSCM_IRCP0IGR13_INT_EN_WIDTH             (1U)
#define MSCM_IRCP0IGR13_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP0IGR13_INT_EN_SHIFT)) & MSCM_IRCP0IGR13_INT_EN_MASK)
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

#define MSCM_IRCP1ISR0_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP1ISR0_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP1ISR0_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR0_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR0_CP7_INT_SHIFT)) & MSCM_IRCP1ISR0_CP7_INT_MASK)

#define MSCM_IRCP1ISR0_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP1ISR0_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP1ISR0_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR0_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR0_CP8_INT_SHIFT)) & MSCM_IRCP1ISR0_CP8_INT_MASK)

#define MSCM_IRCP1ISR0_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP1ISR0_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP1ISR0_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR0_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR0_CP9_INT_SHIFT)) & MSCM_IRCP1ISR0_CP9_INT_MASK)

#define MSCM_IRCP1ISR0_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP1ISR0_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP1ISR0_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR0_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR0_CP10_INT_SHIFT)) & MSCM_IRCP1ISR0_CP10_INT_MASK)

#define MSCM_IRCP1ISR0_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP1ISR0_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP1ISR0_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR0_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR0_CP11_INT_SHIFT)) & MSCM_IRCP1ISR0_CP11_INT_MASK)
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

#define MSCM_IRCP1ISR1_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP1ISR1_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP1ISR1_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR1_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR1_CP7_INT_SHIFT)) & MSCM_IRCP1ISR1_CP7_INT_MASK)

#define MSCM_IRCP1ISR1_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP1ISR1_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP1ISR1_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR1_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR1_CP8_INT_SHIFT)) & MSCM_IRCP1ISR1_CP8_INT_MASK)

#define MSCM_IRCP1ISR1_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP1ISR1_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP1ISR1_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR1_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR1_CP9_INT_SHIFT)) & MSCM_IRCP1ISR1_CP9_INT_MASK)

#define MSCM_IRCP1ISR1_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP1ISR1_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP1ISR1_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR1_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR1_CP10_INT_SHIFT)) & MSCM_IRCP1ISR1_CP10_INT_MASK)

#define MSCM_IRCP1ISR1_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP1ISR1_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP1ISR1_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR1_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR1_CP11_INT_SHIFT)) & MSCM_IRCP1ISR1_CP11_INT_MASK)
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

#define MSCM_IRCP1ISR2_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP1ISR2_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP1ISR2_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR2_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR2_CP7_INT_SHIFT)) & MSCM_IRCP1ISR2_CP7_INT_MASK)

#define MSCM_IRCP1ISR2_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP1ISR2_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP1ISR2_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR2_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR2_CP8_INT_SHIFT)) & MSCM_IRCP1ISR2_CP8_INT_MASK)

#define MSCM_IRCP1ISR2_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP1ISR2_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP1ISR2_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR2_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR2_CP9_INT_SHIFT)) & MSCM_IRCP1ISR2_CP9_INT_MASK)

#define MSCM_IRCP1ISR2_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP1ISR2_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP1ISR2_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR2_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR2_CP10_INT_SHIFT)) & MSCM_IRCP1ISR2_CP10_INT_MASK)

#define MSCM_IRCP1ISR2_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP1ISR2_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP1ISR2_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR2_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR2_CP11_INT_SHIFT)) & MSCM_IRCP1ISR2_CP11_INT_MASK)
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

/*! @name IRCP1ISR5 - Interrupt Router CP1 Interrupt5 Status Register */
/*! @{ */

#define MSCM_IRCP1ISR5_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP1ISR5_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP1ISR5_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR5_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR5_CP0_INT_SHIFT)) & MSCM_IRCP1ISR5_CP0_INT_MASK)

#define MSCM_IRCP1ISR5_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP1ISR5_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP1ISR5_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR5_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR5_CP1_INT_SHIFT)) & MSCM_IRCP1ISR5_CP1_INT_MASK)

#define MSCM_IRCP1ISR5_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP1ISR5_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP1ISR5_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR5_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR5_CP2_INT_SHIFT)) & MSCM_IRCP1ISR5_CP2_INT_MASK)

#define MSCM_IRCP1ISR5_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP1ISR5_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP1ISR5_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR5_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR5_CP3_INT_SHIFT)) & MSCM_IRCP1ISR5_CP3_INT_MASK)

#define MSCM_IRCP1ISR5_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP1ISR5_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP1ISR5_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR5_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR5_CP4_INT_SHIFT)) & MSCM_IRCP1ISR5_CP4_INT_MASK)

#define MSCM_IRCP1ISR5_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP1ISR5_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP1ISR5_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR5_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR5_CP5_INT_SHIFT)) & MSCM_IRCP1ISR5_CP5_INT_MASK)

#define MSCM_IRCP1ISR5_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP1ISR5_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP1ISR5_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR5_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR5_CP6_INT_SHIFT)) & MSCM_IRCP1ISR5_CP6_INT_MASK)

#define MSCM_IRCP1ISR5_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP1ISR5_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP1ISR5_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR5_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR5_CP7_INT_SHIFT)) & MSCM_IRCP1ISR5_CP7_INT_MASK)

#define MSCM_IRCP1ISR5_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP1ISR5_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP1ISR5_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR5_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR5_CP8_INT_SHIFT)) & MSCM_IRCP1ISR5_CP8_INT_MASK)

#define MSCM_IRCP1ISR5_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP1ISR5_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP1ISR5_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR5_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR5_CP9_INT_SHIFT)) & MSCM_IRCP1ISR5_CP9_INT_MASK)

#define MSCM_IRCP1ISR5_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP1ISR5_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP1ISR5_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR5_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR5_CP10_INT_SHIFT)) & MSCM_IRCP1ISR5_CP10_INT_MASK)

#define MSCM_IRCP1ISR5_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP1ISR5_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP1ISR5_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR5_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR5_CP11_INT_SHIFT)) & MSCM_IRCP1ISR5_CP11_INT_MASK)
/*! @} */

/*! @name IRCP1IGR5 - Interrupt Router CP1 Interrupt5 Generation Register */
/*! @{ */

#define MSCM_IRCP1IGR5_INT_EN_MASK               (0x1U)
#define MSCM_IRCP1IGR5_INT_EN_SHIFT              (0U)
#define MSCM_IRCP1IGR5_INT_EN_WIDTH              (1U)
#define MSCM_IRCP1IGR5_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR5_INT_EN_SHIFT)) & MSCM_IRCP1IGR5_INT_EN_MASK)
/*! @} */

/*! @name IRCP1ISR6 - Interrupt Router CP1 Interrupt6 Status Register */
/*! @{ */

#define MSCM_IRCP1ISR6_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP1ISR6_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP1ISR6_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR6_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR6_CP0_INT_SHIFT)) & MSCM_IRCP1ISR6_CP0_INT_MASK)

#define MSCM_IRCP1ISR6_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP1ISR6_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP1ISR6_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR6_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR6_CP1_INT_SHIFT)) & MSCM_IRCP1ISR6_CP1_INT_MASK)

#define MSCM_IRCP1ISR6_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP1ISR6_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP1ISR6_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR6_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR6_CP2_INT_SHIFT)) & MSCM_IRCP1ISR6_CP2_INT_MASK)

#define MSCM_IRCP1ISR6_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP1ISR6_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP1ISR6_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR6_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR6_CP3_INT_SHIFT)) & MSCM_IRCP1ISR6_CP3_INT_MASK)

#define MSCM_IRCP1ISR6_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP1ISR6_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP1ISR6_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR6_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR6_CP4_INT_SHIFT)) & MSCM_IRCP1ISR6_CP4_INT_MASK)

#define MSCM_IRCP1ISR6_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP1ISR6_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP1ISR6_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR6_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR6_CP5_INT_SHIFT)) & MSCM_IRCP1ISR6_CP5_INT_MASK)

#define MSCM_IRCP1ISR6_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP1ISR6_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP1ISR6_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR6_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR6_CP6_INT_SHIFT)) & MSCM_IRCP1ISR6_CP6_INT_MASK)

#define MSCM_IRCP1ISR6_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP1ISR6_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP1ISR6_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR6_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR6_CP7_INT_SHIFT)) & MSCM_IRCP1ISR6_CP7_INT_MASK)

#define MSCM_IRCP1ISR6_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP1ISR6_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP1ISR6_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR6_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR6_CP8_INT_SHIFT)) & MSCM_IRCP1ISR6_CP8_INT_MASK)

#define MSCM_IRCP1ISR6_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP1ISR6_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP1ISR6_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR6_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR6_CP9_INT_SHIFT)) & MSCM_IRCP1ISR6_CP9_INT_MASK)

#define MSCM_IRCP1ISR6_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP1ISR6_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP1ISR6_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR6_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR6_CP10_INT_SHIFT)) & MSCM_IRCP1ISR6_CP10_INT_MASK)

#define MSCM_IRCP1ISR6_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP1ISR6_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP1ISR6_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR6_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR6_CP11_INT_SHIFT)) & MSCM_IRCP1ISR6_CP11_INT_MASK)
/*! @} */

/*! @name IRCP1IGR6 - Interrupt Router CP1 Interrupt6 Generation Register */
/*! @{ */

#define MSCM_IRCP1IGR6_INT_EN_MASK               (0x1U)
#define MSCM_IRCP1IGR6_INT_EN_SHIFT              (0U)
#define MSCM_IRCP1IGR6_INT_EN_WIDTH              (1U)
#define MSCM_IRCP1IGR6_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR6_INT_EN_SHIFT)) & MSCM_IRCP1IGR6_INT_EN_MASK)
/*! @} */

/*! @name IRCP1ISR7 - Interrupt Router CP1 Interrupt7 Status Register */
/*! @{ */

#define MSCM_IRCP1ISR7_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP1ISR7_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP1ISR7_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR7_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR7_CP0_INT_SHIFT)) & MSCM_IRCP1ISR7_CP0_INT_MASK)

#define MSCM_IRCP1ISR7_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP1ISR7_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP1ISR7_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR7_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR7_CP1_INT_SHIFT)) & MSCM_IRCP1ISR7_CP1_INT_MASK)

#define MSCM_IRCP1ISR7_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP1ISR7_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP1ISR7_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR7_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR7_CP2_INT_SHIFT)) & MSCM_IRCP1ISR7_CP2_INT_MASK)

#define MSCM_IRCP1ISR7_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP1ISR7_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP1ISR7_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR7_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR7_CP3_INT_SHIFT)) & MSCM_IRCP1ISR7_CP3_INT_MASK)

#define MSCM_IRCP1ISR7_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP1ISR7_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP1ISR7_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR7_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR7_CP4_INT_SHIFT)) & MSCM_IRCP1ISR7_CP4_INT_MASK)

#define MSCM_IRCP1ISR7_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP1ISR7_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP1ISR7_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR7_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR7_CP5_INT_SHIFT)) & MSCM_IRCP1ISR7_CP5_INT_MASK)

#define MSCM_IRCP1ISR7_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP1ISR7_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP1ISR7_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR7_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR7_CP6_INT_SHIFT)) & MSCM_IRCP1ISR7_CP6_INT_MASK)

#define MSCM_IRCP1ISR7_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP1ISR7_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP1ISR7_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR7_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR7_CP7_INT_SHIFT)) & MSCM_IRCP1ISR7_CP7_INT_MASK)

#define MSCM_IRCP1ISR7_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP1ISR7_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP1ISR7_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR7_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR7_CP8_INT_SHIFT)) & MSCM_IRCP1ISR7_CP8_INT_MASK)

#define MSCM_IRCP1ISR7_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP1ISR7_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP1ISR7_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR7_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR7_CP9_INT_SHIFT)) & MSCM_IRCP1ISR7_CP9_INT_MASK)

#define MSCM_IRCP1ISR7_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP1ISR7_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP1ISR7_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR7_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR7_CP10_INT_SHIFT)) & MSCM_IRCP1ISR7_CP10_INT_MASK)

#define MSCM_IRCP1ISR7_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP1ISR7_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP1ISR7_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR7_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR7_CP11_INT_SHIFT)) & MSCM_IRCP1ISR7_CP11_INT_MASK)
/*! @} */

/*! @name IRCP1IGR7 - Interrupt Router CP1 Interrupt7 Generation Register */
/*! @{ */

#define MSCM_IRCP1IGR7_INT_EN_MASK               (0x1U)
#define MSCM_IRCP1IGR7_INT_EN_SHIFT              (0U)
#define MSCM_IRCP1IGR7_INT_EN_WIDTH              (1U)
#define MSCM_IRCP1IGR7_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR7_INT_EN_SHIFT)) & MSCM_IRCP1IGR7_INT_EN_MASK)
/*! @} */

/*! @name IRCP1ISR8 - Interrupt Router CP1 Interrupt8 Status Register */
/*! @{ */

#define MSCM_IRCP1ISR8_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP1ISR8_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP1ISR8_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR8_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR8_CP0_INT_SHIFT)) & MSCM_IRCP1ISR8_CP0_INT_MASK)

#define MSCM_IRCP1ISR8_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP1ISR8_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP1ISR8_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR8_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR8_CP1_INT_SHIFT)) & MSCM_IRCP1ISR8_CP1_INT_MASK)

#define MSCM_IRCP1ISR8_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP1ISR8_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP1ISR8_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR8_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR8_CP2_INT_SHIFT)) & MSCM_IRCP1ISR8_CP2_INT_MASK)

#define MSCM_IRCP1ISR8_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP1ISR8_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP1ISR8_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR8_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR8_CP3_INT_SHIFT)) & MSCM_IRCP1ISR8_CP3_INT_MASK)

#define MSCM_IRCP1ISR8_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP1ISR8_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP1ISR8_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR8_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR8_CP4_INT_SHIFT)) & MSCM_IRCP1ISR8_CP4_INT_MASK)

#define MSCM_IRCP1ISR8_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP1ISR8_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP1ISR8_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR8_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR8_CP5_INT_SHIFT)) & MSCM_IRCP1ISR8_CP5_INT_MASK)

#define MSCM_IRCP1ISR8_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP1ISR8_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP1ISR8_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR8_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR8_CP6_INT_SHIFT)) & MSCM_IRCP1ISR8_CP6_INT_MASK)

#define MSCM_IRCP1ISR8_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP1ISR8_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP1ISR8_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR8_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR8_CP7_INT_SHIFT)) & MSCM_IRCP1ISR8_CP7_INT_MASK)

#define MSCM_IRCP1ISR8_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP1ISR8_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP1ISR8_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR8_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR8_CP8_INT_SHIFT)) & MSCM_IRCP1ISR8_CP8_INT_MASK)

#define MSCM_IRCP1ISR8_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP1ISR8_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP1ISR8_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR8_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR8_CP9_INT_SHIFT)) & MSCM_IRCP1ISR8_CP9_INT_MASK)

#define MSCM_IRCP1ISR8_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP1ISR8_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP1ISR8_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR8_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR8_CP10_INT_SHIFT)) & MSCM_IRCP1ISR8_CP10_INT_MASK)

#define MSCM_IRCP1ISR8_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP1ISR8_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP1ISR8_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR8_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR8_CP11_INT_SHIFT)) & MSCM_IRCP1ISR8_CP11_INT_MASK)
/*! @} */

/*! @name IRCP1IGR8 - Interrupt Router CP1 Interrupt8 Generation Register */
/*! @{ */

#define MSCM_IRCP1IGR8_INT_EN_MASK               (0x1U)
#define MSCM_IRCP1IGR8_INT_EN_SHIFT              (0U)
#define MSCM_IRCP1IGR8_INT_EN_WIDTH              (1U)
#define MSCM_IRCP1IGR8_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR8_INT_EN_SHIFT)) & MSCM_IRCP1IGR8_INT_EN_MASK)
/*! @} */

/*! @name IRCP1ISR9 - Interrupt Router CP1 Interrupt9 Status Register */
/*! @{ */

#define MSCM_IRCP1ISR9_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP1ISR9_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP1ISR9_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR9_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR9_CP0_INT_SHIFT)) & MSCM_IRCP1ISR9_CP0_INT_MASK)

#define MSCM_IRCP1ISR9_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP1ISR9_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP1ISR9_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR9_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR9_CP1_INT_SHIFT)) & MSCM_IRCP1ISR9_CP1_INT_MASK)

#define MSCM_IRCP1ISR9_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP1ISR9_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP1ISR9_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR9_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR9_CP2_INT_SHIFT)) & MSCM_IRCP1ISR9_CP2_INT_MASK)

#define MSCM_IRCP1ISR9_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP1ISR9_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP1ISR9_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR9_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR9_CP3_INT_SHIFT)) & MSCM_IRCP1ISR9_CP3_INT_MASK)

#define MSCM_IRCP1ISR9_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP1ISR9_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP1ISR9_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR9_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR9_CP4_INT_SHIFT)) & MSCM_IRCP1ISR9_CP4_INT_MASK)

#define MSCM_IRCP1ISR9_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP1ISR9_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP1ISR9_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR9_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR9_CP5_INT_SHIFT)) & MSCM_IRCP1ISR9_CP5_INT_MASK)

#define MSCM_IRCP1ISR9_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP1ISR9_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP1ISR9_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR9_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR9_CP6_INT_SHIFT)) & MSCM_IRCP1ISR9_CP6_INT_MASK)

#define MSCM_IRCP1ISR9_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP1ISR9_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP1ISR9_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR9_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR9_CP7_INT_SHIFT)) & MSCM_IRCP1ISR9_CP7_INT_MASK)

#define MSCM_IRCP1ISR9_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP1ISR9_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP1ISR9_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR9_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR9_CP8_INT_SHIFT)) & MSCM_IRCP1ISR9_CP8_INT_MASK)

#define MSCM_IRCP1ISR9_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP1ISR9_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP1ISR9_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP1ISR9_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR9_CP9_INT_SHIFT)) & MSCM_IRCP1ISR9_CP9_INT_MASK)

#define MSCM_IRCP1ISR9_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP1ISR9_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP1ISR9_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR9_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR9_CP10_INT_SHIFT)) & MSCM_IRCP1ISR9_CP10_INT_MASK)

#define MSCM_IRCP1ISR9_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP1ISR9_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP1ISR9_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR9_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR9_CP11_INT_SHIFT)) & MSCM_IRCP1ISR9_CP11_INT_MASK)
/*! @} */

/*! @name IRCP1IGR9 - Interrupt Router CP1 Interrupt9 Generation Register */
/*! @{ */

#define MSCM_IRCP1IGR9_INT_EN_MASK               (0x1U)
#define MSCM_IRCP1IGR9_INT_EN_SHIFT              (0U)
#define MSCM_IRCP1IGR9_INT_EN_WIDTH              (1U)
#define MSCM_IRCP1IGR9_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR9_INT_EN_SHIFT)) & MSCM_IRCP1IGR9_INT_EN_MASK)
/*! @} */

/*! @name IRCP1ISR10 - Interrupt Router CP1 Interrupt10 Status Register */
/*! @{ */

#define MSCM_IRCP1ISR10_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP1ISR10_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP1ISR10_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR10_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR10_CP0_INT_SHIFT)) & MSCM_IRCP1ISR10_CP0_INT_MASK)

#define MSCM_IRCP1ISR10_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP1ISR10_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP1ISR10_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR10_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR10_CP1_INT_SHIFT)) & MSCM_IRCP1ISR10_CP1_INT_MASK)

#define MSCM_IRCP1ISR10_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP1ISR10_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP1ISR10_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR10_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR10_CP2_INT_SHIFT)) & MSCM_IRCP1ISR10_CP2_INT_MASK)

#define MSCM_IRCP1ISR10_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP1ISR10_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP1ISR10_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR10_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR10_CP3_INT_SHIFT)) & MSCM_IRCP1ISR10_CP3_INT_MASK)

#define MSCM_IRCP1ISR10_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP1ISR10_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP1ISR10_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR10_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR10_CP4_INT_SHIFT)) & MSCM_IRCP1ISR10_CP4_INT_MASK)

#define MSCM_IRCP1ISR10_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP1ISR10_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP1ISR10_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR10_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR10_CP5_INT_SHIFT)) & MSCM_IRCP1ISR10_CP5_INT_MASK)

#define MSCM_IRCP1ISR10_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP1ISR10_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP1ISR10_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR10_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR10_CP6_INT_SHIFT)) & MSCM_IRCP1ISR10_CP6_INT_MASK)

#define MSCM_IRCP1ISR10_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP1ISR10_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP1ISR10_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR10_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR10_CP7_INT_SHIFT)) & MSCM_IRCP1ISR10_CP7_INT_MASK)

#define MSCM_IRCP1ISR10_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP1ISR10_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP1ISR10_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR10_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR10_CP8_INT_SHIFT)) & MSCM_IRCP1ISR10_CP8_INT_MASK)

#define MSCM_IRCP1ISR10_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP1ISR10_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP1ISR10_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR10_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR10_CP9_INT_SHIFT)) & MSCM_IRCP1ISR10_CP9_INT_MASK)

#define MSCM_IRCP1ISR10_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP1ISR10_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP1ISR10_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP1ISR10_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR10_CP10_INT_SHIFT)) & MSCM_IRCP1ISR10_CP10_INT_MASK)

#define MSCM_IRCP1ISR10_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP1ISR10_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP1ISR10_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP1ISR10_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR10_CP11_INT_SHIFT)) & MSCM_IRCP1ISR10_CP11_INT_MASK)
/*! @} */

/*! @name IRCP1IGR10 - Interrupt Router CP1 Interrupt10 Generation Register */
/*! @{ */

#define MSCM_IRCP1IGR10_INT_EN_MASK              (0x1U)
#define MSCM_IRCP1IGR10_INT_EN_SHIFT             (0U)
#define MSCM_IRCP1IGR10_INT_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR10_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR10_INT_EN_SHIFT)) & MSCM_IRCP1IGR10_INT_EN_MASK)
/*! @} */

/*! @name IRCP1ISR11 - Interrupt Router CP1 Interrupt11 Status Register */
/*! @{ */

#define MSCM_IRCP1ISR11_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP1ISR11_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP1ISR11_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR11_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR11_CP0_INT_SHIFT)) & MSCM_IRCP1ISR11_CP0_INT_MASK)

#define MSCM_IRCP1ISR11_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP1ISR11_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP1ISR11_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR11_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR11_CP1_INT_SHIFT)) & MSCM_IRCP1ISR11_CP1_INT_MASK)

#define MSCM_IRCP1ISR11_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP1ISR11_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP1ISR11_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR11_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR11_CP2_INT_SHIFT)) & MSCM_IRCP1ISR11_CP2_INT_MASK)

#define MSCM_IRCP1ISR11_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP1ISR11_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP1ISR11_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR11_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR11_CP3_INT_SHIFT)) & MSCM_IRCP1ISR11_CP3_INT_MASK)

#define MSCM_IRCP1ISR11_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP1ISR11_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP1ISR11_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR11_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR11_CP4_INT_SHIFT)) & MSCM_IRCP1ISR11_CP4_INT_MASK)

#define MSCM_IRCP1ISR11_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP1ISR11_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP1ISR11_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR11_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR11_CP5_INT_SHIFT)) & MSCM_IRCP1ISR11_CP5_INT_MASK)

#define MSCM_IRCP1ISR11_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP1ISR11_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP1ISR11_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR11_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR11_CP6_INT_SHIFT)) & MSCM_IRCP1ISR11_CP6_INT_MASK)

#define MSCM_IRCP1ISR11_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP1ISR11_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP1ISR11_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR11_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR11_CP7_INT_SHIFT)) & MSCM_IRCP1ISR11_CP7_INT_MASK)

#define MSCM_IRCP1ISR11_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP1ISR11_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP1ISR11_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR11_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR11_CP8_INT_SHIFT)) & MSCM_IRCP1ISR11_CP8_INT_MASK)

#define MSCM_IRCP1ISR11_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP1ISR11_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP1ISR11_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR11_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR11_CP9_INT_SHIFT)) & MSCM_IRCP1ISR11_CP9_INT_MASK)

#define MSCM_IRCP1ISR11_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP1ISR11_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP1ISR11_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP1ISR11_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR11_CP10_INT_SHIFT)) & MSCM_IRCP1ISR11_CP10_INT_MASK)

#define MSCM_IRCP1ISR11_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP1ISR11_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP1ISR11_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP1ISR11_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR11_CP11_INT_SHIFT)) & MSCM_IRCP1ISR11_CP11_INT_MASK)
/*! @} */

/*! @name IRCP1IGR11 - Interrupt Router CP1 Interrupt11 Generation Register */
/*! @{ */

#define MSCM_IRCP1IGR11_INT_EN_MASK              (0x1U)
#define MSCM_IRCP1IGR11_INT_EN_SHIFT             (0U)
#define MSCM_IRCP1IGR11_INT_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR11_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR11_INT_EN_SHIFT)) & MSCM_IRCP1IGR11_INT_EN_MASK)
/*! @} */

/*! @name IRCP1ISR12 - Interrupt Router CP1 Interrupt12 Status Register */
/*! @{ */

#define MSCM_IRCP1ISR12_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP1ISR12_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP1ISR12_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR12_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR12_CP0_INT_SHIFT)) & MSCM_IRCP1ISR12_CP0_INT_MASK)

#define MSCM_IRCP1ISR12_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP1ISR12_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP1ISR12_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR12_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR12_CP1_INT_SHIFT)) & MSCM_IRCP1ISR12_CP1_INT_MASK)

#define MSCM_IRCP1ISR12_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP1ISR12_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP1ISR12_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR12_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR12_CP2_INT_SHIFT)) & MSCM_IRCP1ISR12_CP2_INT_MASK)

#define MSCM_IRCP1ISR12_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP1ISR12_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP1ISR12_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR12_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR12_CP3_INT_SHIFT)) & MSCM_IRCP1ISR12_CP3_INT_MASK)

#define MSCM_IRCP1ISR12_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP1ISR12_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP1ISR12_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR12_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR12_CP4_INT_SHIFT)) & MSCM_IRCP1ISR12_CP4_INT_MASK)

#define MSCM_IRCP1ISR12_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP1ISR12_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP1ISR12_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR12_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR12_CP5_INT_SHIFT)) & MSCM_IRCP1ISR12_CP5_INT_MASK)

#define MSCM_IRCP1ISR12_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP1ISR12_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP1ISR12_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR12_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR12_CP6_INT_SHIFT)) & MSCM_IRCP1ISR12_CP6_INT_MASK)

#define MSCM_IRCP1ISR12_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP1ISR12_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP1ISR12_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR12_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR12_CP7_INT_SHIFT)) & MSCM_IRCP1ISR12_CP7_INT_MASK)

#define MSCM_IRCP1ISR12_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP1ISR12_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP1ISR12_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR12_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR12_CP8_INT_SHIFT)) & MSCM_IRCP1ISR12_CP8_INT_MASK)

#define MSCM_IRCP1ISR12_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP1ISR12_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP1ISR12_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR12_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR12_CP9_INT_SHIFT)) & MSCM_IRCP1ISR12_CP9_INT_MASK)

#define MSCM_IRCP1ISR12_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP1ISR12_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP1ISR12_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP1ISR12_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR12_CP10_INT_SHIFT)) & MSCM_IRCP1ISR12_CP10_INT_MASK)

#define MSCM_IRCP1ISR12_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP1ISR12_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP1ISR12_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP1ISR12_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR12_CP11_INT_SHIFT)) & MSCM_IRCP1ISR12_CP11_INT_MASK)
/*! @} */

/*! @name IRCP1IGR12 - Interrupt Router CP1 Interrupt12 Generation Register */
/*! @{ */

#define MSCM_IRCP1IGR12_INT_EN_MASK              (0x1U)
#define MSCM_IRCP1IGR12_INT_EN_SHIFT             (0U)
#define MSCM_IRCP1IGR12_INT_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR12_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR12_INT_EN_SHIFT)) & MSCM_IRCP1IGR12_INT_EN_MASK)
/*! @} */

/*! @name IRCP1ISR13 - Interrupt Router CP1 Interrupt13 Status Register */
/*! @{ */

#define MSCM_IRCP1ISR13_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP1ISR13_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP1ISR13_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR13_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR13_CP0_INT_SHIFT)) & MSCM_IRCP1ISR13_CP0_INT_MASK)

#define MSCM_IRCP1ISR13_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP1ISR13_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP1ISR13_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR13_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR13_CP1_INT_SHIFT)) & MSCM_IRCP1ISR13_CP1_INT_MASK)

#define MSCM_IRCP1ISR13_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP1ISR13_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP1ISR13_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR13_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR13_CP2_INT_SHIFT)) & MSCM_IRCP1ISR13_CP2_INT_MASK)

#define MSCM_IRCP1ISR13_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP1ISR13_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP1ISR13_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR13_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR13_CP3_INT_SHIFT)) & MSCM_IRCP1ISR13_CP3_INT_MASK)

#define MSCM_IRCP1ISR13_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP1ISR13_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP1ISR13_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR13_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR13_CP4_INT_SHIFT)) & MSCM_IRCP1ISR13_CP4_INT_MASK)

#define MSCM_IRCP1ISR13_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP1ISR13_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP1ISR13_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR13_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR13_CP5_INT_SHIFT)) & MSCM_IRCP1ISR13_CP5_INT_MASK)

#define MSCM_IRCP1ISR13_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP1ISR13_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP1ISR13_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR13_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR13_CP6_INT_SHIFT)) & MSCM_IRCP1ISR13_CP6_INT_MASK)

#define MSCM_IRCP1ISR13_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP1ISR13_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP1ISR13_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR13_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR13_CP7_INT_SHIFT)) & MSCM_IRCP1ISR13_CP7_INT_MASK)

#define MSCM_IRCP1ISR13_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP1ISR13_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP1ISR13_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR13_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR13_CP8_INT_SHIFT)) & MSCM_IRCP1ISR13_CP8_INT_MASK)

#define MSCM_IRCP1ISR13_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP1ISR13_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP1ISR13_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP1ISR13_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR13_CP9_INT_SHIFT)) & MSCM_IRCP1ISR13_CP9_INT_MASK)

#define MSCM_IRCP1ISR13_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP1ISR13_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP1ISR13_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP1ISR13_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR13_CP10_INT_SHIFT)) & MSCM_IRCP1ISR13_CP10_INT_MASK)

#define MSCM_IRCP1ISR13_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP1ISR13_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP1ISR13_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP1ISR13_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1ISR13_CP11_INT_SHIFT)) & MSCM_IRCP1ISR13_CP11_INT_MASK)
/*! @} */

/*! @name IRCP1IGR13 - Interrupt Router CP1 Interrupt13 Generation Register */
/*! @{ */

#define MSCM_IRCP1IGR13_INT_EN_MASK              (0x1U)
#define MSCM_IRCP1IGR13_INT_EN_SHIFT             (0U)
#define MSCM_IRCP1IGR13_INT_EN_WIDTH             (1U)
#define MSCM_IRCP1IGR13_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP1IGR13_INT_EN_SHIFT)) & MSCM_IRCP1IGR13_INT_EN_MASK)
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

#define MSCM_IRCP2ISR0_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP2ISR0_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP2ISR0_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR0_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR0_CP7_INT_SHIFT)) & MSCM_IRCP2ISR0_CP7_INT_MASK)

#define MSCM_IRCP2ISR0_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP2ISR0_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP2ISR0_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR0_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR0_CP8_INT_SHIFT)) & MSCM_IRCP2ISR0_CP8_INT_MASK)

#define MSCM_IRCP2ISR0_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP2ISR0_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP2ISR0_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR0_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR0_CP9_INT_SHIFT)) & MSCM_IRCP2ISR0_CP9_INT_MASK)

#define MSCM_IRCP2ISR0_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP2ISR0_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP2ISR0_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR0_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR0_CP10_INT_SHIFT)) & MSCM_IRCP2ISR0_CP10_INT_MASK)

#define MSCM_IRCP2ISR0_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP2ISR0_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP2ISR0_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR0_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR0_CP11_INT_SHIFT)) & MSCM_IRCP2ISR0_CP11_INT_MASK)
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

#define MSCM_IRCP2ISR1_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP2ISR1_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP2ISR1_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR1_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR1_CP7_INT_SHIFT)) & MSCM_IRCP2ISR1_CP7_INT_MASK)

#define MSCM_IRCP2ISR1_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP2ISR1_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP2ISR1_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR1_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR1_CP8_INT_SHIFT)) & MSCM_IRCP2ISR1_CP8_INT_MASK)

#define MSCM_IRCP2ISR1_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP2ISR1_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP2ISR1_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR1_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR1_CP9_INT_SHIFT)) & MSCM_IRCP2ISR1_CP9_INT_MASK)

#define MSCM_IRCP2ISR1_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP2ISR1_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP2ISR1_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR1_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR1_CP10_INT_SHIFT)) & MSCM_IRCP2ISR1_CP10_INT_MASK)

#define MSCM_IRCP2ISR1_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP2ISR1_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP2ISR1_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR1_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR1_CP11_INT_SHIFT)) & MSCM_IRCP2ISR1_CP11_INT_MASK)
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

#define MSCM_IRCP2ISR2_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP2ISR2_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP2ISR2_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR2_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR2_CP7_INT_SHIFT)) & MSCM_IRCP2ISR2_CP7_INT_MASK)

#define MSCM_IRCP2ISR2_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP2ISR2_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP2ISR2_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR2_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR2_CP8_INT_SHIFT)) & MSCM_IRCP2ISR2_CP8_INT_MASK)

#define MSCM_IRCP2ISR2_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP2ISR2_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP2ISR2_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR2_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR2_CP9_INT_SHIFT)) & MSCM_IRCP2ISR2_CP9_INT_MASK)

#define MSCM_IRCP2ISR2_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP2ISR2_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP2ISR2_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR2_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR2_CP10_INT_SHIFT)) & MSCM_IRCP2ISR2_CP10_INT_MASK)

#define MSCM_IRCP2ISR2_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP2ISR2_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP2ISR2_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR2_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR2_CP11_INT_SHIFT)) & MSCM_IRCP2ISR2_CP11_INT_MASK)
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

/*! @name IRCP2ISR5 - Interrupt Router CP2 Interrupt5 Status Register */
/*! @{ */

#define MSCM_IRCP2ISR5_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP2ISR5_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP2ISR5_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR5_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR5_CP0_INT_SHIFT)) & MSCM_IRCP2ISR5_CP0_INT_MASK)

#define MSCM_IRCP2ISR5_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP2ISR5_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP2ISR5_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR5_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR5_CP1_INT_SHIFT)) & MSCM_IRCP2ISR5_CP1_INT_MASK)

#define MSCM_IRCP2ISR5_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP2ISR5_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP2ISR5_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR5_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR5_CP2_INT_SHIFT)) & MSCM_IRCP2ISR5_CP2_INT_MASK)

#define MSCM_IRCP2ISR5_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP2ISR5_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP2ISR5_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR5_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR5_CP3_INT_SHIFT)) & MSCM_IRCP2ISR5_CP3_INT_MASK)

#define MSCM_IRCP2ISR5_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP2ISR5_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP2ISR5_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR5_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR5_CP4_INT_SHIFT)) & MSCM_IRCP2ISR5_CP4_INT_MASK)

#define MSCM_IRCP2ISR5_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP2ISR5_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP2ISR5_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR5_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR5_CP5_INT_SHIFT)) & MSCM_IRCP2ISR5_CP5_INT_MASK)

#define MSCM_IRCP2ISR5_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP2ISR5_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP2ISR5_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR5_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR5_CP6_INT_SHIFT)) & MSCM_IRCP2ISR5_CP6_INT_MASK)

#define MSCM_IRCP2ISR5_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP2ISR5_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP2ISR5_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR5_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR5_CP7_INT_SHIFT)) & MSCM_IRCP2ISR5_CP7_INT_MASK)

#define MSCM_IRCP2ISR5_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP2ISR5_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP2ISR5_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR5_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR5_CP8_INT_SHIFT)) & MSCM_IRCP2ISR5_CP8_INT_MASK)

#define MSCM_IRCP2ISR5_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP2ISR5_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP2ISR5_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR5_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR5_CP9_INT_SHIFT)) & MSCM_IRCP2ISR5_CP9_INT_MASK)

#define MSCM_IRCP2ISR5_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP2ISR5_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP2ISR5_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR5_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR5_CP10_INT_SHIFT)) & MSCM_IRCP2ISR5_CP10_INT_MASK)

#define MSCM_IRCP2ISR5_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP2ISR5_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP2ISR5_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR5_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR5_CP11_INT_SHIFT)) & MSCM_IRCP2ISR5_CP11_INT_MASK)
/*! @} */

/*! @name IRCP2IGR5 - Interrupt Router CP2 Interrupt5 Generation Register */
/*! @{ */

#define MSCM_IRCP2IGR5_INT_EN_MASK               (0x1U)
#define MSCM_IRCP2IGR5_INT_EN_SHIFT              (0U)
#define MSCM_IRCP2IGR5_INT_EN_WIDTH              (1U)
#define MSCM_IRCP2IGR5_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR5_INT_EN_SHIFT)) & MSCM_IRCP2IGR5_INT_EN_MASK)
/*! @} */

/*! @name IRCP2ISR6 - Interrupt Router CP2 Interrupt6 Status Register */
/*! @{ */

#define MSCM_IRCP2ISR6_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP2ISR6_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP2ISR6_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR6_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR6_CP0_INT_SHIFT)) & MSCM_IRCP2ISR6_CP0_INT_MASK)

#define MSCM_IRCP2ISR6_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP2ISR6_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP2ISR6_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR6_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR6_CP1_INT_SHIFT)) & MSCM_IRCP2ISR6_CP1_INT_MASK)

#define MSCM_IRCP2ISR6_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP2ISR6_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP2ISR6_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR6_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR6_CP2_INT_SHIFT)) & MSCM_IRCP2ISR6_CP2_INT_MASK)

#define MSCM_IRCP2ISR6_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP2ISR6_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP2ISR6_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR6_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR6_CP3_INT_SHIFT)) & MSCM_IRCP2ISR6_CP3_INT_MASK)

#define MSCM_IRCP2ISR6_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP2ISR6_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP2ISR6_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR6_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR6_CP4_INT_SHIFT)) & MSCM_IRCP2ISR6_CP4_INT_MASK)

#define MSCM_IRCP2ISR6_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP2ISR6_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP2ISR6_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR6_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR6_CP5_INT_SHIFT)) & MSCM_IRCP2ISR6_CP5_INT_MASK)

#define MSCM_IRCP2ISR6_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP2ISR6_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP2ISR6_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR6_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR6_CP6_INT_SHIFT)) & MSCM_IRCP2ISR6_CP6_INT_MASK)

#define MSCM_IRCP2ISR6_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP2ISR6_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP2ISR6_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR6_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR6_CP7_INT_SHIFT)) & MSCM_IRCP2ISR6_CP7_INT_MASK)

#define MSCM_IRCP2ISR6_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP2ISR6_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP2ISR6_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR6_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR6_CP8_INT_SHIFT)) & MSCM_IRCP2ISR6_CP8_INT_MASK)

#define MSCM_IRCP2ISR6_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP2ISR6_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP2ISR6_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR6_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR6_CP9_INT_SHIFT)) & MSCM_IRCP2ISR6_CP9_INT_MASK)

#define MSCM_IRCP2ISR6_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP2ISR6_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP2ISR6_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR6_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR6_CP10_INT_SHIFT)) & MSCM_IRCP2ISR6_CP10_INT_MASK)

#define MSCM_IRCP2ISR6_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP2ISR6_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP2ISR6_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR6_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR6_CP11_INT_SHIFT)) & MSCM_IRCP2ISR6_CP11_INT_MASK)
/*! @} */

/*! @name IRCP2IGR6 - Interrupt Router CP2 Interrupt6 Generation Register */
/*! @{ */

#define MSCM_IRCP2IGR6_INT_EN_MASK               (0x1U)
#define MSCM_IRCP2IGR6_INT_EN_SHIFT              (0U)
#define MSCM_IRCP2IGR6_INT_EN_WIDTH              (1U)
#define MSCM_IRCP2IGR6_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR6_INT_EN_SHIFT)) & MSCM_IRCP2IGR6_INT_EN_MASK)
/*! @} */

/*! @name IRCP2ISR7 - Interrupt Router CP2 Interrupt7 Status Register */
/*! @{ */

#define MSCM_IRCP2ISR7_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP2ISR7_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP2ISR7_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR7_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR7_CP0_INT_SHIFT)) & MSCM_IRCP2ISR7_CP0_INT_MASK)

#define MSCM_IRCP2ISR7_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP2ISR7_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP2ISR7_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR7_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR7_CP1_INT_SHIFT)) & MSCM_IRCP2ISR7_CP1_INT_MASK)

#define MSCM_IRCP2ISR7_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP2ISR7_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP2ISR7_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR7_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR7_CP2_INT_SHIFT)) & MSCM_IRCP2ISR7_CP2_INT_MASK)

#define MSCM_IRCP2ISR7_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP2ISR7_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP2ISR7_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR7_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR7_CP3_INT_SHIFT)) & MSCM_IRCP2ISR7_CP3_INT_MASK)

#define MSCM_IRCP2ISR7_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP2ISR7_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP2ISR7_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR7_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR7_CP4_INT_SHIFT)) & MSCM_IRCP2ISR7_CP4_INT_MASK)

#define MSCM_IRCP2ISR7_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP2ISR7_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP2ISR7_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR7_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR7_CP5_INT_SHIFT)) & MSCM_IRCP2ISR7_CP5_INT_MASK)

#define MSCM_IRCP2ISR7_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP2ISR7_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP2ISR7_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR7_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR7_CP6_INT_SHIFT)) & MSCM_IRCP2ISR7_CP6_INT_MASK)

#define MSCM_IRCP2ISR7_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP2ISR7_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP2ISR7_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR7_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR7_CP7_INT_SHIFT)) & MSCM_IRCP2ISR7_CP7_INT_MASK)

#define MSCM_IRCP2ISR7_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP2ISR7_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP2ISR7_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR7_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR7_CP8_INT_SHIFT)) & MSCM_IRCP2ISR7_CP8_INT_MASK)

#define MSCM_IRCP2ISR7_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP2ISR7_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP2ISR7_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR7_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR7_CP9_INT_SHIFT)) & MSCM_IRCP2ISR7_CP9_INT_MASK)

#define MSCM_IRCP2ISR7_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP2ISR7_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP2ISR7_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR7_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR7_CP10_INT_SHIFT)) & MSCM_IRCP2ISR7_CP10_INT_MASK)

#define MSCM_IRCP2ISR7_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP2ISR7_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP2ISR7_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR7_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR7_CP11_INT_SHIFT)) & MSCM_IRCP2ISR7_CP11_INT_MASK)
/*! @} */

/*! @name IRCP2IGR7 - Interrupt Router CP2 Interrupt7 Generation Register */
/*! @{ */

#define MSCM_IRCP2IGR7_INT_EN_MASK               (0x1U)
#define MSCM_IRCP2IGR7_INT_EN_SHIFT              (0U)
#define MSCM_IRCP2IGR7_INT_EN_WIDTH              (1U)
#define MSCM_IRCP2IGR7_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR7_INT_EN_SHIFT)) & MSCM_IRCP2IGR7_INT_EN_MASK)
/*! @} */

/*! @name IRCP2ISR8 - Interrupt Router CP2 Interrupt8 Status Register */
/*! @{ */

#define MSCM_IRCP2ISR8_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP2ISR8_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP2ISR8_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR8_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR8_CP0_INT_SHIFT)) & MSCM_IRCP2ISR8_CP0_INT_MASK)

#define MSCM_IRCP2ISR8_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP2ISR8_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP2ISR8_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR8_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR8_CP1_INT_SHIFT)) & MSCM_IRCP2ISR8_CP1_INT_MASK)

#define MSCM_IRCP2ISR8_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP2ISR8_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP2ISR8_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR8_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR8_CP2_INT_SHIFT)) & MSCM_IRCP2ISR8_CP2_INT_MASK)

#define MSCM_IRCP2ISR8_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP2ISR8_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP2ISR8_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR8_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR8_CP3_INT_SHIFT)) & MSCM_IRCP2ISR8_CP3_INT_MASK)

#define MSCM_IRCP2ISR8_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP2ISR8_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP2ISR8_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR8_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR8_CP4_INT_SHIFT)) & MSCM_IRCP2ISR8_CP4_INT_MASK)

#define MSCM_IRCP2ISR8_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP2ISR8_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP2ISR8_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR8_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR8_CP5_INT_SHIFT)) & MSCM_IRCP2ISR8_CP5_INT_MASK)

#define MSCM_IRCP2ISR8_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP2ISR8_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP2ISR8_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR8_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR8_CP6_INT_SHIFT)) & MSCM_IRCP2ISR8_CP6_INT_MASK)

#define MSCM_IRCP2ISR8_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP2ISR8_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP2ISR8_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR8_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR8_CP7_INT_SHIFT)) & MSCM_IRCP2ISR8_CP7_INT_MASK)

#define MSCM_IRCP2ISR8_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP2ISR8_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP2ISR8_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR8_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR8_CP8_INT_SHIFT)) & MSCM_IRCP2ISR8_CP8_INT_MASK)

#define MSCM_IRCP2ISR8_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP2ISR8_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP2ISR8_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR8_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR8_CP9_INT_SHIFT)) & MSCM_IRCP2ISR8_CP9_INT_MASK)

#define MSCM_IRCP2ISR8_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP2ISR8_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP2ISR8_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR8_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR8_CP10_INT_SHIFT)) & MSCM_IRCP2ISR8_CP10_INT_MASK)

#define MSCM_IRCP2ISR8_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP2ISR8_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP2ISR8_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR8_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR8_CP11_INT_SHIFT)) & MSCM_IRCP2ISR8_CP11_INT_MASK)
/*! @} */

/*! @name IRCP2IGR8 - Interrupt Router CP2 Interrupt8 Generation Register */
/*! @{ */

#define MSCM_IRCP2IGR8_INT_EN_MASK               (0x1U)
#define MSCM_IRCP2IGR8_INT_EN_SHIFT              (0U)
#define MSCM_IRCP2IGR8_INT_EN_WIDTH              (1U)
#define MSCM_IRCP2IGR8_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR8_INT_EN_SHIFT)) & MSCM_IRCP2IGR8_INT_EN_MASK)
/*! @} */

/*! @name IRCP2ISR9 - Interrupt Router CP2 Interrupt9 Status Register */
/*! @{ */

#define MSCM_IRCP2ISR9_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP2ISR9_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP2ISR9_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR9_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR9_CP0_INT_SHIFT)) & MSCM_IRCP2ISR9_CP0_INT_MASK)

#define MSCM_IRCP2ISR9_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP2ISR9_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP2ISR9_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR9_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR9_CP1_INT_SHIFT)) & MSCM_IRCP2ISR9_CP1_INT_MASK)

#define MSCM_IRCP2ISR9_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP2ISR9_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP2ISR9_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR9_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR9_CP2_INT_SHIFT)) & MSCM_IRCP2ISR9_CP2_INT_MASK)

#define MSCM_IRCP2ISR9_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP2ISR9_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP2ISR9_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR9_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR9_CP3_INT_SHIFT)) & MSCM_IRCP2ISR9_CP3_INT_MASK)

#define MSCM_IRCP2ISR9_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP2ISR9_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP2ISR9_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR9_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR9_CP4_INT_SHIFT)) & MSCM_IRCP2ISR9_CP4_INT_MASK)

#define MSCM_IRCP2ISR9_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP2ISR9_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP2ISR9_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR9_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR9_CP5_INT_SHIFT)) & MSCM_IRCP2ISR9_CP5_INT_MASK)

#define MSCM_IRCP2ISR9_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP2ISR9_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP2ISR9_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR9_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR9_CP6_INT_SHIFT)) & MSCM_IRCP2ISR9_CP6_INT_MASK)

#define MSCM_IRCP2ISR9_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP2ISR9_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP2ISR9_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR9_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR9_CP7_INT_SHIFT)) & MSCM_IRCP2ISR9_CP7_INT_MASK)

#define MSCM_IRCP2ISR9_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP2ISR9_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP2ISR9_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR9_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR9_CP8_INT_SHIFT)) & MSCM_IRCP2ISR9_CP8_INT_MASK)

#define MSCM_IRCP2ISR9_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP2ISR9_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP2ISR9_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP2ISR9_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR9_CP9_INT_SHIFT)) & MSCM_IRCP2ISR9_CP9_INT_MASK)

#define MSCM_IRCP2ISR9_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP2ISR9_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP2ISR9_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR9_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR9_CP10_INT_SHIFT)) & MSCM_IRCP2ISR9_CP10_INT_MASK)

#define MSCM_IRCP2ISR9_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP2ISR9_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP2ISR9_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR9_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR9_CP11_INT_SHIFT)) & MSCM_IRCP2ISR9_CP11_INT_MASK)
/*! @} */

/*! @name IRCP2IGR9 - Interrupt Router CP2 Interrupt9 Generation Register */
/*! @{ */

#define MSCM_IRCP2IGR9_INT_EN_MASK               (0x1U)
#define MSCM_IRCP2IGR9_INT_EN_SHIFT              (0U)
#define MSCM_IRCP2IGR9_INT_EN_WIDTH              (1U)
#define MSCM_IRCP2IGR9_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR9_INT_EN_SHIFT)) & MSCM_IRCP2IGR9_INT_EN_MASK)
/*! @} */

/*! @name IRCP2ISR10 - Interrupt Router CP2 Interrupt10 Status Register */
/*! @{ */

#define MSCM_IRCP2ISR10_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP2ISR10_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP2ISR10_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR10_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR10_CP0_INT_SHIFT)) & MSCM_IRCP2ISR10_CP0_INT_MASK)

#define MSCM_IRCP2ISR10_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP2ISR10_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP2ISR10_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR10_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR10_CP1_INT_SHIFT)) & MSCM_IRCP2ISR10_CP1_INT_MASK)

#define MSCM_IRCP2ISR10_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP2ISR10_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP2ISR10_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR10_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR10_CP2_INT_SHIFT)) & MSCM_IRCP2ISR10_CP2_INT_MASK)

#define MSCM_IRCP2ISR10_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP2ISR10_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP2ISR10_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR10_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR10_CP3_INT_SHIFT)) & MSCM_IRCP2ISR10_CP3_INT_MASK)

#define MSCM_IRCP2ISR10_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP2ISR10_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP2ISR10_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR10_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR10_CP4_INT_SHIFT)) & MSCM_IRCP2ISR10_CP4_INT_MASK)

#define MSCM_IRCP2ISR10_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP2ISR10_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP2ISR10_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR10_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR10_CP5_INT_SHIFT)) & MSCM_IRCP2ISR10_CP5_INT_MASK)

#define MSCM_IRCP2ISR10_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP2ISR10_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP2ISR10_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR10_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR10_CP6_INT_SHIFT)) & MSCM_IRCP2ISR10_CP6_INT_MASK)

#define MSCM_IRCP2ISR10_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP2ISR10_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP2ISR10_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR10_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR10_CP7_INT_SHIFT)) & MSCM_IRCP2ISR10_CP7_INT_MASK)

#define MSCM_IRCP2ISR10_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP2ISR10_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP2ISR10_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR10_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR10_CP8_INT_SHIFT)) & MSCM_IRCP2ISR10_CP8_INT_MASK)

#define MSCM_IRCP2ISR10_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP2ISR10_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP2ISR10_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR10_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR10_CP9_INT_SHIFT)) & MSCM_IRCP2ISR10_CP9_INT_MASK)

#define MSCM_IRCP2ISR10_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP2ISR10_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP2ISR10_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP2ISR10_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR10_CP10_INT_SHIFT)) & MSCM_IRCP2ISR10_CP10_INT_MASK)

#define MSCM_IRCP2ISR10_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP2ISR10_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP2ISR10_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP2ISR10_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR10_CP11_INT_SHIFT)) & MSCM_IRCP2ISR10_CP11_INT_MASK)
/*! @} */

/*! @name IRCP2IGR10 - Interrupt Router CP2 Interrupt10 Generation Register */
/*! @{ */

#define MSCM_IRCP2IGR10_INT_EN_MASK              (0x1U)
#define MSCM_IRCP2IGR10_INT_EN_SHIFT             (0U)
#define MSCM_IRCP2IGR10_INT_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR10_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR10_INT_EN_SHIFT)) & MSCM_IRCP2IGR10_INT_EN_MASK)
/*! @} */

/*! @name IRCP2ISR11 - Interrupt Router CP2 Interrupt11 Status Register */
/*! @{ */

#define MSCM_IRCP2ISR11_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP2ISR11_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP2ISR11_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR11_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR11_CP0_INT_SHIFT)) & MSCM_IRCP2ISR11_CP0_INT_MASK)

#define MSCM_IRCP2ISR11_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP2ISR11_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP2ISR11_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR11_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR11_CP1_INT_SHIFT)) & MSCM_IRCP2ISR11_CP1_INT_MASK)

#define MSCM_IRCP2ISR11_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP2ISR11_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP2ISR11_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR11_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR11_CP2_INT_SHIFT)) & MSCM_IRCP2ISR11_CP2_INT_MASK)

#define MSCM_IRCP2ISR11_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP2ISR11_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP2ISR11_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR11_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR11_CP3_INT_SHIFT)) & MSCM_IRCP2ISR11_CP3_INT_MASK)

#define MSCM_IRCP2ISR11_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP2ISR11_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP2ISR11_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR11_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR11_CP4_INT_SHIFT)) & MSCM_IRCP2ISR11_CP4_INT_MASK)

#define MSCM_IRCP2ISR11_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP2ISR11_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP2ISR11_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR11_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR11_CP5_INT_SHIFT)) & MSCM_IRCP2ISR11_CP5_INT_MASK)

#define MSCM_IRCP2ISR11_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP2ISR11_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP2ISR11_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR11_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR11_CP6_INT_SHIFT)) & MSCM_IRCP2ISR11_CP6_INT_MASK)

#define MSCM_IRCP2ISR11_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP2ISR11_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP2ISR11_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR11_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR11_CP7_INT_SHIFT)) & MSCM_IRCP2ISR11_CP7_INT_MASK)

#define MSCM_IRCP2ISR11_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP2ISR11_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP2ISR11_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR11_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR11_CP8_INT_SHIFT)) & MSCM_IRCP2ISR11_CP8_INT_MASK)

#define MSCM_IRCP2ISR11_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP2ISR11_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP2ISR11_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR11_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR11_CP9_INT_SHIFT)) & MSCM_IRCP2ISR11_CP9_INT_MASK)

#define MSCM_IRCP2ISR11_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP2ISR11_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP2ISR11_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP2ISR11_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR11_CP10_INT_SHIFT)) & MSCM_IRCP2ISR11_CP10_INT_MASK)

#define MSCM_IRCP2ISR11_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP2ISR11_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP2ISR11_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP2ISR11_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR11_CP11_INT_SHIFT)) & MSCM_IRCP2ISR11_CP11_INT_MASK)
/*! @} */

/*! @name IRCP2IGR11 - Interrupt Router CP2 Interrupt11 Generation Register */
/*! @{ */

#define MSCM_IRCP2IGR11_INT_EN_MASK              (0x1U)
#define MSCM_IRCP2IGR11_INT_EN_SHIFT             (0U)
#define MSCM_IRCP2IGR11_INT_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR11_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR11_INT_EN_SHIFT)) & MSCM_IRCP2IGR11_INT_EN_MASK)
/*! @} */

/*! @name IRCP2ISR12 - Interrupt Router CP2 Interrupt12 Status Register */
/*! @{ */

#define MSCM_IRCP2ISR12_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP2ISR12_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP2ISR12_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR12_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR12_CP0_INT_SHIFT)) & MSCM_IRCP2ISR12_CP0_INT_MASK)

#define MSCM_IRCP2ISR12_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP2ISR12_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP2ISR12_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR12_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR12_CP1_INT_SHIFT)) & MSCM_IRCP2ISR12_CP1_INT_MASK)

#define MSCM_IRCP2ISR12_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP2ISR12_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP2ISR12_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR12_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR12_CP2_INT_SHIFT)) & MSCM_IRCP2ISR12_CP2_INT_MASK)

#define MSCM_IRCP2ISR12_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP2ISR12_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP2ISR12_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR12_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR12_CP3_INT_SHIFT)) & MSCM_IRCP2ISR12_CP3_INT_MASK)

#define MSCM_IRCP2ISR12_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP2ISR12_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP2ISR12_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR12_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR12_CP4_INT_SHIFT)) & MSCM_IRCP2ISR12_CP4_INT_MASK)

#define MSCM_IRCP2ISR12_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP2ISR12_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP2ISR12_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR12_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR12_CP5_INT_SHIFT)) & MSCM_IRCP2ISR12_CP5_INT_MASK)

#define MSCM_IRCP2ISR12_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP2ISR12_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP2ISR12_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR12_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR12_CP6_INT_SHIFT)) & MSCM_IRCP2ISR12_CP6_INT_MASK)

#define MSCM_IRCP2ISR12_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP2ISR12_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP2ISR12_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR12_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR12_CP7_INT_SHIFT)) & MSCM_IRCP2ISR12_CP7_INT_MASK)

#define MSCM_IRCP2ISR12_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP2ISR12_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP2ISR12_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR12_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR12_CP8_INT_SHIFT)) & MSCM_IRCP2ISR12_CP8_INT_MASK)

#define MSCM_IRCP2ISR12_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP2ISR12_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP2ISR12_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR12_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR12_CP9_INT_SHIFT)) & MSCM_IRCP2ISR12_CP9_INT_MASK)

#define MSCM_IRCP2ISR12_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP2ISR12_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP2ISR12_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP2ISR12_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR12_CP10_INT_SHIFT)) & MSCM_IRCP2ISR12_CP10_INT_MASK)

#define MSCM_IRCP2ISR12_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP2ISR12_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP2ISR12_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP2ISR12_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR12_CP11_INT_SHIFT)) & MSCM_IRCP2ISR12_CP11_INT_MASK)
/*! @} */

/*! @name IRCP2IGR12 - Interrupt Router CP2 Interrupt12 Generation Register */
/*! @{ */

#define MSCM_IRCP2IGR12_INT_EN_MASK              (0x1U)
#define MSCM_IRCP2IGR12_INT_EN_SHIFT             (0U)
#define MSCM_IRCP2IGR12_INT_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR12_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR12_INT_EN_SHIFT)) & MSCM_IRCP2IGR12_INT_EN_MASK)
/*! @} */

/*! @name IRCP2ISR13 - Interrupt Router CP2 Interrupt13 Status Register */
/*! @{ */

#define MSCM_IRCP2ISR13_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP2ISR13_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP2ISR13_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR13_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR13_CP0_INT_SHIFT)) & MSCM_IRCP2ISR13_CP0_INT_MASK)

#define MSCM_IRCP2ISR13_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP2ISR13_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP2ISR13_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR13_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR13_CP1_INT_SHIFT)) & MSCM_IRCP2ISR13_CP1_INT_MASK)

#define MSCM_IRCP2ISR13_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP2ISR13_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP2ISR13_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR13_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR13_CP2_INT_SHIFT)) & MSCM_IRCP2ISR13_CP2_INT_MASK)

#define MSCM_IRCP2ISR13_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP2ISR13_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP2ISR13_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR13_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR13_CP3_INT_SHIFT)) & MSCM_IRCP2ISR13_CP3_INT_MASK)

#define MSCM_IRCP2ISR13_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP2ISR13_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP2ISR13_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR13_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR13_CP4_INT_SHIFT)) & MSCM_IRCP2ISR13_CP4_INT_MASK)

#define MSCM_IRCP2ISR13_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP2ISR13_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP2ISR13_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR13_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR13_CP5_INT_SHIFT)) & MSCM_IRCP2ISR13_CP5_INT_MASK)

#define MSCM_IRCP2ISR13_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP2ISR13_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP2ISR13_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR13_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR13_CP6_INT_SHIFT)) & MSCM_IRCP2ISR13_CP6_INT_MASK)

#define MSCM_IRCP2ISR13_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP2ISR13_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP2ISR13_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR13_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR13_CP7_INT_SHIFT)) & MSCM_IRCP2ISR13_CP7_INT_MASK)

#define MSCM_IRCP2ISR13_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP2ISR13_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP2ISR13_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR13_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR13_CP8_INT_SHIFT)) & MSCM_IRCP2ISR13_CP8_INT_MASK)

#define MSCM_IRCP2ISR13_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP2ISR13_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP2ISR13_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP2ISR13_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR13_CP9_INT_SHIFT)) & MSCM_IRCP2ISR13_CP9_INT_MASK)

#define MSCM_IRCP2ISR13_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP2ISR13_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP2ISR13_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP2ISR13_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR13_CP10_INT_SHIFT)) & MSCM_IRCP2ISR13_CP10_INT_MASK)

#define MSCM_IRCP2ISR13_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP2ISR13_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP2ISR13_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP2ISR13_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2ISR13_CP11_INT_SHIFT)) & MSCM_IRCP2ISR13_CP11_INT_MASK)
/*! @} */

/*! @name IRCP2IGR13 - Interrupt Router CP2 Interrupt13 Generation Register */
/*! @{ */

#define MSCM_IRCP2IGR13_INT_EN_MASK              (0x1U)
#define MSCM_IRCP2IGR13_INT_EN_SHIFT             (0U)
#define MSCM_IRCP2IGR13_INT_EN_WIDTH             (1U)
#define MSCM_IRCP2IGR13_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP2IGR13_INT_EN_SHIFT)) & MSCM_IRCP2IGR13_INT_EN_MASK)
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

#define MSCM_IRCP3ISR0_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP3ISR0_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP3ISR0_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR0_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR0_CP7_INT_SHIFT)) & MSCM_IRCP3ISR0_CP7_INT_MASK)

#define MSCM_IRCP3ISR0_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP3ISR0_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP3ISR0_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR0_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR0_CP8_INT_SHIFT)) & MSCM_IRCP3ISR0_CP8_INT_MASK)

#define MSCM_IRCP3ISR0_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP3ISR0_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP3ISR0_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR0_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR0_CP9_INT_SHIFT)) & MSCM_IRCP3ISR0_CP9_INT_MASK)

#define MSCM_IRCP3ISR0_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP3ISR0_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP3ISR0_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR0_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR0_CP10_INT_SHIFT)) & MSCM_IRCP3ISR0_CP10_INT_MASK)

#define MSCM_IRCP3ISR0_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP3ISR0_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP3ISR0_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR0_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR0_CP11_INT_SHIFT)) & MSCM_IRCP3ISR0_CP11_INT_MASK)
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

#define MSCM_IRCP3ISR1_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP3ISR1_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP3ISR1_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR1_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR1_CP7_INT_SHIFT)) & MSCM_IRCP3ISR1_CP7_INT_MASK)

#define MSCM_IRCP3ISR1_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP3ISR1_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP3ISR1_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR1_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR1_CP8_INT_SHIFT)) & MSCM_IRCP3ISR1_CP8_INT_MASK)

#define MSCM_IRCP3ISR1_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP3ISR1_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP3ISR1_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR1_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR1_CP9_INT_SHIFT)) & MSCM_IRCP3ISR1_CP9_INT_MASK)

#define MSCM_IRCP3ISR1_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP3ISR1_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP3ISR1_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR1_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR1_CP10_INT_SHIFT)) & MSCM_IRCP3ISR1_CP10_INT_MASK)

#define MSCM_IRCP3ISR1_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP3ISR1_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP3ISR1_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR1_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR1_CP11_INT_SHIFT)) & MSCM_IRCP3ISR1_CP11_INT_MASK)
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

#define MSCM_IRCP3ISR2_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP3ISR2_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP3ISR2_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR2_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR2_CP7_INT_SHIFT)) & MSCM_IRCP3ISR2_CP7_INT_MASK)

#define MSCM_IRCP3ISR2_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP3ISR2_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP3ISR2_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR2_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR2_CP8_INT_SHIFT)) & MSCM_IRCP3ISR2_CP8_INT_MASK)

#define MSCM_IRCP3ISR2_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP3ISR2_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP3ISR2_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR2_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR2_CP9_INT_SHIFT)) & MSCM_IRCP3ISR2_CP9_INT_MASK)

#define MSCM_IRCP3ISR2_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP3ISR2_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP3ISR2_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR2_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR2_CP10_INT_SHIFT)) & MSCM_IRCP3ISR2_CP10_INT_MASK)

#define MSCM_IRCP3ISR2_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP3ISR2_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP3ISR2_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR2_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR2_CP11_INT_SHIFT)) & MSCM_IRCP3ISR2_CP11_INT_MASK)
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

/*! @name IRCP3ISR5 - Interrupt Router CP3 Interrupt5 Status Register */
/*! @{ */

#define MSCM_IRCP3ISR5_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP3ISR5_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP3ISR5_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR5_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR5_CP0_INT_SHIFT)) & MSCM_IRCP3ISR5_CP0_INT_MASK)

#define MSCM_IRCP3ISR5_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP3ISR5_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP3ISR5_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR5_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR5_CP1_INT_SHIFT)) & MSCM_IRCP3ISR5_CP1_INT_MASK)

#define MSCM_IRCP3ISR5_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP3ISR5_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP3ISR5_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR5_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR5_CP2_INT_SHIFT)) & MSCM_IRCP3ISR5_CP2_INT_MASK)

#define MSCM_IRCP3ISR5_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP3ISR5_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP3ISR5_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR5_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR5_CP3_INT_SHIFT)) & MSCM_IRCP3ISR5_CP3_INT_MASK)

#define MSCM_IRCP3ISR5_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP3ISR5_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP3ISR5_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR5_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR5_CP4_INT_SHIFT)) & MSCM_IRCP3ISR5_CP4_INT_MASK)

#define MSCM_IRCP3ISR5_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP3ISR5_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP3ISR5_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR5_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR5_CP5_INT_SHIFT)) & MSCM_IRCP3ISR5_CP5_INT_MASK)

#define MSCM_IRCP3ISR5_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP3ISR5_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP3ISR5_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR5_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR5_CP6_INT_SHIFT)) & MSCM_IRCP3ISR5_CP6_INT_MASK)

#define MSCM_IRCP3ISR5_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP3ISR5_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP3ISR5_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR5_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR5_CP7_INT_SHIFT)) & MSCM_IRCP3ISR5_CP7_INT_MASK)

#define MSCM_IRCP3ISR5_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP3ISR5_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP3ISR5_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR5_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR5_CP8_INT_SHIFT)) & MSCM_IRCP3ISR5_CP8_INT_MASK)

#define MSCM_IRCP3ISR5_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP3ISR5_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP3ISR5_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR5_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR5_CP9_INT_SHIFT)) & MSCM_IRCP3ISR5_CP9_INT_MASK)

#define MSCM_IRCP3ISR5_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP3ISR5_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP3ISR5_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR5_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR5_CP10_INT_SHIFT)) & MSCM_IRCP3ISR5_CP10_INT_MASK)

#define MSCM_IRCP3ISR5_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP3ISR5_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP3ISR5_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR5_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR5_CP11_INT_SHIFT)) & MSCM_IRCP3ISR5_CP11_INT_MASK)
/*! @} */

/*! @name IRCP3IGR5 - Interrupt Router CP3 Interrupt5 Generation Register */
/*! @{ */

#define MSCM_IRCP3IGR5_INT_EN_MASK               (0x1U)
#define MSCM_IRCP3IGR5_INT_EN_SHIFT              (0U)
#define MSCM_IRCP3IGR5_INT_EN_WIDTH              (1U)
#define MSCM_IRCP3IGR5_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR5_INT_EN_SHIFT)) & MSCM_IRCP3IGR5_INT_EN_MASK)
/*! @} */

/*! @name IRCP3ISR6 - Interrupt Router CP3 Interrupt6 Status Register */
/*! @{ */

#define MSCM_IRCP3ISR6_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP3ISR6_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP3ISR6_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR6_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR6_CP0_INT_SHIFT)) & MSCM_IRCP3ISR6_CP0_INT_MASK)

#define MSCM_IRCP3ISR6_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP3ISR6_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP3ISR6_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR6_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR6_CP1_INT_SHIFT)) & MSCM_IRCP3ISR6_CP1_INT_MASK)

#define MSCM_IRCP3ISR6_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP3ISR6_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP3ISR6_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR6_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR6_CP2_INT_SHIFT)) & MSCM_IRCP3ISR6_CP2_INT_MASK)

#define MSCM_IRCP3ISR6_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP3ISR6_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP3ISR6_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR6_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR6_CP3_INT_SHIFT)) & MSCM_IRCP3ISR6_CP3_INT_MASK)

#define MSCM_IRCP3ISR6_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP3ISR6_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP3ISR6_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR6_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR6_CP4_INT_SHIFT)) & MSCM_IRCP3ISR6_CP4_INT_MASK)

#define MSCM_IRCP3ISR6_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP3ISR6_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP3ISR6_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR6_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR6_CP5_INT_SHIFT)) & MSCM_IRCP3ISR6_CP5_INT_MASK)

#define MSCM_IRCP3ISR6_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP3ISR6_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP3ISR6_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR6_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR6_CP6_INT_SHIFT)) & MSCM_IRCP3ISR6_CP6_INT_MASK)

#define MSCM_IRCP3ISR6_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP3ISR6_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP3ISR6_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR6_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR6_CP7_INT_SHIFT)) & MSCM_IRCP3ISR6_CP7_INT_MASK)

#define MSCM_IRCP3ISR6_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP3ISR6_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP3ISR6_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR6_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR6_CP8_INT_SHIFT)) & MSCM_IRCP3ISR6_CP8_INT_MASK)

#define MSCM_IRCP3ISR6_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP3ISR6_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP3ISR6_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR6_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR6_CP9_INT_SHIFT)) & MSCM_IRCP3ISR6_CP9_INT_MASK)

#define MSCM_IRCP3ISR6_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP3ISR6_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP3ISR6_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR6_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR6_CP10_INT_SHIFT)) & MSCM_IRCP3ISR6_CP10_INT_MASK)

#define MSCM_IRCP3ISR6_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP3ISR6_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP3ISR6_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR6_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR6_CP11_INT_SHIFT)) & MSCM_IRCP3ISR6_CP11_INT_MASK)
/*! @} */

/*! @name IRCP3IGR6 - Interrupt Router CP3 Interrupt6 Generation Register */
/*! @{ */

#define MSCM_IRCP3IGR6_INT_EN_MASK               (0x1U)
#define MSCM_IRCP3IGR6_INT_EN_SHIFT              (0U)
#define MSCM_IRCP3IGR6_INT_EN_WIDTH              (1U)
#define MSCM_IRCP3IGR6_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR6_INT_EN_SHIFT)) & MSCM_IRCP3IGR6_INT_EN_MASK)
/*! @} */

/*! @name IRCP3ISR7 - Interrupt Router CP3 Interrupt7 Status Register */
/*! @{ */

#define MSCM_IRCP3ISR7_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP3ISR7_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP3ISR7_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR7_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR7_CP0_INT_SHIFT)) & MSCM_IRCP3ISR7_CP0_INT_MASK)

#define MSCM_IRCP3ISR7_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP3ISR7_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP3ISR7_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR7_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR7_CP1_INT_SHIFT)) & MSCM_IRCP3ISR7_CP1_INT_MASK)

#define MSCM_IRCP3ISR7_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP3ISR7_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP3ISR7_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR7_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR7_CP2_INT_SHIFT)) & MSCM_IRCP3ISR7_CP2_INT_MASK)

#define MSCM_IRCP3ISR7_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP3ISR7_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP3ISR7_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR7_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR7_CP3_INT_SHIFT)) & MSCM_IRCP3ISR7_CP3_INT_MASK)

#define MSCM_IRCP3ISR7_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP3ISR7_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP3ISR7_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR7_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR7_CP4_INT_SHIFT)) & MSCM_IRCP3ISR7_CP4_INT_MASK)

#define MSCM_IRCP3ISR7_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP3ISR7_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP3ISR7_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR7_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR7_CP5_INT_SHIFT)) & MSCM_IRCP3ISR7_CP5_INT_MASK)

#define MSCM_IRCP3ISR7_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP3ISR7_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP3ISR7_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR7_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR7_CP6_INT_SHIFT)) & MSCM_IRCP3ISR7_CP6_INT_MASK)

#define MSCM_IRCP3ISR7_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP3ISR7_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP3ISR7_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR7_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR7_CP7_INT_SHIFT)) & MSCM_IRCP3ISR7_CP7_INT_MASK)

#define MSCM_IRCP3ISR7_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP3ISR7_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP3ISR7_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR7_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR7_CP8_INT_SHIFT)) & MSCM_IRCP3ISR7_CP8_INT_MASK)

#define MSCM_IRCP3ISR7_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP3ISR7_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP3ISR7_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR7_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR7_CP9_INT_SHIFT)) & MSCM_IRCP3ISR7_CP9_INT_MASK)

#define MSCM_IRCP3ISR7_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP3ISR7_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP3ISR7_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR7_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR7_CP10_INT_SHIFT)) & MSCM_IRCP3ISR7_CP10_INT_MASK)

#define MSCM_IRCP3ISR7_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP3ISR7_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP3ISR7_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR7_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR7_CP11_INT_SHIFT)) & MSCM_IRCP3ISR7_CP11_INT_MASK)
/*! @} */

/*! @name IRCP3IGR7 - Interrupt Router CP3 Interrupt7 Generation Register */
/*! @{ */

#define MSCM_IRCP3IGR7_INT_EN_MASK               (0x1U)
#define MSCM_IRCP3IGR7_INT_EN_SHIFT              (0U)
#define MSCM_IRCP3IGR7_INT_EN_WIDTH              (1U)
#define MSCM_IRCP3IGR7_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR7_INT_EN_SHIFT)) & MSCM_IRCP3IGR7_INT_EN_MASK)
/*! @} */

/*! @name IRCP3ISR8 - Interrupt Router CP3 Interrupt8 Status Register */
/*! @{ */

#define MSCM_IRCP3ISR8_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP3ISR8_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP3ISR8_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR8_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR8_CP0_INT_SHIFT)) & MSCM_IRCP3ISR8_CP0_INT_MASK)

#define MSCM_IRCP3ISR8_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP3ISR8_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP3ISR8_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR8_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR8_CP1_INT_SHIFT)) & MSCM_IRCP3ISR8_CP1_INT_MASK)

#define MSCM_IRCP3ISR8_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP3ISR8_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP3ISR8_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR8_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR8_CP2_INT_SHIFT)) & MSCM_IRCP3ISR8_CP2_INT_MASK)

#define MSCM_IRCP3ISR8_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP3ISR8_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP3ISR8_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR8_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR8_CP3_INT_SHIFT)) & MSCM_IRCP3ISR8_CP3_INT_MASK)

#define MSCM_IRCP3ISR8_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP3ISR8_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP3ISR8_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR8_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR8_CP4_INT_SHIFT)) & MSCM_IRCP3ISR8_CP4_INT_MASK)

#define MSCM_IRCP3ISR8_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP3ISR8_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP3ISR8_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR8_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR8_CP5_INT_SHIFT)) & MSCM_IRCP3ISR8_CP5_INT_MASK)

#define MSCM_IRCP3ISR8_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP3ISR8_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP3ISR8_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR8_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR8_CP6_INT_SHIFT)) & MSCM_IRCP3ISR8_CP6_INT_MASK)

#define MSCM_IRCP3ISR8_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP3ISR8_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP3ISR8_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR8_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR8_CP7_INT_SHIFT)) & MSCM_IRCP3ISR8_CP7_INT_MASK)

#define MSCM_IRCP3ISR8_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP3ISR8_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP3ISR8_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR8_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR8_CP8_INT_SHIFT)) & MSCM_IRCP3ISR8_CP8_INT_MASK)

#define MSCM_IRCP3ISR8_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP3ISR8_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP3ISR8_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR8_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR8_CP9_INT_SHIFT)) & MSCM_IRCP3ISR8_CP9_INT_MASK)

#define MSCM_IRCP3ISR8_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP3ISR8_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP3ISR8_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR8_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR8_CP10_INT_SHIFT)) & MSCM_IRCP3ISR8_CP10_INT_MASK)

#define MSCM_IRCP3ISR8_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP3ISR8_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP3ISR8_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR8_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR8_CP11_INT_SHIFT)) & MSCM_IRCP3ISR8_CP11_INT_MASK)
/*! @} */

/*! @name IRCP3IGR8 - Interrupt Router CP3 Interrupt8 Generation Register */
/*! @{ */

#define MSCM_IRCP3IGR8_INT_EN_MASK               (0x1U)
#define MSCM_IRCP3IGR8_INT_EN_SHIFT              (0U)
#define MSCM_IRCP3IGR8_INT_EN_WIDTH              (1U)
#define MSCM_IRCP3IGR8_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR8_INT_EN_SHIFT)) & MSCM_IRCP3IGR8_INT_EN_MASK)
/*! @} */

/*! @name IRCP3ISR9 - Interrupt Router CP3 Interrupt9 Status Register */
/*! @{ */

#define MSCM_IRCP3ISR9_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP3ISR9_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP3ISR9_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR9_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR9_CP0_INT_SHIFT)) & MSCM_IRCP3ISR9_CP0_INT_MASK)

#define MSCM_IRCP3ISR9_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP3ISR9_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP3ISR9_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR9_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR9_CP1_INT_SHIFT)) & MSCM_IRCP3ISR9_CP1_INT_MASK)

#define MSCM_IRCP3ISR9_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP3ISR9_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP3ISR9_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR9_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR9_CP2_INT_SHIFT)) & MSCM_IRCP3ISR9_CP2_INT_MASK)

#define MSCM_IRCP3ISR9_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP3ISR9_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP3ISR9_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR9_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR9_CP3_INT_SHIFT)) & MSCM_IRCP3ISR9_CP3_INT_MASK)

#define MSCM_IRCP3ISR9_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP3ISR9_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP3ISR9_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR9_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR9_CP4_INT_SHIFT)) & MSCM_IRCP3ISR9_CP4_INT_MASK)

#define MSCM_IRCP3ISR9_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP3ISR9_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP3ISR9_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR9_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR9_CP5_INT_SHIFT)) & MSCM_IRCP3ISR9_CP5_INT_MASK)

#define MSCM_IRCP3ISR9_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP3ISR9_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP3ISR9_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR9_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR9_CP6_INT_SHIFT)) & MSCM_IRCP3ISR9_CP6_INT_MASK)

#define MSCM_IRCP3ISR9_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP3ISR9_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP3ISR9_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR9_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR9_CP7_INT_SHIFT)) & MSCM_IRCP3ISR9_CP7_INT_MASK)

#define MSCM_IRCP3ISR9_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP3ISR9_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP3ISR9_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR9_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR9_CP8_INT_SHIFT)) & MSCM_IRCP3ISR9_CP8_INT_MASK)

#define MSCM_IRCP3ISR9_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP3ISR9_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP3ISR9_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP3ISR9_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR9_CP9_INT_SHIFT)) & MSCM_IRCP3ISR9_CP9_INT_MASK)

#define MSCM_IRCP3ISR9_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP3ISR9_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP3ISR9_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR9_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR9_CP10_INT_SHIFT)) & MSCM_IRCP3ISR9_CP10_INT_MASK)

#define MSCM_IRCP3ISR9_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP3ISR9_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP3ISR9_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR9_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR9_CP11_INT_SHIFT)) & MSCM_IRCP3ISR9_CP11_INT_MASK)
/*! @} */

/*! @name IRCP3IGR9 - Interrupt Router CP3 Interrupt9 Generation Register */
/*! @{ */

#define MSCM_IRCP3IGR9_INT_EN_MASK               (0x1U)
#define MSCM_IRCP3IGR9_INT_EN_SHIFT              (0U)
#define MSCM_IRCP3IGR9_INT_EN_WIDTH              (1U)
#define MSCM_IRCP3IGR9_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR9_INT_EN_SHIFT)) & MSCM_IRCP3IGR9_INT_EN_MASK)
/*! @} */

/*! @name IRCP3ISR10 - Interrupt Router CP3 Interrupt10 Status Register */
/*! @{ */

#define MSCM_IRCP3ISR10_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP3ISR10_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP3ISR10_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR10_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR10_CP0_INT_SHIFT)) & MSCM_IRCP3ISR10_CP0_INT_MASK)

#define MSCM_IRCP3ISR10_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP3ISR10_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP3ISR10_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR10_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR10_CP1_INT_SHIFT)) & MSCM_IRCP3ISR10_CP1_INT_MASK)

#define MSCM_IRCP3ISR10_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP3ISR10_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP3ISR10_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR10_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR10_CP2_INT_SHIFT)) & MSCM_IRCP3ISR10_CP2_INT_MASK)

#define MSCM_IRCP3ISR10_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP3ISR10_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP3ISR10_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR10_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR10_CP3_INT_SHIFT)) & MSCM_IRCP3ISR10_CP3_INT_MASK)

#define MSCM_IRCP3ISR10_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP3ISR10_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP3ISR10_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR10_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR10_CP4_INT_SHIFT)) & MSCM_IRCP3ISR10_CP4_INT_MASK)

#define MSCM_IRCP3ISR10_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP3ISR10_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP3ISR10_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR10_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR10_CP5_INT_SHIFT)) & MSCM_IRCP3ISR10_CP5_INT_MASK)

#define MSCM_IRCP3ISR10_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP3ISR10_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP3ISR10_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR10_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR10_CP6_INT_SHIFT)) & MSCM_IRCP3ISR10_CP6_INT_MASK)

#define MSCM_IRCP3ISR10_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP3ISR10_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP3ISR10_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR10_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR10_CP7_INT_SHIFT)) & MSCM_IRCP3ISR10_CP7_INT_MASK)

#define MSCM_IRCP3ISR10_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP3ISR10_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP3ISR10_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR10_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR10_CP8_INT_SHIFT)) & MSCM_IRCP3ISR10_CP8_INT_MASK)

#define MSCM_IRCP3ISR10_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP3ISR10_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP3ISR10_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR10_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR10_CP9_INT_SHIFT)) & MSCM_IRCP3ISR10_CP9_INT_MASK)

#define MSCM_IRCP3ISR10_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP3ISR10_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP3ISR10_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP3ISR10_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR10_CP10_INT_SHIFT)) & MSCM_IRCP3ISR10_CP10_INT_MASK)

#define MSCM_IRCP3ISR10_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP3ISR10_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP3ISR10_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP3ISR10_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR10_CP11_INT_SHIFT)) & MSCM_IRCP3ISR10_CP11_INT_MASK)
/*! @} */

/*! @name IRCP3IGR10 - Interrupt Router CP3 Interrupt10 Generation Register */
/*! @{ */

#define MSCM_IRCP3IGR10_INT_EN_MASK              (0x1U)
#define MSCM_IRCP3IGR10_INT_EN_SHIFT             (0U)
#define MSCM_IRCP3IGR10_INT_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR10_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR10_INT_EN_SHIFT)) & MSCM_IRCP3IGR10_INT_EN_MASK)
/*! @} */

/*! @name IRCP3ISR11 - Interrupt Router CP3 Interrupt11 Status Register */
/*! @{ */

#define MSCM_IRCP3ISR11_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP3ISR11_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP3ISR11_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR11_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR11_CP0_INT_SHIFT)) & MSCM_IRCP3ISR11_CP0_INT_MASK)

#define MSCM_IRCP3ISR11_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP3ISR11_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP3ISR11_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR11_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR11_CP1_INT_SHIFT)) & MSCM_IRCP3ISR11_CP1_INT_MASK)

#define MSCM_IRCP3ISR11_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP3ISR11_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP3ISR11_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR11_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR11_CP2_INT_SHIFT)) & MSCM_IRCP3ISR11_CP2_INT_MASK)

#define MSCM_IRCP3ISR11_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP3ISR11_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP3ISR11_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR11_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR11_CP3_INT_SHIFT)) & MSCM_IRCP3ISR11_CP3_INT_MASK)

#define MSCM_IRCP3ISR11_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP3ISR11_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP3ISR11_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR11_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR11_CP4_INT_SHIFT)) & MSCM_IRCP3ISR11_CP4_INT_MASK)

#define MSCM_IRCP3ISR11_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP3ISR11_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP3ISR11_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR11_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR11_CP5_INT_SHIFT)) & MSCM_IRCP3ISR11_CP5_INT_MASK)

#define MSCM_IRCP3ISR11_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP3ISR11_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP3ISR11_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR11_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR11_CP6_INT_SHIFT)) & MSCM_IRCP3ISR11_CP6_INT_MASK)

#define MSCM_IRCP3ISR11_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP3ISR11_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP3ISR11_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR11_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR11_CP7_INT_SHIFT)) & MSCM_IRCP3ISR11_CP7_INT_MASK)

#define MSCM_IRCP3ISR11_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP3ISR11_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP3ISR11_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR11_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR11_CP8_INT_SHIFT)) & MSCM_IRCP3ISR11_CP8_INT_MASK)

#define MSCM_IRCP3ISR11_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP3ISR11_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP3ISR11_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR11_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR11_CP9_INT_SHIFT)) & MSCM_IRCP3ISR11_CP9_INT_MASK)

#define MSCM_IRCP3ISR11_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP3ISR11_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP3ISR11_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP3ISR11_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR11_CP10_INT_SHIFT)) & MSCM_IRCP3ISR11_CP10_INT_MASK)

#define MSCM_IRCP3ISR11_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP3ISR11_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP3ISR11_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP3ISR11_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR11_CP11_INT_SHIFT)) & MSCM_IRCP3ISR11_CP11_INT_MASK)
/*! @} */

/*! @name IRCP3IGR11 - Interrupt Router CP3 Interrupt11 Generation Register */
/*! @{ */

#define MSCM_IRCP3IGR11_INT_EN_MASK              (0x1U)
#define MSCM_IRCP3IGR11_INT_EN_SHIFT             (0U)
#define MSCM_IRCP3IGR11_INT_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR11_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR11_INT_EN_SHIFT)) & MSCM_IRCP3IGR11_INT_EN_MASK)
/*! @} */

/*! @name IRCP3ISR12 - Interrupt Router CP3 Interrupt12 Status Register */
/*! @{ */

#define MSCM_IRCP3ISR12_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP3ISR12_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP3ISR12_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR12_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR12_CP0_INT_SHIFT)) & MSCM_IRCP3ISR12_CP0_INT_MASK)

#define MSCM_IRCP3ISR12_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP3ISR12_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP3ISR12_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR12_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR12_CP1_INT_SHIFT)) & MSCM_IRCP3ISR12_CP1_INT_MASK)

#define MSCM_IRCP3ISR12_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP3ISR12_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP3ISR12_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR12_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR12_CP2_INT_SHIFT)) & MSCM_IRCP3ISR12_CP2_INT_MASK)

#define MSCM_IRCP3ISR12_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP3ISR12_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP3ISR12_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR12_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR12_CP3_INT_SHIFT)) & MSCM_IRCP3ISR12_CP3_INT_MASK)

#define MSCM_IRCP3ISR12_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP3ISR12_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP3ISR12_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR12_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR12_CP4_INT_SHIFT)) & MSCM_IRCP3ISR12_CP4_INT_MASK)

#define MSCM_IRCP3ISR12_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP3ISR12_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP3ISR12_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR12_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR12_CP5_INT_SHIFT)) & MSCM_IRCP3ISR12_CP5_INT_MASK)

#define MSCM_IRCP3ISR12_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP3ISR12_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP3ISR12_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR12_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR12_CP6_INT_SHIFT)) & MSCM_IRCP3ISR12_CP6_INT_MASK)

#define MSCM_IRCP3ISR12_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP3ISR12_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP3ISR12_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR12_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR12_CP7_INT_SHIFT)) & MSCM_IRCP3ISR12_CP7_INT_MASK)

#define MSCM_IRCP3ISR12_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP3ISR12_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP3ISR12_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR12_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR12_CP8_INT_SHIFT)) & MSCM_IRCP3ISR12_CP8_INT_MASK)

#define MSCM_IRCP3ISR12_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP3ISR12_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP3ISR12_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR12_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR12_CP9_INT_SHIFT)) & MSCM_IRCP3ISR12_CP9_INT_MASK)

#define MSCM_IRCP3ISR12_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP3ISR12_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP3ISR12_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP3ISR12_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR12_CP10_INT_SHIFT)) & MSCM_IRCP3ISR12_CP10_INT_MASK)

#define MSCM_IRCP3ISR12_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP3ISR12_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP3ISR12_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP3ISR12_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR12_CP11_INT_SHIFT)) & MSCM_IRCP3ISR12_CP11_INT_MASK)
/*! @} */

/*! @name IRCP3IGR12 - Interrupt Router CP3 Interrupt12 Generation Register */
/*! @{ */

#define MSCM_IRCP3IGR12_INT_EN_MASK              (0x1U)
#define MSCM_IRCP3IGR12_INT_EN_SHIFT             (0U)
#define MSCM_IRCP3IGR12_INT_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR12_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR12_INT_EN_SHIFT)) & MSCM_IRCP3IGR12_INT_EN_MASK)
/*! @} */

/*! @name IRCP3ISR13 - Interrupt Router CP3 Interrupt13 Status Register */
/*! @{ */

#define MSCM_IRCP3ISR13_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP3ISR13_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP3ISR13_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR13_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR13_CP0_INT_SHIFT)) & MSCM_IRCP3ISR13_CP0_INT_MASK)

#define MSCM_IRCP3ISR13_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP3ISR13_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP3ISR13_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR13_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR13_CP1_INT_SHIFT)) & MSCM_IRCP3ISR13_CP1_INT_MASK)

#define MSCM_IRCP3ISR13_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP3ISR13_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP3ISR13_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR13_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR13_CP2_INT_SHIFT)) & MSCM_IRCP3ISR13_CP2_INT_MASK)

#define MSCM_IRCP3ISR13_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP3ISR13_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP3ISR13_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR13_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR13_CP3_INT_SHIFT)) & MSCM_IRCP3ISR13_CP3_INT_MASK)

#define MSCM_IRCP3ISR13_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP3ISR13_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP3ISR13_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR13_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR13_CP4_INT_SHIFT)) & MSCM_IRCP3ISR13_CP4_INT_MASK)

#define MSCM_IRCP3ISR13_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP3ISR13_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP3ISR13_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR13_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR13_CP5_INT_SHIFT)) & MSCM_IRCP3ISR13_CP5_INT_MASK)

#define MSCM_IRCP3ISR13_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP3ISR13_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP3ISR13_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR13_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR13_CP6_INT_SHIFT)) & MSCM_IRCP3ISR13_CP6_INT_MASK)

#define MSCM_IRCP3ISR13_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP3ISR13_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP3ISR13_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR13_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR13_CP7_INT_SHIFT)) & MSCM_IRCP3ISR13_CP7_INT_MASK)

#define MSCM_IRCP3ISR13_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP3ISR13_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP3ISR13_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR13_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR13_CP8_INT_SHIFT)) & MSCM_IRCP3ISR13_CP8_INT_MASK)

#define MSCM_IRCP3ISR13_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP3ISR13_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP3ISR13_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP3ISR13_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR13_CP9_INT_SHIFT)) & MSCM_IRCP3ISR13_CP9_INT_MASK)

#define MSCM_IRCP3ISR13_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP3ISR13_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP3ISR13_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP3ISR13_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR13_CP10_INT_SHIFT)) & MSCM_IRCP3ISR13_CP10_INT_MASK)

#define MSCM_IRCP3ISR13_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP3ISR13_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP3ISR13_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP3ISR13_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3ISR13_CP11_INT_SHIFT)) & MSCM_IRCP3ISR13_CP11_INT_MASK)
/*! @} */

/*! @name IRCP3IGR13 - Interrupt Router CP3 Interrupt13 Generation Register */
/*! @{ */

#define MSCM_IRCP3IGR13_INT_EN_MASK              (0x1U)
#define MSCM_IRCP3IGR13_INT_EN_SHIFT             (0U)
#define MSCM_IRCP3IGR13_INT_EN_WIDTH             (1U)
#define MSCM_IRCP3IGR13_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP3IGR13_INT_EN_SHIFT)) & MSCM_IRCP3IGR13_INT_EN_MASK)
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

#define MSCM_IRCP4ISR0_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP4ISR0_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP4ISR0_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR0_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR0_CP7_INT_SHIFT)) & MSCM_IRCP4ISR0_CP7_INT_MASK)

#define MSCM_IRCP4ISR0_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP4ISR0_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP4ISR0_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR0_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR0_CP8_INT_SHIFT)) & MSCM_IRCP4ISR0_CP8_INT_MASK)

#define MSCM_IRCP4ISR0_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP4ISR0_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP4ISR0_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR0_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR0_CP9_INT_SHIFT)) & MSCM_IRCP4ISR0_CP9_INT_MASK)

#define MSCM_IRCP4ISR0_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP4ISR0_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP4ISR0_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR0_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR0_CP10_INT_SHIFT)) & MSCM_IRCP4ISR0_CP10_INT_MASK)

#define MSCM_IRCP4ISR0_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP4ISR0_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP4ISR0_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR0_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR0_CP11_INT_SHIFT)) & MSCM_IRCP4ISR0_CP11_INT_MASK)
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

#define MSCM_IRCP4ISR1_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP4ISR1_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP4ISR1_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR1_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR1_CP7_INT_SHIFT)) & MSCM_IRCP4ISR1_CP7_INT_MASK)

#define MSCM_IRCP4ISR1_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP4ISR1_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP4ISR1_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR1_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR1_CP8_INT_SHIFT)) & MSCM_IRCP4ISR1_CP8_INT_MASK)

#define MSCM_IRCP4ISR1_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP4ISR1_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP4ISR1_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR1_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR1_CP9_INT_SHIFT)) & MSCM_IRCP4ISR1_CP9_INT_MASK)

#define MSCM_IRCP4ISR1_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP4ISR1_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP4ISR1_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR1_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR1_CP10_INT_SHIFT)) & MSCM_IRCP4ISR1_CP10_INT_MASK)

#define MSCM_IRCP4ISR1_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP4ISR1_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP4ISR1_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR1_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR1_CP11_INT_SHIFT)) & MSCM_IRCP4ISR1_CP11_INT_MASK)
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

#define MSCM_IRCP4ISR2_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP4ISR2_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP4ISR2_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR2_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR2_CP7_INT_SHIFT)) & MSCM_IRCP4ISR2_CP7_INT_MASK)

#define MSCM_IRCP4ISR2_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP4ISR2_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP4ISR2_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR2_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR2_CP8_INT_SHIFT)) & MSCM_IRCP4ISR2_CP8_INT_MASK)

#define MSCM_IRCP4ISR2_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP4ISR2_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP4ISR2_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR2_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR2_CP9_INT_SHIFT)) & MSCM_IRCP4ISR2_CP9_INT_MASK)

#define MSCM_IRCP4ISR2_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP4ISR2_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP4ISR2_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR2_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR2_CP10_INT_SHIFT)) & MSCM_IRCP4ISR2_CP10_INT_MASK)

#define MSCM_IRCP4ISR2_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP4ISR2_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP4ISR2_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR2_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR2_CP11_INT_SHIFT)) & MSCM_IRCP4ISR2_CP11_INT_MASK)
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

/*! @name IRCP4ISR5 - Interrupt Router CP4 Interrupt5 Status Register */
/*! @{ */

#define MSCM_IRCP4ISR5_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP4ISR5_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP4ISR5_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR5_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR5_CP0_INT_SHIFT)) & MSCM_IRCP4ISR5_CP0_INT_MASK)

#define MSCM_IRCP4ISR5_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP4ISR5_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP4ISR5_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR5_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR5_CP1_INT_SHIFT)) & MSCM_IRCP4ISR5_CP1_INT_MASK)

#define MSCM_IRCP4ISR5_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP4ISR5_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP4ISR5_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR5_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR5_CP2_INT_SHIFT)) & MSCM_IRCP4ISR5_CP2_INT_MASK)

#define MSCM_IRCP4ISR5_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP4ISR5_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP4ISR5_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR5_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR5_CP3_INT_SHIFT)) & MSCM_IRCP4ISR5_CP3_INT_MASK)

#define MSCM_IRCP4ISR5_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP4ISR5_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP4ISR5_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR5_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR5_CP4_INT_SHIFT)) & MSCM_IRCP4ISR5_CP4_INT_MASK)

#define MSCM_IRCP4ISR5_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP4ISR5_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP4ISR5_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR5_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR5_CP5_INT_SHIFT)) & MSCM_IRCP4ISR5_CP5_INT_MASK)

#define MSCM_IRCP4ISR5_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP4ISR5_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP4ISR5_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR5_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR5_CP6_INT_SHIFT)) & MSCM_IRCP4ISR5_CP6_INT_MASK)

#define MSCM_IRCP4ISR5_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP4ISR5_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP4ISR5_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR5_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR5_CP7_INT_SHIFT)) & MSCM_IRCP4ISR5_CP7_INT_MASK)

#define MSCM_IRCP4ISR5_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP4ISR5_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP4ISR5_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR5_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR5_CP8_INT_SHIFT)) & MSCM_IRCP4ISR5_CP8_INT_MASK)

#define MSCM_IRCP4ISR5_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP4ISR5_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP4ISR5_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR5_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR5_CP9_INT_SHIFT)) & MSCM_IRCP4ISR5_CP9_INT_MASK)

#define MSCM_IRCP4ISR5_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP4ISR5_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP4ISR5_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR5_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR5_CP10_INT_SHIFT)) & MSCM_IRCP4ISR5_CP10_INT_MASK)

#define MSCM_IRCP4ISR5_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP4ISR5_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP4ISR5_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR5_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR5_CP11_INT_SHIFT)) & MSCM_IRCP4ISR5_CP11_INT_MASK)
/*! @} */

/*! @name IRCP4IGR5 - Interrupt Router CP4 Interrupt5 Generation Register */
/*! @{ */

#define MSCM_IRCP4IGR5_INT_EN_MASK               (0x1U)
#define MSCM_IRCP4IGR5_INT_EN_SHIFT              (0U)
#define MSCM_IRCP4IGR5_INT_EN_WIDTH              (1U)
#define MSCM_IRCP4IGR5_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR5_INT_EN_SHIFT)) & MSCM_IRCP4IGR5_INT_EN_MASK)
/*! @} */

/*! @name IRCP4ISR6 - Interrupt Router CP4 Interrupt6 Status Register */
/*! @{ */

#define MSCM_IRCP4ISR6_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP4ISR6_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP4ISR6_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR6_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR6_CP0_INT_SHIFT)) & MSCM_IRCP4ISR6_CP0_INT_MASK)

#define MSCM_IRCP4ISR6_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP4ISR6_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP4ISR6_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR6_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR6_CP1_INT_SHIFT)) & MSCM_IRCP4ISR6_CP1_INT_MASK)

#define MSCM_IRCP4ISR6_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP4ISR6_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP4ISR6_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR6_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR6_CP2_INT_SHIFT)) & MSCM_IRCP4ISR6_CP2_INT_MASK)

#define MSCM_IRCP4ISR6_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP4ISR6_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP4ISR6_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR6_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR6_CP3_INT_SHIFT)) & MSCM_IRCP4ISR6_CP3_INT_MASK)

#define MSCM_IRCP4ISR6_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP4ISR6_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP4ISR6_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR6_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR6_CP4_INT_SHIFT)) & MSCM_IRCP4ISR6_CP4_INT_MASK)

#define MSCM_IRCP4ISR6_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP4ISR6_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP4ISR6_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR6_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR6_CP5_INT_SHIFT)) & MSCM_IRCP4ISR6_CP5_INT_MASK)

#define MSCM_IRCP4ISR6_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP4ISR6_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP4ISR6_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR6_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR6_CP6_INT_SHIFT)) & MSCM_IRCP4ISR6_CP6_INT_MASK)

#define MSCM_IRCP4ISR6_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP4ISR6_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP4ISR6_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR6_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR6_CP7_INT_SHIFT)) & MSCM_IRCP4ISR6_CP7_INT_MASK)

#define MSCM_IRCP4ISR6_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP4ISR6_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP4ISR6_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR6_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR6_CP8_INT_SHIFT)) & MSCM_IRCP4ISR6_CP8_INT_MASK)

#define MSCM_IRCP4ISR6_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP4ISR6_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP4ISR6_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR6_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR6_CP9_INT_SHIFT)) & MSCM_IRCP4ISR6_CP9_INT_MASK)

#define MSCM_IRCP4ISR6_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP4ISR6_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP4ISR6_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR6_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR6_CP10_INT_SHIFT)) & MSCM_IRCP4ISR6_CP10_INT_MASK)

#define MSCM_IRCP4ISR6_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP4ISR6_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP4ISR6_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR6_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR6_CP11_INT_SHIFT)) & MSCM_IRCP4ISR6_CP11_INT_MASK)
/*! @} */

/*! @name IRCP4IGR6 - Interrupt Router CP4 Interrupt6 Generation Register */
/*! @{ */

#define MSCM_IRCP4IGR6_INT_EN_MASK               (0x1U)
#define MSCM_IRCP4IGR6_INT_EN_SHIFT              (0U)
#define MSCM_IRCP4IGR6_INT_EN_WIDTH              (1U)
#define MSCM_IRCP4IGR6_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR6_INT_EN_SHIFT)) & MSCM_IRCP4IGR6_INT_EN_MASK)
/*! @} */

/*! @name IRCP4ISR7 - Interrupt Router CP4 Interrupt7 Status Register */
/*! @{ */

#define MSCM_IRCP4ISR7_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP4ISR7_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP4ISR7_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR7_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR7_CP0_INT_SHIFT)) & MSCM_IRCP4ISR7_CP0_INT_MASK)

#define MSCM_IRCP4ISR7_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP4ISR7_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP4ISR7_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR7_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR7_CP1_INT_SHIFT)) & MSCM_IRCP4ISR7_CP1_INT_MASK)

#define MSCM_IRCP4ISR7_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP4ISR7_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP4ISR7_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR7_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR7_CP2_INT_SHIFT)) & MSCM_IRCP4ISR7_CP2_INT_MASK)

#define MSCM_IRCP4ISR7_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP4ISR7_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP4ISR7_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR7_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR7_CP3_INT_SHIFT)) & MSCM_IRCP4ISR7_CP3_INT_MASK)

#define MSCM_IRCP4ISR7_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP4ISR7_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP4ISR7_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR7_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR7_CP4_INT_SHIFT)) & MSCM_IRCP4ISR7_CP4_INT_MASK)

#define MSCM_IRCP4ISR7_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP4ISR7_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP4ISR7_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR7_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR7_CP5_INT_SHIFT)) & MSCM_IRCP4ISR7_CP5_INT_MASK)

#define MSCM_IRCP4ISR7_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP4ISR7_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP4ISR7_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR7_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR7_CP6_INT_SHIFT)) & MSCM_IRCP4ISR7_CP6_INT_MASK)

#define MSCM_IRCP4ISR7_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP4ISR7_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP4ISR7_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR7_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR7_CP7_INT_SHIFT)) & MSCM_IRCP4ISR7_CP7_INT_MASK)

#define MSCM_IRCP4ISR7_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP4ISR7_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP4ISR7_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR7_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR7_CP8_INT_SHIFT)) & MSCM_IRCP4ISR7_CP8_INT_MASK)

#define MSCM_IRCP4ISR7_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP4ISR7_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP4ISR7_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR7_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR7_CP9_INT_SHIFT)) & MSCM_IRCP4ISR7_CP9_INT_MASK)

#define MSCM_IRCP4ISR7_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP4ISR7_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP4ISR7_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR7_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR7_CP10_INT_SHIFT)) & MSCM_IRCP4ISR7_CP10_INT_MASK)

#define MSCM_IRCP4ISR7_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP4ISR7_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP4ISR7_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR7_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR7_CP11_INT_SHIFT)) & MSCM_IRCP4ISR7_CP11_INT_MASK)
/*! @} */

/*! @name IRCP4IGR7 - Interrupt Router CP4 Interrupt7 Generation Register */
/*! @{ */

#define MSCM_IRCP4IGR7_INT_EN_MASK               (0x1U)
#define MSCM_IRCP4IGR7_INT_EN_SHIFT              (0U)
#define MSCM_IRCP4IGR7_INT_EN_WIDTH              (1U)
#define MSCM_IRCP4IGR7_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR7_INT_EN_SHIFT)) & MSCM_IRCP4IGR7_INT_EN_MASK)
/*! @} */

/*! @name IRCP4ISR8 - Interrupt Router CP4 Interrupt8 Status Register */
/*! @{ */

#define MSCM_IRCP4ISR8_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP4ISR8_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP4ISR8_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR8_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR8_CP0_INT_SHIFT)) & MSCM_IRCP4ISR8_CP0_INT_MASK)

#define MSCM_IRCP4ISR8_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP4ISR8_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP4ISR8_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR8_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR8_CP1_INT_SHIFT)) & MSCM_IRCP4ISR8_CP1_INT_MASK)

#define MSCM_IRCP4ISR8_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP4ISR8_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP4ISR8_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR8_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR8_CP2_INT_SHIFT)) & MSCM_IRCP4ISR8_CP2_INT_MASK)

#define MSCM_IRCP4ISR8_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP4ISR8_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP4ISR8_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR8_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR8_CP3_INT_SHIFT)) & MSCM_IRCP4ISR8_CP3_INT_MASK)

#define MSCM_IRCP4ISR8_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP4ISR8_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP4ISR8_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR8_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR8_CP4_INT_SHIFT)) & MSCM_IRCP4ISR8_CP4_INT_MASK)

#define MSCM_IRCP4ISR8_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP4ISR8_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP4ISR8_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR8_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR8_CP5_INT_SHIFT)) & MSCM_IRCP4ISR8_CP5_INT_MASK)

#define MSCM_IRCP4ISR8_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP4ISR8_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP4ISR8_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR8_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR8_CP6_INT_SHIFT)) & MSCM_IRCP4ISR8_CP6_INT_MASK)

#define MSCM_IRCP4ISR8_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP4ISR8_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP4ISR8_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR8_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR8_CP7_INT_SHIFT)) & MSCM_IRCP4ISR8_CP7_INT_MASK)

#define MSCM_IRCP4ISR8_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP4ISR8_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP4ISR8_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR8_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR8_CP8_INT_SHIFT)) & MSCM_IRCP4ISR8_CP8_INT_MASK)

#define MSCM_IRCP4ISR8_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP4ISR8_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP4ISR8_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR8_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR8_CP9_INT_SHIFT)) & MSCM_IRCP4ISR8_CP9_INT_MASK)

#define MSCM_IRCP4ISR8_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP4ISR8_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP4ISR8_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR8_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR8_CP10_INT_SHIFT)) & MSCM_IRCP4ISR8_CP10_INT_MASK)

#define MSCM_IRCP4ISR8_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP4ISR8_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP4ISR8_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR8_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR8_CP11_INT_SHIFT)) & MSCM_IRCP4ISR8_CP11_INT_MASK)
/*! @} */

/*! @name IRCP4IGR8 - Interrupt Router CP4 Interrupt8 Generation Register */
/*! @{ */

#define MSCM_IRCP4IGR8_INT_EN_MASK               (0x1U)
#define MSCM_IRCP4IGR8_INT_EN_SHIFT              (0U)
#define MSCM_IRCP4IGR8_INT_EN_WIDTH              (1U)
#define MSCM_IRCP4IGR8_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR8_INT_EN_SHIFT)) & MSCM_IRCP4IGR8_INT_EN_MASK)
/*! @} */

/*! @name IRCP4ISR9 - Interrupt Router CP4 Interrupt9 Status Register */
/*! @{ */

#define MSCM_IRCP4ISR9_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP4ISR9_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP4ISR9_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR9_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR9_CP0_INT_SHIFT)) & MSCM_IRCP4ISR9_CP0_INT_MASK)

#define MSCM_IRCP4ISR9_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP4ISR9_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP4ISR9_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR9_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR9_CP1_INT_SHIFT)) & MSCM_IRCP4ISR9_CP1_INT_MASK)

#define MSCM_IRCP4ISR9_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP4ISR9_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP4ISR9_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR9_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR9_CP2_INT_SHIFT)) & MSCM_IRCP4ISR9_CP2_INT_MASK)

#define MSCM_IRCP4ISR9_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP4ISR9_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP4ISR9_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR9_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR9_CP3_INT_SHIFT)) & MSCM_IRCP4ISR9_CP3_INT_MASK)

#define MSCM_IRCP4ISR9_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP4ISR9_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP4ISR9_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR9_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR9_CP4_INT_SHIFT)) & MSCM_IRCP4ISR9_CP4_INT_MASK)

#define MSCM_IRCP4ISR9_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP4ISR9_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP4ISR9_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR9_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR9_CP5_INT_SHIFT)) & MSCM_IRCP4ISR9_CP5_INT_MASK)

#define MSCM_IRCP4ISR9_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP4ISR9_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP4ISR9_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR9_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR9_CP6_INT_SHIFT)) & MSCM_IRCP4ISR9_CP6_INT_MASK)

#define MSCM_IRCP4ISR9_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP4ISR9_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP4ISR9_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR9_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR9_CP7_INT_SHIFT)) & MSCM_IRCP4ISR9_CP7_INT_MASK)

#define MSCM_IRCP4ISR9_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP4ISR9_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP4ISR9_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR9_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR9_CP8_INT_SHIFT)) & MSCM_IRCP4ISR9_CP8_INT_MASK)

#define MSCM_IRCP4ISR9_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP4ISR9_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP4ISR9_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP4ISR9_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR9_CP9_INT_SHIFT)) & MSCM_IRCP4ISR9_CP9_INT_MASK)

#define MSCM_IRCP4ISR9_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP4ISR9_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP4ISR9_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR9_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR9_CP10_INT_SHIFT)) & MSCM_IRCP4ISR9_CP10_INT_MASK)

#define MSCM_IRCP4ISR9_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP4ISR9_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP4ISR9_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR9_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR9_CP11_INT_SHIFT)) & MSCM_IRCP4ISR9_CP11_INT_MASK)
/*! @} */

/*! @name IRCP4IGR9 - Interrupt Router CP4 Interrupt9 Generation Register */
/*! @{ */

#define MSCM_IRCP4IGR9_INT_EN_MASK               (0x1U)
#define MSCM_IRCP4IGR9_INT_EN_SHIFT              (0U)
#define MSCM_IRCP4IGR9_INT_EN_WIDTH              (1U)
#define MSCM_IRCP4IGR9_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR9_INT_EN_SHIFT)) & MSCM_IRCP4IGR9_INT_EN_MASK)
/*! @} */

/*! @name IRCP4ISR10 - Interrupt Router CP4 Interrupt10 Status Register */
/*! @{ */

#define MSCM_IRCP4ISR10_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP4ISR10_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP4ISR10_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR10_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR10_CP0_INT_SHIFT)) & MSCM_IRCP4ISR10_CP0_INT_MASK)

#define MSCM_IRCP4ISR10_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP4ISR10_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP4ISR10_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR10_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR10_CP1_INT_SHIFT)) & MSCM_IRCP4ISR10_CP1_INT_MASK)

#define MSCM_IRCP4ISR10_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP4ISR10_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP4ISR10_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR10_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR10_CP2_INT_SHIFT)) & MSCM_IRCP4ISR10_CP2_INT_MASK)

#define MSCM_IRCP4ISR10_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP4ISR10_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP4ISR10_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR10_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR10_CP3_INT_SHIFT)) & MSCM_IRCP4ISR10_CP3_INT_MASK)

#define MSCM_IRCP4ISR10_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP4ISR10_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP4ISR10_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR10_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR10_CP4_INT_SHIFT)) & MSCM_IRCP4ISR10_CP4_INT_MASK)

#define MSCM_IRCP4ISR10_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP4ISR10_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP4ISR10_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR10_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR10_CP5_INT_SHIFT)) & MSCM_IRCP4ISR10_CP5_INT_MASK)

#define MSCM_IRCP4ISR10_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP4ISR10_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP4ISR10_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR10_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR10_CP6_INT_SHIFT)) & MSCM_IRCP4ISR10_CP6_INT_MASK)

#define MSCM_IRCP4ISR10_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP4ISR10_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP4ISR10_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR10_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR10_CP7_INT_SHIFT)) & MSCM_IRCP4ISR10_CP7_INT_MASK)

#define MSCM_IRCP4ISR10_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP4ISR10_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP4ISR10_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR10_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR10_CP8_INT_SHIFT)) & MSCM_IRCP4ISR10_CP8_INT_MASK)

#define MSCM_IRCP4ISR10_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP4ISR10_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP4ISR10_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR10_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR10_CP9_INT_SHIFT)) & MSCM_IRCP4ISR10_CP9_INT_MASK)

#define MSCM_IRCP4ISR10_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP4ISR10_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP4ISR10_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP4ISR10_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR10_CP10_INT_SHIFT)) & MSCM_IRCP4ISR10_CP10_INT_MASK)

#define MSCM_IRCP4ISR10_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP4ISR10_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP4ISR10_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP4ISR10_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR10_CP11_INT_SHIFT)) & MSCM_IRCP4ISR10_CP11_INT_MASK)
/*! @} */

/*! @name IRCP4IGR10 - Interrupt Router CP4 Interrupt10 Generation Register */
/*! @{ */

#define MSCM_IRCP4IGR10_INT_EN_MASK              (0x1U)
#define MSCM_IRCP4IGR10_INT_EN_SHIFT             (0U)
#define MSCM_IRCP4IGR10_INT_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR10_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR10_INT_EN_SHIFT)) & MSCM_IRCP4IGR10_INT_EN_MASK)
/*! @} */

/*! @name IRCP4ISR11 - Interrupt Router CP4 Interrupt11 Status Register */
/*! @{ */

#define MSCM_IRCP4ISR11_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP4ISR11_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP4ISR11_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR11_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR11_CP0_INT_SHIFT)) & MSCM_IRCP4ISR11_CP0_INT_MASK)

#define MSCM_IRCP4ISR11_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP4ISR11_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP4ISR11_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR11_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR11_CP1_INT_SHIFT)) & MSCM_IRCP4ISR11_CP1_INT_MASK)

#define MSCM_IRCP4ISR11_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP4ISR11_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP4ISR11_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR11_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR11_CP2_INT_SHIFT)) & MSCM_IRCP4ISR11_CP2_INT_MASK)

#define MSCM_IRCP4ISR11_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP4ISR11_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP4ISR11_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR11_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR11_CP3_INT_SHIFT)) & MSCM_IRCP4ISR11_CP3_INT_MASK)

#define MSCM_IRCP4ISR11_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP4ISR11_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP4ISR11_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR11_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR11_CP4_INT_SHIFT)) & MSCM_IRCP4ISR11_CP4_INT_MASK)

#define MSCM_IRCP4ISR11_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP4ISR11_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP4ISR11_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR11_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR11_CP5_INT_SHIFT)) & MSCM_IRCP4ISR11_CP5_INT_MASK)

#define MSCM_IRCP4ISR11_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP4ISR11_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP4ISR11_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR11_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR11_CP6_INT_SHIFT)) & MSCM_IRCP4ISR11_CP6_INT_MASK)

#define MSCM_IRCP4ISR11_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP4ISR11_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP4ISR11_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR11_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR11_CP7_INT_SHIFT)) & MSCM_IRCP4ISR11_CP7_INT_MASK)

#define MSCM_IRCP4ISR11_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP4ISR11_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP4ISR11_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR11_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR11_CP8_INT_SHIFT)) & MSCM_IRCP4ISR11_CP8_INT_MASK)

#define MSCM_IRCP4ISR11_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP4ISR11_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP4ISR11_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR11_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR11_CP9_INT_SHIFT)) & MSCM_IRCP4ISR11_CP9_INT_MASK)

#define MSCM_IRCP4ISR11_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP4ISR11_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP4ISR11_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP4ISR11_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR11_CP10_INT_SHIFT)) & MSCM_IRCP4ISR11_CP10_INT_MASK)

#define MSCM_IRCP4ISR11_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP4ISR11_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP4ISR11_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP4ISR11_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR11_CP11_INT_SHIFT)) & MSCM_IRCP4ISR11_CP11_INT_MASK)
/*! @} */

/*! @name IRCP4IGR11 - Interrupt Router CP4 Interrupt11 Generation Register */
/*! @{ */

#define MSCM_IRCP4IGR11_INT_EN_MASK              (0x1U)
#define MSCM_IRCP4IGR11_INT_EN_SHIFT             (0U)
#define MSCM_IRCP4IGR11_INT_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR11_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR11_INT_EN_SHIFT)) & MSCM_IRCP4IGR11_INT_EN_MASK)
/*! @} */

/*! @name IRCP4ISR12 - Interrupt Router CP4 Interrupt12 Status Register */
/*! @{ */

#define MSCM_IRCP4ISR12_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP4ISR12_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP4ISR12_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR12_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR12_CP0_INT_SHIFT)) & MSCM_IRCP4ISR12_CP0_INT_MASK)

#define MSCM_IRCP4ISR12_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP4ISR12_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP4ISR12_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR12_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR12_CP1_INT_SHIFT)) & MSCM_IRCP4ISR12_CP1_INT_MASK)

#define MSCM_IRCP4ISR12_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP4ISR12_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP4ISR12_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR12_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR12_CP2_INT_SHIFT)) & MSCM_IRCP4ISR12_CP2_INT_MASK)

#define MSCM_IRCP4ISR12_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP4ISR12_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP4ISR12_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR12_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR12_CP3_INT_SHIFT)) & MSCM_IRCP4ISR12_CP3_INT_MASK)

#define MSCM_IRCP4ISR12_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP4ISR12_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP4ISR12_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR12_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR12_CP4_INT_SHIFT)) & MSCM_IRCP4ISR12_CP4_INT_MASK)

#define MSCM_IRCP4ISR12_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP4ISR12_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP4ISR12_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR12_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR12_CP5_INT_SHIFT)) & MSCM_IRCP4ISR12_CP5_INT_MASK)

#define MSCM_IRCP4ISR12_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP4ISR12_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP4ISR12_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR12_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR12_CP6_INT_SHIFT)) & MSCM_IRCP4ISR12_CP6_INT_MASK)

#define MSCM_IRCP4ISR12_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP4ISR12_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP4ISR12_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR12_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR12_CP7_INT_SHIFT)) & MSCM_IRCP4ISR12_CP7_INT_MASK)

#define MSCM_IRCP4ISR12_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP4ISR12_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP4ISR12_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR12_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR12_CP8_INT_SHIFT)) & MSCM_IRCP4ISR12_CP8_INT_MASK)

#define MSCM_IRCP4ISR12_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP4ISR12_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP4ISR12_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR12_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR12_CP9_INT_SHIFT)) & MSCM_IRCP4ISR12_CP9_INT_MASK)

#define MSCM_IRCP4ISR12_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP4ISR12_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP4ISR12_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP4ISR12_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR12_CP10_INT_SHIFT)) & MSCM_IRCP4ISR12_CP10_INT_MASK)

#define MSCM_IRCP4ISR12_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP4ISR12_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP4ISR12_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP4ISR12_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR12_CP11_INT_SHIFT)) & MSCM_IRCP4ISR12_CP11_INT_MASK)
/*! @} */

/*! @name IRCP4IGR12 - Interrupt Router CP4 Interrupt12 Generation Register */
/*! @{ */

#define MSCM_IRCP4IGR12_INT_EN_MASK              (0x1U)
#define MSCM_IRCP4IGR12_INT_EN_SHIFT             (0U)
#define MSCM_IRCP4IGR12_INT_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR12_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR12_INT_EN_SHIFT)) & MSCM_IRCP4IGR12_INT_EN_MASK)
/*! @} */

/*! @name IRCP4ISR13 - Interrupt Router CP4 Interrupt13 Status Register */
/*! @{ */

#define MSCM_IRCP4ISR13_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP4ISR13_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP4ISR13_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR13_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR13_CP0_INT_SHIFT)) & MSCM_IRCP4ISR13_CP0_INT_MASK)

#define MSCM_IRCP4ISR13_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP4ISR13_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP4ISR13_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR13_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR13_CP1_INT_SHIFT)) & MSCM_IRCP4ISR13_CP1_INT_MASK)

#define MSCM_IRCP4ISR13_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP4ISR13_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP4ISR13_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR13_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR13_CP2_INT_SHIFT)) & MSCM_IRCP4ISR13_CP2_INT_MASK)

#define MSCM_IRCP4ISR13_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP4ISR13_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP4ISR13_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR13_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR13_CP3_INT_SHIFT)) & MSCM_IRCP4ISR13_CP3_INT_MASK)

#define MSCM_IRCP4ISR13_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP4ISR13_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP4ISR13_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR13_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR13_CP4_INT_SHIFT)) & MSCM_IRCP4ISR13_CP4_INT_MASK)

#define MSCM_IRCP4ISR13_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP4ISR13_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP4ISR13_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR13_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR13_CP5_INT_SHIFT)) & MSCM_IRCP4ISR13_CP5_INT_MASK)

#define MSCM_IRCP4ISR13_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP4ISR13_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP4ISR13_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR13_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR13_CP6_INT_SHIFT)) & MSCM_IRCP4ISR13_CP6_INT_MASK)

#define MSCM_IRCP4ISR13_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP4ISR13_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP4ISR13_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR13_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR13_CP7_INT_SHIFT)) & MSCM_IRCP4ISR13_CP7_INT_MASK)

#define MSCM_IRCP4ISR13_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP4ISR13_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP4ISR13_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR13_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR13_CP8_INT_SHIFT)) & MSCM_IRCP4ISR13_CP8_INT_MASK)

#define MSCM_IRCP4ISR13_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP4ISR13_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP4ISR13_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP4ISR13_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR13_CP9_INT_SHIFT)) & MSCM_IRCP4ISR13_CP9_INT_MASK)

#define MSCM_IRCP4ISR13_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP4ISR13_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP4ISR13_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP4ISR13_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR13_CP10_INT_SHIFT)) & MSCM_IRCP4ISR13_CP10_INT_MASK)

#define MSCM_IRCP4ISR13_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP4ISR13_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP4ISR13_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP4ISR13_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4ISR13_CP11_INT_SHIFT)) & MSCM_IRCP4ISR13_CP11_INT_MASK)
/*! @} */

/*! @name IRCP4IGR13 - Interrupt Router CP4 Interrupt13 Generation Register */
/*! @{ */

#define MSCM_IRCP4IGR13_INT_EN_MASK              (0x1U)
#define MSCM_IRCP4IGR13_INT_EN_SHIFT             (0U)
#define MSCM_IRCP4IGR13_INT_EN_WIDTH             (1U)
#define MSCM_IRCP4IGR13_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP4IGR13_INT_EN_SHIFT)) & MSCM_IRCP4IGR13_INT_EN_MASK)
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

#define MSCM_IRCP5ISR0_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP5ISR0_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP5ISR0_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR0_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR0_CP7_INT_SHIFT)) & MSCM_IRCP5ISR0_CP7_INT_MASK)

#define MSCM_IRCP5ISR0_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP5ISR0_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP5ISR0_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR0_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR0_CP8_INT_SHIFT)) & MSCM_IRCP5ISR0_CP8_INT_MASK)

#define MSCM_IRCP5ISR0_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP5ISR0_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP5ISR0_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR0_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR0_CP9_INT_SHIFT)) & MSCM_IRCP5ISR0_CP9_INT_MASK)

#define MSCM_IRCP5ISR0_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP5ISR0_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP5ISR0_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR0_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR0_CP10_INT_SHIFT)) & MSCM_IRCP5ISR0_CP10_INT_MASK)

#define MSCM_IRCP5ISR0_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP5ISR0_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP5ISR0_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR0_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR0_CP11_INT_SHIFT)) & MSCM_IRCP5ISR0_CP11_INT_MASK)
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

#define MSCM_IRCP5ISR1_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP5ISR1_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP5ISR1_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR1_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR1_CP7_INT_SHIFT)) & MSCM_IRCP5ISR1_CP7_INT_MASK)

#define MSCM_IRCP5ISR1_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP5ISR1_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP5ISR1_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR1_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR1_CP8_INT_SHIFT)) & MSCM_IRCP5ISR1_CP8_INT_MASK)

#define MSCM_IRCP5ISR1_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP5ISR1_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP5ISR1_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR1_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR1_CP9_INT_SHIFT)) & MSCM_IRCP5ISR1_CP9_INT_MASK)

#define MSCM_IRCP5ISR1_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP5ISR1_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP5ISR1_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR1_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR1_CP10_INT_SHIFT)) & MSCM_IRCP5ISR1_CP10_INT_MASK)

#define MSCM_IRCP5ISR1_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP5ISR1_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP5ISR1_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR1_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR1_CP11_INT_SHIFT)) & MSCM_IRCP5ISR1_CP11_INT_MASK)
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

#define MSCM_IRCP5ISR2_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP5ISR2_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP5ISR2_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR2_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR2_CP7_INT_SHIFT)) & MSCM_IRCP5ISR2_CP7_INT_MASK)

#define MSCM_IRCP5ISR2_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP5ISR2_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP5ISR2_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR2_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR2_CP8_INT_SHIFT)) & MSCM_IRCP5ISR2_CP8_INT_MASK)

#define MSCM_IRCP5ISR2_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP5ISR2_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP5ISR2_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR2_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR2_CP9_INT_SHIFT)) & MSCM_IRCP5ISR2_CP9_INT_MASK)

#define MSCM_IRCP5ISR2_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP5ISR2_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP5ISR2_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR2_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR2_CP10_INT_SHIFT)) & MSCM_IRCP5ISR2_CP10_INT_MASK)

#define MSCM_IRCP5ISR2_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP5ISR2_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP5ISR2_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR2_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR2_CP11_INT_SHIFT)) & MSCM_IRCP5ISR2_CP11_INT_MASK)
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

/*! @name IRCP5ISR5 - Interrupt Router CP5 Interrupt5 Status Register */
/*! @{ */

#define MSCM_IRCP5ISR5_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP5ISR5_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP5ISR5_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR5_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR5_CP0_INT_SHIFT)) & MSCM_IRCP5ISR5_CP0_INT_MASK)

#define MSCM_IRCP5ISR5_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP5ISR5_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP5ISR5_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR5_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR5_CP1_INT_SHIFT)) & MSCM_IRCP5ISR5_CP1_INT_MASK)

#define MSCM_IRCP5ISR5_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP5ISR5_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP5ISR5_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR5_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR5_CP2_INT_SHIFT)) & MSCM_IRCP5ISR5_CP2_INT_MASK)

#define MSCM_IRCP5ISR5_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP5ISR5_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP5ISR5_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR5_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR5_CP3_INT_SHIFT)) & MSCM_IRCP5ISR5_CP3_INT_MASK)

#define MSCM_IRCP5ISR5_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP5ISR5_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP5ISR5_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR5_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR5_CP4_INT_SHIFT)) & MSCM_IRCP5ISR5_CP4_INT_MASK)

#define MSCM_IRCP5ISR5_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP5ISR5_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP5ISR5_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR5_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR5_CP5_INT_SHIFT)) & MSCM_IRCP5ISR5_CP5_INT_MASK)

#define MSCM_IRCP5ISR5_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP5ISR5_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP5ISR5_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR5_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR5_CP6_INT_SHIFT)) & MSCM_IRCP5ISR5_CP6_INT_MASK)

#define MSCM_IRCP5ISR5_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP5ISR5_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP5ISR5_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR5_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR5_CP7_INT_SHIFT)) & MSCM_IRCP5ISR5_CP7_INT_MASK)

#define MSCM_IRCP5ISR5_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP5ISR5_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP5ISR5_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR5_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR5_CP8_INT_SHIFT)) & MSCM_IRCP5ISR5_CP8_INT_MASK)

#define MSCM_IRCP5ISR5_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP5ISR5_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP5ISR5_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR5_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR5_CP9_INT_SHIFT)) & MSCM_IRCP5ISR5_CP9_INT_MASK)

#define MSCM_IRCP5ISR5_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP5ISR5_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP5ISR5_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR5_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR5_CP10_INT_SHIFT)) & MSCM_IRCP5ISR5_CP10_INT_MASK)

#define MSCM_IRCP5ISR5_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP5ISR5_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP5ISR5_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR5_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR5_CP11_INT_SHIFT)) & MSCM_IRCP5ISR5_CP11_INT_MASK)
/*! @} */

/*! @name IRCP5IGR5 - Interrupt Router CP5 Interrupt5 Generation Register */
/*! @{ */

#define MSCM_IRCP5IGR5_INT_EN_MASK               (0x1U)
#define MSCM_IRCP5IGR5_INT_EN_SHIFT              (0U)
#define MSCM_IRCP5IGR5_INT_EN_WIDTH              (1U)
#define MSCM_IRCP5IGR5_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR5_INT_EN_SHIFT)) & MSCM_IRCP5IGR5_INT_EN_MASK)
/*! @} */

/*! @name IRCP5ISR6 - Interrupt Router CP5 Interrupt6 Status Register */
/*! @{ */

#define MSCM_IRCP5ISR6_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP5ISR6_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP5ISR6_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR6_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR6_CP0_INT_SHIFT)) & MSCM_IRCP5ISR6_CP0_INT_MASK)

#define MSCM_IRCP5ISR6_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP5ISR6_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP5ISR6_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR6_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR6_CP1_INT_SHIFT)) & MSCM_IRCP5ISR6_CP1_INT_MASK)

#define MSCM_IRCP5ISR6_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP5ISR6_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP5ISR6_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR6_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR6_CP2_INT_SHIFT)) & MSCM_IRCP5ISR6_CP2_INT_MASK)

#define MSCM_IRCP5ISR6_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP5ISR6_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP5ISR6_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR6_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR6_CP3_INT_SHIFT)) & MSCM_IRCP5ISR6_CP3_INT_MASK)

#define MSCM_IRCP5ISR6_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP5ISR6_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP5ISR6_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR6_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR6_CP4_INT_SHIFT)) & MSCM_IRCP5ISR6_CP4_INT_MASK)

#define MSCM_IRCP5ISR6_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP5ISR6_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP5ISR6_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR6_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR6_CP5_INT_SHIFT)) & MSCM_IRCP5ISR6_CP5_INT_MASK)

#define MSCM_IRCP5ISR6_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP5ISR6_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP5ISR6_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR6_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR6_CP6_INT_SHIFT)) & MSCM_IRCP5ISR6_CP6_INT_MASK)

#define MSCM_IRCP5ISR6_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP5ISR6_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP5ISR6_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR6_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR6_CP7_INT_SHIFT)) & MSCM_IRCP5ISR6_CP7_INT_MASK)

#define MSCM_IRCP5ISR6_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP5ISR6_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP5ISR6_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR6_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR6_CP8_INT_SHIFT)) & MSCM_IRCP5ISR6_CP8_INT_MASK)

#define MSCM_IRCP5ISR6_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP5ISR6_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP5ISR6_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR6_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR6_CP9_INT_SHIFT)) & MSCM_IRCP5ISR6_CP9_INT_MASK)

#define MSCM_IRCP5ISR6_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP5ISR6_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP5ISR6_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR6_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR6_CP10_INT_SHIFT)) & MSCM_IRCP5ISR6_CP10_INT_MASK)

#define MSCM_IRCP5ISR6_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP5ISR6_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP5ISR6_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR6_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR6_CP11_INT_SHIFT)) & MSCM_IRCP5ISR6_CP11_INT_MASK)
/*! @} */

/*! @name IRCP5IGR6 - Interrupt Router CP5 Interrupt6 Generation Register */
/*! @{ */

#define MSCM_IRCP5IGR6_INT_EN_MASK               (0x1U)
#define MSCM_IRCP5IGR6_INT_EN_SHIFT              (0U)
#define MSCM_IRCP5IGR6_INT_EN_WIDTH              (1U)
#define MSCM_IRCP5IGR6_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR6_INT_EN_SHIFT)) & MSCM_IRCP5IGR6_INT_EN_MASK)
/*! @} */

/*! @name IRCP5ISR7 - Interrupt Router CP5 Interrupt7 Status Register */
/*! @{ */

#define MSCM_IRCP5ISR7_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP5ISR7_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP5ISR7_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR7_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR7_CP0_INT_SHIFT)) & MSCM_IRCP5ISR7_CP0_INT_MASK)

#define MSCM_IRCP5ISR7_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP5ISR7_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP5ISR7_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR7_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR7_CP1_INT_SHIFT)) & MSCM_IRCP5ISR7_CP1_INT_MASK)

#define MSCM_IRCP5ISR7_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP5ISR7_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP5ISR7_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR7_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR7_CP2_INT_SHIFT)) & MSCM_IRCP5ISR7_CP2_INT_MASK)

#define MSCM_IRCP5ISR7_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP5ISR7_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP5ISR7_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR7_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR7_CP3_INT_SHIFT)) & MSCM_IRCP5ISR7_CP3_INT_MASK)

#define MSCM_IRCP5ISR7_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP5ISR7_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP5ISR7_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR7_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR7_CP4_INT_SHIFT)) & MSCM_IRCP5ISR7_CP4_INT_MASK)

#define MSCM_IRCP5ISR7_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP5ISR7_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP5ISR7_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR7_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR7_CP5_INT_SHIFT)) & MSCM_IRCP5ISR7_CP5_INT_MASK)

#define MSCM_IRCP5ISR7_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP5ISR7_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP5ISR7_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR7_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR7_CP6_INT_SHIFT)) & MSCM_IRCP5ISR7_CP6_INT_MASK)

#define MSCM_IRCP5ISR7_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP5ISR7_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP5ISR7_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR7_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR7_CP7_INT_SHIFT)) & MSCM_IRCP5ISR7_CP7_INT_MASK)

#define MSCM_IRCP5ISR7_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP5ISR7_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP5ISR7_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR7_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR7_CP8_INT_SHIFT)) & MSCM_IRCP5ISR7_CP8_INT_MASK)

#define MSCM_IRCP5ISR7_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP5ISR7_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP5ISR7_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR7_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR7_CP9_INT_SHIFT)) & MSCM_IRCP5ISR7_CP9_INT_MASK)

#define MSCM_IRCP5ISR7_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP5ISR7_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP5ISR7_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR7_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR7_CP10_INT_SHIFT)) & MSCM_IRCP5ISR7_CP10_INT_MASK)

#define MSCM_IRCP5ISR7_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP5ISR7_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP5ISR7_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR7_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR7_CP11_INT_SHIFT)) & MSCM_IRCP5ISR7_CP11_INT_MASK)
/*! @} */

/*! @name IRCP5IGR7 - Interrupt Router CP5 Interrupt7 Generation Register */
/*! @{ */

#define MSCM_IRCP5IGR7_INT_EN_MASK               (0x1U)
#define MSCM_IRCP5IGR7_INT_EN_SHIFT              (0U)
#define MSCM_IRCP5IGR7_INT_EN_WIDTH              (1U)
#define MSCM_IRCP5IGR7_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR7_INT_EN_SHIFT)) & MSCM_IRCP5IGR7_INT_EN_MASK)
/*! @} */

/*! @name IRCP5ISR8 - Interrupt Router CP5 Interrupt8 Status Register */
/*! @{ */

#define MSCM_IRCP5ISR8_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP5ISR8_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP5ISR8_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR8_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR8_CP0_INT_SHIFT)) & MSCM_IRCP5ISR8_CP0_INT_MASK)

#define MSCM_IRCP5ISR8_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP5ISR8_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP5ISR8_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR8_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR8_CP1_INT_SHIFT)) & MSCM_IRCP5ISR8_CP1_INT_MASK)

#define MSCM_IRCP5ISR8_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP5ISR8_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP5ISR8_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR8_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR8_CP2_INT_SHIFT)) & MSCM_IRCP5ISR8_CP2_INT_MASK)

#define MSCM_IRCP5ISR8_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP5ISR8_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP5ISR8_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR8_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR8_CP3_INT_SHIFT)) & MSCM_IRCP5ISR8_CP3_INT_MASK)

#define MSCM_IRCP5ISR8_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP5ISR8_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP5ISR8_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR8_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR8_CP4_INT_SHIFT)) & MSCM_IRCP5ISR8_CP4_INT_MASK)

#define MSCM_IRCP5ISR8_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP5ISR8_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP5ISR8_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR8_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR8_CP5_INT_SHIFT)) & MSCM_IRCP5ISR8_CP5_INT_MASK)

#define MSCM_IRCP5ISR8_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP5ISR8_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP5ISR8_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR8_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR8_CP6_INT_SHIFT)) & MSCM_IRCP5ISR8_CP6_INT_MASK)

#define MSCM_IRCP5ISR8_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP5ISR8_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP5ISR8_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR8_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR8_CP7_INT_SHIFT)) & MSCM_IRCP5ISR8_CP7_INT_MASK)

#define MSCM_IRCP5ISR8_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP5ISR8_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP5ISR8_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR8_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR8_CP8_INT_SHIFT)) & MSCM_IRCP5ISR8_CP8_INT_MASK)

#define MSCM_IRCP5ISR8_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP5ISR8_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP5ISR8_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR8_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR8_CP9_INT_SHIFT)) & MSCM_IRCP5ISR8_CP9_INT_MASK)

#define MSCM_IRCP5ISR8_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP5ISR8_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP5ISR8_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR8_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR8_CP10_INT_SHIFT)) & MSCM_IRCP5ISR8_CP10_INT_MASK)

#define MSCM_IRCP5ISR8_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP5ISR8_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP5ISR8_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR8_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR8_CP11_INT_SHIFT)) & MSCM_IRCP5ISR8_CP11_INT_MASK)
/*! @} */

/*! @name IRCP5IGR8 - Interrupt Router CP5 Interrupt8 Generation Register */
/*! @{ */

#define MSCM_IRCP5IGR8_INT_EN_MASK               (0x1U)
#define MSCM_IRCP5IGR8_INT_EN_SHIFT              (0U)
#define MSCM_IRCP5IGR8_INT_EN_WIDTH              (1U)
#define MSCM_IRCP5IGR8_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR8_INT_EN_SHIFT)) & MSCM_IRCP5IGR8_INT_EN_MASK)
/*! @} */

/*! @name IRCP5ISR9 - Interrupt Router CP5 Interrupt9 Status Register */
/*! @{ */

#define MSCM_IRCP5ISR9_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP5ISR9_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP5ISR9_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR9_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR9_CP0_INT_SHIFT)) & MSCM_IRCP5ISR9_CP0_INT_MASK)

#define MSCM_IRCP5ISR9_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP5ISR9_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP5ISR9_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR9_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR9_CP1_INT_SHIFT)) & MSCM_IRCP5ISR9_CP1_INT_MASK)

#define MSCM_IRCP5ISR9_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP5ISR9_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP5ISR9_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR9_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR9_CP2_INT_SHIFT)) & MSCM_IRCP5ISR9_CP2_INT_MASK)

#define MSCM_IRCP5ISR9_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP5ISR9_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP5ISR9_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR9_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR9_CP3_INT_SHIFT)) & MSCM_IRCP5ISR9_CP3_INT_MASK)

#define MSCM_IRCP5ISR9_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP5ISR9_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP5ISR9_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR9_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR9_CP4_INT_SHIFT)) & MSCM_IRCP5ISR9_CP4_INT_MASK)

#define MSCM_IRCP5ISR9_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP5ISR9_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP5ISR9_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR9_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR9_CP5_INT_SHIFT)) & MSCM_IRCP5ISR9_CP5_INT_MASK)

#define MSCM_IRCP5ISR9_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP5ISR9_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP5ISR9_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR9_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR9_CP6_INT_SHIFT)) & MSCM_IRCP5ISR9_CP6_INT_MASK)

#define MSCM_IRCP5ISR9_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP5ISR9_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP5ISR9_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR9_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR9_CP7_INT_SHIFT)) & MSCM_IRCP5ISR9_CP7_INT_MASK)

#define MSCM_IRCP5ISR9_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP5ISR9_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP5ISR9_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR9_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR9_CP8_INT_SHIFT)) & MSCM_IRCP5ISR9_CP8_INT_MASK)

#define MSCM_IRCP5ISR9_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP5ISR9_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP5ISR9_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP5ISR9_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR9_CP9_INT_SHIFT)) & MSCM_IRCP5ISR9_CP9_INT_MASK)

#define MSCM_IRCP5ISR9_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP5ISR9_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP5ISR9_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR9_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR9_CP10_INT_SHIFT)) & MSCM_IRCP5ISR9_CP10_INT_MASK)

#define MSCM_IRCP5ISR9_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP5ISR9_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP5ISR9_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR9_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR9_CP11_INT_SHIFT)) & MSCM_IRCP5ISR9_CP11_INT_MASK)
/*! @} */

/*! @name IRCP5IGR9 - Interrupt Router CP5 Interrupt9 Generation Register */
/*! @{ */

#define MSCM_IRCP5IGR9_INT_EN_MASK               (0x1U)
#define MSCM_IRCP5IGR9_INT_EN_SHIFT              (0U)
#define MSCM_IRCP5IGR9_INT_EN_WIDTH              (1U)
#define MSCM_IRCP5IGR9_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR9_INT_EN_SHIFT)) & MSCM_IRCP5IGR9_INT_EN_MASK)
/*! @} */

/*! @name IRCP5ISR10 - Interrupt Router CP5 Interrupt10 Status Register */
/*! @{ */

#define MSCM_IRCP5ISR10_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP5ISR10_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP5ISR10_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR10_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR10_CP0_INT_SHIFT)) & MSCM_IRCP5ISR10_CP0_INT_MASK)

#define MSCM_IRCP5ISR10_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP5ISR10_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP5ISR10_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR10_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR10_CP1_INT_SHIFT)) & MSCM_IRCP5ISR10_CP1_INT_MASK)

#define MSCM_IRCP5ISR10_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP5ISR10_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP5ISR10_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR10_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR10_CP2_INT_SHIFT)) & MSCM_IRCP5ISR10_CP2_INT_MASK)

#define MSCM_IRCP5ISR10_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP5ISR10_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP5ISR10_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR10_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR10_CP3_INT_SHIFT)) & MSCM_IRCP5ISR10_CP3_INT_MASK)

#define MSCM_IRCP5ISR10_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP5ISR10_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP5ISR10_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR10_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR10_CP4_INT_SHIFT)) & MSCM_IRCP5ISR10_CP4_INT_MASK)

#define MSCM_IRCP5ISR10_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP5ISR10_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP5ISR10_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR10_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR10_CP5_INT_SHIFT)) & MSCM_IRCP5ISR10_CP5_INT_MASK)

#define MSCM_IRCP5ISR10_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP5ISR10_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP5ISR10_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR10_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR10_CP6_INT_SHIFT)) & MSCM_IRCP5ISR10_CP6_INT_MASK)

#define MSCM_IRCP5ISR10_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP5ISR10_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP5ISR10_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR10_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR10_CP7_INT_SHIFT)) & MSCM_IRCP5ISR10_CP7_INT_MASK)

#define MSCM_IRCP5ISR10_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP5ISR10_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP5ISR10_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR10_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR10_CP8_INT_SHIFT)) & MSCM_IRCP5ISR10_CP8_INT_MASK)

#define MSCM_IRCP5ISR10_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP5ISR10_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP5ISR10_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR10_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR10_CP9_INT_SHIFT)) & MSCM_IRCP5ISR10_CP9_INT_MASK)

#define MSCM_IRCP5ISR10_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP5ISR10_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP5ISR10_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP5ISR10_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR10_CP10_INT_SHIFT)) & MSCM_IRCP5ISR10_CP10_INT_MASK)

#define MSCM_IRCP5ISR10_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP5ISR10_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP5ISR10_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP5ISR10_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR10_CP11_INT_SHIFT)) & MSCM_IRCP5ISR10_CP11_INT_MASK)
/*! @} */

/*! @name IRCP5IGR10 - Interrupt Router CP5 Interrupt10 Generation Register */
/*! @{ */

#define MSCM_IRCP5IGR10_INT_EN_MASK              (0x1U)
#define MSCM_IRCP5IGR10_INT_EN_SHIFT             (0U)
#define MSCM_IRCP5IGR10_INT_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR10_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR10_INT_EN_SHIFT)) & MSCM_IRCP5IGR10_INT_EN_MASK)
/*! @} */

/*! @name IRCP5ISR11 - Interrupt Router CP5 Interrupt11 Status Register */
/*! @{ */

#define MSCM_IRCP5ISR11_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP5ISR11_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP5ISR11_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR11_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR11_CP0_INT_SHIFT)) & MSCM_IRCP5ISR11_CP0_INT_MASK)

#define MSCM_IRCP5ISR11_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP5ISR11_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP5ISR11_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR11_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR11_CP1_INT_SHIFT)) & MSCM_IRCP5ISR11_CP1_INT_MASK)

#define MSCM_IRCP5ISR11_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP5ISR11_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP5ISR11_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR11_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR11_CP2_INT_SHIFT)) & MSCM_IRCP5ISR11_CP2_INT_MASK)

#define MSCM_IRCP5ISR11_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP5ISR11_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP5ISR11_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR11_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR11_CP3_INT_SHIFT)) & MSCM_IRCP5ISR11_CP3_INT_MASK)

#define MSCM_IRCP5ISR11_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP5ISR11_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP5ISR11_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR11_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR11_CP4_INT_SHIFT)) & MSCM_IRCP5ISR11_CP4_INT_MASK)

#define MSCM_IRCP5ISR11_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP5ISR11_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP5ISR11_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR11_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR11_CP5_INT_SHIFT)) & MSCM_IRCP5ISR11_CP5_INT_MASK)

#define MSCM_IRCP5ISR11_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP5ISR11_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP5ISR11_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR11_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR11_CP6_INT_SHIFT)) & MSCM_IRCP5ISR11_CP6_INT_MASK)

#define MSCM_IRCP5ISR11_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP5ISR11_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP5ISR11_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR11_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR11_CP7_INT_SHIFT)) & MSCM_IRCP5ISR11_CP7_INT_MASK)

#define MSCM_IRCP5ISR11_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP5ISR11_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP5ISR11_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR11_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR11_CP8_INT_SHIFT)) & MSCM_IRCP5ISR11_CP8_INT_MASK)

#define MSCM_IRCP5ISR11_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP5ISR11_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP5ISR11_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR11_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR11_CP9_INT_SHIFT)) & MSCM_IRCP5ISR11_CP9_INT_MASK)

#define MSCM_IRCP5ISR11_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP5ISR11_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP5ISR11_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP5ISR11_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR11_CP10_INT_SHIFT)) & MSCM_IRCP5ISR11_CP10_INT_MASK)

#define MSCM_IRCP5ISR11_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP5ISR11_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP5ISR11_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP5ISR11_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR11_CP11_INT_SHIFT)) & MSCM_IRCP5ISR11_CP11_INT_MASK)
/*! @} */

/*! @name IRCP5IGR11 - Interrupt Router CP5 Interrupt11 Generation Register */
/*! @{ */

#define MSCM_IRCP5IGR11_INT_EN_MASK              (0x1U)
#define MSCM_IRCP5IGR11_INT_EN_SHIFT             (0U)
#define MSCM_IRCP5IGR11_INT_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR11_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR11_INT_EN_SHIFT)) & MSCM_IRCP5IGR11_INT_EN_MASK)
/*! @} */

/*! @name IRCP5ISR12 - Interrupt Router CP5 Interrupt12 Status Register */
/*! @{ */

#define MSCM_IRCP5ISR12_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP5ISR12_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP5ISR12_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR12_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR12_CP0_INT_SHIFT)) & MSCM_IRCP5ISR12_CP0_INT_MASK)

#define MSCM_IRCP5ISR12_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP5ISR12_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP5ISR12_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR12_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR12_CP1_INT_SHIFT)) & MSCM_IRCP5ISR12_CP1_INT_MASK)

#define MSCM_IRCP5ISR12_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP5ISR12_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP5ISR12_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR12_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR12_CP2_INT_SHIFT)) & MSCM_IRCP5ISR12_CP2_INT_MASK)

#define MSCM_IRCP5ISR12_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP5ISR12_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP5ISR12_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR12_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR12_CP3_INT_SHIFT)) & MSCM_IRCP5ISR12_CP3_INT_MASK)

#define MSCM_IRCP5ISR12_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP5ISR12_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP5ISR12_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR12_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR12_CP4_INT_SHIFT)) & MSCM_IRCP5ISR12_CP4_INT_MASK)

#define MSCM_IRCP5ISR12_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP5ISR12_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP5ISR12_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR12_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR12_CP5_INT_SHIFT)) & MSCM_IRCP5ISR12_CP5_INT_MASK)

#define MSCM_IRCP5ISR12_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP5ISR12_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP5ISR12_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR12_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR12_CP6_INT_SHIFT)) & MSCM_IRCP5ISR12_CP6_INT_MASK)

#define MSCM_IRCP5ISR12_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP5ISR12_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP5ISR12_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR12_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR12_CP7_INT_SHIFT)) & MSCM_IRCP5ISR12_CP7_INT_MASK)

#define MSCM_IRCP5ISR12_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP5ISR12_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP5ISR12_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR12_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR12_CP8_INT_SHIFT)) & MSCM_IRCP5ISR12_CP8_INT_MASK)

#define MSCM_IRCP5ISR12_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP5ISR12_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP5ISR12_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR12_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR12_CP9_INT_SHIFT)) & MSCM_IRCP5ISR12_CP9_INT_MASK)

#define MSCM_IRCP5ISR12_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP5ISR12_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP5ISR12_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP5ISR12_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR12_CP10_INT_SHIFT)) & MSCM_IRCP5ISR12_CP10_INT_MASK)

#define MSCM_IRCP5ISR12_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP5ISR12_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP5ISR12_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP5ISR12_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR12_CP11_INT_SHIFT)) & MSCM_IRCP5ISR12_CP11_INT_MASK)
/*! @} */

/*! @name IRCP5IGR12 - Interrupt Router CP5 Interrupt12 Generation Register */
/*! @{ */

#define MSCM_IRCP5IGR12_INT_EN_MASK              (0x1U)
#define MSCM_IRCP5IGR12_INT_EN_SHIFT             (0U)
#define MSCM_IRCP5IGR12_INT_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR12_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR12_INT_EN_SHIFT)) & MSCM_IRCP5IGR12_INT_EN_MASK)
/*! @} */

/*! @name IRCP5ISR13 - Interrupt Router CP5 Interrupt13 Status Register */
/*! @{ */

#define MSCM_IRCP5ISR13_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP5ISR13_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP5ISR13_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR13_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR13_CP0_INT_SHIFT)) & MSCM_IRCP5ISR13_CP0_INT_MASK)

#define MSCM_IRCP5ISR13_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP5ISR13_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP5ISR13_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR13_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR13_CP1_INT_SHIFT)) & MSCM_IRCP5ISR13_CP1_INT_MASK)

#define MSCM_IRCP5ISR13_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP5ISR13_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP5ISR13_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR13_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR13_CP2_INT_SHIFT)) & MSCM_IRCP5ISR13_CP2_INT_MASK)

#define MSCM_IRCP5ISR13_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP5ISR13_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP5ISR13_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR13_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR13_CP3_INT_SHIFT)) & MSCM_IRCP5ISR13_CP3_INT_MASK)

#define MSCM_IRCP5ISR13_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP5ISR13_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP5ISR13_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR13_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR13_CP4_INT_SHIFT)) & MSCM_IRCP5ISR13_CP4_INT_MASK)

#define MSCM_IRCP5ISR13_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP5ISR13_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP5ISR13_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR13_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR13_CP5_INT_SHIFT)) & MSCM_IRCP5ISR13_CP5_INT_MASK)

#define MSCM_IRCP5ISR13_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP5ISR13_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP5ISR13_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR13_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR13_CP6_INT_SHIFT)) & MSCM_IRCP5ISR13_CP6_INT_MASK)

#define MSCM_IRCP5ISR13_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP5ISR13_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP5ISR13_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR13_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR13_CP7_INT_SHIFT)) & MSCM_IRCP5ISR13_CP7_INT_MASK)

#define MSCM_IRCP5ISR13_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP5ISR13_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP5ISR13_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR13_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR13_CP8_INT_SHIFT)) & MSCM_IRCP5ISR13_CP8_INT_MASK)

#define MSCM_IRCP5ISR13_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP5ISR13_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP5ISR13_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP5ISR13_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR13_CP9_INT_SHIFT)) & MSCM_IRCP5ISR13_CP9_INT_MASK)

#define MSCM_IRCP5ISR13_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP5ISR13_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP5ISR13_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP5ISR13_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR13_CP10_INT_SHIFT)) & MSCM_IRCP5ISR13_CP10_INT_MASK)

#define MSCM_IRCP5ISR13_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP5ISR13_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP5ISR13_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP5ISR13_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5ISR13_CP11_INT_SHIFT)) & MSCM_IRCP5ISR13_CP11_INT_MASK)
/*! @} */

/*! @name IRCP5IGR13 - Interrupt Router CP5 Interrupt13 Generation Register */
/*! @{ */

#define MSCM_IRCP5IGR13_INT_EN_MASK              (0x1U)
#define MSCM_IRCP5IGR13_INT_EN_SHIFT             (0U)
#define MSCM_IRCP5IGR13_INT_EN_WIDTH             (1U)
#define MSCM_IRCP5IGR13_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP5IGR13_INT_EN_SHIFT)) & MSCM_IRCP5IGR13_INT_EN_MASK)
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

#define MSCM_IRCP6ISR0_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP6ISR0_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP6ISR0_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR0_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR0_CP7_INT_SHIFT)) & MSCM_IRCP6ISR0_CP7_INT_MASK)

#define MSCM_IRCP6ISR0_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP6ISR0_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP6ISR0_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR0_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR0_CP8_INT_SHIFT)) & MSCM_IRCP6ISR0_CP8_INT_MASK)

#define MSCM_IRCP6ISR0_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP6ISR0_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP6ISR0_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR0_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR0_CP9_INT_SHIFT)) & MSCM_IRCP6ISR0_CP9_INT_MASK)

#define MSCM_IRCP6ISR0_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP6ISR0_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP6ISR0_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR0_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR0_CP10_INT_SHIFT)) & MSCM_IRCP6ISR0_CP10_INT_MASK)

#define MSCM_IRCP6ISR0_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP6ISR0_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP6ISR0_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR0_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR0_CP11_INT_SHIFT)) & MSCM_IRCP6ISR0_CP11_INT_MASK)
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

#define MSCM_IRCP6ISR1_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP6ISR1_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP6ISR1_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR1_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR1_CP7_INT_SHIFT)) & MSCM_IRCP6ISR1_CP7_INT_MASK)

#define MSCM_IRCP6ISR1_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP6ISR1_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP6ISR1_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR1_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR1_CP8_INT_SHIFT)) & MSCM_IRCP6ISR1_CP8_INT_MASK)

#define MSCM_IRCP6ISR1_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP6ISR1_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP6ISR1_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR1_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR1_CP9_INT_SHIFT)) & MSCM_IRCP6ISR1_CP9_INT_MASK)

#define MSCM_IRCP6ISR1_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP6ISR1_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP6ISR1_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR1_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR1_CP10_INT_SHIFT)) & MSCM_IRCP6ISR1_CP10_INT_MASK)

#define MSCM_IRCP6ISR1_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP6ISR1_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP6ISR1_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR1_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR1_CP11_INT_SHIFT)) & MSCM_IRCP6ISR1_CP11_INT_MASK)
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

#define MSCM_IRCP6ISR2_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP6ISR2_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP6ISR2_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR2_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR2_CP7_INT_SHIFT)) & MSCM_IRCP6ISR2_CP7_INT_MASK)

#define MSCM_IRCP6ISR2_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP6ISR2_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP6ISR2_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR2_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR2_CP8_INT_SHIFT)) & MSCM_IRCP6ISR2_CP8_INT_MASK)

#define MSCM_IRCP6ISR2_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP6ISR2_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP6ISR2_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR2_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR2_CP9_INT_SHIFT)) & MSCM_IRCP6ISR2_CP9_INT_MASK)

#define MSCM_IRCP6ISR2_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP6ISR2_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP6ISR2_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR2_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR2_CP10_INT_SHIFT)) & MSCM_IRCP6ISR2_CP10_INT_MASK)

#define MSCM_IRCP6ISR2_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP6ISR2_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP6ISR2_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR2_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR2_CP11_INT_SHIFT)) & MSCM_IRCP6ISR2_CP11_INT_MASK)
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

/*! @name IRCP6ISR5 - Interrupt Router CP6 Interrupt5 Status Register */
/*! @{ */

#define MSCM_IRCP6ISR5_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP6ISR5_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP6ISR5_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR5_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR5_CP0_INT_SHIFT)) & MSCM_IRCP6ISR5_CP0_INT_MASK)

#define MSCM_IRCP6ISR5_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP6ISR5_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP6ISR5_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR5_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR5_CP1_INT_SHIFT)) & MSCM_IRCP6ISR5_CP1_INT_MASK)

#define MSCM_IRCP6ISR5_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP6ISR5_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP6ISR5_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR5_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR5_CP2_INT_SHIFT)) & MSCM_IRCP6ISR5_CP2_INT_MASK)

#define MSCM_IRCP6ISR5_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP6ISR5_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP6ISR5_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR5_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR5_CP3_INT_SHIFT)) & MSCM_IRCP6ISR5_CP3_INT_MASK)

#define MSCM_IRCP6ISR5_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP6ISR5_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP6ISR5_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR5_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR5_CP4_INT_SHIFT)) & MSCM_IRCP6ISR5_CP4_INT_MASK)

#define MSCM_IRCP6ISR5_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP6ISR5_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP6ISR5_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR5_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR5_CP5_INT_SHIFT)) & MSCM_IRCP6ISR5_CP5_INT_MASK)

#define MSCM_IRCP6ISR5_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP6ISR5_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP6ISR5_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR5_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR5_CP6_INT_SHIFT)) & MSCM_IRCP6ISR5_CP6_INT_MASK)

#define MSCM_IRCP6ISR5_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP6ISR5_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP6ISR5_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR5_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR5_CP7_INT_SHIFT)) & MSCM_IRCP6ISR5_CP7_INT_MASK)

#define MSCM_IRCP6ISR5_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP6ISR5_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP6ISR5_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR5_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR5_CP8_INT_SHIFT)) & MSCM_IRCP6ISR5_CP8_INT_MASK)

#define MSCM_IRCP6ISR5_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP6ISR5_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP6ISR5_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR5_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR5_CP9_INT_SHIFT)) & MSCM_IRCP6ISR5_CP9_INT_MASK)

#define MSCM_IRCP6ISR5_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP6ISR5_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP6ISR5_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR5_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR5_CP10_INT_SHIFT)) & MSCM_IRCP6ISR5_CP10_INT_MASK)

#define MSCM_IRCP6ISR5_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP6ISR5_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP6ISR5_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR5_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR5_CP11_INT_SHIFT)) & MSCM_IRCP6ISR5_CP11_INT_MASK)
/*! @} */

/*! @name IRCP6IGR5 - Interrupt Router CP6 Interrupt5 Generation Register */
/*! @{ */

#define MSCM_IRCP6IGR5_INT_EN_MASK               (0x1U)
#define MSCM_IRCP6IGR5_INT_EN_SHIFT              (0U)
#define MSCM_IRCP6IGR5_INT_EN_WIDTH              (1U)
#define MSCM_IRCP6IGR5_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR5_INT_EN_SHIFT)) & MSCM_IRCP6IGR5_INT_EN_MASK)
/*! @} */

/*! @name IRCP6ISR6 - Interrupt Router CP6 Interrupt6 Status Register */
/*! @{ */

#define MSCM_IRCP6ISR6_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP6ISR6_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP6ISR6_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR6_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR6_CP0_INT_SHIFT)) & MSCM_IRCP6ISR6_CP0_INT_MASK)

#define MSCM_IRCP6ISR6_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP6ISR6_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP6ISR6_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR6_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR6_CP1_INT_SHIFT)) & MSCM_IRCP6ISR6_CP1_INT_MASK)

#define MSCM_IRCP6ISR6_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP6ISR6_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP6ISR6_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR6_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR6_CP2_INT_SHIFT)) & MSCM_IRCP6ISR6_CP2_INT_MASK)

#define MSCM_IRCP6ISR6_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP6ISR6_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP6ISR6_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR6_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR6_CP3_INT_SHIFT)) & MSCM_IRCP6ISR6_CP3_INT_MASK)

#define MSCM_IRCP6ISR6_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP6ISR6_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP6ISR6_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR6_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR6_CP4_INT_SHIFT)) & MSCM_IRCP6ISR6_CP4_INT_MASK)

#define MSCM_IRCP6ISR6_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP6ISR6_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP6ISR6_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR6_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR6_CP5_INT_SHIFT)) & MSCM_IRCP6ISR6_CP5_INT_MASK)

#define MSCM_IRCP6ISR6_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP6ISR6_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP6ISR6_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR6_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR6_CP6_INT_SHIFT)) & MSCM_IRCP6ISR6_CP6_INT_MASK)

#define MSCM_IRCP6ISR6_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP6ISR6_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP6ISR6_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR6_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR6_CP7_INT_SHIFT)) & MSCM_IRCP6ISR6_CP7_INT_MASK)

#define MSCM_IRCP6ISR6_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP6ISR6_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP6ISR6_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR6_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR6_CP8_INT_SHIFT)) & MSCM_IRCP6ISR6_CP8_INT_MASK)

#define MSCM_IRCP6ISR6_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP6ISR6_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP6ISR6_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR6_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR6_CP9_INT_SHIFT)) & MSCM_IRCP6ISR6_CP9_INT_MASK)

#define MSCM_IRCP6ISR6_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP6ISR6_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP6ISR6_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR6_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR6_CP10_INT_SHIFT)) & MSCM_IRCP6ISR6_CP10_INT_MASK)

#define MSCM_IRCP6ISR6_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP6ISR6_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP6ISR6_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR6_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR6_CP11_INT_SHIFT)) & MSCM_IRCP6ISR6_CP11_INT_MASK)
/*! @} */

/*! @name IRCP6IGR6 - Interrupt Router CP6 Interrupt6 Generation Register */
/*! @{ */

#define MSCM_IRCP6IGR6_INT_EN_MASK               (0x1U)
#define MSCM_IRCP6IGR6_INT_EN_SHIFT              (0U)
#define MSCM_IRCP6IGR6_INT_EN_WIDTH              (1U)
#define MSCM_IRCP6IGR6_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR6_INT_EN_SHIFT)) & MSCM_IRCP6IGR6_INT_EN_MASK)
/*! @} */

/*! @name IRCP6ISR7 - Interrupt Router CP6 Interrupt7 Status Register */
/*! @{ */

#define MSCM_IRCP6ISR7_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP6ISR7_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP6ISR7_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR7_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR7_CP0_INT_SHIFT)) & MSCM_IRCP6ISR7_CP0_INT_MASK)

#define MSCM_IRCP6ISR7_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP6ISR7_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP6ISR7_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR7_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR7_CP1_INT_SHIFT)) & MSCM_IRCP6ISR7_CP1_INT_MASK)

#define MSCM_IRCP6ISR7_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP6ISR7_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP6ISR7_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR7_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR7_CP2_INT_SHIFT)) & MSCM_IRCP6ISR7_CP2_INT_MASK)

#define MSCM_IRCP6ISR7_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP6ISR7_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP6ISR7_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR7_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR7_CP3_INT_SHIFT)) & MSCM_IRCP6ISR7_CP3_INT_MASK)

#define MSCM_IRCP6ISR7_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP6ISR7_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP6ISR7_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR7_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR7_CP4_INT_SHIFT)) & MSCM_IRCP6ISR7_CP4_INT_MASK)

#define MSCM_IRCP6ISR7_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP6ISR7_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP6ISR7_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR7_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR7_CP5_INT_SHIFT)) & MSCM_IRCP6ISR7_CP5_INT_MASK)

#define MSCM_IRCP6ISR7_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP6ISR7_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP6ISR7_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR7_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR7_CP6_INT_SHIFT)) & MSCM_IRCP6ISR7_CP6_INT_MASK)

#define MSCM_IRCP6ISR7_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP6ISR7_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP6ISR7_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR7_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR7_CP7_INT_SHIFT)) & MSCM_IRCP6ISR7_CP7_INT_MASK)

#define MSCM_IRCP6ISR7_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP6ISR7_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP6ISR7_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR7_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR7_CP8_INT_SHIFT)) & MSCM_IRCP6ISR7_CP8_INT_MASK)

#define MSCM_IRCP6ISR7_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP6ISR7_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP6ISR7_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR7_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR7_CP9_INT_SHIFT)) & MSCM_IRCP6ISR7_CP9_INT_MASK)

#define MSCM_IRCP6ISR7_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP6ISR7_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP6ISR7_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR7_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR7_CP10_INT_SHIFT)) & MSCM_IRCP6ISR7_CP10_INT_MASK)

#define MSCM_IRCP6ISR7_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP6ISR7_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP6ISR7_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR7_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR7_CP11_INT_SHIFT)) & MSCM_IRCP6ISR7_CP11_INT_MASK)
/*! @} */

/*! @name IRCP6IGR7 - Interrupt Router CP6 Interrupt7 Generation Register */
/*! @{ */

#define MSCM_IRCP6IGR7_INT_EN_MASK               (0x1U)
#define MSCM_IRCP6IGR7_INT_EN_SHIFT              (0U)
#define MSCM_IRCP6IGR7_INT_EN_WIDTH              (1U)
#define MSCM_IRCP6IGR7_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR7_INT_EN_SHIFT)) & MSCM_IRCP6IGR7_INT_EN_MASK)
/*! @} */

/*! @name IRCP6ISR8 - Interrupt Router CP6 Interrupt8 Status Register */
/*! @{ */

#define MSCM_IRCP6ISR8_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP6ISR8_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP6ISR8_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR8_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR8_CP0_INT_SHIFT)) & MSCM_IRCP6ISR8_CP0_INT_MASK)

#define MSCM_IRCP6ISR8_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP6ISR8_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP6ISR8_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR8_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR8_CP1_INT_SHIFT)) & MSCM_IRCP6ISR8_CP1_INT_MASK)

#define MSCM_IRCP6ISR8_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP6ISR8_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP6ISR8_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR8_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR8_CP2_INT_SHIFT)) & MSCM_IRCP6ISR8_CP2_INT_MASK)

#define MSCM_IRCP6ISR8_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP6ISR8_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP6ISR8_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR8_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR8_CP3_INT_SHIFT)) & MSCM_IRCP6ISR8_CP3_INT_MASK)

#define MSCM_IRCP6ISR8_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP6ISR8_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP6ISR8_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR8_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR8_CP4_INT_SHIFT)) & MSCM_IRCP6ISR8_CP4_INT_MASK)

#define MSCM_IRCP6ISR8_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP6ISR8_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP6ISR8_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR8_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR8_CP5_INT_SHIFT)) & MSCM_IRCP6ISR8_CP5_INT_MASK)

#define MSCM_IRCP6ISR8_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP6ISR8_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP6ISR8_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR8_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR8_CP6_INT_SHIFT)) & MSCM_IRCP6ISR8_CP6_INT_MASK)

#define MSCM_IRCP6ISR8_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP6ISR8_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP6ISR8_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR8_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR8_CP7_INT_SHIFT)) & MSCM_IRCP6ISR8_CP7_INT_MASK)

#define MSCM_IRCP6ISR8_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP6ISR8_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP6ISR8_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR8_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR8_CP8_INT_SHIFT)) & MSCM_IRCP6ISR8_CP8_INT_MASK)

#define MSCM_IRCP6ISR8_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP6ISR8_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP6ISR8_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR8_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR8_CP9_INT_SHIFT)) & MSCM_IRCP6ISR8_CP9_INT_MASK)

#define MSCM_IRCP6ISR8_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP6ISR8_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP6ISR8_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR8_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR8_CP10_INT_SHIFT)) & MSCM_IRCP6ISR8_CP10_INT_MASK)

#define MSCM_IRCP6ISR8_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP6ISR8_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP6ISR8_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR8_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR8_CP11_INT_SHIFT)) & MSCM_IRCP6ISR8_CP11_INT_MASK)
/*! @} */

/*! @name IRCP6IGR8 - Interrupt Router CP6 Interrupt8 Generation Register */
/*! @{ */

#define MSCM_IRCP6IGR8_INT_EN_MASK               (0x1U)
#define MSCM_IRCP6IGR8_INT_EN_SHIFT              (0U)
#define MSCM_IRCP6IGR8_INT_EN_WIDTH              (1U)
#define MSCM_IRCP6IGR8_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR8_INT_EN_SHIFT)) & MSCM_IRCP6IGR8_INT_EN_MASK)
/*! @} */

/*! @name IRCP6ISR9 - Interrupt Router CP6 Interrupt9 Status Register */
/*! @{ */

#define MSCM_IRCP6ISR9_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP6ISR9_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP6ISR9_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR9_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR9_CP0_INT_SHIFT)) & MSCM_IRCP6ISR9_CP0_INT_MASK)

#define MSCM_IRCP6ISR9_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP6ISR9_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP6ISR9_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR9_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR9_CP1_INT_SHIFT)) & MSCM_IRCP6ISR9_CP1_INT_MASK)

#define MSCM_IRCP6ISR9_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP6ISR9_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP6ISR9_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR9_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR9_CP2_INT_SHIFT)) & MSCM_IRCP6ISR9_CP2_INT_MASK)

#define MSCM_IRCP6ISR9_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP6ISR9_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP6ISR9_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR9_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR9_CP3_INT_SHIFT)) & MSCM_IRCP6ISR9_CP3_INT_MASK)

#define MSCM_IRCP6ISR9_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP6ISR9_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP6ISR9_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR9_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR9_CP4_INT_SHIFT)) & MSCM_IRCP6ISR9_CP4_INT_MASK)

#define MSCM_IRCP6ISR9_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP6ISR9_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP6ISR9_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR9_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR9_CP5_INT_SHIFT)) & MSCM_IRCP6ISR9_CP5_INT_MASK)

#define MSCM_IRCP6ISR9_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP6ISR9_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP6ISR9_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR9_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR9_CP6_INT_SHIFT)) & MSCM_IRCP6ISR9_CP6_INT_MASK)

#define MSCM_IRCP6ISR9_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP6ISR9_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP6ISR9_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR9_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR9_CP7_INT_SHIFT)) & MSCM_IRCP6ISR9_CP7_INT_MASK)

#define MSCM_IRCP6ISR9_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP6ISR9_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP6ISR9_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR9_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR9_CP8_INT_SHIFT)) & MSCM_IRCP6ISR9_CP8_INT_MASK)

#define MSCM_IRCP6ISR9_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP6ISR9_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP6ISR9_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP6ISR9_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR9_CP9_INT_SHIFT)) & MSCM_IRCP6ISR9_CP9_INT_MASK)

#define MSCM_IRCP6ISR9_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP6ISR9_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP6ISR9_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR9_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR9_CP10_INT_SHIFT)) & MSCM_IRCP6ISR9_CP10_INT_MASK)

#define MSCM_IRCP6ISR9_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP6ISR9_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP6ISR9_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR9_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR9_CP11_INT_SHIFT)) & MSCM_IRCP6ISR9_CP11_INT_MASK)
/*! @} */

/*! @name IRCP6IGR9 - Interrupt Router CP6 Interrupt9 Generation Register */
/*! @{ */

#define MSCM_IRCP6IGR9_INT_EN_MASK               (0x1U)
#define MSCM_IRCP6IGR9_INT_EN_SHIFT              (0U)
#define MSCM_IRCP6IGR9_INT_EN_WIDTH              (1U)
#define MSCM_IRCP6IGR9_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR9_INT_EN_SHIFT)) & MSCM_IRCP6IGR9_INT_EN_MASK)
/*! @} */

/*! @name IRCP6ISR10 - Interrupt Router CP6 Interrupt10 Status Register */
/*! @{ */

#define MSCM_IRCP6ISR10_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP6ISR10_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP6ISR10_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR10_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR10_CP0_INT_SHIFT)) & MSCM_IRCP6ISR10_CP0_INT_MASK)

#define MSCM_IRCP6ISR10_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP6ISR10_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP6ISR10_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR10_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR10_CP1_INT_SHIFT)) & MSCM_IRCP6ISR10_CP1_INT_MASK)

#define MSCM_IRCP6ISR10_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP6ISR10_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP6ISR10_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR10_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR10_CP2_INT_SHIFT)) & MSCM_IRCP6ISR10_CP2_INT_MASK)

#define MSCM_IRCP6ISR10_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP6ISR10_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP6ISR10_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR10_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR10_CP3_INT_SHIFT)) & MSCM_IRCP6ISR10_CP3_INT_MASK)

#define MSCM_IRCP6ISR10_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP6ISR10_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP6ISR10_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR10_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR10_CP4_INT_SHIFT)) & MSCM_IRCP6ISR10_CP4_INT_MASK)

#define MSCM_IRCP6ISR10_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP6ISR10_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP6ISR10_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR10_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR10_CP5_INT_SHIFT)) & MSCM_IRCP6ISR10_CP5_INT_MASK)

#define MSCM_IRCP6ISR10_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP6ISR10_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP6ISR10_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR10_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR10_CP6_INT_SHIFT)) & MSCM_IRCP6ISR10_CP6_INT_MASK)

#define MSCM_IRCP6ISR10_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP6ISR10_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP6ISR10_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR10_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR10_CP7_INT_SHIFT)) & MSCM_IRCP6ISR10_CP7_INT_MASK)

#define MSCM_IRCP6ISR10_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP6ISR10_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP6ISR10_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR10_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR10_CP8_INT_SHIFT)) & MSCM_IRCP6ISR10_CP8_INT_MASK)

#define MSCM_IRCP6ISR10_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP6ISR10_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP6ISR10_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR10_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR10_CP9_INT_SHIFT)) & MSCM_IRCP6ISR10_CP9_INT_MASK)

#define MSCM_IRCP6ISR10_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP6ISR10_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP6ISR10_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP6ISR10_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR10_CP10_INT_SHIFT)) & MSCM_IRCP6ISR10_CP10_INT_MASK)

#define MSCM_IRCP6ISR10_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP6ISR10_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP6ISR10_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP6ISR10_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR10_CP11_INT_SHIFT)) & MSCM_IRCP6ISR10_CP11_INT_MASK)
/*! @} */

/*! @name IRCP6IGR10 - Interrupt Router CP6 Interrupt10 Generation Register */
/*! @{ */

#define MSCM_IRCP6IGR10_INT_EN_MASK              (0x1U)
#define MSCM_IRCP6IGR10_INT_EN_SHIFT             (0U)
#define MSCM_IRCP6IGR10_INT_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR10_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR10_INT_EN_SHIFT)) & MSCM_IRCP6IGR10_INT_EN_MASK)
/*! @} */

/*! @name IRCP6ISR11 - Interrupt Router CP6 Interrupt11 Status Register */
/*! @{ */

#define MSCM_IRCP6ISR11_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP6ISR11_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP6ISR11_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR11_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR11_CP0_INT_SHIFT)) & MSCM_IRCP6ISR11_CP0_INT_MASK)

#define MSCM_IRCP6ISR11_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP6ISR11_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP6ISR11_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR11_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR11_CP1_INT_SHIFT)) & MSCM_IRCP6ISR11_CP1_INT_MASK)

#define MSCM_IRCP6ISR11_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP6ISR11_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP6ISR11_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR11_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR11_CP2_INT_SHIFT)) & MSCM_IRCP6ISR11_CP2_INT_MASK)

#define MSCM_IRCP6ISR11_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP6ISR11_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP6ISR11_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR11_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR11_CP3_INT_SHIFT)) & MSCM_IRCP6ISR11_CP3_INT_MASK)

#define MSCM_IRCP6ISR11_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP6ISR11_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP6ISR11_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR11_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR11_CP4_INT_SHIFT)) & MSCM_IRCP6ISR11_CP4_INT_MASK)

#define MSCM_IRCP6ISR11_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP6ISR11_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP6ISR11_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR11_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR11_CP5_INT_SHIFT)) & MSCM_IRCP6ISR11_CP5_INT_MASK)

#define MSCM_IRCP6ISR11_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP6ISR11_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP6ISR11_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR11_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR11_CP6_INT_SHIFT)) & MSCM_IRCP6ISR11_CP6_INT_MASK)

#define MSCM_IRCP6ISR11_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP6ISR11_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP6ISR11_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR11_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR11_CP7_INT_SHIFT)) & MSCM_IRCP6ISR11_CP7_INT_MASK)

#define MSCM_IRCP6ISR11_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP6ISR11_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP6ISR11_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR11_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR11_CP8_INT_SHIFT)) & MSCM_IRCP6ISR11_CP8_INT_MASK)

#define MSCM_IRCP6ISR11_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP6ISR11_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP6ISR11_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR11_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR11_CP9_INT_SHIFT)) & MSCM_IRCP6ISR11_CP9_INT_MASK)

#define MSCM_IRCP6ISR11_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP6ISR11_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP6ISR11_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP6ISR11_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR11_CP10_INT_SHIFT)) & MSCM_IRCP6ISR11_CP10_INT_MASK)

#define MSCM_IRCP6ISR11_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP6ISR11_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP6ISR11_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP6ISR11_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR11_CP11_INT_SHIFT)) & MSCM_IRCP6ISR11_CP11_INT_MASK)
/*! @} */

/*! @name IRCP6IGR11 - Interrupt Router CP6 Interrupt11 Generation Register */
/*! @{ */

#define MSCM_IRCP6IGR11_INT_EN_MASK              (0x1U)
#define MSCM_IRCP6IGR11_INT_EN_SHIFT             (0U)
#define MSCM_IRCP6IGR11_INT_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR11_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR11_INT_EN_SHIFT)) & MSCM_IRCP6IGR11_INT_EN_MASK)
/*! @} */

/*! @name IRCP6ISR12 - Interrupt Router CP6 Interrupt12 Status Register */
/*! @{ */

#define MSCM_IRCP6ISR12_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP6ISR12_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP6ISR12_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR12_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR12_CP0_INT_SHIFT)) & MSCM_IRCP6ISR12_CP0_INT_MASK)

#define MSCM_IRCP6ISR12_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP6ISR12_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP6ISR12_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR12_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR12_CP1_INT_SHIFT)) & MSCM_IRCP6ISR12_CP1_INT_MASK)

#define MSCM_IRCP6ISR12_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP6ISR12_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP6ISR12_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR12_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR12_CP2_INT_SHIFT)) & MSCM_IRCP6ISR12_CP2_INT_MASK)

#define MSCM_IRCP6ISR12_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP6ISR12_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP6ISR12_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR12_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR12_CP3_INT_SHIFT)) & MSCM_IRCP6ISR12_CP3_INT_MASK)

#define MSCM_IRCP6ISR12_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP6ISR12_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP6ISR12_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR12_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR12_CP4_INT_SHIFT)) & MSCM_IRCP6ISR12_CP4_INT_MASK)

#define MSCM_IRCP6ISR12_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP6ISR12_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP6ISR12_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR12_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR12_CP5_INT_SHIFT)) & MSCM_IRCP6ISR12_CP5_INT_MASK)

#define MSCM_IRCP6ISR12_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP6ISR12_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP6ISR12_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR12_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR12_CP6_INT_SHIFT)) & MSCM_IRCP6ISR12_CP6_INT_MASK)

#define MSCM_IRCP6ISR12_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP6ISR12_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP6ISR12_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR12_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR12_CP7_INT_SHIFT)) & MSCM_IRCP6ISR12_CP7_INT_MASK)

#define MSCM_IRCP6ISR12_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP6ISR12_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP6ISR12_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR12_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR12_CP8_INT_SHIFT)) & MSCM_IRCP6ISR12_CP8_INT_MASK)

#define MSCM_IRCP6ISR12_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP6ISR12_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP6ISR12_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR12_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR12_CP9_INT_SHIFT)) & MSCM_IRCP6ISR12_CP9_INT_MASK)

#define MSCM_IRCP6ISR12_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP6ISR12_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP6ISR12_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP6ISR12_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR12_CP10_INT_SHIFT)) & MSCM_IRCP6ISR12_CP10_INT_MASK)

#define MSCM_IRCP6ISR12_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP6ISR12_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP6ISR12_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP6ISR12_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR12_CP11_INT_SHIFT)) & MSCM_IRCP6ISR12_CP11_INT_MASK)
/*! @} */

/*! @name IRCP6IGR12 - Interrupt Router CP6 Interrupt12 Generation Register */
/*! @{ */

#define MSCM_IRCP6IGR12_INT_EN_MASK              (0x1U)
#define MSCM_IRCP6IGR12_INT_EN_SHIFT             (0U)
#define MSCM_IRCP6IGR12_INT_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR12_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR12_INT_EN_SHIFT)) & MSCM_IRCP6IGR12_INT_EN_MASK)
/*! @} */

/*! @name IRCP6ISR13 - Interrupt Router CP6 Interrupt13 Status Register */
/*! @{ */

#define MSCM_IRCP6ISR13_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP6ISR13_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP6ISR13_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR13_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR13_CP0_INT_SHIFT)) & MSCM_IRCP6ISR13_CP0_INT_MASK)

#define MSCM_IRCP6ISR13_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP6ISR13_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP6ISR13_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR13_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR13_CP1_INT_SHIFT)) & MSCM_IRCP6ISR13_CP1_INT_MASK)

#define MSCM_IRCP6ISR13_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP6ISR13_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP6ISR13_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR13_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR13_CP2_INT_SHIFT)) & MSCM_IRCP6ISR13_CP2_INT_MASK)

#define MSCM_IRCP6ISR13_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP6ISR13_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP6ISR13_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR13_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR13_CP3_INT_SHIFT)) & MSCM_IRCP6ISR13_CP3_INT_MASK)

#define MSCM_IRCP6ISR13_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP6ISR13_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP6ISR13_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR13_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR13_CP4_INT_SHIFT)) & MSCM_IRCP6ISR13_CP4_INT_MASK)

#define MSCM_IRCP6ISR13_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP6ISR13_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP6ISR13_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR13_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR13_CP5_INT_SHIFT)) & MSCM_IRCP6ISR13_CP5_INT_MASK)

#define MSCM_IRCP6ISR13_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP6ISR13_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP6ISR13_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR13_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR13_CP6_INT_SHIFT)) & MSCM_IRCP6ISR13_CP6_INT_MASK)

#define MSCM_IRCP6ISR13_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP6ISR13_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP6ISR13_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR13_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR13_CP7_INT_SHIFT)) & MSCM_IRCP6ISR13_CP7_INT_MASK)

#define MSCM_IRCP6ISR13_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP6ISR13_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP6ISR13_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR13_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR13_CP8_INT_SHIFT)) & MSCM_IRCP6ISR13_CP8_INT_MASK)

#define MSCM_IRCP6ISR13_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP6ISR13_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP6ISR13_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP6ISR13_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR13_CP9_INT_SHIFT)) & MSCM_IRCP6ISR13_CP9_INT_MASK)

#define MSCM_IRCP6ISR13_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP6ISR13_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP6ISR13_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP6ISR13_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR13_CP10_INT_SHIFT)) & MSCM_IRCP6ISR13_CP10_INT_MASK)

#define MSCM_IRCP6ISR13_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP6ISR13_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP6ISR13_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP6ISR13_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6ISR13_CP11_INT_SHIFT)) & MSCM_IRCP6ISR13_CP11_INT_MASK)
/*! @} */

/*! @name IRCP6IGR13 - Interrupt Router CP6 Interrupt13 Generation Register */
/*! @{ */

#define MSCM_IRCP6IGR13_INT_EN_MASK              (0x1U)
#define MSCM_IRCP6IGR13_INT_EN_SHIFT             (0U)
#define MSCM_IRCP6IGR13_INT_EN_WIDTH             (1U)
#define MSCM_IRCP6IGR13_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP6IGR13_INT_EN_SHIFT)) & MSCM_IRCP6IGR13_INT_EN_MASK)
/*! @} */

/*! @name IRCP7ISR0 - Interrupt Router CP7 Interrupt0 Status Register */
/*! @{ */

#define MSCM_IRCP7ISR0_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP7ISR0_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP7ISR0_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR0_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR0_CP0_INT_SHIFT)) & MSCM_IRCP7ISR0_CP0_INT_MASK)

#define MSCM_IRCP7ISR0_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP7ISR0_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP7ISR0_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR0_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR0_CP1_INT_SHIFT)) & MSCM_IRCP7ISR0_CP1_INT_MASK)

#define MSCM_IRCP7ISR0_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP7ISR0_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP7ISR0_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR0_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR0_CP2_INT_SHIFT)) & MSCM_IRCP7ISR0_CP2_INT_MASK)

#define MSCM_IRCP7ISR0_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP7ISR0_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP7ISR0_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR0_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR0_CP3_INT_SHIFT)) & MSCM_IRCP7ISR0_CP3_INT_MASK)

#define MSCM_IRCP7ISR0_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP7ISR0_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP7ISR0_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR0_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR0_CP4_INT_SHIFT)) & MSCM_IRCP7ISR0_CP4_INT_MASK)

#define MSCM_IRCP7ISR0_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP7ISR0_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP7ISR0_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR0_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR0_CP5_INT_SHIFT)) & MSCM_IRCP7ISR0_CP5_INT_MASK)

#define MSCM_IRCP7ISR0_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP7ISR0_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP7ISR0_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR0_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR0_CP6_INT_SHIFT)) & MSCM_IRCP7ISR0_CP6_INT_MASK)

#define MSCM_IRCP7ISR0_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP7ISR0_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP7ISR0_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR0_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR0_CP7_INT_SHIFT)) & MSCM_IRCP7ISR0_CP7_INT_MASK)

#define MSCM_IRCP7ISR0_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP7ISR0_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP7ISR0_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR0_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR0_CP8_INT_SHIFT)) & MSCM_IRCP7ISR0_CP8_INT_MASK)

#define MSCM_IRCP7ISR0_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP7ISR0_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP7ISR0_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR0_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR0_CP9_INT_SHIFT)) & MSCM_IRCP7ISR0_CP9_INT_MASK)

#define MSCM_IRCP7ISR0_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP7ISR0_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP7ISR0_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR0_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR0_CP10_INT_SHIFT)) & MSCM_IRCP7ISR0_CP10_INT_MASK)

#define MSCM_IRCP7ISR0_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP7ISR0_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP7ISR0_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR0_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR0_CP11_INT_SHIFT)) & MSCM_IRCP7ISR0_CP11_INT_MASK)
/*! @} */

/*! @name IRCP7IGR0 - Interrupt Router CP7 Interrupt0 Generation Register */
/*! @{ */

#define MSCM_IRCP7IGR0_INT_EN_MASK               (0x1U)
#define MSCM_IRCP7IGR0_INT_EN_SHIFT              (0U)
#define MSCM_IRCP7IGR0_INT_EN_WIDTH              (1U)
#define MSCM_IRCP7IGR0_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR0_INT_EN_SHIFT)) & MSCM_IRCP7IGR0_INT_EN_MASK)
/*! @} */

/*! @name IRCP7ISR1 - Interrupt Router CP7 Interrupt1 Status Register */
/*! @{ */

#define MSCM_IRCP7ISR1_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP7ISR1_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP7ISR1_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR1_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR1_CP0_INT_SHIFT)) & MSCM_IRCP7ISR1_CP0_INT_MASK)

#define MSCM_IRCP7ISR1_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP7ISR1_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP7ISR1_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR1_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR1_CP1_INT_SHIFT)) & MSCM_IRCP7ISR1_CP1_INT_MASK)

#define MSCM_IRCP7ISR1_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP7ISR1_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP7ISR1_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR1_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR1_CP2_INT_SHIFT)) & MSCM_IRCP7ISR1_CP2_INT_MASK)

#define MSCM_IRCP7ISR1_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP7ISR1_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP7ISR1_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR1_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR1_CP3_INT_SHIFT)) & MSCM_IRCP7ISR1_CP3_INT_MASK)

#define MSCM_IRCP7ISR1_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP7ISR1_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP7ISR1_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR1_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR1_CP4_INT_SHIFT)) & MSCM_IRCP7ISR1_CP4_INT_MASK)

#define MSCM_IRCP7ISR1_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP7ISR1_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP7ISR1_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR1_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR1_CP5_INT_SHIFT)) & MSCM_IRCP7ISR1_CP5_INT_MASK)

#define MSCM_IRCP7ISR1_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP7ISR1_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP7ISR1_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR1_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR1_CP6_INT_SHIFT)) & MSCM_IRCP7ISR1_CP6_INT_MASK)

#define MSCM_IRCP7ISR1_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP7ISR1_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP7ISR1_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR1_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR1_CP7_INT_SHIFT)) & MSCM_IRCP7ISR1_CP7_INT_MASK)

#define MSCM_IRCP7ISR1_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP7ISR1_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP7ISR1_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR1_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR1_CP8_INT_SHIFT)) & MSCM_IRCP7ISR1_CP8_INT_MASK)

#define MSCM_IRCP7ISR1_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP7ISR1_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP7ISR1_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR1_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR1_CP9_INT_SHIFT)) & MSCM_IRCP7ISR1_CP9_INT_MASK)

#define MSCM_IRCP7ISR1_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP7ISR1_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP7ISR1_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR1_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR1_CP10_INT_SHIFT)) & MSCM_IRCP7ISR1_CP10_INT_MASK)

#define MSCM_IRCP7ISR1_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP7ISR1_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP7ISR1_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR1_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR1_CP11_INT_SHIFT)) & MSCM_IRCP7ISR1_CP11_INT_MASK)
/*! @} */

/*! @name IRCP7IGR1 - Interrupt Router CP7 Interrupt1 Generation Register */
/*! @{ */

#define MSCM_IRCP7IGR1_INT_EN_MASK               (0x1U)
#define MSCM_IRCP7IGR1_INT_EN_SHIFT              (0U)
#define MSCM_IRCP7IGR1_INT_EN_WIDTH              (1U)
#define MSCM_IRCP7IGR1_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR1_INT_EN_SHIFT)) & MSCM_IRCP7IGR1_INT_EN_MASK)
/*! @} */

/*! @name IRCP7ISR2 - Interrupt Router CP7 Interrupt2 Status Register */
/*! @{ */

#define MSCM_IRCP7ISR2_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP7ISR2_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP7ISR2_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR2_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR2_CP0_INT_SHIFT)) & MSCM_IRCP7ISR2_CP0_INT_MASK)

#define MSCM_IRCP7ISR2_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP7ISR2_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP7ISR2_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR2_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR2_CP1_INT_SHIFT)) & MSCM_IRCP7ISR2_CP1_INT_MASK)

#define MSCM_IRCP7ISR2_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP7ISR2_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP7ISR2_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR2_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR2_CP2_INT_SHIFT)) & MSCM_IRCP7ISR2_CP2_INT_MASK)

#define MSCM_IRCP7ISR2_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP7ISR2_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP7ISR2_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR2_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR2_CP3_INT_SHIFT)) & MSCM_IRCP7ISR2_CP3_INT_MASK)

#define MSCM_IRCP7ISR2_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP7ISR2_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP7ISR2_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR2_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR2_CP4_INT_SHIFT)) & MSCM_IRCP7ISR2_CP4_INT_MASK)

#define MSCM_IRCP7ISR2_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP7ISR2_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP7ISR2_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR2_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR2_CP5_INT_SHIFT)) & MSCM_IRCP7ISR2_CP5_INT_MASK)

#define MSCM_IRCP7ISR2_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP7ISR2_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP7ISR2_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR2_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR2_CP6_INT_SHIFT)) & MSCM_IRCP7ISR2_CP6_INT_MASK)

#define MSCM_IRCP7ISR2_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP7ISR2_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP7ISR2_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR2_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR2_CP7_INT_SHIFT)) & MSCM_IRCP7ISR2_CP7_INT_MASK)

#define MSCM_IRCP7ISR2_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP7ISR2_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP7ISR2_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR2_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR2_CP8_INT_SHIFT)) & MSCM_IRCP7ISR2_CP8_INT_MASK)

#define MSCM_IRCP7ISR2_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP7ISR2_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP7ISR2_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR2_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR2_CP9_INT_SHIFT)) & MSCM_IRCP7ISR2_CP9_INT_MASK)

#define MSCM_IRCP7ISR2_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP7ISR2_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP7ISR2_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR2_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR2_CP10_INT_SHIFT)) & MSCM_IRCP7ISR2_CP10_INT_MASK)

#define MSCM_IRCP7ISR2_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP7ISR2_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP7ISR2_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR2_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR2_CP11_INT_SHIFT)) & MSCM_IRCP7ISR2_CP11_INT_MASK)
/*! @} */

/*! @name IRCP7IGR2 - Interrupt Router CP7 Interrupt2 Generation Register */
/*! @{ */

#define MSCM_IRCP7IGR2_INT_EN_MASK               (0x1U)
#define MSCM_IRCP7IGR2_INT_EN_SHIFT              (0U)
#define MSCM_IRCP7IGR2_INT_EN_WIDTH              (1U)
#define MSCM_IRCP7IGR2_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR2_INT_EN_SHIFT)) & MSCM_IRCP7IGR2_INT_EN_MASK)
/*! @} */

/*! @name IRCP7ISR3 - Interrupt Router CP7 Interrupt3 Status Register */
/*! @{ */

#define MSCM_IRCP7ISR3_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP7ISR3_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP7ISR3_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP7ISR3_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT0_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT0_MASK)

#define MSCM_IRCP7ISR3_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP7ISR3_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP7ISR3_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP7ISR3_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT1_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT1_MASK)

#define MSCM_IRCP7ISR3_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP7ISR3_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP7ISR3_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP7ISR3_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT2_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT2_MASK)

#define MSCM_IRCP7ISR3_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP7ISR3_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP7ISR3_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP7ISR3_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT3_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT3_MASK)

#define MSCM_IRCP7ISR3_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP7ISR3_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP7ISR3_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP7ISR3_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT4_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT4_MASK)

#define MSCM_IRCP7ISR3_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP7ISR3_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP7ISR3_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP7ISR3_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT5_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT5_MASK)

#define MSCM_IRCP7ISR3_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP7ISR3_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP7ISR3_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP7ISR3_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT6_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT6_MASK)

#define MSCM_IRCP7ISR3_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP7ISR3_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP7ISR3_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP7ISR3_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT7_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT7_MASK)

#define MSCM_IRCP7ISR3_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP7ISR3_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP7ISR3_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP7ISR3_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT8_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT8_MASK)

#define MSCM_IRCP7ISR3_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP7ISR3_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP7ISR3_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP7ISR3_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT9_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT9_MASK)

#define MSCM_IRCP7ISR3_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP7ISR3_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP7ISR3_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP7ISR3_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT10_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT10_MASK)

#define MSCM_IRCP7ISR3_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP7ISR3_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP7ISR3_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP7ISR3_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT11_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT11_MASK)

#define MSCM_IRCP7ISR3_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP7ISR3_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP7ISR3_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP7ISR3_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT12_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT12_MASK)

#define MSCM_IRCP7ISR3_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP7ISR3_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP7ISR3_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP7ISR3_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT13_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT13_MASK)

#define MSCM_IRCP7ISR3_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP7ISR3_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP7ISR3_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP7ISR3_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT14_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT14_MASK)

#define MSCM_IRCP7ISR3_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP7ISR3_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP7ISR3_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP7ISR3_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR3_PCIE_INT15_SHIFT)) & MSCM_IRCP7ISR3_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP7IGR3 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP7IGR3_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP7IGR3_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP7IGR3_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR3_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT0_EN_SHIFT)) & MSCM_IRCP7IGR3_INT0_EN_MASK)

#define MSCM_IRCP7IGR3_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP7IGR3_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP7IGR3_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR3_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT1_EN_SHIFT)) & MSCM_IRCP7IGR3_INT1_EN_MASK)

#define MSCM_IRCP7IGR3_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP7IGR3_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP7IGR3_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR3_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT2_EN_SHIFT)) & MSCM_IRCP7IGR3_INT2_EN_MASK)

#define MSCM_IRCP7IGR3_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP7IGR3_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP7IGR3_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR3_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT3_EN_SHIFT)) & MSCM_IRCP7IGR3_INT3_EN_MASK)

#define MSCM_IRCP7IGR3_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP7IGR3_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP7IGR3_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR3_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT4_EN_SHIFT)) & MSCM_IRCP7IGR3_INT4_EN_MASK)

#define MSCM_IRCP7IGR3_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP7IGR3_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP7IGR3_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR3_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT5_EN_SHIFT)) & MSCM_IRCP7IGR3_INT5_EN_MASK)

#define MSCM_IRCP7IGR3_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP7IGR3_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP7IGR3_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR3_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT6_EN_SHIFT)) & MSCM_IRCP7IGR3_INT6_EN_MASK)

#define MSCM_IRCP7IGR3_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP7IGR3_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP7IGR3_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR3_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT7_EN_SHIFT)) & MSCM_IRCP7IGR3_INT7_EN_MASK)

#define MSCM_IRCP7IGR3_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP7IGR3_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP7IGR3_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR3_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT8_EN_SHIFT)) & MSCM_IRCP7IGR3_INT8_EN_MASK)

#define MSCM_IRCP7IGR3_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP7IGR3_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP7IGR3_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR3_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT9_EN_SHIFT)) & MSCM_IRCP7IGR3_INT9_EN_MASK)

#define MSCM_IRCP7IGR3_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP7IGR3_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP7IGR3_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP7IGR3_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT10_EN_SHIFT)) & MSCM_IRCP7IGR3_INT10_EN_MASK)

#define MSCM_IRCP7IGR3_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP7IGR3_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP7IGR3_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP7IGR3_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT11_EN_SHIFT)) & MSCM_IRCP7IGR3_INT11_EN_MASK)

#define MSCM_IRCP7IGR3_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP7IGR3_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP7IGR3_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP7IGR3_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT12_EN_SHIFT)) & MSCM_IRCP7IGR3_INT12_EN_MASK)

#define MSCM_IRCP7IGR3_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP7IGR3_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP7IGR3_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP7IGR3_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT13_EN_SHIFT)) & MSCM_IRCP7IGR3_INT13_EN_MASK)

#define MSCM_IRCP7IGR3_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP7IGR3_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP7IGR3_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP7IGR3_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT14_EN_SHIFT)) & MSCM_IRCP7IGR3_INT14_EN_MASK)

#define MSCM_IRCP7IGR3_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP7IGR3_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP7IGR3_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP7IGR3_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR3_INT15_EN_SHIFT)) & MSCM_IRCP7IGR3_INT15_EN_MASK)
/*! @} */

/*! @name IRCP7ISR4 - Interrupt Router CP7 Interrupt4 Status Register */
/*! @{ */

#define MSCM_IRCP7ISR4_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP7ISR4_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP7ISR4_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP7ISR4_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT0_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT0_MASK)

#define MSCM_IRCP7ISR4_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP7ISR4_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP7ISR4_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP7ISR4_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT1_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT1_MASK)

#define MSCM_IRCP7ISR4_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP7ISR4_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP7ISR4_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP7ISR4_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT2_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT2_MASK)

#define MSCM_IRCP7ISR4_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP7ISR4_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP7ISR4_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP7ISR4_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT3_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT3_MASK)

#define MSCM_IRCP7ISR4_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP7ISR4_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP7ISR4_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP7ISR4_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT4_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT4_MASK)

#define MSCM_IRCP7ISR4_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP7ISR4_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP7ISR4_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP7ISR4_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT5_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT5_MASK)

#define MSCM_IRCP7ISR4_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP7ISR4_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP7ISR4_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP7ISR4_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT6_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT6_MASK)

#define MSCM_IRCP7ISR4_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP7ISR4_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP7ISR4_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP7ISR4_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT7_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT7_MASK)

#define MSCM_IRCP7ISR4_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP7ISR4_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP7ISR4_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP7ISR4_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT8_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT8_MASK)

#define MSCM_IRCP7ISR4_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP7ISR4_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP7ISR4_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP7ISR4_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT9_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT9_MASK)

#define MSCM_IRCP7ISR4_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP7ISR4_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP7ISR4_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP7ISR4_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT10_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT10_MASK)

#define MSCM_IRCP7ISR4_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP7ISR4_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP7ISR4_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP7ISR4_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT11_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT11_MASK)

#define MSCM_IRCP7ISR4_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP7ISR4_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP7ISR4_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP7ISR4_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT12_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT12_MASK)

#define MSCM_IRCP7ISR4_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP7ISR4_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP7ISR4_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP7ISR4_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT13_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT13_MASK)

#define MSCM_IRCP7ISR4_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP7ISR4_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP7ISR4_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP7ISR4_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT14_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT14_MASK)

#define MSCM_IRCP7ISR4_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP7ISR4_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP7ISR4_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP7ISR4_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR4_PCIE_INT15_SHIFT)) & MSCM_IRCP7ISR4_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP7IGR4 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP7IGR4_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP7IGR4_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP7IGR4_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR4_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT0_EN_SHIFT)) & MSCM_IRCP7IGR4_INT0_EN_MASK)

#define MSCM_IRCP7IGR4_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP7IGR4_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP7IGR4_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR4_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT1_EN_SHIFT)) & MSCM_IRCP7IGR4_INT1_EN_MASK)

#define MSCM_IRCP7IGR4_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP7IGR4_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP7IGR4_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR4_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT2_EN_SHIFT)) & MSCM_IRCP7IGR4_INT2_EN_MASK)

#define MSCM_IRCP7IGR4_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP7IGR4_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP7IGR4_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR4_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT3_EN_SHIFT)) & MSCM_IRCP7IGR4_INT3_EN_MASK)

#define MSCM_IRCP7IGR4_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP7IGR4_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP7IGR4_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR4_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT4_EN_SHIFT)) & MSCM_IRCP7IGR4_INT4_EN_MASK)

#define MSCM_IRCP7IGR4_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP7IGR4_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP7IGR4_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR4_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT5_EN_SHIFT)) & MSCM_IRCP7IGR4_INT5_EN_MASK)

#define MSCM_IRCP7IGR4_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP7IGR4_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP7IGR4_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR4_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT6_EN_SHIFT)) & MSCM_IRCP7IGR4_INT6_EN_MASK)

#define MSCM_IRCP7IGR4_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP7IGR4_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP7IGR4_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR4_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT7_EN_SHIFT)) & MSCM_IRCP7IGR4_INT7_EN_MASK)

#define MSCM_IRCP7IGR4_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP7IGR4_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP7IGR4_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR4_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT8_EN_SHIFT)) & MSCM_IRCP7IGR4_INT8_EN_MASK)

#define MSCM_IRCP7IGR4_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP7IGR4_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP7IGR4_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR4_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT9_EN_SHIFT)) & MSCM_IRCP7IGR4_INT9_EN_MASK)

#define MSCM_IRCP7IGR4_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP7IGR4_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP7IGR4_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP7IGR4_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT10_EN_SHIFT)) & MSCM_IRCP7IGR4_INT10_EN_MASK)

#define MSCM_IRCP7IGR4_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP7IGR4_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP7IGR4_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP7IGR4_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT11_EN_SHIFT)) & MSCM_IRCP7IGR4_INT11_EN_MASK)

#define MSCM_IRCP7IGR4_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP7IGR4_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP7IGR4_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP7IGR4_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT12_EN_SHIFT)) & MSCM_IRCP7IGR4_INT12_EN_MASK)

#define MSCM_IRCP7IGR4_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP7IGR4_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP7IGR4_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP7IGR4_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT13_EN_SHIFT)) & MSCM_IRCP7IGR4_INT13_EN_MASK)

#define MSCM_IRCP7IGR4_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP7IGR4_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP7IGR4_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP7IGR4_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT14_EN_SHIFT)) & MSCM_IRCP7IGR4_INT14_EN_MASK)

#define MSCM_IRCP7IGR4_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP7IGR4_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP7IGR4_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP7IGR4_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR4_INT15_EN_SHIFT)) & MSCM_IRCP7IGR4_INT15_EN_MASK)
/*! @} */

/*! @name IRCP7ISR5 - Interrupt Router CP7 Interrupt5 Status Register */
/*! @{ */

#define MSCM_IRCP7ISR5_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP7ISR5_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP7ISR5_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR5_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR5_CP0_INT_SHIFT)) & MSCM_IRCP7ISR5_CP0_INT_MASK)

#define MSCM_IRCP7ISR5_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP7ISR5_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP7ISR5_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR5_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR5_CP1_INT_SHIFT)) & MSCM_IRCP7ISR5_CP1_INT_MASK)

#define MSCM_IRCP7ISR5_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP7ISR5_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP7ISR5_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR5_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR5_CP2_INT_SHIFT)) & MSCM_IRCP7ISR5_CP2_INT_MASK)

#define MSCM_IRCP7ISR5_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP7ISR5_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP7ISR5_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR5_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR5_CP3_INT_SHIFT)) & MSCM_IRCP7ISR5_CP3_INT_MASK)

#define MSCM_IRCP7ISR5_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP7ISR5_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP7ISR5_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR5_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR5_CP4_INT_SHIFT)) & MSCM_IRCP7ISR5_CP4_INT_MASK)

#define MSCM_IRCP7ISR5_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP7ISR5_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP7ISR5_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR5_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR5_CP5_INT_SHIFT)) & MSCM_IRCP7ISR5_CP5_INT_MASK)

#define MSCM_IRCP7ISR5_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP7ISR5_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP7ISR5_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR5_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR5_CP6_INT_SHIFT)) & MSCM_IRCP7ISR5_CP6_INT_MASK)

#define MSCM_IRCP7ISR5_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP7ISR5_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP7ISR5_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR5_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR5_CP7_INT_SHIFT)) & MSCM_IRCP7ISR5_CP7_INT_MASK)

#define MSCM_IRCP7ISR5_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP7ISR5_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP7ISR5_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR5_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR5_CP8_INT_SHIFT)) & MSCM_IRCP7ISR5_CP8_INT_MASK)

#define MSCM_IRCP7ISR5_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP7ISR5_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP7ISR5_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR5_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR5_CP9_INT_SHIFT)) & MSCM_IRCP7ISR5_CP9_INT_MASK)

#define MSCM_IRCP7ISR5_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP7ISR5_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP7ISR5_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR5_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR5_CP10_INT_SHIFT)) & MSCM_IRCP7ISR5_CP10_INT_MASK)

#define MSCM_IRCP7ISR5_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP7ISR5_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP7ISR5_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR5_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR5_CP11_INT_SHIFT)) & MSCM_IRCP7ISR5_CP11_INT_MASK)
/*! @} */

/*! @name IRCP7IGR5 - Interrupt Router CP7 Interrupt5 Generation Register */
/*! @{ */

#define MSCM_IRCP7IGR5_INT_EN_MASK               (0x1U)
#define MSCM_IRCP7IGR5_INT_EN_SHIFT              (0U)
#define MSCM_IRCP7IGR5_INT_EN_WIDTH              (1U)
#define MSCM_IRCP7IGR5_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR5_INT_EN_SHIFT)) & MSCM_IRCP7IGR5_INT_EN_MASK)
/*! @} */

/*! @name IRCP7ISR6 - Interrupt Router CP7 Interrupt6 Status Register */
/*! @{ */

#define MSCM_IRCP7ISR6_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP7ISR6_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP7ISR6_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR6_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR6_CP0_INT_SHIFT)) & MSCM_IRCP7ISR6_CP0_INT_MASK)

#define MSCM_IRCP7ISR6_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP7ISR6_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP7ISR6_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR6_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR6_CP1_INT_SHIFT)) & MSCM_IRCP7ISR6_CP1_INT_MASK)

#define MSCM_IRCP7ISR6_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP7ISR6_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP7ISR6_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR6_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR6_CP2_INT_SHIFT)) & MSCM_IRCP7ISR6_CP2_INT_MASK)

#define MSCM_IRCP7ISR6_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP7ISR6_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP7ISR6_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR6_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR6_CP3_INT_SHIFT)) & MSCM_IRCP7ISR6_CP3_INT_MASK)

#define MSCM_IRCP7ISR6_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP7ISR6_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP7ISR6_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR6_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR6_CP4_INT_SHIFT)) & MSCM_IRCP7ISR6_CP4_INT_MASK)

#define MSCM_IRCP7ISR6_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP7ISR6_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP7ISR6_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR6_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR6_CP5_INT_SHIFT)) & MSCM_IRCP7ISR6_CP5_INT_MASK)

#define MSCM_IRCP7ISR6_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP7ISR6_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP7ISR6_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR6_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR6_CP6_INT_SHIFT)) & MSCM_IRCP7ISR6_CP6_INT_MASK)

#define MSCM_IRCP7ISR6_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP7ISR6_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP7ISR6_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR6_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR6_CP7_INT_SHIFT)) & MSCM_IRCP7ISR6_CP7_INT_MASK)

#define MSCM_IRCP7ISR6_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP7ISR6_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP7ISR6_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR6_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR6_CP8_INT_SHIFT)) & MSCM_IRCP7ISR6_CP8_INT_MASK)

#define MSCM_IRCP7ISR6_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP7ISR6_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP7ISR6_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR6_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR6_CP9_INT_SHIFT)) & MSCM_IRCP7ISR6_CP9_INT_MASK)

#define MSCM_IRCP7ISR6_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP7ISR6_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP7ISR6_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR6_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR6_CP10_INT_SHIFT)) & MSCM_IRCP7ISR6_CP10_INT_MASK)

#define MSCM_IRCP7ISR6_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP7ISR6_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP7ISR6_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR6_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR6_CP11_INT_SHIFT)) & MSCM_IRCP7ISR6_CP11_INT_MASK)
/*! @} */

/*! @name IRCP7IGR6 - Interrupt Router CP7 Interrupt6 Generation Register */
/*! @{ */

#define MSCM_IRCP7IGR6_INT_EN_MASK               (0x1U)
#define MSCM_IRCP7IGR6_INT_EN_SHIFT              (0U)
#define MSCM_IRCP7IGR6_INT_EN_WIDTH              (1U)
#define MSCM_IRCP7IGR6_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR6_INT_EN_SHIFT)) & MSCM_IRCP7IGR6_INT_EN_MASK)
/*! @} */

/*! @name IRCP7ISR7 - Interrupt Router CP7 Interrupt7 Status Register */
/*! @{ */

#define MSCM_IRCP7ISR7_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP7ISR7_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP7ISR7_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR7_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR7_CP0_INT_SHIFT)) & MSCM_IRCP7ISR7_CP0_INT_MASK)

#define MSCM_IRCP7ISR7_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP7ISR7_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP7ISR7_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR7_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR7_CP1_INT_SHIFT)) & MSCM_IRCP7ISR7_CP1_INT_MASK)

#define MSCM_IRCP7ISR7_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP7ISR7_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP7ISR7_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR7_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR7_CP2_INT_SHIFT)) & MSCM_IRCP7ISR7_CP2_INT_MASK)

#define MSCM_IRCP7ISR7_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP7ISR7_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP7ISR7_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR7_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR7_CP3_INT_SHIFT)) & MSCM_IRCP7ISR7_CP3_INT_MASK)

#define MSCM_IRCP7ISR7_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP7ISR7_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP7ISR7_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR7_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR7_CP4_INT_SHIFT)) & MSCM_IRCP7ISR7_CP4_INT_MASK)

#define MSCM_IRCP7ISR7_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP7ISR7_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP7ISR7_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR7_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR7_CP5_INT_SHIFT)) & MSCM_IRCP7ISR7_CP5_INT_MASK)

#define MSCM_IRCP7ISR7_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP7ISR7_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP7ISR7_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR7_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR7_CP6_INT_SHIFT)) & MSCM_IRCP7ISR7_CP6_INT_MASK)

#define MSCM_IRCP7ISR7_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP7ISR7_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP7ISR7_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR7_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR7_CP7_INT_SHIFT)) & MSCM_IRCP7ISR7_CP7_INT_MASK)

#define MSCM_IRCP7ISR7_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP7ISR7_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP7ISR7_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR7_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR7_CP8_INT_SHIFT)) & MSCM_IRCP7ISR7_CP8_INT_MASK)

#define MSCM_IRCP7ISR7_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP7ISR7_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP7ISR7_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR7_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR7_CP9_INT_SHIFT)) & MSCM_IRCP7ISR7_CP9_INT_MASK)

#define MSCM_IRCP7ISR7_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP7ISR7_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP7ISR7_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR7_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR7_CP10_INT_SHIFT)) & MSCM_IRCP7ISR7_CP10_INT_MASK)

#define MSCM_IRCP7ISR7_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP7ISR7_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP7ISR7_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR7_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR7_CP11_INT_SHIFT)) & MSCM_IRCP7ISR7_CP11_INT_MASK)
/*! @} */

/*! @name IRCP7IGR7 - Interrupt Router CP7 Interrupt7 Generation Register */
/*! @{ */

#define MSCM_IRCP7IGR7_INT_EN_MASK               (0x1U)
#define MSCM_IRCP7IGR7_INT_EN_SHIFT              (0U)
#define MSCM_IRCP7IGR7_INT_EN_WIDTH              (1U)
#define MSCM_IRCP7IGR7_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR7_INT_EN_SHIFT)) & MSCM_IRCP7IGR7_INT_EN_MASK)
/*! @} */

/*! @name IRCP7ISR8 - Interrupt Router CP7 Interrupt8 Status Register */
/*! @{ */

#define MSCM_IRCP7ISR8_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP7ISR8_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP7ISR8_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR8_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR8_CP0_INT_SHIFT)) & MSCM_IRCP7ISR8_CP0_INT_MASK)

#define MSCM_IRCP7ISR8_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP7ISR8_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP7ISR8_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR8_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR8_CP1_INT_SHIFT)) & MSCM_IRCP7ISR8_CP1_INT_MASK)

#define MSCM_IRCP7ISR8_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP7ISR8_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP7ISR8_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR8_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR8_CP2_INT_SHIFT)) & MSCM_IRCP7ISR8_CP2_INT_MASK)

#define MSCM_IRCP7ISR8_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP7ISR8_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP7ISR8_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR8_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR8_CP3_INT_SHIFT)) & MSCM_IRCP7ISR8_CP3_INT_MASK)

#define MSCM_IRCP7ISR8_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP7ISR8_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP7ISR8_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR8_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR8_CP4_INT_SHIFT)) & MSCM_IRCP7ISR8_CP4_INT_MASK)

#define MSCM_IRCP7ISR8_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP7ISR8_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP7ISR8_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR8_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR8_CP5_INT_SHIFT)) & MSCM_IRCP7ISR8_CP5_INT_MASK)

#define MSCM_IRCP7ISR8_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP7ISR8_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP7ISR8_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR8_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR8_CP6_INT_SHIFT)) & MSCM_IRCP7ISR8_CP6_INT_MASK)

#define MSCM_IRCP7ISR8_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP7ISR8_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP7ISR8_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR8_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR8_CP7_INT_SHIFT)) & MSCM_IRCP7ISR8_CP7_INT_MASK)

#define MSCM_IRCP7ISR8_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP7ISR8_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP7ISR8_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR8_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR8_CP8_INT_SHIFT)) & MSCM_IRCP7ISR8_CP8_INT_MASK)

#define MSCM_IRCP7ISR8_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP7ISR8_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP7ISR8_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR8_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR8_CP9_INT_SHIFT)) & MSCM_IRCP7ISR8_CP9_INT_MASK)

#define MSCM_IRCP7ISR8_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP7ISR8_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP7ISR8_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR8_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR8_CP10_INT_SHIFT)) & MSCM_IRCP7ISR8_CP10_INT_MASK)

#define MSCM_IRCP7ISR8_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP7ISR8_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP7ISR8_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR8_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR8_CP11_INT_SHIFT)) & MSCM_IRCP7ISR8_CP11_INT_MASK)
/*! @} */

/*! @name IRCP7IGR8 - Interrupt Router CP7 Interrupt8 Generation Register */
/*! @{ */

#define MSCM_IRCP7IGR8_INT_EN_MASK               (0x1U)
#define MSCM_IRCP7IGR8_INT_EN_SHIFT              (0U)
#define MSCM_IRCP7IGR8_INT_EN_WIDTH              (1U)
#define MSCM_IRCP7IGR8_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR8_INT_EN_SHIFT)) & MSCM_IRCP7IGR8_INT_EN_MASK)
/*! @} */

/*! @name IRCP7ISR9 - Interrupt Router CP7 Interrupt9 Status Register */
/*! @{ */

#define MSCM_IRCP7ISR9_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP7ISR9_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP7ISR9_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR9_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR9_CP0_INT_SHIFT)) & MSCM_IRCP7ISR9_CP0_INT_MASK)

#define MSCM_IRCP7ISR9_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP7ISR9_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP7ISR9_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR9_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR9_CP1_INT_SHIFT)) & MSCM_IRCP7ISR9_CP1_INT_MASK)

#define MSCM_IRCP7ISR9_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP7ISR9_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP7ISR9_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR9_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR9_CP2_INT_SHIFT)) & MSCM_IRCP7ISR9_CP2_INT_MASK)

#define MSCM_IRCP7ISR9_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP7ISR9_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP7ISR9_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR9_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR9_CP3_INT_SHIFT)) & MSCM_IRCP7ISR9_CP3_INT_MASK)

#define MSCM_IRCP7ISR9_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP7ISR9_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP7ISR9_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR9_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR9_CP4_INT_SHIFT)) & MSCM_IRCP7ISR9_CP4_INT_MASK)

#define MSCM_IRCP7ISR9_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP7ISR9_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP7ISR9_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR9_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR9_CP5_INT_SHIFT)) & MSCM_IRCP7ISR9_CP5_INT_MASK)

#define MSCM_IRCP7ISR9_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP7ISR9_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP7ISR9_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR9_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR9_CP6_INT_SHIFT)) & MSCM_IRCP7ISR9_CP6_INT_MASK)

#define MSCM_IRCP7ISR9_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP7ISR9_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP7ISR9_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR9_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR9_CP7_INT_SHIFT)) & MSCM_IRCP7ISR9_CP7_INT_MASK)

#define MSCM_IRCP7ISR9_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP7ISR9_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP7ISR9_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR9_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR9_CP8_INT_SHIFT)) & MSCM_IRCP7ISR9_CP8_INT_MASK)

#define MSCM_IRCP7ISR9_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP7ISR9_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP7ISR9_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP7ISR9_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR9_CP9_INT_SHIFT)) & MSCM_IRCP7ISR9_CP9_INT_MASK)

#define MSCM_IRCP7ISR9_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP7ISR9_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP7ISR9_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR9_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR9_CP10_INT_SHIFT)) & MSCM_IRCP7ISR9_CP10_INT_MASK)

#define MSCM_IRCP7ISR9_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP7ISR9_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP7ISR9_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR9_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR9_CP11_INT_SHIFT)) & MSCM_IRCP7ISR9_CP11_INT_MASK)
/*! @} */

/*! @name IRCP7IGR9 - Interrupt Router CP7 Interrupt9 Generation Register */
/*! @{ */

#define MSCM_IRCP7IGR9_INT_EN_MASK               (0x1U)
#define MSCM_IRCP7IGR9_INT_EN_SHIFT              (0U)
#define MSCM_IRCP7IGR9_INT_EN_WIDTH              (1U)
#define MSCM_IRCP7IGR9_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR9_INT_EN_SHIFT)) & MSCM_IRCP7IGR9_INT_EN_MASK)
/*! @} */

/*! @name IRCP7ISR10 - Interrupt Router CP7 Interrupt10 Status Register */
/*! @{ */

#define MSCM_IRCP7ISR10_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP7ISR10_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP7ISR10_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR10_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR10_CP0_INT_SHIFT)) & MSCM_IRCP7ISR10_CP0_INT_MASK)

#define MSCM_IRCP7ISR10_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP7ISR10_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP7ISR10_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR10_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR10_CP1_INT_SHIFT)) & MSCM_IRCP7ISR10_CP1_INT_MASK)

#define MSCM_IRCP7ISR10_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP7ISR10_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP7ISR10_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR10_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR10_CP2_INT_SHIFT)) & MSCM_IRCP7ISR10_CP2_INT_MASK)

#define MSCM_IRCP7ISR10_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP7ISR10_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP7ISR10_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR10_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR10_CP3_INT_SHIFT)) & MSCM_IRCP7ISR10_CP3_INT_MASK)

#define MSCM_IRCP7ISR10_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP7ISR10_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP7ISR10_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR10_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR10_CP4_INT_SHIFT)) & MSCM_IRCP7ISR10_CP4_INT_MASK)

#define MSCM_IRCP7ISR10_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP7ISR10_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP7ISR10_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR10_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR10_CP5_INT_SHIFT)) & MSCM_IRCP7ISR10_CP5_INT_MASK)

#define MSCM_IRCP7ISR10_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP7ISR10_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP7ISR10_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR10_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR10_CP6_INT_SHIFT)) & MSCM_IRCP7ISR10_CP6_INT_MASK)

#define MSCM_IRCP7ISR10_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP7ISR10_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP7ISR10_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR10_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR10_CP7_INT_SHIFT)) & MSCM_IRCP7ISR10_CP7_INT_MASK)

#define MSCM_IRCP7ISR10_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP7ISR10_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP7ISR10_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR10_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR10_CP8_INT_SHIFT)) & MSCM_IRCP7ISR10_CP8_INT_MASK)

#define MSCM_IRCP7ISR10_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP7ISR10_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP7ISR10_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR10_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR10_CP9_INT_SHIFT)) & MSCM_IRCP7ISR10_CP9_INT_MASK)

#define MSCM_IRCP7ISR10_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP7ISR10_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP7ISR10_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP7ISR10_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR10_CP10_INT_SHIFT)) & MSCM_IRCP7ISR10_CP10_INT_MASK)

#define MSCM_IRCP7ISR10_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP7ISR10_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP7ISR10_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP7ISR10_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR10_CP11_INT_SHIFT)) & MSCM_IRCP7ISR10_CP11_INT_MASK)
/*! @} */

/*! @name IRCP7IGR10 - Interrupt Router CP7 Interrupt10 Generation Register */
/*! @{ */

#define MSCM_IRCP7IGR10_INT_EN_MASK              (0x1U)
#define MSCM_IRCP7IGR10_INT_EN_SHIFT             (0U)
#define MSCM_IRCP7IGR10_INT_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR10_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR10_INT_EN_SHIFT)) & MSCM_IRCP7IGR10_INT_EN_MASK)
/*! @} */

/*! @name IRCP7ISR11 - Interrupt Router CP7 Interrupt11 Status Register */
/*! @{ */

#define MSCM_IRCP7ISR11_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP7ISR11_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP7ISR11_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR11_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR11_CP0_INT_SHIFT)) & MSCM_IRCP7ISR11_CP0_INT_MASK)

#define MSCM_IRCP7ISR11_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP7ISR11_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP7ISR11_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR11_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR11_CP1_INT_SHIFT)) & MSCM_IRCP7ISR11_CP1_INT_MASK)

#define MSCM_IRCP7ISR11_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP7ISR11_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP7ISR11_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR11_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR11_CP2_INT_SHIFT)) & MSCM_IRCP7ISR11_CP2_INT_MASK)

#define MSCM_IRCP7ISR11_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP7ISR11_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP7ISR11_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR11_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR11_CP3_INT_SHIFT)) & MSCM_IRCP7ISR11_CP3_INT_MASK)

#define MSCM_IRCP7ISR11_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP7ISR11_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP7ISR11_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR11_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR11_CP4_INT_SHIFT)) & MSCM_IRCP7ISR11_CP4_INT_MASK)

#define MSCM_IRCP7ISR11_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP7ISR11_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP7ISR11_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR11_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR11_CP5_INT_SHIFT)) & MSCM_IRCP7ISR11_CP5_INT_MASK)

#define MSCM_IRCP7ISR11_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP7ISR11_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP7ISR11_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR11_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR11_CP6_INT_SHIFT)) & MSCM_IRCP7ISR11_CP6_INT_MASK)

#define MSCM_IRCP7ISR11_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP7ISR11_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP7ISR11_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR11_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR11_CP7_INT_SHIFT)) & MSCM_IRCP7ISR11_CP7_INT_MASK)

#define MSCM_IRCP7ISR11_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP7ISR11_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP7ISR11_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR11_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR11_CP8_INT_SHIFT)) & MSCM_IRCP7ISR11_CP8_INT_MASK)

#define MSCM_IRCP7ISR11_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP7ISR11_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP7ISR11_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR11_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR11_CP9_INT_SHIFT)) & MSCM_IRCP7ISR11_CP9_INT_MASK)

#define MSCM_IRCP7ISR11_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP7ISR11_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP7ISR11_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP7ISR11_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR11_CP10_INT_SHIFT)) & MSCM_IRCP7ISR11_CP10_INT_MASK)

#define MSCM_IRCP7ISR11_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP7ISR11_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP7ISR11_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP7ISR11_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR11_CP11_INT_SHIFT)) & MSCM_IRCP7ISR11_CP11_INT_MASK)
/*! @} */

/*! @name IRCP7IGR11 - Interrupt Router CP7 Interrupt11 Generation Register */
/*! @{ */

#define MSCM_IRCP7IGR11_INT_EN_MASK              (0x1U)
#define MSCM_IRCP7IGR11_INT_EN_SHIFT             (0U)
#define MSCM_IRCP7IGR11_INT_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR11_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR11_INT_EN_SHIFT)) & MSCM_IRCP7IGR11_INT_EN_MASK)
/*! @} */

/*! @name IRCP7ISR12 - Interrupt Router CP7 Interrupt12 Status Register */
/*! @{ */

#define MSCM_IRCP7ISR12_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP7ISR12_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP7ISR12_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR12_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR12_CP0_INT_SHIFT)) & MSCM_IRCP7ISR12_CP0_INT_MASK)

#define MSCM_IRCP7ISR12_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP7ISR12_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP7ISR12_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR12_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR12_CP1_INT_SHIFT)) & MSCM_IRCP7ISR12_CP1_INT_MASK)

#define MSCM_IRCP7ISR12_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP7ISR12_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP7ISR12_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR12_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR12_CP2_INT_SHIFT)) & MSCM_IRCP7ISR12_CP2_INT_MASK)

#define MSCM_IRCP7ISR12_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP7ISR12_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP7ISR12_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR12_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR12_CP3_INT_SHIFT)) & MSCM_IRCP7ISR12_CP3_INT_MASK)

#define MSCM_IRCP7ISR12_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP7ISR12_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP7ISR12_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR12_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR12_CP4_INT_SHIFT)) & MSCM_IRCP7ISR12_CP4_INT_MASK)

#define MSCM_IRCP7ISR12_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP7ISR12_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP7ISR12_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR12_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR12_CP5_INT_SHIFT)) & MSCM_IRCP7ISR12_CP5_INT_MASK)

#define MSCM_IRCP7ISR12_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP7ISR12_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP7ISR12_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR12_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR12_CP6_INT_SHIFT)) & MSCM_IRCP7ISR12_CP6_INT_MASK)

#define MSCM_IRCP7ISR12_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP7ISR12_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP7ISR12_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR12_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR12_CP7_INT_SHIFT)) & MSCM_IRCP7ISR12_CP7_INT_MASK)

#define MSCM_IRCP7ISR12_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP7ISR12_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP7ISR12_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR12_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR12_CP8_INT_SHIFT)) & MSCM_IRCP7ISR12_CP8_INT_MASK)

#define MSCM_IRCP7ISR12_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP7ISR12_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP7ISR12_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR12_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR12_CP9_INT_SHIFT)) & MSCM_IRCP7ISR12_CP9_INT_MASK)

#define MSCM_IRCP7ISR12_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP7ISR12_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP7ISR12_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP7ISR12_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR12_CP10_INT_SHIFT)) & MSCM_IRCP7ISR12_CP10_INT_MASK)

#define MSCM_IRCP7ISR12_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP7ISR12_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP7ISR12_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP7ISR12_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR12_CP11_INT_SHIFT)) & MSCM_IRCP7ISR12_CP11_INT_MASK)
/*! @} */

/*! @name IRCP7IGR12 - Interrupt Router CP7 Interrupt12 Generation Register */
/*! @{ */

#define MSCM_IRCP7IGR12_INT_EN_MASK              (0x1U)
#define MSCM_IRCP7IGR12_INT_EN_SHIFT             (0U)
#define MSCM_IRCP7IGR12_INT_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR12_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR12_INT_EN_SHIFT)) & MSCM_IRCP7IGR12_INT_EN_MASK)
/*! @} */

/*! @name IRCP7ISR13 - Interrupt Router CP7 Interrupt13 Status Register */
/*! @{ */

#define MSCM_IRCP7ISR13_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP7ISR13_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP7ISR13_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR13_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR13_CP0_INT_SHIFT)) & MSCM_IRCP7ISR13_CP0_INT_MASK)

#define MSCM_IRCP7ISR13_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP7ISR13_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP7ISR13_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR13_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR13_CP1_INT_SHIFT)) & MSCM_IRCP7ISR13_CP1_INT_MASK)

#define MSCM_IRCP7ISR13_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP7ISR13_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP7ISR13_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR13_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR13_CP2_INT_SHIFT)) & MSCM_IRCP7ISR13_CP2_INT_MASK)

#define MSCM_IRCP7ISR13_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP7ISR13_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP7ISR13_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR13_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR13_CP3_INT_SHIFT)) & MSCM_IRCP7ISR13_CP3_INT_MASK)

#define MSCM_IRCP7ISR13_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP7ISR13_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP7ISR13_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR13_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR13_CP4_INT_SHIFT)) & MSCM_IRCP7ISR13_CP4_INT_MASK)

#define MSCM_IRCP7ISR13_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP7ISR13_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP7ISR13_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR13_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR13_CP5_INT_SHIFT)) & MSCM_IRCP7ISR13_CP5_INT_MASK)

#define MSCM_IRCP7ISR13_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP7ISR13_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP7ISR13_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR13_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR13_CP6_INT_SHIFT)) & MSCM_IRCP7ISR13_CP6_INT_MASK)

#define MSCM_IRCP7ISR13_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP7ISR13_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP7ISR13_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR13_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR13_CP7_INT_SHIFT)) & MSCM_IRCP7ISR13_CP7_INT_MASK)

#define MSCM_IRCP7ISR13_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP7ISR13_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP7ISR13_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR13_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR13_CP8_INT_SHIFT)) & MSCM_IRCP7ISR13_CP8_INT_MASK)

#define MSCM_IRCP7ISR13_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP7ISR13_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP7ISR13_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP7ISR13_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR13_CP9_INT_SHIFT)) & MSCM_IRCP7ISR13_CP9_INT_MASK)

#define MSCM_IRCP7ISR13_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP7ISR13_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP7ISR13_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP7ISR13_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR13_CP10_INT_SHIFT)) & MSCM_IRCP7ISR13_CP10_INT_MASK)

#define MSCM_IRCP7ISR13_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP7ISR13_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP7ISR13_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP7ISR13_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7ISR13_CP11_INT_SHIFT)) & MSCM_IRCP7ISR13_CP11_INT_MASK)
/*! @} */

/*! @name IRCP7IGR13 - Interrupt Router CP7 Interrupt13 Generation Register */
/*! @{ */

#define MSCM_IRCP7IGR13_INT_EN_MASK              (0x1U)
#define MSCM_IRCP7IGR13_INT_EN_SHIFT             (0U)
#define MSCM_IRCP7IGR13_INT_EN_WIDTH             (1U)
#define MSCM_IRCP7IGR13_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP7IGR13_INT_EN_SHIFT)) & MSCM_IRCP7IGR13_INT_EN_MASK)
/*! @} */

/*! @name IRCP8ISR0 - Interrupt Router CP8 Interrupt0 Status Register */
/*! @{ */

#define MSCM_IRCP8ISR0_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP8ISR0_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP8ISR0_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR0_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR0_CP0_INT_SHIFT)) & MSCM_IRCP8ISR0_CP0_INT_MASK)

#define MSCM_IRCP8ISR0_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP8ISR0_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP8ISR0_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR0_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR0_CP1_INT_SHIFT)) & MSCM_IRCP8ISR0_CP1_INT_MASK)

#define MSCM_IRCP8ISR0_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP8ISR0_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP8ISR0_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR0_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR0_CP2_INT_SHIFT)) & MSCM_IRCP8ISR0_CP2_INT_MASK)

#define MSCM_IRCP8ISR0_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP8ISR0_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP8ISR0_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR0_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR0_CP3_INT_SHIFT)) & MSCM_IRCP8ISR0_CP3_INT_MASK)

#define MSCM_IRCP8ISR0_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP8ISR0_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP8ISR0_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR0_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR0_CP4_INT_SHIFT)) & MSCM_IRCP8ISR0_CP4_INT_MASK)

#define MSCM_IRCP8ISR0_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP8ISR0_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP8ISR0_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR0_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR0_CP5_INT_SHIFT)) & MSCM_IRCP8ISR0_CP5_INT_MASK)

#define MSCM_IRCP8ISR0_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP8ISR0_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP8ISR0_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR0_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR0_CP6_INT_SHIFT)) & MSCM_IRCP8ISR0_CP6_INT_MASK)

#define MSCM_IRCP8ISR0_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP8ISR0_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP8ISR0_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR0_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR0_CP7_INT_SHIFT)) & MSCM_IRCP8ISR0_CP7_INT_MASK)

#define MSCM_IRCP8ISR0_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP8ISR0_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP8ISR0_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR0_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR0_CP8_INT_SHIFT)) & MSCM_IRCP8ISR0_CP8_INT_MASK)

#define MSCM_IRCP8ISR0_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP8ISR0_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP8ISR0_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR0_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR0_CP9_INT_SHIFT)) & MSCM_IRCP8ISR0_CP9_INT_MASK)

#define MSCM_IRCP8ISR0_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP8ISR0_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP8ISR0_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR0_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR0_CP10_INT_SHIFT)) & MSCM_IRCP8ISR0_CP10_INT_MASK)

#define MSCM_IRCP8ISR0_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP8ISR0_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP8ISR0_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR0_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR0_CP11_INT_SHIFT)) & MSCM_IRCP8ISR0_CP11_INT_MASK)
/*! @} */

/*! @name IRCP8IGR0 - Interrupt Router CP8 Interrupt0 Generation Register */
/*! @{ */

#define MSCM_IRCP8IGR0_INT_EN_MASK               (0x1U)
#define MSCM_IRCP8IGR0_INT_EN_SHIFT              (0U)
#define MSCM_IRCP8IGR0_INT_EN_WIDTH              (1U)
#define MSCM_IRCP8IGR0_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR0_INT_EN_SHIFT)) & MSCM_IRCP8IGR0_INT_EN_MASK)
/*! @} */

/*! @name IRCP8ISR1 - Interrupt Router CP8 Interrupt1 Status Register */
/*! @{ */

#define MSCM_IRCP8ISR1_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP8ISR1_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP8ISR1_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR1_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR1_CP0_INT_SHIFT)) & MSCM_IRCP8ISR1_CP0_INT_MASK)

#define MSCM_IRCP8ISR1_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP8ISR1_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP8ISR1_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR1_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR1_CP1_INT_SHIFT)) & MSCM_IRCP8ISR1_CP1_INT_MASK)

#define MSCM_IRCP8ISR1_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP8ISR1_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP8ISR1_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR1_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR1_CP2_INT_SHIFT)) & MSCM_IRCP8ISR1_CP2_INT_MASK)

#define MSCM_IRCP8ISR1_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP8ISR1_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP8ISR1_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR1_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR1_CP3_INT_SHIFT)) & MSCM_IRCP8ISR1_CP3_INT_MASK)

#define MSCM_IRCP8ISR1_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP8ISR1_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP8ISR1_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR1_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR1_CP4_INT_SHIFT)) & MSCM_IRCP8ISR1_CP4_INT_MASK)

#define MSCM_IRCP8ISR1_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP8ISR1_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP8ISR1_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR1_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR1_CP5_INT_SHIFT)) & MSCM_IRCP8ISR1_CP5_INT_MASK)

#define MSCM_IRCP8ISR1_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP8ISR1_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP8ISR1_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR1_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR1_CP6_INT_SHIFT)) & MSCM_IRCP8ISR1_CP6_INT_MASK)

#define MSCM_IRCP8ISR1_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP8ISR1_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP8ISR1_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR1_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR1_CP7_INT_SHIFT)) & MSCM_IRCP8ISR1_CP7_INT_MASK)

#define MSCM_IRCP8ISR1_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP8ISR1_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP8ISR1_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR1_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR1_CP8_INT_SHIFT)) & MSCM_IRCP8ISR1_CP8_INT_MASK)

#define MSCM_IRCP8ISR1_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP8ISR1_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP8ISR1_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR1_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR1_CP9_INT_SHIFT)) & MSCM_IRCP8ISR1_CP9_INT_MASK)

#define MSCM_IRCP8ISR1_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP8ISR1_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP8ISR1_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR1_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR1_CP10_INT_SHIFT)) & MSCM_IRCP8ISR1_CP10_INT_MASK)

#define MSCM_IRCP8ISR1_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP8ISR1_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP8ISR1_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR1_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR1_CP11_INT_SHIFT)) & MSCM_IRCP8ISR1_CP11_INT_MASK)
/*! @} */

/*! @name IRCP8IGR1 - Interrupt Router CP8 Interrupt1 Generation Register */
/*! @{ */

#define MSCM_IRCP8IGR1_INT_EN_MASK               (0x1U)
#define MSCM_IRCP8IGR1_INT_EN_SHIFT              (0U)
#define MSCM_IRCP8IGR1_INT_EN_WIDTH              (1U)
#define MSCM_IRCP8IGR1_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR1_INT_EN_SHIFT)) & MSCM_IRCP8IGR1_INT_EN_MASK)
/*! @} */

/*! @name IRCP8ISR2 - Interrupt Router CP8 Interrupt2 Status Register */
/*! @{ */

#define MSCM_IRCP8ISR2_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP8ISR2_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP8ISR2_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR2_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR2_CP0_INT_SHIFT)) & MSCM_IRCP8ISR2_CP0_INT_MASK)

#define MSCM_IRCP8ISR2_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP8ISR2_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP8ISR2_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR2_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR2_CP1_INT_SHIFT)) & MSCM_IRCP8ISR2_CP1_INT_MASK)

#define MSCM_IRCP8ISR2_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP8ISR2_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP8ISR2_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR2_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR2_CP2_INT_SHIFT)) & MSCM_IRCP8ISR2_CP2_INT_MASK)

#define MSCM_IRCP8ISR2_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP8ISR2_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP8ISR2_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR2_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR2_CP3_INT_SHIFT)) & MSCM_IRCP8ISR2_CP3_INT_MASK)

#define MSCM_IRCP8ISR2_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP8ISR2_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP8ISR2_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR2_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR2_CP4_INT_SHIFT)) & MSCM_IRCP8ISR2_CP4_INT_MASK)

#define MSCM_IRCP8ISR2_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP8ISR2_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP8ISR2_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR2_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR2_CP5_INT_SHIFT)) & MSCM_IRCP8ISR2_CP5_INT_MASK)

#define MSCM_IRCP8ISR2_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP8ISR2_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP8ISR2_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR2_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR2_CP6_INT_SHIFT)) & MSCM_IRCP8ISR2_CP6_INT_MASK)

#define MSCM_IRCP8ISR2_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP8ISR2_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP8ISR2_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR2_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR2_CP7_INT_SHIFT)) & MSCM_IRCP8ISR2_CP7_INT_MASK)

#define MSCM_IRCP8ISR2_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP8ISR2_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP8ISR2_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR2_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR2_CP8_INT_SHIFT)) & MSCM_IRCP8ISR2_CP8_INT_MASK)

#define MSCM_IRCP8ISR2_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP8ISR2_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP8ISR2_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR2_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR2_CP9_INT_SHIFT)) & MSCM_IRCP8ISR2_CP9_INT_MASK)

#define MSCM_IRCP8ISR2_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP8ISR2_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP8ISR2_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR2_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR2_CP10_INT_SHIFT)) & MSCM_IRCP8ISR2_CP10_INT_MASK)

#define MSCM_IRCP8ISR2_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP8ISR2_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP8ISR2_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR2_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR2_CP11_INT_SHIFT)) & MSCM_IRCP8ISR2_CP11_INT_MASK)
/*! @} */

/*! @name IRCP8IGR2 - Interrupt Router CP8 Interrupt2 Generation Register */
/*! @{ */

#define MSCM_IRCP8IGR2_INT_EN_MASK               (0x1U)
#define MSCM_IRCP8IGR2_INT_EN_SHIFT              (0U)
#define MSCM_IRCP8IGR2_INT_EN_WIDTH              (1U)
#define MSCM_IRCP8IGR2_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR2_INT_EN_SHIFT)) & MSCM_IRCP8IGR2_INT_EN_MASK)
/*! @} */

/*! @name IRCP8ISR3 - Interrupt Router CP8 Interrupt3 Status Register */
/*! @{ */

#define MSCM_IRCP8ISR3_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP8ISR3_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP8ISR3_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP8ISR3_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT0_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT0_MASK)

#define MSCM_IRCP8ISR3_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP8ISR3_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP8ISR3_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP8ISR3_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT1_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT1_MASK)

#define MSCM_IRCP8ISR3_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP8ISR3_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP8ISR3_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP8ISR3_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT2_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT2_MASK)

#define MSCM_IRCP8ISR3_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP8ISR3_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP8ISR3_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP8ISR3_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT3_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT3_MASK)

#define MSCM_IRCP8ISR3_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP8ISR3_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP8ISR3_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP8ISR3_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT4_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT4_MASK)

#define MSCM_IRCP8ISR3_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP8ISR3_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP8ISR3_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP8ISR3_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT5_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT5_MASK)

#define MSCM_IRCP8ISR3_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP8ISR3_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP8ISR3_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP8ISR3_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT6_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT6_MASK)

#define MSCM_IRCP8ISR3_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP8ISR3_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP8ISR3_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP8ISR3_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT7_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT7_MASK)

#define MSCM_IRCP8ISR3_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP8ISR3_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP8ISR3_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP8ISR3_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT8_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT8_MASK)

#define MSCM_IRCP8ISR3_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP8ISR3_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP8ISR3_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP8ISR3_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT9_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT9_MASK)

#define MSCM_IRCP8ISR3_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP8ISR3_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP8ISR3_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP8ISR3_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT10_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT10_MASK)

#define MSCM_IRCP8ISR3_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP8ISR3_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP8ISR3_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP8ISR3_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT11_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT11_MASK)

#define MSCM_IRCP8ISR3_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP8ISR3_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP8ISR3_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP8ISR3_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT12_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT12_MASK)

#define MSCM_IRCP8ISR3_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP8ISR3_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP8ISR3_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP8ISR3_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT13_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT13_MASK)

#define MSCM_IRCP8ISR3_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP8ISR3_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP8ISR3_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP8ISR3_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT14_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT14_MASK)

#define MSCM_IRCP8ISR3_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP8ISR3_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP8ISR3_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP8ISR3_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR3_PCIE_INT15_SHIFT)) & MSCM_IRCP8ISR3_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP8IGR3 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP8IGR3_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP8IGR3_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP8IGR3_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR3_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT0_EN_SHIFT)) & MSCM_IRCP8IGR3_INT0_EN_MASK)

#define MSCM_IRCP8IGR3_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP8IGR3_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP8IGR3_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR3_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT1_EN_SHIFT)) & MSCM_IRCP8IGR3_INT1_EN_MASK)

#define MSCM_IRCP8IGR3_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP8IGR3_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP8IGR3_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR3_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT2_EN_SHIFT)) & MSCM_IRCP8IGR3_INT2_EN_MASK)

#define MSCM_IRCP8IGR3_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP8IGR3_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP8IGR3_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR3_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT3_EN_SHIFT)) & MSCM_IRCP8IGR3_INT3_EN_MASK)

#define MSCM_IRCP8IGR3_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP8IGR3_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP8IGR3_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR3_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT4_EN_SHIFT)) & MSCM_IRCP8IGR3_INT4_EN_MASK)

#define MSCM_IRCP8IGR3_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP8IGR3_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP8IGR3_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR3_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT5_EN_SHIFT)) & MSCM_IRCP8IGR3_INT5_EN_MASK)

#define MSCM_IRCP8IGR3_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP8IGR3_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP8IGR3_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR3_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT6_EN_SHIFT)) & MSCM_IRCP8IGR3_INT6_EN_MASK)

#define MSCM_IRCP8IGR3_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP8IGR3_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP8IGR3_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR3_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT7_EN_SHIFT)) & MSCM_IRCP8IGR3_INT7_EN_MASK)

#define MSCM_IRCP8IGR3_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP8IGR3_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP8IGR3_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR3_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT8_EN_SHIFT)) & MSCM_IRCP8IGR3_INT8_EN_MASK)

#define MSCM_IRCP8IGR3_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP8IGR3_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP8IGR3_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR3_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT9_EN_SHIFT)) & MSCM_IRCP8IGR3_INT9_EN_MASK)

#define MSCM_IRCP8IGR3_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP8IGR3_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP8IGR3_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP8IGR3_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT10_EN_SHIFT)) & MSCM_IRCP8IGR3_INT10_EN_MASK)

#define MSCM_IRCP8IGR3_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP8IGR3_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP8IGR3_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP8IGR3_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT11_EN_SHIFT)) & MSCM_IRCP8IGR3_INT11_EN_MASK)

#define MSCM_IRCP8IGR3_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP8IGR3_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP8IGR3_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP8IGR3_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT12_EN_SHIFT)) & MSCM_IRCP8IGR3_INT12_EN_MASK)

#define MSCM_IRCP8IGR3_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP8IGR3_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP8IGR3_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP8IGR3_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT13_EN_SHIFT)) & MSCM_IRCP8IGR3_INT13_EN_MASK)

#define MSCM_IRCP8IGR3_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP8IGR3_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP8IGR3_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP8IGR3_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT14_EN_SHIFT)) & MSCM_IRCP8IGR3_INT14_EN_MASK)

#define MSCM_IRCP8IGR3_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP8IGR3_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP8IGR3_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP8IGR3_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR3_INT15_EN_SHIFT)) & MSCM_IRCP8IGR3_INT15_EN_MASK)
/*! @} */

/*! @name IRCP8ISR4 - Interrupt Router CP8 Interrupt4 Status Register */
/*! @{ */

#define MSCM_IRCP8ISR4_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP8ISR4_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP8ISR4_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP8ISR4_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT0_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT0_MASK)

#define MSCM_IRCP8ISR4_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP8ISR4_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP8ISR4_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP8ISR4_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT1_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT1_MASK)

#define MSCM_IRCP8ISR4_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP8ISR4_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP8ISR4_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP8ISR4_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT2_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT2_MASK)

#define MSCM_IRCP8ISR4_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP8ISR4_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP8ISR4_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP8ISR4_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT3_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT3_MASK)

#define MSCM_IRCP8ISR4_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP8ISR4_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP8ISR4_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP8ISR4_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT4_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT4_MASK)

#define MSCM_IRCP8ISR4_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP8ISR4_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP8ISR4_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP8ISR4_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT5_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT5_MASK)

#define MSCM_IRCP8ISR4_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP8ISR4_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP8ISR4_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP8ISR4_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT6_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT6_MASK)

#define MSCM_IRCP8ISR4_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP8ISR4_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP8ISR4_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP8ISR4_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT7_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT7_MASK)

#define MSCM_IRCP8ISR4_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP8ISR4_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP8ISR4_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP8ISR4_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT8_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT8_MASK)

#define MSCM_IRCP8ISR4_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP8ISR4_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP8ISR4_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP8ISR4_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT9_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT9_MASK)

#define MSCM_IRCP8ISR4_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP8ISR4_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP8ISR4_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP8ISR4_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT10_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT10_MASK)

#define MSCM_IRCP8ISR4_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP8ISR4_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP8ISR4_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP8ISR4_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT11_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT11_MASK)

#define MSCM_IRCP8ISR4_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP8ISR4_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP8ISR4_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP8ISR4_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT12_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT12_MASK)

#define MSCM_IRCP8ISR4_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP8ISR4_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP8ISR4_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP8ISR4_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT13_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT13_MASK)

#define MSCM_IRCP8ISR4_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP8ISR4_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP8ISR4_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP8ISR4_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT14_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT14_MASK)

#define MSCM_IRCP8ISR4_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP8ISR4_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP8ISR4_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP8ISR4_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR4_PCIE_INT15_SHIFT)) & MSCM_IRCP8ISR4_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP8IGR4 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP8IGR4_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP8IGR4_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP8IGR4_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR4_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT0_EN_SHIFT)) & MSCM_IRCP8IGR4_INT0_EN_MASK)

#define MSCM_IRCP8IGR4_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP8IGR4_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP8IGR4_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR4_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT1_EN_SHIFT)) & MSCM_IRCP8IGR4_INT1_EN_MASK)

#define MSCM_IRCP8IGR4_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP8IGR4_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP8IGR4_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR4_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT2_EN_SHIFT)) & MSCM_IRCP8IGR4_INT2_EN_MASK)

#define MSCM_IRCP8IGR4_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP8IGR4_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP8IGR4_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR4_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT3_EN_SHIFT)) & MSCM_IRCP8IGR4_INT3_EN_MASK)

#define MSCM_IRCP8IGR4_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP8IGR4_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP8IGR4_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR4_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT4_EN_SHIFT)) & MSCM_IRCP8IGR4_INT4_EN_MASK)

#define MSCM_IRCP8IGR4_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP8IGR4_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP8IGR4_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR4_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT5_EN_SHIFT)) & MSCM_IRCP8IGR4_INT5_EN_MASK)

#define MSCM_IRCP8IGR4_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP8IGR4_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP8IGR4_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR4_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT6_EN_SHIFT)) & MSCM_IRCP8IGR4_INT6_EN_MASK)

#define MSCM_IRCP8IGR4_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP8IGR4_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP8IGR4_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR4_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT7_EN_SHIFT)) & MSCM_IRCP8IGR4_INT7_EN_MASK)

#define MSCM_IRCP8IGR4_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP8IGR4_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP8IGR4_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR4_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT8_EN_SHIFT)) & MSCM_IRCP8IGR4_INT8_EN_MASK)

#define MSCM_IRCP8IGR4_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP8IGR4_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP8IGR4_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR4_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT9_EN_SHIFT)) & MSCM_IRCP8IGR4_INT9_EN_MASK)

#define MSCM_IRCP8IGR4_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP8IGR4_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP8IGR4_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP8IGR4_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT10_EN_SHIFT)) & MSCM_IRCP8IGR4_INT10_EN_MASK)

#define MSCM_IRCP8IGR4_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP8IGR4_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP8IGR4_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP8IGR4_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT11_EN_SHIFT)) & MSCM_IRCP8IGR4_INT11_EN_MASK)

#define MSCM_IRCP8IGR4_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP8IGR4_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP8IGR4_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP8IGR4_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT12_EN_SHIFT)) & MSCM_IRCP8IGR4_INT12_EN_MASK)

#define MSCM_IRCP8IGR4_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP8IGR4_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP8IGR4_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP8IGR4_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT13_EN_SHIFT)) & MSCM_IRCP8IGR4_INT13_EN_MASK)

#define MSCM_IRCP8IGR4_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP8IGR4_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP8IGR4_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP8IGR4_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT14_EN_SHIFT)) & MSCM_IRCP8IGR4_INT14_EN_MASK)

#define MSCM_IRCP8IGR4_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP8IGR4_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP8IGR4_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP8IGR4_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR4_INT15_EN_SHIFT)) & MSCM_IRCP8IGR4_INT15_EN_MASK)
/*! @} */

/*! @name IRCP8ISR5 - Interrupt Router CP8 Interrupt5 Status Register */
/*! @{ */

#define MSCM_IRCP8ISR5_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP8ISR5_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP8ISR5_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR5_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR5_CP0_INT_SHIFT)) & MSCM_IRCP8ISR5_CP0_INT_MASK)

#define MSCM_IRCP8ISR5_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP8ISR5_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP8ISR5_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR5_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR5_CP1_INT_SHIFT)) & MSCM_IRCP8ISR5_CP1_INT_MASK)

#define MSCM_IRCP8ISR5_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP8ISR5_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP8ISR5_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR5_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR5_CP2_INT_SHIFT)) & MSCM_IRCP8ISR5_CP2_INT_MASK)

#define MSCM_IRCP8ISR5_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP8ISR5_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP8ISR5_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR5_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR5_CP3_INT_SHIFT)) & MSCM_IRCP8ISR5_CP3_INT_MASK)

#define MSCM_IRCP8ISR5_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP8ISR5_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP8ISR5_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR5_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR5_CP4_INT_SHIFT)) & MSCM_IRCP8ISR5_CP4_INT_MASK)

#define MSCM_IRCP8ISR5_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP8ISR5_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP8ISR5_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR5_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR5_CP5_INT_SHIFT)) & MSCM_IRCP8ISR5_CP5_INT_MASK)

#define MSCM_IRCP8ISR5_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP8ISR5_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP8ISR5_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR5_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR5_CP6_INT_SHIFT)) & MSCM_IRCP8ISR5_CP6_INT_MASK)

#define MSCM_IRCP8ISR5_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP8ISR5_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP8ISR5_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR5_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR5_CP7_INT_SHIFT)) & MSCM_IRCP8ISR5_CP7_INT_MASK)

#define MSCM_IRCP8ISR5_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP8ISR5_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP8ISR5_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR5_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR5_CP8_INT_SHIFT)) & MSCM_IRCP8ISR5_CP8_INT_MASK)

#define MSCM_IRCP8ISR5_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP8ISR5_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP8ISR5_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR5_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR5_CP9_INT_SHIFT)) & MSCM_IRCP8ISR5_CP9_INT_MASK)

#define MSCM_IRCP8ISR5_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP8ISR5_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP8ISR5_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR5_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR5_CP10_INT_SHIFT)) & MSCM_IRCP8ISR5_CP10_INT_MASK)

#define MSCM_IRCP8ISR5_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP8ISR5_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP8ISR5_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR5_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR5_CP11_INT_SHIFT)) & MSCM_IRCP8ISR5_CP11_INT_MASK)
/*! @} */

/*! @name IRCP8IGR5 - Interrupt Router CP8 Interrupt5 Generation Register */
/*! @{ */

#define MSCM_IRCP8IGR5_INT_EN_MASK               (0x1U)
#define MSCM_IRCP8IGR5_INT_EN_SHIFT              (0U)
#define MSCM_IRCP8IGR5_INT_EN_WIDTH              (1U)
#define MSCM_IRCP8IGR5_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR5_INT_EN_SHIFT)) & MSCM_IRCP8IGR5_INT_EN_MASK)
/*! @} */

/*! @name IRCP8ISR6 - Interrupt Router CP8 Interrupt6 Status Register */
/*! @{ */

#define MSCM_IRCP8ISR6_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP8ISR6_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP8ISR6_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR6_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR6_CP0_INT_SHIFT)) & MSCM_IRCP8ISR6_CP0_INT_MASK)

#define MSCM_IRCP8ISR6_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP8ISR6_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP8ISR6_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR6_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR6_CP1_INT_SHIFT)) & MSCM_IRCP8ISR6_CP1_INT_MASK)

#define MSCM_IRCP8ISR6_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP8ISR6_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP8ISR6_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR6_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR6_CP2_INT_SHIFT)) & MSCM_IRCP8ISR6_CP2_INT_MASK)

#define MSCM_IRCP8ISR6_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP8ISR6_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP8ISR6_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR6_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR6_CP3_INT_SHIFT)) & MSCM_IRCP8ISR6_CP3_INT_MASK)

#define MSCM_IRCP8ISR6_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP8ISR6_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP8ISR6_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR6_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR6_CP4_INT_SHIFT)) & MSCM_IRCP8ISR6_CP4_INT_MASK)

#define MSCM_IRCP8ISR6_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP8ISR6_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP8ISR6_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR6_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR6_CP5_INT_SHIFT)) & MSCM_IRCP8ISR6_CP5_INT_MASK)

#define MSCM_IRCP8ISR6_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP8ISR6_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP8ISR6_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR6_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR6_CP6_INT_SHIFT)) & MSCM_IRCP8ISR6_CP6_INT_MASK)

#define MSCM_IRCP8ISR6_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP8ISR6_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP8ISR6_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR6_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR6_CP7_INT_SHIFT)) & MSCM_IRCP8ISR6_CP7_INT_MASK)

#define MSCM_IRCP8ISR6_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP8ISR6_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP8ISR6_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR6_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR6_CP8_INT_SHIFT)) & MSCM_IRCP8ISR6_CP8_INT_MASK)

#define MSCM_IRCP8ISR6_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP8ISR6_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP8ISR6_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR6_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR6_CP9_INT_SHIFT)) & MSCM_IRCP8ISR6_CP9_INT_MASK)

#define MSCM_IRCP8ISR6_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP8ISR6_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP8ISR6_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR6_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR6_CP10_INT_SHIFT)) & MSCM_IRCP8ISR6_CP10_INT_MASK)

#define MSCM_IRCP8ISR6_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP8ISR6_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP8ISR6_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR6_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR6_CP11_INT_SHIFT)) & MSCM_IRCP8ISR6_CP11_INT_MASK)
/*! @} */

/*! @name IRCP8IGR6 - Interrupt Router CP8 Interrupt6 Generation Register */
/*! @{ */

#define MSCM_IRCP8IGR6_INT_EN_MASK               (0x1U)
#define MSCM_IRCP8IGR6_INT_EN_SHIFT              (0U)
#define MSCM_IRCP8IGR6_INT_EN_WIDTH              (1U)
#define MSCM_IRCP8IGR6_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR6_INT_EN_SHIFT)) & MSCM_IRCP8IGR6_INT_EN_MASK)
/*! @} */

/*! @name IRCP8ISR7 - Interrupt Router CP8 Interrupt7 Status Register */
/*! @{ */

#define MSCM_IRCP8ISR7_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP8ISR7_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP8ISR7_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR7_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR7_CP0_INT_SHIFT)) & MSCM_IRCP8ISR7_CP0_INT_MASK)

#define MSCM_IRCP8ISR7_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP8ISR7_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP8ISR7_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR7_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR7_CP1_INT_SHIFT)) & MSCM_IRCP8ISR7_CP1_INT_MASK)

#define MSCM_IRCP8ISR7_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP8ISR7_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP8ISR7_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR7_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR7_CP2_INT_SHIFT)) & MSCM_IRCP8ISR7_CP2_INT_MASK)

#define MSCM_IRCP8ISR7_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP8ISR7_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP8ISR7_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR7_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR7_CP3_INT_SHIFT)) & MSCM_IRCP8ISR7_CP3_INT_MASK)

#define MSCM_IRCP8ISR7_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP8ISR7_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP8ISR7_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR7_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR7_CP4_INT_SHIFT)) & MSCM_IRCP8ISR7_CP4_INT_MASK)

#define MSCM_IRCP8ISR7_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP8ISR7_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP8ISR7_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR7_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR7_CP5_INT_SHIFT)) & MSCM_IRCP8ISR7_CP5_INT_MASK)

#define MSCM_IRCP8ISR7_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP8ISR7_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP8ISR7_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR7_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR7_CP6_INT_SHIFT)) & MSCM_IRCP8ISR7_CP6_INT_MASK)

#define MSCM_IRCP8ISR7_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP8ISR7_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP8ISR7_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR7_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR7_CP7_INT_SHIFT)) & MSCM_IRCP8ISR7_CP7_INT_MASK)

#define MSCM_IRCP8ISR7_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP8ISR7_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP8ISR7_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR7_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR7_CP8_INT_SHIFT)) & MSCM_IRCP8ISR7_CP8_INT_MASK)

#define MSCM_IRCP8ISR7_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP8ISR7_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP8ISR7_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR7_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR7_CP9_INT_SHIFT)) & MSCM_IRCP8ISR7_CP9_INT_MASK)

#define MSCM_IRCP8ISR7_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP8ISR7_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP8ISR7_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR7_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR7_CP10_INT_SHIFT)) & MSCM_IRCP8ISR7_CP10_INT_MASK)

#define MSCM_IRCP8ISR7_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP8ISR7_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP8ISR7_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR7_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR7_CP11_INT_SHIFT)) & MSCM_IRCP8ISR7_CP11_INT_MASK)
/*! @} */

/*! @name IRCP8IGR7 - Interrupt Router CP8 Interrupt7 Generation Register */
/*! @{ */

#define MSCM_IRCP8IGR7_INT_EN_MASK               (0x1U)
#define MSCM_IRCP8IGR7_INT_EN_SHIFT              (0U)
#define MSCM_IRCP8IGR7_INT_EN_WIDTH              (1U)
#define MSCM_IRCP8IGR7_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR7_INT_EN_SHIFT)) & MSCM_IRCP8IGR7_INT_EN_MASK)
/*! @} */

/*! @name IRCP8ISR8 - Interrupt Router CP8 Interrupt8 Status Register */
/*! @{ */

#define MSCM_IRCP8ISR8_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP8ISR8_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP8ISR8_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR8_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR8_CP0_INT_SHIFT)) & MSCM_IRCP8ISR8_CP0_INT_MASK)

#define MSCM_IRCP8ISR8_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP8ISR8_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP8ISR8_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR8_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR8_CP1_INT_SHIFT)) & MSCM_IRCP8ISR8_CP1_INT_MASK)

#define MSCM_IRCP8ISR8_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP8ISR8_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP8ISR8_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR8_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR8_CP2_INT_SHIFT)) & MSCM_IRCP8ISR8_CP2_INT_MASK)

#define MSCM_IRCP8ISR8_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP8ISR8_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP8ISR8_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR8_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR8_CP3_INT_SHIFT)) & MSCM_IRCP8ISR8_CP3_INT_MASK)

#define MSCM_IRCP8ISR8_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP8ISR8_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP8ISR8_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR8_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR8_CP4_INT_SHIFT)) & MSCM_IRCP8ISR8_CP4_INT_MASK)

#define MSCM_IRCP8ISR8_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP8ISR8_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP8ISR8_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR8_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR8_CP5_INT_SHIFT)) & MSCM_IRCP8ISR8_CP5_INT_MASK)

#define MSCM_IRCP8ISR8_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP8ISR8_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP8ISR8_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR8_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR8_CP6_INT_SHIFT)) & MSCM_IRCP8ISR8_CP6_INT_MASK)

#define MSCM_IRCP8ISR8_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP8ISR8_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP8ISR8_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR8_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR8_CP7_INT_SHIFT)) & MSCM_IRCP8ISR8_CP7_INT_MASK)

#define MSCM_IRCP8ISR8_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP8ISR8_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP8ISR8_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR8_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR8_CP8_INT_SHIFT)) & MSCM_IRCP8ISR8_CP8_INT_MASK)

#define MSCM_IRCP8ISR8_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP8ISR8_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP8ISR8_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR8_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR8_CP9_INT_SHIFT)) & MSCM_IRCP8ISR8_CP9_INT_MASK)

#define MSCM_IRCP8ISR8_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP8ISR8_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP8ISR8_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR8_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR8_CP10_INT_SHIFT)) & MSCM_IRCP8ISR8_CP10_INT_MASK)

#define MSCM_IRCP8ISR8_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP8ISR8_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP8ISR8_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR8_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR8_CP11_INT_SHIFT)) & MSCM_IRCP8ISR8_CP11_INT_MASK)
/*! @} */

/*! @name IRCP8IGR8 - Interrupt Router CP8 Interrupt8 Generation Register */
/*! @{ */

#define MSCM_IRCP8IGR8_INT_EN_MASK               (0x1U)
#define MSCM_IRCP8IGR8_INT_EN_SHIFT              (0U)
#define MSCM_IRCP8IGR8_INT_EN_WIDTH              (1U)
#define MSCM_IRCP8IGR8_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR8_INT_EN_SHIFT)) & MSCM_IRCP8IGR8_INT_EN_MASK)
/*! @} */

/*! @name IRCP8ISR9 - Interrupt Router CP8 Interrupt9 Status Register */
/*! @{ */

#define MSCM_IRCP8ISR9_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP8ISR9_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP8ISR9_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR9_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR9_CP0_INT_SHIFT)) & MSCM_IRCP8ISR9_CP0_INT_MASK)

#define MSCM_IRCP8ISR9_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP8ISR9_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP8ISR9_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR9_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR9_CP1_INT_SHIFT)) & MSCM_IRCP8ISR9_CP1_INT_MASK)

#define MSCM_IRCP8ISR9_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP8ISR9_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP8ISR9_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR9_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR9_CP2_INT_SHIFT)) & MSCM_IRCP8ISR9_CP2_INT_MASK)

#define MSCM_IRCP8ISR9_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP8ISR9_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP8ISR9_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR9_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR9_CP3_INT_SHIFT)) & MSCM_IRCP8ISR9_CP3_INT_MASK)

#define MSCM_IRCP8ISR9_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP8ISR9_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP8ISR9_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR9_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR9_CP4_INT_SHIFT)) & MSCM_IRCP8ISR9_CP4_INT_MASK)

#define MSCM_IRCP8ISR9_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP8ISR9_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP8ISR9_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR9_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR9_CP5_INT_SHIFT)) & MSCM_IRCP8ISR9_CP5_INT_MASK)

#define MSCM_IRCP8ISR9_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP8ISR9_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP8ISR9_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR9_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR9_CP6_INT_SHIFT)) & MSCM_IRCP8ISR9_CP6_INT_MASK)

#define MSCM_IRCP8ISR9_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP8ISR9_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP8ISR9_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR9_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR9_CP7_INT_SHIFT)) & MSCM_IRCP8ISR9_CP7_INT_MASK)

#define MSCM_IRCP8ISR9_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP8ISR9_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP8ISR9_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR9_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR9_CP8_INT_SHIFT)) & MSCM_IRCP8ISR9_CP8_INT_MASK)

#define MSCM_IRCP8ISR9_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP8ISR9_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP8ISR9_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP8ISR9_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR9_CP9_INT_SHIFT)) & MSCM_IRCP8ISR9_CP9_INT_MASK)

#define MSCM_IRCP8ISR9_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP8ISR9_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP8ISR9_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR9_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR9_CP10_INT_SHIFT)) & MSCM_IRCP8ISR9_CP10_INT_MASK)

#define MSCM_IRCP8ISR9_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP8ISR9_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP8ISR9_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR9_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR9_CP11_INT_SHIFT)) & MSCM_IRCP8ISR9_CP11_INT_MASK)
/*! @} */

/*! @name IRCP8IGR9 - Interrupt Router CP8 Interrupt9 Generation Register */
/*! @{ */

#define MSCM_IRCP8IGR9_INT_EN_MASK               (0x1U)
#define MSCM_IRCP8IGR9_INT_EN_SHIFT              (0U)
#define MSCM_IRCP8IGR9_INT_EN_WIDTH              (1U)
#define MSCM_IRCP8IGR9_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR9_INT_EN_SHIFT)) & MSCM_IRCP8IGR9_INT_EN_MASK)
/*! @} */

/*! @name IRCP8ISR10 - Interrupt Router CP8 Interrupt10 Status Register */
/*! @{ */

#define MSCM_IRCP8ISR10_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP8ISR10_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP8ISR10_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR10_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR10_CP0_INT_SHIFT)) & MSCM_IRCP8ISR10_CP0_INT_MASK)

#define MSCM_IRCP8ISR10_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP8ISR10_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP8ISR10_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR10_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR10_CP1_INT_SHIFT)) & MSCM_IRCP8ISR10_CP1_INT_MASK)

#define MSCM_IRCP8ISR10_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP8ISR10_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP8ISR10_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR10_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR10_CP2_INT_SHIFT)) & MSCM_IRCP8ISR10_CP2_INT_MASK)

#define MSCM_IRCP8ISR10_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP8ISR10_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP8ISR10_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR10_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR10_CP3_INT_SHIFT)) & MSCM_IRCP8ISR10_CP3_INT_MASK)

#define MSCM_IRCP8ISR10_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP8ISR10_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP8ISR10_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR10_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR10_CP4_INT_SHIFT)) & MSCM_IRCP8ISR10_CP4_INT_MASK)

#define MSCM_IRCP8ISR10_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP8ISR10_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP8ISR10_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR10_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR10_CP5_INT_SHIFT)) & MSCM_IRCP8ISR10_CP5_INT_MASK)

#define MSCM_IRCP8ISR10_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP8ISR10_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP8ISR10_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR10_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR10_CP6_INT_SHIFT)) & MSCM_IRCP8ISR10_CP6_INT_MASK)

#define MSCM_IRCP8ISR10_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP8ISR10_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP8ISR10_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR10_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR10_CP7_INT_SHIFT)) & MSCM_IRCP8ISR10_CP7_INT_MASK)

#define MSCM_IRCP8ISR10_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP8ISR10_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP8ISR10_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR10_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR10_CP8_INT_SHIFT)) & MSCM_IRCP8ISR10_CP8_INT_MASK)

#define MSCM_IRCP8ISR10_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP8ISR10_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP8ISR10_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR10_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR10_CP9_INT_SHIFT)) & MSCM_IRCP8ISR10_CP9_INT_MASK)

#define MSCM_IRCP8ISR10_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP8ISR10_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP8ISR10_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP8ISR10_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR10_CP10_INT_SHIFT)) & MSCM_IRCP8ISR10_CP10_INT_MASK)

#define MSCM_IRCP8ISR10_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP8ISR10_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP8ISR10_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP8ISR10_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR10_CP11_INT_SHIFT)) & MSCM_IRCP8ISR10_CP11_INT_MASK)
/*! @} */

/*! @name IRCP8IGR10 - Interrupt Router CP8 Interrupt10 Generation Register */
/*! @{ */

#define MSCM_IRCP8IGR10_INT_EN_MASK              (0x1U)
#define MSCM_IRCP8IGR10_INT_EN_SHIFT             (0U)
#define MSCM_IRCP8IGR10_INT_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR10_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR10_INT_EN_SHIFT)) & MSCM_IRCP8IGR10_INT_EN_MASK)
/*! @} */

/*! @name IRCP8ISR11 - Interrupt Router CP8 Interrupt11 Status Register */
/*! @{ */

#define MSCM_IRCP8ISR11_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP8ISR11_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP8ISR11_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR11_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR11_CP0_INT_SHIFT)) & MSCM_IRCP8ISR11_CP0_INT_MASK)

#define MSCM_IRCP8ISR11_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP8ISR11_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP8ISR11_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR11_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR11_CP1_INT_SHIFT)) & MSCM_IRCP8ISR11_CP1_INT_MASK)

#define MSCM_IRCP8ISR11_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP8ISR11_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP8ISR11_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR11_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR11_CP2_INT_SHIFT)) & MSCM_IRCP8ISR11_CP2_INT_MASK)

#define MSCM_IRCP8ISR11_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP8ISR11_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP8ISR11_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR11_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR11_CP3_INT_SHIFT)) & MSCM_IRCP8ISR11_CP3_INT_MASK)

#define MSCM_IRCP8ISR11_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP8ISR11_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP8ISR11_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR11_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR11_CP4_INT_SHIFT)) & MSCM_IRCP8ISR11_CP4_INT_MASK)

#define MSCM_IRCP8ISR11_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP8ISR11_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP8ISR11_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR11_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR11_CP5_INT_SHIFT)) & MSCM_IRCP8ISR11_CP5_INT_MASK)

#define MSCM_IRCP8ISR11_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP8ISR11_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP8ISR11_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR11_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR11_CP6_INT_SHIFT)) & MSCM_IRCP8ISR11_CP6_INT_MASK)

#define MSCM_IRCP8ISR11_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP8ISR11_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP8ISR11_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR11_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR11_CP7_INT_SHIFT)) & MSCM_IRCP8ISR11_CP7_INT_MASK)

#define MSCM_IRCP8ISR11_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP8ISR11_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP8ISR11_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR11_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR11_CP8_INT_SHIFT)) & MSCM_IRCP8ISR11_CP8_INT_MASK)

#define MSCM_IRCP8ISR11_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP8ISR11_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP8ISR11_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR11_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR11_CP9_INT_SHIFT)) & MSCM_IRCP8ISR11_CP9_INT_MASK)

#define MSCM_IRCP8ISR11_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP8ISR11_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP8ISR11_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP8ISR11_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR11_CP10_INT_SHIFT)) & MSCM_IRCP8ISR11_CP10_INT_MASK)

#define MSCM_IRCP8ISR11_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP8ISR11_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP8ISR11_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP8ISR11_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR11_CP11_INT_SHIFT)) & MSCM_IRCP8ISR11_CP11_INT_MASK)
/*! @} */

/*! @name IRCP8IGR11 - Interrupt Router CP8 Interrupt11 Generation Register */
/*! @{ */

#define MSCM_IRCP8IGR11_INT_EN_MASK              (0x1U)
#define MSCM_IRCP8IGR11_INT_EN_SHIFT             (0U)
#define MSCM_IRCP8IGR11_INT_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR11_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR11_INT_EN_SHIFT)) & MSCM_IRCP8IGR11_INT_EN_MASK)
/*! @} */

/*! @name IRCP8ISR12 - Interrupt Router CP8 Interrupt12 Status Register */
/*! @{ */

#define MSCM_IRCP8ISR12_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP8ISR12_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP8ISR12_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR12_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR12_CP0_INT_SHIFT)) & MSCM_IRCP8ISR12_CP0_INT_MASK)

#define MSCM_IRCP8ISR12_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP8ISR12_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP8ISR12_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR12_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR12_CP1_INT_SHIFT)) & MSCM_IRCP8ISR12_CP1_INT_MASK)

#define MSCM_IRCP8ISR12_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP8ISR12_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP8ISR12_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR12_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR12_CP2_INT_SHIFT)) & MSCM_IRCP8ISR12_CP2_INT_MASK)

#define MSCM_IRCP8ISR12_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP8ISR12_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP8ISR12_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR12_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR12_CP3_INT_SHIFT)) & MSCM_IRCP8ISR12_CP3_INT_MASK)

#define MSCM_IRCP8ISR12_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP8ISR12_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP8ISR12_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR12_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR12_CP4_INT_SHIFT)) & MSCM_IRCP8ISR12_CP4_INT_MASK)

#define MSCM_IRCP8ISR12_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP8ISR12_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP8ISR12_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR12_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR12_CP5_INT_SHIFT)) & MSCM_IRCP8ISR12_CP5_INT_MASK)

#define MSCM_IRCP8ISR12_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP8ISR12_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP8ISR12_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR12_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR12_CP6_INT_SHIFT)) & MSCM_IRCP8ISR12_CP6_INT_MASK)

#define MSCM_IRCP8ISR12_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP8ISR12_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP8ISR12_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR12_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR12_CP7_INT_SHIFT)) & MSCM_IRCP8ISR12_CP7_INT_MASK)

#define MSCM_IRCP8ISR12_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP8ISR12_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP8ISR12_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR12_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR12_CP8_INT_SHIFT)) & MSCM_IRCP8ISR12_CP8_INT_MASK)

#define MSCM_IRCP8ISR12_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP8ISR12_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP8ISR12_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR12_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR12_CP9_INT_SHIFT)) & MSCM_IRCP8ISR12_CP9_INT_MASK)

#define MSCM_IRCP8ISR12_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP8ISR12_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP8ISR12_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP8ISR12_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR12_CP10_INT_SHIFT)) & MSCM_IRCP8ISR12_CP10_INT_MASK)

#define MSCM_IRCP8ISR12_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP8ISR12_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP8ISR12_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP8ISR12_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR12_CP11_INT_SHIFT)) & MSCM_IRCP8ISR12_CP11_INT_MASK)
/*! @} */

/*! @name IRCP8IGR12 - Interrupt Router CP8 Interrupt12 Generation Register */
/*! @{ */

#define MSCM_IRCP8IGR12_INT_EN_MASK              (0x1U)
#define MSCM_IRCP8IGR12_INT_EN_SHIFT             (0U)
#define MSCM_IRCP8IGR12_INT_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR12_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR12_INT_EN_SHIFT)) & MSCM_IRCP8IGR12_INT_EN_MASK)
/*! @} */

/*! @name IRCP8ISR13 - Interrupt Router CP8 Interrupt13 Status Register */
/*! @{ */

#define MSCM_IRCP8ISR13_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP8ISR13_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP8ISR13_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR13_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR13_CP0_INT_SHIFT)) & MSCM_IRCP8ISR13_CP0_INT_MASK)

#define MSCM_IRCP8ISR13_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP8ISR13_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP8ISR13_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR13_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR13_CP1_INT_SHIFT)) & MSCM_IRCP8ISR13_CP1_INT_MASK)

#define MSCM_IRCP8ISR13_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP8ISR13_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP8ISR13_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR13_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR13_CP2_INT_SHIFT)) & MSCM_IRCP8ISR13_CP2_INT_MASK)

#define MSCM_IRCP8ISR13_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP8ISR13_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP8ISR13_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR13_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR13_CP3_INT_SHIFT)) & MSCM_IRCP8ISR13_CP3_INT_MASK)

#define MSCM_IRCP8ISR13_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP8ISR13_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP8ISR13_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR13_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR13_CP4_INT_SHIFT)) & MSCM_IRCP8ISR13_CP4_INT_MASK)

#define MSCM_IRCP8ISR13_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP8ISR13_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP8ISR13_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR13_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR13_CP5_INT_SHIFT)) & MSCM_IRCP8ISR13_CP5_INT_MASK)

#define MSCM_IRCP8ISR13_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP8ISR13_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP8ISR13_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR13_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR13_CP6_INT_SHIFT)) & MSCM_IRCP8ISR13_CP6_INT_MASK)

#define MSCM_IRCP8ISR13_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP8ISR13_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP8ISR13_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR13_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR13_CP7_INT_SHIFT)) & MSCM_IRCP8ISR13_CP7_INT_MASK)

#define MSCM_IRCP8ISR13_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP8ISR13_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP8ISR13_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR13_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR13_CP8_INT_SHIFT)) & MSCM_IRCP8ISR13_CP8_INT_MASK)

#define MSCM_IRCP8ISR13_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP8ISR13_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP8ISR13_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP8ISR13_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR13_CP9_INT_SHIFT)) & MSCM_IRCP8ISR13_CP9_INT_MASK)

#define MSCM_IRCP8ISR13_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP8ISR13_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP8ISR13_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP8ISR13_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR13_CP10_INT_SHIFT)) & MSCM_IRCP8ISR13_CP10_INT_MASK)

#define MSCM_IRCP8ISR13_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP8ISR13_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP8ISR13_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP8ISR13_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8ISR13_CP11_INT_SHIFT)) & MSCM_IRCP8ISR13_CP11_INT_MASK)
/*! @} */

/*! @name IRCP8IGR13 - Interrupt Router CP8 Interrupt13 Generation Register */
/*! @{ */

#define MSCM_IRCP8IGR13_INT_EN_MASK              (0x1U)
#define MSCM_IRCP8IGR13_INT_EN_SHIFT             (0U)
#define MSCM_IRCP8IGR13_INT_EN_WIDTH             (1U)
#define MSCM_IRCP8IGR13_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP8IGR13_INT_EN_SHIFT)) & MSCM_IRCP8IGR13_INT_EN_MASK)
/*! @} */

/*! @name IRCP9ISR0 - Interrupt Router CP9 Interrupt0 Status Register */
/*! @{ */

#define MSCM_IRCP9ISR0_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP9ISR0_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP9ISR0_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR0_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR0_CP0_INT_SHIFT)) & MSCM_IRCP9ISR0_CP0_INT_MASK)

#define MSCM_IRCP9ISR0_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP9ISR0_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP9ISR0_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR0_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR0_CP1_INT_SHIFT)) & MSCM_IRCP9ISR0_CP1_INT_MASK)

#define MSCM_IRCP9ISR0_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP9ISR0_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP9ISR0_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR0_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR0_CP2_INT_SHIFT)) & MSCM_IRCP9ISR0_CP2_INT_MASK)

#define MSCM_IRCP9ISR0_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP9ISR0_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP9ISR0_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR0_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR0_CP3_INT_SHIFT)) & MSCM_IRCP9ISR0_CP3_INT_MASK)

#define MSCM_IRCP9ISR0_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP9ISR0_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP9ISR0_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR0_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR0_CP4_INT_SHIFT)) & MSCM_IRCP9ISR0_CP4_INT_MASK)

#define MSCM_IRCP9ISR0_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP9ISR0_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP9ISR0_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR0_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR0_CP5_INT_SHIFT)) & MSCM_IRCP9ISR0_CP5_INT_MASK)

#define MSCM_IRCP9ISR0_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP9ISR0_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP9ISR0_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR0_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR0_CP6_INT_SHIFT)) & MSCM_IRCP9ISR0_CP6_INT_MASK)

#define MSCM_IRCP9ISR0_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP9ISR0_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP9ISR0_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR0_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR0_CP7_INT_SHIFT)) & MSCM_IRCP9ISR0_CP7_INT_MASK)

#define MSCM_IRCP9ISR0_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP9ISR0_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP9ISR0_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR0_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR0_CP8_INT_SHIFT)) & MSCM_IRCP9ISR0_CP8_INT_MASK)

#define MSCM_IRCP9ISR0_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP9ISR0_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP9ISR0_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR0_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR0_CP9_INT_SHIFT)) & MSCM_IRCP9ISR0_CP9_INT_MASK)

#define MSCM_IRCP9ISR0_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP9ISR0_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP9ISR0_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR0_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR0_CP10_INT_SHIFT)) & MSCM_IRCP9ISR0_CP10_INT_MASK)

#define MSCM_IRCP9ISR0_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP9ISR0_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP9ISR0_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR0_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR0_CP11_INT_SHIFT)) & MSCM_IRCP9ISR0_CP11_INT_MASK)
/*! @} */

/*! @name IRCP9IGR0 - Interrupt Router CP9 Interrupt0 Generation Register */
/*! @{ */

#define MSCM_IRCP9IGR0_INT_EN_MASK               (0x1U)
#define MSCM_IRCP9IGR0_INT_EN_SHIFT              (0U)
#define MSCM_IRCP9IGR0_INT_EN_WIDTH              (1U)
#define MSCM_IRCP9IGR0_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR0_INT_EN_SHIFT)) & MSCM_IRCP9IGR0_INT_EN_MASK)
/*! @} */

/*! @name IRCP9ISR1 - Interrupt Router CP9 Interrupt1 Status Register */
/*! @{ */

#define MSCM_IRCP9ISR1_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP9ISR1_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP9ISR1_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR1_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR1_CP0_INT_SHIFT)) & MSCM_IRCP9ISR1_CP0_INT_MASK)

#define MSCM_IRCP9ISR1_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP9ISR1_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP9ISR1_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR1_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR1_CP1_INT_SHIFT)) & MSCM_IRCP9ISR1_CP1_INT_MASK)

#define MSCM_IRCP9ISR1_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP9ISR1_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP9ISR1_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR1_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR1_CP2_INT_SHIFT)) & MSCM_IRCP9ISR1_CP2_INT_MASK)

#define MSCM_IRCP9ISR1_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP9ISR1_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP9ISR1_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR1_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR1_CP3_INT_SHIFT)) & MSCM_IRCP9ISR1_CP3_INT_MASK)

#define MSCM_IRCP9ISR1_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP9ISR1_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP9ISR1_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR1_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR1_CP4_INT_SHIFT)) & MSCM_IRCP9ISR1_CP4_INT_MASK)

#define MSCM_IRCP9ISR1_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP9ISR1_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP9ISR1_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR1_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR1_CP5_INT_SHIFT)) & MSCM_IRCP9ISR1_CP5_INT_MASK)

#define MSCM_IRCP9ISR1_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP9ISR1_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP9ISR1_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR1_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR1_CP6_INT_SHIFT)) & MSCM_IRCP9ISR1_CP6_INT_MASK)

#define MSCM_IRCP9ISR1_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP9ISR1_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP9ISR1_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR1_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR1_CP7_INT_SHIFT)) & MSCM_IRCP9ISR1_CP7_INT_MASK)

#define MSCM_IRCP9ISR1_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP9ISR1_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP9ISR1_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR1_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR1_CP8_INT_SHIFT)) & MSCM_IRCP9ISR1_CP8_INT_MASK)

#define MSCM_IRCP9ISR1_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP9ISR1_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP9ISR1_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR1_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR1_CP9_INT_SHIFT)) & MSCM_IRCP9ISR1_CP9_INT_MASK)

#define MSCM_IRCP9ISR1_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP9ISR1_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP9ISR1_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR1_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR1_CP10_INT_SHIFT)) & MSCM_IRCP9ISR1_CP10_INT_MASK)

#define MSCM_IRCP9ISR1_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP9ISR1_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP9ISR1_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR1_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR1_CP11_INT_SHIFT)) & MSCM_IRCP9ISR1_CP11_INT_MASK)
/*! @} */

/*! @name IRCP9IGR1 - Interrupt Router CP9 Interrupt1 Generation Register */
/*! @{ */

#define MSCM_IRCP9IGR1_INT_EN_MASK               (0x1U)
#define MSCM_IRCP9IGR1_INT_EN_SHIFT              (0U)
#define MSCM_IRCP9IGR1_INT_EN_WIDTH              (1U)
#define MSCM_IRCP9IGR1_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR1_INT_EN_SHIFT)) & MSCM_IRCP9IGR1_INT_EN_MASK)
/*! @} */

/*! @name IRCP9ISR2 - Interrupt Router CP9 Interrupt2 Status Register */
/*! @{ */

#define MSCM_IRCP9ISR2_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP9ISR2_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP9ISR2_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR2_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR2_CP0_INT_SHIFT)) & MSCM_IRCP9ISR2_CP0_INT_MASK)

#define MSCM_IRCP9ISR2_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP9ISR2_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP9ISR2_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR2_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR2_CP1_INT_SHIFT)) & MSCM_IRCP9ISR2_CP1_INT_MASK)

#define MSCM_IRCP9ISR2_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP9ISR2_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP9ISR2_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR2_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR2_CP2_INT_SHIFT)) & MSCM_IRCP9ISR2_CP2_INT_MASK)

#define MSCM_IRCP9ISR2_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP9ISR2_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP9ISR2_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR2_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR2_CP3_INT_SHIFT)) & MSCM_IRCP9ISR2_CP3_INT_MASK)

#define MSCM_IRCP9ISR2_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP9ISR2_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP9ISR2_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR2_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR2_CP4_INT_SHIFT)) & MSCM_IRCP9ISR2_CP4_INT_MASK)

#define MSCM_IRCP9ISR2_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP9ISR2_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP9ISR2_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR2_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR2_CP5_INT_SHIFT)) & MSCM_IRCP9ISR2_CP5_INT_MASK)

#define MSCM_IRCP9ISR2_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP9ISR2_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP9ISR2_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR2_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR2_CP6_INT_SHIFT)) & MSCM_IRCP9ISR2_CP6_INT_MASK)

#define MSCM_IRCP9ISR2_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP9ISR2_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP9ISR2_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR2_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR2_CP7_INT_SHIFT)) & MSCM_IRCP9ISR2_CP7_INT_MASK)

#define MSCM_IRCP9ISR2_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP9ISR2_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP9ISR2_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR2_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR2_CP8_INT_SHIFT)) & MSCM_IRCP9ISR2_CP8_INT_MASK)

#define MSCM_IRCP9ISR2_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP9ISR2_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP9ISR2_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR2_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR2_CP9_INT_SHIFT)) & MSCM_IRCP9ISR2_CP9_INT_MASK)

#define MSCM_IRCP9ISR2_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP9ISR2_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP9ISR2_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR2_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR2_CP10_INT_SHIFT)) & MSCM_IRCP9ISR2_CP10_INT_MASK)

#define MSCM_IRCP9ISR2_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP9ISR2_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP9ISR2_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR2_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR2_CP11_INT_SHIFT)) & MSCM_IRCP9ISR2_CP11_INT_MASK)
/*! @} */

/*! @name IRCP9IGR2 - Interrupt Router CP9 Interrupt2 Generation Register */
/*! @{ */

#define MSCM_IRCP9IGR2_INT_EN_MASK               (0x1U)
#define MSCM_IRCP9IGR2_INT_EN_SHIFT              (0U)
#define MSCM_IRCP9IGR2_INT_EN_WIDTH              (1U)
#define MSCM_IRCP9IGR2_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR2_INT_EN_SHIFT)) & MSCM_IRCP9IGR2_INT_EN_MASK)
/*! @} */

/*! @name IRCP9ISR3 - Interrupt Router CP9 Interrupt3 Status Register */
/*! @{ */

#define MSCM_IRCP9ISR3_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP9ISR3_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP9ISR3_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP9ISR3_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT0_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT0_MASK)

#define MSCM_IRCP9ISR3_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP9ISR3_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP9ISR3_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP9ISR3_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT1_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT1_MASK)

#define MSCM_IRCP9ISR3_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP9ISR3_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP9ISR3_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP9ISR3_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT2_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT2_MASK)

#define MSCM_IRCP9ISR3_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP9ISR3_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP9ISR3_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP9ISR3_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT3_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT3_MASK)

#define MSCM_IRCP9ISR3_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP9ISR3_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP9ISR3_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP9ISR3_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT4_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT4_MASK)

#define MSCM_IRCP9ISR3_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP9ISR3_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP9ISR3_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP9ISR3_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT5_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT5_MASK)

#define MSCM_IRCP9ISR3_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP9ISR3_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP9ISR3_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP9ISR3_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT6_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT6_MASK)

#define MSCM_IRCP9ISR3_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP9ISR3_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP9ISR3_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP9ISR3_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT7_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT7_MASK)

#define MSCM_IRCP9ISR3_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP9ISR3_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP9ISR3_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP9ISR3_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT8_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT8_MASK)

#define MSCM_IRCP9ISR3_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP9ISR3_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP9ISR3_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP9ISR3_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT9_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT9_MASK)

#define MSCM_IRCP9ISR3_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP9ISR3_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP9ISR3_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP9ISR3_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT10_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT10_MASK)

#define MSCM_IRCP9ISR3_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP9ISR3_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP9ISR3_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP9ISR3_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT11_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT11_MASK)

#define MSCM_IRCP9ISR3_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP9ISR3_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP9ISR3_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP9ISR3_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT12_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT12_MASK)

#define MSCM_IRCP9ISR3_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP9ISR3_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP9ISR3_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP9ISR3_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT13_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT13_MASK)

#define MSCM_IRCP9ISR3_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP9ISR3_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP9ISR3_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP9ISR3_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT14_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT14_MASK)

#define MSCM_IRCP9ISR3_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP9ISR3_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP9ISR3_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP9ISR3_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR3_PCIE_INT15_SHIFT)) & MSCM_IRCP9ISR3_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP9IGR3 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP9IGR3_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP9IGR3_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP9IGR3_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR3_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT0_EN_SHIFT)) & MSCM_IRCP9IGR3_INT0_EN_MASK)

#define MSCM_IRCP9IGR3_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP9IGR3_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP9IGR3_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR3_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT1_EN_SHIFT)) & MSCM_IRCP9IGR3_INT1_EN_MASK)

#define MSCM_IRCP9IGR3_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP9IGR3_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP9IGR3_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR3_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT2_EN_SHIFT)) & MSCM_IRCP9IGR3_INT2_EN_MASK)

#define MSCM_IRCP9IGR3_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP9IGR3_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP9IGR3_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR3_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT3_EN_SHIFT)) & MSCM_IRCP9IGR3_INT3_EN_MASK)

#define MSCM_IRCP9IGR3_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP9IGR3_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP9IGR3_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR3_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT4_EN_SHIFT)) & MSCM_IRCP9IGR3_INT4_EN_MASK)

#define MSCM_IRCP9IGR3_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP9IGR3_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP9IGR3_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR3_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT5_EN_SHIFT)) & MSCM_IRCP9IGR3_INT5_EN_MASK)

#define MSCM_IRCP9IGR3_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP9IGR3_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP9IGR3_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR3_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT6_EN_SHIFT)) & MSCM_IRCP9IGR3_INT6_EN_MASK)

#define MSCM_IRCP9IGR3_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP9IGR3_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP9IGR3_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR3_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT7_EN_SHIFT)) & MSCM_IRCP9IGR3_INT7_EN_MASK)

#define MSCM_IRCP9IGR3_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP9IGR3_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP9IGR3_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR3_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT8_EN_SHIFT)) & MSCM_IRCP9IGR3_INT8_EN_MASK)

#define MSCM_IRCP9IGR3_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP9IGR3_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP9IGR3_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR3_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT9_EN_SHIFT)) & MSCM_IRCP9IGR3_INT9_EN_MASK)

#define MSCM_IRCP9IGR3_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP9IGR3_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP9IGR3_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP9IGR3_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT10_EN_SHIFT)) & MSCM_IRCP9IGR3_INT10_EN_MASK)

#define MSCM_IRCP9IGR3_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP9IGR3_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP9IGR3_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP9IGR3_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT11_EN_SHIFT)) & MSCM_IRCP9IGR3_INT11_EN_MASK)

#define MSCM_IRCP9IGR3_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP9IGR3_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP9IGR3_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP9IGR3_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT12_EN_SHIFT)) & MSCM_IRCP9IGR3_INT12_EN_MASK)

#define MSCM_IRCP9IGR3_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP9IGR3_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP9IGR3_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP9IGR3_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT13_EN_SHIFT)) & MSCM_IRCP9IGR3_INT13_EN_MASK)

#define MSCM_IRCP9IGR3_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP9IGR3_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP9IGR3_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP9IGR3_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT14_EN_SHIFT)) & MSCM_IRCP9IGR3_INT14_EN_MASK)

#define MSCM_IRCP9IGR3_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP9IGR3_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP9IGR3_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP9IGR3_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR3_INT15_EN_SHIFT)) & MSCM_IRCP9IGR3_INT15_EN_MASK)
/*! @} */

/*! @name IRCP9ISR4 - Interrupt Router CP9 Interrupt4 Status Register */
/*! @{ */

#define MSCM_IRCP9ISR4_PCIE_INT0_MASK            (0x1U)
#define MSCM_IRCP9ISR4_PCIE_INT0_SHIFT           (0U)
#define MSCM_IRCP9ISR4_PCIE_INT0_WIDTH           (1U)
#define MSCM_IRCP9ISR4_PCIE_INT0(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT0_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT0_MASK)

#define MSCM_IRCP9ISR4_PCIE_INT1_MASK            (0x2U)
#define MSCM_IRCP9ISR4_PCIE_INT1_SHIFT           (1U)
#define MSCM_IRCP9ISR4_PCIE_INT1_WIDTH           (1U)
#define MSCM_IRCP9ISR4_PCIE_INT1(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT1_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT1_MASK)

#define MSCM_IRCP9ISR4_PCIE_INT2_MASK            (0x4U)
#define MSCM_IRCP9ISR4_PCIE_INT2_SHIFT           (2U)
#define MSCM_IRCP9ISR4_PCIE_INT2_WIDTH           (1U)
#define MSCM_IRCP9ISR4_PCIE_INT2(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT2_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT2_MASK)

#define MSCM_IRCP9ISR4_PCIE_INT3_MASK            (0x8U)
#define MSCM_IRCP9ISR4_PCIE_INT3_SHIFT           (3U)
#define MSCM_IRCP9ISR4_PCIE_INT3_WIDTH           (1U)
#define MSCM_IRCP9ISR4_PCIE_INT3(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT3_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT3_MASK)

#define MSCM_IRCP9ISR4_PCIE_INT4_MASK            (0x10U)
#define MSCM_IRCP9ISR4_PCIE_INT4_SHIFT           (4U)
#define MSCM_IRCP9ISR4_PCIE_INT4_WIDTH           (1U)
#define MSCM_IRCP9ISR4_PCIE_INT4(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT4_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT4_MASK)

#define MSCM_IRCP9ISR4_PCIE_INT5_MASK            (0x20U)
#define MSCM_IRCP9ISR4_PCIE_INT5_SHIFT           (5U)
#define MSCM_IRCP9ISR4_PCIE_INT5_WIDTH           (1U)
#define MSCM_IRCP9ISR4_PCIE_INT5(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT5_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT5_MASK)

#define MSCM_IRCP9ISR4_PCIE_INT6_MASK            (0x40U)
#define MSCM_IRCP9ISR4_PCIE_INT6_SHIFT           (6U)
#define MSCM_IRCP9ISR4_PCIE_INT6_WIDTH           (1U)
#define MSCM_IRCP9ISR4_PCIE_INT6(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT6_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT6_MASK)

#define MSCM_IRCP9ISR4_PCIE_INT7_MASK            (0x80U)
#define MSCM_IRCP9ISR4_PCIE_INT7_SHIFT           (7U)
#define MSCM_IRCP9ISR4_PCIE_INT7_WIDTH           (1U)
#define MSCM_IRCP9ISR4_PCIE_INT7(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT7_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT7_MASK)

#define MSCM_IRCP9ISR4_PCIE_INT8_MASK            (0x100U)
#define MSCM_IRCP9ISR4_PCIE_INT8_SHIFT           (8U)
#define MSCM_IRCP9ISR4_PCIE_INT8_WIDTH           (1U)
#define MSCM_IRCP9ISR4_PCIE_INT8(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT8_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT8_MASK)

#define MSCM_IRCP9ISR4_PCIE_INT9_MASK            (0x200U)
#define MSCM_IRCP9ISR4_PCIE_INT9_SHIFT           (9U)
#define MSCM_IRCP9ISR4_PCIE_INT9_WIDTH           (1U)
#define MSCM_IRCP9ISR4_PCIE_INT9(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT9_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT9_MASK)

#define MSCM_IRCP9ISR4_PCIE_INT10_MASK           (0x400U)
#define MSCM_IRCP9ISR4_PCIE_INT10_SHIFT          (10U)
#define MSCM_IRCP9ISR4_PCIE_INT10_WIDTH          (1U)
#define MSCM_IRCP9ISR4_PCIE_INT10(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT10_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT10_MASK)

#define MSCM_IRCP9ISR4_PCIE_INT11_MASK           (0x800U)
#define MSCM_IRCP9ISR4_PCIE_INT11_SHIFT          (11U)
#define MSCM_IRCP9ISR4_PCIE_INT11_WIDTH          (1U)
#define MSCM_IRCP9ISR4_PCIE_INT11(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT11_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT11_MASK)

#define MSCM_IRCP9ISR4_PCIE_INT12_MASK           (0x1000U)
#define MSCM_IRCP9ISR4_PCIE_INT12_SHIFT          (12U)
#define MSCM_IRCP9ISR4_PCIE_INT12_WIDTH          (1U)
#define MSCM_IRCP9ISR4_PCIE_INT12(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT12_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT12_MASK)

#define MSCM_IRCP9ISR4_PCIE_INT13_MASK           (0x2000U)
#define MSCM_IRCP9ISR4_PCIE_INT13_SHIFT          (13U)
#define MSCM_IRCP9ISR4_PCIE_INT13_WIDTH          (1U)
#define MSCM_IRCP9ISR4_PCIE_INT13(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT13_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT13_MASK)

#define MSCM_IRCP9ISR4_PCIE_INT14_MASK           (0x4000U)
#define MSCM_IRCP9ISR4_PCIE_INT14_SHIFT          (14U)
#define MSCM_IRCP9ISR4_PCIE_INT14_WIDTH          (1U)
#define MSCM_IRCP9ISR4_PCIE_INT14(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT14_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT14_MASK)

#define MSCM_IRCP9ISR4_PCIE_INT15_MASK           (0x8000U)
#define MSCM_IRCP9ISR4_PCIE_INT15_SHIFT          (15U)
#define MSCM_IRCP9ISR4_PCIE_INT15_WIDTH          (1U)
#define MSCM_IRCP9ISR4_PCIE_INT15(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR4_PCIE_INT15_SHIFT)) & MSCM_IRCP9ISR4_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP9IGR4 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP9IGR4_INT0_EN_MASK              (0x1U)
#define MSCM_IRCP9IGR4_INT0_EN_SHIFT             (0U)
#define MSCM_IRCP9IGR4_INT0_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR4_INT0_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT0_EN_SHIFT)) & MSCM_IRCP9IGR4_INT0_EN_MASK)

#define MSCM_IRCP9IGR4_INT1_EN_MASK              (0x2U)
#define MSCM_IRCP9IGR4_INT1_EN_SHIFT             (1U)
#define MSCM_IRCP9IGR4_INT1_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR4_INT1_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT1_EN_SHIFT)) & MSCM_IRCP9IGR4_INT1_EN_MASK)

#define MSCM_IRCP9IGR4_INT2_EN_MASK              (0x4U)
#define MSCM_IRCP9IGR4_INT2_EN_SHIFT             (2U)
#define MSCM_IRCP9IGR4_INT2_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR4_INT2_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT2_EN_SHIFT)) & MSCM_IRCP9IGR4_INT2_EN_MASK)

#define MSCM_IRCP9IGR4_INT3_EN_MASK              (0x8U)
#define MSCM_IRCP9IGR4_INT3_EN_SHIFT             (3U)
#define MSCM_IRCP9IGR4_INT3_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR4_INT3_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT3_EN_SHIFT)) & MSCM_IRCP9IGR4_INT3_EN_MASK)

#define MSCM_IRCP9IGR4_INT4_EN_MASK              (0x10U)
#define MSCM_IRCP9IGR4_INT4_EN_SHIFT             (4U)
#define MSCM_IRCP9IGR4_INT4_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR4_INT4_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT4_EN_SHIFT)) & MSCM_IRCP9IGR4_INT4_EN_MASK)

#define MSCM_IRCP9IGR4_INT5_EN_MASK              (0x20U)
#define MSCM_IRCP9IGR4_INT5_EN_SHIFT             (5U)
#define MSCM_IRCP9IGR4_INT5_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR4_INT5_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT5_EN_SHIFT)) & MSCM_IRCP9IGR4_INT5_EN_MASK)

#define MSCM_IRCP9IGR4_INT6_EN_MASK              (0x40U)
#define MSCM_IRCP9IGR4_INT6_EN_SHIFT             (6U)
#define MSCM_IRCP9IGR4_INT6_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR4_INT6_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT6_EN_SHIFT)) & MSCM_IRCP9IGR4_INT6_EN_MASK)

#define MSCM_IRCP9IGR4_INT7_EN_MASK              (0x80U)
#define MSCM_IRCP9IGR4_INT7_EN_SHIFT             (7U)
#define MSCM_IRCP9IGR4_INT7_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR4_INT7_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT7_EN_SHIFT)) & MSCM_IRCP9IGR4_INT7_EN_MASK)

#define MSCM_IRCP9IGR4_INT8_EN_MASK              (0x100U)
#define MSCM_IRCP9IGR4_INT8_EN_SHIFT             (8U)
#define MSCM_IRCP9IGR4_INT8_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR4_INT8_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT8_EN_SHIFT)) & MSCM_IRCP9IGR4_INT8_EN_MASK)

#define MSCM_IRCP9IGR4_INT9_EN_MASK              (0x200U)
#define MSCM_IRCP9IGR4_INT9_EN_SHIFT             (9U)
#define MSCM_IRCP9IGR4_INT9_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR4_INT9_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT9_EN_SHIFT)) & MSCM_IRCP9IGR4_INT9_EN_MASK)

#define MSCM_IRCP9IGR4_INT10_EN_MASK             (0x400U)
#define MSCM_IRCP9IGR4_INT10_EN_SHIFT            (10U)
#define MSCM_IRCP9IGR4_INT10_EN_WIDTH            (1U)
#define MSCM_IRCP9IGR4_INT10_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT10_EN_SHIFT)) & MSCM_IRCP9IGR4_INT10_EN_MASK)

#define MSCM_IRCP9IGR4_INT11_EN_MASK             (0x800U)
#define MSCM_IRCP9IGR4_INT11_EN_SHIFT            (11U)
#define MSCM_IRCP9IGR4_INT11_EN_WIDTH            (1U)
#define MSCM_IRCP9IGR4_INT11_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT11_EN_SHIFT)) & MSCM_IRCP9IGR4_INT11_EN_MASK)

#define MSCM_IRCP9IGR4_INT12_EN_MASK             (0x1000U)
#define MSCM_IRCP9IGR4_INT12_EN_SHIFT            (12U)
#define MSCM_IRCP9IGR4_INT12_EN_WIDTH            (1U)
#define MSCM_IRCP9IGR4_INT12_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT12_EN_SHIFT)) & MSCM_IRCP9IGR4_INT12_EN_MASK)

#define MSCM_IRCP9IGR4_INT13_EN_MASK             (0x2000U)
#define MSCM_IRCP9IGR4_INT13_EN_SHIFT            (13U)
#define MSCM_IRCP9IGR4_INT13_EN_WIDTH            (1U)
#define MSCM_IRCP9IGR4_INT13_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT13_EN_SHIFT)) & MSCM_IRCP9IGR4_INT13_EN_MASK)

#define MSCM_IRCP9IGR4_INT14_EN_MASK             (0x4000U)
#define MSCM_IRCP9IGR4_INT14_EN_SHIFT            (14U)
#define MSCM_IRCP9IGR4_INT14_EN_WIDTH            (1U)
#define MSCM_IRCP9IGR4_INT14_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT14_EN_SHIFT)) & MSCM_IRCP9IGR4_INT14_EN_MASK)

#define MSCM_IRCP9IGR4_INT15_EN_MASK             (0x8000U)
#define MSCM_IRCP9IGR4_INT15_EN_SHIFT            (15U)
#define MSCM_IRCP9IGR4_INT15_EN_WIDTH            (1U)
#define MSCM_IRCP9IGR4_INT15_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR4_INT15_EN_SHIFT)) & MSCM_IRCP9IGR4_INT15_EN_MASK)
/*! @} */

/*! @name IRCP9ISR5 - Interrupt Router CP9 Interrupt5 Status Register */
/*! @{ */

#define MSCM_IRCP9ISR5_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP9ISR5_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP9ISR5_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR5_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR5_CP0_INT_SHIFT)) & MSCM_IRCP9ISR5_CP0_INT_MASK)

#define MSCM_IRCP9ISR5_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP9ISR5_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP9ISR5_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR5_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR5_CP1_INT_SHIFT)) & MSCM_IRCP9ISR5_CP1_INT_MASK)

#define MSCM_IRCP9ISR5_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP9ISR5_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP9ISR5_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR5_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR5_CP2_INT_SHIFT)) & MSCM_IRCP9ISR5_CP2_INT_MASK)

#define MSCM_IRCP9ISR5_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP9ISR5_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP9ISR5_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR5_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR5_CP3_INT_SHIFT)) & MSCM_IRCP9ISR5_CP3_INT_MASK)

#define MSCM_IRCP9ISR5_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP9ISR5_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP9ISR5_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR5_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR5_CP4_INT_SHIFT)) & MSCM_IRCP9ISR5_CP4_INT_MASK)

#define MSCM_IRCP9ISR5_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP9ISR5_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP9ISR5_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR5_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR5_CP5_INT_SHIFT)) & MSCM_IRCP9ISR5_CP5_INT_MASK)

#define MSCM_IRCP9ISR5_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP9ISR5_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP9ISR5_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR5_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR5_CP6_INT_SHIFT)) & MSCM_IRCP9ISR5_CP6_INT_MASK)

#define MSCM_IRCP9ISR5_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP9ISR5_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP9ISR5_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR5_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR5_CP7_INT_SHIFT)) & MSCM_IRCP9ISR5_CP7_INT_MASK)

#define MSCM_IRCP9ISR5_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP9ISR5_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP9ISR5_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR5_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR5_CP8_INT_SHIFT)) & MSCM_IRCP9ISR5_CP8_INT_MASK)

#define MSCM_IRCP9ISR5_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP9ISR5_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP9ISR5_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR5_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR5_CP9_INT_SHIFT)) & MSCM_IRCP9ISR5_CP9_INT_MASK)

#define MSCM_IRCP9ISR5_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP9ISR5_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP9ISR5_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR5_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR5_CP10_INT_SHIFT)) & MSCM_IRCP9ISR5_CP10_INT_MASK)

#define MSCM_IRCP9ISR5_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP9ISR5_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP9ISR5_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR5_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR5_CP11_INT_SHIFT)) & MSCM_IRCP9ISR5_CP11_INT_MASK)
/*! @} */

/*! @name IRCP9IGR5 - Interrupt Router CP9 Interrupt5 Generation Register */
/*! @{ */

#define MSCM_IRCP9IGR5_INT_EN_MASK               (0x1U)
#define MSCM_IRCP9IGR5_INT_EN_SHIFT              (0U)
#define MSCM_IRCP9IGR5_INT_EN_WIDTH              (1U)
#define MSCM_IRCP9IGR5_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR5_INT_EN_SHIFT)) & MSCM_IRCP9IGR5_INT_EN_MASK)
/*! @} */

/*! @name IRCP9ISR6 - Interrupt Router CP9 Interrupt6 Status Register */
/*! @{ */

#define MSCM_IRCP9ISR6_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP9ISR6_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP9ISR6_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR6_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR6_CP0_INT_SHIFT)) & MSCM_IRCP9ISR6_CP0_INT_MASK)

#define MSCM_IRCP9ISR6_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP9ISR6_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP9ISR6_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR6_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR6_CP1_INT_SHIFT)) & MSCM_IRCP9ISR6_CP1_INT_MASK)

#define MSCM_IRCP9ISR6_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP9ISR6_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP9ISR6_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR6_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR6_CP2_INT_SHIFT)) & MSCM_IRCP9ISR6_CP2_INT_MASK)

#define MSCM_IRCP9ISR6_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP9ISR6_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP9ISR6_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR6_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR6_CP3_INT_SHIFT)) & MSCM_IRCP9ISR6_CP3_INT_MASK)

#define MSCM_IRCP9ISR6_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP9ISR6_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP9ISR6_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR6_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR6_CP4_INT_SHIFT)) & MSCM_IRCP9ISR6_CP4_INT_MASK)

#define MSCM_IRCP9ISR6_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP9ISR6_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP9ISR6_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR6_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR6_CP5_INT_SHIFT)) & MSCM_IRCP9ISR6_CP5_INT_MASK)

#define MSCM_IRCP9ISR6_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP9ISR6_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP9ISR6_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR6_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR6_CP6_INT_SHIFT)) & MSCM_IRCP9ISR6_CP6_INT_MASK)

#define MSCM_IRCP9ISR6_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP9ISR6_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP9ISR6_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR6_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR6_CP7_INT_SHIFT)) & MSCM_IRCP9ISR6_CP7_INT_MASK)

#define MSCM_IRCP9ISR6_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP9ISR6_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP9ISR6_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR6_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR6_CP8_INT_SHIFT)) & MSCM_IRCP9ISR6_CP8_INT_MASK)

#define MSCM_IRCP9ISR6_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP9ISR6_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP9ISR6_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR6_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR6_CP9_INT_SHIFT)) & MSCM_IRCP9ISR6_CP9_INT_MASK)

#define MSCM_IRCP9ISR6_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP9ISR6_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP9ISR6_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR6_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR6_CP10_INT_SHIFT)) & MSCM_IRCP9ISR6_CP10_INT_MASK)

#define MSCM_IRCP9ISR6_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP9ISR6_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP9ISR6_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR6_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR6_CP11_INT_SHIFT)) & MSCM_IRCP9ISR6_CP11_INT_MASK)
/*! @} */

/*! @name IRCP9IGR6 - Interrupt Router CP9 Interrupt6 Generation Register */
/*! @{ */

#define MSCM_IRCP9IGR6_INT_EN_MASK               (0x1U)
#define MSCM_IRCP9IGR6_INT_EN_SHIFT              (0U)
#define MSCM_IRCP9IGR6_INT_EN_WIDTH              (1U)
#define MSCM_IRCP9IGR6_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR6_INT_EN_SHIFT)) & MSCM_IRCP9IGR6_INT_EN_MASK)
/*! @} */

/*! @name IRCP9ISR7 - Interrupt Router CP9 Interrupt7 Status Register */
/*! @{ */

#define MSCM_IRCP9ISR7_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP9ISR7_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP9ISR7_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR7_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR7_CP0_INT_SHIFT)) & MSCM_IRCP9ISR7_CP0_INT_MASK)

#define MSCM_IRCP9ISR7_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP9ISR7_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP9ISR7_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR7_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR7_CP1_INT_SHIFT)) & MSCM_IRCP9ISR7_CP1_INT_MASK)

#define MSCM_IRCP9ISR7_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP9ISR7_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP9ISR7_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR7_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR7_CP2_INT_SHIFT)) & MSCM_IRCP9ISR7_CP2_INT_MASK)

#define MSCM_IRCP9ISR7_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP9ISR7_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP9ISR7_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR7_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR7_CP3_INT_SHIFT)) & MSCM_IRCP9ISR7_CP3_INT_MASK)

#define MSCM_IRCP9ISR7_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP9ISR7_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP9ISR7_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR7_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR7_CP4_INT_SHIFT)) & MSCM_IRCP9ISR7_CP4_INT_MASK)

#define MSCM_IRCP9ISR7_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP9ISR7_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP9ISR7_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR7_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR7_CP5_INT_SHIFT)) & MSCM_IRCP9ISR7_CP5_INT_MASK)

#define MSCM_IRCP9ISR7_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP9ISR7_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP9ISR7_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR7_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR7_CP6_INT_SHIFT)) & MSCM_IRCP9ISR7_CP6_INT_MASK)

#define MSCM_IRCP9ISR7_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP9ISR7_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP9ISR7_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR7_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR7_CP7_INT_SHIFT)) & MSCM_IRCP9ISR7_CP7_INT_MASK)

#define MSCM_IRCP9ISR7_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP9ISR7_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP9ISR7_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR7_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR7_CP8_INT_SHIFT)) & MSCM_IRCP9ISR7_CP8_INT_MASK)

#define MSCM_IRCP9ISR7_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP9ISR7_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP9ISR7_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR7_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR7_CP9_INT_SHIFT)) & MSCM_IRCP9ISR7_CP9_INT_MASK)

#define MSCM_IRCP9ISR7_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP9ISR7_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP9ISR7_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR7_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR7_CP10_INT_SHIFT)) & MSCM_IRCP9ISR7_CP10_INT_MASK)

#define MSCM_IRCP9ISR7_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP9ISR7_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP9ISR7_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR7_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR7_CP11_INT_SHIFT)) & MSCM_IRCP9ISR7_CP11_INT_MASK)
/*! @} */

/*! @name IRCP9IGR7 - Interrupt Router CP9 Interrupt7 Generation Register */
/*! @{ */

#define MSCM_IRCP9IGR7_INT_EN_MASK               (0x1U)
#define MSCM_IRCP9IGR7_INT_EN_SHIFT              (0U)
#define MSCM_IRCP9IGR7_INT_EN_WIDTH              (1U)
#define MSCM_IRCP9IGR7_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR7_INT_EN_SHIFT)) & MSCM_IRCP9IGR7_INT_EN_MASK)
/*! @} */

/*! @name IRCP9ISR8 - Interrupt Router CP9 Interrupt8 Status Register */
/*! @{ */

#define MSCM_IRCP9ISR8_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP9ISR8_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP9ISR8_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR8_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR8_CP0_INT_SHIFT)) & MSCM_IRCP9ISR8_CP0_INT_MASK)

#define MSCM_IRCP9ISR8_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP9ISR8_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP9ISR8_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR8_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR8_CP1_INT_SHIFT)) & MSCM_IRCP9ISR8_CP1_INT_MASK)

#define MSCM_IRCP9ISR8_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP9ISR8_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP9ISR8_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR8_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR8_CP2_INT_SHIFT)) & MSCM_IRCP9ISR8_CP2_INT_MASK)

#define MSCM_IRCP9ISR8_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP9ISR8_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP9ISR8_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR8_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR8_CP3_INT_SHIFT)) & MSCM_IRCP9ISR8_CP3_INT_MASK)

#define MSCM_IRCP9ISR8_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP9ISR8_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP9ISR8_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR8_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR8_CP4_INT_SHIFT)) & MSCM_IRCP9ISR8_CP4_INT_MASK)

#define MSCM_IRCP9ISR8_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP9ISR8_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP9ISR8_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR8_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR8_CP5_INT_SHIFT)) & MSCM_IRCP9ISR8_CP5_INT_MASK)

#define MSCM_IRCP9ISR8_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP9ISR8_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP9ISR8_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR8_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR8_CP6_INT_SHIFT)) & MSCM_IRCP9ISR8_CP6_INT_MASK)

#define MSCM_IRCP9ISR8_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP9ISR8_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP9ISR8_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR8_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR8_CP7_INT_SHIFT)) & MSCM_IRCP9ISR8_CP7_INT_MASK)

#define MSCM_IRCP9ISR8_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP9ISR8_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP9ISR8_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR8_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR8_CP8_INT_SHIFT)) & MSCM_IRCP9ISR8_CP8_INT_MASK)

#define MSCM_IRCP9ISR8_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP9ISR8_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP9ISR8_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR8_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR8_CP9_INT_SHIFT)) & MSCM_IRCP9ISR8_CP9_INT_MASK)

#define MSCM_IRCP9ISR8_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP9ISR8_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP9ISR8_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR8_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR8_CP10_INT_SHIFT)) & MSCM_IRCP9ISR8_CP10_INT_MASK)

#define MSCM_IRCP9ISR8_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP9ISR8_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP9ISR8_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR8_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR8_CP11_INT_SHIFT)) & MSCM_IRCP9ISR8_CP11_INT_MASK)
/*! @} */

/*! @name IRCP9IGR8 - Interrupt Router CP9 Interrupt8 Generation Register */
/*! @{ */

#define MSCM_IRCP9IGR8_INT_EN_MASK               (0x1U)
#define MSCM_IRCP9IGR8_INT_EN_SHIFT              (0U)
#define MSCM_IRCP9IGR8_INT_EN_WIDTH              (1U)
#define MSCM_IRCP9IGR8_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR8_INT_EN_SHIFT)) & MSCM_IRCP9IGR8_INT_EN_MASK)
/*! @} */

/*! @name IRCP9ISR9 - Interrupt Router CP9 Interrupt9 Status Register */
/*! @{ */

#define MSCM_IRCP9ISR9_CP0_INT_MASK              (0x1U)
#define MSCM_IRCP9ISR9_CP0_INT_SHIFT             (0U)
#define MSCM_IRCP9ISR9_CP0_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR9_CP0_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR9_CP0_INT_SHIFT)) & MSCM_IRCP9ISR9_CP0_INT_MASK)

#define MSCM_IRCP9ISR9_CP1_INT_MASK              (0x2U)
#define MSCM_IRCP9ISR9_CP1_INT_SHIFT             (1U)
#define MSCM_IRCP9ISR9_CP1_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR9_CP1_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR9_CP1_INT_SHIFT)) & MSCM_IRCP9ISR9_CP1_INT_MASK)

#define MSCM_IRCP9ISR9_CP2_INT_MASK              (0x4U)
#define MSCM_IRCP9ISR9_CP2_INT_SHIFT             (2U)
#define MSCM_IRCP9ISR9_CP2_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR9_CP2_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR9_CP2_INT_SHIFT)) & MSCM_IRCP9ISR9_CP2_INT_MASK)

#define MSCM_IRCP9ISR9_CP3_INT_MASK              (0x8U)
#define MSCM_IRCP9ISR9_CP3_INT_SHIFT             (3U)
#define MSCM_IRCP9ISR9_CP3_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR9_CP3_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR9_CP3_INT_SHIFT)) & MSCM_IRCP9ISR9_CP3_INT_MASK)

#define MSCM_IRCP9ISR9_CP4_INT_MASK              (0x10U)
#define MSCM_IRCP9ISR9_CP4_INT_SHIFT             (4U)
#define MSCM_IRCP9ISR9_CP4_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR9_CP4_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR9_CP4_INT_SHIFT)) & MSCM_IRCP9ISR9_CP4_INT_MASK)

#define MSCM_IRCP9ISR9_CP5_INT_MASK              (0x20U)
#define MSCM_IRCP9ISR9_CP5_INT_SHIFT             (5U)
#define MSCM_IRCP9ISR9_CP5_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR9_CP5_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR9_CP5_INT_SHIFT)) & MSCM_IRCP9ISR9_CP5_INT_MASK)

#define MSCM_IRCP9ISR9_CP6_INT_MASK              (0x40U)
#define MSCM_IRCP9ISR9_CP6_INT_SHIFT             (6U)
#define MSCM_IRCP9ISR9_CP6_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR9_CP6_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR9_CP6_INT_SHIFT)) & MSCM_IRCP9ISR9_CP6_INT_MASK)

#define MSCM_IRCP9ISR9_CP7_INT_MASK              (0x80U)
#define MSCM_IRCP9ISR9_CP7_INT_SHIFT             (7U)
#define MSCM_IRCP9ISR9_CP7_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR9_CP7_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR9_CP7_INT_SHIFT)) & MSCM_IRCP9ISR9_CP7_INT_MASK)

#define MSCM_IRCP9ISR9_CP8_INT_MASK              (0x100U)
#define MSCM_IRCP9ISR9_CP8_INT_SHIFT             (8U)
#define MSCM_IRCP9ISR9_CP8_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR9_CP8_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR9_CP8_INT_SHIFT)) & MSCM_IRCP9ISR9_CP8_INT_MASK)

#define MSCM_IRCP9ISR9_CP9_INT_MASK              (0x200U)
#define MSCM_IRCP9ISR9_CP9_INT_SHIFT             (9U)
#define MSCM_IRCP9ISR9_CP9_INT_WIDTH             (1U)
#define MSCM_IRCP9ISR9_CP9_INT(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR9_CP9_INT_SHIFT)) & MSCM_IRCP9ISR9_CP9_INT_MASK)

#define MSCM_IRCP9ISR9_CP10_INT_MASK             (0x400U)
#define MSCM_IRCP9ISR9_CP10_INT_SHIFT            (10U)
#define MSCM_IRCP9ISR9_CP10_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR9_CP10_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR9_CP10_INT_SHIFT)) & MSCM_IRCP9ISR9_CP10_INT_MASK)

#define MSCM_IRCP9ISR9_CP11_INT_MASK             (0x800U)
#define MSCM_IRCP9ISR9_CP11_INT_SHIFT            (11U)
#define MSCM_IRCP9ISR9_CP11_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR9_CP11_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR9_CP11_INT_SHIFT)) & MSCM_IRCP9ISR9_CP11_INT_MASK)
/*! @} */

/*! @name IRCP9IGR9 - Interrupt Router CP9 Interrupt9 Generation Register */
/*! @{ */

#define MSCM_IRCP9IGR9_INT_EN_MASK               (0x1U)
#define MSCM_IRCP9IGR9_INT_EN_SHIFT              (0U)
#define MSCM_IRCP9IGR9_INT_EN_WIDTH              (1U)
#define MSCM_IRCP9IGR9_INT_EN(x)                 (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR9_INT_EN_SHIFT)) & MSCM_IRCP9IGR9_INT_EN_MASK)
/*! @} */

/*! @name IRCP9ISR10 - Interrupt Router CP9 Interrupt10 Status Register */
/*! @{ */

#define MSCM_IRCP9ISR10_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP9ISR10_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP9ISR10_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR10_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR10_CP0_INT_SHIFT)) & MSCM_IRCP9ISR10_CP0_INT_MASK)

#define MSCM_IRCP9ISR10_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP9ISR10_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP9ISR10_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR10_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR10_CP1_INT_SHIFT)) & MSCM_IRCP9ISR10_CP1_INT_MASK)

#define MSCM_IRCP9ISR10_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP9ISR10_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP9ISR10_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR10_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR10_CP2_INT_SHIFT)) & MSCM_IRCP9ISR10_CP2_INT_MASK)

#define MSCM_IRCP9ISR10_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP9ISR10_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP9ISR10_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR10_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR10_CP3_INT_SHIFT)) & MSCM_IRCP9ISR10_CP3_INT_MASK)

#define MSCM_IRCP9ISR10_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP9ISR10_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP9ISR10_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR10_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR10_CP4_INT_SHIFT)) & MSCM_IRCP9ISR10_CP4_INT_MASK)

#define MSCM_IRCP9ISR10_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP9ISR10_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP9ISR10_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR10_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR10_CP5_INT_SHIFT)) & MSCM_IRCP9ISR10_CP5_INT_MASK)

#define MSCM_IRCP9ISR10_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP9ISR10_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP9ISR10_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR10_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR10_CP6_INT_SHIFT)) & MSCM_IRCP9ISR10_CP6_INT_MASK)

#define MSCM_IRCP9ISR10_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP9ISR10_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP9ISR10_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR10_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR10_CP7_INT_SHIFT)) & MSCM_IRCP9ISR10_CP7_INT_MASK)

#define MSCM_IRCP9ISR10_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP9ISR10_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP9ISR10_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR10_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR10_CP8_INT_SHIFT)) & MSCM_IRCP9ISR10_CP8_INT_MASK)

#define MSCM_IRCP9ISR10_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP9ISR10_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP9ISR10_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR10_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR10_CP9_INT_SHIFT)) & MSCM_IRCP9ISR10_CP9_INT_MASK)

#define MSCM_IRCP9ISR10_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP9ISR10_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP9ISR10_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP9ISR10_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR10_CP10_INT_SHIFT)) & MSCM_IRCP9ISR10_CP10_INT_MASK)

#define MSCM_IRCP9ISR10_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP9ISR10_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP9ISR10_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP9ISR10_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR10_CP11_INT_SHIFT)) & MSCM_IRCP9ISR10_CP11_INT_MASK)
/*! @} */

/*! @name IRCP9IGR10 - Interrupt Router CP9 Interrupt10 Generation Register */
/*! @{ */

#define MSCM_IRCP9IGR10_INT_EN_MASK              (0x1U)
#define MSCM_IRCP9IGR10_INT_EN_SHIFT             (0U)
#define MSCM_IRCP9IGR10_INT_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR10_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR10_INT_EN_SHIFT)) & MSCM_IRCP9IGR10_INT_EN_MASK)
/*! @} */

/*! @name IRCP9ISR11 - Interrupt Router CP9 Interrupt11 Status Register */
/*! @{ */

#define MSCM_IRCP9ISR11_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP9ISR11_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP9ISR11_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR11_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR11_CP0_INT_SHIFT)) & MSCM_IRCP9ISR11_CP0_INT_MASK)

#define MSCM_IRCP9ISR11_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP9ISR11_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP9ISR11_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR11_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR11_CP1_INT_SHIFT)) & MSCM_IRCP9ISR11_CP1_INT_MASK)

#define MSCM_IRCP9ISR11_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP9ISR11_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP9ISR11_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR11_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR11_CP2_INT_SHIFT)) & MSCM_IRCP9ISR11_CP2_INT_MASK)

#define MSCM_IRCP9ISR11_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP9ISR11_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP9ISR11_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR11_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR11_CP3_INT_SHIFT)) & MSCM_IRCP9ISR11_CP3_INT_MASK)

#define MSCM_IRCP9ISR11_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP9ISR11_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP9ISR11_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR11_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR11_CP4_INT_SHIFT)) & MSCM_IRCP9ISR11_CP4_INT_MASK)

#define MSCM_IRCP9ISR11_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP9ISR11_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP9ISR11_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR11_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR11_CP5_INT_SHIFT)) & MSCM_IRCP9ISR11_CP5_INT_MASK)

#define MSCM_IRCP9ISR11_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP9ISR11_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP9ISR11_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR11_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR11_CP6_INT_SHIFT)) & MSCM_IRCP9ISR11_CP6_INT_MASK)

#define MSCM_IRCP9ISR11_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP9ISR11_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP9ISR11_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR11_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR11_CP7_INT_SHIFT)) & MSCM_IRCP9ISR11_CP7_INT_MASK)

#define MSCM_IRCP9ISR11_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP9ISR11_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP9ISR11_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR11_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR11_CP8_INT_SHIFT)) & MSCM_IRCP9ISR11_CP8_INT_MASK)

#define MSCM_IRCP9ISR11_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP9ISR11_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP9ISR11_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR11_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR11_CP9_INT_SHIFT)) & MSCM_IRCP9ISR11_CP9_INT_MASK)

#define MSCM_IRCP9ISR11_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP9ISR11_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP9ISR11_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP9ISR11_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR11_CP10_INT_SHIFT)) & MSCM_IRCP9ISR11_CP10_INT_MASK)

#define MSCM_IRCP9ISR11_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP9ISR11_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP9ISR11_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP9ISR11_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR11_CP11_INT_SHIFT)) & MSCM_IRCP9ISR11_CP11_INT_MASK)
/*! @} */

/*! @name IRCP9IGR11 - Interrupt Router CP9 Interrupt11 Generation Register */
/*! @{ */

#define MSCM_IRCP9IGR11_INT_EN_MASK              (0x1U)
#define MSCM_IRCP9IGR11_INT_EN_SHIFT             (0U)
#define MSCM_IRCP9IGR11_INT_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR11_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR11_INT_EN_SHIFT)) & MSCM_IRCP9IGR11_INT_EN_MASK)
/*! @} */

/*! @name IRCP9ISR12 - Interrupt Router CP9 Interrupt12 Status Register */
/*! @{ */

#define MSCM_IRCP9ISR12_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP9ISR12_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP9ISR12_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR12_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR12_CP0_INT_SHIFT)) & MSCM_IRCP9ISR12_CP0_INT_MASK)

#define MSCM_IRCP9ISR12_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP9ISR12_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP9ISR12_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR12_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR12_CP1_INT_SHIFT)) & MSCM_IRCP9ISR12_CP1_INT_MASK)

#define MSCM_IRCP9ISR12_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP9ISR12_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP9ISR12_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR12_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR12_CP2_INT_SHIFT)) & MSCM_IRCP9ISR12_CP2_INT_MASK)

#define MSCM_IRCP9ISR12_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP9ISR12_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP9ISR12_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR12_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR12_CP3_INT_SHIFT)) & MSCM_IRCP9ISR12_CP3_INT_MASK)

#define MSCM_IRCP9ISR12_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP9ISR12_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP9ISR12_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR12_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR12_CP4_INT_SHIFT)) & MSCM_IRCP9ISR12_CP4_INT_MASK)

#define MSCM_IRCP9ISR12_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP9ISR12_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP9ISR12_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR12_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR12_CP5_INT_SHIFT)) & MSCM_IRCP9ISR12_CP5_INT_MASK)

#define MSCM_IRCP9ISR12_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP9ISR12_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP9ISR12_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR12_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR12_CP6_INT_SHIFT)) & MSCM_IRCP9ISR12_CP6_INT_MASK)

#define MSCM_IRCP9ISR12_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP9ISR12_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP9ISR12_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR12_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR12_CP7_INT_SHIFT)) & MSCM_IRCP9ISR12_CP7_INT_MASK)

#define MSCM_IRCP9ISR12_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP9ISR12_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP9ISR12_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR12_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR12_CP8_INT_SHIFT)) & MSCM_IRCP9ISR12_CP8_INT_MASK)

#define MSCM_IRCP9ISR12_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP9ISR12_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP9ISR12_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR12_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR12_CP9_INT_SHIFT)) & MSCM_IRCP9ISR12_CP9_INT_MASK)

#define MSCM_IRCP9ISR12_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP9ISR12_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP9ISR12_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP9ISR12_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR12_CP10_INT_SHIFT)) & MSCM_IRCP9ISR12_CP10_INT_MASK)

#define MSCM_IRCP9ISR12_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP9ISR12_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP9ISR12_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP9ISR12_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR12_CP11_INT_SHIFT)) & MSCM_IRCP9ISR12_CP11_INT_MASK)
/*! @} */

/*! @name IRCP9IGR12 - Interrupt Router CP9 Interrupt12 Generation Register */
/*! @{ */

#define MSCM_IRCP9IGR12_INT_EN_MASK              (0x1U)
#define MSCM_IRCP9IGR12_INT_EN_SHIFT             (0U)
#define MSCM_IRCP9IGR12_INT_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR12_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR12_INT_EN_SHIFT)) & MSCM_IRCP9IGR12_INT_EN_MASK)
/*! @} */

/*! @name IRCP9ISR13 - Interrupt Router CP9 Interrupt13 Status Register */
/*! @{ */

#define MSCM_IRCP9ISR13_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP9ISR13_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP9ISR13_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR13_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR13_CP0_INT_SHIFT)) & MSCM_IRCP9ISR13_CP0_INT_MASK)

#define MSCM_IRCP9ISR13_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP9ISR13_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP9ISR13_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR13_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR13_CP1_INT_SHIFT)) & MSCM_IRCP9ISR13_CP1_INT_MASK)

#define MSCM_IRCP9ISR13_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP9ISR13_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP9ISR13_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR13_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR13_CP2_INT_SHIFT)) & MSCM_IRCP9ISR13_CP2_INT_MASK)

#define MSCM_IRCP9ISR13_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP9ISR13_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP9ISR13_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR13_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR13_CP3_INT_SHIFT)) & MSCM_IRCP9ISR13_CP3_INT_MASK)

#define MSCM_IRCP9ISR13_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP9ISR13_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP9ISR13_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR13_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR13_CP4_INT_SHIFT)) & MSCM_IRCP9ISR13_CP4_INT_MASK)

#define MSCM_IRCP9ISR13_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP9ISR13_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP9ISR13_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR13_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR13_CP5_INT_SHIFT)) & MSCM_IRCP9ISR13_CP5_INT_MASK)

#define MSCM_IRCP9ISR13_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP9ISR13_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP9ISR13_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR13_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR13_CP6_INT_SHIFT)) & MSCM_IRCP9ISR13_CP6_INT_MASK)

#define MSCM_IRCP9ISR13_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP9ISR13_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP9ISR13_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR13_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR13_CP7_INT_SHIFT)) & MSCM_IRCP9ISR13_CP7_INT_MASK)

#define MSCM_IRCP9ISR13_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP9ISR13_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP9ISR13_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR13_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR13_CP8_INT_SHIFT)) & MSCM_IRCP9ISR13_CP8_INT_MASK)

#define MSCM_IRCP9ISR13_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP9ISR13_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP9ISR13_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP9ISR13_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR13_CP9_INT_SHIFT)) & MSCM_IRCP9ISR13_CP9_INT_MASK)

#define MSCM_IRCP9ISR13_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP9ISR13_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP9ISR13_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP9ISR13_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR13_CP10_INT_SHIFT)) & MSCM_IRCP9ISR13_CP10_INT_MASK)

#define MSCM_IRCP9ISR13_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP9ISR13_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP9ISR13_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP9ISR13_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9ISR13_CP11_INT_SHIFT)) & MSCM_IRCP9ISR13_CP11_INT_MASK)
/*! @} */

/*! @name IRCP9IGR13 - Interrupt Router CP9 Interrupt13 Generation Register */
/*! @{ */

#define MSCM_IRCP9IGR13_INT_EN_MASK              (0x1U)
#define MSCM_IRCP9IGR13_INT_EN_SHIFT             (0U)
#define MSCM_IRCP9IGR13_INT_EN_WIDTH             (1U)
#define MSCM_IRCP9IGR13_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP9IGR13_INT_EN_SHIFT)) & MSCM_IRCP9IGR13_INT_EN_MASK)
/*! @} */

/*! @name IRCP10ISR0 - Interrupt Router CP10 Interrupt0 Status Register */
/*! @{ */

#define MSCM_IRCP10ISR0_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP10ISR0_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP10ISR0_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR0_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR0_CP0_INT_SHIFT)) & MSCM_IRCP10ISR0_CP0_INT_MASK)

#define MSCM_IRCP10ISR0_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP10ISR0_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP10ISR0_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR0_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR0_CP1_INT_SHIFT)) & MSCM_IRCP10ISR0_CP1_INT_MASK)

#define MSCM_IRCP10ISR0_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP10ISR0_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP10ISR0_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR0_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR0_CP2_INT_SHIFT)) & MSCM_IRCP10ISR0_CP2_INT_MASK)

#define MSCM_IRCP10ISR0_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP10ISR0_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP10ISR0_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR0_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR0_CP3_INT_SHIFT)) & MSCM_IRCP10ISR0_CP3_INT_MASK)

#define MSCM_IRCP10ISR0_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP10ISR0_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP10ISR0_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR0_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR0_CP4_INT_SHIFT)) & MSCM_IRCP10ISR0_CP4_INT_MASK)

#define MSCM_IRCP10ISR0_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP10ISR0_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP10ISR0_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR0_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR0_CP5_INT_SHIFT)) & MSCM_IRCP10ISR0_CP5_INT_MASK)

#define MSCM_IRCP10ISR0_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP10ISR0_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP10ISR0_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR0_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR0_CP6_INT_SHIFT)) & MSCM_IRCP10ISR0_CP6_INT_MASK)

#define MSCM_IRCP10ISR0_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP10ISR0_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP10ISR0_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR0_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR0_CP7_INT_SHIFT)) & MSCM_IRCP10ISR0_CP7_INT_MASK)

#define MSCM_IRCP10ISR0_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP10ISR0_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP10ISR0_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR0_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR0_CP8_INT_SHIFT)) & MSCM_IRCP10ISR0_CP8_INT_MASK)

#define MSCM_IRCP10ISR0_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP10ISR0_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP10ISR0_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR0_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR0_CP9_INT_SHIFT)) & MSCM_IRCP10ISR0_CP9_INT_MASK)

#define MSCM_IRCP10ISR0_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP10ISR0_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP10ISR0_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR0_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR0_CP10_INT_SHIFT)) & MSCM_IRCP10ISR0_CP10_INT_MASK)

#define MSCM_IRCP10ISR0_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP10ISR0_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP10ISR0_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR0_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR0_CP11_INT_SHIFT)) & MSCM_IRCP10ISR0_CP11_INT_MASK)
/*! @} */

/*! @name IRCP10IGR0 - Interrupt Router CP10 Interrupt0 Generation Register */
/*! @{ */

#define MSCM_IRCP10IGR0_INT_EN_MASK              (0x1U)
#define MSCM_IRCP10IGR0_INT_EN_SHIFT             (0U)
#define MSCM_IRCP10IGR0_INT_EN_WIDTH             (1U)
#define MSCM_IRCP10IGR0_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR0_INT_EN_SHIFT)) & MSCM_IRCP10IGR0_INT_EN_MASK)
/*! @} */

/*! @name IRCP10ISR1 - Interrupt Router CP10 Interrupt1 Status Register */
/*! @{ */

#define MSCM_IRCP10ISR1_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP10ISR1_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP10ISR1_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR1_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR1_CP0_INT_SHIFT)) & MSCM_IRCP10ISR1_CP0_INT_MASK)

#define MSCM_IRCP10ISR1_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP10ISR1_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP10ISR1_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR1_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR1_CP1_INT_SHIFT)) & MSCM_IRCP10ISR1_CP1_INT_MASK)

#define MSCM_IRCP10ISR1_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP10ISR1_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP10ISR1_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR1_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR1_CP2_INT_SHIFT)) & MSCM_IRCP10ISR1_CP2_INT_MASK)

#define MSCM_IRCP10ISR1_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP10ISR1_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP10ISR1_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR1_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR1_CP3_INT_SHIFT)) & MSCM_IRCP10ISR1_CP3_INT_MASK)

#define MSCM_IRCP10ISR1_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP10ISR1_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP10ISR1_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR1_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR1_CP4_INT_SHIFT)) & MSCM_IRCP10ISR1_CP4_INT_MASK)

#define MSCM_IRCP10ISR1_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP10ISR1_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP10ISR1_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR1_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR1_CP5_INT_SHIFT)) & MSCM_IRCP10ISR1_CP5_INT_MASK)

#define MSCM_IRCP10ISR1_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP10ISR1_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP10ISR1_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR1_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR1_CP6_INT_SHIFT)) & MSCM_IRCP10ISR1_CP6_INT_MASK)

#define MSCM_IRCP10ISR1_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP10ISR1_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP10ISR1_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR1_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR1_CP7_INT_SHIFT)) & MSCM_IRCP10ISR1_CP7_INT_MASK)

#define MSCM_IRCP10ISR1_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP10ISR1_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP10ISR1_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR1_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR1_CP8_INT_SHIFT)) & MSCM_IRCP10ISR1_CP8_INT_MASK)

#define MSCM_IRCP10ISR1_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP10ISR1_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP10ISR1_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR1_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR1_CP9_INT_SHIFT)) & MSCM_IRCP10ISR1_CP9_INT_MASK)

#define MSCM_IRCP10ISR1_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP10ISR1_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP10ISR1_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR1_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR1_CP10_INT_SHIFT)) & MSCM_IRCP10ISR1_CP10_INT_MASK)

#define MSCM_IRCP10ISR1_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP10ISR1_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP10ISR1_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR1_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR1_CP11_INT_SHIFT)) & MSCM_IRCP10ISR1_CP11_INT_MASK)
/*! @} */

/*! @name IRCP10IGR1 - Interrupt Router CP10 Interrupt1 Generation Register */
/*! @{ */

#define MSCM_IRCP10IGR1_INT_EN_MASK              (0x1U)
#define MSCM_IRCP10IGR1_INT_EN_SHIFT             (0U)
#define MSCM_IRCP10IGR1_INT_EN_WIDTH             (1U)
#define MSCM_IRCP10IGR1_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR1_INT_EN_SHIFT)) & MSCM_IRCP10IGR1_INT_EN_MASK)
/*! @} */

/*! @name IRCP10ISR2 - Interrupt Router CP10 Interrupt2 Status Register */
/*! @{ */

#define MSCM_IRCP10ISR2_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP10ISR2_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP10ISR2_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR2_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR2_CP0_INT_SHIFT)) & MSCM_IRCP10ISR2_CP0_INT_MASK)

#define MSCM_IRCP10ISR2_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP10ISR2_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP10ISR2_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR2_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR2_CP1_INT_SHIFT)) & MSCM_IRCP10ISR2_CP1_INT_MASK)

#define MSCM_IRCP10ISR2_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP10ISR2_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP10ISR2_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR2_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR2_CP2_INT_SHIFT)) & MSCM_IRCP10ISR2_CP2_INT_MASK)

#define MSCM_IRCP10ISR2_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP10ISR2_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP10ISR2_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR2_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR2_CP3_INT_SHIFT)) & MSCM_IRCP10ISR2_CP3_INT_MASK)

#define MSCM_IRCP10ISR2_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP10ISR2_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP10ISR2_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR2_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR2_CP4_INT_SHIFT)) & MSCM_IRCP10ISR2_CP4_INT_MASK)

#define MSCM_IRCP10ISR2_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP10ISR2_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP10ISR2_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR2_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR2_CP5_INT_SHIFT)) & MSCM_IRCP10ISR2_CP5_INT_MASK)

#define MSCM_IRCP10ISR2_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP10ISR2_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP10ISR2_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR2_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR2_CP6_INT_SHIFT)) & MSCM_IRCP10ISR2_CP6_INT_MASK)

#define MSCM_IRCP10ISR2_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP10ISR2_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP10ISR2_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR2_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR2_CP7_INT_SHIFT)) & MSCM_IRCP10ISR2_CP7_INT_MASK)

#define MSCM_IRCP10ISR2_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP10ISR2_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP10ISR2_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR2_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR2_CP8_INT_SHIFT)) & MSCM_IRCP10ISR2_CP8_INT_MASK)

#define MSCM_IRCP10ISR2_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP10ISR2_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP10ISR2_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR2_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR2_CP9_INT_SHIFT)) & MSCM_IRCP10ISR2_CP9_INT_MASK)

#define MSCM_IRCP10ISR2_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP10ISR2_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP10ISR2_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR2_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR2_CP10_INT_SHIFT)) & MSCM_IRCP10ISR2_CP10_INT_MASK)

#define MSCM_IRCP10ISR2_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP10ISR2_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP10ISR2_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR2_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR2_CP11_INT_SHIFT)) & MSCM_IRCP10ISR2_CP11_INT_MASK)
/*! @} */

/*! @name IRCP10IGR2 - Interrupt Router CP10 Interrupt2 Generation Register */
/*! @{ */

#define MSCM_IRCP10IGR2_INT_EN_MASK              (0x1U)
#define MSCM_IRCP10IGR2_INT_EN_SHIFT             (0U)
#define MSCM_IRCP10IGR2_INT_EN_WIDTH             (1U)
#define MSCM_IRCP10IGR2_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR2_INT_EN_SHIFT)) & MSCM_IRCP10IGR2_INT_EN_MASK)
/*! @} */

/*! @name IRCP10ISR3 - Interrupt Router CP10 Interrupt3 Status Register */
/*! @{ */

#define MSCM_IRCP10ISR3_PCIE_INT0_MASK           (0x1U)
#define MSCM_IRCP10ISR3_PCIE_INT0_SHIFT          (0U)
#define MSCM_IRCP10ISR3_PCIE_INT0_WIDTH          (1U)
#define MSCM_IRCP10ISR3_PCIE_INT0(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT0_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT0_MASK)

#define MSCM_IRCP10ISR3_PCIE_INT1_MASK           (0x2U)
#define MSCM_IRCP10ISR3_PCIE_INT1_SHIFT          (1U)
#define MSCM_IRCP10ISR3_PCIE_INT1_WIDTH          (1U)
#define MSCM_IRCP10ISR3_PCIE_INT1(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT1_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT1_MASK)

#define MSCM_IRCP10ISR3_PCIE_INT2_MASK           (0x4U)
#define MSCM_IRCP10ISR3_PCIE_INT2_SHIFT          (2U)
#define MSCM_IRCP10ISR3_PCIE_INT2_WIDTH          (1U)
#define MSCM_IRCP10ISR3_PCIE_INT2(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT2_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT2_MASK)

#define MSCM_IRCP10ISR3_PCIE_INT3_MASK           (0x8U)
#define MSCM_IRCP10ISR3_PCIE_INT3_SHIFT          (3U)
#define MSCM_IRCP10ISR3_PCIE_INT3_WIDTH          (1U)
#define MSCM_IRCP10ISR3_PCIE_INT3(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT3_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT3_MASK)

#define MSCM_IRCP10ISR3_PCIE_INT4_MASK           (0x10U)
#define MSCM_IRCP10ISR3_PCIE_INT4_SHIFT          (4U)
#define MSCM_IRCP10ISR3_PCIE_INT4_WIDTH          (1U)
#define MSCM_IRCP10ISR3_PCIE_INT4(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT4_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT4_MASK)

#define MSCM_IRCP10ISR3_PCIE_INT5_MASK           (0x20U)
#define MSCM_IRCP10ISR3_PCIE_INT5_SHIFT          (5U)
#define MSCM_IRCP10ISR3_PCIE_INT5_WIDTH          (1U)
#define MSCM_IRCP10ISR3_PCIE_INT5(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT5_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT5_MASK)

#define MSCM_IRCP10ISR3_PCIE_INT6_MASK           (0x40U)
#define MSCM_IRCP10ISR3_PCIE_INT6_SHIFT          (6U)
#define MSCM_IRCP10ISR3_PCIE_INT6_WIDTH          (1U)
#define MSCM_IRCP10ISR3_PCIE_INT6(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT6_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT6_MASK)

#define MSCM_IRCP10ISR3_PCIE_INT7_MASK           (0x80U)
#define MSCM_IRCP10ISR3_PCIE_INT7_SHIFT          (7U)
#define MSCM_IRCP10ISR3_PCIE_INT7_WIDTH          (1U)
#define MSCM_IRCP10ISR3_PCIE_INT7(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT7_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT7_MASK)

#define MSCM_IRCP10ISR3_PCIE_INT8_MASK           (0x100U)
#define MSCM_IRCP10ISR3_PCIE_INT8_SHIFT          (8U)
#define MSCM_IRCP10ISR3_PCIE_INT8_WIDTH          (1U)
#define MSCM_IRCP10ISR3_PCIE_INT8(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT8_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT8_MASK)

#define MSCM_IRCP10ISR3_PCIE_INT9_MASK           (0x200U)
#define MSCM_IRCP10ISR3_PCIE_INT9_SHIFT          (9U)
#define MSCM_IRCP10ISR3_PCIE_INT9_WIDTH          (1U)
#define MSCM_IRCP10ISR3_PCIE_INT9(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT9_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT9_MASK)

#define MSCM_IRCP10ISR3_PCIE_INT10_MASK          (0x400U)
#define MSCM_IRCP10ISR3_PCIE_INT10_SHIFT         (10U)
#define MSCM_IRCP10ISR3_PCIE_INT10_WIDTH         (1U)
#define MSCM_IRCP10ISR3_PCIE_INT10(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT10_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT10_MASK)

#define MSCM_IRCP10ISR3_PCIE_INT11_MASK          (0x800U)
#define MSCM_IRCP10ISR3_PCIE_INT11_SHIFT         (11U)
#define MSCM_IRCP10ISR3_PCIE_INT11_WIDTH         (1U)
#define MSCM_IRCP10ISR3_PCIE_INT11(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT11_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT11_MASK)

#define MSCM_IRCP10ISR3_PCIE_INT12_MASK          (0x1000U)
#define MSCM_IRCP10ISR3_PCIE_INT12_SHIFT         (12U)
#define MSCM_IRCP10ISR3_PCIE_INT12_WIDTH         (1U)
#define MSCM_IRCP10ISR3_PCIE_INT12(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT12_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT12_MASK)

#define MSCM_IRCP10ISR3_PCIE_INT13_MASK          (0x2000U)
#define MSCM_IRCP10ISR3_PCIE_INT13_SHIFT         (13U)
#define MSCM_IRCP10ISR3_PCIE_INT13_WIDTH         (1U)
#define MSCM_IRCP10ISR3_PCIE_INT13(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT13_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT13_MASK)

#define MSCM_IRCP10ISR3_PCIE_INT14_MASK          (0x4000U)
#define MSCM_IRCP10ISR3_PCIE_INT14_SHIFT         (14U)
#define MSCM_IRCP10ISR3_PCIE_INT14_WIDTH         (1U)
#define MSCM_IRCP10ISR3_PCIE_INT14(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT14_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT14_MASK)

#define MSCM_IRCP10ISR3_PCIE_INT15_MASK          (0x8000U)
#define MSCM_IRCP10ISR3_PCIE_INT15_SHIFT         (15U)
#define MSCM_IRCP10ISR3_PCIE_INT15_WIDTH         (1U)
#define MSCM_IRCP10ISR3_PCIE_INT15(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR3_PCIE_INT15_SHIFT)) & MSCM_IRCP10ISR3_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP10IGR3 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP10IGR3_INT0_EN_MASK             (0x1U)
#define MSCM_IRCP10IGR3_INT0_EN_SHIFT            (0U)
#define MSCM_IRCP10IGR3_INT0_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR3_INT0_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT0_EN_SHIFT)) & MSCM_IRCP10IGR3_INT0_EN_MASK)

#define MSCM_IRCP10IGR3_INT1_EN_MASK             (0x2U)
#define MSCM_IRCP10IGR3_INT1_EN_SHIFT            (1U)
#define MSCM_IRCP10IGR3_INT1_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR3_INT1_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT1_EN_SHIFT)) & MSCM_IRCP10IGR3_INT1_EN_MASK)

#define MSCM_IRCP10IGR3_INT2_EN_MASK             (0x4U)
#define MSCM_IRCP10IGR3_INT2_EN_SHIFT            (2U)
#define MSCM_IRCP10IGR3_INT2_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR3_INT2_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT2_EN_SHIFT)) & MSCM_IRCP10IGR3_INT2_EN_MASK)

#define MSCM_IRCP10IGR3_INT3_EN_MASK             (0x8U)
#define MSCM_IRCP10IGR3_INT3_EN_SHIFT            (3U)
#define MSCM_IRCP10IGR3_INT3_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR3_INT3_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT3_EN_SHIFT)) & MSCM_IRCP10IGR3_INT3_EN_MASK)

#define MSCM_IRCP10IGR3_INT4_EN_MASK             (0x10U)
#define MSCM_IRCP10IGR3_INT4_EN_SHIFT            (4U)
#define MSCM_IRCP10IGR3_INT4_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR3_INT4_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT4_EN_SHIFT)) & MSCM_IRCP10IGR3_INT4_EN_MASK)

#define MSCM_IRCP10IGR3_INT5_EN_MASK             (0x20U)
#define MSCM_IRCP10IGR3_INT5_EN_SHIFT            (5U)
#define MSCM_IRCP10IGR3_INT5_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR3_INT5_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT5_EN_SHIFT)) & MSCM_IRCP10IGR3_INT5_EN_MASK)

#define MSCM_IRCP10IGR3_INT6_EN_MASK             (0x40U)
#define MSCM_IRCP10IGR3_INT6_EN_SHIFT            (6U)
#define MSCM_IRCP10IGR3_INT6_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR3_INT6_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT6_EN_SHIFT)) & MSCM_IRCP10IGR3_INT6_EN_MASK)

#define MSCM_IRCP10IGR3_INT7_EN_MASK             (0x80U)
#define MSCM_IRCP10IGR3_INT7_EN_SHIFT            (7U)
#define MSCM_IRCP10IGR3_INT7_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR3_INT7_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT7_EN_SHIFT)) & MSCM_IRCP10IGR3_INT7_EN_MASK)

#define MSCM_IRCP10IGR3_INT8_EN_MASK             (0x100U)
#define MSCM_IRCP10IGR3_INT8_EN_SHIFT            (8U)
#define MSCM_IRCP10IGR3_INT8_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR3_INT8_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT8_EN_SHIFT)) & MSCM_IRCP10IGR3_INT8_EN_MASK)

#define MSCM_IRCP10IGR3_INT9_EN_MASK             (0x200U)
#define MSCM_IRCP10IGR3_INT9_EN_SHIFT            (9U)
#define MSCM_IRCP10IGR3_INT9_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR3_INT9_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT9_EN_SHIFT)) & MSCM_IRCP10IGR3_INT9_EN_MASK)

#define MSCM_IRCP10IGR3_INT10_EN_MASK            (0x400U)
#define MSCM_IRCP10IGR3_INT10_EN_SHIFT           (10U)
#define MSCM_IRCP10IGR3_INT10_EN_WIDTH           (1U)
#define MSCM_IRCP10IGR3_INT10_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT10_EN_SHIFT)) & MSCM_IRCP10IGR3_INT10_EN_MASK)

#define MSCM_IRCP10IGR3_INT11_EN_MASK            (0x800U)
#define MSCM_IRCP10IGR3_INT11_EN_SHIFT           (11U)
#define MSCM_IRCP10IGR3_INT11_EN_WIDTH           (1U)
#define MSCM_IRCP10IGR3_INT11_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT11_EN_SHIFT)) & MSCM_IRCP10IGR3_INT11_EN_MASK)

#define MSCM_IRCP10IGR3_INT12_EN_MASK            (0x1000U)
#define MSCM_IRCP10IGR3_INT12_EN_SHIFT           (12U)
#define MSCM_IRCP10IGR3_INT12_EN_WIDTH           (1U)
#define MSCM_IRCP10IGR3_INT12_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT12_EN_SHIFT)) & MSCM_IRCP10IGR3_INT12_EN_MASK)

#define MSCM_IRCP10IGR3_INT13_EN_MASK            (0x2000U)
#define MSCM_IRCP10IGR3_INT13_EN_SHIFT           (13U)
#define MSCM_IRCP10IGR3_INT13_EN_WIDTH           (1U)
#define MSCM_IRCP10IGR3_INT13_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT13_EN_SHIFT)) & MSCM_IRCP10IGR3_INT13_EN_MASK)

#define MSCM_IRCP10IGR3_INT14_EN_MASK            (0x4000U)
#define MSCM_IRCP10IGR3_INT14_EN_SHIFT           (14U)
#define MSCM_IRCP10IGR3_INT14_EN_WIDTH           (1U)
#define MSCM_IRCP10IGR3_INT14_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT14_EN_SHIFT)) & MSCM_IRCP10IGR3_INT14_EN_MASK)

#define MSCM_IRCP10IGR3_INT15_EN_MASK            (0x8000U)
#define MSCM_IRCP10IGR3_INT15_EN_SHIFT           (15U)
#define MSCM_IRCP10IGR3_INT15_EN_WIDTH           (1U)
#define MSCM_IRCP10IGR3_INT15_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR3_INT15_EN_SHIFT)) & MSCM_IRCP10IGR3_INT15_EN_MASK)
/*! @} */

/*! @name IRCP10ISR4 - Interrupt Router CP10 Interrupt4 Status Register */
/*! @{ */

#define MSCM_IRCP10ISR4_PCIE_INT0_MASK           (0x1U)
#define MSCM_IRCP10ISR4_PCIE_INT0_SHIFT          (0U)
#define MSCM_IRCP10ISR4_PCIE_INT0_WIDTH          (1U)
#define MSCM_IRCP10ISR4_PCIE_INT0(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT0_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT0_MASK)

#define MSCM_IRCP10ISR4_PCIE_INT1_MASK           (0x2U)
#define MSCM_IRCP10ISR4_PCIE_INT1_SHIFT          (1U)
#define MSCM_IRCP10ISR4_PCIE_INT1_WIDTH          (1U)
#define MSCM_IRCP10ISR4_PCIE_INT1(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT1_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT1_MASK)

#define MSCM_IRCP10ISR4_PCIE_INT2_MASK           (0x4U)
#define MSCM_IRCP10ISR4_PCIE_INT2_SHIFT          (2U)
#define MSCM_IRCP10ISR4_PCIE_INT2_WIDTH          (1U)
#define MSCM_IRCP10ISR4_PCIE_INT2(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT2_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT2_MASK)

#define MSCM_IRCP10ISR4_PCIE_INT3_MASK           (0x8U)
#define MSCM_IRCP10ISR4_PCIE_INT3_SHIFT          (3U)
#define MSCM_IRCP10ISR4_PCIE_INT3_WIDTH          (1U)
#define MSCM_IRCP10ISR4_PCIE_INT3(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT3_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT3_MASK)

#define MSCM_IRCP10ISR4_PCIE_INT4_MASK           (0x10U)
#define MSCM_IRCP10ISR4_PCIE_INT4_SHIFT          (4U)
#define MSCM_IRCP10ISR4_PCIE_INT4_WIDTH          (1U)
#define MSCM_IRCP10ISR4_PCIE_INT4(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT4_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT4_MASK)

#define MSCM_IRCP10ISR4_PCIE_INT5_MASK           (0x20U)
#define MSCM_IRCP10ISR4_PCIE_INT5_SHIFT          (5U)
#define MSCM_IRCP10ISR4_PCIE_INT5_WIDTH          (1U)
#define MSCM_IRCP10ISR4_PCIE_INT5(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT5_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT5_MASK)

#define MSCM_IRCP10ISR4_PCIE_INT6_MASK           (0x40U)
#define MSCM_IRCP10ISR4_PCIE_INT6_SHIFT          (6U)
#define MSCM_IRCP10ISR4_PCIE_INT6_WIDTH          (1U)
#define MSCM_IRCP10ISR4_PCIE_INT6(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT6_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT6_MASK)

#define MSCM_IRCP10ISR4_PCIE_INT7_MASK           (0x80U)
#define MSCM_IRCP10ISR4_PCIE_INT7_SHIFT          (7U)
#define MSCM_IRCP10ISR4_PCIE_INT7_WIDTH          (1U)
#define MSCM_IRCP10ISR4_PCIE_INT7(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT7_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT7_MASK)

#define MSCM_IRCP10ISR4_PCIE_INT8_MASK           (0x100U)
#define MSCM_IRCP10ISR4_PCIE_INT8_SHIFT          (8U)
#define MSCM_IRCP10ISR4_PCIE_INT8_WIDTH          (1U)
#define MSCM_IRCP10ISR4_PCIE_INT8(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT8_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT8_MASK)

#define MSCM_IRCP10ISR4_PCIE_INT9_MASK           (0x200U)
#define MSCM_IRCP10ISR4_PCIE_INT9_SHIFT          (9U)
#define MSCM_IRCP10ISR4_PCIE_INT9_WIDTH          (1U)
#define MSCM_IRCP10ISR4_PCIE_INT9(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT9_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT9_MASK)

#define MSCM_IRCP10ISR4_PCIE_INT10_MASK          (0x400U)
#define MSCM_IRCP10ISR4_PCIE_INT10_SHIFT         (10U)
#define MSCM_IRCP10ISR4_PCIE_INT10_WIDTH         (1U)
#define MSCM_IRCP10ISR4_PCIE_INT10(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT10_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT10_MASK)

#define MSCM_IRCP10ISR4_PCIE_INT11_MASK          (0x800U)
#define MSCM_IRCP10ISR4_PCIE_INT11_SHIFT         (11U)
#define MSCM_IRCP10ISR4_PCIE_INT11_WIDTH         (1U)
#define MSCM_IRCP10ISR4_PCIE_INT11(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT11_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT11_MASK)

#define MSCM_IRCP10ISR4_PCIE_INT12_MASK          (0x1000U)
#define MSCM_IRCP10ISR4_PCIE_INT12_SHIFT         (12U)
#define MSCM_IRCP10ISR4_PCIE_INT12_WIDTH         (1U)
#define MSCM_IRCP10ISR4_PCIE_INT12(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT12_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT12_MASK)

#define MSCM_IRCP10ISR4_PCIE_INT13_MASK          (0x2000U)
#define MSCM_IRCP10ISR4_PCIE_INT13_SHIFT         (13U)
#define MSCM_IRCP10ISR4_PCIE_INT13_WIDTH         (1U)
#define MSCM_IRCP10ISR4_PCIE_INT13(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT13_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT13_MASK)

#define MSCM_IRCP10ISR4_PCIE_INT14_MASK          (0x4000U)
#define MSCM_IRCP10ISR4_PCIE_INT14_SHIFT         (14U)
#define MSCM_IRCP10ISR4_PCIE_INT14_WIDTH         (1U)
#define MSCM_IRCP10ISR4_PCIE_INT14(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT14_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT14_MASK)

#define MSCM_IRCP10ISR4_PCIE_INT15_MASK          (0x8000U)
#define MSCM_IRCP10ISR4_PCIE_INT15_SHIFT         (15U)
#define MSCM_IRCP10ISR4_PCIE_INT15_WIDTH         (1U)
#define MSCM_IRCP10ISR4_PCIE_INT15(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR4_PCIE_INT15_SHIFT)) & MSCM_IRCP10ISR4_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP10IGR4 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP10IGR4_INT0_EN_MASK             (0x1U)
#define MSCM_IRCP10IGR4_INT0_EN_SHIFT            (0U)
#define MSCM_IRCP10IGR4_INT0_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR4_INT0_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT0_EN_SHIFT)) & MSCM_IRCP10IGR4_INT0_EN_MASK)

#define MSCM_IRCP10IGR4_INT1_EN_MASK             (0x2U)
#define MSCM_IRCP10IGR4_INT1_EN_SHIFT            (1U)
#define MSCM_IRCP10IGR4_INT1_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR4_INT1_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT1_EN_SHIFT)) & MSCM_IRCP10IGR4_INT1_EN_MASK)

#define MSCM_IRCP10IGR4_INT2_EN_MASK             (0x4U)
#define MSCM_IRCP10IGR4_INT2_EN_SHIFT            (2U)
#define MSCM_IRCP10IGR4_INT2_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR4_INT2_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT2_EN_SHIFT)) & MSCM_IRCP10IGR4_INT2_EN_MASK)

#define MSCM_IRCP10IGR4_INT3_EN_MASK             (0x8U)
#define MSCM_IRCP10IGR4_INT3_EN_SHIFT            (3U)
#define MSCM_IRCP10IGR4_INT3_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR4_INT3_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT3_EN_SHIFT)) & MSCM_IRCP10IGR4_INT3_EN_MASK)

#define MSCM_IRCP10IGR4_INT4_EN_MASK             (0x10U)
#define MSCM_IRCP10IGR4_INT4_EN_SHIFT            (4U)
#define MSCM_IRCP10IGR4_INT4_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR4_INT4_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT4_EN_SHIFT)) & MSCM_IRCP10IGR4_INT4_EN_MASK)

#define MSCM_IRCP10IGR4_INT5_EN_MASK             (0x20U)
#define MSCM_IRCP10IGR4_INT5_EN_SHIFT            (5U)
#define MSCM_IRCP10IGR4_INT5_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR4_INT5_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT5_EN_SHIFT)) & MSCM_IRCP10IGR4_INT5_EN_MASK)

#define MSCM_IRCP10IGR4_INT6_EN_MASK             (0x40U)
#define MSCM_IRCP10IGR4_INT6_EN_SHIFT            (6U)
#define MSCM_IRCP10IGR4_INT6_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR4_INT6_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT6_EN_SHIFT)) & MSCM_IRCP10IGR4_INT6_EN_MASK)

#define MSCM_IRCP10IGR4_INT7_EN_MASK             (0x80U)
#define MSCM_IRCP10IGR4_INT7_EN_SHIFT            (7U)
#define MSCM_IRCP10IGR4_INT7_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR4_INT7_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT7_EN_SHIFT)) & MSCM_IRCP10IGR4_INT7_EN_MASK)

#define MSCM_IRCP10IGR4_INT8_EN_MASK             (0x100U)
#define MSCM_IRCP10IGR4_INT8_EN_SHIFT            (8U)
#define MSCM_IRCP10IGR4_INT8_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR4_INT8_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT8_EN_SHIFT)) & MSCM_IRCP10IGR4_INT8_EN_MASK)

#define MSCM_IRCP10IGR4_INT9_EN_MASK             (0x200U)
#define MSCM_IRCP10IGR4_INT9_EN_SHIFT            (9U)
#define MSCM_IRCP10IGR4_INT9_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR4_INT9_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT9_EN_SHIFT)) & MSCM_IRCP10IGR4_INT9_EN_MASK)

#define MSCM_IRCP10IGR4_INT10_EN_MASK            (0x400U)
#define MSCM_IRCP10IGR4_INT10_EN_SHIFT           (10U)
#define MSCM_IRCP10IGR4_INT10_EN_WIDTH           (1U)
#define MSCM_IRCP10IGR4_INT10_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT10_EN_SHIFT)) & MSCM_IRCP10IGR4_INT10_EN_MASK)

#define MSCM_IRCP10IGR4_INT11_EN_MASK            (0x800U)
#define MSCM_IRCP10IGR4_INT11_EN_SHIFT           (11U)
#define MSCM_IRCP10IGR4_INT11_EN_WIDTH           (1U)
#define MSCM_IRCP10IGR4_INT11_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT11_EN_SHIFT)) & MSCM_IRCP10IGR4_INT11_EN_MASK)

#define MSCM_IRCP10IGR4_INT12_EN_MASK            (0x1000U)
#define MSCM_IRCP10IGR4_INT12_EN_SHIFT           (12U)
#define MSCM_IRCP10IGR4_INT12_EN_WIDTH           (1U)
#define MSCM_IRCP10IGR4_INT12_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT12_EN_SHIFT)) & MSCM_IRCP10IGR4_INT12_EN_MASK)

#define MSCM_IRCP10IGR4_INT13_EN_MASK            (0x2000U)
#define MSCM_IRCP10IGR4_INT13_EN_SHIFT           (13U)
#define MSCM_IRCP10IGR4_INT13_EN_WIDTH           (1U)
#define MSCM_IRCP10IGR4_INT13_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT13_EN_SHIFT)) & MSCM_IRCP10IGR4_INT13_EN_MASK)

#define MSCM_IRCP10IGR4_INT14_EN_MASK            (0x4000U)
#define MSCM_IRCP10IGR4_INT14_EN_SHIFT           (14U)
#define MSCM_IRCP10IGR4_INT14_EN_WIDTH           (1U)
#define MSCM_IRCP10IGR4_INT14_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT14_EN_SHIFT)) & MSCM_IRCP10IGR4_INT14_EN_MASK)

#define MSCM_IRCP10IGR4_INT15_EN_MASK            (0x8000U)
#define MSCM_IRCP10IGR4_INT15_EN_SHIFT           (15U)
#define MSCM_IRCP10IGR4_INT15_EN_WIDTH           (1U)
#define MSCM_IRCP10IGR4_INT15_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR4_INT15_EN_SHIFT)) & MSCM_IRCP10IGR4_INT15_EN_MASK)
/*! @} */

/*! @name IRCP10ISR5 - Interrupt Router CP10 Interrupt5 Status Register */
/*! @{ */

#define MSCM_IRCP10ISR5_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP10ISR5_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP10ISR5_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR5_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR5_CP0_INT_SHIFT)) & MSCM_IRCP10ISR5_CP0_INT_MASK)

#define MSCM_IRCP10ISR5_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP10ISR5_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP10ISR5_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR5_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR5_CP1_INT_SHIFT)) & MSCM_IRCP10ISR5_CP1_INT_MASK)

#define MSCM_IRCP10ISR5_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP10ISR5_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP10ISR5_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR5_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR5_CP2_INT_SHIFT)) & MSCM_IRCP10ISR5_CP2_INT_MASK)

#define MSCM_IRCP10ISR5_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP10ISR5_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP10ISR5_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR5_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR5_CP3_INT_SHIFT)) & MSCM_IRCP10ISR5_CP3_INT_MASK)

#define MSCM_IRCP10ISR5_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP10ISR5_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP10ISR5_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR5_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR5_CP4_INT_SHIFT)) & MSCM_IRCP10ISR5_CP4_INT_MASK)

#define MSCM_IRCP10ISR5_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP10ISR5_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP10ISR5_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR5_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR5_CP5_INT_SHIFT)) & MSCM_IRCP10ISR5_CP5_INT_MASK)

#define MSCM_IRCP10ISR5_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP10ISR5_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP10ISR5_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR5_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR5_CP6_INT_SHIFT)) & MSCM_IRCP10ISR5_CP6_INT_MASK)

#define MSCM_IRCP10ISR5_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP10ISR5_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP10ISR5_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR5_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR5_CP7_INT_SHIFT)) & MSCM_IRCP10ISR5_CP7_INT_MASK)

#define MSCM_IRCP10ISR5_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP10ISR5_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP10ISR5_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR5_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR5_CP8_INT_SHIFT)) & MSCM_IRCP10ISR5_CP8_INT_MASK)

#define MSCM_IRCP10ISR5_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP10ISR5_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP10ISR5_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR5_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR5_CP9_INT_SHIFT)) & MSCM_IRCP10ISR5_CP9_INT_MASK)

#define MSCM_IRCP10ISR5_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP10ISR5_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP10ISR5_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR5_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR5_CP10_INT_SHIFT)) & MSCM_IRCP10ISR5_CP10_INT_MASK)

#define MSCM_IRCP10ISR5_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP10ISR5_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP10ISR5_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR5_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR5_CP11_INT_SHIFT)) & MSCM_IRCP10ISR5_CP11_INT_MASK)
/*! @} */

/*! @name IRCP10IGR5 - Interrupt Router CP10 Interrupt5 Generation Register */
/*! @{ */

#define MSCM_IRCP10IGR5_INT_EN_MASK              (0x1U)
#define MSCM_IRCP10IGR5_INT_EN_SHIFT             (0U)
#define MSCM_IRCP10IGR5_INT_EN_WIDTH             (1U)
#define MSCM_IRCP10IGR5_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR5_INT_EN_SHIFT)) & MSCM_IRCP10IGR5_INT_EN_MASK)
/*! @} */

/*! @name IRCP10ISR6 - Interrupt Router CP10 Interrupt6 Status Register */
/*! @{ */

#define MSCM_IRCP10ISR6_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP10ISR6_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP10ISR6_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR6_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR6_CP0_INT_SHIFT)) & MSCM_IRCP10ISR6_CP0_INT_MASK)

#define MSCM_IRCP10ISR6_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP10ISR6_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP10ISR6_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR6_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR6_CP1_INT_SHIFT)) & MSCM_IRCP10ISR6_CP1_INT_MASK)

#define MSCM_IRCP10ISR6_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP10ISR6_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP10ISR6_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR6_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR6_CP2_INT_SHIFT)) & MSCM_IRCP10ISR6_CP2_INT_MASK)

#define MSCM_IRCP10ISR6_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP10ISR6_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP10ISR6_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR6_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR6_CP3_INT_SHIFT)) & MSCM_IRCP10ISR6_CP3_INT_MASK)

#define MSCM_IRCP10ISR6_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP10ISR6_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP10ISR6_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR6_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR6_CP4_INT_SHIFT)) & MSCM_IRCP10ISR6_CP4_INT_MASK)

#define MSCM_IRCP10ISR6_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP10ISR6_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP10ISR6_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR6_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR6_CP5_INT_SHIFT)) & MSCM_IRCP10ISR6_CP5_INT_MASK)

#define MSCM_IRCP10ISR6_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP10ISR6_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP10ISR6_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR6_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR6_CP6_INT_SHIFT)) & MSCM_IRCP10ISR6_CP6_INT_MASK)

#define MSCM_IRCP10ISR6_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP10ISR6_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP10ISR6_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR6_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR6_CP7_INT_SHIFT)) & MSCM_IRCP10ISR6_CP7_INT_MASK)

#define MSCM_IRCP10ISR6_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP10ISR6_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP10ISR6_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR6_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR6_CP8_INT_SHIFT)) & MSCM_IRCP10ISR6_CP8_INT_MASK)

#define MSCM_IRCP10ISR6_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP10ISR6_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP10ISR6_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR6_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR6_CP9_INT_SHIFT)) & MSCM_IRCP10ISR6_CP9_INT_MASK)

#define MSCM_IRCP10ISR6_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP10ISR6_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP10ISR6_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR6_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR6_CP10_INT_SHIFT)) & MSCM_IRCP10ISR6_CP10_INT_MASK)

#define MSCM_IRCP10ISR6_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP10ISR6_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP10ISR6_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR6_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR6_CP11_INT_SHIFT)) & MSCM_IRCP10ISR6_CP11_INT_MASK)
/*! @} */

/*! @name IRCP10IGR6 - Interrupt Router CP10 Interrupt6 Generation Register */
/*! @{ */

#define MSCM_IRCP10IGR6_INT_EN_MASK              (0x1U)
#define MSCM_IRCP10IGR6_INT_EN_SHIFT             (0U)
#define MSCM_IRCP10IGR6_INT_EN_WIDTH             (1U)
#define MSCM_IRCP10IGR6_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR6_INT_EN_SHIFT)) & MSCM_IRCP10IGR6_INT_EN_MASK)
/*! @} */

/*! @name IRCP10ISR7 - Interrupt Router CP10 Interrupt7 Status Register */
/*! @{ */

#define MSCM_IRCP10ISR7_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP10ISR7_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP10ISR7_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR7_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR7_CP0_INT_SHIFT)) & MSCM_IRCP10ISR7_CP0_INT_MASK)

#define MSCM_IRCP10ISR7_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP10ISR7_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP10ISR7_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR7_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR7_CP1_INT_SHIFT)) & MSCM_IRCP10ISR7_CP1_INT_MASK)

#define MSCM_IRCP10ISR7_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP10ISR7_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP10ISR7_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR7_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR7_CP2_INT_SHIFT)) & MSCM_IRCP10ISR7_CP2_INT_MASK)

#define MSCM_IRCP10ISR7_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP10ISR7_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP10ISR7_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR7_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR7_CP3_INT_SHIFT)) & MSCM_IRCP10ISR7_CP3_INT_MASK)

#define MSCM_IRCP10ISR7_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP10ISR7_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP10ISR7_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR7_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR7_CP4_INT_SHIFT)) & MSCM_IRCP10ISR7_CP4_INT_MASK)

#define MSCM_IRCP10ISR7_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP10ISR7_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP10ISR7_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR7_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR7_CP5_INT_SHIFT)) & MSCM_IRCP10ISR7_CP5_INT_MASK)

#define MSCM_IRCP10ISR7_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP10ISR7_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP10ISR7_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR7_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR7_CP6_INT_SHIFT)) & MSCM_IRCP10ISR7_CP6_INT_MASK)

#define MSCM_IRCP10ISR7_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP10ISR7_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP10ISR7_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR7_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR7_CP7_INT_SHIFT)) & MSCM_IRCP10ISR7_CP7_INT_MASK)

#define MSCM_IRCP10ISR7_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP10ISR7_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP10ISR7_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR7_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR7_CP8_INT_SHIFT)) & MSCM_IRCP10ISR7_CP8_INT_MASK)

#define MSCM_IRCP10ISR7_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP10ISR7_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP10ISR7_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR7_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR7_CP9_INT_SHIFT)) & MSCM_IRCP10ISR7_CP9_INT_MASK)

#define MSCM_IRCP10ISR7_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP10ISR7_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP10ISR7_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR7_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR7_CP10_INT_SHIFT)) & MSCM_IRCP10ISR7_CP10_INT_MASK)

#define MSCM_IRCP10ISR7_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP10ISR7_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP10ISR7_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR7_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR7_CP11_INT_SHIFT)) & MSCM_IRCP10ISR7_CP11_INT_MASK)
/*! @} */

/*! @name IRCP10IGR7 - Interrupt Router CP10 Interrupt7 Generation Register */
/*! @{ */

#define MSCM_IRCP10IGR7_INT_EN_MASK              (0x1U)
#define MSCM_IRCP10IGR7_INT_EN_SHIFT             (0U)
#define MSCM_IRCP10IGR7_INT_EN_WIDTH             (1U)
#define MSCM_IRCP10IGR7_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR7_INT_EN_SHIFT)) & MSCM_IRCP10IGR7_INT_EN_MASK)
/*! @} */

/*! @name IRCP10ISR8 - Interrupt Router CP10 Interrupt8 Status Register */
/*! @{ */

#define MSCM_IRCP10ISR8_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP10ISR8_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP10ISR8_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR8_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR8_CP0_INT_SHIFT)) & MSCM_IRCP10ISR8_CP0_INT_MASK)

#define MSCM_IRCP10ISR8_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP10ISR8_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP10ISR8_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR8_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR8_CP1_INT_SHIFT)) & MSCM_IRCP10ISR8_CP1_INT_MASK)

#define MSCM_IRCP10ISR8_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP10ISR8_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP10ISR8_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR8_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR8_CP2_INT_SHIFT)) & MSCM_IRCP10ISR8_CP2_INT_MASK)

#define MSCM_IRCP10ISR8_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP10ISR8_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP10ISR8_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR8_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR8_CP3_INT_SHIFT)) & MSCM_IRCP10ISR8_CP3_INT_MASK)

#define MSCM_IRCP10ISR8_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP10ISR8_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP10ISR8_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR8_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR8_CP4_INT_SHIFT)) & MSCM_IRCP10ISR8_CP4_INT_MASK)

#define MSCM_IRCP10ISR8_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP10ISR8_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP10ISR8_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR8_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR8_CP5_INT_SHIFT)) & MSCM_IRCP10ISR8_CP5_INT_MASK)

#define MSCM_IRCP10ISR8_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP10ISR8_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP10ISR8_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR8_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR8_CP6_INT_SHIFT)) & MSCM_IRCP10ISR8_CP6_INT_MASK)

#define MSCM_IRCP10ISR8_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP10ISR8_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP10ISR8_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR8_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR8_CP7_INT_SHIFT)) & MSCM_IRCP10ISR8_CP7_INT_MASK)

#define MSCM_IRCP10ISR8_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP10ISR8_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP10ISR8_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR8_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR8_CP8_INT_SHIFT)) & MSCM_IRCP10ISR8_CP8_INT_MASK)

#define MSCM_IRCP10ISR8_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP10ISR8_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP10ISR8_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR8_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR8_CP9_INT_SHIFT)) & MSCM_IRCP10ISR8_CP9_INT_MASK)

#define MSCM_IRCP10ISR8_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP10ISR8_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP10ISR8_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR8_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR8_CP10_INT_SHIFT)) & MSCM_IRCP10ISR8_CP10_INT_MASK)

#define MSCM_IRCP10ISR8_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP10ISR8_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP10ISR8_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR8_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR8_CP11_INT_SHIFT)) & MSCM_IRCP10ISR8_CP11_INT_MASK)
/*! @} */

/*! @name IRCP10IGR8 - Interrupt Router CP10 Interrupt8 Generation Register */
/*! @{ */

#define MSCM_IRCP10IGR8_INT_EN_MASK              (0x1U)
#define MSCM_IRCP10IGR8_INT_EN_SHIFT             (0U)
#define MSCM_IRCP10IGR8_INT_EN_WIDTH             (1U)
#define MSCM_IRCP10IGR8_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR8_INT_EN_SHIFT)) & MSCM_IRCP10IGR8_INT_EN_MASK)
/*! @} */

/*! @name IRCP10ISR9 - Interrupt Router CP10 Interrupt9 Status Register */
/*! @{ */

#define MSCM_IRCP10ISR9_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP10ISR9_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP10ISR9_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR9_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR9_CP0_INT_SHIFT)) & MSCM_IRCP10ISR9_CP0_INT_MASK)

#define MSCM_IRCP10ISR9_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP10ISR9_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP10ISR9_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR9_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR9_CP1_INT_SHIFT)) & MSCM_IRCP10ISR9_CP1_INT_MASK)

#define MSCM_IRCP10ISR9_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP10ISR9_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP10ISR9_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR9_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR9_CP2_INT_SHIFT)) & MSCM_IRCP10ISR9_CP2_INT_MASK)

#define MSCM_IRCP10ISR9_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP10ISR9_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP10ISR9_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR9_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR9_CP3_INT_SHIFT)) & MSCM_IRCP10ISR9_CP3_INT_MASK)

#define MSCM_IRCP10ISR9_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP10ISR9_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP10ISR9_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR9_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR9_CP4_INT_SHIFT)) & MSCM_IRCP10ISR9_CP4_INT_MASK)

#define MSCM_IRCP10ISR9_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP10ISR9_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP10ISR9_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR9_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR9_CP5_INT_SHIFT)) & MSCM_IRCP10ISR9_CP5_INT_MASK)

#define MSCM_IRCP10ISR9_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP10ISR9_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP10ISR9_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR9_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR9_CP6_INT_SHIFT)) & MSCM_IRCP10ISR9_CP6_INT_MASK)

#define MSCM_IRCP10ISR9_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP10ISR9_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP10ISR9_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR9_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR9_CP7_INT_SHIFT)) & MSCM_IRCP10ISR9_CP7_INT_MASK)

#define MSCM_IRCP10ISR9_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP10ISR9_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP10ISR9_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR9_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR9_CP8_INT_SHIFT)) & MSCM_IRCP10ISR9_CP8_INT_MASK)

#define MSCM_IRCP10ISR9_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP10ISR9_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP10ISR9_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP10ISR9_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR9_CP9_INT_SHIFT)) & MSCM_IRCP10ISR9_CP9_INT_MASK)

#define MSCM_IRCP10ISR9_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP10ISR9_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP10ISR9_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR9_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR9_CP10_INT_SHIFT)) & MSCM_IRCP10ISR9_CP10_INT_MASK)

#define MSCM_IRCP10ISR9_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP10ISR9_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP10ISR9_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR9_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR9_CP11_INT_SHIFT)) & MSCM_IRCP10ISR9_CP11_INT_MASK)
/*! @} */

/*! @name IRCP10IGR9 - Interrupt Router CP10 Interrupt9 Generation Register */
/*! @{ */

#define MSCM_IRCP10IGR9_INT_EN_MASK              (0x1U)
#define MSCM_IRCP10IGR9_INT_EN_SHIFT             (0U)
#define MSCM_IRCP10IGR9_INT_EN_WIDTH             (1U)
#define MSCM_IRCP10IGR9_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR9_INT_EN_SHIFT)) & MSCM_IRCP10IGR9_INT_EN_MASK)
/*! @} */

/*! @name IRCP10ISR10 - Interrupt Router CP10 Interrupt10 Status Register */
/*! @{ */

#define MSCM_IRCP10ISR10_CP0_INT_MASK            (0x1U)
#define MSCM_IRCP10ISR10_CP0_INT_SHIFT           (0U)
#define MSCM_IRCP10ISR10_CP0_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR10_CP0_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR10_CP0_INT_SHIFT)) & MSCM_IRCP10ISR10_CP0_INT_MASK)

#define MSCM_IRCP10ISR10_CP1_INT_MASK            (0x2U)
#define MSCM_IRCP10ISR10_CP1_INT_SHIFT           (1U)
#define MSCM_IRCP10ISR10_CP1_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR10_CP1_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR10_CP1_INT_SHIFT)) & MSCM_IRCP10ISR10_CP1_INT_MASK)

#define MSCM_IRCP10ISR10_CP2_INT_MASK            (0x4U)
#define MSCM_IRCP10ISR10_CP2_INT_SHIFT           (2U)
#define MSCM_IRCP10ISR10_CP2_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR10_CP2_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR10_CP2_INT_SHIFT)) & MSCM_IRCP10ISR10_CP2_INT_MASK)

#define MSCM_IRCP10ISR10_CP3_INT_MASK            (0x8U)
#define MSCM_IRCP10ISR10_CP3_INT_SHIFT           (3U)
#define MSCM_IRCP10ISR10_CP3_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR10_CP3_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR10_CP3_INT_SHIFT)) & MSCM_IRCP10ISR10_CP3_INT_MASK)

#define MSCM_IRCP10ISR10_CP4_INT_MASK            (0x10U)
#define MSCM_IRCP10ISR10_CP4_INT_SHIFT           (4U)
#define MSCM_IRCP10ISR10_CP4_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR10_CP4_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR10_CP4_INT_SHIFT)) & MSCM_IRCP10ISR10_CP4_INT_MASK)

#define MSCM_IRCP10ISR10_CP5_INT_MASK            (0x20U)
#define MSCM_IRCP10ISR10_CP5_INT_SHIFT           (5U)
#define MSCM_IRCP10ISR10_CP5_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR10_CP5_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR10_CP5_INT_SHIFT)) & MSCM_IRCP10ISR10_CP5_INT_MASK)

#define MSCM_IRCP10ISR10_CP6_INT_MASK            (0x40U)
#define MSCM_IRCP10ISR10_CP6_INT_SHIFT           (6U)
#define MSCM_IRCP10ISR10_CP6_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR10_CP6_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR10_CP6_INT_SHIFT)) & MSCM_IRCP10ISR10_CP6_INT_MASK)

#define MSCM_IRCP10ISR10_CP7_INT_MASK            (0x80U)
#define MSCM_IRCP10ISR10_CP7_INT_SHIFT           (7U)
#define MSCM_IRCP10ISR10_CP7_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR10_CP7_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR10_CP7_INT_SHIFT)) & MSCM_IRCP10ISR10_CP7_INT_MASK)

#define MSCM_IRCP10ISR10_CP8_INT_MASK            (0x100U)
#define MSCM_IRCP10ISR10_CP8_INT_SHIFT           (8U)
#define MSCM_IRCP10ISR10_CP8_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR10_CP8_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR10_CP8_INT_SHIFT)) & MSCM_IRCP10ISR10_CP8_INT_MASK)

#define MSCM_IRCP10ISR10_CP9_INT_MASK            (0x200U)
#define MSCM_IRCP10ISR10_CP9_INT_SHIFT           (9U)
#define MSCM_IRCP10ISR10_CP9_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR10_CP9_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR10_CP9_INT_SHIFT)) & MSCM_IRCP10ISR10_CP9_INT_MASK)

#define MSCM_IRCP10ISR10_CP10_INT_MASK           (0x400U)
#define MSCM_IRCP10ISR10_CP10_INT_SHIFT          (10U)
#define MSCM_IRCP10ISR10_CP10_INT_WIDTH          (1U)
#define MSCM_IRCP10ISR10_CP10_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR10_CP10_INT_SHIFT)) & MSCM_IRCP10ISR10_CP10_INT_MASK)

#define MSCM_IRCP10ISR10_CP11_INT_MASK           (0x800U)
#define MSCM_IRCP10ISR10_CP11_INT_SHIFT          (11U)
#define MSCM_IRCP10ISR10_CP11_INT_WIDTH          (1U)
#define MSCM_IRCP10ISR10_CP11_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR10_CP11_INT_SHIFT)) & MSCM_IRCP10ISR10_CP11_INT_MASK)
/*! @} */

/*! @name IRCP10IGR10 - Interrupt Router CP10 Interrupt10 Generation Register */
/*! @{ */

#define MSCM_IRCP10IGR10_INT_EN_MASK             (0x1U)
#define MSCM_IRCP10IGR10_INT_EN_SHIFT            (0U)
#define MSCM_IRCP10IGR10_INT_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR10_INT_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR10_INT_EN_SHIFT)) & MSCM_IRCP10IGR10_INT_EN_MASK)
/*! @} */

/*! @name IRCP10ISR11 - Interrupt Router CP10 Interrupt11 Status Register */
/*! @{ */

#define MSCM_IRCP10ISR11_CP0_INT_MASK            (0x1U)
#define MSCM_IRCP10ISR11_CP0_INT_SHIFT           (0U)
#define MSCM_IRCP10ISR11_CP0_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR11_CP0_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR11_CP0_INT_SHIFT)) & MSCM_IRCP10ISR11_CP0_INT_MASK)

#define MSCM_IRCP10ISR11_CP1_INT_MASK            (0x2U)
#define MSCM_IRCP10ISR11_CP1_INT_SHIFT           (1U)
#define MSCM_IRCP10ISR11_CP1_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR11_CP1_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR11_CP1_INT_SHIFT)) & MSCM_IRCP10ISR11_CP1_INT_MASK)

#define MSCM_IRCP10ISR11_CP2_INT_MASK            (0x4U)
#define MSCM_IRCP10ISR11_CP2_INT_SHIFT           (2U)
#define MSCM_IRCP10ISR11_CP2_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR11_CP2_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR11_CP2_INT_SHIFT)) & MSCM_IRCP10ISR11_CP2_INT_MASK)

#define MSCM_IRCP10ISR11_CP3_INT_MASK            (0x8U)
#define MSCM_IRCP10ISR11_CP3_INT_SHIFT           (3U)
#define MSCM_IRCP10ISR11_CP3_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR11_CP3_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR11_CP3_INT_SHIFT)) & MSCM_IRCP10ISR11_CP3_INT_MASK)

#define MSCM_IRCP10ISR11_CP4_INT_MASK            (0x10U)
#define MSCM_IRCP10ISR11_CP4_INT_SHIFT           (4U)
#define MSCM_IRCP10ISR11_CP4_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR11_CP4_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR11_CP4_INT_SHIFT)) & MSCM_IRCP10ISR11_CP4_INT_MASK)

#define MSCM_IRCP10ISR11_CP5_INT_MASK            (0x20U)
#define MSCM_IRCP10ISR11_CP5_INT_SHIFT           (5U)
#define MSCM_IRCP10ISR11_CP5_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR11_CP5_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR11_CP5_INT_SHIFT)) & MSCM_IRCP10ISR11_CP5_INT_MASK)

#define MSCM_IRCP10ISR11_CP6_INT_MASK            (0x40U)
#define MSCM_IRCP10ISR11_CP6_INT_SHIFT           (6U)
#define MSCM_IRCP10ISR11_CP6_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR11_CP6_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR11_CP6_INT_SHIFT)) & MSCM_IRCP10ISR11_CP6_INT_MASK)

#define MSCM_IRCP10ISR11_CP7_INT_MASK            (0x80U)
#define MSCM_IRCP10ISR11_CP7_INT_SHIFT           (7U)
#define MSCM_IRCP10ISR11_CP7_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR11_CP7_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR11_CP7_INT_SHIFT)) & MSCM_IRCP10ISR11_CP7_INT_MASK)

#define MSCM_IRCP10ISR11_CP8_INT_MASK            (0x100U)
#define MSCM_IRCP10ISR11_CP8_INT_SHIFT           (8U)
#define MSCM_IRCP10ISR11_CP8_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR11_CP8_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR11_CP8_INT_SHIFT)) & MSCM_IRCP10ISR11_CP8_INT_MASK)

#define MSCM_IRCP10ISR11_CP9_INT_MASK            (0x200U)
#define MSCM_IRCP10ISR11_CP9_INT_SHIFT           (9U)
#define MSCM_IRCP10ISR11_CP9_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR11_CP9_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR11_CP9_INT_SHIFT)) & MSCM_IRCP10ISR11_CP9_INT_MASK)

#define MSCM_IRCP10ISR11_CP10_INT_MASK           (0x400U)
#define MSCM_IRCP10ISR11_CP10_INT_SHIFT          (10U)
#define MSCM_IRCP10ISR11_CP10_INT_WIDTH          (1U)
#define MSCM_IRCP10ISR11_CP10_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR11_CP10_INT_SHIFT)) & MSCM_IRCP10ISR11_CP10_INT_MASK)

#define MSCM_IRCP10ISR11_CP11_INT_MASK           (0x800U)
#define MSCM_IRCP10ISR11_CP11_INT_SHIFT          (11U)
#define MSCM_IRCP10ISR11_CP11_INT_WIDTH          (1U)
#define MSCM_IRCP10ISR11_CP11_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR11_CP11_INT_SHIFT)) & MSCM_IRCP10ISR11_CP11_INT_MASK)
/*! @} */

/*! @name IRCP10IGR11 - Interrupt Router CP10 Interrupt11 Generation Register */
/*! @{ */

#define MSCM_IRCP10IGR11_INT_EN_MASK             (0x1U)
#define MSCM_IRCP10IGR11_INT_EN_SHIFT            (0U)
#define MSCM_IRCP10IGR11_INT_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR11_INT_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR11_INT_EN_SHIFT)) & MSCM_IRCP10IGR11_INT_EN_MASK)
/*! @} */

/*! @name IRCP10ISR12 - Interrupt Router CP10 Interrupt12 Status Register */
/*! @{ */

#define MSCM_IRCP10ISR12_CP0_INT_MASK            (0x1U)
#define MSCM_IRCP10ISR12_CP0_INT_SHIFT           (0U)
#define MSCM_IRCP10ISR12_CP0_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR12_CP0_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR12_CP0_INT_SHIFT)) & MSCM_IRCP10ISR12_CP0_INT_MASK)

#define MSCM_IRCP10ISR12_CP1_INT_MASK            (0x2U)
#define MSCM_IRCP10ISR12_CP1_INT_SHIFT           (1U)
#define MSCM_IRCP10ISR12_CP1_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR12_CP1_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR12_CP1_INT_SHIFT)) & MSCM_IRCP10ISR12_CP1_INT_MASK)

#define MSCM_IRCP10ISR12_CP2_INT_MASK            (0x4U)
#define MSCM_IRCP10ISR12_CP2_INT_SHIFT           (2U)
#define MSCM_IRCP10ISR12_CP2_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR12_CP2_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR12_CP2_INT_SHIFT)) & MSCM_IRCP10ISR12_CP2_INT_MASK)

#define MSCM_IRCP10ISR12_CP3_INT_MASK            (0x8U)
#define MSCM_IRCP10ISR12_CP3_INT_SHIFT           (3U)
#define MSCM_IRCP10ISR12_CP3_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR12_CP3_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR12_CP3_INT_SHIFT)) & MSCM_IRCP10ISR12_CP3_INT_MASK)

#define MSCM_IRCP10ISR12_CP4_INT_MASK            (0x10U)
#define MSCM_IRCP10ISR12_CP4_INT_SHIFT           (4U)
#define MSCM_IRCP10ISR12_CP4_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR12_CP4_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR12_CP4_INT_SHIFT)) & MSCM_IRCP10ISR12_CP4_INT_MASK)

#define MSCM_IRCP10ISR12_CP5_INT_MASK            (0x20U)
#define MSCM_IRCP10ISR12_CP5_INT_SHIFT           (5U)
#define MSCM_IRCP10ISR12_CP5_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR12_CP5_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR12_CP5_INT_SHIFT)) & MSCM_IRCP10ISR12_CP5_INT_MASK)

#define MSCM_IRCP10ISR12_CP6_INT_MASK            (0x40U)
#define MSCM_IRCP10ISR12_CP6_INT_SHIFT           (6U)
#define MSCM_IRCP10ISR12_CP6_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR12_CP6_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR12_CP6_INT_SHIFT)) & MSCM_IRCP10ISR12_CP6_INT_MASK)

#define MSCM_IRCP10ISR12_CP7_INT_MASK            (0x80U)
#define MSCM_IRCP10ISR12_CP7_INT_SHIFT           (7U)
#define MSCM_IRCP10ISR12_CP7_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR12_CP7_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR12_CP7_INT_SHIFT)) & MSCM_IRCP10ISR12_CP7_INT_MASK)

#define MSCM_IRCP10ISR12_CP8_INT_MASK            (0x100U)
#define MSCM_IRCP10ISR12_CP8_INT_SHIFT           (8U)
#define MSCM_IRCP10ISR12_CP8_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR12_CP8_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR12_CP8_INT_SHIFT)) & MSCM_IRCP10ISR12_CP8_INT_MASK)

#define MSCM_IRCP10ISR12_CP9_INT_MASK            (0x200U)
#define MSCM_IRCP10ISR12_CP9_INT_SHIFT           (9U)
#define MSCM_IRCP10ISR12_CP9_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR12_CP9_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR12_CP9_INT_SHIFT)) & MSCM_IRCP10ISR12_CP9_INT_MASK)

#define MSCM_IRCP10ISR12_CP10_INT_MASK           (0x400U)
#define MSCM_IRCP10ISR12_CP10_INT_SHIFT          (10U)
#define MSCM_IRCP10ISR12_CP10_INT_WIDTH          (1U)
#define MSCM_IRCP10ISR12_CP10_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR12_CP10_INT_SHIFT)) & MSCM_IRCP10ISR12_CP10_INT_MASK)

#define MSCM_IRCP10ISR12_CP11_INT_MASK           (0x800U)
#define MSCM_IRCP10ISR12_CP11_INT_SHIFT          (11U)
#define MSCM_IRCP10ISR12_CP11_INT_WIDTH          (1U)
#define MSCM_IRCP10ISR12_CP11_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR12_CP11_INT_SHIFT)) & MSCM_IRCP10ISR12_CP11_INT_MASK)
/*! @} */

/*! @name IRCP10IGR12 - Interrupt Router CP10 Interrupt12 Generation Register */
/*! @{ */

#define MSCM_IRCP10IGR12_INT_EN_MASK             (0x1U)
#define MSCM_IRCP10IGR12_INT_EN_SHIFT            (0U)
#define MSCM_IRCP10IGR12_INT_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR12_INT_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR12_INT_EN_SHIFT)) & MSCM_IRCP10IGR12_INT_EN_MASK)
/*! @} */

/*! @name IRCP10ISR13 - Interrupt Router CP10 Interrupt13 Status Register */
/*! @{ */

#define MSCM_IRCP10ISR13_CP0_INT_MASK            (0x1U)
#define MSCM_IRCP10ISR13_CP0_INT_SHIFT           (0U)
#define MSCM_IRCP10ISR13_CP0_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR13_CP0_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR13_CP0_INT_SHIFT)) & MSCM_IRCP10ISR13_CP0_INT_MASK)

#define MSCM_IRCP10ISR13_CP1_INT_MASK            (0x2U)
#define MSCM_IRCP10ISR13_CP1_INT_SHIFT           (1U)
#define MSCM_IRCP10ISR13_CP1_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR13_CP1_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR13_CP1_INT_SHIFT)) & MSCM_IRCP10ISR13_CP1_INT_MASK)

#define MSCM_IRCP10ISR13_CP2_INT_MASK            (0x4U)
#define MSCM_IRCP10ISR13_CP2_INT_SHIFT           (2U)
#define MSCM_IRCP10ISR13_CP2_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR13_CP2_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR13_CP2_INT_SHIFT)) & MSCM_IRCP10ISR13_CP2_INT_MASK)

#define MSCM_IRCP10ISR13_CP3_INT_MASK            (0x8U)
#define MSCM_IRCP10ISR13_CP3_INT_SHIFT           (3U)
#define MSCM_IRCP10ISR13_CP3_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR13_CP3_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR13_CP3_INT_SHIFT)) & MSCM_IRCP10ISR13_CP3_INT_MASK)

#define MSCM_IRCP10ISR13_CP4_INT_MASK            (0x10U)
#define MSCM_IRCP10ISR13_CP4_INT_SHIFT           (4U)
#define MSCM_IRCP10ISR13_CP4_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR13_CP4_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR13_CP4_INT_SHIFT)) & MSCM_IRCP10ISR13_CP4_INT_MASK)

#define MSCM_IRCP10ISR13_CP5_INT_MASK            (0x20U)
#define MSCM_IRCP10ISR13_CP5_INT_SHIFT           (5U)
#define MSCM_IRCP10ISR13_CP5_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR13_CP5_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR13_CP5_INT_SHIFT)) & MSCM_IRCP10ISR13_CP5_INT_MASK)

#define MSCM_IRCP10ISR13_CP6_INT_MASK            (0x40U)
#define MSCM_IRCP10ISR13_CP6_INT_SHIFT           (6U)
#define MSCM_IRCP10ISR13_CP6_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR13_CP6_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR13_CP6_INT_SHIFT)) & MSCM_IRCP10ISR13_CP6_INT_MASK)

#define MSCM_IRCP10ISR13_CP7_INT_MASK            (0x80U)
#define MSCM_IRCP10ISR13_CP7_INT_SHIFT           (7U)
#define MSCM_IRCP10ISR13_CP7_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR13_CP7_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR13_CP7_INT_SHIFT)) & MSCM_IRCP10ISR13_CP7_INT_MASK)

#define MSCM_IRCP10ISR13_CP8_INT_MASK            (0x100U)
#define MSCM_IRCP10ISR13_CP8_INT_SHIFT           (8U)
#define MSCM_IRCP10ISR13_CP8_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR13_CP8_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR13_CP8_INT_SHIFT)) & MSCM_IRCP10ISR13_CP8_INT_MASK)

#define MSCM_IRCP10ISR13_CP9_INT_MASK            (0x200U)
#define MSCM_IRCP10ISR13_CP9_INT_SHIFT           (9U)
#define MSCM_IRCP10ISR13_CP9_INT_WIDTH           (1U)
#define MSCM_IRCP10ISR13_CP9_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR13_CP9_INT_SHIFT)) & MSCM_IRCP10ISR13_CP9_INT_MASK)

#define MSCM_IRCP10ISR13_CP10_INT_MASK           (0x400U)
#define MSCM_IRCP10ISR13_CP10_INT_SHIFT          (10U)
#define MSCM_IRCP10ISR13_CP10_INT_WIDTH          (1U)
#define MSCM_IRCP10ISR13_CP10_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR13_CP10_INT_SHIFT)) & MSCM_IRCP10ISR13_CP10_INT_MASK)

#define MSCM_IRCP10ISR13_CP11_INT_MASK           (0x800U)
#define MSCM_IRCP10ISR13_CP11_INT_SHIFT          (11U)
#define MSCM_IRCP10ISR13_CP11_INT_WIDTH          (1U)
#define MSCM_IRCP10ISR13_CP11_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10ISR13_CP11_INT_SHIFT)) & MSCM_IRCP10ISR13_CP11_INT_MASK)
/*! @} */

/*! @name IRCP10IGR13 - Interrupt Router CP10 Interrupt13 Generation Register */
/*! @{ */

#define MSCM_IRCP10IGR13_INT_EN_MASK             (0x1U)
#define MSCM_IRCP10IGR13_INT_EN_SHIFT            (0U)
#define MSCM_IRCP10IGR13_INT_EN_WIDTH            (1U)
#define MSCM_IRCP10IGR13_INT_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP10IGR13_INT_EN_SHIFT)) & MSCM_IRCP10IGR13_INT_EN_MASK)
/*! @} */

/*! @name IRCP11ISR0 - Interrupt Router CP11 Interrupt0 Status Register */
/*! @{ */

#define MSCM_IRCP11ISR0_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP11ISR0_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP11ISR0_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR0_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR0_CP0_INT_SHIFT)) & MSCM_IRCP11ISR0_CP0_INT_MASK)

#define MSCM_IRCP11ISR0_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP11ISR0_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP11ISR0_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR0_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR0_CP1_INT_SHIFT)) & MSCM_IRCP11ISR0_CP1_INT_MASK)

#define MSCM_IRCP11ISR0_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP11ISR0_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP11ISR0_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR0_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR0_CP2_INT_SHIFT)) & MSCM_IRCP11ISR0_CP2_INT_MASK)

#define MSCM_IRCP11ISR0_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP11ISR0_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP11ISR0_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR0_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR0_CP3_INT_SHIFT)) & MSCM_IRCP11ISR0_CP3_INT_MASK)

#define MSCM_IRCP11ISR0_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP11ISR0_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP11ISR0_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR0_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR0_CP4_INT_SHIFT)) & MSCM_IRCP11ISR0_CP4_INT_MASK)

#define MSCM_IRCP11ISR0_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP11ISR0_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP11ISR0_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR0_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR0_CP5_INT_SHIFT)) & MSCM_IRCP11ISR0_CP5_INT_MASK)

#define MSCM_IRCP11ISR0_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP11ISR0_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP11ISR0_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR0_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR0_CP6_INT_SHIFT)) & MSCM_IRCP11ISR0_CP6_INT_MASK)

#define MSCM_IRCP11ISR0_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP11ISR0_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP11ISR0_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR0_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR0_CP7_INT_SHIFT)) & MSCM_IRCP11ISR0_CP7_INT_MASK)

#define MSCM_IRCP11ISR0_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP11ISR0_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP11ISR0_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR0_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR0_CP8_INT_SHIFT)) & MSCM_IRCP11ISR0_CP8_INT_MASK)

#define MSCM_IRCP11ISR0_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP11ISR0_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP11ISR0_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR0_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR0_CP9_INT_SHIFT)) & MSCM_IRCP11ISR0_CP9_INT_MASK)

#define MSCM_IRCP11ISR0_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP11ISR0_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP11ISR0_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR0_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR0_CP10_INT_SHIFT)) & MSCM_IRCP11ISR0_CP10_INT_MASK)

#define MSCM_IRCP11ISR0_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP11ISR0_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP11ISR0_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR0_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR0_CP11_INT_SHIFT)) & MSCM_IRCP11ISR0_CP11_INT_MASK)
/*! @} */

/*! @name IRCP11IGR0 - Interrupt Router CP11 Interrupt0 Generation Register */
/*! @{ */

#define MSCM_IRCP11IGR0_INT_EN_MASK              (0x1U)
#define MSCM_IRCP11IGR0_INT_EN_SHIFT             (0U)
#define MSCM_IRCP11IGR0_INT_EN_WIDTH             (1U)
#define MSCM_IRCP11IGR0_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR0_INT_EN_SHIFT)) & MSCM_IRCP11IGR0_INT_EN_MASK)
/*! @} */

/*! @name IRCP11ISR1 - Interrupt Router CP11 Interrupt1 Status Register */
/*! @{ */

#define MSCM_IRCP11ISR1_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP11ISR1_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP11ISR1_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR1_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR1_CP0_INT_SHIFT)) & MSCM_IRCP11ISR1_CP0_INT_MASK)

#define MSCM_IRCP11ISR1_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP11ISR1_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP11ISR1_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR1_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR1_CP1_INT_SHIFT)) & MSCM_IRCP11ISR1_CP1_INT_MASK)

#define MSCM_IRCP11ISR1_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP11ISR1_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP11ISR1_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR1_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR1_CP2_INT_SHIFT)) & MSCM_IRCP11ISR1_CP2_INT_MASK)

#define MSCM_IRCP11ISR1_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP11ISR1_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP11ISR1_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR1_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR1_CP3_INT_SHIFT)) & MSCM_IRCP11ISR1_CP3_INT_MASK)

#define MSCM_IRCP11ISR1_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP11ISR1_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP11ISR1_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR1_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR1_CP4_INT_SHIFT)) & MSCM_IRCP11ISR1_CP4_INT_MASK)

#define MSCM_IRCP11ISR1_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP11ISR1_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP11ISR1_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR1_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR1_CP5_INT_SHIFT)) & MSCM_IRCP11ISR1_CP5_INT_MASK)

#define MSCM_IRCP11ISR1_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP11ISR1_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP11ISR1_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR1_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR1_CP6_INT_SHIFT)) & MSCM_IRCP11ISR1_CP6_INT_MASK)

#define MSCM_IRCP11ISR1_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP11ISR1_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP11ISR1_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR1_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR1_CP7_INT_SHIFT)) & MSCM_IRCP11ISR1_CP7_INT_MASK)

#define MSCM_IRCP11ISR1_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP11ISR1_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP11ISR1_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR1_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR1_CP8_INT_SHIFT)) & MSCM_IRCP11ISR1_CP8_INT_MASK)

#define MSCM_IRCP11ISR1_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP11ISR1_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP11ISR1_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR1_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR1_CP9_INT_SHIFT)) & MSCM_IRCP11ISR1_CP9_INT_MASK)

#define MSCM_IRCP11ISR1_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP11ISR1_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP11ISR1_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR1_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR1_CP10_INT_SHIFT)) & MSCM_IRCP11ISR1_CP10_INT_MASK)

#define MSCM_IRCP11ISR1_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP11ISR1_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP11ISR1_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR1_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR1_CP11_INT_SHIFT)) & MSCM_IRCP11ISR1_CP11_INT_MASK)
/*! @} */

/*! @name IRCP11IGR1 - Interrupt Router CP11 Interrupt1 Generation Register */
/*! @{ */

#define MSCM_IRCP11IGR1_INT_EN_MASK              (0x1U)
#define MSCM_IRCP11IGR1_INT_EN_SHIFT             (0U)
#define MSCM_IRCP11IGR1_INT_EN_WIDTH             (1U)
#define MSCM_IRCP11IGR1_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR1_INT_EN_SHIFT)) & MSCM_IRCP11IGR1_INT_EN_MASK)
/*! @} */

/*! @name IRCP11ISR2 - Interrupt Router CP11 Interrupt2 Status Register */
/*! @{ */

#define MSCM_IRCP11ISR2_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP11ISR2_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP11ISR2_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR2_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR2_CP0_INT_SHIFT)) & MSCM_IRCP11ISR2_CP0_INT_MASK)

#define MSCM_IRCP11ISR2_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP11ISR2_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP11ISR2_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR2_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR2_CP1_INT_SHIFT)) & MSCM_IRCP11ISR2_CP1_INT_MASK)

#define MSCM_IRCP11ISR2_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP11ISR2_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP11ISR2_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR2_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR2_CP2_INT_SHIFT)) & MSCM_IRCP11ISR2_CP2_INT_MASK)

#define MSCM_IRCP11ISR2_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP11ISR2_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP11ISR2_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR2_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR2_CP3_INT_SHIFT)) & MSCM_IRCP11ISR2_CP3_INT_MASK)

#define MSCM_IRCP11ISR2_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP11ISR2_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP11ISR2_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR2_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR2_CP4_INT_SHIFT)) & MSCM_IRCP11ISR2_CP4_INT_MASK)

#define MSCM_IRCP11ISR2_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP11ISR2_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP11ISR2_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR2_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR2_CP5_INT_SHIFT)) & MSCM_IRCP11ISR2_CP5_INT_MASK)

#define MSCM_IRCP11ISR2_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP11ISR2_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP11ISR2_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR2_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR2_CP6_INT_SHIFT)) & MSCM_IRCP11ISR2_CP6_INT_MASK)

#define MSCM_IRCP11ISR2_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP11ISR2_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP11ISR2_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR2_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR2_CP7_INT_SHIFT)) & MSCM_IRCP11ISR2_CP7_INT_MASK)

#define MSCM_IRCP11ISR2_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP11ISR2_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP11ISR2_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR2_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR2_CP8_INT_SHIFT)) & MSCM_IRCP11ISR2_CP8_INT_MASK)

#define MSCM_IRCP11ISR2_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP11ISR2_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP11ISR2_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR2_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR2_CP9_INT_SHIFT)) & MSCM_IRCP11ISR2_CP9_INT_MASK)

#define MSCM_IRCP11ISR2_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP11ISR2_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP11ISR2_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR2_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR2_CP10_INT_SHIFT)) & MSCM_IRCP11ISR2_CP10_INT_MASK)

#define MSCM_IRCP11ISR2_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP11ISR2_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP11ISR2_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR2_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR2_CP11_INT_SHIFT)) & MSCM_IRCP11ISR2_CP11_INT_MASK)
/*! @} */

/*! @name IRCP11IGR2 - Interrupt Router CP11 Interrupt2 Generation Register */
/*! @{ */

#define MSCM_IRCP11IGR2_INT_EN_MASK              (0x1U)
#define MSCM_IRCP11IGR2_INT_EN_SHIFT             (0U)
#define MSCM_IRCP11IGR2_INT_EN_WIDTH             (1U)
#define MSCM_IRCP11IGR2_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR2_INT_EN_SHIFT)) & MSCM_IRCP11IGR2_INT_EN_MASK)
/*! @} */

/*! @name IRCP11ISR3 - Interrupt Router CP11 Interrupt3 Status Register */
/*! @{ */

#define MSCM_IRCP11ISR3_PCIE_INT0_MASK           (0x1U)
#define MSCM_IRCP11ISR3_PCIE_INT0_SHIFT          (0U)
#define MSCM_IRCP11ISR3_PCIE_INT0_WIDTH          (1U)
#define MSCM_IRCP11ISR3_PCIE_INT0(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT0_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT0_MASK)

#define MSCM_IRCP11ISR3_PCIE_INT1_MASK           (0x2U)
#define MSCM_IRCP11ISR3_PCIE_INT1_SHIFT          (1U)
#define MSCM_IRCP11ISR3_PCIE_INT1_WIDTH          (1U)
#define MSCM_IRCP11ISR3_PCIE_INT1(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT1_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT1_MASK)

#define MSCM_IRCP11ISR3_PCIE_INT2_MASK           (0x4U)
#define MSCM_IRCP11ISR3_PCIE_INT2_SHIFT          (2U)
#define MSCM_IRCP11ISR3_PCIE_INT2_WIDTH          (1U)
#define MSCM_IRCP11ISR3_PCIE_INT2(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT2_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT2_MASK)

#define MSCM_IRCP11ISR3_PCIE_INT3_MASK           (0x8U)
#define MSCM_IRCP11ISR3_PCIE_INT3_SHIFT          (3U)
#define MSCM_IRCP11ISR3_PCIE_INT3_WIDTH          (1U)
#define MSCM_IRCP11ISR3_PCIE_INT3(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT3_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT3_MASK)

#define MSCM_IRCP11ISR3_PCIE_INT4_MASK           (0x10U)
#define MSCM_IRCP11ISR3_PCIE_INT4_SHIFT          (4U)
#define MSCM_IRCP11ISR3_PCIE_INT4_WIDTH          (1U)
#define MSCM_IRCP11ISR3_PCIE_INT4(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT4_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT4_MASK)

#define MSCM_IRCP11ISR3_PCIE_INT5_MASK           (0x20U)
#define MSCM_IRCP11ISR3_PCIE_INT5_SHIFT          (5U)
#define MSCM_IRCP11ISR3_PCIE_INT5_WIDTH          (1U)
#define MSCM_IRCP11ISR3_PCIE_INT5(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT5_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT5_MASK)

#define MSCM_IRCP11ISR3_PCIE_INT6_MASK           (0x40U)
#define MSCM_IRCP11ISR3_PCIE_INT6_SHIFT          (6U)
#define MSCM_IRCP11ISR3_PCIE_INT6_WIDTH          (1U)
#define MSCM_IRCP11ISR3_PCIE_INT6(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT6_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT6_MASK)

#define MSCM_IRCP11ISR3_PCIE_INT7_MASK           (0x80U)
#define MSCM_IRCP11ISR3_PCIE_INT7_SHIFT          (7U)
#define MSCM_IRCP11ISR3_PCIE_INT7_WIDTH          (1U)
#define MSCM_IRCP11ISR3_PCIE_INT7(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT7_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT7_MASK)

#define MSCM_IRCP11ISR3_PCIE_INT8_MASK           (0x100U)
#define MSCM_IRCP11ISR3_PCIE_INT8_SHIFT          (8U)
#define MSCM_IRCP11ISR3_PCIE_INT8_WIDTH          (1U)
#define MSCM_IRCP11ISR3_PCIE_INT8(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT8_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT8_MASK)

#define MSCM_IRCP11ISR3_PCIE_INT9_MASK           (0x200U)
#define MSCM_IRCP11ISR3_PCIE_INT9_SHIFT          (9U)
#define MSCM_IRCP11ISR3_PCIE_INT9_WIDTH          (1U)
#define MSCM_IRCP11ISR3_PCIE_INT9(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT9_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT9_MASK)

#define MSCM_IRCP11ISR3_PCIE_INT10_MASK          (0x400U)
#define MSCM_IRCP11ISR3_PCIE_INT10_SHIFT         (10U)
#define MSCM_IRCP11ISR3_PCIE_INT10_WIDTH         (1U)
#define MSCM_IRCP11ISR3_PCIE_INT10(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT10_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT10_MASK)

#define MSCM_IRCP11ISR3_PCIE_INT11_MASK          (0x800U)
#define MSCM_IRCP11ISR3_PCIE_INT11_SHIFT         (11U)
#define MSCM_IRCP11ISR3_PCIE_INT11_WIDTH         (1U)
#define MSCM_IRCP11ISR3_PCIE_INT11(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT11_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT11_MASK)

#define MSCM_IRCP11ISR3_PCIE_INT12_MASK          (0x1000U)
#define MSCM_IRCP11ISR3_PCIE_INT12_SHIFT         (12U)
#define MSCM_IRCP11ISR3_PCIE_INT12_WIDTH         (1U)
#define MSCM_IRCP11ISR3_PCIE_INT12(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT12_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT12_MASK)

#define MSCM_IRCP11ISR3_PCIE_INT13_MASK          (0x2000U)
#define MSCM_IRCP11ISR3_PCIE_INT13_SHIFT         (13U)
#define MSCM_IRCP11ISR3_PCIE_INT13_WIDTH         (1U)
#define MSCM_IRCP11ISR3_PCIE_INT13(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT13_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT13_MASK)

#define MSCM_IRCP11ISR3_PCIE_INT14_MASK          (0x4000U)
#define MSCM_IRCP11ISR3_PCIE_INT14_SHIFT         (14U)
#define MSCM_IRCP11ISR3_PCIE_INT14_WIDTH         (1U)
#define MSCM_IRCP11ISR3_PCIE_INT14(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT14_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT14_MASK)

#define MSCM_IRCP11ISR3_PCIE_INT15_MASK          (0x8000U)
#define MSCM_IRCP11ISR3_PCIE_INT15_SHIFT         (15U)
#define MSCM_IRCP11ISR3_PCIE_INT15_WIDTH         (1U)
#define MSCM_IRCP11ISR3_PCIE_INT15(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR3_PCIE_INT15_SHIFT)) & MSCM_IRCP11ISR3_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP11IGR3 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP11IGR3_INT0_EN_MASK             (0x1U)
#define MSCM_IRCP11IGR3_INT0_EN_SHIFT            (0U)
#define MSCM_IRCP11IGR3_INT0_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR3_INT0_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT0_EN_SHIFT)) & MSCM_IRCP11IGR3_INT0_EN_MASK)

#define MSCM_IRCP11IGR3_INT1_EN_MASK             (0x2U)
#define MSCM_IRCP11IGR3_INT1_EN_SHIFT            (1U)
#define MSCM_IRCP11IGR3_INT1_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR3_INT1_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT1_EN_SHIFT)) & MSCM_IRCP11IGR3_INT1_EN_MASK)

#define MSCM_IRCP11IGR3_INT2_EN_MASK             (0x4U)
#define MSCM_IRCP11IGR3_INT2_EN_SHIFT            (2U)
#define MSCM_IRCP11IGR3_INT2_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR3_INT2_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT2_EN_SHIFT)) & MSCM_IRCP11IGR3_INT2_EN_MASK)

#define MSCM_IRCP11IGR3_INT3_EN_MASK             (0x8U)
#define MSCM_IRCP11IGR3_INT3_EN_SHIFT            (3U)
#define MSCM_IRCP11IGR3_INT3_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR3_INT3_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT3_EN_SHIFT)) & MSCM_IRCP11IGR3_INT3_EN_MASK)

#define MSCM_IRCP11IGR3_INT4_EN_MASK             (0x10U)
#define MSCM_IRCP11IGR3_INT4_EN_SHIFT            (4U)
#define MSCM_IRCP11IGR3_INT4_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR3_INT4_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT4_EN_SHIFT)) & MSCM_IRCP11IGR3_INT4_EN_MASK)

#define MSCM_IRCP11IGR3_INT5_EN_MASK             (0x20U)
#define MSCM_IRCP11IGR3_INT5_EN_SHIFT            (5U)
#define MSCM_IRCP11IGR3_INT5_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR3_INT5_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT5_EN_SHIFT)) & MSCM_IRCP11IGR3_INT5_EN_MASK)

#define MSCM_IRCP11IGR3_INT6_EN_MASK             (0x40U)
#define MSCM_IRCP11IGR3_INT6_EN_SHIFT            (6U)
#define MSCM_IRCP11IGR3_INT6_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR3_INT6_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT6_EN_SHIFT)) & MSCM_IRCP11IGR3_INT6_EN_MASK)

#define MSCM_IRCP11IGR3_INT7_EN_MASK             (0x80U)
#define MSCM_IRCP11IGR3_INT7_EN_SHIFT            (7U)
#define MSCM_IRCP11IGR3_INT7_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR3_INT7_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT7_EN_SHIFT)) & MSCM_IRCP11IGR3_INT7_EN_MASK)

#define MSCM_IRCP11IGR3_INT8_EN_MASK             (0x100U)
#define MSCM_IRCP11IGR3_INT8_EN_SHIFT            (8U)
#define MSCM_IRCP11IGR3_INT8_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR3_INT8_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT8_EN_SHIFT)) & MSCM_IRCP11IGR3_INT8_EN_MASK)

#define MSCM_IRCP11IGR3_INT9_EN_MASK             (0x200U)
#define MSCM_IRCP11IGR3_INT9_EN_SHIFT            (9U)
#define MSCM_IRCP11IGR3_INT9_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR3_INT9_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT9_EN_SHIFT)) & MSCM_IRCP11IGR3_INT9_EN_MASK)

#define MSCM_IRCP11IGR3_INT10_EN_MASK            (0x400U)
#define MSCM_IRCP11IGR3_INT10_EN_SHIFT           (10U)
#define MSCM_IRCP11IGR3_INT10_EN_WIDTH           (1U)
#define MSCM_IRCP11IGR3_INT10_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT10_EN_SHIFT)) & MSCM_IRCP11IGR3_INT10_EN_MASK)

#define MSCM_IRCP11IGR3_INT11_EN_MASK            (0x800U)
#define MSCM_IRCP11IGR3_INT11_EN_SHIFT           (11U)
#define MSCM_IRCP11IGR3_INT11_EN_WIDTH           (1U)
#define MSCM_IRCP11IGR3_INT11_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT11_EN_SHIFT)) & MSCM_IRCP11IGR3_INT11_EN_MASK)

#define MSCM_IRCP11IGR3_INT12_EN_MASK            (0x1000U)
#define MSCM_IRCP11IGR3_INT12_EN_SHIFT           (12U)
#define MSCM_IRCP11IGR3_INT12_EN_WIDTH           (1U)
#define MSCM_IRCP11IGR3_INT12_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT12_EN_SHIFT)) & MSCM_IRCP11IGR3_INT12_EN_MASK)

#define MSCM_IRCP11IGR3_INT13_EN_MASK            (0x2000U)
#define MSCM_IRCP11IGR3_INT13_EN_SHIFT           (13U)
#define MSCM_IRCP11IGR3_INT13_EN_WIDTH           (1U)
#define MSCM_IRCP11IGR3_INT13_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT13_EN_SHIFT)) & MSCM_IRCP11IGR3_INT13_EN_MASK)

#define MSCM_IRCP11IGR3_INT14_EN_MASK            (0x4000U)
#define MSCM_IRCP11IGR3_INT14_EN_SHIFT           (14U)
#define MSCM_IRCP11IGR3_INT14_EN_WIDTH           (1U)
#define MSCM_IRCP11IGR3_INT14_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT14_EN_SHIFT)) & MSCM_IRCP11IGR3_INT14_EN_MASK)

#define MSCM_IRCP11IGR3_INT15_EN_MASK            (0x8000U)
#define MSCM_IRCP11IGR3_INT15_EN_SHIFT           (15U)
#define MSCM_IRCP11IGR3_INT15_EN_WIDTH           (1U)
#define MSCM_IRCP11IGR3_INT15_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR3_INT15_EN_SHIFT)) & MSCM_IRCP11IGR3_INT15_EN_MASK)
/*! @} */

/*! @name IRCP11ISR4 - Interrupt Router CP11 Interrupt4 Status Register */
/*! @{ */

#define MSCM_IRCP11ISR4_PCIE_INT0_MASK           (0x1U)
#define MSCM_IRCP11ISR4_PCIE_INT0_SHIFT          (0U)
#define MSCM_IRCP11ISR4_PCIE_INT0_WIDTH          (1U)
#define MSCM_IRCP11ISR4_PCIE_INT0(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT0_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT0_MASK)

#define MSCM_IRCP11ISR4_PCIE_INT1_MASK           (0x2U)
#define MSCM_IRCP11ISR4_PCIE_INT1_SHIFT          (1U)
#define MSCM_IRCP11ISR4_PCIE_INT1_WIDTH          (1U)
#define MSCM_IRCP11ISR4_PCIE_INT1(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT1_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT1_MASK)

#define MSCM_IRCP11ISR4_PCIE_INT2_MASK           (0x4U)
#define MSCM_IRCP11ISR4_PCIE_INT2_SHIFT          (2U)
#define MSCM_IRCP11ISR4_PCIE_INT2_WIDTH          (1U)
#define MSCM_IRCP11ISR4_PCIE_INT2(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT2_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT2_MASK)

#define MSCM_IRCP11ISR4_PCIE_INT3_MASK           (0x8U)
#define MSCM_IRCP11ISR4_PCIE_INT3_SHIFT          (3U)
#define MSCM_IRCP11ISR4_PCIE_INT3_WIDTH          (1U)
#define MSCM_IRCP11ISR4_PCIE_INT3(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT3_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT3_MASK)

#define MSCM_IRCP11ISR4_PCIE_INT4_MASK           (0x10U)
#define MSCM_IRCP11ISR4_PCIE_INT4_SHIFT          (4U)
#define MSCM_IRCP11ISR4_PCIE_INT4_WIDTH          (1U)
#define MSCM_IRCP11ISR4_PCIE_INT4(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT4_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT4_MASK)

#define MSCM_IRCP11ISR4_PCIE_INT5_MASK           (0x20U)
#define MSCM_IRCP11ISR4_PCIE_INT5_SHIFT          (5U)
#define MSCM_IRCP11ISR4_PCIE_INT5_WIDTH          (1U)
#define MSCM_IRCP11ISR4_PCIE_INT5(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT5_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT5_MASK)

#define MSCM_IRCP11ISR4_PCIE_INT6_MASK           (0x40U)
#define MSCM_IRCP11ISR4_PCIE_INT6_SHIFT          (6U)
#define MSCM_IRCP11ISR4_PCIE_INT6_WIDTH          (1U)
#define MSCM_IRCP11ISR4_PCIE_INT6(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT6_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT6_MASK)

#define MSCM_IRCP11ISR4_PCIE_INT7_MASK           (0x80U)
#define MSCM_IRCP11ISR4_PCIE_INT7_SHIFT          (7U)
#define MSCM_IRCP11ISR4_PCIE_INT7_WIDTH          (1U)
#define MSCM_IRCP11ISR4_PCIE_INT7(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT7_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT7_MASK)

#define MSCM_IRCP11ISR4_PCIE_INT8_MASK           (0x100U)
#define MSCM_IRCP11ISR4_PCIE_INT8_SHIFT          (8U)
#define MSCM_IRCP11ISR4_PCIE_INT8_WIDTH          (1U)
#define MSCM_IRCP11ISR4_PCIE_INT8(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT8_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT8_MASK)

#define MSCM_IRCP11ISR4_PCIE_INT9_MASK           (0x200U)
#define MSCM_IRCP11ISR4_PCIE_INT9_SHIFT          (9U)
#define MSCM_IRCP11ISR4_PCIE_INT9_WIDTH          (1U)
#define MSCM_IRCP11ISR4_PCIE_INT9(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT9_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT9_MASK)

#define MSCM_IRCP11ISR4_PCIE_INT10_MASK          (0x400U)
#define MSCM_IRCP11ISR4_PCIE_INT10_SHIFT         (10U)
#define MSCM_IRCP11ISR4_PCIE_INT10_WIDTH         (1U)
#define MSCM_IRCP11ISR4_PCIE_INT10(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT10_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT10_MASK)

#define MSCM_IRCP11ISR4_PCIE_INT11_MASK          (0x800U)
#define MSCM_IRCP11ISR4_PCIE_INT11_SHIFT         (11U)
#define MSCM_IRCP11ISR4_PCIE_INT11_WIDTH         (1U)
#define MSCM_IRCP11ISR4_PCIE_INT11(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT11_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT11_MASK)

#define MSCM_IRCP11ISR4_PCIE_INT12_MASK          (0x1000U)
#define MSCM_IRCP11ISR4_PCIE_INT12_SHIFT         (12U)
#define MSCM_IRCP11ISR4_PCIE_INT12_WIDTH         (1U)
#define MSCM_IRCP11ISR4_PCIE_INT12(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT12_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT12_MASK)

#define MSCM_IRCP11ISR4_PCIE_INT13_MASK          (0x2000U)
#define MSCM_IRCP11ISR4_PCIE_INT13_SHIFT         (13U)
#define MSCM_IRCP11ISR4_PCIE_INT13_WIDTH         (1U)
#define MSCM_IRCP11ISR4_PCIE_INT13(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT13_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT13_MASK)

#define MSCM_IRCP11ISR4_PCIE_INT14_MASK          (0x4000U)
#define MSCM_IRCP11ISR4_PCIE_INT14_SHIFT         (14U)
#define MSCM_IRCP11ISR4_PCIE_INT14_WIDTH         (1U)
#define MSCM_IRCP11ISR4_PCIE_INT14(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT14_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT14_MASK)

#define MSCM_IRCP11ISR4_PCIE_INT15_MASK          (0x8000U)
#define MSCM_IRCP11ISR4_PCIE_INT15_SHIFT         (15U)
#define MSCM_IRCP11ISR4_PCIE_INT15_WIDTH         (1U)
#define MSCM_IRCP11ISR4_PCIE_INT15(x)            (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR4_PCIE_INT15_SHIFT)) & MSCM_IRCP11ISR4_PCIE_INT15_MASK)
/*! @} */

/*! @name IRCP11IGR4 - Interrupt Router CPn Interruptx Generation Register */
/*! @{ */

#define MSCM_IRCP11IGR4_INT0_EN_MASK             (0x1U)
#define MSCM_IRCP11IGR4_INT0_EN_SHIFT            (0U)
#define MSCM_IRCP11IGR4_INT0_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR4_INT0_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT0_EN_SHIFT)) & MSCM_IRCP11IGR4_INT0_EN_MASK)

#define MSCM_IRCP11IGR4_INT1_EN_MASK             (0x2U)
#define MSCM_IRCP11IGR4_INT1_EN_SHIFT            (1U)
#define MSCM_IRCP11IGR4_INT1_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR4_INT1_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT1_EN_SHIFT)) & MSCM_IRCP11IGR4_INT1_EN_MASK)

#define MSCM_IRCP11IGR4_INT2_EN_MASK             (0x4U)
#define MSCM_IRCP11IGR4_INT2_EN_SHIFT            (2U)
#define MSCM_IRCP11IGR4_INT2_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR4_INT2_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT2_EN_SHIFT)) & MSCM_IRCP11IGR4_INT2_EN_MASK)

#define MSCM_IRCP11IGR4_INT3_EN_MASK             (0x8U)
#define MSCM_IRCP11IGR4_INT3_EN_SHIFT            (3U)
#define MSCM_IRCP11IGR4_INT3_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR4_INT3_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT3_EN_SHIFT)) & MSCM_IRCP11IGR4_INT3_EN_MASK)

#define MSCM_IRCP11IGR4_INT4_EN_MASK             (0x10U)
#define MSCM_IRCP11IGR4_INT4_EN_SHIFT            (4U)
#define MSCM_IRCP11IGR4_INT4_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR4_INT4_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT4_EN_SHIFT)) & MSCM_IRCP11IGR4_INT4_EN_MASK)

#define MSCM_IRCP11IGR4_INT5_EN_MASK             (0x20U)
#define MSCM_IRCP11IGR4_INT5_EN_SHIFT            (5U)
#define MSCM_IRCP11IGR4_INT5_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR4_INT5_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT5_EN_SHIFT)) & MSCM_IRCP11IGR4_INT5_EN_MASK)

#define MSCM_IRCP11IGR4_INT6_EN_MASK             (0x40U)
#define MSCM_IRCP11IGR4_INT6_EN_SHIFT            (6U)
#define MSCM_IRCP11IGR4_INT6_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR4_INT6_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT6_EN_SHIFT)) & MSCM_IRCP11IGR4_INT6_EN_MASK)

#define MSCM_IRCP11IGR4_INT7_EN_MASK             (0x80U)
#define MSCM_IRCP11IGR4_INT7_EN_SHIFT            (7U)
#define MSCM_IRCP11IGR4_INT7_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR4_INT7_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT7_EN_SHIFT)) & MSCM_IRCP11IGR4_INT7_EN_MASK)

#define MSCM_IRCP11IGR4_INT8_EN_MASK             (0x100U)
#define MSCM_IRCP11IGR4_INT8_EN_SHIFT            (8U)
#define MSCM_IRCP11IGR4_INT8_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR4_INT8_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT8_EN_SHIFT)) & MSCM_IRCP11IGR4_INT8_EN_MASK)

#define MSCM_IRCP11IGR4_INT9_EN_MASK             (0x200U)
#define MSCM_IRCP11IGR4_INT9_EN_SHIFT            (9U)
#define MSCM_IRCP11IGR4_INT9_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR4_INT9_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT9_EN_SHIFT)) & MSCM_IRCP11IGR4_INT9_EN_MASK)

#define MSCM_IRCP11IGR4_INT10_EN_MASK            (0x400U)
#define MSCM_IRCP11IGR4_INT10_EN_SHIFT           (10U)
#define MSCM_IRCP11IGR4_INT10_EN_WIDTH           (1U)
#define MSCM_IRCP11IGR4_INT10_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT10_EN_SHIFT)) & MSCM_IRCP11IGR4_INT10_EN_MASK)

#define MSCM_IRCP11IGR4_INT11_EN_MASK            (0x800U)
#define MSCM_IRCP11IGR4_INT11_EN_SHIFT           (11U)
#define MSCM_IRCP11IGR4_INT11_EN_WIDTH           (1U)
#define MSCM_IRCP11IGR4_INT11_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT11_EN_SHIFT)) & MSCM_IRCP11IGR4_INT11_EN_MASK)

#define MSCM_IRCP11IGR4_INT12_EN_MASK            (0x1000U)
#define MSCM_IRCP11IGR4_INT12_EN_SHIFT           (12U)
#define MSCM_IRCP11IGR4_INT12_EN_WIDTH           (1U)
#define MSCM_IRCP11IGR4_INT12_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT12_EN_SHIFT)) & MSCM_IRCP11IGR4_INT12_EN_MASK)

#define MSCM_IRCP11IGR4_INT13_EN_MASK            (0x2000U)
#define MSCM_IRCP11IGR4_INT13_EN_SHIFT           (13U)
#define MSCM_IRCP11IGR4_INT13_EN_WIDTH           (1U)
#define MSCM_IRCP11IGR4_INT13_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT13_EN_SHIFT)) & MSCM_IRCP11IGR4_INT13_EN_MASK)

#define MSCM_IRCP11IGR4_INT14_EN_MASK            (0x4000U)
#define MSCM_IRCP11IGR4_INT14_EN_SHIFT           (14U)
#define MSCM_IRCP11IGR4_INT14_EN_WIDTH           (1U)
#define MSCM_IRCP11IGR4_INT14_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT14_EN_SHIFT)) & MSCM_IRCP11IGR4_INT14_EN_MASK)

#define MSCM_IRCP11IGR4_INT15_EN_MASK            (0x8000U)
#define MSCM_IRCP11IGR4_INT15_EN_SHIFT           (15U)
#define MSCM_IRCP11IGR4_INT15_EN_WIDTH           (1U)
#define MSCM_IRCP11IGR4_INT15_EN(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR4_INT15_EN_SHIFT)) & MSCM_IRCP11IGR4_INT15_EN_MASK)
/*! @} */

/*! @name IRCP11ISR5 - Interrupt Router CP11 Interrupt5 Status Register */
/*! @{ */

#define MSCM_IRCP11ISR5_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP11ISR5_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP11ISR5_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR5_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR5_CP0_INT_SHIFT)) & MSCM_IRCP11ISR5_CP0_INT_MASK)

#define MSCM_IRCP11ISR5_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP11ISR5_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP11ISR5_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR5_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR5_CP1_INT_SHIFT)) & MSCM_IRCP11ISR5_CP1_INT_MASK)

#define MSCM_IRCP11ISR5_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP11ISR5_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP11ISR5_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR5_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR5_CP2_INT_SHIFT)) & MSCM_IRCP11ISR5_CP2_INT_MASK)

#define MSCM_IRCP11ISR5_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP11ISR5_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP11ISR5_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR5_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR5_CP3_INT_SHIFT)) & MSCM_IRCP11ISR5_CP3_INT_MASK)

#define MSCM_IRCP11ISR5_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP11ISR5_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP11ISR5_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR5_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR5_CP4_INT_SHIFT)) & MSCM_IRCP11ISR5_CP4_INT_MASK)

#define MSCM_IRCP11ISR5_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP11ISR5_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP11ISR5_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR5_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR5_CP5_INT_SHIFT)) & MSCM_IRCP11ISR5_CP5_INT_MASK)

#define MSCM_IRCP11ISR5_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP11ISR5_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP11ISR5_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR5_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR5_CP6_INT_SHIFT)) & MSCM_IRCP11ISR5_CP6_INT_MASK)

#define MSCM_IRCP11ISR5_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP11ISR5_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP11ISR5_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR5_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR5_CP7_INT_SHIFT)) & MSCM_IRCP11ISR5_CP7_INT_MASK)

#define MSCM_IRCP11ISR5_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP11ISR5_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP11ISR5_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR5_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR5_CP8_INT_SHIFT)) & MSCM_IRCP11ISR5_CP8_INT_MASK)

#define MSCM_IRCP11ISR5_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP11ISR5_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP11ISR5_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR5_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR5_CP9_INT_SHIFT)) & MSCM_IRCP11ISR5_CP9_INT_MASK)

#define MSCM_IRCP11ISR5_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP11ISR5_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP11ISR5_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR5_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR5_CP10_INT_SHIFT)) & MSCM_IRCP11ISR5_CP10_INT_MASK)

#define MSCM_IRCP11ISR5_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP11ISR5_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP11ISR5_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR5_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR5_CP11_INT_SHIFT)) & MSCM_IRCP11ISR5_CP11_INT_MASK)
/*! @} */

/*! @name IRCP11IGR5 - Interrupt Router CP11 Interrupt5 Generation Register */
/*! @{ */

#define MSCM_IRCP11IGR5_INT_EN_MASK              (0x1U)
#define MSCM_IRCP11IGR5_INT_EN_SHIFT             (0U)
#define MSCM_IRCP11IGR5_INT_EN_WIDTH             (1U)
#define MSCM_IRCP11IGR5_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR5_INT_EN_SHIFT)) & MSCM_IRCP11IGR5_INT_EN_MASK)
/*! @} */

/*! @name IRCP11ISR6 - Interrupt Router CP11 Interrupt6 Status Register */
/*! @{ */

#define MSCM_IRCP11ISR6_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP11ISR6_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP11ISR6_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR6_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR6_CP0_INT_SHIFT)) & MSCM_IRCP11ISR6_CP0_INT_MASK)

#define MSCM_IRCP11ISR6_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP11ISR6_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP11ISR6_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR6_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR6_CP1_INT_SHIFT)) & MSCM_IRCP11ISR6_CP1_INT_MASK)

#define MSCM_IRCP11ISR6_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP11ISR6_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP11ISR6_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR6_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR6_CP2_INT_SHIFT)) & MSCM_IRCP11ISR6_CP2_INT_MASK)

#define MSCM_IRCP11ISR6_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP11ISR6_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP11ISR6_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR6_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR6_CP3_INT_SHIFT)) & MSCM_IRCP11ISR6_CP3_INT_MASK)

#define MSCM_IRCP11ISR6_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP11ISR6_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP11ISR6_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR6_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR6_CP4_INT_SHIFT)) & MSCM_IRCP11ISR6_CP4_INT_MASK)

#define MSCM_IRCP11ISR6_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP11ISR6_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP11ISR6_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR6_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR6_CP5_INT_SHIFT)) & MSCM_IRCP11ISR6_CP5_INT_MASK)

#define MSCM_IRCP11ISR6_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP11ISR6_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP11ISR6_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR6_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR6_CP6_INT_SHIFT)) & MSCM_IRCP11ISR6_CP6_INT_MASK)

#define MSCM_IRCP11ISR6_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP11ISR6_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP11ISR6_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR6_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR6_CP7_INT_SHIFT)) & MSCM_IRCP11ISR6_CP7_INT_MASK)

#define MSCM_IRCP11ISR6_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP11ISR6_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP11ISR6_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR6_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR6_CP8_INT_SHIFT)) & MSCM_IRCP11ISR6_CP8_INT_MASK)

#define MSCM_IRCP11ISR6_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP11ISR6_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP11ISR6_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR6_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR6_CP9_INT_SHIFT)) & MSCM_IRCP11ISR6_CP9_INT_MASK)

#define MSCM_IRCP11ISR6_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP11ISR6_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP11ISR6_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR6_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR6_CP10_INT_SHIFT)) & MSCM_IRCP11ISR6_CP10_INT_MASK)

#define MSCM_IRCP11ISR6_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP11ISR6_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP11ISR6_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR6_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR6_CP11_INT_SHIFT)) & MSCM_IRCP11ISR6_CP11_INT_MASK)
/*! @} */

/*! @name IRCP11IGR6 - Interrupt Router CP11 Interrupt6 Generation Register */
/*! @{ */

#define MSCM_IRCP11IGR6_INT_EN_MASK              (0x1U)
#define MSCM_IRCP11IGR6_INT_EN_SHIFT             (0U)
#define MSCM_IRCP11IGR6_INT_EN_WIDTH             (1U)
#define MSCM_IRCP11IGR6_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR6_INT_EN_SHIFT)) & MSCM_IRCP11IGR6_INT_EN_MASK)
/*! @} */

/*! @name IRCP11ISR7 - Interrupt Router CP11 Interrupt7 Status Register */
/*! @{ */

#define MSCM_IRCP11ISR7_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP11ISR7_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP11ISR7_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR7_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR7_CP0_INT_SHIFT)) & MSCM_IRCP11ISR7_CP0_INT_MASK)

#define MSCM_IRCP11ISR7_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP11ISR7_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP11ISR7_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR7_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR7_CP1_INT_SHIFT)) & MSCM_IRCP11ISR7_CP1_INT_MASK)

#define MSCM_IRCP11ISR7_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP11ISR7_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP11ISR7_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR7_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR7_CP2_INT_SHIFT)) & MSCM_IRCP11ISR7_CP2_INT_MASK)

#define MSCM_IRCP11ISR7_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP11ISR7_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP11ISR7_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR7_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR7_CP3_INT_SHIFT)) & MSCM_IRCP11ISR7_CP3_INT_MASK)

#define MSCM_IRCP11ISR7_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP11ISR7_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP11ISR7_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR7_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR7_CP4_INT_SHIFT)) & MSCM_IRCP11ISR7_CP4_INT_MASK)

#define MSCM_IRCP11ISR7_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP11ISR7_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP11ISR7_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR7_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR7_CP5_INT_SHIFT)) & MSCM_IRCP11ISR7_CP5_INT_MASK)

#define MSCM_IRCP11ISR7_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP11ISR7_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP11ISR7_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR7_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR7_CP6_INT_SHIFT)) & MSCM_IRCP11ISR7_CP6_INT_MASK)

#define MSCM_IRCP11ISR7_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP11ISR7_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP11ISR7_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR7_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR7_CP7_INT_SHIFT)) & MSCM_IRCP11ISR7_CP7_INT_MASK)

#define MSCM_IRCP11ISR7_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP11ISR7_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP11ISR7_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR7_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR7_CP8_INT_SHIFT)) & MSCM_IRCP11ISR7_CP8_INT_MASK)

#define MSCM_IRCP11ISR7_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP11ISR7_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP11ISR7_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR7_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR7_CP9_INT_SHIFT)) & MSCM_IRCP11ISR7_CP9_INT_MASK)

#define MSCM_IRCP11ISR7_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP11ISR7_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP11ISR7_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR7_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR7_CP10_INT_SHIFT)) & MSCM_IRCP11ISR7_CP10_INT_MASK)

#define MSCM_IRCP11ISR7_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP11ISR7_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP11ISR7_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR7_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR7_CP11_INT_SHIFT)) & MSCM_IRCP11ISR7_CP11_INT_MASK)
/*! @} */

/*! @name IRCP11IGR7 - Interrupt Router CP11 Interrupt7 Generation Register */
/*! @{ */

#define MSCM_IRCP11IGR7_INT_EN_MASK              (0x1U)
#define MSCM_IRCP11IGR7_INT_EN_SHIFT             (0U)
#define MSCM_IRCP11IGR7_INT_EN_WIDTH             (1U)
#define MSCM_IRCP11IGR7_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR7_INT_EN_SHIFT)) & MSCM_IRCP11IGR7_INT_EN_MASK)
/*! @} */

/*! @name IRCP11ISR8 - Interrupt Router CP11 Interrupt8 Status Register */
/*! @{ */

#define MSCM_IRCP11ISR8_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP11ISR8_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP11ISR8_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR8_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR8_CP0_INT_SHIFT)) & MSCM_IRCP11ISR8_CP0_INT_MASK)

#define MSCM_IRCP11ISR8_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP11ISR8_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP11ISR8_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR8_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR8_CP1_INT_SHIFT)) & MSCM_IRCP11ISR8_CP1_INT_MASK)

#define MSCM_IRCP11ISR8_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP11ISR8_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP11ISR8_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR8_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR8_CP2_INT_SHIFT)) & MSCM_IRCP11ISR8_CP2_INT_MASK)

#define MSCM_IRCP11ISR8_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP11ISR8_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP11ISR8_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR8_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR8_CP3_INT_SHIFT)) & MSCM_IRCP11ISR8_CP3_INT_MASK)

#define MSCM_IRCP11ISR8_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP11ISR8_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP11ISR8_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR8_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR8_CP4_INT_SHIFT)) & MSCM_IRCP11ISR8_CP4_INT_MASK)

#define MSCM_IRCP11ISR8_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP11ISR8_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP11ISR8_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR8_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR8_CP5_INT_SHIFT)) & MSCM_IRCP11ISR8_CP5_INT_MASK)

#define MSCM_IRCP11ISR8_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP11ISR8_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP11ISR8_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR8_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR8_CP6_INT_SHIFT)) & MSCM_IRCP11ISR8_CP6_INT_MASK)

#define MSCM_IRCP11ISR8_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP11ISR8_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP11ISR8_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR8_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR8_CP7_INT_SHIFT)) & MSCM_IRCP11ISR8_CP7_INT_MASK)

#define MSCM_IRCP11ISR8_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP11ISR8_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP11ISR8_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR8_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR8_CP8_INT_SHIFT)) & MSCM_IRCP11ISR8_CP8_INT_MASK)

#define MSCM_IRCP11ISR8_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP11ISR8_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP11ISR8_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR8_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR8_CP9_INT_SHIFT)) & MSCM_IRCP11ISR8_CP9_INT_MASK)

#define MSCM_IRCP11ISR8_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP11ISR8_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP11ISR8_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR8_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR8_CP10_INT_SHIFT)) & MSCM_IRCP11ISR8_CP10_INT_MASK)

#define MSCM_IRCP11ISR8_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP11ISR8_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP11ISR8_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR8_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR8_CP11_INT_SHIFT)) & MSCM_IRCP11ISR8_CP11_INT_MASK)
/*! @} */

/*! @name IRCP11IGR8 - Interrupt Router CP11 Interrupt8 Generation Register */
/*! @{ */

#define MSCM_IRCP11IGR8_INT_EN_MASK              (0x1U)
#define MSCM_IRCP11IGR8_INT_EN_SHIFT             (0U)
#define MSCM_IRCP11IGR8_INT_EN_WIDTH             (1U)
#define MSCM_IRCP11IGR8_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR8_INT_EN_SHIFT)) & MSCM_IRCP11IGR8_INT_EN_MASK)
/*! @} */

/*! @name IRCP11ISR9 - Interrupt Router CP11 Interrupt9 Status Register */
/*! @{ */

#define MSCM_IRCP11ISR9_CP0_INT_MASK             (0x1U)
#define MSCM_IRCP11ISR9_CP0_INT_SHIFT            (0U)
#define MSCM_IRCP11ISR9_CP0_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR9_CP0_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR9_CP0_INT_SHIFT)) & MSCM_IRCP11ISR9_CP0_INT_MASK)

#define MSCM_IRCP11ISR9_CP1_INT_MASK             (0x2U)
#define MSCM_IRCP11ISR9_CP1_INT_SHIFT            (1U)
#define MSCM_IRCP11ISR9_CP1_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR9_CP1_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR9_CP1_INT_SHIFT)) & MSCM_IRCP11ISR9_CP1_INT_MASK)

#define MSCM_IRCP11ISR9_CP2_INT_MASK             (0x4U)
#define MSCM_IRCP11ISR9_CP2_INT_SHIFT            (2U)
#define MSCM_IRCP11ISR9_CP2_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR9_CP2_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR9_CP2_INT_SHIFT)) & MSCM_IRCP11ISR9_CP2_INT_MASK)

#define MSCM_IRCP11ISR9_CP3_INT_MASK             (0x8U)
#define MSCM_IRCP11ISR9_CP3_INT_SHIFT            (3U)
#define MSCM_IRCP11ISR9_CP3_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR9_CP3_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR9_CP3_INT_SHIFT)) & MSCM_IRCP11ISR9_CP3_INT_MASK)

#define MSCM_IRCP11ISR9_CP4_INT_MASK             (0x10U)
#define MSCM_IRCP11ISR9_CP4_INT_SHIFT            (4U)
#define MSCM_IRCP11ISR9_CP4_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR9_CP4_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR9_CP4_INT_SHIFT)) & MSCM_IRCP11ISR9_CP4_INT_MASK)

#define MSCM_IRCP11ISR9_CP5_INT_MASK             (0x20U)
#define MSCM_IRCP11ISR9_CP5_INT_SHIFT            (5U)
#define MSCM_IRCP11ISR9_CP5_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR9_CP5_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR9_CP5_INT_SHIFT)) & MSCM_IRCP11ISR9_CP5_INT_MASK)

#define MSCM_IRCP11ISR9_CP6_INT_MASK             (0x40U)
#define MSCM_IRCP11ISR9_CP6_INT_SHIFT            (6U)
#define MSCM_IRCP11ISR9_CP6_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR9_CP6_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR9_CP6_INT_SHIFT)) & MSCM_IRCP11ISR9_CP6_INT_MASK)

#define MSCM_IRCP11ISR9_CP7_INT_MASK             (0x80U)
#define MSCM_IRCP11ISR9_CP7_INT_SHIFT            (7U)
#define MSCM_IRCP11ISR9_CP7_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR9_CP7_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR9_CP7_INT_SHIFT)) & MSCM_IRCP11ISR9_CP7_INT_MASK)

#define MSCM_IRCP11ISR9_CP8_INT_MASK             (0x100U)
#define MSCM_IRCP11ISR9_CP8_INT_SHIFT            (8U)
#define MSCM_IRCP11ISR9_CP8_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR9_CP8_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR9_CP8_INT_SHIFT)) & MSCM_IRCP11ISR9_CP8_INT_MASK)

#define MSCM_IRCP11ISR9_CP9_INT_MASK             (0x200U)
#define MSCM_IRCP11ISR9_CP9_INT_SHIFT            (9U)
#define MSCM_IRCP11ISR9_CP9_INT_WIDTH            (1U)
#define MSCM_IRCP11ISR9_CP9_INT(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR9_CP9_INT_SHIFT)) & MSCM_IRCP11ISR9_CP9_INT_MASK)

#define MSCM_IRCP11ISR9_CP10_INT_MASK            (0x400U)
#define MSCM_IRCP11ISR9_CP10_INT_SHIFT           (10U)
#define MSCM_IRCP11ISR9_CP10_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR9_CP10_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR9_CP10_INT_SHIFT)) & MSCM_IRCP11ISR9_CP10_INT_MASK)

#define MSCM_IRCP11ISR9_CP11_INT_MASK            (0x800U)
#define MSCM_IRCP11ISR9_CP11_INT_SHIFT           (11U)
#define MSCM_IRCP11ISR9_CP11_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR9_CP11_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR9_CP11_INT_SHIFT)) & MSCM_IRCP11ISR9_CP11_INT_MASK)
/*! @} */

/*! @name IRCP11IGR9 - Interrupt Router CP11 Interrupt9 Generation Register */
/*! @{ */

#define MSCM_IRCP11IGR9_INT_EN_MASK              (0x1U)
#define MSCM_IRCP11IGR9_INT_EN_SHIFT             (0U)
#define MSCM_IRCP11IGR9_INT_EN_WIDTH             (1U)
#define MSCM_IRCP11IGR9_INT_EN(x)                (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR9_INT_EN_SHIFT)) & MSCM_IRCP11IGR9_INT_EN_MASK)
/*! @} */

/*! @name IRCP11ISR10 - Interrupt Router CP11 Interrupt10 Status Register */
/*! @{ */

#define MSCM_IRCP11ISR10_CP0_INT_MASK            (0x1U)
#define MSCM_IRCP11ISR10_CP0_INT_SHIFT           (0U)
#define MSCM_IRCP11ISR10_CP0_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR10_CP0_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR10_CP0_INT_SHIFT)) & MSCM_IRCP11ISR10_CP0_INT_MASK)

#define MSCM_IRCP11ISR10_CP1_INT_MASK            (0x2U)
#define MSCM_IRCP11ISR10_CP1_INT_SHIFT           (1U)
#define MSCM_IRCP11ISR10_CP1_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR10_CP1_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR10_CP1_INT_SHIFT)) & MSCM_IRCP11ISR10_CP1_INT_MASK)

#define MSCM_IRCP11ISR10_CP2_INT_MASK            (0x4U)
#define MSCM_IRCP11ISR10_CP2_INT_SHIFT           (2U)
#define MSCM_IRCP11ISR10_CP2_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR10_CP2_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR10_CP2_INT_SHIFT)) & MSCM_IRCP11ISR10_CP2_INT_MASK)

#define MSCM_IRCP11ISR10_CP3_INT_MASK            (0x8U)
#define MSCM_IRCP11ISR10_CP3_INT_SHIFT           (3U)
#define MSCM_IRCP11ISR10_CP3_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR10_CP3_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR10_CP3_INT_SHIFT)) & MSCM_IRCP11ISR10_CP3_INT_MASK)

#define MSCM_IRCP11ISR10_CP4_INT_MASK            (0x10U)
#define MSCM_IRCP11ISR10_CP4_INT_SHIFT           (4U)
#define MSCM_IRCP11ISR10_CP4_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR10_CP4_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR10_CP4_INT_SHIFT)) & MSCM_IRCP11ISR10_CP4_INT_MASK)

#define MSCM_IRCP11ISR10_CP5_INT_MASK            (0x20U)
#define MSCM_IRCP11ISR10_CP5_INT_SHIFT           (5U)
#define MSCM_IRCP11ISR10_CP5_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR10_CP5_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR10_CP5_INT_SHIFT)) & MSCM_IRCP11ISR10_CP5_INT_MASK)

#define MSCM_IRCP11ISR10_CP6_INT_MASK            (0x40U)
#define MSCM_IRCP11ISR10_CP6_INT_SHIFT           (6U)
#define MSCM_IRCP11ISR10_CP6_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR10_CP6_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR10_CP6_INT_SHIFT)) & MSCM_IRCP11ISR10_CP6_INT_MASK)

#define MSCM_IRCP11ISR10_CP7_INT_MASK            (0x80U)
#define MSCM_IRCP11ISR10_CP7_INT_SHIFT           (7U)
#define MSCM_IRCP11ISR10_CP7_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR10_CP7_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR10_CP7_INT_SHIFT)) & MSCM_IRCP11ISR10_CP7_INT_MASK)

#define MSCM_IRCP11ISR10_CP8_INT_MASK            (0x100U)
#define MSCM_IRCP11ISR10_CP8_INT_SHIFT           (8U)
#define MSCM_IRCP11ISR10_CP8_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR10_CP8_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR10_CP8_INT_SHIFT)) & MSCM_IRCP11ISR10_CP8_INT_MASK)

#define MSCM_IRCP11ISR10_CP9_INT_MASK            (0x200U)
#define MSCM_IRCP11ISR10_CP9_INT_SHIFT           (9U)
#define MSCM_IRCP11ISR10_CP9_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR10_CP9_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR10_CP9_INT_SHIFT)) & MSCM_IRCP11ISR10_CP9_INT_MASK)

#define MSCM_IRCP11ISR10_CP10_INT_MASK           (0x400U)
#define MSCM_IRCP11ISR10_CP10_INT_SHIFT          (10U)
#define MSCM_IRCP11ISR10_CP10_INT_WIDTH          (1U)
#define MSCM_IRCP11ISR10_CP10_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR10_CP10_INT_SHIFT)) & MSCM_IRCP11ISR10_CP10_INT_MASK)

#define MSCM_IRCP11ISR10_CP11_INT_MASK           (0x800U)
#define MSCM_IRCP11ISR10_CP11_INT_SHIFT          (11U)
#define MSCM_IRCP11ISR10_CP11_INT_WIDTH          (1U)
#define MSCM_IRCP11ISR10_CP11_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR10_CP11_INT_SHIFT)) & MSCM_IRCP11ISR10_CP11_INT_MASK)
/*! @} */

/*! @name IRCP11IGR10 - Interrupt Router CP11 Interrupt10 Generation Register */
/*! @{ */

#define MSCM_IRCP11IGR10_INT_EN_MASK             (0x1U)
#define MSCM_IRCP11IGR10_INT_EN_SHIFT            (0U)
#define MSCM_IRCP11IGR10_INT_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR10_INT_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR10_INT_EN_SHIFT)) & MSCM_IRCP11IGR10_INT_EN_MASK)
/*! @} */

/*! @name IRCP11ISR11 - Interrupt Router CP11 Interrupt11 Status Register */
/*! @{ */

#define MSCM_IRCP11ISR11_CP0_INT_MASK            (0x1U)
#define MSCM_IRCP11ISR11_CP0_INT_SHIFT           (0U)
#define MSCM_IRCP11ISR11_CP0_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR11_CP0_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR11_CP0_INT_SHIFT)) & MSCM_IRCP11ISR11_CP0_INT_MASK)

#define MSCM_IRCP11ISR11_CP1_INT_MASK            (0x2U)
#define MSCM_IRCP11ISR11_CP1_INT_SHIFT           (1U)
#define MSCM_IRCP11ISR11_CP1_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR11_CP1_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR11_CP1_INT_SHIFT)) & MSCM_IRCP11ISR11_CP1_INT_MASK)

#define MSCM_IRCP11ISR11_CP2_INT_MASK            (0x4U)
#define MSCM_IRCP11ISR11_CP2_INT_SHIFT           (2U)
#define MSCM_IRCP11ISR11_CP2_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR11_CP2_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR11_CP2_INT_SHIFT)) & MSCM_IRCP11ISR11_CP2_INT_MASK)

#define MSCM_IRCP11ISR11_CP3_INT_MASK            (0x8U)
#define MSCM_IRCP11ISR11_CP3_INT_SHIFT           (3U)
#define MSCM_IRCP11ISR11_CP3_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR11_CP3_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR11_CP3_INT_SHIFT)) & MSCM_IRCP11ISR11_CP3_INT_MASK)

#define MSCM_IRCP11ISR11_CP4_INT_MASK            (0x10U)
#define MSCM_IRCP11ISR11_CP4_INT_SHIFT           (4U)
#define MSCM_IRCP11ISR11_CP4_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR11_CP4_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR11_CP4_INT_SHIFT)) & MSCM_IRCP11ISR11_CP4_INT_MASK)

#define MSCM_IRCP11ISR11_CP5_INT_MASK            (0x20U)
#define MSCM_IRCP11ISR11_CP5_INT_SHIFT           (5U)
#define MSCM_IRCP11ISR11_CP5_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR11_CP5_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR11_CP5_INT_SHIFT)) & MSCM_IRCP11ISR11_CP5_INT_MASK)

#define MSCM_IRCP11ISR11_CP6_INT_MASK            (0x40U)
#define MSCM_IRCP11ISR11_CP6_INT_SHIFT           (6U)
#define MSCM_IRCP11ISR11_CP6_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR11_CP6_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR11_CP6_INT_SHIFT)) & MSCM_IRCP11ISR11_CP6_INT_MASK)

#define MSCM_IRCP11ISR11_CP7_INT_MASK            (0x80U)
#define MSCM_IRCP11ISR11_CP7_INT_SHIFT           (7U)
#define MSCM_IRCP11ISR11_CP7_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR11_CP7_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR11_CP7_INT_SHIFT)) & MSCM_IRCP11ISR11_CP7_INT_MASK)

#define MSCM_IRCP11ISR11_CP8_INT_MASK            (0x100U)
#define MSCM_IRCP11ISR11_CP8_INT_SHIFT           (8U)
#define MSCM_IRCP11ISR11_CP8_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR11_CP8_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR11_CP8_INT_SHIFT)) & MSCM_IRCP11ISR11_CP8_INT_MASK)

#define MSCM_IRCP11ISR11_CP9_INT_MASK            (0x200U)
#define MSCM_IRCP11ISR11_CP9_INT_SHIFT           (9U)
#define MSCM_IRCP11ISR11_CP9_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR11_CP9_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR11_CP9_INT_SHIFT)) & MSCM_IRCP11ISR11_CP9_INT_MASK)

#define MSCM_IRCP11ISR11_CP10_INT_MASK           (0x400U)
#define MSCM_IRCP11ISR11_CP10_INT_SHIFT          (10U)
#define MSCM_IRCP11ISR11_CP10_INT_WIDTH          (1U)
#define MSCM_IRCP11ISR11_CP10_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR11_CP10_INT_SHIFT)) & MSCM_IRCP11ISR11_CP10_INT_MASK)

#define MSCM_IRCP11ISR11_CP11_INT_MASK           (0x800U)
#define MSCM_IRCP11ISR11_CP11_INT_SHIFT          (11U)
#define MSCM_IRCP11ISR11_CP11_INT_WIDTH          (1U)
#define MSCM_IRCP11ISR11_CP11_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR11_CP11_INT_SHIFT)) & MSCM_IRCP11ISR11_CP11_INT_MASK)
/*! @} */

/*! @name IRCP11IGR11 - Interrupt Router CP11 Interrupt11 Generation Register */
/*! @{ */

#define MSCM_IRCP11IGR11_INT_EN_MASK             (0x1U)
#define MSCM_IRCP11IGR11_INT_EN_SHIFT            (0U)
#define MSCM_IRCP11IGR11_INT_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR11_INT_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR11_INT_EN_SHIFT)) & MSCM_IRCP11IGR11_INT_EN_MASK)
/*! @} */

/*! @name IRCP11ISR12 - Interrupt Router CP11 Interrupt12 Status Register */
/*! @{ */

#define MSCM_IRCP11ISR12_CP0_INT_MASK            (0x1U)
#define MSCM_IRCP11ISR12_CP0_INT_SHIFT           (0U)
#define MSCM_IRCP11ISR12_CP0_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR12_CP0_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR12_CP0_INT_SHIFT)) & MSCM_IRCP11ISR12_CP0_INT_MASK)

#define MSCM_IRCP11ISR12_CP1_INT_MASK            (0x2U)
#define MSCM_IRCP11ISR12_CP1_INT_SHIFT           (1U)
#define MSCM_IRCP11ISR12_CP1_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR12_CP1_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR12_CP1_INT_SHIFT)) & MSCM_IRCP11ISR12_CP1_INT_MASK)

#define MSCM_IRCP11ISR12_CP2_INT_MASK            (0x4U)
#define MSCM_IRCP11ISR12_CP2_INT_SHIFT           (2U)
#define MSCM_IRCP11ISR12_CP2_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR12_CP2_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR12_CP2_INT_SHIFT)) & MSCM_IRCP11ISR12_CP2_INT_MASK)

#define MSCM_IRCP11ISR12_CP3_INT_MASK            (0x8U)
#define MSCM_IRCP11ISR12_CP3_INT_SHIFT           (3U)
#define MSCM_IRCP11ISR12_CP3_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR12_CP3_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR12_CP3_INT_SHIFT)) & MSCM_IRCP11ISR12_CP3_INT_MASK)

#define MSCM_IRCP11ISR12_CP4_INT_MASK            (0x10U)
#define MSCM_IRCP11ISR12_CP4_INT_SHIFT           (4U)
#define MSCM_IRCP11ISR12_CP4_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR12_CP4_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR12_CP4_INT_SHIFT)) & MSCM_IRCP11ISR12_CP4_INT_MASK)

#define MSCM_IRCP11ISR12_CP5_INT_MASK            (0x20U)
#define MSCM_IRCP11ISR12_CP5_INT_SHIFT           (5U)
#define MSCM_IRCP11ISR12_CP5_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR12_CP5_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR12_CP5_INT_SHIFT)) & MSCM_IRCP11ISR12_CP5_INT_MASK)

#define MSCM_IRCP11ISR12_CP6_INT_MASK            (0x40U)
#define MSCM_IRCP11ISR12_CP6_INT_SHIFT           (6U)
#define MSCM_IRCP11ISR12_CP6_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR12_CP6_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR12_CP6_INT_SHIFT)) & MSCM_IRCP11ISR12_CP6_INT_MASK)

#define MSCM_IRCP11ISR12_CP7_INT_MASK            (0x80U)
#define MSCM_IRCP11ISR12_CP7_INT_SHIFT           (7U)
#define MSCM_IRCP11ISR12_CP7_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR12_CP7_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR12_CP7_INT_SHIFT)) & MSCM_IRCP11ISR12_CP7_INT_MASK)

#define MSCM_IRCP11ISR12_CP8_INT_MASK            (0x100U)
#define MSCM_IRCP11ISR12_CP8_INT_SHIFT           (8U)
#define MSCM_IRCP11ISR12_CP8_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR12_CP8_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR12_CP8_INT_SHIFT)) & MSCM_IRCP11ISR12_CP8_INT_MASK)

#define MSCM_IRCP11ISR12_CP9_INT_MASK            (0x200U)
#define MSCM_IRCP11ISR12_CP9_INT_SHIFT           (9U)
#define MSCM_IRCP11ISR12_CP9_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR12_CP9_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR12_CP9_INT_SHIFT)) & MSCM_IRCP11ISR12_CP9_INT_MASK)

#define MSCM_IRCP11ISR12_CP10_INT_MASK           (0x400U)
#define MSCM_IRCP11ISR12_CP10_INT_SHIFT          (10U)
#define MSCM_IRCP11ISR12_CP10_INT_WIDTH          (1U)
#define MSCM_IRCP11ISR12_CP10_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR12_CP10_INT_SHIFT)) & MSCM_IRCP11ISR12_CP10_INT_MASK)

#define MSCM_IRCP11ISR12_CP11_INT_MASK           (0x800U)
#define MSCM_IRCP11ISR12_CP11_INT_SHIFT          (11U)
#define MSCM_IRCP11ISR12_CP11_INT_WIDTH          (1U)
#define MSCM_IRCP11ISR12_CP11_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR12_CP11_INT_SHIFT)) & MSCM_IRCP11ISR12_CP11_INT_MASK)
/*! @} */

/*! @name IRCP11IGR12 - Interrupt Router CP11 Interrupt12 Generation Register */
/*! @{ */

#define MSCM_IRCP11IGR12_INT_EN_MASK             (0x1U)
#define MSCM_IRCP11IGR12_INT_EN_SHIFT            (0U)
#define MSCM_IRCP11IGR12_INT_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR12_INT_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR12_INT_EN_SHIFT)) & MSCM_IRCP11IGR12_INT_EN_MASK)
/*! @} */

/*! @name IRCP11ISR13 - Interrupt Router CP11 Interrupt13 Status Register */
/*! @{ */

#define MSCM_IRCP11ISR13_CP0_INT_MASK            (0x1U)
#define MSCM_IRCP11ISR13_CP0_INT_SHIFT           (0U)
#define MSCM_IRCP11ISR13_CP0_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR13_CP0_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR13_CP0_INT_SHIFT)) & MSCM_IRCP11ISR13_CP0_INT_MASK)

#define MSCM_IRCP11ISR13_CP1_INT_MASK            (0x2U)
#define MSCM_IRCP11ISR13_CP1_INT_SHIFT           (1U)
#define MSCM_IRCP11ISR13_CP1_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR13_CP1_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR13_CP1_INT_SHIFT)) & MSCM_IRCP11ISR13_CP1_INT_MASK)

#define MSCM_IRCP11ISR13_CP2_INT_MASK            (0x4U)
#define MSCM_IRCP11ISR13_CP2_INT_SHIFT           (2U)
#define MSCM_IRCP11ISR13_CP2_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR13_CP2_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR13_CP2_INT_SHIFT)) & MSCM_IRCP11ISR13_CP2_INT_MASK)

#define MSCM_IRCP11ISR13_CP3_INT_MASK            (0x8U)
#define MSCM_IRCP11ISR13_CP3_INT_SHIFT           (3U)
#define MSCM_IRCP11ISR13_CP3_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR13_CP3_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR13_CP3_INT_SHIFT)) & MSCM_IRCP11ISR13_CP3_INT_MASK)

#define MSCM_IRCP11ISR13_CP4_INT_MASK            (0x10U)
#define MSCM_IRCP11ISR13_CP4_INT_SHIFT           (4U)
#define MSCM_IRCP11ISR13_CP4_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR13_CP4_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR13_CP4_INT_SHIFT)) & MSCM_IRCP11ISR13_CP4_INT_MASK)

#define MSCM_IRCP11ISR13_CP5_INT_MASK            (0x20U)
#define MSCM_IRCP11ISR13_CP5_INT_SHIFT           (5U)
#define MSCM_IRCP11ISR13_CP5_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR13_CP5_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR13_CP5_INT_SHIFT)) & MSCM_IRCP11ISR13_CP5_INT_MASK)

#define MSCM_IRCP11ISR13_CP6_INT_MASK            (0x40U)
#define MSCM_IRCP11ISR13_CP6_INT_SHIFT           (6U)
#define MSCM_IRCP11ISR13_CP6_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR13_CP6_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR13_CP6_INT_SHIFT)) & MSCM_IRCP11ISR13_CP6_INT_MASK)

#define MSCM_IRCP11ISR13_CP7_INT_MASK            (0x80U)
#define MSCM_IRCP11ISR13_CP7_INT_SHIFT           (7U)
#define MSCM_IRCP11ISR13_CP7_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR13_CP7_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR13_CP7_INT_SHIFT)) & MSCM_IRCP11ISR13_CP7_INT_MASK)

#define MSCM_IRCP11ISR13_CP8_INT_MASK            (0x100U)
#define MSCM_IRCP11ISR13_CP8_INT_SHIFT           (8U)
#define MSCM_IRCP11ISR13_CP8_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR13_CP8_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR13_CP8_INT_SHIFT)) & MSCM_IRCP11ISR13_CP8_INT_MASK)

#define MSCM_IRCP11ISR13_CP9_INT_MASK            (0x200U)
#define MSCM_IRCP11ISR13_CP9_INT_SHIFT           (9U)
#define MSCM_IRCP11ISR13_CP9_INT_WIDTH           (1U)
#define MSCM_IRCP11ISR13_CP9_INT(x)              (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR13_CP9_INT_SHIFT)) & MSCM_IRCP11ISR13_CP9_INT_MASK)

#define MSCM_IRCP11ISR13_CP10_INT_MASK           (0x400U)
#define MSCM_IRCP11ISR13_CP10_INT_SHIFT          (10U)
#define MSCM_IRCP11ISR13_CP10_INT_WIDTH          (1U)
#define MSCM_IRCP11ISR13_CP10_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR13_CP10_INT_SHIFT)) & MSCM_IRCP11ISR13_CP10_INT_MASK)

#define MSCM_IRCP11ISR13_CP11_INT_MASK           (0x800U)
#define MSCM_IRCP11ISR13_CP11_INT_SHIFT          (11U)
#define MSCM_IRCP11ISR13_CP11_INT_WIDTH          (1U)
#define MSCM_IRCP11ISR13_CP11_INT(x)             (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11ISR13_CP11_INT_SHIFT)) & MSCM_IRCP11ISR13_CP11_INT_MASK)
/*! @} */

/*! @name IRCP11IGR13 - Interrupt Router CP11 Interrupt13 Generation Register */
/*! @{ */

#define MSCM_IRCP11IGR13_INT_EN_MASK             (0x1U)
#define MSCM_IRCP11IGR13_INT_EN_SHIFT            (0U)
#define MSCM_IRCP11IGR13_INT_EN_WIDTH            (1U)
#define MSCM_IRCP11IGR13_INT_EN(x)               (((uint32_t)(((uint32_t)(x)) << MSCM_IRCP11IGR13_INT_EN_SHIFT)) & MSCM_IRCP11IGR13_INT_EN_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group MSCM_Register_Masks */

/*!
 * @}
 */ /* end of group MSCM_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_MSCM_H_) */