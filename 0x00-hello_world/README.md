# C -  Hello, World

## 0-preprocessor
   A script that runs a `C` file through the preprocessor and save the results into another file
   - the `C` file name will be saved in the variable `$CFILE`
   - the output should be saved in the file `c`

## 1-compiler
   A script that compiles a `C` file but does not link
   - the `C` file name will be saved in the variable `$CFILE`
   - the output file should be named the same as the `C` file, but with the extension `.o` instead of `.c`

## 2-assembler
   A script that generates the assembly code of a `C` code and save it in an output file
   - the `C` file name will be saved in the variable `$CFILE`
   - the output file should be named the same as the `C` file, but with the extension `.s` instead of `.c`

## 3-name
   A script that compiles a `C` file and creates an executable named `cisfun`
   - the `C` file name will be in the variable `$CFILE`

## 4-puts.c
   A `C` program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line
   - use the function `puts`
   - not allowed to use `printf`
   - program should end with a value `0`
   
## 5-printf.c
   A `C` that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line
   - use the function `printf`
   - not allowed to use `puts`
   - program should return `0`
   - program should compile without warning using `-Wall` `gcc` option

## 6-size.c
   A `C` program that prints the size of various types on the computer it is compiled and tun on
   - program should return `0`

## 100-intel
   A script that generates the `assembly` code (Intel syntax) of a `C` code and save it in an output file
   - the `C` file name will be saved in the variable `$CFILE`
   - the output file should be named the same as the `C` file, but with the extension `.s` instead of `.c`

## 101-quote.c
   A `C` program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error
   - not allowed to use any functions listed in the `NAME` section of the man (3) `printf` or man (3) `puts`
   - program should return `1`
   - your program should compile without ay warnings when using the `-Wall` `gcc` option

