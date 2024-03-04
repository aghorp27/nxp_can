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
 * @file S32G274A_QuadSPI.h
 * @version 2.1
 * @date 2022-06-27
 * @brief Peripheral Access Layer for S32G274A_QuadSPI
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
#if !defined(S32G274A_QuadSPI_H_)  /* Check if memory map has not been already included */
#define S32G274A_QuadSPI_H_

#include "S32G274A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- QuadSPI Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup QuadSPI_Peripheral_Access_Layer QuadSPI Peripheral Access Layer
 * @{
 */

/** QuadSPI - Size of Registers Arrays */
#define QuadSPI_RBDR_COUNT                        64u
#define QuadSPI_LUT_COUNT                         80u

/** QuadSPI - Register Layout Typedef */
typedef struct {
  __IO uint32_t MCR;                               /**< Module Configuration Register, offset: 0x0 */
  uint8_t RESERVED_0[4];
  __IO uint32_t IPCR;                              /**< IP Configuration Register, offset: 0x8 */
  __IO uint32_t FLSHCR;                            /**< Flash Memory Configuration Register, offset: 0xC */
  __IO uint32_t BUF0CR;                            /**< Buffer 0 Configuration Register, offset: 0x10 */
  __IO uint32_t BUF1CR;                            /**< Buffer 1 Configuration Register, offset: 0x14 */
  __IO uint32_t BUF2CR;                            /**< Buffer 2 Configuration Register, offset: 0x18 */
  __IO uint32_t BUF3CR;                            /**< Buffer 3 Configuration Register, offset: 0x1C */
  __IO uint32_t BFGENCR;                           /**< Buffer Generic Configuration Register, offset: 0x20 */
  uint8_t RESERVED_1[12];
  __IO uint32_t BUF0IND;                           /**< Buffer 0 Top Index Register, offset: 0x30 */
  __IO uint32_t BUF1IND;                           /**< Buffer 1 Top Index Register, offset: 0x34 */
  __IO uint32_t BUF2IND;                           /**< Buffer 2 Top Index Register, offset: 0x38 */
  uint8_t RESERVED_2[20];
  __IO uint32_t AWRCR;                             /**< AHB Write Configuration Register, offset: 0x50 */
  uint8_t RESERVED_3[12];
  __IO uint32_t DLLCRA;                            /**< DLL Flash Memory A Configuration Register, offset: 0x60 */
  __IO uint32_t DLLCRB;                            /**< DLL Flash Memory B Configuration Register, offset: 0x64 */
  uint8_t RESERVED_4[4];
  __IO uint32_t PARITYCR;                          /**< Parity Configuration Register, offset: 0x6C */
  uint8_t RESERVED_5[144];
  __IO uint32_t SFAR;                              /**< Serial Flash Memory Address Register, offset: 0x100 */
  __IO uint32_t SFACR;                             /**< Serial Flash Memory Address Configuration Register, offset: 0x104 */
  __IO uint32_t SMPR;                              /**< Sampling Register, offset: 0x108 */
  __I  uint32_t RBSR;                              /**< RX Buffer Status Register, offset: 0x10C */
  __IO uint32_t RBCT;                              /**< RX Buffer Control Register, offset: 0x110 */
  uint8_t RESERVED_6[12];
  __I  uint32_t AWRSR;                             /**< AHB Write Status Register, offset: 0x120 */
  uint8_t RESERVED_7[8];
  __I  uint32_t DLLSR;                             /**< DLL Status Register, offset: 0x12C */
  __IO uint32_t DLCR;                              /**< Data Learning Configuration Register, offset: 0x130 */
  __I  uint32_t DLSR_FA;                           /**< Data Learning Status Flash Memory A Register, offset: 0x134 */
  __I  uint32_t DLSR_FB;                           /**< Data Learning Status Flash Memory B Register, offset: 0x138 */
  uint8_t RESERVED_8[20];
  __I  uint32_t TBSR;                              /**< TX Buffer Status Register, offset: 0x150 */
  __IO uint32_t TBDR;                              /**< TX Buffer Data Register, offset: 0x154 */
  __IO uint32_t TBCT;                              /**< TX Buffer Control Register, offset: 0x158 */
  __I  uint32_t SR;                                /**< Status Register, offset: 0x15C */
  __IO uint32_t FR;                                /**< Flag Register, offset: 0x160 */
  __IO uint32_t RSER;                              /**< Interrupt and DMA Request Select and Enable Register, offset: 0x164 */
  uint8_t RESERVED_9[4];
  __IO uint32_t SPTRCLR;                           /**< Sequence Pointer Clear Register, offset: 0x16C */
  uint8_t RESERVED_10[16];
  __IO uint32_t SFA1AD;                            /**< Serial Flash Memory A1 Top Address Register, offset: 0x180 */
  __IO uint32_t SFA2AD;                            /**< Serial Flash Memory A2 Top Address Register, offset: 0x184 */
  __IO uint32_t SFB1AD;                            /**< Serial Flash Memory B1 Top Address Register, offset: 0x188 */
  __IO uint32_t SFB2AD;                            /**< Serial Flash Memory B2 Top Address Register, offset: 0x18C */
  __IO uint32_t DLPR;                              /**< Data Learn Pattern Register, offset: 0x190 */
  __I  uint32_t FAILA_ADDR;                        /**< Flash Memory A Failing Address Status Register, offset: 0x194 */
  __I  uint32_t FAILB_ADDR;                        /**< flash Memory B Failing Address Status Register, offset: 0x198 */
  uint8_t RESERVED_11[100];
  __I  uint32_t RBDR[QuadSPI_RBDR_COUNT];          /**< RX Buffer Data Register, array offset: 0x200, array step: 0x4 */
  __IO uint32_t LUTKEY;                            /**< LUT Key Register, offset: 0x300 */
  __IO uint32_t LCKCR;                             /**< LUT Lock Configuration Register, offset: 0x304 */
  uint8_t RESERVED_12[8];
  __IO uint32_t LUT[QuadSPI_LUT_COUNT];            /**< LUT Register, array offset: 0x310, array step: 0x4 */
} QuadSPI_Type, *QuadSPI_MemMapPtr;

/** Number of instances of the QuadSPI module. */
#define QuadSPI_INSTANCE_COUNT                   (1u)

/* QuadSPI - Peripheral instance base addresses */
/** Peripheral QUADSPI base address */
#define IP_QUADSPI_BASE                          (0x40134000u)
/** Peripheral QUADSPI base pointer */
#define IP_QUADSPI                               ((QuadSPI_Type *)IP_QUADSPI_BASE)
/** Array initializer of QuadSPI peripheral base addresses */
#define IP_QuadSPI_BASE_ADDRS                    { IP_QUADSPI_BASE }
/** Array initializer of QuadSPI peripheral base pointers */
#define IP_QuadSPI_BASE_PTRS                     { IP_QUADSPI }

/* ----------------------------------------------------------------------------
   -- QuadSPI Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup QuadSPI_Register_Masks QuadSPI Register Masks
 * @{
 */

/*! @name MCR - Module Configuration Register */
/*! @{ */

#define QuadSPI_MCR_SWRSTSD_MASK                 (0x1U)
#define QuadSPI_MCR_SWRSTSD_SHIFT                (0U)
#define QuadSPI_MCR_SWRSTSD_WIDTH                (1U)
#define QuadSPI_MCR_SWRSTSD(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_SWRSTSD_SHIFT)) & QuadSPI_MCR_SWRSTSD_MASK)

#define QuadSPI_MCR_SWRSTHD_MASK                 (0x2U)
#define QuadSPI_MCR_SWRSTHD_SHIFT                (1U)
#define QuadSPI_MCR_SWRSTHD_WIDTH                (1U)
#define QuadSPI_MCR_SWRSTHD(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_SWRSTHD_SHIFT)) & QuadSPI_MCR_SWRSTHD_MASK)

#define QuadSPI_MCR_DQS_LAT_EN_MASK              (0x20U)
#define QuadSPI_MCR_DQS_LAT_EN_SHIFT             (5U)
#define QuadSPI_MCR_DQS_LAT_EN_WIDTH             (1U)
#define QuadSPI_MCR_DQS_LAT_EN(x)                (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_DQS_LAT_EN_SHIFT)) & QuadSPI_MCR_DQS_LAT_EN_MASK)

#define QuadSPI_MCR_DQS_EN_MASK                  (0x40U)
#define QuadSPI_MCR_DQS_EN_SHIFT                 (6U)
#define QuadSPI_MCR_DQS_EN_WIDTH                 (1U)
#define QuadSPI_MCR_DQS_EN(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_DQS_EN_SHIFT)) & QuadSPI_MCR_DQS_EN_MASK)

#define QuadSPI_MCR_DDR_EN_MASK                  (0x80U)
#define QuadSPI_MCR_DDR_EN_SHIFT                 (7U)
#define QuadSPI_MCR_DDR_EN_WIDTH                 (1U)
#define QuadSPI_MCR_DDR_EN(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_DDR_EN_SHIFT)) & QuadSPI_MCR_DDR_EN_MASK)

#define QuadSPI_MCR_CLR_RXF_MASK                 (0x400U)
#define QuadSPI_MCR_CLR_RXF_SHIFT                (10U)
#define QuadSPI_MCR_CLR_RXF_WIDTH                (1U)
#define QuadSPI_MCR_CLR_RXF(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_CLR_RXF_SHIFT)) & QuadSPI_MCR_CLR_RXF_MASK)

#define QuadSPI_MCR_CLR_TXF_MASK                 (0x800U)
#define QuadSPI_MCR_CLR_TXF_SHIFT                (11U)
#define QuadSPI_MCR_CLR_TXF_WIDTH                (1U)
#define QuadSPI_MCR_CLR_TXF(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_CLR_TXF_SHIFT)) & QuadSPI_MCR_CLR_TXF_MASK)

#define QuadSPI_MCR_DLPEN_MASK                   (0x1000U)
#define QuadSPI_MCR_DLPEN_SHIFT                  (12U)
#define QuadSPI_MCR_DLPEN_WIDTH                  (1U)
#define QuadSPI_MCR_DLPEN(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_DLPEN_SHIFT)) & QuadSPI_MCR_DLPEN_MASK)

#define QuadSPI_MCR_MDIS_MASK                    (0x4000U)
#define QuadSPI_MCR_MDIS_SHIFT                   (14U)
#define QuadSPI_MCR_MDIS_WIDTH                   (1U)
#define QuadSPI_MCR_MDIS(x)                      (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_MDIS_SHIFT)) & QuadSPI_MCR_MDIS_MASK)

#define QuadSPI_MCR_ISD2FA_MASK                  (0x10000U)
#define QuadSPI_MCR_ISD2FA_SHIFT                 (16U)
#define QuadSPI_MCR_ISD2FA_WIDTH                 (1U)
#define QuadSPI_MCR_ISD2FA(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_ISD2FA_SHIFT)) & QuadSPI_MCR_ISD2FA_MASK)

#define QuadSPI_MCR_ISD3FA_MASK                  (0x20000U)
#define QuadSPI_MCR_ISD3FA_SHIFT                 (17U)
#define QuadSPI_MCR_ISD3FA_WIDTH                 (1U)
#define QuadSPI_MCR_ISD3FA(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_ISD3FA_SHIFT)) & QuadSPI_MCR_ISD3FA_MASK)

#define QuadSPI_MCR_ISD2FB_MASK                  (0x40000U)
#define QuadSPI_MCR_ISD2FB_SHIFT                 (18U)
#define QuadSPI_MCR_ISD2FB_WIDTH                 (1U)
#define QuadSPI_MCR_ISD2FB(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_ISD2FB_SHIFT)) & QuadSPI_MCR_ISD2FB_MASK)

#define QuadSPI_MCR_ISD3FB_MASK                  (0x80000U)
#define QuadSPI_MCR_ISD3FB_SHIFT                 (19U)
#define QuadSPI_MCR_ISD3FB_WIDTH                 (1U)
#define QuadSPI_MCR_ISD3FB(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_ISD3FB_SHIFT)) & QuadSPI_MCR_ISD3FB_MASK)

#define QuadSPI_MCR_DQS_FA_SEL_MASK              (0x3000000U)
#define QuadSPI_MCR_DQS_FA_SEL_SHIFT             (24U)
#define QuadSPI_MCR_DQS_FA_SEL_WIDTH             (2U)
#define QuadSPI_MCR_DQS_FA_SEL(x)                (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_DQS_FA_SEL_SHIFT)) & QuadSPI_MCR_DQS_FA_SEL_MASK)

#define QuadSPI_MCR_CKN_FA_EN_MASK               (0x4000000U)
#define QuadSPI_MCR_CKN_FA_EN_SHIFT              (26U)
#define QuadSPI_MCR_CKN_FA_EN_WIDTH              (1U)
#define QuadSPI_MCR_CKN_FA_EN(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_CKN_FA_EN_SHIFT)) & QuadSPI_MCR_CKN_FA_EN_MASK)

#define QuadSPI_MCR_CK2_DCARS_FA_MASK            (0x8000000U)
#define QuadSPI_MCR_CK2_DCARS_FA_SHIFT           (27U)
#define QuadSPI_MCR_CK2_DCARS_FA_WIDTH           (1U)
#define QuadSPI_MCR_CK2_DCARS_FA(x)              (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_CK2_DCARS_FA_SHIFT)) & QuadSPI_MCR_CK2_DCARS_FA_MASK)

#define QuadSPI_MCR_DQS_FB_SEL_MASK              (0x30000000U)
#define QuadSPI_MCR_DQS_FB_SEL_SHIFT             (28U)
#define QuadSPI_MCR_DQS_FB_SEL_WIDTH             (2U)
#define QuadSPI_MCR_DQS_FB_SEL(x)                (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_DQS_FB_SEL_SHIFT)) & QuadSPI_MCR_DQS_FB_SEL_MASK)

#define QuadSPI_MCR_CKN_FB_EN_MASK               (0x40000000U)
#define QuadSPI_MCR_CKN_FB_EN_SHIFT              (30U)
#define QuadSPI_MCR_CKN_FB_EN_WIDTH              (1U)
#define QuadSPI_MCR_CKN_FB_EN(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_CKN_FB_EN_SHIFT)) & QuadSPI_MCR_CKN_FB_EN_MASK)

#define QuadSPI_MCR_CK2_DCARS_FB_MASK            (0x80000000U)
#define QuadSPI_MCR_CK2_DCARS_FB_SHIFT           (31U)
#define QuadSPI_MCR_CK2_DCARS_FB_WIDTH           (1U)
#define QuadSPI_MCR_CK2_DCARS_FB(x)              (((uint32_t)(((uint32_t)(x)) << QuadSPI_MCR_CK2_DCARS_FB_SHIFT)) & QuadSPI_MCR_CK2_DCARS_FB_MASK)
/*! @} */

/*! @name IPCR - IP Configuration Register */
/*! @{ */

#define QuadSPI_IPCR_IDATSZ_MASK                 (0xFFFFU)
#define QuadSPI_IPCR_IDATSZ_SHIFT                (0U)
#define QuadSPI_IPCR_IDATSZ_WIDTH                (16U)
#define QuadSPI_IPCR_IDATSZ(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_IPCR_IDATSZ_SHIFT)) & QuadSPI_IPCR_IDATSZ_MASK)

#define QuadSPI_IPCR_PAR_EN_MASK                 (0x10000U)
#define QuadSPI_IPCR_PAR_EN_SHIFT                (16U)
#define QuadSPI_IPCR_PAR_EN_WIDTH                (1U)
#define QuadSPI_IPCR_PAR_EN(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_IPCR_PAR_EN_SHIFT)) & QuadSPI_IPCR_PAR_EN_MASK)

#define QuadSPI_IPCR_SEQID_MASK                  (0xF000000U)
#define QuadSPI_IPCR_SEQID_SHIFT                 (24U)
#define QuadSPI_IPCR_SEQID_WIDTH                 (4U)
#define QuadSPI_IPCR_SEQID(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_IPCR_SEQID_SHIFT)) & QuadSPI_IPCR_SEQID_MASK)
/*! @} */

/*! @name FLSHCR - Flash Memory Configuration Register */
/*! @{ */

#define QuadSPI_FLSHCR_TCSS_MASK                 (0xFU)
#define QuadSPI_FLSHCR_TCSS_SHIFT                (0U)
#define QuadSPI_FLSHCR_TCSS_WIDTH                (4U)
#define QuadSPI_FLSHCR_TCSS(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_FLSHCR_TCSS_SHIFT)) & QuadSPI_FLSHCR_TCSS_MASK)

#define QuadSPI_FLSHCR_TCSH_MASK                 (0xF00U)
#define QuadSPI_FLSHCR_TCSH_SHIFT                (8U)
#define QuadSPI_FLSHCR_TCSH_WIDTH                (4U)
#define QuadSPI_FLSHCR_TCSH(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_FLSHCR_TCSH_SHIFT)) & QuadSPI_FLSHCR_TCSH_MASK)

#define QuadSPI_FLSHCR_TDH_MASK                  (0x30000U)
#define QuadSPI_FLSHCR_TDH_SHIFT                 (16U)
#define QuadSPI_FLSHCR_TDH_WIDTH                 (2U)
#define QuadSPI_FLSHCR_TDH(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_FLSHCR_TDH_SHIFT)) & QuadSPI_FLSHCR_TDH_MASK)
/*! @} */

/*! @name BUF0CR - Buffer 0 Configuration Register */
/*! @{ */

#define QuadSPI_BUF0CR_MSTRID_MASK               (0x3FU)
#define QuadSPI_BUF0CR_MSTRID_SHIFT              (0U)
#define QuadSPI_BUF0CR_MSTRID_WIDTH              (6U)
#define QuadSPI_BUF0CR_MSTRID(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_BUF0CR_MSTRID_SHIFT)) & QuadSPI_BUF0CR_MSTRID_MASK)

#define QuadSPI_BUF0CR_ADATSZ_MASK               (0xFF00U)
#define QuadSPI_BUF0CR_ADATSZ_SHIFT              (8U)
#define QuadSPI_BUF0CR_ADATSZ_WIDTH              (8U)
#define QuadSPI_BUF0CR_ADATSZ(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_BUF0CR_ADATSZ_SHIFT)) & QuadSPI_BUF0CR_ADATSZ_MASK)
/*! @} */

/*! @name BUF1CR - Buffer 1 Configuration Register */
/*! @{ */

#define QuadSPI_BUF1CR_MSTRID_MASK               (0x3FU)
#define QuadSPI_BUF1CR_MSTRID_SHIFT              (0U)
#define QuadSPI_BUF1CR_MSTRID_WIDTH              (6U)
#define QuadSPI_BUF1CR_MSTRID(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_BUF1CR_MSTRID_SHIFT)) & QuadSPI_BUF1CR_MSTRID_MASK)

#define QuadSPI_BUF1CR_ADATSZ_MASK               (0xFF00U)
#define QuadSPI_BUF1CR_ADATSZ_SHIFT              (8U)
#define QuadSPI_BUF1CR_ADATSZ_WIDTH              (8U)
#define QuadSPI_BUF1CR_ADATSZ(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_BUF1CR_ADATSZ_SHIFT)) & QuadSPI_BUF1CR_ADATSZ_MASK)
/*! @} */

/*! @name BUF2CR - Buffer 2 Configuration Register */
/*! @{ */

#define QuadSPI_BUF2CR_MSTRID_MASK               (0x3FU)
#define QuadSPI_BUF2CR_MSTRID_SHIFT              (0U)
#define QuadSPI_BUF2CR_MSTRID_WIDTH              (6U)
#define QuadSPI_BUF2CR_MSTRID(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_BUF2CR_MSTRID_SHIFT)) & QuadSPI_BUF2CR_MSTRID_MASK)

#define QuadSPI_BUF2CR_ADATSZ_MASK               (0xFF00U)
#define QuadSPI_BUF2CR_ADATSZ_SHIFT              (8U)
#define QuadSPI_BUF2CR_ADATSZ_WIDTH              (8U)
#define QuadSPI_BUF2CR_ADATSZ(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_BUF2CR_ADATSZ_SHIFT)) & QuadSPI_BUF2CR_ADATSZ_MASK)
/*! @} */

/*! @name BUF3CR - Buffer 3 Configuration Register */
/*! @{ */

#define QuadSPI_BUF3CR_MSTRID_MASK               (0x3FU)
#define QuadSPI_BUF3CR_MSTRID_SHIFT              (0U)
#define QuadSPI_BUF3CR_MSTRID_WIDTH              (6U)
#define QuadSPI_BUF3CR_MSTRID(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_BUF3CR_MSTRID_SHIFT)) & QuadSPI_BUF3CR_MSTRID_MASK)

#define QuadSPI_BUF3CR_ADATSZ_MASK               (0xFF00U)
#define QuadSPI_BUF3CR_ADATSZ_SHIFT              (8U)
#define QuadSPI_BUF3CR_ADATSZ_WIDTH              (8U)
#define QuadSPI_BUF3CR_ADATSZ(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_BUF3CR_ADATSZ_SHIFT)) & QuadSPI_BUF3CR_ADATSZ_MASK)

#define QuadSPI_BUF3CR_ALLMST_MASK               (0x80000000U)
#define QuadSPI_BUF3CR_ALLMST_SHIFT              (31U)
#define QuadSPI_BUF3CR_ALLMST_WIDTH              (1U)
#define QuadSPI_BUF3CR_ALLMST(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_BUF3CR_ALLMST_SHIFT)) & QuadSPI_BUF3CR_ALLMST_MASK)
/*! @} */

/*! @name BFGENCR - Buffer Generic Configuration Register */
/*! @{ */

#define QuadSPI_BFGENCR_SEQID_MASK               (0xF000U)
#define QuadSPI_BFGENCR_SEQID_SHIFT              (12U)
#define QuadSPI_BFGENCR_SEQID_WIDTH              (4U)
#define QuadSPI_BFGENCR_SEQID(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_BFGENCR_SEQID_SHIFT)) & QuadSPI_BFGENCR_SEQID_MASK)

#define QuadSPI_BFGENCR_PAR_EN_MASK              (0x10000U)
#define QuadSPI_BFGENCR_PAR_EN_SHIFT             (16U)
#define QuadSPI_BFGENCR_PAR_EN_WIDTH             (1U)
#define QuadSPI_BFGENCR_PAR_EN(x)                (((uint32_t)(((uint32_t)(x)) << QuadSPI_BFGENCR_PAR_EN_SHIFT)) & QuadSPI_BFGENCR_PAR_EN_MASK)
/*! @} */

/*! @name BUF0IND - Buffer 0 Top Index Register */
/*! @{ */

#define QuadSPI_BUF0IND_TPINDX0_MASK             (0x7F8U)
#define QuadSPI_BUF0IND_TPINDX0_SHIFT            (3U)
#define QuadSPI_BUF0IND_TPINDX0_WIDTH            (8U)
#define QuadSPI_BUF0IND_TPINDX0(x)               (((uint32_t)(((uint32_t)(x)) << QuadSPI_BUF0IND_TPINDX0_SHIFT)) & QuadSPI_BUF0IND_TPINDX0_MASK)
/*! @} */

/*! @name BUF1IND - Buffer 1 Top Index Register */
/*! @{ */

#define QuadSPI_BUF1IND_TPINDX1_MASK             (0x7F8U)
#define QuadSPI_BUF1IND_TPINDX1_SHIFT            (3U)
#define QuadSPI_BUF1IND_TPINDX1_WIDTH            (8U)
#define QuadSPI_BUF1IND_TPINDX1(x)               (((uint32_t)(((uint32_t)(x)) << QuadSPI_BUF1IND_TPINDX1_SHIFT)) & QuadSPI_BUF1IND_TPINDX1_MASK)
/*! @} */

/*! @name BUF2IND - Buffer 2 Top Index Register */
/*! @{ */

#define QuadSPI_BUF2IND_TPINDX2_MASK             (0x7F8U)
#define QuadSPI_BUF2IND_TPINDX2_SHIFT            (3U)
#define QuadSPI_BUF2IND_TPINDX2_WIDTH            (8U)
#define QuadSPI_BUF2IND_TPINDX2(x)               (((uint32_t)(((uint32_t)(x)) << QuadSPI_BUF2IND_TPINDX2_SHIFT)) & QuadSPI_BUF2IND_TPINDX2_MASK)
/*! @} */

/*! @name AWRCR - AHB Write Configuration Register */
/*! @{ */

#define QuadSPI_AWRCR_AWTRGLVL_MASK              (0xFU)
#define QuadSPI_AWRCR_AWTRGLVL_SHIFT             (0U)
#define QuadSPI_AWRCR_AWTRGLVL_WIDTH             (4U)
#define QuadSPI_AWRCR_AWTRGLVL(x)                (((uint32_t)(((uint32_t)(x)) << QuadSPI_AWRCR_AWTRGLVL_SHIFT)) & QuadSPI_AWRCR_AWTRGLVL_MASK)

#define QuadSPI_AWRCR_PPW_RD_DIS_MASK            (0x4000U)
#define QuadSPI_AWRCR_PPW_RD_DIS_SHIFT           (14U)
#define QuadSPI_AWRCR_PPW_RD_DIS_WIDTH           (1U)
#define QuadSPI_AWRCR_PPW_RD_DIS(x)              (((uint32_t)(((uint32_t)(x)) << QuadSPI_AWRCR_PPW_RD_DIS_SHIFT)) & QuadSPI_AWRCR_PPW_RD_DIS_MASK)

#define QuadSPI_AWRCR_PPW_WR_DIS_MASK            (0x8000U)
#define QuadSPI_AWRCR_PPW_WR_DIS_SHIFT           (15U)
#define QuadSPI_AWRCR_PPW_WR_DIS_WIDTH           (1U)
#define QuadSPI_AWRCR_PPW_WR_DIS(x)              (((uint32_t)(((uint32_t)(x)) << QuadSPI_AWRCR_PPW_WR_DIS_SHIFT)) & QuadSPI_AWRCR_PPW_WR_DIS_MASK)
/*! @} */

/*! @name DLLCRA - DLL Flash Memory A Configuration Register */
/*! @{ */

#define QuadSPI_DLLCRA_SLV_UPD_MASK              (0x1U)
#define QuadSPI_DLLCRA_SLV_UPD_SHIFT             (0U)
#define QuadSPI_DLLCRA_SLV_UPD_WIDTH             (1U)
#define QuadSPI_DLLCRA_SLV_UPD(x)                (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRA_SLV_UPD_SHIFT)) & QuadSPI_DLLCRA_SLV_UPD_MASK)

#define QuadSPI_DLLCRA_SLV_DLL_BYPASS_MASK       (0x2U)
#define QuadSPI_DLLCRA_SLV_DLL_BYPASS_SHIFT      (1U)
#define QuadSPI_DLLCRA_SLV_DLL_BYPASS_WIDTH      (1U)
#define QuadSPI_DLLCRA_SLV_DLL_BYPASS(x)         (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRA_SLV_DLL_BYPASS_SHIFT)) & QuadSPI_DLLCRA_SLV_DLL_BYPASS_MASK)

#define QuadSPI_DLLCRA_SLV_EN_MASK               (0x4U)
#define QuadSPI_DLLCRA_SLV_EN_SHIFT              (2U)
#define QuadSPI_DLLCRA_SLV_EN_WIDTH              (1U)
#define QuadSPI_DLLCRA_SLV_EN(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRA_SLV_EN_SHIFT)) & QuadSPI_DLLCRA_SLV_EN_MASK)

#define QuadSPI_DLLCRA_SLAVE_AUTO_UPDT_MASK      (0x8U)
#define QuadSPI_DLLCRA_SLAVE_AUTO_UPDT_SHIFT     (3U)
#define QuadSPI_DLLCRA_SLAVE_AUTO_UPDT_WIDTH     (1U)
#define QuadSPI_DLLCRA_SLAVE_AUTO_UPDT(x)        (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRA_SLAVE_AUTO_UPDT_SHIFT)) & QuadSPI_DLLCRA_SLAVE_AUTO_UPDT_MASK)

#define QuadSPI_DLLCRA_SLV_DLY_COARSE_MASK       (0xF00U)
#define QuadSPI_DLLCRA_SLV_DLY_COARSE_SHIFT      (8U)
#define QuadSPI_DLLCRA_SLV_DLY_COARSE_WIDTH      (4U)
#define QuadSPI_DLLCRA_SLV_DLY_COARSE(x)         (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRA_SLV_DLY_COARSE_SHIFT)) & QuadSPI_DLLCRA_SLV_DLY_COARSE_MASK)

#define QuadSPI_DLLCRA_SLV_DLY_OFFSET_MASK       (0x7000U)
#define QuadSPI_DLLCRA_SLV_DLY_OFFSET_SHIFT      (12U)
#define QuadSPI_DLLCRA_SLV_DLY_OFFSET_WIDTH      (3U)
#define QuadSPI_DLLCRA_SLV_DLY_OFFSET(x)         (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRA_SLV_DLY_OFFSET_SHIFT)) & QuadSPI_DLLCRA_SLV_DLY_OFFSET_MASK)

#define QuadSPI_DLLCRA_SLV_FINE_OFFSET_MASK      (0xF0000U)
#define QuadSPI_DLLCRA_SLV_FINE_OFFSET_SHIFT     (16U)
#define QuadSPI_DLLCRA_SLV_FINE_OFFSET_WIDTH     (4U)
#define QuadSPI_DLLCRA_SLV_FINE_OFFSET(x)        (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRA_SLV_FINE_OFFSET_SHIFT)) & QuadSPI_DLLCRA_SLV_FINE_OFFSET_MASK)

#define QuadSPI_DLLCRA_DLLRES_MASK               (0xF00000U)
#define QuadSPI_DLLCRA_DLLRES_SHIFT              (20U)
#define QuadSPI_DLLCRA_DLLRES_WIDTH              (4U)
#define QuadSPI_DLLCRA_DLLRES(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRA_DLLRES_SHIFT)) & QuadSPI_DLLCRA_DLLRES_MASK)

#define QuadSPI_DLLCRA_DLL_REFCNTR_MASK          (0xF000000U)
#define QuadSPI_DLLCRA_DLL_REFCNTR_SHIFT         (24U)
#define QuadSPI_DLLCRA_DLL_REFCNTR_WIDTH         (4U)
#define QuadSPI_DLLCRA_DLL_REFCNTR(x)            (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRA_DLL_REFCNTR_SHIFT)) & QuadSPI_DLLCRA_DLL_REFCNTR_MASK)

#define QuadSPI_DLLCRA_FREQEN_MASK               (0x40000000U)
#define QuadSPI_DLLCRA_FREQEN_SHIFT              (30U)
#define QuadSPI_DLLCRA_FREQEN_WIDTH              (1U)
#define QuadSPI_DLLCRA_FREQEN(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRA_FREQEN_SHIFT)) & QuadSPI_DLLCRA_FREQEN_MASK)

#define QuadSPI_DLLCRA_DLLEN_MASK                (0x80000000U)
#define QuadSPI_DLLCRA_DLLEN_SHIFT               (31U)
#define QuadSPI_DLLCRA_DLLEN_WIDTH               (1U)
#define QuadSPI_DLLCRA_DLLEN(x)                  (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRA_DLLEN_SHIFT)) & QuadSPI_DLLCRA_DLLEN_MASK)
/*! @} */

/*! @name DLLCRB - DLL Flash Memory B Configuration Register */
/*! @{ */

#define QuadSPI_DLLCRB_SLV_UPD_MASK              (0x1U)
#define QuadSPI_DLLCRB_SLV_UPD_SHIFT             (0U)
#define QuadSPI_DLLCRB_SLV_UPD_WIDTH             (1U)
#define QuadSPI_DLLCRB_SLV_UPD(x)                (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRB_SLV_UPD_SHIFT)) & QuadSPI_DLLCRB_SLV_UPD_MASK)

#define QuadSPI_DLLCRB_SLV_DLL_BYPASS_MASK       (0x2U)
#define QuadSPI_DLLCRB_SLV_DLL_BYPASS_SHIFT      (1U)
#define QuadSPI_DLLCRB_SLV_DLL_BYPASS_WIDTH      (1U)
#define QuadSPI_DLLCRB_SLV_DLL_BYPASS(x)         (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRB_SLV_DLL_BYPASS_SHIFT)) & QuadSPI_DLLCRB_SLV_DLL_BYPASS_MASK)

#define QuadSPI_DLLCRB_SLV_EN_MASK               (0x4U)
#define QuadSPI_DLLCRB_SLV_EN_SHIFT              (2U)
#define QuadSPI_DLLCRB_SLV_EN_WIDTH              (1U)
#define QuadSPI_DLLCRB_SLV_EN(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRB_SLV_EN_SHIFT)) & QuadSPI_DLLCRB_SLV_EN_MASK)

#define QuadSPI_DLLCRB_SLAVE_AUTO_UPDT_MASK      (0x8U)
#define QuadSPI_DLLCRB_SLAVE_AUTO_UPDT_SHIFT     (3U)
#define QuadSPI_DLLCRB_SLAVE_AUTO_UPDT_WIDTH     (1U)
#define QuadSPI_DLLCRB_SLAVE_AUTO_UPDT(x)        (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRB_SLAVE_AUTO_UPDT_SHIFT)) & QuadSPI_DLLCRB_SLAVE_AUTO_UPDT_MASK)

#define QuadSPI_DLLCRB_SLV_DLY_COARSE_MASK       (0xF00U)
#define QuadSPI_DLLCRB_SLV_DLY_COARSE_SHIFT      (8U)
#define QuadSPI_DLLCRB_SLV_DLY_COARSE_WIDTH      (4U)
#define QuadSPI_DLLCRB_SLV_DLY_COARSE(x)         (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRB_SLV_DLY_COARSE_SHIFT)) & QuadSPI_DLLCRB_SLV_DLY_COARSE_MASK)

#define QuadSPI_DLLCRB_SLV_DLY_OFFSET_MASK       (0x7000U)
#define QuadSPI_DLLCRB_SLV_DLY_OFFSET_SHIFT      (12U)
#define QuadSPI_DLLCRB_SLV_DLY_OFFSET_WIDTH      (3U)
#define QuadSPI_DLLCRB_SLV_DLY_OFFSET(x)         (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRB_SLV_DLY_OFFSET_SHIFT)) & QuadSPI_DLLCRB_SLV_DLY_OFFSET_MASK)

#define QuadSPI_DLLCRB_SLV_FINE_OFFSET_MASK      (0xF0000U)
#define QuadSPI_DLLCRB_SLV_FINE_OFFSET_SHIFT     (16U)
#define QuadSPI_DLLCRB_SLV_FINE_OFFSET_WIDTH     (4U)
#define QuadSPI_DLLCRB_SLV_FINE_OFFSET(x)        (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRB_SLV_FINE_OFFSET_SHIFT)) & QuadSPI_DLLCRB_SLV_FINE_OFFSET_MASK)

#define QuadSPI_DLLCRB_DLLRES_MASK               (0xF00000U)
#define QuadSPI_DLLCRB_DLLRES_SHIFT              (20U)
#define QuadSPI_DLLCRB_DLLRES_WIDTH              (4U)
#define QuadSPI_DLLCRB_DLLRES(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRB_DLLRES_SHIFT)) & QuadSPI_DLLCRB_DLLRES_MASK)

#define QuadSPI_DLLCRB_DLL_REFCNTR_MASK          (0xF000000U)
#define QuadSPI_DLLCRB_DLL_REFCNTR_SHIFT         (24U)
#define QuadSPI_DLLCRB_DLL_REFCNTR_WIDTH         (4U)
#define QuadSPI_DLLCRB_DLL_REFCNTR(x)            (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRB_DLL_REFCNTR_SHIFT)) & QuadSPI_DLLCRB_DLL_REFCNTR_MASK)

#define QuadSPI_DLLCRB_FREQEN_MASK               (0x40000000U)
#define QuadSPI_DLLCRB_FREQEN_SHIFT              (30U)
#define QuadSPI_DLLCRB_FREQEN_WIDTH              (1U)
#define QuadSPI_DLLCRB_FREQEN(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRB_FREQEN_SHIFT)) & QuadSPI_DLLCRB_FREQEN_MASK)

#define QuadSPI_DLLCRB_DLLEN_MASK                (0x80000000U)
#define QuadSPI_DLLCRB_DLLEN_SHIFT               (31U)
#define QuadSPI_DLLCRB_DLLEN_WIDTH               (1U)
#define QuadSPI_DLLCRB_DLLEN(x)                  (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLCRB_DLLEN_SHIFT)) & QuadSPI_DLLCRB_DLLEN_MASK)
/*! @} */

/*! @name PARITYCR - Parity Configuration Register */
/*! @{ */

#define QuadSPI_PARITYCR_CRCBIN_FA_MASK          (0x20U)
#define QuadSPI_PARITYCR_CRCBIN_FA_SHIFT         (5U)
#define QuadSPI_PARITYCR_CRCBIN_FA_WIDTH         (1U)
#define QuadSPI_PARITYCR_CRCBIN_FA(x)            (((uint32_t)(((uint32_t)(x)) << QuadSPI_PARITYCR_CRCBIN_FA_SHIFT)) & QuadSPI_PARITYCR_CRCBIN_FA_MASK)

#define QuadSPI_PARITYCR_CRCBEN_FA_MASK          (0x40U)
#define QuadSPI_PARITYCR_CRCBEN_FA_SHIFT         (6U)
#define QuadSPI_PARITYCR_CRCBEN_FA_WIDTH         (1U)
#define QuadSPI_PARITYCR_CRCBEN_FA(x)            (((uint32_t)(((uint32_t)(x)) << QuadSPI_PARITYCR_CRCBEN_FA_SHIFT)) & QuadSPI_PARITYCR_CRCBEN_FA_MASK)

#define QuadSPI_PARITYCR_CRCEN_FA_MASK           (0x80U)
#define QuadSPI_PARITYCR_CRCEN_FA_SHIFT          (7U)
#define QuadSPI_PARITYCR_CRCEN_FA_WIDTH          (1U)
#define QuadSPI_PARITYCR_CRCEN_FA(x)             (((uint32_t)(((uint32_t)(x)) << QuadSPI_PARITYCR_CRCEN_FA_SHIFT)) & QuadSPI_PARITYCR_CRCEN_FA_MASK)

#define QuadSPI_PARITYCR_BYTE_SIZE_FA_MASK       (0x100U)
#define QuadSPI_PARITYCR_BYTE_SIZE_FA_SHIFT      (8U)
#define QuadSPI_PARITYCR_BYTE_SIZE_FA_WIDTH      (1U)
#define QuadSPI_PARITYCR_BYTE_SIZE_FA(x)         (((uint32_t)(((uint32_t)(x)) << QuadSPI_PARITYCR_BYTE_SIZE_FA_SHIFT)) & QuadSPI_PARITYCR_BYTE_SIZE_FA_MASK)

#define QuadSPI_PARITYCR_CHUNKSIZE_FA_MASK       (0x7E00U)
#define QuadSPI_PARITYCR_CHUNKSIZE_FA_SHIFT      (9U)
#define QuadSPI_PARITYCR_CHUNKSIZE_FA_WIDTH      (6U)
#define QuadSPI_PARITYCR_CHUNKSIZE_FA(x)         (((uint32_t)(((uint32_t)(x)) << QuadSPI_PARITYCR_CHUNKSIZE_FA_SHIFT)) & QuadSPI_PARITYCR_CHUNKSIZE_FA_MASK)

#define QuadSPI_PARITYCR_CRC_WNDW_FA_MASK        (0x8000U)
#define QuadSPI_PARITYCR_CRC_WNDW_FA_SHIFT       (15U)
#define QuadSPI_PARITYCR_CRC_WNDW_FA_WIDTH       (1U)
#define QuadSPI_PARITYCR_CRC_WNDW_FA(x)          (((uint32_t)(((uint32_t)(x)) << QuadSPI_PARITYCR_CRC_WNDW_FA_SHIFT)) & QuadSPI_PARITYCR_CRC_WNDW_FA_MASK)

#define QuadSPI_PARITYCR_CRCBIN_FB_MASK          (0x200000U)
#define QuadSPI_PARITYCR_CRCBIN_FB_SHIFT         (21U)
#define QuadSPI_PARITYCR_CRCBIN_FB_WIDTH         (1U)
#define QuadSPI_PARITYCR_CRCBIN_FB(x)            (((uint32_t)(((uint32_t)(x)) << QuadSPI_PARITYCR_CRCBIN_FB_SHIFT)) & QuadSPI_PARITYCR_CRCBIN_FB_MASK)

#define QuadSPI_PARITYCR_CRCBEN_FB_MASK          (0x400000U)
#define QuadSPI_PARITYCR_CRCBEN_FB_SHIFT         (22U)
#define QuadSPI_PARITYCR_CRCBEN_FB_WIDTH         (1U)
#define QuadSPI_PARITYCR_CRCBEN_FB(x)            (((uint32_t)(((uint32_t)(x)) << QuadSPI_PARITYCR_CRCBEN_FB_SHIFT)) & QuadSPI_PARITYCR_CRCBEN_FB_MASK)

#define QuadSPI_PARITYCR_CRCEN_FB_MASK           (0x800000U)
#define QuadSPI_PARITYCR_CRCEN_FB_SHIFT          (23U)
#define QuadSPI_PARITYCR_CRCEN_FB_WIDTH          (1U)
#define QuadSPI_PARITYCR_CRCEN_FB(x)             (((uint32_t)(((uint32_t)(x)) << QuadSPI_PARITYCR_CRCEN_FB_SHIFT)) & QuadSPI_PARITYCR_CRCEN_FB_MASK)

#define QuadSPI_PARITYCR_BYTE_SIZE_FB_MASK       (0x1000000U)
#define QuadSPI_PARITYCR_BYTE_SIZE_FB_SHIFT      (24U)
#define QuadSPI_PARITYCR_BYTE_SIZE_FB_WIDTH      (1U)
#define QuadSPI_PARITYCR_BYTE_SIZE_FB(x)         (((uint32_t)(((uint32_t)(x)) << QuadSPI_PARITYCR_BYTE_SIZE_FB_SHIFT)) & QuadSPI_PARITYCR_BYTE_SIZE_FB_MASK)

#define QuadSPI_PARITYCR_CHUNKSIZE_FB_MASK       (0x7E000000U)
#define QuadSPI_PARITYCR_CHUNKSIZE_FB_SHIFT      (25U)
#define QuadSPI_PARITYCR_CHUNKSIZE_FB_WIDTH      (6U)
#define QuadSPI_PARITYCR_CHUNKSIZE_FB(x)         (((uint32_t)(((uint32_t)(x)) << QuadSPI_PARITYCR_CHUNKSIZE_FB_SHIFT)) & QuadSPI_PARITYCR_CHUNKSIZE_FB_MASK)

#define QuadSPI_PARITYCR_CRC_WNDW_FB_MASK        (0x80000000U)
#define QuadSPI_PARITYCR_CRC_WNDW_FB_SHIFT       (31U)
#define QuadSPI_PARITYCR_CRC_WNDW_FB_WIDTH       (1U)
#define QuadSPI_PARITYCR_CRC_WNDW_FB(x)          (((uint32_t)(((uint32_t)(x)) << QuadSPI_PARITYCR_CRC_WNDW_FB_SHIFT)) & QuadSPI_PARITYCR_CRC_WNDW_FB_MASK)
/*! @} */

/*! @name SFAR - Serial Flash Memory Address Register */
/*! @{ */

#define QuadSPI_SFAR_SFADR_MASK                  (0xFFFFFFFFU)
#define QuadSPI_SFAR_SFADR_SHIFT                 (0U)
#define QuadSPI_SFAR_SFADR_WIDTH                 (32U)
#define QuadSPI_SFAR_SFADR(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_SFAR_SFADR_SHIFT)) & QuadSPI_SFAR_SFADR_MASK)
/*! @} */

/*! @name SFACR - Serial Flash Memory Address Configuration Register */
/*! @{ */

#define QuadSPI_SFACR_CAS_MASK                   (0xFU)
#define QuadSPI_SFACR_CAS_SHIFT                  (0U)
#define QuadSPI_SFACR_CAS_WIDTH                  (4U)
#define QuadSPI_SFACR_CAS(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_SFACR_CAS_SHIFT)) & QuadSPI_SFACR_CAS_MASK)

#define QuadSPI_SFACR_PPWB_MASK                  (0x1F00U)
#define QuadSPI_SFACR_PPWB_SHIFT                 (8U)
#define QuadSPI_SFACR_PPWB_WIDTH                 (5U)
#define QuadSPI_SFACR_PPWB(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_SFACR_PPWB_SHIFT)) & QuadSPI_SFACR_PPWB_MASK)

#define QuadSPI_SFACR_WA_MASK                    (0x10000U)
#define QuadSPI_SFACR_WA_SHIFT                   (16U)
#define QuadSPI_SFACR_WA_WIDTH                   (1U)
#define QuadSPI_SFACR_WA(x)                      (((uint32_t)(((uint32_t)(x)) << QuadSPI_SFACR_WA_SHIFT)) & QuadSPI_SFACR_WA_MASK)

#define QuadSPI_SFACR_BYTE_SWAP_MASK             (0x20000U)
#define QuadSPI_SFACR_BYTE_SWAP_SHIFT            (17U)
#define QuadSPI_SFACR_BYTE_SWAP_WIDTH            (1U)
#define QuadSPI_SFACR_BYTE_SWAP(x)               (((uint32_t)(((uint32_t)(x)) << QuadSPI_SFACR_BYTE_SWAP_SHIFT)) & QuadSPI_SFACR_BYTE_SWAP_MASK)
/*! @} */

/*! @name SMPR - Sampling Register */
/*! @{ */

#define QuadSPI_SMPR_FSPHS_MASK                  (0x20U)
#define QuadSPI_SMPR_FSPHS_SHIFT                 (5U)
#define QuadSPI_SMPR_FSPHS_WIDTH                 (1U)
#define QuadSPI_SMPR_FSPHS(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_SMPR_FSPHS_SHIFT)) & QuadSPI_SMPR_FSPHS_MASK)

#define QuadSPI_SMPR_FSDLY_MASK                  (0x40U)
#define QuadSPI_SMPR_FSDLY_SHIFT                 (6U)
#define QuadSPI_SMPR_FSDLY_WIDTH                 (1U)
#define QuadSPI_SMPR_FSDLY(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_SMPR_FSDLY_SHIFT)) & QuadSPI_SMPR_FSDLY_MASK)

#define QuadSPI_SMPR_DLLFSMPFA_MASK              (0x7000000U)
#define QuadSPI_SMPR_DLLFSMPFA_SHIFT             (24U)
#define QuadSPI_SMPR_DLLFSMPFA_WIDTH             (3U)
#define QuadSPI_SMPR_DLLFSMPFA(x)                (((uint32_t)(((uint32_t)(x)) << QuadSPI_SMPR_DLLFSMPFA_SHIFT)) & QuadSPI_SMPR_DLLFSMPFA_MASK)

#define QuadSPI_SMPR_DLLFSMPFB_MASK              (0x70000000U)
#define QuadSPI_SMPR_DLLFSMPFB_SHIFT             (28U)
#define QuadSPI_SMPR_DLLFSMPFB_WIDTH             (3U)
#define QuadSPI_SMPR_DLLFSMPFB(x)                (((uint32_t)(((uint32_t)(x)) << QuadSPI_SMPR_DLLFSMPFB_SHIFT)) & QuadSPI_SMPR_DLLFSMPFB_MASK)
/*! @} */

/*! @name RBSR - RX Buffer Status Register */
/*! @{ */

#define QuadSPI_RBSR_RDBFL_MASK                  (0xFFU)
#define QuadSPI_RBSR_RDBFL_SHIFT                 (0U)
#define QuadSPI_RBSR_RDBFL_WIDTH                 (8U)
#define QuadSPI_RBSR_RDBFL(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_RBSR_RDBFL_SHIFT)) & QuadSPI_RBSR_RDBFL_MASK)

#define QuadSPI_RBSR_RDCTR_MASK                  (0xFFFF0000U)
#define QuadSPI_RBSR_RDCTR_SHIFT                 (16U)
#define QuadSPI_RBSR_RDCTR_WIDTH                 (16U)
#define QuadSPI_RBSR_RDCTR(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_RBSR_RDCTR_SHIFT)) & QuadSPI_RBSR_RDCTR_MASK)
/*! @} */

/*! @name RBCT - RX Buffer Control Register */
/*! @{ */

#define QuadSPI_RBCT_WMRK_MASK                   (0x7FU)
#define QuadSPI_RBCT_WMRK_SHIFT                  (0U)
#define QuadSPI_RBCT_WMRK_WIDTH                  (7U)
#define QuadSPI_RBCT_WMRK(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_RBCT_WMRK_SHIFT)) & QuadSPI_RBCT_WMRK_MASK)
/*! @} */

/*! @name AWRSR - AHB Write Status Register */
/*! @{ */

#define QuadSPI_AWRSR_SEQAUJOIN_MASK             (0x4U)
#define QuadSPI_AWRSR_SEQAUJOIN_SHIFT            (2U)
#define QuadSPI_AWRSR_SEQAUJOIN_WIDTH            (1U)
#define QuadSPI_AWRSR_SEQAUJOIN(x)               (((uint32_t)(((uint32_t)(x)) << QuadSPI_AWRSR_SEQAUJOIN_SHIFT)) & QuadSPI_AWRSR_SEQAUJOIN_MASK)
/*! @} */

/*! @name DLLSR - DLL Status Register */
/*! @{ */

#define QuadSPI_DLLSR_DLLA_SLV_COARSE_VAL_MASK   (0xFU)
#define QuadSPI_DLLSR_DLLA_SLV_COARSE_VAL_SHIFT  (0U)
#define QuadSPI_DLLSR_DLLA_SLV_COARSE_VAL_WIDTH  (4U)
#define QuadSPI_DLLSR_DLLA_SLV_COARSE_VAL(x)     (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLSR_DLLA_SLV_COARSE_VAL_SHIFT)) & QuadSPI_DLLSR_DLLA_SLV_COARSE_VAL_MASK)

#define QuadSPI_DLLSR_DLLA_SLV_FINE_VAL_MASK     (0xF0U)
#define QuadSPI_DLLSR_DLLA_SLV_FINE_VAL_SHIFT    (4U)
#define QuadSPI_DLLSR_DLLA_SLV_FINE_VAL_WIDTH    (4U)
#define QuadSPI_DLLSR_DLLA_SLV_FINE_VAL(x)       (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLSR_DLLA_SLV_FINE_VAL_SHIFT)) & QuadSPI_DLLSR_DLLA_SLV_FINE_VAL_MASK)

#define QuadSPI_DLLSR_DLLA_FINE_UNDERFLOW_MASK   (0x1000U)
#define QuadSPI_DLLSR_DLLA_FINE_UNDERFLOW_SHIFT  (12U)
#define QuadSPI_DLLSR_DLLA_FINE_UNDERFLOW_WIDTH  (1U)
#define QuadSPI_DLLSR_DLLA_FINE_UNDERFLOW(x)     (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLSR_DLLA_FINE_UNDERFLOW_SHIFT)) & QuadSPI_DLLSR_DLLA_FINE_UNDERFLOW_MASK)

#define QuadSPI_DLLSR_DLLA_RANGE_ERR_MASK        (0x2000U)
#define QuadSPI_DLLSR_DLLA_RANGE_ERR_SHIFT       (13U)
#define QuadSPI_DLLSR_DLLA_RANGE_ERR_WIDTH       (1U)
#define QuadSPI_DLLSR_DLLA_RANGE_ERR(x)          (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLSR_DLLA_RANGE_ERR_SHIFT)) & QuadSPI_DLLSR_DLLA_RANGE_ERR_MASK)

#define QuadSPI_DLLSR_SLVA_LOCK_MASK             (0x4000U)
#define QuadSPI_DLLSR_SLVA_LOCK_SHIFT            (14U)
#define QuadSPI_DLLSR_SLVA_LOCK_WIDTH            (1U)
#define QuadSPI_DLLSR_SLVA_LOCK(x)               (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLSR_SLVA_LOCK_SHIFT)) & QuadSPI_DLLSR_SLVA_LOCK_MASK)

#define QuadSPI_DLLSR_DLLA_LOCK_MASK             (0x8000U)
#define QuadSPI_DLLSR_DLLA_LOCK_SHIFT            (15U)
#define QuadSPI_DLLSR_DLLA_LOCK_WIDTH            (1U)
#define QuadSPI_DLLSR_DLLA_LOCK(x)               (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLSR_DLLA_LOCK_SHIFT)) & QuadSPI_DLLSR_DLLA_LOCK_MASK)

#define QuadSPI_DLLSR_DLLB_SLV_COARSE_VAL_MASK   (0xF0000U)
#define QuadSPI_DLLSR_DLLB_SLV_COARSE_VAL_SHIFT  (16U)
#define QuadSPI_DLLSR_DLLB_SLV_COARSE_VAL_WIDTH  (4U)
#define QuadSPI_DLLSR_DLLB_SLV_COARSE_VAL(x)     (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLSR_DLLB_SLV_COARSE_VAL_SHIFT)) & QuadSPI_DLLSR_DLLB_SLV_COARSE_VAL_MASK)

#define QuadSPI_DLLSR_DLLB_SLV_FINE_VAL_MASK     (0xF00000U)
#define QuadSPI_DLLSR_DLLB_SLV_FINE_VAL_SHIFT    (20U)
#define QuadSPI_DLLSR_DLLB_SLV_FINE_VAL_WIDTH    (4U)
#define QuadSPI_DLLSR_DLLB_SLV_FINE_VAL(x)       (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLSR_DLLB_SLV_FINE_VAL_SHIFT)) & QuadSPI_DLLSR_DLLB_SLV_FINE_VAL_MASK)

#define QuadSPI_DLLSR_DLLB_FINE_UNDERFLOW_MASK   (0x10000000U)
#define QuadSPI_DLLSR_DLLB_FINE_UNDERFLOW_SHIFT  (28U)
#define QuadSPI_DLLSR_DLLB_FINE_UNDERFLOW_WIDTH  (1U)
#define QuadSPI_DLLSR_DLLB_FINE_UNDERFLOW(x)     (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLSR_DLLB_FINE_UNDERFLOW_SHIFT)) & QuadSPI_DLLSR_DLLB_FINE_UNDERFLOW_MASK)

#define QuadSPI_DLLSR_DLLB_RANGE_ERR_MASK        (0x20000000U)
#define QuadSPI_DLLSR_DLLB_RANGE_ERR_SHIFT       (29U)
#define QuadSPI_DLLSR_DLLB_RANGE_ERR_WIDTH       (1U)
#define QuadSPI_DLLSR_DLLB_RANGE_ERR(x)          (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLSR_DLLB_RANGE_ERR_SHIFT)) & QuadSPI_DLLSR_DLLB_RANGE_ERR_MASK)

#define QuadSPI_DLLSR_SLVB_LOCK_MASK             (0x40000000U)
#define QuadSPI_DLLSR_SLVB_LOCK_SHIFT            (30U)
#define QuadSPI_DLLSR_SLVB_LOCK_WIDTH            (1U)
#define QuadSPI_DLLSR_SLVB_LOCK(x)               (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLSR_SLVB_LOCK_SHIFT)) & QuadSPI_DLLSR_SLVB_LOCK_MASK)

#define QuadSPI_DLLSR_DLLB_LOCK_MASK             (0x80000000U)
#define QuadSPI_DLLSR_DLLB_LOCK_SHIFT            (31U)
#define QuadSPI_DLLSR_DLLB_LOCK_WIDTH            (1U)
#define QuadSPI_DLLSR_DLLB_LOCK(x)               (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLLSR_DLLB_LOCK_SHIFT)) & QuadSPI_DLLSR_DLLB_LOCK_MASK)
/*! @} */

/*! @name DLCR - Data Learning Configuration Register */
/*! @{ */

#define QuadSPI_DLCR_DLP_SEL_FA_MASK             (0xC000U)
#define QuadSPI_DLCR_DLP_SEL_FA_SHIFT            (14U)
#define QuadSPI_DLCR_DLP_SEL_FA_WIDTH            (2U)
#define QuadSPI_DLCR_DLP_SEL_FA(x)               (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLCR_DLP_SEL_FA_SHIFT)) & QuadSPI_DLCR_DLP_SEL_FA_MASK)

#define QuadSPI_DLCR_DL_NONDLP_FLSH_MASK         (0x1000000U)
#define QuadSPI_DLCR_DL_NONDLP_FLSH_SHIFT        (24U)
#define QuadSPI_DLCR_DL_NONDLP_FLSH_WIDTH        (1U)
#define QuadSPI_DLCR_DL_NONDLP_FLSH(x)           (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLCR_DL_NONDLP_FLSH_SHIFT)) & QuadSPI_DLCR_DL_NONDLP_FLSH_MASK)

#define QuadSPI_DLCR_DLP_SEL_FB_MASK             (0xC0000000U)
#define QuadSPI_DLCR_DLP_SEL_FB_SHIFT            (30U)
#define QuadSPI_DLCR_DLP_SEL_FB_WIDTH            (2U)
#define QuadSPI_DLCR_DLP_SEL_FB(x)               (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLCR_DLP_SEL_FB_SHIFT)) & QuadSPI_DLCR_DLP_SEL_FB_MASK)
/*! @} */

/*! @name DLSR_FA - Data Learning Status Flash Memory A Register */
/*! @{ */

#define QuadSPI_DLSR_FA_NEG_EDGE_MASK            (0xFFU)
#define QuadSPI_DLSR_FA_NEG_EDGE_SHIFT           (0U)
#define QuadSPI_DLSR_FA_NEG_EDGE_WIDTH           (8U)
#define QuadSPI_DLSR_FA_NEG_EDGE(x)              (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLSR_FA_NEG_EDGE_SHIFT)) & QuadSPI_DLSR_FA_NEG_EDGE_MASK)

#define QuadSPI_DLSR_FA_POS_EDGE_MASK            (0xFF00U)
#define QuadSPI_DLSR_FA_POS_EDGE_SHIFT           (8U)
#define QuadSPI_DLSR_FA_POS_EDGE_WIDTH           (8U)
#define QuadSPI_DLSR_FA_POS_EDGE(x)              (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLSR_FA_POS_EDGE_SHIFT)) & QuadSPI_DLSR_FA_POS_EDGE_MASK)

#define QuadSPI_DLSR_FA_DLPFFA_MASK              (0x80000000U)
#define QuadSPI_DLSR_FA_DLPFFA_SHIFT             (31U)
#define QuadSPI_DLSR_FA_DLPFFA_WIDTH             (1U)
#define QuadSPI_DLSR_FA_DLPFFA(x)                (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLSR_FA_DLPFFA_SHIFT)) & QuadSPI_DLSR_FA_DLPFFA_MASK)
/*! @} */

/*! @name DLSR_FB - Data Learning Status Flash Memory B Register */
/*! @{ */

#define QuadSPI_DLSR_FB_NEG_EDGE_MASK            (0xFFU)
#define QuadSPI_DLSR_FB_NEG_EDGE_SHIFT           (0U)
#define QuadSPI_DLSR_FB_NEG_EDGE_WIDTH           (8U)
#define QuadSPI_DLSR_FB_NEG_EDGE(x)              (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLSR_FB_NEG_EDGE_SHIFT)) & QuadSPI_DLSR_FB_NEG_EDGE_MASK)

#define QuadSPI_DLSR_FB_POS_EDGE_MASK            (0xFF00U)
#define QuadSPI_DLSR_FB_POS_EDGE_SHIFT           (8U)
#define QuadSPI_DLSR_FB_POS_EDGE_WIDTH           (8U)
#define QuadSPI_DLSR_FB_POS_EDGE(x)              (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLSR_FB_POS_EDGE_SHIFT)) & QuadSPI_DLSR_FB_POS_EDGE_MASK)

#define QuadSPI_DLSR_FB_DLPFFB_MASK              (0x80000000U)
#define QuadSPI_DLSR_FB_DLPFFB_SHIFT             (31U)
#define QuadSPI_DLSR_FB_DLPFFB_WIDTH             (1U)
#define QuadSPI_DLSR_FB_DLPFFB(x)                (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLSR_FB_DLPFFB_SHIFT)) & QuadSPI_DLSR_FB_DLPFFB_MASK)
/*! @} */

/*! @name TBSR - TX Buffer Status Register */
/*! @{ */

#define QuadSPI_TBSR_TRBFL_MASK                  (0x1FFU)
#define QuadSPI_TBSR_TRBFL_SHIFT                 (0U)
#define QuadSPI_TBSR_TRBFL_WIDTH                 (9U)
#define QuadSPI_TBSR_TRBFL(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_TBSR_TRBFL_SHIFT)) & QuadSPI_TBSR_TRBFL_MASK)

#define QuadSPI_TBSR_TRCTR_MASK                  (0xFFFF0000U)
#define QuadSPI_TBSR_TRCTR_SHIFT                 (16U)
#define QuadSPI_TBSR_TRCTR_WIDTH                 (16U)
#define QuadSPI_TBSR_TRCTR(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_TBSR_TRCTR_SHIFT)) & QuadSPI_TBSR_TRCTR_MASK)
/*! @} */

/*! @name TBDR - TX Buffer Data Register */
/*! @{ */

#define QuadSPI_TBDR_TXDATA_MASK                 (0xFFFFFFFFU)
#define QuadSPI_TBDR_TXDATA_SHIFT                (0U)
#define QuadSPI_TBDR_TXDATA_WIDTH                (32U)
#define QuadSPI_TBDR_TXDATA(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_TBDR_TXDATA_SHIFT)) & QuadSPI_TBDR_TXDATA_MASK)
/*! @} */

/*! @name TBCT - TX Buffer Control Register */
/*! @{ */

#define QuadSPI_TBCT_WMRK_MASK                   (0xFFU)
#define QuadSPI_TBCT_WMRK_SHIFT                  (0U)
#define QuadSPI_TBCT_WMRK_WIDTH                  (8U)
#define QuadSPI_TBCT_WMRK(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_TBCT_WMRK_SHIFT)) & QuadSPI_TBCT_WMRK_MASK)
/*! @} */

/*! @name SR - Status Register */
/*! @{ */

#define QuadSPI_SR_BUSY_MASK                     (0x1U)
#define QuadSPI_SR_BUSY_SHIFT                    (0U)
#define QuadSPI_SR_BUSY_WIDTH                    (1U)
#define QuadSPI_SR_BUSY(x)                       (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_BUSY_SHIFT)) & QuadSPI_SR_BUSY_MASK)

#define QuadSPI_SR_IP_ACC_MASK                   (0x2U)
#define QuadSPI_SR_IP_ACC_SHIFT                  (1U)
#define QuadSPI_SR_IP_ACC_WIDTH                  (1U)
#define QuadSPI_SR_IP_ACC(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_IP_ACC_SHIFT)) & QuadSPI_SR_IP_ACC_MASK)

#define QuadSPI_SR_AHB_ACC_MASK                  (0x4U)
#define QuadSPI_SR_AHB_ACC_SHIFT                 (2U)
#define QuadSPI_SR_AHB_ACC_WIDTH                 (1U)
#define QuadSPI_SR_AHB_ACC(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_AHB_ACC_SHIFT)) & QuadSPI_SR_AHB_ACC_MASK)

#define QuadSPI_SR_AWRACC_MASK                   (0x10U)
#define QuadSPI_SR_AWRACC_SHIFT                  (4U)
#define QuadSPI_SR_AWRACC_WIDTH                  (1U)
#define QuadSPI_SR_AWRACC(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_AWRACC_SHIFT)) & QuadSPI_SR_AWRACC_MASK)

#define QuadSPI_SR_AHBTRN_MASK                   (0x40U)
#define QuadSPI_SR_AHBTRN_SHIFT                  (6U)
#define QuadSPI_SR_AHBTRN_WIDTH                  (1U)
#define QuadSPI_SR_AHBTRN(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_AHBTRN_SHIFT)) & QuadSPI_SR_AHBTRN_MASK)

#define QuadSPI_SR_AHB0NE_MASK                   (0x80U)
#define QuadSPI_SR_AHB0NE_SHIFT                  (7U)
#define QuadSPI_SR_AHB0NE_WIDTH                  (1U)
#define QuadSPI_SR_AHB0NE(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_AHB0NE_SHIFT)) & QuadSPI_SR_AHB0NE_MASK)

#define QuadSPI_SR_AHB1NE_MASK                   (0x100U)
#define QuadSPI_SR_AHB1NE_SHIFT                  (8U)
#define QuadSPI_SR_AHB1NE_WIDTH                  (1U)
#define QuadSPI_SR_AHB1NE(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_AHB1NE_SHIFT)) & QuadSPI_SR_AHB1NE_MASK)

#define QuadSPI_SR_AHB2NE_MASK                   (0x200U)
#define QuadSPI_SR_AHB2NE_SHIFT                  (9U)
#define QuadSPI_SR_AHB2NE_WIDTH                  (1U)
#define QuadSPI_SR_AHB2NE(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_AHB2NE_SHIFT)) & QuadSPI_SR_AHB2NE_MASK)

#define QuadSPI_SR_AHB3NE_MASK                   (0x400U)
#define QuadSPI_SR_AHB3NE_SHIFT                  (10U)
#define QuadSPI_SR_AHB3NE_WIDTH                  (1U)
#define QuadSPI_SR_AHB3NE(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_AHB3NE_SHIFT)) & QuadSPI_SR_AHB3NE_MASK)

#define QuadSPI_SR_AHB0FUL_MASK                  (0x800U)
#define QuadSPI_SR_AHB0FUL_SHIFT                 (11U)
#define QuadSPI_SR_AHB0FUL_WIDTH                 (1U)
#define QuadSPI_SR_AHB0FUL(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_AHB0FUL_SHIFT)) & QuadSPI_SR_AHB0FUL_MASK)

#define QuadSPI_SR_AHB1FUL_MASK                  (0x1000U)
#define QuadSPI_SR_AHB1FUL_SHIFT                 (12U)
#define QuadSPI_SR_AHB1FUL_WIDTH                 (1U)
#define QuadSPI_SR_AHB1FUL(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_AHB1FUL_SHIFT)) & QuadSPI_SR_AHB1FUL_MASK)

#define QuadSPI_SR_AHB2FUL_MASK                  (0x2000U)
#define QuadSPI_SR_AHB2FUL_SHIFT                 (13U)
#define QuadSPI_SR_AHB2FUL_WIDTH                 (1U)
#define QuadSPI_SR_AHB2FUL(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_AHB2FUL_SHIFT)) & QuadSPI_SR_AHB2FUL_MASK)

#define QuadSPI_SR_AHB3FUL_MASK                  (0x4000U)
#define QuadSPI_SR_AHB3FUL_SHIFT                 (14U)
#define QuadSPI_SR_AHB3FUL_WIDTH                 (1U)
#define QuadSPI_SR_AHB3FUL(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_AHB3FUL_SHIFT)) & QuadSPI_SR_AHB3FUL_MASK)

#define QuadSPI_SR_RXWE_MASK                     (0x10000U)
#define QuadSPI_SR_RXWE_SHIFT                    (16U)
#define QuadSPI_SR_RXWE_WIDTH                    (1U)
#define QuadSPI_SR_RXWE(x)                       (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_RXWE_SHIFT)) & QuadSPI_SR_RXWE_MASK)

#define QuadSPI_SR_RXFULL_MASK                   (0x80000U)
#define QuadSPI_SR_RXFULL_SHIFT                  (19U)
#define QuadSPI_SR_RXFULL_WIDTH                  (1U)
#define QuadSPI_SR_RXFULL(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_RXFULL_SHIFT)) & QuadSPI_SR_RXFULL_MASK)

#define QuadSPI_SR_RXDMA_MASK                    (0x800000U)
#define QuadSPI_SR_RXDMA_SHIFT                   (23U)
#define QuadSPI_SR_RXDMA_WIDTH                   (1U)
#define QuadSPI_SR_RXDMA(x)                      (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_RXDMA_SHIFT)) & QuadSPI_SR_RXDMA_MASK)

#define QuadSPI_SR_TXNE_MASK                     (0x1000000U)
#define QuadSPI_SR_TXNE_SHIFT                    (24U)
#define QuadSPI_SR_TXNE_WIDTH                    (1U)
#define QuadSPI_SR_TXNE(x)                       (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_TXNE_SHIFT)) & QuadSPI_SR_TXNE_MASK)

#define QuadSPI_SR_TXWA_MASK                     (0x2000000U)
#define QuadSPI_SR_TXWA_SHIFT                    (25U)
#define QuadSPI_SR_TXWA_WIDTH                    (1U)
#define QuadSPI_SR_TXWA(x)                       (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_TXWA_SHIFT)) & QuadSPI_SR_TXWA_MASK)

#define QuadSPI_SR_TXDMA_MASK                    (0x4000000U)
#define QuadSPI_SR_TXDMA_SHIFT                   (26U)
#define QuadSPI_SR_TXDMA_WIDTH                   (1U)
#define QuadSPI_SR_TXDMA(x)                      (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_TXDMA_SHIFT)) & QuadSPI_SR_TXDMA_MASK)

#define QuadSPI_SR_TXFULL_MASK                   (0x8000000U)
#define QuadSPI_SR_TXFULL_SHIFT                  (27U)
#define QuadSPI_SR_TXFULL_WIDTH                  (1U)
#define QuadSPI_SR_TXFULL(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_SR_TXFULL_SHIFT)) & QuadSPI_SR_TXFULL_MASK)
/*! @} */

/*! @name FR - Flag Register */
/*! @{ */

#define QuadSPI_FR_TFF_MASK                      (0x1U)
#define QuadSPI_FR_TFF_SHIFT                     (0U)
#define QuadSPI_FR_TFF_WIDTH                     (1U)
#define QuadSPI_FR_TFF(x)                        (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_TFF_SHIFT)) & QuadSPI_FR_TFF_MASK)

#define QuadSPI_FR_IPIEF_MASK                    (0x40U)
#define QuadSPI_FR_IPIEF_SHIFT                   (6U)
#define QuadSPI_FR_IPIEF_WIDTH                   (1U)
#define QuadSPI_FR_IPIEF(x)                      (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_IPIEF_SHIFT)) & QuadSPI_FR_IPIEF_MASK)

#define QuadSPI_FR_IPAEF_MASK                    (0x80U)
#define QuadSPI_FR_IPAEF_SHIFT                   (7U)
#define QuadSPI_FR_IPAEF_WIDTH                   (1U)
#define QuadSPI_FR_IPAEF(x)                      (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_IPAEF_SHIFT)) & QuadSPI_FR_IPAEF_MASK)

#define QuadSPI_FR_PPWF_MASK                     (0x100U)
#define QuadSPI_FR_PPWF_SHIFT                    (8U)
#define QuadSPI_FR_PPWF_WIDTH                    (1U)
#define QuadSPI_FR_PPWF(x)                       (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_PPWF_SHIFT)) & QuadSPI_FR_PPWF_MASK)

#define QuadSPI_FR_CRCBEF_MASK                   (0x200U)
#define QuadSPI_FR_CRCBEF_SHIFT                  (9U)
#define QuadSPI_FR_CRCBEF_WIDTH                  (1U)
#define QuadSPI_FR_CRCBEF(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_CRCBEF_SHIFT)) & QuadSPI_FR_CRCBEF_MASK)

#define QuadSPI_FR_CRCAEF_MASK                   (0x400U)
#define QuadSPI_FR_CRCAEF_SHIFT                  (10U)
#define QuadSPI_FR_CRCAEF_WIDTH                  (1U)
#define QuadSPI_FR_CRCAEF(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_CRCAEF_SHIFT)) & QuadSPI_FR_CRCAEF_MASK)

#define QuadSPI_FR_IUEF_MASK                     (0x800U)
#define QuadSPI_FR_IUEF_SHIFT                    (11U)
#define QuadSPI_FR_IUEF_WIDTH                    (1U)
#define QuadSPI_FR_IUEF(x)                       (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_IUEF_SHIFT)) & QuadSPI_FR_IUEF_MASK)

#define QuadSPI_FR_ABOF_MASK                     (0x1000U)
#define QuadSPI_FR_ABOF_SHIFT                    (12U)
#define QuadSPI_FR_ABOF_WIDTH                    (1U)
#define QuadSPI_FR_ABOF(x)                       (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_ABOF_SHIFT)) & QuadSPI_FR_ABOF_MASK)

#define QuadSPI_FR_AIBSEF_MASK                   (0x2000U)
#define QuadSPI_FR_AIBSEF_SHIFT                  (13U)
#define QuadSPI_FR_AIBSEF_WIDTH                  (1U)
#define QuadSPI_FR_AIBSEF(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_AIBSEF_SHIFT)) & QuadSPI_FR_AIBSEF_MASK)

#define QuadSPI_FR_AITEF_MASK                    (0x4000U)
#define QuadSPI_FR_AITEF_SHIFT                   (14U)
#define QuadSPI_FR_AITEF_WIDTH                   (1U)
#define QuadSPI_FR_AITEF(x)                      (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_AITEF_SHIFT)) & QuadSPI_FR_AITEF_MASK)

#define QuadSPI_FR_AAEF_MASK                     (0x8000U)
#define QuadSPI_FR_AAEF_SHIFT                    (15U)
#define QuadSPI_FR_AAEF_WIDTH                    (1U)
#define QuadSPI_FR_AAEF(x)                       (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_AAEF_SHIFT)) & QuadSPI_FR_AAEF_MASK)

#define QuadSPI_FR_RBDF_MASK                     (0x10000U)
#define QuadSPI_FR_RBDF_SHIFT                    (16U)
#define QuadSPI_FR_RBDF_WIDTH                    (1U)
#define QuadSPI_FR_RBDF(x)                       (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_RBDF_SHIFT)) & QuadSPI_FR_RBDF_MASK)

#define QuadSPI_FR_RBOF_MASK                     (0x20000U)
#define QuadSPI_FR_RBOF_SHIFT                    (17U)
#define QuadSPI_FR_RBOF_WIDTH                    (1U)
#define QuadSPI_FR_RBOF(x)                       (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_RBOF_SHIFT)) & QuadSPI_FR_RBOF_MASK)

#define QuadSPI_FR_ILLINE_MASK                   (0x800000U)
#define QuadSPI_FR_ILLINE_SHIFT                  (23U)
#define QuadSPI_FR_ILLINE_WIDTH                  (1U)
#define QuadSPI_FR_ILLINE(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_ILLINE_SHIFT)) & QuadSPI_FR_ILLINE_MASK)

#define QuadSPI_FR_DLLUNLCK_MASK                 (0x1000000U)
#define QuadSPI_FR_DLLUNLCK_SHIFT                (24U)
#define QuadSPI_FR_DLLUNLCK_WIDTH                (1U)
#define QuadSPI_FR_DLLUNLCK(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_DLLUNLCK_SHIFT)) & QuadSPI_FR_DLLUNLCK_MASK)

#define QuadSPI_FR_TBUF_MASK                     (0x4000000U)
#define QuadSPI_FR_TBUF_SHIFT                    (26U)
#define QuadSPI_FR_TBUF_WIDTH                    (1U)
#define QuadSPI_FR_TBUF(x)                       (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_TBUF_SHIFT)) & QuadSPI_FR_TBUF_MASK)

#define QuadSPI_FR_TBFF_MASK                     (0x8000000U)
#define QuadSPI_FR_TBFF_SHIFT                    (27U)
#define QuadSPI_FR_TBFF_WIDTH                    (1U)
#define QuadSPI_FR_TBFF(x)                       (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_TBFF_SHIFT)) & QuadSPI_FR_TBFF_MASK)

#define QuadSPI_FR_DLLABRT_MASK                  (0x10000000U)
#define QuadSPI_FR_DLLABRT_SHIFT                 (28U)
#define QuadSPI_FR_DLLABRT_WIDTH                 (1U)
#define QuadSPI_FR_DLLABRT(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_DLLABRT_SHIFT)) & QuadSPI_FR_DLLABRT_MASK)

#define QuadSPI_FR_DLPFF_MASK                    (0x80000000U)
#define QuadSPI_FR_DLPFF_SHIFT                   (31U)
#define QuadSPI_FR_DLPFF_WIDTH                   (1U)
#define QuadSPI_FR_DLPFF(x)                      (((uint32_t)(((uint32_t)(x)) << QuadSPI_FR_DLPFF_SHIFT)) & QuadSPI_FR_DLPFF_MASK)
/*! @} */

/*! @name RSER - Interrupt and DMA Request Select and Enable Register */
/*! @{ */

#define QuadSPI_RSER_TFIE_MASK                   (0x1U)
#define QuadSPI_RSER_TFIE_SHIFT                  (0U)
#define QuadSPI_RSER_TFIE_WIDTH                  (1U)
#define QuadSPI_RSER_TFIE(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_TFIE_SHIFT)) & QuadSPI_RSER_TFIE_MASK)

#define QuadSPI_RSER_IPIEIE_MASK                 (0x40U)
#define QuadSPI_RSER_IPIEIE_SHIFT                (6U)
#define QuadSPI_RSER_IPIEIE_WIDTH                (1U)
#define QuadSPI_RSER_IPIEIE(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_IPIEIE_SHIFT)) & QuadSPI_RSER_IPIEIE_MASK)

#define QuadSPI_RSER_IPAEIE_MASK                 (0x80U)
#define QuadSPI_RSER_IPAEIE_SHIFT                (7U)
#define QuadSPI_RSER_IPAEIE_WIDTH                (1U)
#define QuadSPI_RSER_IPAEIE(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_IPAEIE_SHIFT)) & QuadSPI_RSER_IPAEIE_MASK)

#define QuadSPI_RSER_PPWIE_MASK                  (0x100U)
#define QuadSPI_RSER_PPWIE_SHIFT                 (8U)
#define QuadSPI_RSER_PPWIE_WIDTH                 (1U)
#define QuadSPI_RSER_PPWIE(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_PPWIE_SHIFT)) & QuadSPI_RSER_PPWIE_MASK)

#define QuadSPI_RSER_CRCBIE_MASK                 (0x200U)
#define QuadSPI_RSER_CRCBIE_SHIFT                (9U)
#define QuadSPI_RSER_CRCBIE_WIDTH                (1U)
#define QuadSPI_RSER_CRCBIE(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_CRCBIE_SHIFT)) & QuadSPI_RSER_CRCBIE_MASK)

#define QuadSPI_RSER_CRCAIE_MASK                 (0x400U)
#define QuadSPI_RSER_CRCAIE_SHIFT                (10U)
#define QuadSPI_RSER_CRCAIE_WIDTH                (1U)
#define QuadSPI_RSER_CRCAIE(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_CRCAIE_SHIFT)) & QuadSPI_RSER_CRCAIE_MASK)

#define QuadSPI_RSER_IUEIE_MASK                  (0x800U)
#define QuadSPI_RSER_IUEIE_SHIFT                 (11U)
#define QuadSPI_RSER_IUEIE_WIDTH                 (1U)
#define QuadSPI_RSER_IUEIE(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_IUEIE_SHIFT)) & QuadSPI_RSER_IUEIE_MASK)

#define QuadSPI_RSER_ABOIE_MASK                  (0x1000U)
#define QuadSPI_RSER_ABOIE_SHIFT                 (12U)
#define QuadSPI_RSER_ABOIE_WIDTH                 (1U)
#define QuadSPI_RSER_ABOIE(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_ABOIE_SHIFT)) & QuadSPI_RSER_ABOIE_MASK)

#define QuadSPI_RSER_AIBSIE_MASK                 (0x2000U)
#define QuadSPI_RSER_AIBSIE_SHIFT                (13U)
#define QuadSPI_RSER_AIBSIE_WIDTH                (1U)
#define QuadSPI_RSER_AIBSIE(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_AIBSIE_SHIFT)) & QuadSPI_RSER_AIBSIE_MASK)

#define QuadSPI_RSER_AITIE_MASK                  (0x4000U)
#define QuadSPI_RSER_AITIE_SHIFT                 (14U)
#define QuadSPI_RSER_AITIE_WIDTH                 (1U)
#define QuadSPI_RSER_AITIE(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_AITIE_SHIFT)) & QuadSPI_RSER_AITIE_MASK)

#define QuadSPI_RSER_AAIE_MASK                   (0x8000U)
#define QuadSPI_RSER_AAIE_SHIFT                  (15U)
#define QuadSPI_RSER_AAIE_WIDTH                  (1U)
#define QuadSPI_RSER_AAIE(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_AAIE_SHIFT)) & QuadSPI_RSER_AAIE_MASK)

#define QuadSPI_RSER_RBDIE_MASK                  (0x10000U)
#define QuadSPI_RSER_RBDIE_SHIFT                 (16U)
#define QuadSPI_RSER_RBDIE_WIDTH                 (1U)
#define QuadSPI_RSER_RBDIE(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_RBDIE_SHIFT)) & QuadSPI_RSER_RBDIE_MASK)

#define QuadSPI_RSER_RBOIE_MASK                  (0x20000U)
#define QuadSPI_RSER_RBOIE_SHIFT                 (17U)
#define QuadSPI_RSER_RBOIE_WIDTH                 (1U)
#define QuadSPI_RSER_RBOIE(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_RBOIE_SHIFT)) & QuadSPI_RSER_RBOIE_MASK)

#define QuadSPI_RSER_RBDDE_MASK                  (0x200000U)
#define QuadSPI_RSER_RBDDE_SHIFT                 (21U)
#define QuadSPI_RSER_RBDDE_WIDTH                 (1U)
#define QuadSPI_RSER_RBDDE(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_RBDDE_SHIFT)) & QuadSPI_RSER_RBDDE_MASK)

#define QuadSPI_RSER_ILLINIE_MASK                (0x800000U)
#define QuadSPI_RSER_ILLINIE_SHIFT               (23U)
#define QuadSPI_RSER_ILLINIE_WIDTH               (1U)
#define QuadSPI_RSER_ILLINIE(x)                  (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_ILLINIE_SHIFT)) & QuadSPI_RSER_ILLINIE_MASK)

#define QuadSPI_RSER_DLLULIE_MASK                (0x1000000U)
#define QuadSPI_RSER_DLLULIE_SHIFT               (24U)
#define QuadSPI_RSER_DLLULIE_WIDTH               (1U)
#define QuadSPI_RSER_DLLULIE(x)                  (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_DLLULIE_SHIFT)) & QuadSPI_RSER_DLLULIE_MASK)

#define QuadSPI_RSER_TBFDE_MASK                  (0x2000000U)
#define QuadSPI_RSER_TBFDE_SHIFT                 (25U)
#define QuadSPI_RSER_TBFDE_WIDTH                 (1U)
#define QuadSPI_RSER_TBFDE(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_TBFDE_SHIFT)) & QuadSPI_RSER_TBFDE_MASK)

#define QuadSPI_RSER_TBUIE_MASK                  (0x4000000U)
#define QuadSPI_RSER_TBUIE_SHIFT                 (26U)
#define QuadSPI_RSER_TBUIE_WIDTH                 (1U)
#define QuadSPI_RSER_TBUIE(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_TBUIE_SHIFT)) & QuadSPI_RSER_TBUIE_MASK)

#define QuadSPI_RSER_TBFIE_MASK                  (0x8000000U)
#define QuadSPI_RSER_TBFIE_SHIFT                 (27U)
#define QuadSPI_RSER_TBFIE_WIDTH                 (1U)
#define QuadSPI_RSER_TBFIE(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_TBFIE_SHIFT)) & QuadSPI_RSER_TBFIE_MASK)

#define QuadSPI_RSER_DLPFIE_MASK                 (0x80000000U)
#define QuadSPI_RSER_DLPFIE_SHIFT                (31U)
#define QuadSPI_RSER_DLPFIE_WIDTH                (1U)
#define QuadSPI_RSER_DLPFIE(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_RSER_DLPFIE_SHIFT)) & QuadSPI_RSER_DLPFIE_MASK)
/*! @} */

/*! @name SPTRCLR - Sequence Pointer Clear Register */
/*! @{ */

#define QuadSPI_SPTRCLR_BFPTRC_MASK              (0x1U)
#define QuadSPI_SPTRCLR_BFPTRC_SHIFT             (0U)
#define QuadSPI_SPTRCLR_BFPTRC_WIDTH             (1U)
#define QuadSPI_SPTRCLR_BFPTRC(x)                (((uint32_t)(((uint32_t)(x)) << QuadSPI_SPTRCLR_BFPTRC_SHIFT)) & QuadSPI_SPTRCLR_BFPTRC_MASK)

#define QuadSPI_SPTRCLR_IPPTRC_MASK              (0x100U)
#define QuadSPI_SPTRCLR_IPPTRC_SHIFT             (8U)
#define QuadSPI_SPTRCLR_IPPTRC_WIDTH             (1U)
#define QuadSPI_SPTRCLR_IPPTRC(x)                (((uint32_t)(((uint32_t)(x)) << QuadSPI_SPTRCLR_IPPTRC_SHIFT)) & QuadSPI_SPTRCLR_IPPTRC_MASK)

#define QuadSPI_SPTRCLR_ABRT_CLR_MASK            (0x10000U)
#define QuadSPI_SPTRCLR_ABRT_CLR_SHIFT           (16U)
#define QuadSPI_SPTRCLR_ABRT_CLR_WIDTH           (1U)
#define QuadSPI_SPTRCLR_ABRT_CLR(x)              (((uint32_t)(((uint32_t)(x)) << QuadSPI_SPTRCLR_ABRT_CLR_SHIFT)) & QuadSPI_SPTRCLR_ABRT_CLR_MASK)

#define QuadSPI_SPTRCLR_PREFETCH_DIS_MASK        (0x20000U)
#define QuadSPI_SPTRCLR_PREFETCH_DIS_SHIFT       (17U)
#define QuadSPI_SPTRCLR_PREFETCH_DIS_WIDTH       (1U)
#define QuadSPI_SPTRCLR_PREFETCH_DIS(x)          (((uint32_t)(((uint32_t)(x)) << QuadSPI_SPTRCLR_PREFETCH_DIS_SHIFT)) & QuadSPI_SPTRCLR_PREFETCH_DIS_MASK)
/*! @} */

/*! @name SFA1AD - Serial Flash Memory A1 Top Address Register */
/*! @{ */

#define QuadSPI_SFA1AD_TPADA1_MASK               (0xFFFFFC00U)
#define QuadSPI_SFA1AD_TPADA1_SHIFT              (10U)
#define QuadSPI_SFA1AD_TPADA1_WIDTH              (22U)
#define QuadSPI_SFA1AD_TPADA1(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_SFA1AD_TPADA1_SHIFT)) & QuadSPI_SFA1AD_TPADA1_MASK)
/*! @} */

/*! @name SFA2AD - Serial Flash Memory A2 Top Address Register */
/*! @{ */

#define QuadSPI_SFA2AD_TPADA2_MASK               (0xFFFFFC00U)
#define QuadSPI_SFA2AD_TPADA2_SHIFT              (10U)
#define QuadSPI_SFA2AD_TPADA2_WIDTH              (22U)
#define QuadSPI_SFA2AD_TPADA2(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_SFA2AD_TPADA2_SHIFT)) & QuadSPI_SFA2AD_TPADA2_MASK)
/*! @} */

/*! @name SFB1AD - Serial Flash Memory B1 Top Address Register */
/*! @{ */

#define QuadSPI_SFB1AD_TPADB1_MASK               (0xFFFFFC00U)
#define QuadSPI_SFB1AD_TPADB1_SHIFT              (10U)
#define QuadSPI_SFB1AD_TPADB1_WIDTH              (22U)
#define QuadSPI_SFB1AD_TPADB1(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_SFB1AD_TPADB1_SHIFT)) & QuadSPI_SFB1AD_TPADB1_MASK)
/*! @} */

/*! @name SFB2AD - Serial Flash Memory B2 Top Address Register */
/*! @{ */

#define QuadSPI_SFB2AD_TPADB2_MASK               (0xFFFFFC00U)
#define QuadSPI_SFB2AD_TPADB2_SHIFT              (10U)
#define QuadSPI_SFB2AD_TPADB2_WIDTH              (22U)
#define QuadSPI_SFB2AD_TPADB2(x)                 (((uint32_t)(((uint32_t)(x)) << QuadSPI_SFB2AD_TPADB2_SHIFT)) & QuadSPI_SFB2AD_TPADB2_MASK)
/*! @} */

/*! @name DLPR - Data Learn Pattern Register */
/*! @{ */

#define QuadSPI_DLPR_DLPV_MASK                   (0xFFFFFFFFU)
#define QuadSPI_DLPR_DLPV_SHIFT                  (0U)
#define QuadSPI_DLPR_DLPV_WIDTH                  (32U)
#define QuadSPI_DLPR_DLPV(x)                     (((uint32_t)(((uint32_t)(x)) << QuadSPI_DLPR_DLPV_SHIFT)) & QuadSPI_DLPR_DLPV_MASK)
/*! @} */

/*! @name FAILA_ADDR - Flash Memory A Failing Address Status Register */
/*! @{ */

#define QuadSPI_FAILA_ADDR_ADDR_MASK             (0xFFFFFFFFU)
#define QuadSPI_FAILA_ADDR_ADDR_SHIFT            (0U)
#define QuadSPI_FAILA_ADDR_ADDR_WIDTH            (32U)
#define QuadSPI_FAILA_ADDR_ADDR(x)               (((uint32_t)(((uint32_t)(x)) << QuadSPI_FAILA_ADDR_ADDR_SHIFT)) & QuadSPI_FAILA_ADDR_ADDR_MASK)
/*! @} */

/*! @name FAILB_ADDR - flash Memory B Failing Address Status Register */
/*! @{ */

#define QuadSPI_FAILB_ADDR_ADDR_MASK             (0xFFFFFFFFU)
#define QuadSPI_FAILB_ADDR_ADDR_SHIFT            (0U)
#define QuadSPI_FAILB_ADDR_ADDR_WIDTH            (32U)
#define QuadSPI_FAILB_ADDR_ADDR(x)               (((uint32_t)(((uint32_t)(x)) << QuadSPI_FAILB_ADDR_ADDR_SHIFT)) & QuadSPI_FAILB_ADDR_ADDR_MASK)
/*! @} */

/*! @name RBDR - RX Buffer Data Register */
/*! @{ */

#define QuadSPI_RBDR_RXDATA_MASK                 (0xFFFFFFFFU)
#define QuadSPI_RBDR_RXDATA_SHIFT                (0U)
#define QuadSPI_RBDR_RXDATA_WIDTH                (32U)
#define QuadSPI_RBDR_RXDATA(x)                   (((uint32_t)(((uint32_t)(x)) << QuadSPI_RBDR_RXDATA_SHIFT)) & QuadSPI_RBDR_RXDATA_MASK)
/*! @} */

/*! @name LUTKEY - LUT Key Register */
/*! @{ */

#define QuadSPI_LUTKEY_KEY_MASK                  (0xFFFFFFFFU)
#define QuadSPI_LUTKEY_KEY_SHIFT                 (0U)
#define QuadSPI_LUTKEY_KEY_WIDTH                 (32U)
#define QuadSPI_LUTKEY_KEY(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_LUTKEY_KEY_SHIFT)) & QuadSPI_LUTKEY_KEY_MASK)
/*! @} */

/*! @name LCKCR - LUT Lock Configuration Register */
/*! @{ */

#define QuadSPI_LCKCR_LOCK_MASK                  (0x1U)
#define QuadSPI_LCKCR_LOCK_SHIFT                 (0U)
#define QuadSPI_LCKCR_LOCK_WIDTH                 (1U)
#define QuadSPI_LCKCR_LOCK(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_LCKCR_LOCK_SHIFT)) & QuadSPI_LCKCR_LOCK_MASK)

#define QuadSPI_LCKCR_UNLOCK_MASK                (0x2U)
#define QuadSPI_LCKCR_UNLOCK_SHIFT               (1U)
#define QuadSPI_LCKCR_UNLOCK_WIDTH               (1U)
#define QuadSPI_LCKCR_UNLOCK(x)                  (((uint32_t)(((uint32_t)(x)) << QuadSPI_LCKCR_UNLOCK_SHIFT)) & QuadSPI_LCKCR_UNLOCK_MASK)
/*! @} */

/*! @name LUT - LUT Register */
/*! @{ */

#define QuadSPI_LUT_OPRND0_MASK                  (0xFFU)
#define QuadSPI_LUT_OPRND0_SHIFT                 (0U)
#define QuadSPI_LUT_OPRND0_WIDTH                 (8U)
#define QuadSPI_LUT_OPRND0(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_LUT_OPRND0_SHIFT)) & QuadSPI_LUT_OPRND0_MASK)

#define QuadSPI_LUT_PAD0_MASK                    (0x300U)
#define QuadSPI_LUT_PAD0_SHIFT                   (8U)
#define QuadSPI_LUT_PAD0_WIDTH                   (2U)
#define QuadSPI_LUT_PAD0(x)                      (((uint32_t)(((uint32_t)(x)) << QuadSPI_LUT_PAD0_SHIFT)) & QuadSPI_LUT_PAD0_MASK)

#define QuadSPI_LUT_INSTR0_MASK                  (0xFC00U)
#define QuadSPI_LUT_INSTR0_SHIFT                 (10U)
#define QuadSPI_LUT_INSTR0_WIDTH                 (6U)
#define QuadSPI_LUT_INSTR0(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_LUT_INSTR0_SHIFT)) & QuadSPI_LUT_INSTR0_MASK)

#define QuadSPI_LUT_OPRND1_MASK                  (0xFF0000U)
#define QuadSPI_LUT_OPRND1_SHIFT                 (16U)
#define QuadSPI_LUT_OPRND1_WIDTH                 (8U)
#define QuadSPI_LUT_OPRND1(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_LUT_OPRND1_SHIFT)) & QuadSPI_LUT_OPRND1_MASK)

#define QuadSPI_LUT_PAD1_MASK                    (0x3000000U)
#define QuadSPI_LUT_PAD1_SHIFT                   (24U)
#define QuadSPI_LUT_PAD1_WIDTH                   (2U)
#define QuadSPI_LUT_PAD1(x)                      (((uint32_t)(((uint32_t)(x)) << QuadSPI_LUT_PAD1_SHIFT)) & QuadSPI_LUT_PAD1_MASK)

#define QuadSPI_LUT_INSTR1_MASK                  (0xFC000000U)
#define QuadSPI_LUT_INSTR1_SHIFT                 (26U)
#define QuadSPI_LUT_INSTR1_WIDTH                 (6U)
#define QuadSPI_LUT_INSTR1(x)                    (((uint32_t)(((uint32_t)(x)) << QuadSPI_LUT_INSTR1_SHIFT)) & QuadSPI_LUT_INSTR1_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group QuadSPI_Register_Masks */

/*!
 * @}
 */ /* end of group QuadSPI_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G274A_QuadSPI_H_) */
