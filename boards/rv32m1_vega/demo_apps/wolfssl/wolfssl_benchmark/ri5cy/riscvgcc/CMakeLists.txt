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

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_RV32M1_ri5cy")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DPRINTF_FLOAT_ENABLE=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DPRINTF_ADVANCED_ENABLE=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFREESCALE_KSDK_BM")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DWOLFSSL_USER_SETTINGS")

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

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_RV32M1_ri5cy")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DPRINTF_FLOAT_ENABLE=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DPRINTF_ADVANCED_ENABLE=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFREESCALE_KSDK_BM")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DWOLFSSL_USER_SETTINGS")

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

include_directories(${ProjDirPath}/../../../../../../../RISCV)

include_directories(${ProjDirPath}/../../../../../../../devices)

include_directories(${ProjDirPath}/../..)

include_directories(${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8)

include_directories(${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/port)

include_directories(${ProjDirPath}/../../../../..)

include_directories(${ProjDirPath}/../../../../../../../devices/RV32M1/drivers)

include_directories(${ProjDirPath}/../../../../../../../devices/RV32M1/utilities)

include_directories(${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/io)

include_directories(${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/str)

include_directories(${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/log)

include_directories(${ProjDirPath}/../../../../../../../devices/RV32M1)

include_directories(${ProjDirPath}/..)

add_executable(wolfssl_benchmark.elf 
"${ProjDirPath}/../../../../../../../devices/RV32M1/gcc/startup_RV32M1_ri5cy.S"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_cau3.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_cau3.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_trng.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_trng.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_lpuart.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_lpuart.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_gpio.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_gpio.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_port.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_common.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_common.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_debug_console.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_debug_console.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_debug_console_conf.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_io.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_io.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_log.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_log.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_str.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/utilities/fsl_str.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/system_RV32M1_ri5cy.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/system_RV32M1_ri5cy.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/callbacks.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/certs_test.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/crl.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/error-ssl.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/internal.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/ocsp.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/options.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/sniffer.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/sniffer_error.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/ssl.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/test.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/version.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/openssl/ec.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/openssl/ssl.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/openssl/bn.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/aes.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/arc4.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/asn.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/asn_public.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/blake2.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/blake2-impl.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/blake2-int.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/camellia.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/cmac.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/chacha.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/chacha20_poly1305.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/coding.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/compress.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/curve25519.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/des3.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/dh.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/dsa.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/ecc.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/ed25519.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/error-crypt.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/fe_operations.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/fips_test.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/ge_operations.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/hash.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/hc128.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/hmac.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/integer.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/idea.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/logging.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/md2.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/md4.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/md5.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/mem_track.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/memory.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/misc.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/mpi_class.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/mpi_superclass.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/pkcs7.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/poly1305.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/pwdbased.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/rabbit.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/random.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/ripemd.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/rsa.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/settings.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/sha.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/sha256.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/sha512.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/signature.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/srp.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/tfm.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/types.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/visibility.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/wc_encrypt.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/wc_port.h"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/aes.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/arc4.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/asm.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/asn.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/blake2b.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/camellia.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/chacha.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/chacha20_poly1305.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/coding.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/compress.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/curve25519.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/des3.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/dh.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/dsa.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/ecc.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/ecc_fp.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/ed25519.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/error.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/fe_low_mem.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/fe_operations.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/ge_low_mem.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/ge_operations.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/hash.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/hc128.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/hmac.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/integer.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/idea.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/logging.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/md2.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/md4.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/md5.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/memory.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/misc.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/pkcs7.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/poly1305.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/pwdbased.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/rabbit.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/random.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/ripemd.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/rsa.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/sha.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/sha256.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/sha512.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/signature.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/srp.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/tfm.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/wc_encrypt.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/wc_port.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/src/crl.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/src/internal.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/src/io.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/src/keys.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/src/ocsp.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/src/sniffer.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/src/ssl.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/src/tls.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfcrypt/src/port/nxp/ksdk_port.c"
"${ProjDirPath}/../../../../../../../middleware/wolfssl_3.9.8/wolfssl/wolfcrypt/port/nxp/ksdk_port.h"
"${ProjDirPath}/../board.c"
"${ProjDirPath}/../board.h"
"${ProjDirPath}/../clock_config.c"
"${ProjDirPath}/../clock_config.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_msmc.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_msmc.c"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_clock.h"
"${ProjDirPath}/../../../../../../../devices/RV32M1/drivers/fsl_clock.c"
"${ProjDirPath}/../wolfssl_benchmark.c"
"${ProjDirPath}/../../user_settings.h"
"${ProjDirPath}/../../pin_mux.c"
"${ProjDirPath}/../../pin_mux.h"
)


set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -T${ProjDirPath}/RV32M1_ri5cy_flash.ld -static")

set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -T${ProjDirPath}/RV32M1_ri5cy_flash.ld -static")

TARGET_LINK_LIBRARIES(wolfssl_benchmark.elf -Wl,--start-group)
target_link_libraries(wolfssl_benchmark.elf debug m)

target_link_libraries(wolfssl_benchmark.elf debug c)

target_link_libraries(wolfssl_benchmark.elf debug gcc)

target_link_libraries(wolfssl_benchmark.elf debug nosys)

target_link_libraries(wolfssl_benchmark.elf optimized m)

target_link_libraries(wolfssl_benchmark.elf optimized c)

target_link_libraries(wolfssl_benchmark.elf optimized gcc)

target_link_libraries(wolfssl_benchmark.elf optimized nosys)

TARGET_LINK_LIBRARIES(wolfssl_benchmark.elf -Wl,--end-group)

