# C -  Hello, World
  - Why `C` programming is awesome
  - Who invented `C`
  - Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
  - What happens when you type `gcc main.c`
  - What is an entry point
  - What is `main`
  - How to print text using `printf`, `puts`, and `putchar`
  - How to get the size of a specific type using the unary operator `sizeof`
  - How to compile using gcc
  - What is the default program name whe compiling with `gcc`
  - What is the official `C` coding style and how to check your code with `betty-style`
  - How to find the right header to include in your source code when using
  a standard library function
  - How does the `main function influence the return value of the program

## [0-preprocessor](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x00-hello_world/0-preprocessor)
   A script that runs a `C` file through the preprocessor and
   save the results into another file
   - the `C` file name will be saved in the variable `$CFILE`
   - the output should be saved in the file `c`

## [1-compiler](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x00-hello_world/1-compiler)
   A script that compiles a `C` file but does not link
   - the `C` file name will be saved in the variable `$CFILE`
   - the output file should be named the same as the `C` file,
   but with the extension `.o` instead of `.c`

## [2-assembler](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x00-hello_world/2-assembler)
   A script that generates the assembly code of a `C` code and
   save it in an output file
   - the `C` file name will be saved in the variable `$CFILE`
   - the output file should be named the same as the `C` file,
   but with the extension `.s` instead of `.c`

## [3-name](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x00-hello_world/3-name)
   A script that compiles a `C` file and creates an executable named `cisfun`
   - the `C` file name will be in the variable `$CFILE`

## [4-puts.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x00-hello_world/4-puts.c)
   A `C` program that prints exactly `\"Programming is like building a multilingual puzzle`,
   followed by a new line
   - use the function `puts`
   - not allowed to use `printf`
   - program should end with a value `0`

## [5-printf.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x00-hello_world/5-printf.c)
   A `C` that prints exactly `with proper grammar, but the outcome is a piece of art,`,
   followed by a new line
   - use the function `printf`
   - not allowed to use `puts`
   - program should return `0`
   - program should compile without warning using `-Wall` `gcc` option

## [6-size.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x00-hello_world/6-size.c)
   A `C` program that prints the size of various types
   on the computer it is compiled and run on
   - program should return `0`

## [100-intel](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x00-hello_world/100-intel)
   A script that generates the `assembly` code (Intel syntax) of a `C` code and
   save it in an output file
   - the `C` file name will be saved in the variable `$CFILE`
   - the output file should be named the same as the `C` file,
   but with the extension `.s` instead of `.c`

## [101-quote.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x00-hello_world/101-quote.c)
   A `C` program that prints exactly `and that piece of art is useful\" - Dora Korpar, 2015-10-19`,
   followed by a new line, to the standard error
   - not allowed to use any functions listed in the `NAME` section of the
   man (3) `printf` or man (3) `puts`
   - program should return `1`
   - program should compile without any warnings when using the `-Wall` `gcc` option
