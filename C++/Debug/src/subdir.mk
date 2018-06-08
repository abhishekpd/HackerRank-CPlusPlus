################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Classes.cpp \
../src/Intruction.cpp \
../src/Main.cpp \
../src/Strings.cpp 

OBJS += \
./src/Classes.o \
./src/Intruction.o \
./src/Main.o \
./src/Strings.o 

CPP_DEPS += \
./src/Classes.d \
./src/Intruction.d \
./src/Main.d \
./src/Strings.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=c++1z -O0 -g3 -Wall -c -fmessage-length=0 -Wno-attributes -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


