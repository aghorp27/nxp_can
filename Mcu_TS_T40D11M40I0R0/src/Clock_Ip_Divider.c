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
/**
*   @file       Clock_Ip_Divider.c
*   @version    4.0.0
*
*   @brief   CLOCK driver implementations.
*   @details CLOCK driver implementations.
*
*   @addtogroup CLOCK_DRIVER Clock Ip Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Clock_Ip_Private.h"


/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_DIVIDER_VENDOR_ID_C                      43
#define CLOCK_IP_DIVIDER_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_DIVIDER_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_DIVIDER_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_DIVIDER_SW_MAJOR_VERSION_C               4
#define CLOCK_IP_DIVIDER_SW_MINOR_VERSION_C               0
#define CLOCK_IP_DIVIDER_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_Divider.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_DIVIDER_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_Divider.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_Divider.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_DIVIDER_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_DIVIDER_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_DIVIDER_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Divider.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_Divider.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_DIVIDER_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_DIVIDER_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_DIVIDER_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Divider.c and Clock_Ip_Private.h are different"
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/
/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

static void Clock_Ip_Callback_DividerEmpty(Clock_Ip_DividerConfigType const* Config);
#ifdef CLOCK_IP_CGM_X_DE_DIV_STAT_WITHOUT_PHASE
static void Clock_Ip_SetCgmXDeDivStatWithoutPhase(Clock_Ip_DividerConfigType const* Config);
#endif
#ifdef CLOCK_IP_CGM_X_DE_DIV_WITHOUT_PHASE
static void Clock_Ip_SetCgmXDeDivWithoutPhase(Clock_Ip_DividerConfigType const* Config);
#endif
#ifdef CLOCK_IP_PLLDIG_PLL0DIV_DE_DIV_OUTPUT
static void Clock_Ip_SetPlldigPll0divDeDivOutput(Clock_Ip_DividerConfigType const* Config);
#endif
 



/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"
/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/
#define MCU_START_SEC_CODE
/* Clock start section code */

#include "Mcu_MemMap.h"

static void Clock_Ip_Callback_DividerEmpty(Clock_Ip_DividerConfigType const* Config)
{
    (void)Config;
    /* No implementation */
}

#ifdef CLOCK_IP_CGM_X_DE_DIV_STAT_WITHOUT_PHASE
static void Clock_Ip_SetCgmXDeDivStatWithoutPhase(Clock_Ip_DividerConfigType const* Config)
{
    uint32 Instance      = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_MODULE_INSTANCE];
    uint32 SelectorIndex = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_SELECTOR_INDEX];
    uint32 DividerIndex  = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_DIVIDER_INDEX];

    uint32 DividerMask  = Clock_Ip_axFeatureExtensions[Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_EXTENSION_INDEX]].DividerValueMask;
    uint32 DividerShift = Clock_Ip_axFeatureExtensions[Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_EXTENSION_INDEX]].DividerValueShift;

    uint32 RegValue;
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 DividerStatus;

    /* Program divider value */
    if (Config->Value != 0U)
    {
        RegValue = Clock_Ip_apxCgm[Instance][SelectorIndex]->Divider[DividerIndex];
        RegValue &= ~DividerMask;
        RegValue |= (((Config->Value-1U) << DividerShift) & DividerMask);
        Clock_Ip_apxCgm[Instance][SelectorIndex]->Divider[DividerIndex] = RegValue;
    }

    Clock_Ip_StartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_IP_TIMEOUT_VALUE_US);
    /* Wait for acknowledge to be cleared. */
    do
    {
        DividerStatus = (Clock_Ip_apxCgm[Instance][SelectorIndex]->MUX_DIV_UPD_STAT & MC_CGM_MUX_DIV_UPD_STAT_DIV_STAT_MASK);
        TimeoutOccurred = Clock_Ip_TimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
    }
    while ((MC_CGM_MUX_DIV_UPD_STAT_DIV_STAT_PENDING == DividerStatus) && (FALSE == TimeoutOccurred));

    if (FALSE == TimeoutOccurred)
    {
        /* Enable or Disable the Clock Divider */
        if (Config->Value != 0U)
        {
            /* Enable divider */
            Clock_Ip_apxCgm[Instance][SelectorIndex]->Divider[DividerIndex] |= MC_CGM_MUX_DC_DE_MASK;
        }
        else
        {
            Clock_Ip_apxCgm[Instance][SelectorIndex]->Divider[DividerIndex] &= ~MC_CGM_MUX_DC_DE_MASK;
        }
    }
    else
    {
        /* Report timeout error */
        Clock_Ip_ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, Config->Name);
    }
}
#endif

#ifdef CLOCK_IP_CGM_X_DE_DIV_WITHOUT_PHASE
static void Clock_Ip_SetCgmXDeDivWithoutPhase(Clock_Ip_DividerConfigType const* Config)
{

    uint32 Instance      = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_MODULE_INSTANCE];
    uint32 SelectorIndex = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_SELECTOR_INDEX];
    uint32 DividerIndex  = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_DIVIDER_INDEX];

    uint32 DividerMask  = Clock_Ip_axFeatureExtensions[Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_EXTENSION_INDEX]].DividerValueMask;
    uint32 DividerShift = Clock_Ip_axFeatureExtensions[Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_EXTENSION_INDEX]].DividerValueShift;

    uint32 RegValue;

    /* Program divider value */
    if (Config->Value != 0U)
    {
        RegValue = Clock_Ip_apxCgm[Instance][SelectorIndex]->Divider[DividerIndex];
        RegValue &= ~DividerMask;
        RegValue |= ((Config->Value-1U) << DividerShift) & DividerMask;
        Clock_Ip_apxCgm[Instance][SelectorIndex]->Divider[DividerIndex] = RegValue;
    }

    /* Enable or Disable the Clock Divider */
    if (Config->Value != 0U)
    {
        /* Enable divider */
        Clock_Ip_apxCgm[Instance][SelectorIndex]->Divider[DividerIndex] |= MC_CGM_MUX_DC_DE_MASK;
    }
    else
    {
        Clock_Ip_apxCgm[Instance][SelectorIndex]->Divider[DividerIndex] &= ~MC_CGM_MUX_DC_DE_MASK;
    }
}
#endif

#ifdef CLOCK_IP_PLLDIG_PLL0DIV_DE_DIV_OUTPUT
static void Clock_Ip_SetPlldigPll0divDeDivOutput(Clock_Ip_DividerConfigType const* Config)
{

    uint32 Instance      = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_MODULE_INSTANCE];
    uint32 DividerIndex  = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_DIVIDER_INDEX];
    uint32 RegValue;

    /* Disable divider */
    Clock_Ip_pxPll[Instance]->PLLODIV[DividerIndex] &= ~PLLDIG_PLLODIV_DE_MASK;
    /* Check if divider is enabled */
    if (Config->Value != 0U)
    {
        RegValue = Clock_Ip_pxPll[Instance]->PLLODIV[DividerIndex];
        RegValue |= PLLDIG_PLLODIV_DE_MASK;
        RegValue &= ~PLLDIG_PLLODIV_DIV_MASK;
        RegValue |= PLLDIG_PLLODIV_DIV(Config->Value - 1U);
        Clock_Ip_pxPll[Instance]->PLLODIV[DividerIndex] = RegValue;
    }
}
#endif

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/
/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

const Clock_Ip_DividerCallbackType Clock_Ip_axDividerCallbacks[CLOCK_IP_DIVIDER_CALLBACKS_COUNT] =
{
    {
        Clock_Ip_Callback_DividerEmpty,                  /* Set */
    },
#ifdef CLOCK_IP_CGM_X_DE_DIV_STAT_WITHOUT_PHASE
    {
        Clock_Ip_SetCgmXDeDivStatWithoutPhase,           /* Set */
    },
#endif
#ifdef CLOCK_IP_CGM_X_DE_DIV_WITHOUT_PHASE
    {
        Clock_Ip_SetCgmXDeDivWithoutPhase,               /* Set */
    },
#endif
#ifdef CLOCK_IP_PLLDIG_PLL0DIV_DE_DIV_OUTPUT
    {
        Clock_Ip_SetPlldigPll0divDeDivOutput,            /* Set */
    },
#endif
};

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */
