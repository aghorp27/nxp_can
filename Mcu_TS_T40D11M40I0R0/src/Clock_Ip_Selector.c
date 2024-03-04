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
*   @file       Clock_Ip_Selector.c
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
#define CLOCK_IP_SELECTOR_VENDOR_ID_C                      43
#define CLOCK_IP_SELECTOR_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_SELECTOR_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_SELECTOR_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_SELECTOR_SW_MAJOR_VERSION_C               4
#define CLOCK_IP_SELECTOR_SW_MINOR_VERSION_C               0
#define CLOCK_IP_SELECTOR_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_Selector.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_SELECTOR_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_Selector.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_Selector.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_SELECTOR_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_SELECTOR_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_SELECTOR_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Selector.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_Selector.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_SELECTOR_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_SELECTOR_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_SELECTOR_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Selector.c and Clock_Ip_Private.h are different"
#endif
/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/
#ifdef CLOCK_IP_GENCTRL1_CTRL_SUPPORT
#if (defined(CLOCK_IP_ENABLE_USER_MODE_SUPPORT))
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)

    #define  Call_ConfigureResetGenCtrl1(Config) \
    OsIf_Trusted_Call1param(Clock_Ip_ConfigureResetGenCtrl1,(Config))
    #define  Call_ConfigureSetGenCtrl1(Config) \
    OsIf_Trusted_Call1param(Clock_Ip_ConfigureSetGenCtrl1,(Config))
  #else
    #define  Call_ConfigureResetGenCtrl1(Config) \
    Clock_Ip_ConfigureResetGenCtrl1(Config)
    #define  Call_ConfigureSetGenCtrl1(Config) \
    Clock_Ip_ConfigureSetGenCtrl1(Config)
  #endif
#else
    #define  Call_ConfigureResetGenCtrl1(Config) \
    Clock_Ip_ConfigureResetGenCtrl1(Config)
    #define  Call_ConfigureSetGenCtrl1(Config) \
    Clock_Ip_ConfigureSetGenCtrl1(Config)
#endif
#endif

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

#ifdef CLOCK_IP_GENCTRL1_CTRL_SUPPORT
void Clock_Ip_ConfigureResetGenCtrl1(Clock_Ip_SelectorConfigType const *Config);
void Clock_Ip_ConfigureSetGenCtrl1(Clock_Ip_SelectorConfigType const *Config);
#endif

#ifdef CLOCK_IP_RTC_RTCC_CLKSELECT
void Clock_Ip_SetRtcRtccClksel_TrustedCall(Clock_Ip_SelectorConfigType const *Config);
#endif

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

static void Clock_Ip_CallbackSelectorEmpty(Clock_Ip_SelectorConfigType const* Config);

#ifdef CLOCK_IP_CGM_X_CSC_CSS_CLK_SW_SWIP
static void Clock_Ip_ResetCgmXCscCssClkswSwip(Clock_Ip_SelectorConfigType const *Config);
static void Clock_Ip_SetCgmXCscCssClkswSwip(Clock_Ip_SelectorConfigType const *Config);
#endif

#ifdef CLOCK_IP_CGM_X_CSC_CSS_CLK_SW_RAMPDOWN_RAMPUP_SWIP
static void Clock_Ip_ResetCgmXCscCssClkswRampupRampdownSwip(Clock_Ip_SelectorConfigType const *Config);
static void Clock_Ip_SetCgmXCscCssClkswRampupRampdownSwip(Clock_Ip_SelectorConfigType const *Config);
#endif

#ifdef CLOCK_IP_CGM_X_CSC_CSS_CS_GRIP
static void Clock_Ip_SetCgmXCscCssCsGrip(Clock_Ip_SelectorConfigType const *Config);
static void Clock_Ip_ResetCgmXCscCssCsGrip(Clock_Ip_SelectorConfigType const *Config);
#endif

#ifdef CLOCK_IP_GENCTRL1_CTRL_SUPPORT
static void Clock_Ip_SetGenctrl1Ctrl(Clock_Ip_SelectorConfigType const *Config);
static void Clock_Ip_ResetGenctrl1Ctrl(Clock_Ip_SelectorConfigType const *Config);
#endif

#ifdef CLOCK_IP_RTC_RTCC_CLKSELECT
static void Clock_Ip_SetRtcRtccClksel(Clock_Ip_SelectorConfigType const *Config);
#endif

/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"
/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/
/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

static void Clock_Ip_CallbackSelectorEmpty(Clock_Ip_SelectorConfigType const* Config)
{
    (void)Config;
    /* No implementation */
}

#ifdef CLOCK_IP_CGM_X_CSC_CSS_CLK_SW_SWIP
/* Reset MC_CGM_m_MUX_n[CSC] register */
static void Clock_Ip_ResetCgmXCscCssClkswSwip(Clock_Ip_SelectorConfigType const *Config)
{

    uint32 Instance      = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_MODULE_INSTANCE];
    uint32 SelectorIndex = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_SELECTOR_INDEX];

    uint32 SelectorMask  = Clock_Ip_axFeatureExtensions[Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_EXTENSION_INDEX]].SelectorValueMask;

    Clock_Ip_apxCgm[Instance][SelectorIndex]->CSC |= MC_CGM_MUX_CSC_SAFE_SW_MASK;
    Clock_Ip_apxCgm[Instance][SelectorIndex]->CSC &= ~SelectorMask;
}

/* Set MC_CGM_m_MUX_n[CSC] register */
static void Clock_Ip_SetCgmXCscCssClkswSwip(Clock_Ip_SelectorConfigType const *Config)
{

    uint32 Instance      = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_MODULE_INSTANCE];
    uint32 SelectorIndex = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_SELECTOR_INDEX];
    uint32 SelectorValue = Clock_Ip_au16SelectorEntryHardwareValue[Config->Value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    uint32 SelectorMask  = Clock_Ip_axFeatureExtensions[Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_EXTENSION_INDEX]].SelectorValueMask;
    uint32 SelectorShift = Clock_Ip_axFeatureExtensions[Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_EXTENSION_INDEX]].SelectorValueShift;

    uint32 RegValue;
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;

    /* Do not configure mux if it is already set to the selector value from configuration.*/
    if (SelectorValue != ((Clock_Ip_apxCgm[Instance][SelectorIndex]->CSS & SelectorMask) >> SelectorShift))
    {
        Clock_Ip_StartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_IP_TIMEOUT_VALUE_US);
        do
        {
            TimeoutOccurred = Clock_Ip_TimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while((MC_CGM_MUX_CSS_SWIP_IN_PROGRESS == (Clock_Ip_apxCgm[Instance][SelectorIndex]->CSS & MC_CGM_MUX_CSS_SWIP_MASK)) && (FALSE == TimeoutOccurred));

        if (FALSE == TimeoutOccurred)
        {
            RegValue = Clock_Ip_apxCgm[Instance][SelectorIndex]->CSC;
            RegValue &= ~SelectorMask;
            RegValue |= (SelectorValue << SelectorShift) & SelectorMask;
            RegValue |= (MC_CGM_MUX_CSC_CLK_SW_MASK);  /* Clock switch operation is requested */
            Clock_Ip_apxCgm[Instance][SelectorIndex]->CSC = RegValue;

            Clock_Ip_StartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_IP_TIMEOUT_VALUE_US);
            /* Wait for CLK_SW to auto-clear */
            do
            {
                TimeoutOccurred = Clock_Ip_TimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
            }                                                          /* No safe clock switch operation was requested. */
            while((CLOCK_IP_MC_CGM_MUX_CSS_CLK_SW_NOT_REQUESTED == (Clock_Ip_apxCgm[Instance][SelectorIndex]->CSS & MC_CGM_MUX_CSS_CLK_SW_MASK)) && (FALSE == TimeoutOccurred));

            if (FALSE == TimeoutOccurred)
            {
                Clock_Ip_StartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_IP_TIMEOUT_VALUE_US);
                /* Wait for acknowledge to be cleared. */
                do
                {
                    TimeoutOccurred = Clock_Ip_TimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
                }
                while((MC_CGM_MUX_CSS_SWIP_IN_PROGRESS == (Clock_Ip_apxCgm[Instance][SelectorIndex]->CSS & MC_CGM_MUX_CSS_SWIP_MASK)) && (FALSE == TimeoutOccurred) );

                if (FALSE == TimeoutOccurred)
                {
                    /* Check the switch status. */
                    if (CLOCK_IP_MC_CGM_MUX_CSS_SWTRG_SUCCEEDED != ((Clock_Ip_apxCgm[Instance][SelectorIndex]->CSS & MC_CGM_MUX_CSS_SWTRG_MASK) >> MC_CGM_MUX_0_CSS_SWTRG_SHIFT))
                    {
                        Clock_Ip_ReportClockErrors(CLOCK_IP_REPORT_CLOCK_MUX_SWITCH_ERROR, Config->Name);
                    }
                }
                else
                {
                    /* Report timeout error */
                    Clock_Ip_ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, Config->Name);
                }
            }
            else
            {
                /* Report timeout error */
                Clock_Ip_ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, Config->Name);
            }
        }
        else {

            /* Report timeout error */
            Clock_Ip_ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, Config->Name);
        }
    }
}
#endif

#ifdef CLOCK_IP_CGM_X_CSC_CSS_CLK_SW_RAMPDOWN_RAMPUP_SWIP
/* Reset MC_CGM_m_MUX_n[CSC] register */
static void Clock_Ip_ResetCgmXCscCssClkswRampupRampdownSwip(Clock_Ip_SelectorConfigType const *Config)
{

    uint32 Instance      = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_MODULE_INSTANCE];
    uint32 SelectorIndex = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_SELECTOR_INDEX];

    uint32 SelectorMask  = Clock_Ip_axFeatureExtensions[Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_EXTENSION_INDEX]].SelectorValueMask;

    Clock_Ip_apxCgm[Instance][SelectorIndex]->CSC |= MC_CGM_MUX_CSC_SAFE_SW_MASK;
    Clock_Ip_apxCgm[Instance][SelectorIndex]->CSC &= ~SelectorMask;
}

/* Set MC_CGM_m_MUX_n[CSC] register */
static void Clock_Ip_SetCgmXCscCssClkswRampupRampdownSwip(Clock_Ip_SelectorConfigType const *Config)
{

    uint32 Instance      = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_MODULE_INSTANCE];
    uint32 SelectorIndex = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_SELECTOR_INDEX];
    uint32 SelectorValue = Clock_Ip_au16SelectorEntryHardwareValue[Config->Value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    uint32 SelectorMask  = Clock_Ip_axFeatureExtensions[Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_EXTENSION_INDEX]].SelectorValueMask;
    uint32 SelectorShift = Clock_Ip_axFeatureExtensions[Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_EXTENSION_INDEX]].SelectorValueShift;

    uint32 RegValue;
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;

    /* Do not configure mux if it is already set to the selector value from configuration.*/
    if (SelectorValue != ((Clock_Ip_apxCgm[Instance][SelectorIndex]->CSS & SelectorMask) >> SelectorShift))
    {
        Clock_Ip_StartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_IP_TIMEOUT_VALUE_US);
        do
        {
            TimeoutOccurred = Clock_Ip_TimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((MC_CGM_MUX_CSS_SWIP_IN_PROGRESS == (Clock_Ip_apxCgm[Instance][SelectorIndex]->CSS & MC_CGM_MUX_CSS_SWIP_MASK)) && (FALSE == TimeoutOccurred));

        if (FALSE == TimeoutOccurred)
        {
            RegValue = Clock_Ip_apxCgm[Instance][SelectorIndex]->CSC;
            RegValue &= ~SelectorMask;
            RegValue |= (SelectorValue << SelectorShift) & SelectorMask;
            /* All the PCFS commands should be atomic in nature (i.e. a single register write should provide a complete PCFS sequence
             * to be executed, that is ramp-down, clock switch, and ramp-up. It is necessary to set both RAMPUP and RAMPDOWN bits
             * together even if you want to trigger either RAMPUP or RAMPDOWN process, otherwise the PCFS effect will not manifest. */
            RegValue |= (MC_CGM_MUX_CSC_CLK_SW_MASK | MC_CGM_MUX_CSC_RAMPUP_MASK | MC_CGM_MUX_CSC_RAMPDOWN_MASK);
            Clock_Ip_apxCgm[Instance][SelectorIndex]->CSC = RegValue;

            Clock_Ip_StartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_IP_TIMEOUT_VALUE_US);
            /* Wait for CLK_SW to auto-clear */
            do
            {
                TimeoutOccurred = Clock_Ip_TimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
            }                                                          /* No safe clock switch operation was requested. */
            while((CLOCK_IP_MC_CGM_MUX_CSS_CLK_SW_NOT_REQUESTED == (Clock_Ip_apxCgm[Instance][SelectorIndex]->CSS & MC_CGM_MUX_CSS_CLK_SW_MASK)) && (FALSE == TimeoutOccurred));

            if (FALSE == TimeoutOccurred)
            {
                Clock_Ip_StartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_IP_TIMEOUT_VALUE_US);
                /* Wait for acknowledge to be cleared. */
                do
                {
                    TimeoutOccurred = Clock_Ip_TimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
                }
                while ((MC_CGM_MUX_CSS_SWIP_IN_PROGRESS == (Clock_Ip_apxCgm[Instance][SelectorIndex]->CSS & MC_CGM_MUX_CSS_SWIP_MASK)) && (FALSE == TimeoutOccurred) );

                if (FALSE == TimeoutOccurred)
                {
                    /* Check the switch status. */
                    if (CLOCK_IP_MC_CGM_MUX_CSS_SWTRG_SUCCEEDED != ((Clock_Ip_apxCgm[Instance][SelectorIndex]->CSS & MC_CGM_MUX_CSS_SWTRG_MASK) >> MC_CGM_MUX_CSS_SWTRG_SHIFT))
                    {
                        Clock_Ip_ReportClockErrors(CLOCK_IP_REPORT_CLOCK_MUX_SWITCH_ERROR, Config->Name);
                    }
                }
                else
                {
                    /* Report timeout error */
                    Clock_Ip_ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, Config->Name);
                }
            }
            else
            {
                /* Report timeout error */
                Clock_Ip_ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, Config->Name);
            }
        }
        else
        {
            /* Report timeout error */
            Clock_Ip_ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, Config->Name);
        }
    }
}
#endif

#ifdef CLOCK_IP_CGM_X_CSC_CSS_CS_GRIP
static void Clock_Ip_ResetCgmXCscCssCsGrip(Clock_Ip_SelectorConfigType const *Config)
{
    (void)Config;

    /* Software muxes can't be reset. They don't have SAFE_CLK as selector entry. */
}
static void Clock_Ip_SetCgmXCscCssCsGrip(Clock_Ip_SelectorConfigType const *Config)
{

    uint32 Instance      = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_MODULE_INSTANCE];
    uint32 SelectorIndex = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_SELECTOR_INDEX];
    uint32 SelectorValue = Clock_Ip_au16SelectorEntryHardwareValue[Config->Value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    uint32 SelectorMask  = Clock_Ip_axFeatureExtensions[Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_EXTENSION_INDEX]].SelectorValueMask;
    uint32 SelectorShift = Clock_Ip_axFeatureExtensions[Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_EXTENSION_INDEX]].SelectorValueShift;

    uint32 RegValue;
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;

    /* Do not configure mux if it is already set to the selector value from configuration.*/
    if (SelectorValue != ((Clock_Ip_apxCgm[Instance][SelectorIndex]->CSS & SelectorMask) >> SelectorShift))
    {
        Clock_Ip_apxCgm[Instance][SelectorIndex]->CSC |= (MC_CGM_MUX_CSC_CG_MASK | MC_CGM_MUX_CSC_FCG_MASK);

        Clock_Ip_StartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_IP_TIMEOUT_VALUE_US);
        do
        {
            TimeoutOccurred = Clock_Ip_TimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((MC_CGM_MUX_CSS_CS_TRANSPARENT == (Clock_Ip_apxCgm[Instance][SelectorIndex]->CSS & MC_CGM_MUX_CSS_CS_MASK)) && (FALSE == TimeoutOccurred));

        if (FALSE == TimeoutOccurred)
        {
            /* Configure clock source. */
            RegValue = Clock_Ip_apxCgm[Instance][SelectorIndex]->CSC;
            RegValue &= ~SelectorMask;
            RegValue |= (SelectorValue << SelectorShift) & SelectorMask;
            Clock_Ip_apxCgm[Instance][SelectorIndex]->CSC = RegValue;

            /* Clear CG and FCG bit after set the SELCTL bit */
            Clock_Ip_apxCgm[Instance][SelectorIndex]->CSC &= ~(MC_CGM_MUX_CSC_FCG_MASK | MC_CGM_MUX_CSC_CG_MASK);

            Clock_Ip_StartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_IP_TIMEOUT_VALUE_US);
            /* Wait until the output clock is ungated. */
            do
            {
                TimeoutOccurred = Clock_Ip_TimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
            }
            while (((Clock_Ip_apxCgm[Instance][SelectorIndex]->CSS & MC_CGM_MUX_CSS_CS_MASK) != MC_CGM_MUX_CSS_CS_TRANSPARENT) && (FALSE == TimeoutOccurred));

            if (TRUE == TimeoutOccurred)
            {
                Clock_Ip_ReportClockErrors(CLOCK_IP_REPORT_CLOCK_MUX_SWITCH_ERROR, Config->Name);
            }
        }
        else
        {
            /* Report timeout error */
            Clock_Ip_ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, Config->Name);
        }
    }
}
#endif

#ifdef CLOCK_IP_GENCTRL1_CTRL_SUPPORT
static void Clock_Ip_ResetGenctrl1Ctrl(Clock_Ip_SelectorConfigType const *Config)
{
    /* Clear GENCTRL1 register */
    Call_ConfigureResetGenCtrl1(Config);
}

static void Clock_Ip_SetGenctrl1Ctrl(Clock_Ip_SelectorConfigType const *Config)
{
    /* Set GENCTRL1 register */
    Call_ConfigureSetGenCtrl1(Config);
}
#endif

#ifdef CLOCK_IP_RTC_RTCC_CLKSELECT
static void Clock_Ip_SetRtcRtccClksel(Clock_Ip_SelectorConfigType const *Config)
{
    (void)Config;
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call1param(Clock_Ip_SetRtcRtccClksel_TrustedCall,(Config));
  #else
    Clock_Ip_SetRtcRtccClksel_TrustedCall(Config);
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
}
#endif

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/
#ifdef CLOCK_IP_GENCTRL1_CTRL_SUPPORT
void Clock_Ip_ConfigureResetGenCtrl1(Clock_Ip_SelectorConfigType const *Config)
{
    uint32 SelectorIndex = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_SELECTOR_INDEX];

    /* Reset GENCTRL1 register */
    IP_S32G_GPR->GENCTRL1 &= ~((uint32)1U << SelectorIndex);
}

void Clock_Ip_ConfigureSetGenCtrl1(Clock_Ip_SelectorConfigType const *Config)
{
    uint32 SelectorIndex = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_SELECTOR_INDEX];
    uint32 SelectorValue = Clock_Ip_au16SelectorEntryHardwareValue[Config->Value];

    /* Configure GENCTRL1 register */
    if(SelectorValue != 0U)
    {
        IP_S32G_GPR->GENCTRL1 |= ((uint32)1U << SelectorIndex);
    }
    else
    {
        IP_S32G_GPR->GENCTRL1 &= ~((uint32)1U << SelectorIndex);
    }
}
#endif

#ifdef CLOCK_IP_RTC_RTCC_CLKSELECT
void Clock_Ip_SetRtcRtccClksel_TrustedCall(Clock_Ip_SelectorConfigType const *Config)
{
    uint32 RegValue;
    uint32 SelectorValue = Clock_Ip_au16SelectorEntryRtcHardwareValue[Config->Value];    /* Hw value corresponding to selector entry. Translate input clock source to hardware value. */

    RegValue = IP_RTC->RTCC;
    RegValue &= ~RTC_RTCC_CLKSEL_MASK;
    RegValue |= RTC_RTCC_CLKSEL(SelectorValue);
    IP_RTC->RTCC = RegValue;
}
#endif

/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

const Clock_Ip_SelectorCallbackType Clock_Ip_axSelectorCallbacks[CLOCK_IP_SELECTOR_CALLBACKS_COUNT] =
{
    {
        Clock_Ip_CallbackSelectorEmpty,            /* Reset */
        Clock_Ip_CallbackSelectorEmpty,            /* Set */
    },
#ifdef CLOCK_IP_CGM_X_CSC_CSS_CLK_SW_SWIP
    {
        Clock_Ip_ResetCgmXCscCssClkswSwip,          /* Reset */
        Clock_Ip_SetCgmXCscCssClkswSwip,            /* Set */
    },
#endif

#ifdef CLOCK_IP_CGM_X_CSC_CSS_CLK_SW_RAMPDOWN_RAMPUP_SWIP
    {
        Clock_Ip_ResetCgmXCscCssClkswRampupRampdownSwip,     /* Reset */
        Clock_Ip_SetCgmXCscCssClkswRampupRampdownSwip,       /* Set */
    },
#endif

#ifdef CLOCK_IP_CGM_X_CSC_CSS_CS_GRIP
    {
        Clock_Ip_ResetCgmXCscCssCsGrip,           /* Reset */
        Clock_Ip_SetCgmXCscCssCsGrip,             /* Set */
    },
#endif

#ifdef CLOCK_IP_GENCTRL1_CTRL_SUPPORT
    {
        Clock_Ip_ResetGenctrl1Ctrl,           /* Reset */
        Clock_Ip_SetGenctrl1Ctrl,             /* Set */
    },
#endif

#ifdef CLOCK_IP_RTC_RTCC_CLKSELECT
    {
        Clock_Ip_CallbackSelectorEmpty,          /* Reset */
        Clock_Ip_SetRtcRtccClksel,               /* Set */
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
