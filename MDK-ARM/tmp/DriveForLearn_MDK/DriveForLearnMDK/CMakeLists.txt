# CMSIS Build CMakeLists generated on 2024-06-23T12:14:45

cmake_minimum_required(VERSION 3.22)

# Target options

set(TARGET DriveForLearn_MDK)
set(CPU Cortex-M4)
set(PRJ_DIR "f:/Motor/DriveForLearn_MDK/MDK-ARM")
set(OUT_DIR "F:/Motor/DriveForLearn_MDK/MDK-ARM/out/DriveForLearn_MDK/DriveForLearnMDK")
set(INT_DIR "F:/Motor/DriveForLearn_MDK/MDK-ARM/tmp/DriveForLearn_MDK/DriveForLearnMDK")
set(FPU SP_FPU)
set(BYTE_ORDER Little-endian)
set(OPTIMIZE debug)
set(DEBUG on)
set(AS_FLAGS_GLOBAL "-masm=auto")
set(CC_FLAGS_GLOBAL "-std=c99 -fno-rtti -funsigned-char -fshort-enums -fshort-wchar -ffunction-sections -Wno-packed -Wno-missing-variable-declarations -Wno-missing-prototypes -Wno-missing-noreturn -Wno-sign-conversion -Wno-nonportable-include-path -Wno-reserved-id-macro -Wno-unused-macros -Wno-documentation-unknown-command -Wno-documentation -Wno-license-management -Wno-parentheses-equality")
set(CXX_FLAGS_GLOBAL "-xc++ -std=c++11 -fno-rtti -funsigned-char -fshort-enums -fshort-wchar -ffunction-sections -Wno-packed -Wno-missing-variable-declarations -Wno-missing-prototypes -Wno-missing-noreturn -Wno-sign-conversion -Wno-nonportable-include-path -Wno-reserved-id-macro -Wno-unused-macros -Wno-documentation-unknown-command -Wno-documentation -Wno-license-management -Wno-parentheses-equality")
set(LD_FLAGS_GLOBAL "--map --load_addr_map_info --xref --callgraph --symbols --info sizes --info totals --info unused --info veneers --strict --summary_stderr --info summarysizes")
set(LD_SCRIPT "f:/Motor/DriveForLearn_MDK/MDK-ARM/DriveForLearn_MDK_DriveForLearnMDK.sct")

set(DEFINES
  STM32F407xx
  _RTE_
  USE_HAL_DRIVER
)

set(INC_PATHS
  "f:/Motor/DriveForLearn_MDK/Core/Inc"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Inc"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy"
  "f:/Motor/DriveForLearn_MDK/Drivers/CMSIS/Device/ST/STM32F4xx/Include"
  "f:/Motor/DriveForLearn_MDK/Drivers/CMSIS/Include"
  "f:/Motor/DriveForLearn_MDK/APP"
  "f:/Motor/DriveForLearn_MDK/MDK-ARM/RTE/_DriveForLearnMDK"
  "C:/Users/dzh/AppData/Local/Arm/Packs/ARM/CMSIS/5.9.0/CMSIS/Core/Include"
  "C:/Users/dzh/AppData/Local/arm/packs/Keil/STM32F4xx_DFP/2.17.1/Drivers/CMSIS/Device/ST/STM32F4xx/Include"
)

set(AS_ARM_SRC_FILES
  "f:/Motor/DriveForLearn_MDK/MDK-ARM/startup_stm32f407xx.s"
)

set(CC_SRC_FILES
  "f:/Motor/DriveForLearn_MDK/APP/brushmotor.c"
  "f:/Motor/DriveForLearn_MDK/APP/bsp.c"
  "f:/Motor/DriveForLearn_MDK/Core/Src/adc.c"
  "f:/Motor/DriveForLearn_MDK/Core/Src/gpio.c"
  "f:/Motor/DriveForLearn_MDK/Core/Src/i2c.c"
  "f:/Motor/DriveForLearn_MDK/Core/Src/main.c"
  "f:/Motor/DriveForLearn_MDK/Core/Src/stm32f4xx_hal_msp.c"
  "f:/Motor/DriveForLearn_MDK/Core/Src/stm32f4xx_hal_timebase_tim.c"
  "f:/Motor/DriveForLearn_MDK/Core/Src/stm32f4xx_it.c"
  "f:/Motor/DriveForLearn_MDK/Core/Src/system_stm32f4xx.c"
  "f:/Motor/DriveForLearn_MDK/Core/Src/tim.c"
  "f:/Motor/DriveForLearn_MDK/Core/Src/usart.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_adc.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_adc_ex.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cortex.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma_ex.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_exti.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ex.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ramfunc.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_gpio.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_i2c.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_i2c_ex.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr_ex.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc_ex.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim_ex.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_uart.c"
  "f:/Motor/DriveForLearn_MDK/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_adc.c"
)

# Toolchain config map

set(REGISTERED_TOOLCHAIN_ROOT "c:/Users/dzh/.vcpkg/artifacts/2139c4c6/compilers.arm.armclang/6.21.0/bin")
set(REGISTERED_TOOLCHAIN_VERSION "6.21.0")
set(TOOLCHAIN_VERSION_MIN "6.21.0")
set(TOOLCHAIN_VERSION_MAX "6.21.0")
include ("C:/Users/dzh/.vcpkg/artifacts/2139c4c6/tools.open.cmsis.pack.cmsis.toolbox/2.4.0/etc/AC6.6.16.2.cmake")
include ("C:/Users/dzh/.vcpkg/artifacts/2139c4c6/tools.open.cmsis.pack.cmsis.toolbox/2.4.0/etc/CMSIS-Build-Utils.cmake")

# Setup project

project(${TARGET} LANGUAGES AS_ARM C)

cbuild_get_running_toolchain(TOOLCHAIN_ROOT TOOLCHAIN_VERSION C)

# Global Flags

set(CMAKE_AS_ARM_FLAGS "${AS_ARM_CPU} ${AS_ARM_BYTE_ORDER} ${AS_ARM_DEFINES} ${AS_ARM_OPTIONS_FLAGS} ${AS_ARM_FLAGS} ${AS_FLAGS_GLOBAL}")
cbuild_get_system_includes(CC_SYS_INC_PATHS_LIST CC_SYS_INC_PATHS)
set(CMAKE_C_FLAGS "${CC_CPU} ${CC_BYTE_ORDER} ${CC_DEFINES} ${CC_OPTIONS_FLAGS} ${CC_FLAGS} ${CC_FLAGS_GLOBAL} ${CC_SYS_INC_PATHS}")
set(CMAKE_C_LINK_FLAGS "${LD_CPU} ${_LS}\"${LD_SCRIPT}\" ${LD_FLAGS_GLOBAL} ${LD_OPTIONS_FLAGS} ${LD_FLAGS}")

# Local Flags

foreach(SRC ${AS_ARM_SRC_FILES})
  set_source_files_properties(${SRC} PROPERTIES LANGUAGE AS_ARM)
endforeach()

# Compilation Database

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_custom_target(database COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INT_DIR}/compile_commands.json" "${OUT_DIR}")

# Setup Target

add_executable(${TARGET} ${AS_ARM_SRC_FILES} ${CC_SRC_FILES})
set_target_properties(${TARGET} PROPERTIES PREFIX "" SUFFIX ".axf" OUTPUT_NAME "DriveForLearn_MDK")
set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${OUT_DIR} LINK_DEPENDS ${LD_SCRIPT})
target_include_directories(${TARGET} PUBLIC ${INC_PATHS})
