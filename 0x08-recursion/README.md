# C - Recursion
  - What is recursion
  - How to implement recursion
  - In what situations you should implemet recursion
  - In what situations you shouldn't implement ecursion

## [0-puts_recursion.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x08-recursion/0-puts_recursion.c)
   A function that prints a string, followed by a new line
   - Prototype: `void _puts_recursion(char *s);`

## [1-print_rev_recursion.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x08-recursion/1-print_rev_recursion.c)
   A function that prints a string in reverse
   - Prototype: `void _print_rev_recursion(char *s);`

## [2-strlen_recursion.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x08-recursion/2-strlen_recursion.c)
   A function that returns the length of a string
   - Prototype: `int _strlen_recursion(char *s);`

## [3-factorial.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x08-recursion/3-factorial.c)
   A function that returns the factorial of a given number
   - Prototype: `int factorial(int n);`
   - If `n` is lower that `0`, the function should return `-1`

## [4-pow_recursion.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x08-recursion/4-pow_recursion.c)
   A function that returns the value of `x` raised to the power `y`
   - Prototype: `int _pow_recursion(int x, int y);`
   - If `y` is lower than `0`, the funtion should return `-1`

## [5-sqrt_recursion.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x08-recursion/5-sqrt_recursion.c)
   A function that returns the natural square root of a number
   - Prototype: `int _sqrt_recursion(int n);`
   - If `n` does not have a natural square root, the function should return `-1`

## [6-is_prime_number.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x08-recursion/6-is_prime_number.c)
   A function that returns `1` if the input integer is a prime number,
   otherwise return `0`
   - Return: `int is_prime_number(int n);`

## [100-is_palindrome.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x08-recursion/100-is_palindrome.c)
   A function that returns `1` if a string is a palindrome and `0` if not
   - Prototype: `int is_palindrome(char *s);`

## [101-wildcmp.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x08-recursion/101-wildcmp.c)
   A function that computes two strings and returns `1` if the string
   can be considered identical, otherwise return `0`
   - Prototype: `int wildcmp(char *s1, char *s2);`
   - `s2` can contain the special character `*`