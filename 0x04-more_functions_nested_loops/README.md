# C - More Functions, more nested loops
  - What are nested loops and how to use them.
  - What is a function and how do you use functions.
  - What is the difference between a declaration and a definition of a function.
  - What is a prototype.
  - Scope of variables.
  - What are the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89`.
  - What are header files and how to use them with `#include`.
  
## 0-isupper.c
   A function that checks for uppercase character.
   - Prototype: `int _isupper(int c);`.
   - Returns `1` if `c` is uppercase, otherwise returns `0`.

## 1-isdigit.c
   A function tha checks for a digit (`0` through `9`).
   - Prototype: `int _isdigit(int c);`.
   - Returns `1` if `c` is a digit, otherwise returns `0`.

## 2-mul.c
   A function that multiplies two integers.
   - Prototype: `int mul(int a, int b);`.

## 3-print_numbers.c
   A function that prints the numbers, from `0` to `9`,
   followed by a new line, using `_putchar` two times maximum.
   - Prototype: `void print_numbers(void);`.

## 4-print_most_numbers.c
   A function that prints the numbers, from `0` t0 `9`,
   followed by a new line, using `_putchar` two times maximum.
   - Prototype: `void print_most_numbers(void);`.

## 5-more_numbers.c
   A function that prints 10 times the numbers, from `0` to `14`,
   followed by a new line, using `_putchar` three times maximum.
   - Prototype: `void more_numbers(void);`.

## 6-print_line.c
   A function that draws a straight line in the terminal, using `_putchar`.
   - Prototype: `void print_line(int n);`.
   - Where `n` is the number of times the charcater `_` will be printed.
   - The line will end with a '\n'.
   - If `n` is `0` or less, the function should only print '\n'.

## 7-print_diagonal.c
   A function that draws a diagonal line on the terminal, using `_putchar`.
   - Prototype: `void print_diagonal(int n);`.
   - Where `n` is the number of times the `\` will be printed.
   - The diagonal should end with `\n`.
   - If `n` is `0` or less, the function should only print a `\n`.

## 8-print_square.c
   A function that prints a square, followed by a new line, using `_putchar`.
   - Prototype: `void print_square(int size);
   - Where `size` is the size of the square.
   - If `size` is `0` or less, the function should print '\n'.
   - The character `#` wil be used to print the square.

## 9-fizz_buzz.c
   A program that prints the numbers from `1` to `100`,
   followed by a new line.
   - But for multiples of three print `Fizz` instead of the number.
   - And for multiples of five print `Buzz` instead of the number.
   - For numbers which are multiple of both three and five print `FizzBuzz`.
   - Each number or word will be separated by a space.

## 10-print_triangle.c
   A function that prints a triangle,
   followed by a new line, using `_putchar`.
   - Prototype: `void print_triangle(int size);`.
   - Where `size` is the size of the triangle.
   - If `size` is `0` or less, the function will print `\n`.
   - The character `#` will be used to print the triangle.
