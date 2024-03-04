[!NOCODE!]
/**
  @file    Can_PluginMacro.m
  @version 4.0.0

  @brief   AUTOSAR Can - macros.
  @details Macros

  Project RTD AUTOSAR 4.4
  Platform CORTEXM
  Peripheral FLEXCAN
  Dependencies 

  ARVersion 4.4.0
  ARRevision ASR_REL_4_4_REV_0000
  ARConfVariant
  SWVersion 4.0.0
  BuildVersion S32_RTD_4_0_0_D2210_ASR_REL_4_4_REV_0000_20221031

  (c) Copyright 2022 NXP Semiconductors
  All Rights Reserved.
*/
/*==================================================================================================
==================================================================================================*/
[!IF "not(var:defined('CAN_PLUGINMACRO_M'))"!]
[!VAR "CAN_PLUGINMACRO_M"="'true'"!]
[!/***********************Can export driver configuration Macro ****************************************/!]
[!MACRO "CanExportDriverConfiguration"!]
[!NOCODE!]
    [!VAR "configName" = "as:name(./CanConfigSet)"!]
    [!CODE!]#define CAN_CONF_PB \[!ENDCODE!][!CR!]
    [!IF "var:defined('postBuildVariant')"!]
        [!VAR "variantIndex"="0"!]
        [!VAR "variantNumber"="variant:size()"!]
        [!LOOP "variant:all()"!][!VAR "variantIndex"="$variantIndex + 1"!]
            [!CODE!][!WS "4"!]extern const Can_ConfigType Can_Config_[!"."!];[!IF "$variantIndex < $variantNumber"!]\[!ENDIF!][!CR!][!ENDCODE!]
        [!ENDLOOP!]
    [!ELSE!]
        [!CODE!][!WS "4"!]extern const Can_ConfigType Can_Config;[!CR!][!ENDCODE!]
    [!ENDIF!]
[!ENDNOCODE!]
[!ENDMACRO!]

[!/***********************Can Notification Config Macro ****************************************/!]
[!MACRO "Can_NotificationHandler"!]
[!NOCODE!]
    [!VAR "OuterLoopCounter" = "0"!]
    [!VAR "InnerLoopCounter" = "0"!]
    [!LOOP "CanConfigSet/CanController/*"!]
        [!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!]
        [!VAR "InnerLoopCounter" = "0"!]
        [!VAR "WarnMatchCounter" = "0"!]
        [!VAR "OvfMatchCounter" = "0"!]
        [!VAR "DmaErrMatchCounter" = "0"!]
        [!VAR "ErrMatchCounter" = "0"!]
        [!VAR "FDErrMatchCounter" = "0"!]
        [!VAR "WarnNotification" = "0"!]
        [!VAR "OvfNotification" = "0"!]
        [!VAR "DmaErrorNotification" = "0"!]
        [!VAR "ErrNotification" = "0"!]
        [!VAR "FDErrNotification" = "0"!]
        [!IF "node:exists(./CanRxFiFo)"!]
            [!IF "node:name(./CanRxFiFo) = 'CanLegacyFiFo'"!]
                [!IF "./CanRxFiFo/CanLegacyFiFoDmaEnable = 'true'"!]
                    [!VAR "DmaErrorNotification" = "normalize-space(./CanRxFiFo/CanFiFoDmaErrorNotif)"!]
                [!ELSE!]
                [!VAR "WarnNotification" = "normalize-space(./CanRxFiFo/CanFiFoWarnNotif)"!]
                [!VAR "OvfNotification" = "normalize-space(./CanRxFiFo/CanFiFoOverflowNotif)"!]
                [!ENDIF!]
            [!ELSE!]
                [!IF "./CanRxFiFo/CanEnhanceFiFoDmaEnable = 'true'"!]
                    [!VAR "DmaErrorNotification" = "normalize-space(./CanRxFiFo/CanFiFoDmaErrorNotif)"!]
                [!ELSE!]
                    [!VAR "OvfNotification" = "normalize-space(./CanRxFiFo/CanFiFoOverflowNotif)"!]
                [!ENDIF!]
            [!ENDIF!]
        [!ENDIF!]
        [!IF "node:exists(./CanErrorNotification)"!]
            [!VAR "ErrNotification" = "normalize-space(./CanErrorNotification)"!]
            [!IF "text:contains(ecu:get('Can.CanConfigSet.CanFdChannelList'), (./CanHwChannel))"!]
                [!VAR "FDErrNotification" = "normalize-space(./CanFDErrorNotification)"!]
            [!ENDIF!]
        [!ENDIF!]
        [!LOOP "../*"!]
            [!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!]
            [!IF "node:exists(./CanRxFiFo)"!]
                [!IF "node:name(./CanRxFiFo) = 'CanLegacyFiFo'"!]
                    [!IF "./CanRxFiFo/CanLegacyFiFoDmaEnable = 'true'"!]
                        [!IF "./CanRxFiFo/CanFiFoDmaErrorNotif != 'NULL_PTR'"!]
                            [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
                                [!IF "$DmaErrorNotification = ./CanRxFiFo/CanFiFoDmaErrorNotif"!]
                                    [!VAR "DmaErrMatchCounter" = "$DmaErrMatchCounter + 1"!]
                                [!ENDIF!]
                            [!ENDIF!]
                        [!ENDIF!]
                    [!ELSE!]
                    [!IF "./CanRxFiFo/CanFiFoWarnNotif != 'NULL_PTR'"!]
                        [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
                            [!IF "$WarnNotification = ./CanRxFiFo/CanFiFoWarnNotif"!]
                                [!VAR "WarnMatchCounter" = "$WarnMatchCounter + 1"!]
                            [!ENDIF!]
                        [!ENDIF!]
                    [!ENDIF!]
                    [!IF "./CanRxFiFo/CanFiFoOverflowNotif != 'NULL_PTR'"!]
                        [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
                            [!IF "$OvfNotification = ./CanRxFiFo/CanFiFoOverflowNotif"!]
                                [!VAR "OvfMatchCounter" = "$OvfMatchCounter + 1"!]
                            [!ENDIF!]
                        [!ENDIF!]
                    [!ENDIF!]
                    [!ENDIF!]
                [!ELSE!]
                    [!IF "./CanRxFiFo/CanEnhanceFiFoDmaEnable = 'true'"!]
                        [!IF "./CanRxFiFo/CanFiFoDmaErrorNotif != 'NULL_PTR'"!]
                            [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
                                [!IF "$DmaErrorNotification = ./CanRxFiFo/CanFiFoDmaErrorNotif"!]
                                    [!VAR "DmaErrMatchCounter" = "$DmaErrMatchCounter + 1"!]
                                [!ENDIF!]
                            [!ENDIF!]
                        [!ENDIF!]
                    [!ELSE!]
                        [!IF "./CanRxFiFo/CanFiFoOverflowNotif != 'NULL_PTR'"!]
                            [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
                                [!IF "$OvfNotification = ./CanRxFiFo/CanFiFoOverflowNotif"!]
                                    [!VAR "OvfMatchCounter" = "$OvfMatchCounter + 1"!]
                                [!ENDIF!]
                            [!ENDIF!]
                        [!ENDIF!]
                    [!ENDIF!]
                [!ENDIF!]
            [!ENDIF!]
            [!IF "node:exists(./CanErrorNotification)"!]
                [!IF "./CanErrorNotification != 'NULL_PTR'"!]
                    [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
                        [!IF "$ErrNotification = ./CanErrorNotification"!]
                            [!VAR "ErrMatchCounter" = "$ErrMatchCounter + 1"!]
                        [!ENDIF!]
                    [!ENDIF!]
                [!ENDIF!]
                [!IF "text:contains(ecu:get('Can.CanConfigSet.CanFdChannelList'), (./CanHwChannel)) and (./CanFDErrorNotification != 'NULL_PTR')"!]
                    [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
                        [!IF "$FDErrNotification = ./CanFDErrorNotification"!]
                            [!VAR "FDErrMatchCounter" = "$FDErrMatchCounter + 1"!]
                        [!ENDIF!]
                    [!ENDIF!]
                [!ENDIF!]
            [!ENDIF!]
        [!ENDLOOP!]
        [!IF "$WarnMatchCounter = 1"!]
            [!CODE!]extern void [!"normalize-space(./CanRxFiFo/CanFiFoWarnNotif)"!](void);[!CR!][!ENDCODE!]
        [!ENDIF!]
        [!IF "$OvfMatchCounter = 1"!]
            [!CODE!]extern void [!"normalize-space(./CanRxFiFo/CanFiFoOverflowNotif)"!](void);[!CR!][!ENDCODE!]
        [!ENDIF!]
         [!IF "$DmaErrMatchCounter = 1"!]
            [!CODE!]extern void [!"normalize-space(./CanRxFiFo/CanFiFoDmaErrorNotif)"!](void);[!CR!][!ENDCODE!]
        [!ENDIF!]
        [!IF "$ErrMatchCounter = 1"!]
            [!CODE!]extern void [!"normalize-space(./CanErrorNotification)"!](void);[!CR!][!ENDCODE!]
        [!ENDIF!]
        [!IF "$FDErrMatchCounter = 1"!]
            [!CODE!]extern void [!"normalize-space(./CanFDErrorNotification)"!](void);[!CR!][!ENDCODE!]
        [!ENDIF!]
    [!ENDLOOP!]
[!ENDNOCODE!]
[!ENDMACRO!]
[!ENDIF!]
[!ENDNOCODE!]