################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/HAL/LED/LED_Prog.c 

OBJS += \
./src/HAL/LED/LED_Prog.o 

C_DEPS += \
./src/HAL/LED/LED_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
src/HAL/LED/%.o: ../src/HAL/LED/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\CONFIG" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\HAL\key_pad" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\MCAL" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\TMU" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\MCAL\DIO" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\MCAL\EXTI" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\MCAL\PORT" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\MCAL\GIE" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\MCAL\TIMER0" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\MCAL\TIMER1" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\LIB" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\HAL\LED" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\HAL\LCD" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\HAL\Push_Button" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


