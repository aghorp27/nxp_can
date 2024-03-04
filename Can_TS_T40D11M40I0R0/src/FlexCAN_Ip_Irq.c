/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : FLEXCAN
*   Dependencies         : 
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
 *  @file FlexCAN_Ip_Irq.c
 *
 *  @brief FlexCAN Interrupts
 *
 *  @addtogroup FlexCAN
 *  @{
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
#include "FlexCAN_Ip_Irq.h"
#include "FlexCAN_Ip_HwAccess.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLEXCAN_IP_IRQ_VENDOR_ID_C                      43
#define FLEXCAN_IP_IRQ_AR_RELEASE_MAJOR_VERSION_C       4
#define FLEXCAN_IP_IRQ_AR_RELEASE_MINOR_VERSION_C       4
#define FLEXCAN_IP_IRQ_AR_RELEASE_REVISION_VERSION_C    0
#define FLEXCAN_IP_IRQ_SW_MAJOR_VERSION_C               4
#define FLEXCAN_IP_IRQ_SW_MINOR_VERSION_C               0
#define FLEXCAN_IP_IRQ_SW_PATCH_VERSION_C               0
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and FlexCAN_Ip_Irq header file are of the same vendor */
#if (FLEXCAN_IP_IRQ_VENDOR_ID_C != FLEXCAN_IP_IRQ_VENDOR_ID_H)
    #error "FlexCAN_Ip_Irq.c and FlexCAN_Ip_Irq.h have different vendor ids"
#endif
/* Check if current file and FlexCAN_Ip_Irq header file are of the same Autosar version */
#if ((FLEXCAN_IP_IRQ_AR_RELEASE_MAJOR_VERSION_C    != FLEXCAN_IP_IRQ_AR_RELEASE_MAJOR_VERSION_H) || \
     (FLEXCAN_IP_IRQ_AR_RELEASE_MINOR_VERSION_C    != FLEXCAN_IP_IRQ_AR_RELEASE_MINOR_VERSION_H) || \
     (FLEXCAN_IP_IRQ_AR_RELEASE_REVISION_VERSION_C != FLEXCAN_IP_IRQ_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of FlexCAN_Ip_Irq.c and FlexCAN_Ip_Irq.h are different"
#endif
/* Check if current file and FlexCAN_Ip_Irq header file are of the same Software version */
#if ((FLEXCAN_IP_IRQ_SW_MAJOR_VERSION_C != FLEXCAN_IP_IRQ_SW_MAJOR_VERSION_H) || \
     (FLEXCAN_IP_IRQ_SW_MINOR_VERSION_C != FLEXCAN_IP_IRQ_SW_MINOR_VERSION_H) || \
     (FLEXCAN_IP_IRQ_SW_PATCH_VERSION_C != FLEXCAN_IP_IRQ_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of FlexCAN_Ip_Irq.c and FlexCAN_Ip_Irq.h are different"
#endif

/* Check if current file and FlexCAN_Ip_HwAccess header file are of the same vendor */
#if (FLEXCAN_IP_IRQ_VENDOR_ID_C != FLEXCAN_IP_HWACCESS_VENDOR_ID_H)
    #error "FlexCAN_Ip_Irq.c and FlexCAN_Ip_HwAccess.h have different vendor ids"
#endif
/* Check if current file and FlexCAN_Ip_HwAccess header file are of the same Autosar version */
#if ((FLEXCAN_IP_IRQ_AR_RELEASE_MAJOR_VERSION_C    != FLEXCAN_IP_HWACCESS_AR_RELEASE_MAJOR_VERSION_H) || \
     (FLEXCAN_IP_IRQ_AR_RELEASE_MINOR_VERSION_C    != FLEXCAN_IP_HWACCESS_AR_RELEASE_MINOR_VERSION_H) || \
     (FLEXCAN_IP_IRQ_AR_RELEASE_REVISION_VERSION_C != FLEXCAN_IP_HWACCESS_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of FlexCAN_Ip_Irq.c and FlexCAN_Ip_HwAccess.h are different"
#endif
/* Check if current file and FlexCAN_Ip_HwAccess header file are of the same Software version */
#if ((FLEXCAN_IP_IRQ_SW_MAJOR_VERSION_C != FLEXCAN_IP_HWACCESS_SW_MAJOR_VERSION_H) || \
     (FLEXCAN_IP_IRQ_SW_MINOR_VERSION_C != FLEXCAN_IP_HWACCESS_SW_MINOR_VERSION_H) || \
     (FLEXCAN_IP_IRQ_SW_PATCH_VERSION_C != FLEXCAN_IP_HWACCESS_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of FlexCAN_Ip_Irq.c and FlexCAN_Ip_HwAccess.h are different"
#endif
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define CAN_START_SEC_CODE
#include "Can_MemMap.h"

ISR(CAN0_ORED_IRQHandler);

ISR(CAN0_ERR_IRQHandler);

ISR(CAN0_ORED_0_7_MB_IRQHandler);

ISR(CAN0_ORED_8_127_MB_IRQHandler);

#if (FLEXCAN_INSTANCE_COUNT > 1U)
ISR(CAN1_ORED_IRQHandler);

ISR(CAN1_ERR_IRQHandler);

ISR(CAN1_ORED_0_7_MB_IRQHandler);

ISR(CAN1_ORED_8_127_MB_IRQHandler);
#endif /* (FLEXCAN_INSTANCE_COUNT > 1U) */

#if (FLEXCAN_INSTANCE_COUNT > 2U)
ISR(CAN2_ORED_IRQHandler);

ISR(CAN2_ERR_IRQHandler);

ISR(CAN2_ORED_0_7_MB_IRQHandler);

ISR(CAN2_ORED_8_127_MB_IRQHandler);
#endif /* (FLEXCAN_INSTANCE_COUNT > 2U) */

#if (FLEXCAN_INSTANCE_COUNT > 3U)
ISR(CAN3_ORED_IRQHandler);

ISR(CAN3_ERR_IRQHandler);

ISR(CAN3_ORED_0_7_MB_IRQHandler);

ISR(CAN3_ORED_8_127_MB_IRQHandler);
#endif /* (FLEXCAN_INSTANCE_COUNT > 3U) */

#if (FLEXCAN_INSTANCE_COUNT > 4U)
ISR(CAN4_ORED_IRQHandler);

ISR(CAN4_ERR_IRQHandler);

ISR(CAN4_ORED_0_7_MB_IRQHandler);

ISR(CAN4_ORED_8_127_MB_IRQHandler);
#endif /* (FLEXCAN_INSTANCE_COUNT > 4U) */

#if (FLEXCAN_INSTANCE_COUNT > 5U)
ISR(CAN5_ORED_IRQHandler);

ISR(CAN5_ERR_IRQHandler);

ISR(CAN5_ORED_0_7_MB_IRQHandler);

ISR(CAN5_ORED_8_127_MB_IRQHandler);
#endif /* (FLEXCAN_INSTANCE_COUNT > 5U) */

#if (FLEXCAN_INSTANCE_COUNT > 6U)
ISR(CAN6_ORED_IRQHandler);

ISR(CAN6_ERR_IRQHandler);

ISR(CAN6_ORED_0_7_MB_IRQHandler);

ISR(CAN6_ORED_8_127_MB_IRQHandler);
#endif /* (FLEXCAN_INSTANCE_COUNT > 6U) */

#if (FLEXCAN_INSTANCE_COUNT > 7U)
ISR(CAN7_ORED_IRQHandler);

ISR(CAN7_ERR_IRQHandler);

ISR(CAN7_ORED_0_7_MB_IRQHandler);

ISR(CAN7_ORED_8_127_MB_IRQHandler);
#endif /* (FLEXCAN_INSTANCE_COUNT > 7U) */
/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/* Implementation of CAN0 handler named in startup code. */
ISR(CAN0_ORED_IRQHandler)
{
    FlexCAN_BusOff_IRQHandler(0U);
}

/* Implementation of CAN0 handler named in startup code. */
ISR(CAN0_ERR_IRQHandler)
{
    FlexCAN_Error_IRQHandler(0U);
}

/* Implementation of CAN0 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 0-7. */
ISR(CAN0_ORED_0_7_MB_IRQHandler)
{
    FlexCAN_IRQHandler(0U, 0U, 7U, TRUE);
}

/* Implementation of CAN0 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 8-127. */
ISR(CAN0_ORED_8_127_MB_IRQHandler)
{
    FlexCAN_IRQHandler(0U, 8U, 127U, FALSE);
}

#if (FLEXCAN_INSTANCE_COUNT > 1U)
/* Implementation of CAN1 handler named in startup code. */
ISR(CAN1_ORED_IRQHandler)
{
    FlexCAN_BusOff_IRQHandler(1U);
}

/* Implementation of CAN1 handler named in startup code. */
ISR(CAN1_ERR_IRQHandler)
{
    FlexCAN_Error_IRQHandler(1U);
}

/* Implementation of CAN1 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 0-7. */
ISR(CAN1_ORED_0_7_MB_IRQHandler)
{
    FlexCAN_IRQHandler(1U, 0U, 7U, TRUE);
}

/* Implementation of CAN1 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 8-127. */
ISR(CAN1_ORED_8_127_MB_IRQHandler)
{
    FlexCAN_IRQHandler(1U, 8U, 127U, FALSE);
}
#endif /* (FLEXCAN_INSTANCE_COUNT > 1U) */

#if (FLEXCAN_INSTANCE_COUNT > 2U)
/* Implementation of CAN2 handler named in startup code. */
ISR(CAN2_ORED_IRQHandler)
{
    FlexCAN_BusOff_IRQHandler(2U);
}

/* Implementation of CAN2 handler named in startup code. */
ISR(CAN2_ERR_IRQHandler)
{
    FlexCAN_Error_IRQHandler(2U);
}

/* Implementation of CAN2 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 0-7. */
ISR(CAN2_ORED_0_7_MB_IRQHandler)
{
    FlexCAN_IRQHandler(2U, 0U, 7U, TRUE);
}

/* Implementation of CAN2 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 8-127. */
ISR(CAN2_ORED_8_127_MB_IRQHandler)
{
    FlexCAN_IRQHandler(2U, 8U, 127U, FALSE);
}
#endif /* (FLEXCAN_INSTANCE_COUNT > 2U) */

#if (FLEXCAN_INSTANCE_COUNT > 3U)
/* Implementation of CAN3 handler named in startup code. */
ISR(CAN3_ORED_IRQHandler)
{
    FlexCAN_BusOff_IRQHandler(3U);
}

/* Implementation of CAN3 handler named in startup code. */
ISR(CAN3_ERR_IRQHandler)
{
    FlexCAN_Error_IRQHandler(3U);
}

/* Implementation of CAN3 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 0-7. */
ISR(CAN3_ORED_0_7_MB_IRQHandler)
{
    FlexCAN_IRQHandler(3U, 0U, 7U, TRUE);
}

/* Implementation of CAN3 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 8-127. */
ISR(CAN3_ORED_8_127_MB_IRQHandler)
{
    FlexCAN_IRQHandler(3U, 8U, 127U, FALSE);
}
#endif /* (FLEXCAN_INSTANCE_COUNT > 3U) */

#if (FLEXCAN_INSTANCE_COUNT > 4U)
/* Implementation of CAN4 handler named in startup code. */
ISR(CAN4_ORED_IRQHandler)
{
    FlexCAN_BusOff_IRQHandler(4U);
}

/* Implementation of CAN4 handler named in startup code. */
ISR(CAN4_ERR_IRQHandler)
{
    FlexCAN_Error_IRQHandler(4U);
}

/* Implementation of CAN4 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 0-7. */
ISR(CAN4_ORED_0_7_MB_IRQHandler)
{
    FlexCAN_IRQHandler(4U, 0U, 7U, TRUE);
}

/* Implementation of CAN4 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 8-127. */
ISR(CAN4_ORED_8_127_MB_IRQHandler)
{
    FlexCAN_IRQHandler(4U, 8U, 127U, FALSE);
}
#endif /* (FLEXCAN_INSTANCE_COUNT > 4U) */

#if (FLEXCAN_INSTANCE_COUNT > 5U)
/* Implementation of CAN5 handler named in startup code. */
ISR(CAN5_ORED_IRQHandler)
{
    FlexCAN_BusOff_IRQHandler(5U);
}

/* Implementation of CAN5 handler named in startup code. */
ISR(CAN5_ERR_IRQHandler)
{
    FlexCAN_Error_IRQHandler(5U);
}

/* Implementation of CAN5 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 0-7. */
ISR(CAN5_ORED_0_7_MB_IRQHandler)
{
    FlexCAN_IRQHandler(5U, 0U, 7U, TRUE);
}

/* Implementation of CAN5 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 8-127. */
ISR(CAN5_ORED_8_127_MB_IRQHandler)
{
    FlexCAN_IRQHandler(5U, 8U, 127U, FALSE);
}
#endif /* (FLEXCAN_INSTANCE_COUNT > 5U) */

#if (FLEXCAN_INSTANCE_COUNT > 6U)
/* Implementation of CAN6 handler named in startup code. */
ISR(CAN6_ORED_IRQHandler)
{
    FlexCAN_BusOff_IRQHandler(6U);
}

/* Implementation of CAN6 handler named in startup code. */
ISR(CAN6_ERR_IRQHandler)
{
    FlexCAN_Error_IRQHandler(6U);
}

/* Implementation of CAN6 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 0-7. */
ISR(CAN6_ORED_0_7_MB_IRQHandler)
{
    FlexCAN_IRQHandler(6U, 0U, 7U, TRUE);
}

/* Implementation of CAN6 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 8-127. */
ISR(CAN6_ORED_8_127_MB_IRQHandler)
{
    FlexCAN_IRQHandler(6U, 8U, 127U, FALSE);
}
#endif /* (FLEXCAN_INSTANCE_COUNT > 6U) */

#if (FLEXCAN_INSTANCE_COUNT > 7U)
/* Implementation of CAN7 handler named in startup code. */
ISR(CAN7_ORED_IRQHandler)
{
    FlexCAN_BusOff_IRQHandler(7U);
}

/* Implementation of CAN7 handler named in startup code. */
ISR(CAN7_ERR_IRQHandler)
{
    FlexCAN_Error_IRQHandler(7U);
}

/* Implementation of CAN7 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 0-7. */
ISR(CAN7_ORED_0_7_MB_IRQHandler)
{
    FlexCAN_IRQHandler(7U, 0U, 7U, TRUE);
}

/* Implementation of CAN7 IRQ handler for interrupts indicating a successful
transmission or reception for Message Buffers 8-127. */
ISR(CAN7_ORED_8_127_MB_IRQHandler)
{
    FlexCAN_IRQHandler(7U, 8U, 127U, FALSE);
}
#endif /* (FLEXCAN_INSTANCE_COUNT > 7U) */

#define CAN_STOP_SEC_CODE
#include "Can_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
