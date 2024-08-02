# C - Variadic Functions
  - What are variadic functions
  - How to use `va_start`, `va_arg` and `va_end` macros
  - Why and how to use the `const` type qualifier

## [0-sum_them_all.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x10-variadic_functions/0-sum_them_all.c)
   A function that returns the sum of all its parameters.
   - Prototype: `int sum_them_all(const unsigned int n, ...);`
   - If `n == 0`, return `0`

## [1-print_numbers.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x10-variadic_functions/1-print_numbers.c)
   A function that prints numbers, followed by a new line.
   - Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
   - Where separator is the string to be printed between numbers
   - `n` is the number of integers passed to the function
   - If `separator` is `NULL`, don’t print it

## [2-print_strings.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x10-variadic_functions/2-print_strings.c)
   A function that prints strings, followed by a new line.
   - Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
   - Where `separator` is the string to be printed between the strings
   - `n` is the number of strings passed to the function
   - If `separator` is `NULL`, don’t print it
   - If one of the string is `NULL`, print `(nil)` instead

## [3-print_all.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x10-variadic_functions/3-print_all.c)
   A function that prints anything.
   - Prototype: `void print_all(const char * const format, ...);`
   - Where `format` is a list of types of arguments passed to the function
     - `c: char`
     - `i: integer`
     - `f: float`
     - `s: char *` (if the string is `NULL`, print `(nil)` instead)
     - Any other char should be ignored