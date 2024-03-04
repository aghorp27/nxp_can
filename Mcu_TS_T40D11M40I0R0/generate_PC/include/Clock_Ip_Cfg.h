/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 4.0.0
*   Build Version        : S32_RTD_4_0_0_D2210_ASR_REL_4_4_REV_0000_20221031
*
*   (c) Copyright 2022 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef CLOCK_IP_CFG_H
#define CLOCK_IP_CFG_H

/**
*   @file       Clock_Ip_Cfg.h
*   @version    4.0.0
*
*   @brief   AUTOSAR Mcu - Clock configuration header file.
*   @details This file is the header containing all the necessary information for CLOCK
*            module configuration(s).
*
*   @addtogroup CLOCK_DRIVER_CONFIGURATION Clock Ip Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
[!IF "var:defined('postBuildVariant')"!][!//
[!LOOP "variant:all()"!][!//
#include "Clock_Ip_[!"."!]_PBcfg.h"
[!ENDLOOP!][!//
[!ELSE!][!//
#include "Clock_Ip_PBcfg.h"
[!ENDIF!][!//

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_CFG_VENDOR_ID                      43
#define CLOCK_IP_CFG_AR_RELEASE_MAJOR_VERSION       4
#define CLOCK_IP_CFG_AR_RELEASE_MINOR_VERSION       4
#define CLOCK_IP_CFG_AR_RELEASE_REVISION_VERSION    0
#define CLOCK_IP_CFG_SW_MAJOR_VERSION               4
#define CLOCK_IP_CFG_SW_MINOR_VERSION               0
#define CLOCK_IP_CFG_SW_PATCH_VERSION               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
[!IF "var:defined('postBuildVariant')"!][!//
[!LOOP "variant:all()"!][!//
/* Check if Clock_Ip_Cfg.h file and Clock_Ip_[!"."!]_PBcfg.h file are of the same vendor */
#if (CLOCK_IP_CFG_VENDOR_ID != CLOCK_IP_[!"."!]_PBCFG_VENDOR_ID)
    #error "Clock_Ip_Cfg.h and Clock_Ip_[!"."!]_PBcfg.h have different vendor ids"
#endif

/* Check if Clock_Ip_Cfg.h file and Clock_Ip_[!"."!]_PBcfg.h file are of the same Autosar version */
#if ((CLOCK_IP_CFG_AR_RELEASE_MAJOR_VERSION != CLOCK_IP_[!"."!]_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_CFG_AR_RELEASE_MINOR_VERSION != CLOCK_IP_[!"."!]_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_CFG_AR_RELEASE_REVISION_VERSION != CLOCK_IP_[!"."!]_PBCFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Cfg.h and Clock_Ip_[!"."!]_PBcfg.h are different"
#endif

/* Check if Clock_Ip_Cfg.h file and Clock_Ip_[!"."!]_PBcfg.h file are of the same Software version */
#if ((CLOCK_IP_CFG_SW_MAJOR_VERSION != CLOCK_IP_[!"."!]_PBCFG_SW_MAJOR_VERSION) || \
     (CLOCK_IP_CFG_SW_MINOR_VERSION != CLOCK_IP_[!"."!]_PBCFG_SW_MINOR_VERSION) || \
     (CLOCK_IP_CFG_SW_PATCH_VERSION != CLOCK_IP_[!"."!]_PBCFG_SW_PATCH_VERSION) \
    )
  #error "Software Version Numbers of Clock_Ip_Cfg.h and Clock_Ip_[!"."!]_PBcfg.h are different"
#endif
[!ENDLOOP!][!//
[!ELSE!][!//
/* Check if Clock_Ip_Cfg.h file and Clock_Ip_PBcfg.h file are of the same vendor */
#if (CLOCK_IP_CFG_VENDOR_ID != CLOCK_IP_PBCFG_VENDOR_ID)
    #error "Clock_Ip_Cfg.h and Clock_Ip_PBcfg.h have different vendor ids"
#endif

/* Check if Clock_Ip_Cfg.h file and Clock_Ip_PBcfg.h file are of the same Autosar version */
#if ((CLOCK_IP_CFG_AR_RELEASE_MAJOR_VERSION != CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_CFG_AR_RELEASE_MINOR_VERSION != CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_CFG_AR_RELEASE_REVISION_VERSION != CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Cfg.h and Clock_Ip_PBcfg.h are different"
#endif

/* Check if Clock_Ip_Cfg.h file and Clock_Ip_PBcfg.h file are of the same Software version */
#if ((CLOCK_IP_CFG_SW_MAJOR_VERSION != CLOCK_IP_PBCFG_SW_MAJOR_VERSION) || \
     (CLOCK_IP_CFG_SW_MINOR_VERSION != CLOCK_IP_PBCFG_SW_MINOR_VERSION) || \
     (CLOCK_IP_CFG_SW_PATCH_VERSION != CLOCK_IP_PBCFG_SW_PATCH_VERSION) \
    )
  #error "Software Version Numbers of Clock_Ip_Cfg.h and Clock_Ip_PBcfg.h are different"
#endif
[!ENDIF!][!//
/*==================================================================================================
                                           DEFINES AND MACROS
==================================================================================================*/
/**
* @brief            Pre-processor switch for enabling the default error detection and reporting to the DET.
*                   The detection of default errors is configurable (ON / OFF) at pre-compile time.
* @implements CLOCK_IP_DEV_ERROR_DETECT_Define
*/
#define CLOCK_IP_DEV_ERROR_DETECT         (STD_OFF)

#define CLOCK_IP_TIMEOUT_TYPE                ([!"McuGeneralConfiguration/McuTimeoutMethod"!])

#define CLOCK_IP_TIMEOUT_VALUE_US            ([!"McuGeneralConfiguration/McuTimeout"!]U)
/**
* @brief        Support for User mode.
*               If this parameter has been configured to 'TRUE' the Clock can be executed from both supervisor and user mode.
*/
#define CLOCK_IP_ENABLE_USER_MODE_SUPPORT  [!IF "McuGeneralConfiguration/McuEnableUserModeSupport = 'true'"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/** Check the driver user mode is enabled only when the MCAL_ENABLE_USER_MODE_SUPPORT is enabled */
#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running Clock in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined.
  #endif /* (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT) */
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */

/*==================================================================================================
                                             ENUMS
==================================================================================================*/


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
                                             ENUMS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */
#endif /* CLOCK_IP_CFG_H */

