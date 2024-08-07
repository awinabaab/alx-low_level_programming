# C - Pointers, arrays and strings
  - What are pointers and how to use them
  - What are arrays and how to use them
  - What are the differences between pointers and arrays
  - How to use strigs and how to manipulate them
  - Scope of variables

## [0-reset_to_98.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/0-reset_to_98.c)
   A function that takes a pointer to an `int` as parameter
   and updates the value it points to, to 98.
   - Prototype: `void reset_to_98(int *n);`.

## [1-swap.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/1-swap.c)
   A function that swaps the values of two integers.
   - Prototype: `void swap_int(int *a, int *b);`.

## [2-strlen.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/2-strlen.c)
   A function that returns the length of a string.
   - Prototype: `int _strlen(char *s);`.

## [3-puts.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/3-puts.c)
   A function that prints a string, followed by a new lne, to `stdout`.
   - Prototype: `void _puts(char *str);`.

## [4-print_rev.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/4-print_rev.c)
   A function that prints a string in reverse, followed by a new line.
   - Prototype: `void print_rev(char *s);`.

## [5-rev_string.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/5-rev_string.c)
   A function that reverses a string.
   - Prototype: `void rev_string(char *s);`.

## [6-puts2.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/6-puts2.c)
   A function that prints every other character of a string,
   starting with the first character, followed by a new line.
   - Prototype: `void puts2(char *str);`

## [7-puts_half.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/7-puts_half.c)
   A function that prints half of a string, followed by a new line.
   - Prototype: `void puts_half(char *str);`.
   - The function will print the second half of the string.
   - If the number of character is odd,
   the function will print the last `n` characters of the string,
   where `n = (length_of_the_string - 1) / 2`.

## [8-print_array.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/8-print_array.c)
   A function that prints `n` elements of an array of integers, followed by a new line.
   - Prototype: `void print_array(int *a, int n);`.
   - Where `n` is the number of elements in the array to be printed.
   - Numbers will be separated by a comma, followed by a space.
   - The numbers will be displayed in the same order as they are stored in the array.

## [9-strcpy.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/9-strcpy.c)
   A function that copies a string pointed to by `src`,
   including the terminating null byte (`\0`),
   to the buffer pointed to by `dest`.
   - Prototype: `char *_strcpy(char *dest, char *src);`.
   - Returns a pointer to `dest`.
