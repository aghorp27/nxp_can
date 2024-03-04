[!NOCODE!][!//
/**
  @file    Port_VersionCheck_Src_PB.m
  @version 4.0.0

  @brief   AUTOSAR Port - version check macro.
  @details Version checks.

  Project RTD AUTOSAR 4.4
  Patform CORTEXM
  Peripheral SIUL2
  Dependencies none

  ARVersion 4.4.0
  ARRevision ASR_REL_4_4_REV_0000
  ARConfVariant
  SWVersion 4.0.0
  BuildVersion S32_RTD_4_0_0_D2210_ASR_REL_4_4_REV_0000_20221031

  Copyright 2022 NXP Semiconductors
*/

[!/* avoid multiple inclusion */!]
[!IF "not(var:defined('PORT_VERSION_CHECK_SRC_PB_M'))"!]
[!VAR "PORT_VERSION_CHECK_SRC_PB_M"="'true'"!]


[!VAR "PORT_AR_RELEASE_MAJOR_VERSION_TEMPLATE"="4"!][!// 
[!VAR "PORT_AR_RELEASE_MINOR_VERSION_TEMPLATE"="4"!][!// 
[!VAR "PORT_AR_RELEASE_REVISION_VERSION_TEMPLATE"="0"!][!// 
[!VAR "PORT_SW_MAJOR_VERSION_TEMPLATE"="4"!][!//      
[!VAR "PORT_SW_MINOR_VERSION_TEMPLATE"="0"!][!//
[!VAR "PORT_SW_PATCH_VERSION_TEMPLATE"="0"!][!//      

[!SELECT "CommonPublishedInformation"!][!//
[!IF "not(num:i(ArReleaseMajorVersion) = num:i($PORT_AR_RELEASE_MAJOR_VERSION_TEMPLATE))"!]
    [!ERROR!]
        "AUTOSAR release major version number of the Basic Software Module Description file (Port.epd version [!"ArReleaseMajorVersion"!]) and the Code template file (Port_PBfg.c version [!"num:i($PORT_AR_RELEASE_MAJOR_VERSION_TEMPLATE)"!]) are different"
    [!ENDERROR!]
[!ENDIF!]
[!IF "not(num:i(ArReleaseMinorVersion) = num:i($PORT_AR_RELEASE_MINOR_VERSION_TEMPLATE))"!]
    [!ERROR!]
        "AUTOSAR release minor version number of the Basic Software Module Description file (Port.epd version [!"ArReleaseMinorVersion"!]) and the Code template file (Port_PBCfg.c version [!"num:i($PORT_AR_RELEASE_MINOR_VERSION_TEMPLATE)"!]) are different"
    [!ENDERROR!]
[!ENDIF!]
[!IF "not(num:i(ArReleaseRevisionVersion) = num:i($PORT_AR_RELEASE_REVISION_VERSION_TEMPLATE))"!]
    [!ERROR!]
        "AUTOSAR release revision version number of the Basic Software Module Description file (Port.epd version [!"ArReleaseRevisionVersion"!]) and the Code template file (Port_PBCfg.c version [!"num:i($PORT_AR_RELEASE_REVISION_VERSION_TEMPLATE)"!]) are different"
    [!ENDERROR!]
[!ENDIF!]
[!IF "not(num:i(SwMajorVersion) = num:i($PORT_SW_MAJOR_VERSION_TEMPLATE))"!]
    [!ERROR!]
        "The software major number of the Basic Software Module Description file (Port.epd version [!"SwMajorVersion"!]) and the Code template file (Port_PBCfg.c version [!"num:i($PORT_SW_MAJOR_VERSION_TEMPLATE)"!]) are different"
    [!ENDERROR!]
[!ENDIF!]
[!IF "not(num:i(SwMinorVersion) = num:i($PORT_SW_MINOR_VERSION_TEMPLATE))"!]
    [!ERROR!]
        "The software minor number of the Basic Software Module Description file (Port.epd version [!"SwMinorVersion"!]) and the Code template file (Port_PBCfg.c version [!"num:i($PORT_SW_MINOR_VERSION_TEMPLATE)"!]) are different"
    [!ENDERROR!]
[!ENDIF!]
[!IF "not(num:i(SwPatchVersion) = num:i($PORT_SW_PATCH_VERSION_TEMPLATE))"!]
    [!ERROR!]
        "The software patch number of the Basic Software Module Description file (Port.epd version [!"SwPatchVersion"!]) and the Code template file (Port_PBCfg.c version [!"num:i($PORT_SW_PATCH_VERSION_TEMPLATE)"!]) are different"
    [!ENDERROR!]
[!ENDIF!]
[!ENDSELECT!][!//

[!ENDIF!][!// avoid multiple inclusion ENDIF

[!ENDNOCODE!][!//