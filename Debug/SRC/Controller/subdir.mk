################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../SRC/Controller/Controller.cpp \
../SRC/Controller/Runner.cpp 

OBJS += \
./SRC/Controller/Controller.o \
./SRC/Controller/Runner.o 

CPP_DEPS += \
./SRC/Controller/Controller.d \
./SRC/Controller/Runner.d 


# Each subdirectory must supply rules for building sources it contributes
SRC/Controller/%.o: ../SRC/Controller/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


