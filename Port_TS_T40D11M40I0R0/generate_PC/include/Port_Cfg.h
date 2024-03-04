[!CODE!][!//
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

#ifndef PORT_CFG_H
#define PORT_CFG_H

/**
*   @file    Port_Cfg.h
*
*   @implements Port_Cfg.h_Artifact
*   @defgroup   Port_CFG Port CFG
*   @{
*/

#ifdef __cplusplus
extern "C" {
#endif

/*=================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
=================================================================================================*/

[!IF "var:defined('postBuildVariant')"!]
[!LOOP "variant:all()"!]
#include "Port_[!"."!]_PBcfg.h"
[!ENDLOOP!]
[!ELSE!]
#include "Port_PBcfg.h"
[!ENDIF!]
#include "Siul2_Port_Ip_Types.h"
#include "Siul2_Port_Ip_Cfg.h"
[!NOCODE!][!//
[!INCLUDE "Port_VersionCheck_Inc.m"!][!//
[!/* Include package file in order to get valid Pins */!][!//
[!IF "((ecu:get('Port.Derivative'))='S32G2')"!][!//
    [!INCLUDE "Port_S32G2_Resource.m"!][!//
[!ELSEIF "((ecu:get('Port.Derivative'))='S32G3')"!][!//
    [!INCLUDE "Port_S32G3_Resource.m"!][!//
[!ELSEIF "((ecu:get('Port.Derivative'))='S32R')"!][!//
    [!INCLUDE "Port_S32R_Resource.m"!][!//
[!ELSEIF "((ecu:get('Port.Derivative'))='S32V')"!][!//
    [!INCLUDE "Port_S32V_Resource.m"!][!//
[!ENDIF!][!//
[!ENDNOCODE!][!//

/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/
#define PORT_CFG_VENDOR_ID_H                       43
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION_H        4
#define PORT_CFG_AR_RELEASE_MINOR_VERSION_H        4
#define PORT_CFG_AR_RELEASE_REVISION_VERSION_H     0
#define PORT_CFG_SW_MAJOR_VERSION_H                4
#define PORT_CFG_SW_MINOR_VERSION_H                0
#define PORT_CFG_SW_PATCH_VERSION_H                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if the files Port_Cfg.h and Siul2_Port_Ip_Types.h are of the same version */
#if (PORT_CFG_VENDOR_ID_H != SIUL2_PORT_IP_TYPES_VENDOR_ID_H)
    #error "Port_Cfg.h and Siul2_Port_Ip_Types.h have different vendor ids"
#endif

/* Check if Port_Cfg.h and Siul2_Port_Ip_Types.h are of the same Autosar version */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION_H    != SIUL2_PORT_IP_TYPES_AR_RELEASE_MAJOR_VERSION_H) || \
     (PORT_CFG_AR_RELEASE_MINOR_VERSION_H    != SIUL2_PORT_IP_TYPES_AR_RELEASE_MINOR_VERSION_H) || \
     (PORT_CFG_AR_RELEASE_REVISION_VERSION_H != SIUL2_PORT_IP_TYPES_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Port_Cfg.h and Siul2_Port_Ip_Types.h are different"
#endif

/* Check if Port_Cfg.h and Siul2_Port_Ip_Types.h are of the same Software version */
#if ((PORT_CFG_SW_MAJOR_VERSION_H != SIUL2_PORT_IP_TYPES_SW_MAJOR_VERSION_H) || \
     (PORT_CFG_SW_MINOR_VERSION_H != SIUL2_PORT_IP_TYPES_SW_MINOR_VERSION_H) || \
     (PORT_CFG_SW_PATCH_VERSION_H != SIUL2_PORT_IP_TYPES_SW_PATCH_VERSION_H)    \
    )
    #error "Software Version Numbers of Port_Cfg.h and Siul2_Port_Ip_Types.h are different"
#endif

/* Check if the files Port_Cfg.h and Siul2_Port_Ip_Cfg.h are of the same version */
#if (PORT_CFG_VENDOR_ID_H != SIUL2_PORT_IP_VENDOR_ID_CFG_H)
    #error "Port_Cfg.h and Siul2_Port_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Port_Cfg.h and Siul2_Port_Ip_Cfg.h are of the same Autosar version */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION_H    != SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_H) || \
     (PORT_CFG_AR_RELEASE_MINOR_VERSION_H    != SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_H) || \
     (PORT_CFG_AR_RELEASE_REVISION_VERSION_H != SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_H) \
    )
    #error "AutoSar Version Numbers of Port_Cfg.h and Siul2_Port_Ip_Cfg.h are different"
#endif

/* Check if Port_Cfg.h and Siul2_Port_Ip_Cfg.h are of the same Software version */
#if ((PORT_CFG_SW_MAJOR_VERSION_H != SIUL2_PORT_IP_SW_MAJOR_VERSION_CFG_H) || \
     (PORT_CFG_SW_MINOR_VERSION_H != SIUL2_PORT_IP_SW_MINOR_VERSION_CFG_H) || \
     (PORT_CFG_SW_PATCH_VERSION_H != SIUL2_PORT_IP_SW_PATCH_VERSION_CFG_H)    \
    )
    #error "Software Version Numbers of Port_Cfg.h and Siul2_Port_Ip_Cfg.h are different"
#endif

[!IF "var:defined('postBuildVariant')"!]
[!LOOP "variant:all()"!]
/* Check if the files Port_Cfg.h and Port_PBcfg.h are of the same version */
#if (PORT_CFG_VENDOR_ID_H != PORT_VENDOR_ID_[!"."!]_PBCFG_H)
    #error "Port_Cfg.h and Port_[!"."!]_PBcfg.h have different vendor IDs"
#endif
 /* Check if the files Port_Cfg.h and Port_PBcfg.h are of the same Autosar version */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION_H != PORT_AR_RELEASE_MAJOR_VERSION_[!"."!]_PBCFG_H) ||   \
     (PORT_CFG_AR_RELEASE_MINOR_VERSION_H != PORT_AR_RELEASE_MINOR_VERSION_[!"."!]_PBCFG_H) ||   \
     (PORT_CFG_AR_RELEASE_REVISION_VERSION_H != PORT_AR_RELEASE_REVISION_VERSION_[!"."!]_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Port_Cfg.h and Port_[!"."!]_PBcfg.h are different"
#endif
/* Check if the files Port_Cfg.h and Port_PBcfg.h are of the same software version */
#if ((PORT_CFG_SW_MAJOR_VERSION_H != PORT_SW_MAJOR_VERSION_[!"."!]_PBCFG_H) || \
     (PORT_CFG_SW_MINOR_VERSION_H != PORT_SW_MINOR_VERSION_[!"."!]_PBCFG_H) || \
     (PORT_CFG_SW_PATCH_VERSION_H != PORT_SW_PATCH_VERSION_[!"."!]_PBCFG_H)     \
    )
    #error "Software Version Numbers of Port_Cfg.h and Port_[!"."!]_PBcfg.h are different"
#endif
[!ENDLOOP!]
[!ELSE!]
/* Check if the files Port_Cfg.h and Port_PBcfg.h are of the same version */
#if (PORT_CFG_VENDOR_ID_H != PORT_VENDOR_ID_PBCFG_H)
    #error "Port_Cfg.h and Port_PBcfg.h have different vendor IDs"
#endif
 /* Check if the files Port_Cfg.h and Port_PBcfg.h are of the same Autosar version */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION_H != PORT_AR_RELEASE_MAJOR_VERSION_PBCFG_H) ||   \
     (PORT_CFG_AR_RELEASE_MINOR_VERSION_H != PORT_AR_RELEASE_MINOR_VERSION_PBCFG_H) ||   \
     (PORT_CFG_AR_RELEASE_REVISION_VERSION_H != PORT_AR_RELEASE_REVISION_VERSION_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Port_Cfg.h and Port_PBcfg.h are different"
#endif
/* Check if the files Port_Cfg.h and Port_PBcfg.h are of the same software version */
#if ((PORT_CFG_SW_MAJOR_VERSION_H != PORT_SW_MAJOR_VERSION_PBCFG_H) || \
     (PORT_CFG_SW_MINOR_VERSION_H != PORT_SW_MINOR_VERSION_PBCFG_H) || \
     (PORT_CFG_SW_PATCH_VERSION_H != PORT_SW_PATCH_VERSION_PBCFG_H)     \
    )
#error "Software Version Numbers of Port_Cfg.h and Port_PBcfg.h are different"
#endif
[!ENDIF!]
/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/
/* @implements Port_PinType_typedef */
typedef uint32 Port_PinType;

/**
* @brief Possible directions of a port pin.
* @implements Port_PinDirectionType_enumeration
*/
typedef enum
{
  PORT_PIN_IN = 0,        /**< @brief Sets port pin as input. */
  PORT_PIN_OUT,           /**< @brief Sets port pin as output. */
  PORT_PIN_INOUT,         /**< @brief Sets port pin as bidirectional. */
  PORT_PIN_HIGH_Z         /**< @brief Sets port pin as high_z. */
} Port_PinDirectionType;

/**
* @brief Different port pin modes.
* @details A port pin shall be configurable with a number of port pin modes (type Port_PinModeType).
*        The type Port_PinModeType shall be used with the function call Port_SetPinMode
* @implements Port_PinModeType_typedef
*/
typedef uint8 Port_PinModeType;

/**
* @brief   A SIUL2 register value.
* @details A port register shall be written with a 32 bits value (type Port_RegValueType).
*          The type Port_RegValueType shall be used with the function call Port_SetPinMode
*
*/
typedef uint32 Port_RegValueType;

/**
* @brief Data type used for IMCR Configuration.
* @details This type should be chosen for the specific MCU platform (best performance).
*
* @api
*/
typedef uint8  Port_Siul2_ImcrConfigType;

/**
* @brief   Single pin configuration.
* @details This structure contains all configuration parameters of a single pin
*          identified by @p SIUPin.
*
* @api
*/
typedef struct
{
  uint16 u16MscrIdx;         /**< @brief Index of the pin's Mscr */
  uint32 u32MSCR;            /**< @brief Pad Control Register */
#ifdef IPV_SIUL2_ODC_SUPPORT_U8
  uint32 u32ODC;             /**< @brief Pad Output Driver Control Configuration */
#endif
  uint8 u8MscrSiulInstance; /**< @brief Siul Instance */
  uint8 u8PDO;              /**< @brief Pad Data Output */
  Port_PinDirectionType ePadDir;            /**< @brief Pad Data Direction */
  boolean bGPIO;              /**< @brief GPIO initial mode*/
  boolean bDC;                /**< @brief Direction changebility*/
  boolean bMC;                /**< @brief Mode changebility*/
  boolean bImcr;              /**< @brief Imcr available */
  uint16 u16ImcrIdx;         /**< @brief Index of the pin's Imcr*/
} Port_Siul2_PinConfigType;


/**
* @brief   Default pin.
* @details This structure contains information about Mscr and Siul Instance for unused pins
*
* @api
*/
typedef struct
{
  uint16 u16MscrIdx;           /**< @brief Id of not used Mscr */
  uint8 u8MscrSiulInstance;   /**< @brief Siul Instance of not used Mscr */
}Port_Siul2_UnUsedPinType;

/**
* @brief   Default pin configuration.
* @details This structure contains all configuration parameters of a Default pin
*
* @api
*/
typedef struct
{
  uint32   u32MSCR;          /**< Content of Mscr Register */
  uint8   u8PDO;            /**< Pad Data Output */
} Port_Siul2_UnUsedPinConfigType;

/**
* @brief   DiPort signal configuration.
* @details This structure contains all configuration parameters of a DiPort Signal pin
*
* @api
*/
typedef struct
{
  uint8 u8MscrSiulInstance;   /**< @brief Siul Instance of the Mscr configuring the DiPort signal */
  uint16 u16MscrIdx;           /**< @brief Index of the Mscr configuring the DiPort signal */
  uint8 u8MscrValue;          /**< @brief Value of the Mscr configuring the DiPort signal */
} Port_DiPort_SignalConfigType;

/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

#define PORT_CONFIG_EXT \
[!IF "var:defined('postBuildVariant')"!][!//
[!LOOP "variant:all()"!][!//
PORT_CONFIG_[!"."!]_PB \
[!ENDLOOP!][!//
[!ELSE!][!//
PORT_CONFIG_PB
[!ENDIF!]

/**
* @brief Enable/Disable multicore function from the driver
*/
#define PORT_MULTICORE_ENABLED          [!IF "(PortGeneral/PortMulticoreSupport)"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/**
* @brief The number of SIUL2 instances on the platform
*/
#define PORT_NUM_SIUL2_INSTANCES_U8         ((uint8)[!"num:i(count(ecu:list('Port.Siul2Instances')))"!])

/**
* @brief List of identifiers for each of the SIUL2 instances on the platform
*/
[!NOCODE!][!//
[!VAR "CurInstanceIdx"="0"!][!//
[!FOR "LoopCounter" = "1" TO "num:i(count(ecu:list('Port.Siul2Instances')))"!][!//
    [!VAR "CurInstanceName"="ecu:list('Port.Siul2Instances')[num:i($LoopCounter)]"!][!//
[!CODE!][!//
#define PORT_[!"$CurInstanceName"!]_U8             ((uint8)[!"num:i($CurInstanceIdx)"!])
[!ENDCODE!][!//
    [!VAR "CurInstanceIdx"="$CurInstanceIdx + 1"!][!//
[!ENDFOR!][!//
[!ENDNOCODE!][!//

/**
* @brief Defines specifying number of IMCRs for each of the SIUL2 instances on the platform
*/
[!NOCODE!][!//
[!VAR "CurInstanceIdx"="0"!][!//
[!FOR "LoopCounter" = "1" TO "num:i(count(ecu:list('Port.Siul2Instances')))"!][!//
    [!VAR "CurInstanceName"="ecu:list('Port.Siul2Instances')[num:i($LoopCounter)]"!][!//
[!CODE!][!//
#define PORT_[!"$CurInstanceName"!]_NUM_IMCRS_U16      ((uint16)[!"num:i(ecu:list('Port.Siul2InstanceNumImcrs')[num:i($LoopCounter)])"!])
[!ENDCODE!][!//
    [!VAR "CurInstanceIdx"="$CurInstanceIdx + 1"!][!//
[!ENDFOR!][!//
[!ENDNOCODE!][!//

#define SHL_PAD_U32(x)                      ((uint32)(((uint32)1) << (x)))

/**
* @brief PSMI setting not available
* @note The current platform does not implement pad selection for multiplexed input for current pin.
*       Used for better readability of PSMI settings.
*
*/
#define NO_INPUTMUX_U16                 ((uint16)0xFFFFU)

/** @brief Port GPIO Mode */
#define PORT_GPIO_MODE                  ((Port_PinModeType)0)
/** @brief Port Alternate 1 Mode */
#define PORT_ALT1_FUNC_MODE             ((Port_PinModeType)1)
/** @brief Port Alternate 2 Mode */
#define PORT_ALT2_FUNC_MODE             ((Port_PinModeType)2)
/** @brief Port Alternate 3 Mode */
#define PORT_ALT3_FUNC_MODE             ((Port_PinModeType)3)
/** @brief Port Alternate 4 Mode */
#define PORT_ALT4_FUNC_MODE             ((Port_PinModeType)4)
/** @brief Port Alternate 5 Mode */
#define PORT_ALT5_FUNC_MODE             ((Port_PinModeType)5)
/** @brief Port Alternate 6 Mode */
#define PORT_ALT6_FUNC_MODE             ((Port_PinModeType)6)
/** @brief Port Input Mode */
#define PORT_ONLY_INPUT_MODE            ((Port_PinModeType)7)
/** @brief Port Input 1 Mode */
#define PORT_INPUT1_MODE                ((Port_PinModeType)8)
/** @brief Port Input 2 Mode */
#define PORT_INPUT2_MODE                ((Port_PinModeType)9)
/** @brief Port Input 3 Mode */
#define PORT_INPUT3_MODE                ((Port_PinModeType)10)
/** @brief Port Input 4 Mode */
#define PORT_INPUT4_MODE                ((Port_PinModeType)11)
/** @brief Port Input 5 Mode */
#define PORT_INPUT5_MODE                ((Port_PinModeType)12)
/** @brief Port Input 6 Mode */
#define PORT_INPUT6_MODE                ((Port_PinModeType)13)
/** @brief Port Input 7 Mode */
#define PORT_INPUT7_MODE                ((Port_PinModeType)14)
/** @brief Port Input/Output 1 Mode */
#define PORT_INOUT1_MODE                ((Port_PinModeType)15)
/** @brief Port Input/Output 2 Mode */
#define PORT_INOUT2_MODE                ((Port_PinModeType)16)
/** @brief Port Input/Output 3 Mode */
#define PORT_INOUT3_MODE                ((Port_PinModeType)17)
/** @brief Port Input/Output 4 Mode */
#define PORT_INOUT4_MODE                ((Port_PinModeType)18)
/** @brief Port Input/Output 5 Mode */
#define PORT_INOUT5_MODE                ((Port_PinModeType)19)
/** @brief Port Input/Output 6 Mode */
#define PORT_INOUT6_MODE                ((Port_PinModeType)20)

/** @brief Number of distinct pin modes for all pins on the platform */
#define PORT_NUM_PIN_MODES_U8           ((uint8)21)

/** @brief Informs the IP layer that there is no support
*          for ANALOG function on this platform */
#define PORT_NO_ANALOG_MODE             (STD_ON)

/** @brief Number of 16 pins blocks containing all pins on the platform */
#define PORT_NUM_16PIN_BLOCKS_U8        ((uint8)[!"ecu:get('Port.Num16PinsBlocks')"!])

/** @brief Port Abstraction Modes */
[!"$PinAbstractionModes_1"!]

/**
* @brief Enable/Disable Development Error Detection
*
* @implements   PORT_DEV_ERROR_DETECT_define
*/
#define PORT_DEV_ERROR_DETECT           [!IF "PortGeneral/PortDevErrorDetect"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/**
* @brief Use/remove Port_SetPinDirection function from the compiled driver
*
* @implements   PORT_SET_PIN_DIRECTION_API_define
*/
#define PORT_SET_PIN_DIRECTION_API      [!IF "PortGeneral/PortSetPinDirectionApi"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/**
* @brief Use/remove Port_SetPinMode function from the compiled driver
*
* @implements   PORT_SET_PIN_MODE_API_define
*/
#define PORT_SET_PIN_MODE_API           [!IF "PortGeneral/PortSetPinModeApi"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/**
* @brief Enable/Disable Port_SetPinMode function updating the output level of the pins configured at runtime as GPIO
*/
#define PORT_SETPINMODE_DOES_NOT_TOUCH_GPIO_LEVEL           [!IF "PortGeneral/PortSetPinModeDoesNotTouchGpioLevel"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/**
* @brief Use/remove Port_SetAsUnusedPin/Port_SetAsUnusedPin function from the compiled driver
*
* @implements
*/
#define PORT_SET_AS_UNUSED_PIN_API           [!IF "PortGeneral/PortSetAsUnusedPinApi"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/**
* @brief Use/remove Port_ResetPinMode function from the compiled driver
*
* @implements
*/
#define PORT_RESET_PIN_MODE_API           [!IF "PortGeneral/PortResetPinModeApi"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/**
* @brief Use/remove Port_GetVersionInfo function from the compiled driver
*
* @implements   PORT_VERSION_INFO_API_define
*/
#define PORT_VERSION_INFO_API           [!IF "PortGeneral/PortVersionInfoApi"!](STD_ON)[!ELSE!](STD_OFF)[!ENDIF!]

/**
* @brief The number of configured partition on the platform
*/
[!NOCODE!][!//
[!VAR "maxPartition" = "num:i(0)"!][!//
[!IF "node:value(PortGeneral/PortMulticoreSupport)='true'"!]
    [!IF "node:exists(as:modconf("EcuC")[1]/EcucPartitionCollection/*[1]/EcucPartition)"!][!//
        [!VAR "maxPartition" = "num:i(count(as:modconf("EcuC")[1]/EcucPartitionCollection/*[1]/EcucPartition/*))"!][!//
    [!ENDIF!][!//
[!ENDIF!][!//
[!IF "$maxPartition = 0"!][!//
    [!VAR "maxPartition" = "num:i(1)"!][!//
[!ENDIF!][!//
[!ENDNOCODE!][!//
#define PORT_MAX_PARTITION              ([!"num:i($maxPartition)"!]U)

[!NOCODE!][!//
[!/*****************************************************************************/!][!//
[!/*                          MACRO GetImcrSiul2Instance                       */!][!//
[!/*****************************************************************************/!][!//
[!/* Get the Imcr instance for selected pin */!][!//
[!MACRO "GetImcrSiul2Instance"!][!//
    [!VAR "MacPinMode"="concat(./PortPinSiul2Instance, '_PORT',number(./PortPinPcr), '_', ./PortPinMode,';')"!][!//
    [!VAR "OutPinImcrSiul2Instance"="number(substring-after(substring-before((substring-after($PinMap,$MacPinMode)),'@'),':'))"!][!//
[!ENDMACRO!][!//

[!/*****************************************************************************/!][!//
[!/*                          MACRO GetImcrIndex                               */!][!//
[!/*****************************************************************************/!][!//
[!/* Get the Imcr instance for selected pin */!][!//
[!MACRO "GetImcrIndex"!][!//
    [!VAR "MacPinMode"="concat(./PortPinSiul2Instance, '_PORT',number(./PortPinPcr), '_', ./PortPinMode,';')"!][!//
    [!VAR "OutPinImcrIndex"="number(substring-after(substring-before((substring-after($PinMap,$MacPinMode)),'^'),'@'))"!][!//
[!ENDMACRO!][!//

[!// Various checks performed to validate the configuration
[!SELECT "PortConfigSet"!]
    [!// Check if the configured Mscrs are unique for the same SIUL2 instance
    [!VAR "OuterLoopCounter" = "0"!][!//
    [!VAR "InnerLoopCounter" = "0"!][!//
    [!LOOP "PortContainer/*"!][!//
        [!LOOP "PortPin/*"!][!//
            [!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!]
            [!VAR "InnerLoopCounter" = "0"!]
            [!VAR "MatchCounter" = "0"!]
            [!VAR "OuterPortPinPcr" = "./PortPinPcr"!]
            [!VAR "OuterSiul2Instance" = "./PortPinSiul2Instance"!]
            [!LOOP "../../../../PortContainer/*"!][!//
                [!LOOP "PortPin/*"!][!//
                    [!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!]
                    [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
                        [!IF "($OuterPortPinPcr = ./PortPinPcr and $OuterSiul2Instance = ./PortPinSiul2Instance)"!]
                            [!VAR "MatchCounter" = "$MatchCounter + 1"!]
                        [!ENDIF!][!//
                    [!ENDIF!][!//
                [!ENDLOOP!][!//
            [!ENDLOOP!][!//
            [!IF "$MatchCounter > 1"!]
                [!ERROR!][!//
                Error in PortPin list: [!"name(.)"!] with [!"'PortPin Mscr'"!] set to [!"string($OuterPortPinPcr)"!] [!"concat('- Mscr is repeated for two or more ports on the same SIUL2 instance: ', $OuterSiul2Instance)"!][!//
                [!ENDERROR!][!//
            [!ENDIF!][!//
        [!ENDLOOP!][!//
    [!ENDLOOP!][!//
    [!// Check if the configured MSCRs are in range for the specified SIUL2 instance
    [!FOR "LoopCounter" = "1" TO "num:i(count(ecu:list('Port.Siul2Instances')))"!][!//
        [!VAR "MscrIdxStart"="ecu:list('Port.Siul2InstanceMscrIdxStart')[num:i($LoopCounter)]"!][!//
        [!VAR "MscrIdxEnd"="ecu:list('Port.Siul2InstanceMscrIdxEnd')[num:i($LoopCounter)]"!][!//
        [!LOOP "PortContainer/*"!][!//
            [!LOOP "PortPin/*"!][!//
                [!VAR "PortPinPcrVar" = "PortPinPcr"!][!//
                [!VAR "PortPinSiul2InstanceVar" = "ecu:list('Port.Siul2Instances')[num:i($LoopCounter)]"!][!//
                [!IF "(($PortPinPcrVar < $MscrIdxStart) and (./PortPinSiul2Instance = $PortPinSiul2InstanceVar))"!][!//
                    [!ERROR!][!//
                    Error in PortPin list: [!"name(.)"!] with [!"'PortPin Mscr'"!] set to [!"string($PortPinPcrVar)"!] [!"concat('- Mscr numbers lower than ',$MscrIdxStart,' are not available in this package on the SIUL2 instance ', $PortPinSiul2InstanceVar)"!][!//
                    [!ENDERROR!][!//
                [!ENDIF!][!//
                [!IF "(($PortPinPcrVar > $MscrIdxEnd) and (./PortPinSiul2Instance = $PortPinSiul2InstanceVar))"!][!//
                    [!ERROR!][!//
                    Error in PortPin list: [!"name(.)"!] with [!"'PortPin Mscr'"!] set to [!"string($PortPinPcrVar)"!] [!"concat('- Mscr numbers greater than ',$MscrIdxEnd,' are not available in this package on the SIUL2 instance ', $PortPinSiul2InstanceVar)"!][!//
                    [!ENDERROR!][!//
                [!ENDIF!][!//
            [!ENDLOOP!][!//
        [!ENDLOOP!][!//
    [!ENDFOR!][!//
    [!// Check if the configured MSCRs are not on the list of excluded pins
    [!FOR "LoopCounter" = "1" TO "num:i(count(ecu:list('Port.Siul2Instances')))"!][!//
        [!VAR "resourceName" = "concat('Port.Siul2Instance',num:i($LoopCounter - 1),'NotAvailableMscrs')"!][!//
        [!LOOP "PortContainer/*"!][!//
            [!LOOP "PortPin/*"!][!//
                [!VAR "PortPinPcrVar" = "PortPinPcr"!][!//
                [!VAR "PortPinSiul2InstanceVar" = "ecu:list('Port.Siul2Instances')[num:i($LoopCounter)]"!][!//
                [!IF "contains(concat(',',string(ecu:get($resourceName)),','), concat(',',$PortPinPcrVar,',')) and (./PortPinSiul2Instance = $PortPinSiul2InstanceVar)"!][!//
                    [!ERROR!][!//
                    Error in PortPin list: [!"name(.)"!] with [!"'PortPin Mscr'"!] set to [!"string($PortPinPcrVar)"!] [!"concat('- Mscr not available in this package on the SIUL2 instance ', ecu:list('Port.Siul2Instances')[num:i($LoopCounter)])"!][!//
                    [!ENDERROR!][!//
                [!ENDIF!][!//
            [!ENDLOOP!][!//
        [!ENDLOOP!][!//
    [!ENDFOR!][!//
    [!// Check if the configured MSCRs have direction set to PORT_PIN_IN for pins that are Only Input
    [!FOR "LoopCounter" = "1" TO "num:i(count(ecu:list('Port.Siul2Instances')))"!][!//
        [!VAR "resourceName" = "concat('Port.Siul2Instance',num:i($LoopCounter - 1),'OnlyInputPins')"!][!//
        [!LOOP "PortContainer/*"!][!//
            [!LOOP "PortPin/*"!][!//
                [!VAR "PortPinPcrVar" = "PortPinPcr"!][!//
                [!VAR "PortPinSiul2InstanceVar" = "ecu:list('Port.Siul2Instances')[num:i($LoopCounter)]"!][!//
                [!IF "(./PortPinDirection != 'PORT_PIN_IN') and contains(node:fallback(./PortPinMode,'GPIO'),'GPIO') and contains(concat(',',string(ecu:get($resourceName)),','),concat(',',node:fallback(./PortPinPcr,0),',')) and (./PortPinSiul2Instance = $PortPinSiul2InstanceVar)"!][!//
                    [!ERROR!][!//
                    Error in PortPin list: [!"name(.)"!] with [!"'PortPin Mscr'"!] set to [!"string($PortPinPcrVar)"!] [!"concat('- On ', ecu:list('Port.Siul2Instances')[num:i($LoopCounter)], ' instance of SIUL2, this MSCR is marked as having only GPI functionality. Please configure the PortPin Direction property to PORT_PIN_IN')"!][!//
                    [!ENDERROR!][!//
                [!ENDIF!][!//
            [!ENDLOOP!][!//
        [!ENDLOOP!][!//
    [!ENDFOR!][!//
    [!// Check if the configured MSCRs are not having MODE set to GPIO when MSCR does not support GPIO mode
    [!FOR "LoopCounter" = "1" TO "num:i(count(ecu:list('Port.Siul2Instances')))"!][!//
        [!VAR "resourceName" = "concat('Port.Siul2Instance',num:i($LoopCounter - 1),'NoGpioPins')"!][!//
        [!LOOP "PortContainer/*"!][!//
            [!LOOP "PortPin/*"!][!//
                [!VAR "PortPinPcrVar" = "PortPinPcr"!][!//
                [!VAR "PortPinSiul2InstanceVar" = "ecu:list('Port.Siul2Instances')[num:i($LoopCounter)]"!][!//
                [!IF "contains(node:fallback(./PortPinMode,'GPIO'),'GPIO') and contains(concat(',',string(ecu:get($resourceName)),','),concat(',',node:fallback(./PortPinPcr,0),',')) and (./PortPinSiul2Instance = $PortPinSiul2InstanceVar)"!][!//
                    [!ERROR!][!//
                    Error in PortPin list: [!"name(.)"!] with [!"'PortPin Mscr'"!] [!"string($PortPinPcrVar)"!] [!"concat('- On ', ecu:list('Port.Siul2Instances')[num:i($LoopCounter)],' instance of SIUL2, this MSCR is marked as not having GPIO functionality. Please configure the PortPin Mode property to one of the other available functionalities')"!][!//
                    [!ENDERROR!][!//
                [!ENDIF!][!//
            [!ENDLOOP!][!//
        [!ENDLOOP!][!//
    [!ENDFOR!][!//
    [!// Check if the configured pins are not trying to set same IMCR from same IMCR SIUL2 instance
    [!VAR "OuterLoopCounter" = "0"!][!//
    [!VAR "InnerLoopCounter" = "0"!][!//
    [!LOOP "PortContainer/*"!][!//
        [!LOOP "PortPin/*"!][!//
            [!VAR "OuterPinName" = "name(.)"!][!//
            [!CALL "GetImcrSiul2Instance"!][!//
            [!CALL "GetImcrIndex"!][!//
            [!VAR "OuterImcrSiul2Instance" = "$OutPinImcrSiul2Instance"!][!//
            [!VAR "OuterImcrIndex" = "$OutPinImcrIndex"!][!//
            [!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!][!//
            [!VAR "InnerLoopCounter" = "0"!][!//
            [!VAR "MatchCounter" = "0"!][!//
            [!VAR "OuterPortPinPcr" = "./PortPinPcr"!][!//
            [!VAR "OuterSiul2Instance" = "./PortPinSiul2Instance"!][!//
            [!LOOP "../../../../PortContainer/*"!][!//
                [!LOOP "PortPin/*"!][!//
                    [!VAR "InnerPinName" = "name(.)"!][!//
                    [!CALL "GetImcrSiul2Instance"!][!//
                    [!CALL "GetImcrIndex"!][!//
                    [!VAR "InnerImcrSiul2Instance" = "$OutPinImcrSiul2Instance"!][!//
                    [!VAR "InnerImcrIndex" = "$OutPinImcrIndex"!][!//
                    [!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!][!//
                    [!IF "$OuterLoopCounter > $InnerLoopCounter"!][!//
                        [!IF "./PortPinMode != 'GPIO'"!][!//
                            [!IF "($OuterImcrIndex != 65535) and ($InnerImcrIndex != 65535)"!][!//
                                [!IF "($OuterImcrSiul2Instance = $InnerImcrSiul2Instance) and ($OuterImcrIndex = $InnerImcrIndex)"!][!//
                                    [!ERROR!][!//
                                    Error in PortPin list: There are at least 2 pads ([!"$OuterPinName"!] and [!"$InnerPinName"!]) that are trying to configure the same IMCR ([!"num:i($InnerImcrIndex)"!]) of the same SIUL2 instance ([!"num:i($InnerImcrSiul2Instance)"!]) with different values. Please remove one of them from the configuration.
                                    [!ENDERROR!][!//
                                [!ENDIF!][!//
                            [!ENDIF!][!//
                        [!ENDIF!][!//
                    [!ENDIF!][!//
                [!ENDLOOP!][!//
            [!ENDLOOP!][!//
        [!ENDLOOP!][!//
    [!ENDLOOP!][!//
    [!// Check if the Mscrs in UnTouchedPortPin are unique for the same SIUL2 instance
    [!VAR "OuterLoopCounter" = "0"!][!//
    [!VAR "InnerLoopCounter" = "0"!][!//
    [!LOOP "UnTouchedPortPin/*"!][!//
        [!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!]
        [!VAR "InnerLoopCounter" = "0"!]
        [!VAR "MatchCounter" = "0"!]
        [!VAR "OuterPortPinPcr" = "./PortPinPcr"!]
        [!VAR "OuterSiul2Instance" = "./PortPinSiul2Instance"!]
        [!LOOP "../../UnTouchedPortPin/*"!][!//
            [!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!]
            [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
                [!IF "($OuterPortPinPcr = ./PortPinPcr and $OuterSiul2Instance = ./PortPinSiul2Instance)"!]
                    [!VAR "MatchCounter" = "$MatchCounter + 1"!]
                [!ENDIF!][!//
            [!ENDIF!][!//
        [!ENDLOOP!][!//
        [!IF "$MatchCounter > 1"!]
            [!ERROR!][!//
            Error in UnTouchedPortPin list: [!"name(.)"!] with [!"'PortPin Mscr'"!] set to [!"string($OuterPortPinPcr)"!] [!"concat('- Mscr is repeated for two or more ports on the same SIUL2 instance: ', $OuterSiul2Instance)"!][!//
            [!ENDERROR!][!//
        [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!// Check if the configured MSCRs in UnTouchedPortPin list are in range for the specified SIUL2 instance
    [!FOR "LoopCounter" = "1" TO "num:i(count(ecu:list('Port.Siul2Instances')))"!][!//
        [!VAR "MscrIdxStart"="ecu:list('Port.Siul2InstanceMscrIdxStart')[num:i($LoopCounter)]"!][!//
        [!VAR "MscrIdxEnd"="ecu:list('Port.Siul2InstanceMscrIdxEnd')[num:i($LoopCounter)]"!][!//
        [!LOOP "UnTouchedPortPin/*"!][!//
            [!VAR "PortPinPcrVar" = "PortPinPcr"!][!//
            [!VAR "PortPinSiul2InstanceVar" = "ecu:list('Port.Siul2Instances')[num:i($LoopCounter)]"!][!//
            [!IF "(($PortPinPcrVar < $MscrIdxStart) and (./PortPinSiul2Instance = $PortPinSiul2InstanceVar))"!][!//
                [!ERROR!][!//
                Error in UnTouchedPortPin list: [!"name(.)"!] with [!"'PortPin Mscr'"!] set to [!"string($PortPinPcrVar)"!] [!"concat('- Mscr numbers lower than ',$MscrIdxStart,' are not available in this package on the SIUL2 instance ', $PortPinSiul2InstanceVar)"!][!//
                [!ENDERROR!][!//
            [!ENDIF!][!//
            [!IF "(($PortPinPcrVar > $MscrIdxEnd) and (./PortPinSiul2Instance = $PortPinSiul2InstanceVar))"!][!//
                [!ERROR!][!//
                Error in UnTouchedPortPin list: [!"name(.)"!] with [!"'PortPin Mscr'"!] set to [!"string($PortPinPcrVar)"!] [!"concat('- Mscr numbers greater than ',$MscrIdxEnd,' are not available in this package on the SIUL2 instance ', $PortPinSiul2InstanceVar)"!][!//
                [!ENDERROR!][!//
            [!ENDIF!][!//
        [!ENDLOOP!][!//
    [!ENDFOR!][!//
    [!// Check if the configured MSCRs are not on the list of excluded pins
    [!FOR "LoopCounter" = "1" TO "num:i(count(ecu:list('Port.Siul2Instances')))"!][!//
        [!VAR "resourceName" = "concat('Port.Siul2Instance',num:i($LoopCounter - 1),'NotAvailableMscrs')"!][!//
        [!LOOP "UnTouchedPortPin/*"!][!//
            [!VAR "PortPinPcrVar" = "PortPinPcr"!][!//
            [!VAR "PortPinSiul2InstanceVar" = "ecu:list('Port.Siul2Instances')[num:i($LoopCounter)]"!][!//
            [!IF "contains(concat(',',string(ecu:get($resourceName)),','), concat(',',$PortPinPcrVar,',')) and (./PortPinSiul2Instance = $PortPinSiul2InstanceVar)"!][!//
                [!ERROR!][!//
                Error in UnTouchedPortPin list: [!"name(.)"!] with [!"'PortPin Mscr'"!] set to [!"string($PortPinPcrVar)"!] [!"concat('- Mscr not available in this package on the SIUL2 instance ', ecu:list('Port.Siul2Instances')[num:i($LoopCounter)])"!][!//
                [!ENDERROR!][!//
            [!ENDIF!][!//
        [!ENDLOOP!][!//
    [!ENDFOR!][!//
    [!// Check if there is no MSCR that appears both in list of configured pins and in the list of UnTouchedPortPins
    [!LOOP "PortContainer/*"!][!//
        [!VAR "PortContainerName" = "name(.)"!]
        [!LOOP "PortPin/*"!][!//
            [!VAR "MatchCounter" = "0"!]
            [!VAR "ConfiguredPortPinMscr" = "./PortPinPcr"!]
            [!VAR "ConfiguredPortPinSiul2Instance" = "./PortPinSiul2Instance"!]
            [!LOOP "../../../../UnTouchedPortPin/*"!][!//
                [!IF "($ConfiguredPortPinMscr = ./PortPinPcr and $ConfiguredPortPinSiul2Instance = ./PortPinSiul2Instance)"!]
                    [!ERROR!][!//
                    Error: MSCR [!"string($ConfiguredPortPinMscr)"!] in SIUL2 instance [!"string($ConfiguredPortPinSiul2Instance)"!] appears in the UnTouchedPortPin list and also in the list of configured pins in Port container [!"string($PortContainerName)"!]. Please remove it from one of the 2 lists[!//
                    [!ENDERROR!][!//
                [!ENDIF!][!//
            [!ENDLOOP!][!//
        [!ENDLOOP!][!//
    [!ENDLOOP!][!//
    [!// Check if the IMCR in UntouchedIMCR are unique
    [!VAR "OuterLoopCounter" = "0"!][!//
    [!VAR "InnerLoopCounter" = "0"!][!//
    [!LOOP "UntouchedIMCR/*"!][!//
        [!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!]
        [!VAR "InnerLoopCounter" = "0"!]
        [!VAR "MatchCounter" = "0"!]
        [!VAR "OuterPortPinIMCR" = "./UntouchedPortPinImcr"!]
        [!LOOP "../../UntouchedIMCR/*"!][!//
            [!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!]
            [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
                [!IF "($OuterPortPinIMCR = ./UntouchedPortPinImcr)"!]
                    [!VAR "MatchCounter" = "$MatchCounter + 1"!]
                [!ENDIF!][!//
            [!ENDIF!][!//
        [!ENDLOOP!][!//
        [!IF "$MatchCounter > 1"!]
            [!ERROR!][!//
                Error in UntouchedIMCR list: [!"name(.)"!] with [!"'IMCR'"!] set to [!"string($OuterPortPinIMCR)"!]. IMCR is repeated for two or more times.[!//
            [!ENDERROR!][!//
        [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!// Check if the configured IMCRs in UntouchedIMCR list are in range for the specified SIUL2 instance   Port.Siul2InstanceNumImcrs
    [!FOR "LoopCounter" = "1" TO "num:i(count(ecu:list('Port.Siul2Instances')))"!][!//
        [!VAR "ImcrIdxStart"="ecu:list('Port.Siul2InstanceImcrIdxStart')[num:i($LoopCounter)]"!][!//
        [!VAR "ImcrIdxEnd"="ecu:list('Port.Siul2InstanceImcrIdxEnd')[num:i($LoopCounter)]"!][!//
        [!LOOP "UntouchedIMCR/*"!][!//
            [!VAR "UntouchedImcrVar" = "UntouchedPortPinImcr"!][!//
            [!VAR "IMCRSiul2InstanceVar" = "ecu:list('Port.Siul2Instances')[num:i($LoopCounter)]"!][!//
            [!IF "(($UntouchedImcrVar < $ImcrIdxStart) and (./IMCRSiul2Instance = $IMCRSiul2InstanceVar))"!][!//
                [!ERROR!][!//
                    Error in UntouchedIMCR list: [!"name(.)"!] with [!"'UntouchedPortPin Imcr'"!] set to [!"string($UntouchedImcrVar)"!] [!"concat('- Imcr numbers lower than ',$ImcrIdxStart,' are not available in this package on the SIUL2 instance ', $IMCRSiul2InstanceVar)"!][!//
                [!ENDERROR!][!//
            [!ENDIF!][!//
            [!IF "(($UntouchedImcrVar > $ImcrIdxEnd) and (./IMCRSiul2Instance = $IMCRSiul2InstanceVar))"!][!//
                [!ERROR!][!//
                    Error in UntouchedIMCR list: [!"name(.)"!] with [!"'UntouchedPortPin Imcr'"!] set to [!"string($UntouchedImcrVar)"!] [!"concat('- Imcr numbers greater than ',$ImcrIdxEnd,' are not available in this package on the SIUL2 instance ', $IMCRSiul2InstanceVar)"!][!//
                [!ENDERROR!][!//
            [!ENDIF!][!//
        [!ENDLOOP!][!//
    [!ENDFOR!][!//
[!ENDSELECT!][!//
[!ENDNOCODE!][!//
/**
* @brief Port Pin symbolic names
* @details Get All Symbolic Names from configuration tool
*
*
*/
[!NOCODE!]
    [!VAR "OutConfigLoopCounter" = "0"!][!//
    [!VAR "ConfigSetIndex"="0"!]
    [!SELECT "PortConfigSet"!][!//
        [!VAR "ConfigSetName" = "as:name(.)"!][!//
        [!VAR "OutConfigLoopCounter" = "$OutConfigLoopCounter + 1"!][!//
        [!VAR "OutPinLoopCounter" = "0"!][!//
        [!LOOP "PortContainer/*"!][!//
            [!VAR "ContName" = "node:name(.)"!][!//
            [!LOOP "PortPin/*"!][!//
                [!VAR "OutPinLoopCounter" = "$OutPinLoopCounter + 1"!][!//
                [!VAR "Name" = "node:name(.)"!][!//
                [!VAR "MatchCounter" = "0"!][!//
                [!VAR "InConfigLoopCounter" = "0"!][!//
                [!VAR "MatchConfigSet" = "0"!][!//
                [!SELECT "../../../../../PortConfigSet"!][!//
                    [!VAR "InConfigLoopCounter" = "$InConfigLoopCounter + 1"!][!//
                    [!VAR "InPinLoopCounter" = "0"!][!//
                    [!LOOP "PortContainer/*"!][!//
                        [!VAR "ContNameNew" = "node:name(.)"!][!//
                        [!LOOP "PortPin/*"!][!//
                            [!VAR "InPinLoopCounter" = "$InPinLoopCounter + 1"!][!//
                            [!IF "$InConfigLoopCounter < $OutConfigLoopCounter"!][!//
                                [!IF "($ContName = $ContNameNew)"!][!//
                                    [!IF "($Name = node:name(.))"!][!//
                                        [!IF "$InPinLoopCounter = $OutPinLoopCounter"!][!//
                                            [!IF "$MatchConfigSet = $ConfigSetIndex"!][!//
                                                [!VAR "MatchCounter" = "$MatchCounter + 1"!][!//
                                            [!ENDIF!][!//
                                        [!ELSE!][!//
                                            [!ERROR!][!//
                                                [!"concat('- The same Abstract Name ',($Name),' is used for different index values')"!][!//
                                            [!ENDERROR!][!//
                                        [!ENDIF!][!//
                                    [!ENDIF!][!//
                                [!ENDIF!][!//
                            [!ENDIF!][!//
                        [!ENDLOOP!][!//
                    [!ENDLOOP!][!//
                    [!VAR "$MatchConfigSet" = "$MatchConfigSet+1"!][!//
                [!ENDSELECT!][!//
                [!IF "$MatchCounter = 0"!][!//
                    [!VAR "PortPinIdVar"="PortPinId"!][!//
[!CODE!][!//
#define PortConf_PortPin_[!"node:name(.)"!]  [!"num:i($PortPinIdVar - 1)"!]
[!ENDCODE!][!//
                [!ENDIF!][!//
            [!ENDLOOP!][!//
        [!ENDLOOP!][!//
    [!ENDSELECT!][!//
[!ENDNOCODE!]
/**
* @brief The maximum number of configured pins
*/
#define PORT_MAX_CONFIGURED_PADS_U16   ((uint16)[!"num:i(count(PortConfigSet/PortContainer/*/PortPin/*))"!])

/**
* @brief Number of UnUsed pin array
*/
[!NOCODE!]
    [!SELECT "PortConfigSet"!][!//
        [!VAR "NoOfUnusedPins" = "0"!][!//
        [!FOR "LoopCounter" = "1" TO "num:i(count(ecu:list('Port.Siul2Instances')))"!][!//
            [!VAR "MscrIdxStart"="ecu:list('Port.Siul2InstanceMscrIdxStart')[num:i($LoopCounter)]"!][!//
            [!VAR "MscrIdxEnd"="ecu:list('Port.Siul2InstanceMscrIdxEnd')[num:i($LoopCounter)]"!][!//
            [!FOR "x" = "$MscrIdxStart" TO "$MscrIdxEnd"!][!//
                [!VAR "PinUsed"="0"!][!//
                [!LOOP "PortContainer/*/PortPin/*"!][!//
                    [!IF "$PinUsed=0"!][!//
                        [!IF "num:i(./PortPinPcr)=$x and ./PortPinSiul2Instance = ecu:list('Port.Siul2Instances')[num:i($LoopCounter)]"!][!//
                            [!VAR "PinUsed"="$PinUsed + 1"!][!//
                        [!ENDIF!][!//
                    [!ENDIF!]
                [!ENDLOOP!][!//
                [!LOOP "UnTouchedPortPin/*"!][!//
                    [!IF "$PinUsed=0"!][!//
                        [!IF "num:i(./PortPinPcr)=$x and ./PortPinSiul2Instance = ecu:list('Port.Siul2Instances')[num:i($LoopCounter)]"!][!//
                            [!VAR "PinUsed"="$PinUsed + 1"!][!//
                        [!ENDIF!][!//
                    [!ENDIF!][!//
                [!ENDLOOP!][!//
                [!IF "$PinUsed=0"!][!//
                    [!VAR "resourceName" = "concat('Port.Siul2Instance',num:i($LoopCounter - 1),'NotImplementedMscrs')"!][!//
                    [!IF "contains(concat(',',string(ecu:get($resourceName)),','),concat(',',$x,','))"!][!//
                        [!VAR "PinUsed"="$PinUsed + 1"!][!//
                    [!ENDIF!][!//
                [!ENDIF!][!//
                [!IF "$PinUsed=0"!][!//
                    [!VAR "resourceName" = "concat('Port.Siul2Instance',num:i($LoopCounter - 1),'AdcPins')"!][!//
                    [!IF "contains(concat(',',string(ecu:get($resourceName)),','),concat(',',$x,','))"!][!//
                        [!VAR "PinUsed"="$PinUsed + 1"!][!//
                    [!ENDIF!][!//
                [!ENDIF!][!//
                [!IF "$PinUsed=0"!][!//
                    [!VAR "NoOfUnusedPins" = "$NoOfUnusedPins + 1"!][!//
                [!ENDIF!][!//
            [!ENDFOR!][!//
        [!ENDFOR!][!//
[!CODE!][!//
#define PORT_MAX_UNUSED_PADS_U16    ([!"num:i($NoOfUnusedPins)"!]U)
[!ENDCODE!][!//
    [!ENDSELECT!][!//
[!ENDNOCODE!][!//

[!NOCODE!]
[!IF "IMPLEMENTATION_CONFIG_VARIANT='VariantPreCompile' and variant:size()<=1"!]
[!CODE!][!//
/**
* @brief Port driver Pre-Compile configuration switch
*/
#define    PORT_PRECOMPILE_SUPPORT      (STD_ON)
[!ENDCODE!][!//
[!ELSE!]
[!CODE!][!//
/**
* @brief Port driver Post-build configuration switch
*/
#define PORT_PRECOMPILE_SUPPORT     (STD_OFF)
[!ENDCODE!][!//
[!ENDIF!][!//
[!ENDNOCODE!][!//

#if (STD_ON == PORT_SET_PIN_MODE_API)
/**
* @brief Defines for number of entries in the INOUT tables for each of the SIUL2 instances
*/
[!NOCODE!]
[!IF "num:i(count(ecu:list('Port.Siul2Instances'))) > 0"!][!//
[!CODE!][!//
#define  [!"concat('PORT_', ecu:list('Port.Siul2Instances')[num:i(1)], '_INOUT_TABLE_NUM_ENTRIES_U16')"!]       ((uint16)[!"$SIUL2_0_SIZE_OF_INOUT_SETTINGS_ON_SUBDERIV1"!])
[!ENDCODE!][!//
[!ENDIF!][!//

[!IF "num:i(count(ecu:list('Port.Siul2Instances'))) > 1"!][!//
[!CODE!][!//
#define  [!"concat('PORT_', ecu:list('Port.Siul2Instances')[num:i(2)], '_INOUT_TABLE_NUM_ENTRIES_U16')"!]       ((uint16)[!"$SIUL2_1_SIZE_OF_INOUT_SETTINGS_ON_SUBDERIV1"!])
[!ENDCODE!][!//
[!ENDIF!][!//
[!ENDNOCODE!][!//

#endif /* (STD_ON == PORT_SET_PIN_MODE_API) */

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/


/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/
/**
* @brief   Type defining the size of the arrays used to keep the information about pin mode availability
* @details
*
* @api
*/
typedef uint16 Port_PinModeAvailabilityArrayType[PORT_NUM_PIN_MODES_U8][PORT_NUM_16PIN_BLOCKS_U8];

/**
* @brief   Structure needed by @p Port_Init().
* @details The structure @p Port_ConfigType is a type for the external data
*          structure containing the initialization data for the PORT Driver.
* @note    The user must use the symbolic names defined in the configuration
*          tool.
*
* @implements Port_ConfigType_struct
*/
typedef struct
{
    uint16 u16NumPins;                                                           /**< @brief Number of used pads (to be configured) */
    uint16 u16NumUnusedPins;                                                     /**< @brief Number of unused pads */
    uint16 au16NumImcrs[PORT_NUM_SIUL2_INSTANCES_U8];                            /**< @brief Used pads IMCRs number */
    const Port_Siul2_UnUsedPinType *pUnusedPads;                                 /**< @brief Unused pad id's array and SIUL2 instance */
    const Port_Siul2_UnUsedPinConfigType *pUnusedPadConfig;                      /**< @brief Unused pad configuration */
#ifdef PORT_SIUL2_AE_U8
    const Port_Siul2_UnUsedPinConfigType *pSiul2AEUnusedPadConfig;               /**< @brief Unused pad configuration for SIUL2_AE */
#endif /* PORT_SIUL2_AE_U8 */
    const Port_Siul2_PinConfigType *pUsedPadConfig;                              /**< @brief Used pads data configuration */
    const Port_Siul2_ImcrConfigType *pImcrConfig[PORT_NUM_SIUL2_INSTANCES_U8];   /**< @brief Used pads IMCR configuration */
    const uint32 *pau32Port_PinToPartitionMap;                                   /**< @brief Pointer to pin partition mapping */
    const uint8 *pau8Port_PartitionList;                                         /**< @brief Pointer to used partitions */
    const Siul2_Port_Ip_PinSettingsConfig *IpConfigPtr;                          /**< @brief Ip configuration */
} Port_ConfigType;

/**
* @brief Settings for a INMUX register
* @details The structure @p Port_InMuxSettingType manages ExtraFunctions PinMode.
* @api
*/
typedef struct
{
    uint16 u16ImcrIdx;   /**< @brief The id of the INMUX register to be configured */
    uint8  u8ImcrSSS;    /**< @brief The value of the INMUX reg for signal allocation */
    uint8  u8ImcrSiulInstance;       /**< @brief The mode to be configured */
} Port_InMuxSettingType;

/**
* @brief Settings for a INOUT functionality
* @details The structure @p Port_InoutSettingType manages Inout PinModes.
*
* @api
*/
typedef struct
{
    uint16 u16MscrIdx;               /**< @brief The id of the MSCR register to be configured */
    uint8  u8Mode;                   /**< @brief The mode to be configured */
    uint16 u16ImcrIdx;               /**< @brief The id of the INMUX register to be configured */
    uint8  u8ImcrSSS;                /**< @brief The value of the INMUX reg for signal allocation */
    uint8  u8ImcrSiulInstance;       /**< @brief SIUL2 instance where IMCR resides */
} Port_InoutSettingType;

/*=================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/
#if (STD_ON == PORT_SET_PIN_MODE_API)

#define PORT_START_SEC_CONST_16
#include "Port_MemMap.h"

/**
* @brief Array of values storing the length of tables with INOUT functionality information on each of the SIUL2 instance on the platform
*/
extern const uint16 Port_au16NumInoutMuxSettings[PORT_NUM_SIUL2_INSTANCES_U8];

#define PORT_STOP_SEC_CONST_16
#include "Port_MemMap.h"


#define PORT_START_SEC_CONST_UNSPECIFIED
#include "Port_MemMap.h"

/**
* @brief Array of pointers to the tables storing information about pin availability on each of the SIUL2 instance on the platform
*/
extern const Port_PinModeAvailabilityArrayType * const Port_apSiul2InstancePinModeAvailability[PORT_NUM_SIUL2_INSTANCES_U8];

/**
* @brief Array of pointers to the tables storing information about IN functionality on each of the SIUL2 instance on the platform
*/
extern const Port_InMuxSettingType * const Port_apInMuxSettings[PORT_NUM_SIUL2_INSTANCES_U8];

/**
* @brief Array of pointers to the tables storing information about indexes in the IN functionality tables on each of the SIUL2 instance on the platform
*/
extern const uint16 * const Port_apInMuxSettingsIndex[PORT_NUM_SIUL2_INSTANCES_U8];

/**
* @brief Array of pointers to the tables storing information about INOUT functionality on each of the SIUL2 instance on the platform
*/
extern const Port_InoutSettingType * const Port_apInoutMuxSettings[PORT_NUM_SIUL2_INSTANCES_U8];

#define PORT_STOP_SEC_CONST_UNSPECIFIED
#include "Port_MemMap.h"

#endif /* (STD_ON == PORT_SET_PIN_MODE_API) */
/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* PORT_CFG_H */

/** @} */

/* End of File */
[!ENDCODE!][!//
