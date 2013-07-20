################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AA.cpp \
../src/TestArray.cpp \
../src/TestBitset.cpp \
../src/TestPointer.cpp \
../src/TestString.cpp \
../src/TestVector.cpp \
../src/study.cpp 

OBJS += \
./src/AA.o \
./src/TestArray.o \
./src/TestBitset.o \
./src/TestPointer.o \
./src/TestString.o \
./src/TestVector.o \
./src/study.o 

CPP_DEPS += \
./src/AA.d \
./src/TestArray.d \
./src/TestBitset.d \
./src/TestPointer.d \
./src/TestString.d \
./src/TestVector.d \
./src/study.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


