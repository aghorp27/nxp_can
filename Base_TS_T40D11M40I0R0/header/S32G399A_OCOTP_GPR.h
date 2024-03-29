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
 * @file S32G399A_ocotp_gpr.h
 * @version 2.7
 * @date 2022-07-21
 * @brief Peripheral Access Layer for S32G399A_ocotp_gpr
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
#if !defined(S32G399A_ocotp_gpr_H_)  /* Check if memory map has not been already included */
#define S32G399A_ocotp_gpr_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- ocotp_gpr Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ocotp_gpr_Peripheral_Access_Layer ocotp_gpr Peripheral Access Layer
 * @{
 */

/** ocotp_gpr - Register Layout Typedef */
typedef struct {
       uint32_t OCOTP_GPR_0;                       /**< Boot Configuration Register 1, offset: 0x0 */
       uint32_t OCOTP_GPR_1;                       /**< Boot Configuration Register 1, offset: 0x4 */
} ocotp_gpr_Type, *ocotp_gpr_MemMapPtr;

/** Number of instances of the ocotp_gpr module. */
#define ocotp_gpr_INSTANCE_COUNT                 (1u)

/* ocotp_gpr - Peripheral instance base addresses */
/** Peripheral OCOTP_GPR base address */
#define IP_OCOTP_GPR_BASE                        (0x400A040u)
/** Peripheral OCOTP_GPR base pointer */
#define IP_OCOTP_GPR                             ((ocotp_gpr_Type *)IP_OCOTP_GPR_BASE)
/** Array initializer of ocotp_gpr peripheral base addresses */
#define IP_ocotp_gpr_BASE_ADDRS                  { IP_OCOTP_GPR_BASE }
/** Array initializer of ocotp_gpr peripheral base pointers */
#define IP_ocotp_gpr_BASE_PTRS                   { IP_OCOTP_GPR }

/* ----------------------------------------------------------------------------
   -- ocotp_gpr Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ocotp_gpr_Register_Masks ocotp_gpr Register Masks
 * @{
 */


/*!
 * @}
 */ /* end of group ocotp_gpr_Register_Masks */

/*!
 * @}
 */ /* end of group ocotp_gpr_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_ocotp_gpr_H_) */
