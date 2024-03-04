################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../generate/src/CanIf_BOARD_InitPeripherals_PBcfg.c \
../generate/src/CanIf_Cfg.c \
../generate/src/Can_43_FLEXCAN_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Can_43_FLEXCAN_Ipw_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Clock_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Clock_Ip_Cfg.c \
../generate/src/Emios_Gpt_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/FlexCAN_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Gpt_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Gpt_Cfg.c \
../generate/src/Gpt_Ipw_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Igf_Port_Ip_Cfg.c \
../generate/src/Mcu_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Mcu_Cfg.c \
../generate/src/OsIf_Cfg.c \
../generate/src/Pit_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Power_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Power_Ip_Cfg.c \
../generate/src/Ram_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Ram_Ip_Cfg.c \
../generate/src/Rtc_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Stm_Ip_BOARD_InitPeripherals_PBcfg.c 

OBJS += \
./generate/src/CanIf_BOARD_InitPeripherals_PBcfg.o \
./generate/src/CanIf_Cfg.o \
./generate/src/Can_43_FLEXCAN_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Can_43_FLEXCAN_Ipw_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Clock_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Clock_Ip_Cfg.o \
./generate/src/Emios_Gpt_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/FlexCAN_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Gpt_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Gpt_Cfg.o \
./generate/src/Gpt_Ipw_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Igf_Port_Ip_Cfg.o \
./generate/src/Mcu_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Mcu_Cfg.o \
./generate/src/OsIf_Cfg.o \
./generate/src/Pit_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Power_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Power_Ip_Cfg.o \
./generate/src/Ram_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Ram_Ip_Cfg.o \
./generate/src/Rtc_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Stm_Ip_BOARD_InitPeripherals_PBcfg.o 

C_DEPS += \
./generate/src/CanIf_BOARD_InitPeripherals_PBcfg.d \
./generate/src/CanIf_Cfg.d \
./generate/src/Can_43_FLEXCAN_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Can_43_FLEXCAN_Ipw_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Clock_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Clock_Ip_Cfg.d \
./generate/src/Emios_Gpt_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/FlexCAN_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Gpt_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Gpt_Cfg.d \
./generate/src/Gpt_Ipw_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Igf_Port_Ip_Cfg.d \
./generate/src/Mcu_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Mcu_Cfg.d \
./generate/src/OsIf_Cfg.d \
./generate/src/Pit_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Power_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Power_Ip_Cfg.d \
./generate/src/Ram_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Ram_Ip_Cfg.d \
./generate/src/Rtc_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Stm_Ip_BOARD_InitPeripherals_PBcfg.d 


# Each subdirectory must supply rules for building sources it contributes
generate/src/%.o: ../generate/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@generate/src/CanIf_BOARD_InitPeripherals_PBcfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


