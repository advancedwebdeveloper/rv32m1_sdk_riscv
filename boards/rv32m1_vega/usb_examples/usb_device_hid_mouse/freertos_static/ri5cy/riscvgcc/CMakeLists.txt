INCLUDE(CMakeForceCompiler)

# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

 
# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})


SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -g")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -march=rv32imcxpulpv2")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -Wall")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-common")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -march=rv32imcxpulpv2")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -Wall")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-common")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -D_DEBUG=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_RV32M1_ri5cy")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DUSB_STACK_FREERTOS")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFSL_RTOS_FREE_RTOS")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -march=rv32imcxpulpv2")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MMD")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MP")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-common")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -D_DEBUG=0")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_RV32M1_ri5cy")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DUSB_STACK_FREERTOS")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFSL_RTOS_FREE_RTOS")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -O2")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-store-merging")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -march=rv32imcxpulpv2")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MMD")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MP")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wall")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-common")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -march=rv32imcxpulpv2")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MMD")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MP")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-common")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-rtti")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-exceptions")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O2")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-store-merging")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -march=rv32imcxpulpv2")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MMD")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MP")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-common")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-rtti")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-exceptions")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -g")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -march=rv32imcxpulpv2")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -static")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -z")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -nostdlib")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -march=rv32imcxpulpv2")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -static")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -z")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -nostdlib")

include_directories(${ProjDirPath}/../../../../..)

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/../../../../../freertos_config_board/ri5cy)

include_directories(${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/portable/GCC/RISCY)

include_directories(${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include)

include_directories(${ProjDirPath}/../../../../../../../RISCV)

include_directories(${ProjDirPath}/../../../../../../../devices)

include_directories(${ProjDirPath}/../..)

include_directories(${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source)

include_directories(${ProjDirPath}/../../../../../../../middleware/usb_1.6.3)

include_directories(${ProjDirPath}/../../../../../../../middleware/usb_1.6.3/osa)

include_directories(${ProjDirPath}/../../../../../../../middleware/usb_1.6.3/include)

include_directories(${ProjDirPath}/../../../../../../../middleware/usb_1.6.3/device)

include_directories(${ProjDirPath}/../../../../../../../CMSIS/Include)

include_directories(${ProjDirPath}/../../../../../../../devices/RV32M1/drivers)

include_directories(${ProjDirPath}/../../../../../../../devices/RV32M1/utilities)

include_directories(${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/io)

include_directories(${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/str)

include_directories(${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/log)

include_directories(${ProjDirPath}/../../../../../../../devices/RV32M1)

add_executable(dev_hid_mouse_freertos_static.elf 
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/portable/GCC/RISCY/port.c"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/portable/GCC/RISCY/portASM.S"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/portable/GCC/RISCY/fsl_tickless_generic.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/portable/GCC/RISCY/portmacro.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/gcc/startup_RV32M1_ri5cy.S"
"${ProjDirPath}/../../../../../../../middleware/usb_1.6.3/device/usb_device_khci.c"
"${ProjDirPath}/../../../../../../../middleware/usb_1.6.3/device/usb_device_khci.h"
"${ProjDirPath}/../../../../../../../middleware/usb_1.6.3/include/usb_khci.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_lpuart.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_lpuart.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_intmux.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_intmux.c"
"${ProjDirPath}/../../../../../../../middleware/usb_1.6.3/osa/usb_osa.h"
"${ProjDirPath}/../../../../../../../middleware/usb_1.6.3/osa/usb_osa_freertos.h"
"${ProjDirPath}/../../../../../../../middleware/usb_1.6.3/osa/usb_osa_freertos.c"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/portable/MemMang/heap_4.c"
"${ProjDirPath}/../usb_device_ch9.c"
"${ProjDirPath}/../usb_device_ch9.h"
"${ProjDirPath}/../usb_device_class.c"
"${ProjDirPath}/../usb_device_class.h"
"${ProjDirPath}/../usb_device_hid.c"
"${ProjDirPath}/../usb_device_hid.h"
"${ProjDirPath}/../mouse.c"
"${ProjDirPath}/../mouse.h"
"${ProjDirPath}/../usb_device_descriptor.c"
"${ProjDirPath}/../usb_device_descriptor.h"
"${ProjDirPath}/../usb_device_config.h"
"${ProjDirPath}/../FreeRTOSConfig.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/croutine.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/event_groups.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/FreeRTOS.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/list.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/mpu_wrappers.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/portable.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/projdefs.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/queue.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/semphr.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/StackMacros.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/task.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/timers.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/deprecated_definitions.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/include/freertos_tasks_c_additions.h"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/croutine.c"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/list.c"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/queue.c"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/tasks.c"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/timers.c"
"${ProjDirPath}/../../../../../../../rtos/freertos_9.0.0/Source/event_groups.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/system_RV32M1_ri5cy.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/system_RV32M1_ri5cy.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_debug_console.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_debug_console.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_debug_console_conf.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_io.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_io.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_log.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_log.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_str.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_str.h"
"${ProjDirPath}/../../../../../../../middleware/usb_1.6.3/include/usb.h"
"${ProjDirPath}/../../../../../../../middleware/usb_1.6.3/include/usb_misc.h"
"${ProjDirPath}/../../../../../../../middleware/usb_1.6.3/include/usb_spec.h"
"${ProjDirPath}/../../../../../../../middleware/usb_1.6.3/device/usb_device.h"
"${ProjDirPath}/../../../../../../../middleware/usb_1.6.3/device/usb_device_dci.c"
"${ProjDirPath}/../../../../../../../middleware/usb_1.6.3/device/usb_device_dci.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_port.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_sim.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_sim.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_clock.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_clock.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_common.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_common.c"
"${ProjDirPath}/../board.c"
"${ProjDirPath}/../board.h"
"${ProjDirPath}/../clock_config.c"
"${ProjDirPath}/../clock_config.h"
"${ProjDirPath}/../pin_mux.c"
"${ProjDirPath}/../pin_mux.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_gpio.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_gpio.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_msmc.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_msmc.c"
)


set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -T${ProjDirPath}/RV32M1_ri5cy_flash.ld -static")

set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -T${ProjDirPath}/RV32M1_ri5cy_flash.ld -static")

TARGET_LINK_LIBRARIES(dev_hid_mouse_freertos_static.elf -Wl,--start-group)
target_link_libraries(dev_hid_mouse_freertos_static.elf debug m)

target_link_libraries(dev_hid_mouse_freertos_static.elf debug c)

target_link_libraries(dev_hid_mouse_freertos_static.elf debug gcc)

target_link_libraries(dev_hid_mouse_freertos_static.elf debug nosys)

target_link_libraries(dev_hid_mouse_freertos_static.elf optimized m)

target_link_libraries(dev_hid_mouse_freertos_static.elf optimized c)

target_link_libraries(dev_hid_mouse_freertos_static.elf optimized gcc)

target_link_libraries(dev_hid_mouse_freertos_static.elf optimized nosys)

TARGET_LINK_LIBRARIES(dev_hid_mouse_freertos_static.elf -Wl,--end-group)

