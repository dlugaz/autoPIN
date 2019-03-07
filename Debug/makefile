################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/4.8.4-20140725

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./autoPIN.o" \
"./SimpleTimer.o" \
$(GEN_CMDS__FLAG) \
-Wl,--start-group \
-Wl,-T"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/hardware/cc3200/1.0.3/cores/cc3200/cc3200.ld" \
-lcc3200_CC3200-LAUNCHXL_Servo \
-lcc3200_CC3200-LAUNCHXL_core \
-ldriverlib \
-lm \
-lc \
-lgcc \
-Wl,--end-group \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
autoPIN.out \

EXE_OUTPUTS__QUOTED += \
"autoPIN.out" \

BIN_OUTPUTS += \
autoPIN.bin \

BIN_OUTPUTS__QUOTED += \
"autoPIN.bin" \


# All Target
all: $(OBJS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "autoPIN.out" secondary-outputs

dependents:
	-cd C:/Users/kdluzynski/workspace_v8/cc3200_CC3200-LAUNCHXL_core/Debug && $(MAKE) all
	-cd C:/Users/kdluzynski/workspace_v8/cc3200_CC3200-LAUNCHXL_Servo/Debug && $(MAKE) all

# Tool invocations
autoPIN.out: $(OBJS) $(GEN_CMDS) C:/Users/kdluzynski/workspace_v8/cc3200_CC3200-LAUNCHXL_core/Debug/libcc3200_CC3200-LAUNCHXL_core.a C:/Users/kdluzynski/workspace_v8/cc3200_CC3200-LAUNCHXL_Servo/Debug/libcc3200_CC3200-LAUNCHXL_Servo.a
	@echo 'Building target: "$@"'
	@echo 'Invoking: GNU Linker'
	"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/4.8.4-20140725/bin/arm-none-eabi-gcc.exe" -Dprintf=iprintf -DF_CPU=80000000L -DENERGIA_CC3200-LAUNCHXL -DENERGIA_ARCH_CC3200 -DENERGIA=21 -DARDUINO=10610 -Os -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -w -Wall --param max-inline-insns-single=500 -mabi=aapcs -march=armv7e-m -mthumb --entry ResetISR -nostartfiles -nostdlib -Wl,--gc-sections -L"C:/Users/kdluzynski/workspace_v8/cc3200_CC3200-LAUNCHXL_Servo/Debug" -L"C:/Users/kdluzynski/workspace_v8/cc3200_CC3200-LAUNCHXL_core/Debug" -L"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/hardware/cc3200/1.0.3/system/driverlib" -Os -Wl,--check-sections -Wl,--unresolved-symbols=report-all -Wl,--warn-common -o"autoPIN.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

autoPIN.bin: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: GNU Objcopy Utility'
	"C:/Users/kdluzynski/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/4.8.4-20140725/bin/arm-none-eabi-objcopy.exe" -O binary $(EXE_OUTPUTS__QUOTED) "autoPIN.bin"
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "SimpleTimer.o" "autoPIN.o" 
	-$(RM) "SimpleTimer.d" "autoPIN.d" 
	-@echo 'Finished clean'
	-@echo ' '

secondary-outputs: $(BIN_OUTPUTS)

.PHONY: all clean dependents
.SECONDARY:
C:/Users/kdluzynski/workspace_v8/cc3200_CC3200-LAUNCHXL_core/Debug/libcc3200_CC3200-LAUNCHXL_core.a:
C:/Users/kdluzynski/workspace_v8/cc3200_CC3200-LAUNCHXL_Servo/Debug/libcc3200_CC3200-LAUNCHXL_Servo.a:

-include ../makefile.targets

