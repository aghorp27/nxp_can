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
 * @file S32G399A_I2C.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_I2C
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
#if !defined(S32G399A_I2C_H_)  /* Check if memory map has not been already included */
#define S32G399A_I2C_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- I2C Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup I2C_Peripheral_Access_Layer I2C Peripheral Access Layer
 * @{
 */

/** I2C - Register Layout Typedef */
typedef struct {
  __IO uint8_t IBAD;                               /**< I2C Bus Address, offset: 0x0 */
  __IO uint8_t IBFD;                               /**< I2C Bus Frequency Divider, offset: 0x1 */
  __IO uint8_t IBCR;                               /**< I2C Bus Control, offset: 0x2 */
  __IO uint8_t IBSR;                               /**< I2C Bus Status, offset: 0x3 */
  __IO uint8_t IBDR;                               /**< I2C Bus Data I/O, offset: 0x4 */
  __IO uint8_t IBIC;                               /**< I2C Bus Interrupt Configuration, offset: 0x5 */
  __IO uint8_t IBDBG;                              /**< I2C Bus Debug, offset: 0x6 */
} I2C_Type, *I2C_MemMapPtr;

/** Number of instances of the I2C module. */
#define I2C_INSTANCE_COUNT                       (5u)

/* I2C - Peripheral instance base addresses */
/** Peripheral I2C_0 base address */
#define IP_I2C_0_BASE                            (0x401E4000u)
/** Peripheral I2C_0 base pointer */
#define IP_I2C_0                                 ((I2C_Type *)IP_I2C_0_BASE)
/** Peripheral I2C_1 base address */
#define IP_I2C_1_BASE                            (0x401E8000u)
/** Peripheral I2C_1 base pointer */
#define IP_I2C_1                                 ((I2C_Type *)IP_I2C_1_BASE)
/** Peripheral I2C_2 base address */
#define IP_I2C_2_BASE                            (0x401EC000u)
/** Peripheral I2C_2 base pointer */
#define IP_I2C_2                                 ((I2C_Type *)IP_I2C_2_BASE)
/** Peripheral I2C_3 base address */
#define IP_I2C_3_BASE                            (0x402D8000u)
/** Peripheral I2C_3 base pointer */
#define IP_I2C_3                                 ((I2C_Type *)IP_I2C_3_BASE)
/** Peripheral I2C_4 base address */
#define IP_I2C_4_BASE                            (0x402DC000u)
/** Peripheral I2C_4 base pointer */
#define IP_I2C_4                                 ((I2C_Type *)IP_I2C_4_BASE)
/** Array initializer of I2C peripheral base addresses */
#define IP_I2C_BASE_ADDRS                        { IP_I2C_0_BASE, IP_I2C_1_BASE, IP_I2C_2_BASE, IP_I2C_3_BASE, IP_I2C_4_BASE }
/** Array initializer of I2C peripheral base pointers */
#define IP_I2C_BASE_PTRS                         { IP_I2C_0, IP_I2C_1, IP_I2C_2, IP_I2C_3, IP_I2C_4 }

/* ----------------------------------------------------------------------------
   -- I2C Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup I2C_Register_Masks I2C Register Masks
 * @{
 */

/*! @name IBAD - I2C Bus Address */
/*! @{ */

#define I2C_IBAD_ADR_MASK                        (0xFEU)
#define I2C_IBAD_ADR_SHIFT                       (1U)
#define I2C_IBAD_ADR_WIDTH                       (7U)
#define I2C_IBAD_ADR(x)                          (((uint8_t)(((uint8_t)(x)) << I2C_IBAD_ADR_SHIFT)) & I2C_IBAD_ADR_MASK)
/*! @} */

/*! @name IBFD - I2C Bus Frequency Divider */
/*! @{ */

#define I2C_IBFD_IBC_MASK                        (0xFFU)
#define I2C_IBFD_IBC_SHIFT                       (0U)
#define I2C_IBFD_IBC_WIDTH                       (8U)
#define I2C_IBFD_IBC(x)                          (((uint8_t)(((uint8_t)(x)) << I2C_IBFD_IBC_SHIFT)) & I2C_IBFD_IBC_MASK)
/*! @} */

/*! @name IBCR - I2C Bus Control */
/*! @{ */

#define I2C_IBCR_DMAEN_MASK                      (0x2U)
#define I2C_IBCR_DMAEN_SHIFT                     (1U)
#define I2C_IBCR_DMAEN_WIDTH                     (1U)
#define I2C_IBCR_DMAEN(x)                        (((uint8_t)(((uint8_t)(x)) << I2C_IBCR_DMAEN_SHIFT)) & I2C_IBCR_DMAEN_MASK)

#define I2C_IBCR_RSTA_MASK                       (0x4U)
#define I2C_IBCR_RSTA_SHIFT                      (2U)
#define I2C_IBCR_RSTA_WIDTH                      (1U)
#define I2C_IBCR_RSTA(x)                         (((uint8_t)(((uint8_t)(x)) << I2C_IBCR_RSTA_SHIFT)) & I2C_IBCR_RSTA_MASK)

#define I2C_IBCR_NOACK_MASK                      (0x8U)
#define I2C_IBCR_NOACK_SHIFT                     (3U)
#define I2C_IBCR_NOACK_WIDTH                     (1U)
#define I2C_IBCR_NOACK(x)                        (((uint8_t)(((uint8_t)(x)) << I2C_IBCR_NOACK_SHIFT)) & I2C_IBCR_NOACK_MASK)

#define I2C_IBCR_TXRX_MASK                       (0x10U)
#define I2C_IBCR_TXRX_SHIFT                      (4U)
#define I2C_IBCR_TXRX_WIDTH                      (1U)
#define I2C_IBCR_TXRX(x)                         (((uint8_t)(((uint8_t)(x)) << I2C_IBCR_TXRX_SHIFT)) & I2C_IBCR_TXRX_MASK)

#define I2C_IBCR_MSSL_MASK                       (0x20U)
#define I2C_IBCR_MSSL_SHIFT                      (5U)
#define I2C_IBCR_MSSL_WIDTH                      (1U)
#define I2C_IBCR_MSSL(x)                         (((uint8_t)(((uint8_t)(x)) << I2C_IBCR_MSSL_SHIFT)) & I2C_IBCR_MSSL_MASK)

#define I2C_IBCR_IBIE_MASK                       (0x40U)
#define I2C_IBCR_IBIE_SHIFT                      (6U)
#define I2C_IBCR_IBIE_WIDTH                      (1U)
#define I2C_IBCR_IBIE(x)                         (((uint8_t)(((uint8_t)(x)) << I2C_IBCR_IBIE_SHIFT)) & I2C_IBCR_IBIE_MASK)

#define I2C_IBCR_MDIS_MASK                       (0x80U)
#define I2C_IBCR_MDIS_SHIFT                      (7U)
#define I2C_IBCR_MDIS_WIDTH                      (1U)
#define I2C_IBCR_MDIS(x)                         (((uint8_t)(((uint8_t)(x)) << I2C_IBCR_MDIS_SHIFT)) & I2C_IBCR_MDIS_MASK)
/*! @} */

/*! @name IBSR - I2C Bus Status */
/*! @{ */

#define I2C_IBSR_RXAK_MASK                       (0x1U)
#define I2C_IBSR_RXAK_SHIFT                      (0U)
#define I2C_IBSR_RXAK_WIDTH                      (1U)
#define I2C_IBSR_RXAK(x)                         (((uint8_t)(((uint8_t)(x)) << I2C_IBSR_RXAK_SHIFT)) & I2C_IBSR_RXAK_MASK)

#define I2C_IBSR_IBIF_MASK                       (0x2U)
#define I2C_IBSR_IBIF_SHIFT                      (1U)
#define I2C_IBSR_IBIF_WIDTH                      (1U)
#define I2C_IBSR_IBIF(x)                         (((uint8_t)(((uint8_t)(x)) << I2C_IBSR_IBIF_SHIFT)) & I2C_IBSR_IBIF_MASK)

#define I2C_IBSR_SRW_MASK                        (0x4U)
#define I2C_IBSR_SRW_SHIFT                       (2U)
#define I2C_IBSR_SRW_WIDTH                       (1U)
#define I2C_IBSR_SRW(x)                          (((uint8_t)(((uint8_t)(x)) << I2C_IBSR_SRW_SHIFT)) & I2C_IBSR_SRW_MASK)

#define I2C_IBSR_IBAL_MASK                       (0x10U)
#define I2C_IBSR_IBAL_SHIFT                      (4U)
#define I2C_IBSR_IBAL_WIDTH                      (1U)
#define I2C_IBSR_IBAL(x)                         (((uint8_t)(((uint8_t)(x)) << I2C_IBSR_IBAL_SHIFT)) & I2C_IBSR_IBAL_MASK)

#define I2C_IBSR_IBB_MASK                        (0x20U)
#define I2C_IBSR_IBB_SHIFT                       (5U)
#define I2C_IBSR_IBB_WIDTH                       (1U)
#define I2C_IBSR_IBB(x)                          (((uint8_t)(((uint8_t)(x)) << I2C_IBSR_IBB_SHIFT)) & I2C_IBSR_IBB_MASK)

#define I2C_IBSR_IAAS_MASK                       (0x40U)
#define I2C_IBSR_IAAS_SHIFT                      (6U)
#define I2C_IBSR_IAAS_WIDTH                      (1U)
#define I2C_IBSR_IAAS(x)                         (((uint8_t)(((uint8_t)(x)) << I2C_IBSR_IAAS_SHIFT)) & I2C_IBSR_IAAS_MASK)

#define I2C_IBSR_TCF_MASK                        (0x80U)
#define I2C_IBSR_TCF_SHIFT                       (7U)
#define I2C_IBSR_TCF_WIDTH                       (1U)
#define I2C_IBSR_TCF(x)                          (((uint8_t)(((uint8_t)(x)) << I2C_IBSR_TCF_SHIFT)) & I2C_IBSR_TCF_MASK)
/*! @} */

/*! @name IBDR - I2C Bus Data I/O */
/*! @{ */

#define I2C_IBDR_DATA_MASK                       (0xFFU)
#define I2C_IBDR_DATA_SHIFT                      (0U)
#define I2C_IBDR_DATA_WIDTH                      (8U)
#define I2C_IBDR_DATA(x)                         (((uint8_t)(((uint8_t)(x)) << I2C_IBDR_DATA_SHIFT)) & I2C_IBDR_DATA_MASK)
/*! @} */

/*! @name IBIC - I2C Bus Interrupt Configuration */
/*! @{ */

#define I2C_IBIC_BYTERXIE_MASK                   (0x40U)
#define I2C_IBIC_BYTERXIE_SHIFT                  (6U)
#define I2C_IBIC_BYTERXIE_WIDTH                  (1U)
#define I2C_IBIC_BYTERXIE(x)                     (((uint8_t)(((uint8_t)(x)) << I2C_IBIC_BYTERXIE_SHIFT)) & I2C_IBIC_BYTERXIE_MASK)

#define I2C_IBIC_BIIE_MASK                       (0x80U)
#define I2C_IBIC_BIIE_SHIFT                      (7U)
#define I2C_IBIC_BIIE_WIDTH                      (1U)
#define I2C_IBIC_BIIE(x)                         (((uint8_t)(((uint8_t)(x)) << I2C_IBIC_BIIE_SHIFT)) & I2C_IBIC_BIIE_MASK)
/*! @} */

/*! @name IBDBG - I2C Bus Debug */
/*! @{ */

#define I2C_IBDBG_IPG_DEBUG_EN_MASK              (0x1U)
#define I2C_IBDBG_IPG_DEBUG_EN_SHIFT             (0U)
#define I2C_IBDBG_IPG_DEBUG_EN_WIDTH             (1U)
#define I2C_IBDBG_IPG_DEBUG_EN(x)                (((uint8_t)(((uint8_t)(x)) << I2C_IBDBG_IPG_DEBUG_EN_SHIFT)) & I2C_IBDBG_IPG_DEBUG_EN_MASK)

#define I2C_IBDBG_IPG_DEBUG_HALTED_MASK          (0x2U)
#define I2C_IBDBG_IPG_DEBUG_HALTED_SHIFT         (1U)
#define I2C_IBDBG_IPG_DEBUG_HALTED_WIDTH         (1U)
#define I2C_IBDBG_IPG_DEBUG_HALTED(x)            (((uint8_t)(((uint8_t)(x)) << I2C_IBDBG_IPG_DEBUG_HALTED_SHIFT)) & I2C_IBDBG_IPG_DEBUG_HALTED_MASK)

#define I2C_IBDBG_BYTE_RX_MASK                   (0x4U)
#define I2C_IBDBG_BYTE_RX_SHIFT                  (2U)
#define I2C_IBDBG_BYTE_RX_WIDTH                  (1U)
#define I2C_IBDBG_BYTE_RX(x)                     (((uint8_t)(((uint8_t)(x)) << I2C_IBDBG_BYTE_RX_SHIFT)) & I2C_IBDBG_BYTE_RX_MASK)

#define I2C_IBDBG_GLFLT_EN_MASK                  (0x8U)
#define I2C_IBDBG_GLFLT_EN_SHIFT                 (3U)
#define I2C_IBDBG_GLFLT_EN_WIDTH                 (1U)
#define I2C_IBDBG_GLFLT_EN(x)                    (((uint8_t)(((uint8_t)(x)) << I2C_IBDBG_GLFLT_EN_SHIFT)) & I2C_IBDBG_GLFLT_EN_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group I2C_Register_Masks */

/*!
 * @}
 */ /* end of group I2C_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_I2C_H_) */