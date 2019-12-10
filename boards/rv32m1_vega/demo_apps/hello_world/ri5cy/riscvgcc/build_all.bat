cmake --trace-expand -DCMAKE_TOOLCHAIN_FILE="../../../../../../tools/cmake_toolchain_files/riscv32gcc.cmake" -G "MinGW Makefiles" -DCMAKE_VERBOSE_MAKEFILE=1 -DCMAKE_BUILD_TYPE=Debug  .

mingw32-make -d -j4

cmake --trace-expand -DCMAKE_TOOLCHAIN_FILE="../../../../../../tools/cmake_toolchain_files/riscv32gcc.cmake" -G "MinGW Makefiles" -DCMAKE_VERBOSE_MAKEFILE=1 -DCMAKE_BUILD_TYPE=Release  .

mingw32-make -d -j4

IF "%1" == "" ( pause )