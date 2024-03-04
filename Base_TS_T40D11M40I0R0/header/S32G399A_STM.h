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
 * @file S32G399A_STM.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_STM
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
#if !defined(S32G399A_STM_H_)  /* Check if memory map has not been already included */
#define S32G399A_STM_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- STM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup STM_Peripheral_Access_Layer STM Peripheral Access Layer
 * @{
 */

/** STM - Size of Registers Arrays */
#define STM_CHANNEL_COUNT                         4u

/** STM - Register Layout Typedef */
typedef struct {
  __IO uint32_t CR;                                /**< Control, offset: 0x0 */
  __IO uint32_t CNT;                               /**< Count, offset: 0x4 */
  uint8_t RESERVED_0[8];
  struct {                                         /* offset: 0x10, array step: 0x10 */
    __IO uint32_t CCR;                               /**< Channel Control, array offset: 0x10, array step: 0x10 */
    __IO uint32_t CIR;                               /**< Channel Interrupt, array offset: 0x14, array step: 0x10 */
    __IO uint32_t CMP;                               /**< Channel Compare, array offset: 0x18, array step: 0x10 */
    uint8_t RESERVED_0[4];
  } CHANNEL[STM_CHANNEL_COUNT];
} STM_Type, *STM_MemMapPtr;

/** Number of instances of the STM module. */
#define STM_INSTANCE_COUNT                       (13u)

/* STM - Peripheral instance base addresses */
/** Peripheral STM_0 base address */
#define IP_STM_0_BASE                            (0x4011C000u)
/** Peripheral STM_0 base pointer */
#define IP_STM_0                                 ((STM_Type *)IP_STM_0_BASE)
/** Peripheral STM_1 base address */
#define IP_STM_1_BASE                            (0x40120000u)
/** Peripheral STM_1 base pointer */
#define IP_STM_1                                 ((STM_Type *)IP_STM_1_BASE)
/** Peripheral STM_2 base address */
#define IP_STM_2_BASE                            (0x40124000u)
/** Peripheral STM_2 base pointer */
#define IP_STM_2                                 ((STM_Type *)IP_STM_2_BASE)
/** Peripheral STM_3 base address */
#define IP_STM_3_BASE                            (0x40128000u)
/** Peripheral STM_3 base pointer */
#define IP_STM_3                                 ((STM_Type *)IP_STM_3_BASE)
/** Peripheral STM_4 base address */
#define IP_STM_4_BASE                            (0x4021C000u)
/** Peripheral STM_4 base pointer */
#define IP_STM_4                                 ((STM_Type *)IP_STM_4_BASE)
/** Peripheral STM_5 base address */
#define IP_STM_5_BASE                            (0x40220000u)
/** Peripheral STM_5 base pointer */
#define IP_STM_5                                 ((STM_Type *)IP_STM_5_BASE)
/** Peripheral STM_6 base address */
#define IP_STM_6_BASE                            (0x40224000u)
/** Peripheral STM_6 base pointer */
#define IP_STM_6                                 ((STM_Type *)IP_STM_6_BASE)
/** Peripheral STM_7 base address */
#define IP_STM_7_BASE                            (0x40228000u)
/** Peripheral STM_7 base pointer */
#define IP_STM_7                                 ((STM_Type *)IP_STM_7_BASE)
/** Peripheral STM_8 base address */
#define IP_STM_8_BASE                            (0x40520000u)
/** Peripheral STM_8 base pointer */
#define IP_STM_8                                 ((STM_Type *)IP_STM_8_BASE)
/** Peripheral STM_9 base address */
#define IP_STM_9_BASE                            (0x40524000u)
/** Peripheral STM_9 base pointer */
#define IP_STM_9                                 ((STM_Type *)IP_STM_9_BASE)
/** Peripheral STM_10 base address */
#define IP_STM_10_BASE                           (0x40528000u)
/** Peripheral STM_10 base pointer */
#define IP_STM_10                                ((STM_Type *)IP_STM_10_BASE)
/** Peripheral STM_11 base address */
#define IP_STM_11_BASE                           (0x4052C000u)
/** Peripheral STM_11 base pointer */
#define IP_STM_11                                ((STM_Type *)IP_STM_11_BASE)
/** Peripheral STM_TS base address */
#define IP_STM_TS_BASE                           (0x4400C000u)
/** Peripheral STM_TS base pointer */
#define IP_STM_TS                                ((STM_Type *)IP_STM_TS_BASE)
/** Array initializer of STM peripheral base addresses */
#define IP_STM_BASE_ADDRS                        { IP_STM_0_BASE, IP_STM_1_BASE, IP_STM_2_BASE, IP_STM_3_BASE, IP_STM_4_BASE, IP_STM_5_BASE, IP_STM_6_BASE, IP_STM_7_BASE, IP_STM_8_BASE, IP_STM_9_BASE, IP_STM_10_BASE, IP_STM_11_BASE, IP_STM_TS_BASE }
/** Array initializer of STM peripheral base pointers */
#define IP_STM_BASE_PTRS                         { IP_STM_0, IP_STM_1, IP_STM_2, IP_STM_3, IP_STM_4, IP_STM_5, IP_STM_6, IP_STM_7, IP_STM_8, IP_STM_9, IP_STM_10, IP_STM_11, IP_STM_TS }

/* ----------------------------------------------------------------------------
   -- STM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup STM_Register_Masks STM Register Masks
 * @{
 */

/*! @name CR - Control */
/*! @{ */

#define STM_CR_TEN_MASK                          (0x1U)
#define STM_CR_TEN_SHIFT                         (0U)
#define STM_CR_TEN_WIDTH                         (1U)
#define STM_CR_TEN(x)                            (((uint32_t)(((uint32_t)(x)) << STM_CR_TEN_SHIFT)) & STM_CR_TEN_MASK)

#define STM_CR_FRZ_MASK                          (0x2U)
#define STM_CR_FRZ_SHIFT                         (1U)
#define STM_CR_FRZ_WIDTH                         (1U)
#define STM_CR_FRZ(x)                            (((uint32_t)(((uint32_t)(x)) << STM_CR_FRZ_SHIFT)) & STM_CR_FRZ_MASK)

#define STM_CR_CPS_MASK                          (0xFF00U)
#define STM_CR_CPS_SHIFT                         (8U)
#define STM_CR_CPS_WIDTH                         (8U)
#define STM_CR_CPS(x)                            (((uint32_t)(((uint32_t)(x)) << STM_CR_CPS_SHIFT)) & STM_CR_CPS_MASK)
/*! @} */

/*! @name CNT - Count */
/*! @{ */

#define STM_CNT_CNT_MASK                         (0xFFFFFFFFU)
#define STM_CNT_CNT_SHIFT                        (0U)
#define STM_CNT_CNT_WIDTH                        (32U)
#define STM_CNT_CNT(x)                           (((uint32_t)(((uint32_t)(x)) << STM_CNT_CNT_SHIFT)) & STM_CNT_CNT_MASK)
/*! @} */

/*! @name CCR - Channel Control */
/*! @{ */

#define STM_CCR_CEN_MASK                         (0x1U)
#define STM_CCR_CEN_SHIFT                        (0U)
#define STM_CCR_CEN_WIDTH                        (1U)
#define STM_CCR_CEN(x)                           (((uint32_t)(((uint32_t)(x)) << STM_CCR_CEN_SHIFT)) & STM_CCR_CEN_MASK)
/*! @} */

/*! @name CIR - Channel Interrupt */
/*! @{ */

#define STM_CIR_CIF_MASK                         (0x1U)
#define STM_CIR_CIF_SHIFT                        (0U)
#define STM_CIR_CIF_WIDTH                        (1U)
#define STM_CIR_CIF(x)                           (((uint32_t)(((uint32_t)(x)) << STM_CIR_CIF_SHIFT)) & STM_CIR_CIF_MASK)
/*! @} */

/*! @name CMP - Channel Compare */
/*! @{ */

#define STM_CMP_CMP_MASK                         (0xFFFFFFFFU)
#define STM_CMP_CMP_SHIFT                        (0U)
#define STM_CMP_CMP_WIDTH                        (32U)
#define STM_CMP_CMP(x)                           (((uint32_t)(((uint32_t)(x)) << STM_CMP_CMP_SHIFT)) & STM_CMP_CMP_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group STM_Register_Masks */

/*!
 * @}
 */ /* end of group STM_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_STM_H_) */