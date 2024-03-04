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
 * @file S32G274A_CMU_FC.h
 * @version 2.1
 * @date 2022-06-27
 * @brief Peripheral Access Layer for S32G274A_CMU_FC
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
#if !defined(S32G274A_CMU_FC_H_)  /* Check if memory map has not been already included */
#define S32G274A_CMU_FC_H_

#include "S32G274A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- CMU_FC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CMU_FC_Peripheral_Access_Layer CMU_FC Peripheral Access Layer
 * @{
 */

/** CMU_FC - Register Layout Typedef */
typedef struct {
  __IO uint32_t GCR;                               /**< Global Configuration Register, offset: 0x0 */
  __IO uint32_t RCCR;                              /**< Reference Count Configuration Register, offset: 0x4 */
  __IO uint32_t HTCR;                              /**< High Threshold Configuration Register, offset: 0x8 */
  __IO uint32_t LTCR;                              /**< Low Threshold Configuration Register, offset: 0xC */
  __IO uint32_t SR;                                /**< Status Register, offset: 0x10 */
  __IO uint32_t IER;                               /**< Interrupt Enable Register, offset: 0x14 */
} CMU_FC_Type, *CMU_FC_MemMapPtr;

/** Number of instances of the CMU_FC module. */
#define CMU_FC_INSTANCE_COUNT                    (27u)

/* CMU_FC - Peripheral instance base addresses */
/** Peripheral CMU_FC_0 base address */
#define IP_CMU_FC_0_BASE                         (0x4005C000u)
/** Peripheral CMU_FC_0 base pointer */
#define IP_CMU_FC_0                              ((CMU_FC_Type *)IP_CMU_FC_0_BASE)
/** Peripheral CMU_FC_5 base address */
#define IP_CMU_FC_5_BASE                         (0x4005C0A0u)
/** Peripheral CMU_FC_5 base pointer */
#define IP_CMU_FC_5                              ((CMU_FC_Type *)IP_CMU_FC_5_BASE)
/** Peripheral CMU_FC_6 base address */
#define IP_CMU_FC_6_BASE                         (0x4005C0C0u)
/** Peripheral CMU_FC_6 base pointer */
#define IP_CMU_FC_6                              ((CMU_FC_Type *)IP_CMU_FC_6_BASE)
/** Peripheral CMU_FC_7 base address */
#define IP_CMU_FC_7_BASE                         (0x4005C0E0u)
/** Peripheral CMU_FC_7 base pointer */
#define IP_CMU_FC_7                              ((CMU_FC_Type *)IP_CMU_FC_7_BASE)
/** Peripheral CMU_FC_8 base address */
#define IP_CMU_FC_8_BASE                         (0x4005C100u)
/** Peripheral CMU_FC_8 base pointer */
#define IP_CMU_FC_8                              ((CMU_FC_Type *)IP_CMU_FC_8_BASE)
/** Peripheral CMU_FC_9 base address */
#define IP_CMU_FC_9_BASE                         (0x4005C120u)
/** Peripheral CMU_FC_9 base pointer */
#define IP_CMU_FC_9                              ((CMU_FC_Type *)IP_CMU_FC_9_BASE)
/** Peripheral CMU_FC_10 base address */
#define IP_CMU_FC_10_BASE                        (0x4005C140u)
/** Peripheral CMU_FC_10 base pointer */
#define IP_CMU_FC_10                             ((CMU_FC_Type *)IP_CMU_FC_10_BASE)
/** Peripheral CMU_FC_11 base address */
#define IP_CMU_FC_11_BASE                        (0x4005C160u)
/** Peripheral CMU_FC_11 base pointer */
#define IP_CMU_FC_11                             ((CMU_FC_Type *)IP_CMU_FC_11_BASE)
/** Peripheral CMU_FC_12 base address */
#define IP_CMU_FC_12_BASE                        (0x4005C180u)
/** Peripheral CMU_FC_12 base pointer */
#define IP_CMU_FC_12                             ((CMU_FC_Type *)IP_CMU_FC_12_BASE)
/** Peripheral CMU_FC_13 base address */
#define IP_CMU_FC_13_BASE                        (0x4005C1A0u)
/** Peripheral CMU_FC_13 base pointer */
#define IP_CMU_FC_13                             ((CMU_FC_Type *)IP_CMU_FC_13_BASE)
/** Peripheral CMU_FC_14 base address */
#define IP_CMU_FC_14_BASE                        (0x4005C1C0u)
/** Peripheral CMU_FC_14 base pointer */
#define IP_CMU_FC_14                             ((CMU_FC_Type *)IP_CMU_FC_14_BASE)
/** Peripheral CMU_FC_15 base address */
#define IP_CMU_FC_15_BASE                        (0x4005C1E0u)
/** Peripheral CMU_FC_15 base pointer */
#define IP_CMU_FC_15                             ((CMU_FC_Type *)IP_CMU_FC_15_BASE)
/** Peripheral CMU_FC_16 base address */
#define IP_CMU_FC_16_BASE                        (0x4005C200u)
/** Peripheral CMU_FC_16 base pointer */
#define IP_CMU_FC_16                             ((CMU_FC_Type *)IP_CMU_FC_16_BASE)
/** Peripheral CMU_FC_17 base address */
#define IP_CMU_FC_17_BASE                        (0x4005C220u)
/** Peripheral CMU_FC_17 base pointer */
#define IP_CMU_FC_17                             ((CMU_FC_Type *)IP_CMU_FC_17_BASE)
/** Peripheral CMU_FC_18 base address */
#define IP_CMU_FC_18_BASE                        (0x4005C240u)
/** Peripheral CMU_FC_18 base pointer */
#define IP_CMU_FC_18                             ((CMU_FC_Type *)IP_CMU_FC_18_BASE)
/** Peripheral CMU_FC_20 base address */
#define IP_CMU_FC_20_BASE                        (0x4005C280u)
/** Peripheral CMU_FC_20 base pointer */
#define IP_CMU_FC_20                             ((CMU_FC_Type *)IP_CMU_FC_20_BASE)
/** Peripheral CMU_FC_21 base address */
#define IP_CMU_FC_21_BASE                        (0x4005C2A0u)
/** Peripheral CMU_FC_21 base pointer */
#define IP_CMU_FC_21                             ((CMU_FC_Type *)IP_CMU_FC_21_BASE)
/** Peripheral CMU_FC_22 base address */
#define IP_CMU_FC_22_BASE                        (0x4005C2C0u)
/** Peripheral CMU_FC_22 base pointer */
#define IP_CMU_FC_22                             ((CMU_FC_Type *)IP_CMU_FC_22_BASE)
/** Peripheral CMU_FC_27 base address */
#define IP_CMU_FC_27_BASE                        (0x4005C360u)
/** Peripheral CMU_FC_27 base pointer */
#define IP_CMU_FC_27                             ((CMU_FC_Type *)IP_CMU_FC_27_BASE)
/** Peripheral CMU_FC_28 base address */
#define IP_CMU_FC_28_BASE                        (0x4005C380u)
/** Peripheral CMU_FC_28 base pointer */
#define IP_CMU_FC_28                             ((CMU_FC_Type *)IP_CMU_FC_28_BASE)
/** Peripheral CMU_FC_39 base address */
#define IP_CMU_FC_39_BASE                        (0x4005C4E0u)
/** Peripheral CMU_FC_39 base pointer */
#define IP_CMU_FC_39                             ((CMU_FC_Type *)IP_CMU_FC_39_BASE)
/** Peripheral CMU_FC_46 base address */
#define IP_CMU_FC_46_BASE                        (0x4005C5C0u)
/** Peripheral CMU_FC_46 base pointer */
#define IP_CMU_FC_46                             ((CMU_FC_Type *)IP_CMU_FC_46_BASE)
/** Peripheral CMU_FC_47 base address */
#define IP_CMU_FC_47_BASE                        (0x4005C5E0u)
/** Peripheral CMU_FC_47 base pointer */
#define IP_CMU_FC_47                             ((CMU_FC_Type *)IP_CMU_FC_47_BASE)
/** Peripheral CMU_FC_48 base address */
#define IP_CMU_FC_48_BASE                        (0x4005C600u)
/** Peripheral CMU_FC_48 base pointer */
#define IP_CMU_FC_48                             ((CMU_FC_Type *)IP_CMU_FC_48_BASE)
/** Peripheral CMU_FC_49 base address */
#define IP_CMU_FC_49_BASE                        (0x4005C620u)
/** Peripheral CMU_FC_49 base pointer */
#define IP_CMU_FC_49                             ((CMU_FC_Type *)IP_CMU_FC_49_BASE)
/** Peripheral CMU_FC_50 base address */
#define IP_CMU_FC_50_BASE                        (0x4005C640u)
/** Peripheral CMU_FC_50 base pointer */
#define IP_CMU_FC_50                             ((CMU_FC_Type *)IP_CMU_FC_50_BASE)
/** Peripheral CMU_FC_51 base address */
#define IP_CMU_FC_51_BASE                        (0x4005C660u)
/** Peripheral CMU_FC_51 base pointer */
#define IP_CMU_FC_51                             ((CMU_FC_Type *)IP_CMU_FC_51_BASE)
/** Array initializer of CMU_FC peripheral base addresses */
#define IP_CMU_FC_BASE_ADDRS                     { IP_CMU_FC_0_BASE, IP_CMU_FC_5_BASE, IP_CMU_FC_6_BASE, IP_CMU_FC_7_BASE, IP_CMU_FC_8_BASE, IP_CMU_FC_9_BASE, IP_CMU_FC_10_BASE, IP_CMU_FC_11_BASE, IP_CMU_FC_12_BASE, IP_CMU_FC_13_BASE, IP_CMU_FC_14_BASE, IP_CMU_FC_15_BASE, IP_CMU_FC_16_BASE, IP_CMU_FC_17_BASE, IP_CMU_FC_18_BASE, IP_CMU_FC_20_BASE, IP_CMU_FC_21_BASE, IP_CMU_FC_22_BASE, IP_CMU_FC_27_BASE, IP_CMU_FC_28_BASE, IP_CMU_FC_39_BASE, IP_CMU_FC_46_BASE, IP_CMU_FC_47_BASE, IP_CMU_FC_48_BASE, IP_CMU_FC_49_BASE, IP_CMU_FC_50_BASE, IP_CMU_FC_51_BASE }
/** Array initializer of CMU_FC peripheral base pointers */
#define IP_CMU_FC_BASE_PTRS                      { IP_CMU_FC_0, IP_CMU_FC_5, IP_CMU_FC_6, IP_CMU_FC_7, IP_CMU_FC_8, IP_CMU_FC_9, IP_CMU_FC_10, IP_CMU_FC_11, IP_CMU_FC_12, IP_CMU_FC_13, IP_CMU_FC_14, IP_CMU_FC_15, IP_CMU_FC_16, IP_CMU_FC_17, IP_CMU_FC_18, IP_CMU_FC_20, IP_CMU_FC_21, IP_CMU_FC_22, IP_CMU_FC_27, IP_CMU_FC_28, IP_CMU_FC_39, IP_CMU_FC_46, IP_CMU_FC_47, IP_CMU_FC_48, IP_CMU_FC_49, IP_CMU_FC_50, IP_CMU_FC_51 }

/* ----------------------------------------------------------------------------
   -- CMU_FC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CMU_FC_Register_Masks CMU_FC Register Masks
 * @{
 */

/*! @name GCR - Global Configuration Register */
/*! @{ */

#define CMU_FC_GCR_FCE_MASK                      (0x1U)
#define CMU_FC_GCR_FCE_SHIFT                     (0U)
#define CMU_FC_GCR_FCE_WIDTH                     (1U)
#define CMU_FC_GCR_FCE(x)                        (((uint32_t)(((uint32_t)(x)) << CMU_FC_GCR_FCE_SHIFT)) & CMU_FC_GCR_FCE_MASK)
/*! @} */

/*! @name RCCR - Reference Count Configuration Register */
/*! @{ */

#define CMU_FC_RCCR_REF_CNT_MASK                 (0xFFFFU)
#define CMU_FC_RCCR_REF_CNT_SHIFT                (0U)
#define CMU_FC_RCCR_REF_CNT_WIDTH                (16U)
#define CMU_FC_RCCR_REF_CNT(x)                   (((uint32_t)(((uint32_t)(x)) << CMU_FC_RCCR_REF_CNT_SHIFT)) & CMU_FC_RCCR_REF_CNT_MASK)
/*! @} */

/*! @name HTCR - High Threshold Configuration Register */
/*! @{ */

#define CMU_FC_HTCR_HFREF_MASK                   (0xFFFFFFU)
#define CMU_FC_HTCR_HFREF_SHIFT                  (0U)
#define CMU_FC_HTCR_HFREF_WIDTH                  (24U)
#define CMU_FC_HTCR_HFREF(x)                     (((uint32_t)(((uint32_t)(x)) << CMU_FC_HTCR_HFREF_SHIFT)) & CMU_FC_HTCR_HFREF_MASK)
/*! @} */

/*! @name LTCR - Low Threshold Configuration Register */
/*! @{ */

#define CMU_FC_LTCR_LFREF_MASK                   (0xFFFFFFU)
#define CMU_FC_LTCR_LFREF_SHIFT                  (0U)
#define CMU_FC_LTCR_LFREF_WIDTH                  (24U)
#define CMU_FC_LTCR_LFREF(x)                     (((uint32_t)(((uint32_t)(x)) << CMU_FC_LTCR_LFREF_SHIFT)) & CMU_FC_LTCR_LFREF_MASK)
/*! @} */

/*! @name SR - Status Register */
/*! @{ */

#define CMU_FC_SR_FLL_MASK                       (0x1U)
#define CMU_FC_SR_FLL_SHIFT                      (0U)
#define CMU_FC_SR_FLL_WIDTH                      (1U)
#define CMU_FC_SR_FLL(x)                         (((uint32_t)(((uint32_t)(x)) << CMU_FC_SR_FLL_SHIFT)) & CMU_FC_SR_FLL_MASK)

#define CMU_FC_SR_FHH_MASK                       (0x2U)
#define CMU_FC_SR_FHH_SHIFT                      (1U)
#define CMU_FC_SR_FHH_WIDTH                      (1U)
#define CMU_FC_SR_FHH(x)                         (((uint32_t)(((uint32_t)(x)) << CMU_FC_SR_FHH_SHIFT)) & CMU_FC_SR_FHH_MASK)

#define CMU_FC_SR_RS_MASK                        (0x10U)
#define CMU_FC_SR_RS_SHIFT                       (4U)
#define CMU_FC_SR_RS_WIDTH                       (1U)
#define CMU_FC_SR_RS(x)                          (((uint32_t)(((uint32_t)(x)) << CMU_FC_SR_RS_SHIFT)) & CMU_FC_SR_RS_MASK)
/*! @} */

/*! @name IER - Interrupt Enable Register */
/*! @{ */

#define CMU_FC_IER_FLLIE_MASK                    (0x1U)
#define CMU_FC_IER_FLLIE_SHIFT                   (0U)
#define CMU_FC_IER_FLLIE_WIDTH                   (1U)
#define CMU_FC_IER_FLLIE(x)                      (((uint32_t)(((uint32_t)(x)) << CMU_FC_IER_FLLIE_SHIFT)) & CMU_FC_IER_FLLIE_MASK)

#define CMU_FC_IER_FHHIE_MASK                    (0x2U)
#define CMU_FC_IER_FHHIE_SHIFT                   (1U)
#define CMU_FC_IER_FHHIE_WIDTH                   (1U)
#define CMU_FC_IER_FHHIE(x)                      (((uint32_t)(((uint32_t)(x)) << CMU_FC_IER_FHHIE_SHIFT)) & CMU_FC_IER_FHHIE_MASK)

#define CMU_FC_IER_FLLAIE_MASK                   (0x4U)
#define CMU_FC_IER_FLLAIE_SHIFT                  (2U)
#define CMU_FC_IER_FLLAIE_WIDTH                  (1U)
#define CMU_FC_IER_FLLAIE(x)                     (((uint32_t)(((uint32_t)(x)) << CMU_FC_IER_FLLAIE_SHIFT)) & CMU_FC_IER_FLLAIE_MASK)

#define CMU_FC_IER_FHHAIE_MASK                   (0x8U)
#define CMU_FC_IER_FHHAIE_SHIFT                  (3U)
#define CMU_FC_IER_FHHAIE_WIDTH                  (1U)
#define CMU_FC_IER_FHHAIE(x)                     (((uint32_t)(((uint32_t)(x)) << CMU_FC_IER_FHHAIE_SHIFT)) & CMU_FC_IER_FHHAIE_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group CMU_FC_Register_Masks */

/*!
 * @}
 */ /* end of group CMU_FC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G274A_CMU_FC_H_) */
