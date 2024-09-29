# C - Dynamic Libraries
  - What is a dynamic library, how does it work, how to create one, and how to use it
  - What is the environment variable `$LD_LIBRARY_PATH` and how to use it
  - What are the differences between static and shared libraries
  - Basic usage `nm`, `ldd`, `ldconfig`

## [libdynamic.so](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libdynamic.so)
   A dynamic library containing all the functions listed in [main.h](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x18-dynamic_libraries/main.h)

## [1-create_dynamic_lib.sh](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x18-dynamic_libraries/1-create_dynamic_lib.sh)
   A script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory

## [100-operations.so](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x18-dynamic_libraries/100-operations.so)
   A dynamic library that contains C function that can be called from Python