################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/4.8.4-20140725/bin/arm-none-eabi-gcc.exe" -c -mcpu=cortex-m4 -march=armv7e-m -mthumb -mfloat-abi=soft -Dprintf=iprintf -DF_CPU=80000000L -DENERGIA_CC3200-LAUNCHXL -DENERGIA_ARCH_CC3200 -DENERGIA=21 -DARDUINO=10610 -I"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/hardware/cc3200/1.0.3/system" -I"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/hardware/cc3200/1.0.3/system/inc" -I"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/hardware/cc3200/1.0.3/cores/cc3200" -I"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/hardware/cc3200/1.0.3/variants/CC3200-LAUNCHXL" -I"C:/Users/kdluzynski/workspace_v8/autoPIN" -I"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/hardware/cc3200/1.0.3/libraries/Servo" -I"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/4.8.4-20140725/arm-none-eabi/include" -Os -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -w -Wall --param max-inline-insns-single=500 -mabi=aapcs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -std=gnu++11 -fno-rtti -fno-threadsafe-statics -fno-exceptions $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

autoPIN.cpp: ../autoPIN.ino
	@echo 'Building file: "$<"'
	@echo 'Invoking: Resource Custom Build Step'
	
	@echo 'Finished building: "$<"'
	@echo ' '

%.o: ./%.cpp $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/4.8.4-20140725/bin/arm-none-eabi-gcc.exe" -c -mcpu=cortex-m4 -march=armv7e-m -mthumb -mfloat-abi=soft -Dprintf=iprintf -DF_CPU=80000000L -DENERGIA_CC3200-LAUNCHXL -DENERGIA_ARCH_CC3200 -DENERGIA=21 -DARDUINO=10610 -I"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/hardware/cc3200/1.0.3/system" -I"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/hardware/cc3200/1.0.3/system/inc" -I"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/hardware/cc3200/1.0.3/cores/cc3200" -I"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/hardware/cc3200/1.0.3/variants/CC3200-LAUNCHXL" -I"C:/Users/kdluzynski/workspace_v8/autoPIN" -I"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/hardware/cc3200/1.0.3/libraries/Servo" -I"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/4.8.4-20140725/arm-none-eabi/include" -Os -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -w -Wall --param max-inline-insns-single=500 -mabi=aapcs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -std=gnu++11 -fno-rtti -fno-threadsafe-statics -fno-exceptions $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


