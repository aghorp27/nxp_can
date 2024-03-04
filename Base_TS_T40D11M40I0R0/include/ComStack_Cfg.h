/*==================================================================================================
* Project : RTD AUTOSAR 4.4
* Platform : CORTEXM
* Peripheral : S32G2XXM7
* Dependencies : none
*
* Autosar Version : 4.4.0
* Autosar Revision : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version : 4.0.0
* Build Version : S32_RTD_4_0_0_D2210_ASR_REL_4_4_REV_0000_20221031
*
* (c) Copyright 2022 NXP Semiconductors
* All Rights Reserved.
*
* NXP Confidential. This software is owned or controlled by NXP and may only be
* used strictly in accordance with the applicable license terms. By expressly
* accepting such terms or by downloading, installing, activating and/or otherwise
* using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms. If you do not agree to be
* bound by the applicable license terms, then you may not retain, install,
* activate or otherwise use the software.
==================================================================================================*/
/**
*   @file           ComStack_Cfg.h
*   
*   @version 4.0.0
*
*   @brief   AUTOSAR Base - type definition of the PduIdType and PduLengthType.
*   @details AUTOSAR type definition of the PduIdType and PduLengthType. shall be generated by 
*            the generator of EcuC Virtual Layer
*            This file contains sample code only. It is not part of the production code deliverables
*   @addtogroup BASE_COMPONENT
*   @{
*/
#ifndef COMSTACK_CFG_H
#define COMSTACK_CFG_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
==================================================================================================*/
#include "Platform_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/** 
* @brief   This type serve as a unique identifier of a PDU within a software module.
*          Allowed ranges: uint8 .. uint16
* @implements PduIdType_type
*/
typedef uint16       PduIdType;

/** 
* @brief   This type serve as length information of a PDU in bytes.
*          Allowed ranges: uint8 .. uint32 
* @implements PduLengthType_Type
*/
typedef uint32       PduLengthType; 

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif /* COMSTACK_CFG_H */

/** @} */
