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
/*
* Target device: This linker is demo and it is using for device S32G3XX only
* Target core: core 4
* Linker support for application running on M7_0 core0 only. It need to align with MPU default setup in core_specific.h and system.c as well.
* Memory setting: Local ram of M7_0 (sram)
*/

/*
* 0x20000000	0x2000FFFF	64KB	M7 D-TCM
* 0x20100000	0x2010FFFF	64KB	M7_0 TCM Backdoor
* 0x20180000	0x2018FFFF	64KB	M7_1 TCM Backdoor
* 0x20200000	0x2020FFFF	64KB	M7_2 TCM Backdoor
* 0x20280000	0x2028FFFF	64KB	M7_3 TCM Backdoor
* 0x24000000	0x33FFFFFF	262144	Standby RAM (32K)
* The memory size used for common S32G3XX
* 0x34000000	0x353FFFFF	20480KB	Internal SRAM
* Derivative: S32G399A
* 0x34000000	0x35400000	20480KB	Internal SRAM
* Derivative: S32G398A
* 0x34000000	0x34F00000	15360KB	Internal SRAM 
* Derivative: S32G379A
* 0x34000000	0x35400000	20480KB	Internal SRAM
* Derivative: S32G378A
* 0x34000000	0x34F00000	15360KB	Internal SRAM
* Derivative: S32G338M, S32G358A
* 0x34000000	0x34F00000	15360KB	Internal SRAM
* Derivative: S32G339M, S32G359A
* 0x34000000	0x34F00000	20480KB	Internal SRAM 
*
* 0x43000000    0x43FFFFFF  16384KB LLCE Address Space (16M)
* Please note that current demo linker does not cover all ram address of G3 derivative, in order to maximum benefit of ram usage, please modify linker and MPU default setting in system.c
*
*
*
*
*
*/
DEFAULTS 
{
    int_results_reserve = 0x100
}

MEMORY 
{         
    int_itcm                   : ORIGIN = 0x00000000, LENGTH = 0x00000000 /* 0KB - Not Supported */
    int_dtcm                   : ORIGIN = 0x20000000, LENGTH = 0x00010000 /* 64K */
    int_sram_shareable         : ORIGIN = 0x22C00000, LENGTH = 0x00004000 /* 16KB */
    int_sram_c0                : ORIGIN = 0x34000000, LENGTH = 0x00178000 /* 1.5MB - 8KB */
    int_sram_stack_c0          : ORIGIN = 0x34178000, LENGTH = 0x00002000 /* 8KB  */
    int_sram_no_cacheable_c0   : ORIGIN = 0x34180000, LENGTH = 0x00080000 /* 512KB, needs to include int_results  */
    ram_end_c0                 : ORIGIN = 0x34200000, LENGTH = 0x00000000 /* End of core 0 ram */
    int_sram_c1                : ORIGIN = 0x34200000, LENGTH = 0x00178000 /* 1.5MB - 8KB */
    int_sram_stack_c1          : ORIGIN = 0x34378000, LENGTH = 0x00002000 /* 8KB  */
    int_sram_no_cacheable_c1   : ORIGIN = 0x34380000, LENGTH = 0x00080000 /* 512KB, needs to include int_results  */
    ram_end_c1                 : ORIGIN = 0x34400000, LENGTH = 0x00000000 /* End of core 1 ram */
    int_sram_c2                : ORIGIN = 0x34400000, LENGTH = 0x00178000 /* 1.5MB - 8KB */
    int_sram_stack_c2          : ORIGIN = 0x34578000, LENGTH = 0x00002000 /* 8KB  */
    int_sram_no_cacheable_c2   : ORIGIN = 0x34580000, LENGTH = 0x00080000 /* 512KB, needs to include int_results  */
    ram_end_c2                 : ORIGIN = 0x34600000, LENGTH = 0x00000000 /* End of core 2 ram */
	int_sram_c3                : ORIGIN = 0x34600000, LENGTH = 0x00178000 /* 1.5MB - 8KB */
    int_sram_stack_c3          : ORIGIN = 0x34778000, LENGTH = 0x00002000 /* 8KB  */
	int_sram_no_cacheable_c3   : ORIGIN = 0x34780000, LENGTH = 0x00080000 /* 512KB, needs to include int_results  */
    ram_end_c3                 : ORIGIN = 0x34800000, LENGTH = 0x00000000 /* End of core 3 ram */
	ram_rsvd2                  : ORIGIN = 0x34800000, LENGTH = 0x00BFFFFF          /* End of SRAM */
							   
    LLCE_CAN_SHAREDMEMORY      : ORIGIN = 0x43800000 LENGTH = 0x3C800
    LLCE_LIN_SHAREDMEMORY      : ORIGIN = 0x4383C800 LENGTH = 0xa0
    LLCE_BOOT_END              : ORIGIN = 0x4383C8A0 LENGTH = 0x50 
    LLCE_MEAS_SHAREDMEMORY     : ORIGIN = 0x4384FFDF LENGTH = 0x20
}


SECTIONS
{
    .core_loop                                   ALIGN(4)     : > int_sram_c0
    .startup                                     ALIGN(4)     : > . /* Reset code*/
    .text.startup                                ALIGN(4)     : > .
    .text                                        ALIGN(4)     : > .
    .mcal_text                                   ALIGN(4)     : > .
     
    .rodata                                     ALIGN(4)      : > .
    .mcal_const_cfg                             ALIGN(4)      : > .
    .mcal_const                                 ALIGN(4)      : > .
    .init_table                                 ALIGN(4)      : > .
    .zero_table                                 ALIGN(4)      : > .
    
    .acfls_code_rom                              ALIGN(4)     : > .
    .aceep_code_rom                              ALIGN(4)     : > .
    .acmcu_code_rom                              ALIGN(4)     : > .
    .ramcode                                 ABS ALIGN(4)     : > .
    .data                                       ALIGN(4)      : > .
    .mcal_data                                  ALIGN(4)      : > .
    .bss                               (NOLOAD) ALIGN(16)     : > .
    .mcal_bss                          (NOLOAD) ALIGN(16)     : > .
    .ROM.mcal_shared_data ROM(.mcal_shared_data) ALIGN(4)     : > .

    .int_results           ALIGN(4) PAD(int_results_reserve)  : > int_sram_no_cacheable_c0 
    .intc_vector                               ALIGN(4096)    : > .
    .mcal_bss_no_cacheable            (NOLOAD) ALIGN(16)      : > .
    .mcal_data_no_cacheable                    ALIGN(4)       : > . 
    .mcal_const_no_cacheable                   ALIGN(4)       : > . 
    .pfe_bmu_mem                       ALIGN(0x40000) : > .
    .pfe_bd_mem                              ALIGN(4)    : > .
    .pfe_buf_mem                              ALIGN(4)    : > .
    
    .llce_boot_end                             ALIGN(4)       : > LLCE_BOOT_END 
    .can_43_llce_sharedmemory                  ALIGN(4)       : > LLCE_CAN_SHAREDMEMORY
    .lin_43_llce_sharedmemory                  ALIGN(4)       : > LLCE_LIN_SHAREDMEMORY
    .llce_meas_sharedmemory                    ALIGN(4)       : > LLCE_MEAS_SHAREDMEMORY 
          
    .mcal_shared_bss                  (NOLOAD) ALIGN(16)      : > int_sram_shareable
    .mcal_shared_data                          ALIGN(16)      : > . 

    __Stack_end_c0           = ADDR(int_sram_stack_c0);
    __Stack_start_c0         = ADDR(int_sram_stack_c0) + SIZEOF(int_sram_stack_c0);
    __Stack_end_c1           = ADDR(int_sram_stack_c1);
    __Stack_start_c1         = ADDR(int_sram_stack_c1) + SIZEOF(int_sram_stack_c1);  
    __Stack_end_c2           = ADDR(int_sram_stack_c2);
    __Stack_start_c2         = ADDR(int_sram_stack_c2) + SIZEOF(int_sram_stack_c2);
    __Stack_end_c3           = ADDR(int_sram_stack_c3);
    __Stack_start_c3         = ADDR(int_sram_stack_c3) + SIZEOF(int_sram_stack_c3);
  
    __INT_SRAM_START         = ADDR(int_sram_c0);
    __INT_SRAM_END           = ADDR(ram_end_c0);
    
    __INT_ITCM_START         = ADDR(int_itcm);
    __INT_ITCM_END           = ADDR(int_itcm) + SIZEOF(int_itcm);
    
    __INT_DTCM_START         = ADDR(int_dtcm);
    __INT_DTCM_END           = ADDR(int_dtcm) + SIZEOF(int_dtcm);
   
    __RAM_SHAREABLE_START    = ADDR(.mcal_shared_data);
    __RAM_SHAREABLE_END      = ADDR(.mcal_shared_data) + SIZEOF(.mcal_shared_data) - 1;
    __ROM_SHAREABLE_START    = ADDR(.ROM.mcal_shared_data);
    __ROM_SHAREABLE_END      = ADDR(.ROM.mcal_shared_data) + SIZEOF(.ROM.mcal_shared_data);
    __RAM_NO_CACHEABLE_START = ADDR(int_sram_no_cacheable_c0);
    __RAM_NO_CACHEABLE_END   = ADDR(int_sram_no_cacheable_c0) + SIZEOF(int_sram_no_cacheable_c0) - 1;
    __ROM_NO_CACHEABLE_START = 0;
    __ROM_NO_CACHEABLE_END   = 0;
    __RAM_CACHEABLE_START    = ADDR(int_sram_c0);
    __RAM_CACHEABLE_END      = ADDR(int_sram_c0) + SIZEOF(int_sram_c0) - 1;
    __ROM_CACHEABLE_START    = 0;
    __ROM_CACHEABLE_END      = 0;

    __BSS_SRAM_START         = ADDR(.bss);
    __BSS_SRAM_SIZE          = SIZEOF(.bss)+SIZEOF(.mcal_bss);
    __BSS_SRAM_END           = __BSS_SRAM_START + __BSS_SRAM_SIZE;
    
    __BSS_SRAM_NC_START      = ADDR(.mcal_bss_no_cacheable);
    __BSS_SRAM_NC_SIZE       = SIZEOF(.mcal_bss_no_cacheable);
    __BSS_SRAM_NC_END        = __BSS_SRAM_NC_START + __BSS_SRAM_NC_SIZE;

    __BSS_SRAM_SH_START      = ADDR(.mcal_shared_bss);
    __BSS_SRAM_SH_SIZE       = SIZEOF(.mcal_shared_bss);
    __BSS_SRAM_SH_END        = __BSS_SRAM_SH_START + __BSS_SRAM_SH_SIZE;

    __RAM_INTERRUPT_START    = ADDR(.intc_vector);
    __ROM_INTERRUPT_START    = 0;
    __ROM_INTERRUPT_END      = 0;

    __INIT_TABLE             = ADDR(.init_table);
    __ZERO_TABLE             = ADDR(.zero_table);
    
    /* To calculate the address of the interrupt vectors for the secondary cores
     * we assume that the offset from the int_sram_no_cacheable region is the 
     * same for all cores 
     */
    TABLE_OFFSET = (__RAM_INTERRUPT_START - ADDR(int_sram_no_cacheable_c0));
    
    __CORE1_START_ADDRESS    = ADDR(int_sram_no_cacheable_c1) + TABLE_OFFSET;
    __CORE2_START_ADDRESS    = ADDR(int_sram_no_cacheable_c2) + TABLE_OFFSET;	
    __CORE3_START_ADDRESS    = ADDR(int_sram_no_cacheable_c3) + TABLE_OFFSET;
    
    __RAM_INIT               = 0;
    __ITCM_INIT              = 0;
    __DTCM_INIT              = 1;
   /* Discard boot header in RAM */
   /DISCARD/ : { *(.boot_header) }

}
