################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/TMU/subdir.mk
-include src/MCAL/TIMER1/subdir.mk
-include src/MCAL/TIMER0/subdir.mk
-include src/MCAL/PORT/subdir.mk
-include src/MCAL/GIE/subdir.mk
-include src/MCAL/EXTI/subdir.mk
-include src/MCAL/DIO/subdir.mk
-include src/HAL/key_pad/subdir.mk
-include src/HAL/Ultra_Sonic/subdir.mk
-include src/HAL/SSD/subdir.mk
-include src/HAL/Push_Button/subdir.mk
-include src/HAL/LED/subdir.mk
-include src/HAL/LCD/subdir.mk
-include src/CONFIG/subdir.mk
-include src/APP/subdir.mk
-include doc/temps/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
TMU_PROJECT.lss \

FLASH_IMAGE += \
TMU_PROJECT.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: TMU_PROJECT.elf secondary-outputs

# Tool invocations
TMU_PROJECT.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,TMU_PROJECT.map -mmcu=atmega32 -o "TMU_PROJECT.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

TMU_PROJECT.lss: TMU_PROJECT.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S TMU_PROJECT.elf  >"TMU_PROJECT.lss"
	@echo 'Finished building: $@'
	@echo ' '

TMU_PROJECT.hex: TMU_PROJECT.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex TMU_PROJECT.elf  "TMU_PROJECT.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: TMU_PROJECT.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 TMU_PROJECT.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) TMU_PROJECT.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
