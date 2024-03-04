/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : SIUL2
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 4.0.0
*   Build Version        : S32_RTD_4_0_0_D2210_ASR_REL_4_4_REV_0000_20221031
*
*   Copyright 2022 NXP Semiconductors
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef SIUL2_PORT_IP_CFG_H
#define SIUL2_PORT_IP_CFG_H

/**
*   @file    Siul2_Port_Ip_Cfg.h
*
*   @addtogroup Port_CFG
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Siul2_Port_Ip_Types.h"
[!INDENT "0"!][!//
[!IF "var:defined('postBuildVariant')"!]
[!LOOP "variant:all()"!]
#include "Siul2_Port_Ip_[!"."!]_PBcfg.h"
[!ENDLOOP!]
[!ELSE!]
#include "Siul2_Port_Ip_PBcfg.h"
[!ENDIF!]
[!ENDINDENT!][!//
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SIUL2_PORT_IP_VENDOR_ID_CFG_H                       43
#define SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_H        4
#define SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_H        4
#define SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_H     0
#define SIUL2_PORT_IP_SW_MAJOR_VERSION_CFG_H                4
#define SIUL2_PORT_IP_SW_MINOR_VERSION_CFG_H                0
#define SIUL2_PORT_IP_SW_PATCH_VERSION_CFG_H                0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if the files Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_Types.h are of the same version */
#if (SIUL2_PORT_IP_VENDOR_ID_CFG_H != SIUL2_PORT_IP_TYPES_VENDOR_ID_H)
    #error "Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_Types.h have different vendor ids"
#endif

/* Check if Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_Types.h are of the same Autosar version */
#if ((SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_H    != SIUL2_PORT_IP_TYPES_AR_RELEASE_MAJOR_VERSION_H) || \
     (SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_H    != SIUL2_PORT_IP_TYPES_AR_RELEASE_MINOR_VERSION_H) || \
     (SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_H != SIUL2_PORT_IP_TYPES_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_Types.h are different"
#endif

/* Check if Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_Types.h are of the same Software version */
#if ((SIUL2_PORT_IP_SW_MAJOR_VERSION_CFG_H != SIUL2_PORT_IP_TYPES_SW_MAJOR_VERSION_H) || \
     (SIUL2_PORT_IP_SW_MINOR_VERSION_CFG_H != SIUL2_PORT_IP_TYPES_SW_MINOR_VERSION_H) || \
     (SIUL2_PORT_IP_SW_PATCH_VERSION_CFG_H != SIUL2_PORT_IP_TYPES_SW_PATCH_VERSION_H)    \
    )
    #error "Software Version Numbers of Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_Types.h are different"
#endif

[!IF "var:defined('postBuildVariant')"!]
[!LOOP "variant:all()"!]
/* Check if the files Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_PBcfg.h are of the same version */
#if (SIUL2_PORT_IP_VENDOR_ID_CFG_H != SIUL2_PORT_IP_VENDOR_ID_[!"."!]_PBCFG_H)
    #error "Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_[!"."!]_PBcfg.h have different vendor IDs"
#endif
 /* Check if the files Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_PBcfg.h are of the same Autosar version */
#if ((SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_H != SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_[!"."!]_PBCFG_H) ||   \
     (SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_H != SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_[!"."!]_PBCFG_H) ||   \
     (SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_H != SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_[!"."!]_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_[!"."!]_PBcfg.h are different"
#endif
/* Check if the files Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_PBcfg.h are of the same software version */
#if ((SIUL2_PORT_IP_SW_MAJOR_VERSION_CFG_H != SIUL2_PORT_IP_SW_MAJOR_VERSION_[!"."!]_PBCFG_H) || \
     (SIUL2_PORT_IP_SW_MINOR_VERSION_CFG_H != SIUL2_PORT_IP_SW_MINOR_VERSION_[!"."!]_PBCFG_H) || \
     (SIUL2_PORT_IP_SW_PATCH_VERSION_CFG_H != SIUL2_PORT_IP_SW_PATCH_VERSION_[!"."!]_PBCFG_H)     \
    )
    #error "Software Version Numbers of Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_[!"."!]_PBcfg.h are different"
#endif
[!ENDLOOP!]
[!ELSE!]
/* Check if the files Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_PBcfg.h are of the same version */
#if (SIUL2_PORT_IP_VENDOR_ID_CFG_H != SIUL2_PORT_IP_VENDOR_ID_PBCFG_H)
    #error "Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_PBcfg.h have different vendor IDs"
#endif
 /* Check if the files Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_PBcfg.h are of the same Autosar version */
#if ((SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_H != SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_H) ||   \
     (SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_H != SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_PBCFG_H) ||   \
     (SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_H != SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_PBcfg.h are different"
#endif
/* Check if the files Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_PBcfg.h are of the same software version */
#if ((SIUL2_PORT_IP_SW_MAJOR_VERSION_CFG_H != SIUL2_PORT_IP_SW_MAJOR_VERSION_PBCFG_H) || \
     (SIUL2_PORT_IP_SW_MINOR_VERSION_CFG_H != SIUL2_PORT_IP_SW_MINOR_VERSION_PBCFG_H) || \
     (SIUL2_PORT_IP_SW_PATCH_VERSION_CFG_H != SIUL2_PORT_IP_SW_PATCH_VERSION_PBCFG_H)     \
    )
#error "Software Version Numbers of Siul2_Port_Ip_Cfg.h and Siul2_Port_Ip_PBcfg.h are different"
#endif
[!ENDIF!]
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/*! @brief User number of configured pins */
[!SELECT "PortConfigSet"!][!//
#define NUM_OF_CONFIGURED_PINS [!"num:i(count(PortContainer/*/PortPin/*))"!]
[!ENDSELECT!][!//

#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

[!IF "var:defined('postBuildVariant')"!][!//
[!LOOP "variant:all()"!][!//
SIUL2_PORT_CONFIG_[!"."!]_PB \
[!ENDLOOP!][!//
[!ELSE!][!//
SIUL2_PORT_CONFIG_PB
[!ENDIF!]

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* SIUL2_PORT_IP_CFG_H */
