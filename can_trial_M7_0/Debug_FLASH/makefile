################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include generate/src/subdir.mk
-include board/subdir.mk
-include RTD/src/subdir.mk
-include Project_Settings/Startup_Code/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_SIZE += \
can_trial_M7_0.siz \


# All Target
all: can_trial_M7_0.elf secondary-outputs

dependents:
	-cd C:/Users/eya12/workspaceS32DS.3.5/can_trial/can_trial_M7_1/Debug_FLASH && $(MAKE) all

# Tool invocations
can_trial_M7_0.elf: $(OBJS) C:/Users/eya12/workspaceS32DS.3.5/can_trial/can_trial_M7_0/Project_Settings/Linker_Files/linker_flash_c0_s32k322.ld $(USER_OBJS) C:/Users/eya12/workspaceS32DS.3.5/can_trial/can_trial_M7_1/Debug_FLASH/can_trial_M7_1.elf
	@echo 'Building target: $@'
	@echo 'Invoking: Standard S32DS C Linker'
	arm-none-eabi-gcc -o "can_trial_M7_0.elf" "@can_trial_M7_0.args"  $(USER_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

can_trial_M7_0.siz: can_trial_M7_0.elf
	@echo 'Invoking: Standard S32DS Print Size'
	arm-none-eabi-size --format=berkeley can_trial_M7_0.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents
C:/Users/eya12/workspaceS32DS.3.5/can_trial/can_trial_M7_1/Debug_FLASH/can_trial_M7_1.elf:

-include ../makefile.targets
