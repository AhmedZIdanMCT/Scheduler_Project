################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/CONFIG/DIO_Lcfg.c \
../src/CONFIG/EXTI_config.c \
../src/CONFIG/KP_Lcfg.c \
../src/CONFIG/LCD_Lcfg.c \
../src/CONFIG/LED_Lcfg.c \
../src/CONFIG/PB_Lcfg.c \
../src/CONFIG/PORT_Lcfg.c \
../src/CONFIG/SSD_Lcfg.c \
../src/CONFIG/TIMER0_Lcfg.c \
../src/CONFIG/TIMER1_Lcfg.c \
../src/CONFIG/TMU_Lcfg.c \
../src/CONFIG/US_Lcfg.c 

OBJS += \
./src/CONFIG/DIO_Lcfg.o \
./src/CONFIG/EXTI_config.o \
./src/CONFIG/KP_Lcfg.o \
./src/CONFIG/LCD_Lcfg.o \
./src/CONFIG/LED_Lcfg.o \
./src/CONFIG/PB_Lcfg.o \
./src/CONFIG/PORT_Lcfg.o \
./src/CONFIG/SSD_Lcfg.o \
./src/CONFIG/TIMER0_Lcfg.o \
./src/CONFIG/TIMER1_Lcfg.o \
./src/CONFIG/TMU_Lcfg.o \
./src/CONFIG/US_Lcfg.o 

C_DEPS += \
./src/CONFIG/DIO_Lcfg.d \
./src/CONFIG/EXTI_config.d \
./src/CONFIG/KP_Lcfg.d \
./src/CONFIG/LCD_Lcfg.d \
./src/CONFIG/LED_Lcfg.d \
./src/CONFIG/PB_Lcfg.d \
./src/CONFIG/PORT_Lcfg.d \
./src/CONFIG/SSD_Lcfg.d \
./src/CONFIG/TIMER0_Lcfg.d \
./src/CONFIG/TIMER1_Lcfg.d \
./src/CONFIG/TMU_Lcfg.d \
./src/CONFIG/US_Lcfg.d 


# Each subdirectory must supply rules for building sources it contributes
src/CONFIG/%.o: ../src/CONFIG/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\CONFIG" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\HAL\key_pad" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\MCAL" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\TMU" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\MCAL\DIO" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\MCAL\EXTI" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\MCAL\PORT" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\MCAL\GIE" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\MCAL\TIMER0" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\MCAL\TIMER1" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\LIB" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\HAL\LED" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\HAL\LCD" -I"D:\embedded_programming\DEY\4-month\Technical\Interfacing\my cont\TMU_PROJ\src\HAL\Push_Button" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


