cmake -DUSE_SPLINT=ON -DCMAKE_TOOLCHAIN_FILE="../../../../../../../../../tools/cmake_toolchain_files/riscv32gcc.cmake" -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug  .
mingw32-make -j4 2> build_log.txt 
IF "%1" == "" ( pause ) 
