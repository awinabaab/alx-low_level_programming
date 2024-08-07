# C - Even more pointers, arrays and strings
  - What are pointers and how to use them
  - What are multidimensional arrays and how to use them
  - What are the most common C standard library functions to manipulate strings

## [0-memset.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/0-memset.c)
   A function that fills memory with a constant byte
   - Prototype: `char *_memset(char *s, char b, unsigned int);`
   - The `_memset() function fills the first `n` bytes of the memory area pointed to by `s`
   with the constant byte `b`
   - Returns a pointer `s`

## [1-memcpy.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/1-memcpy.c)
   A function that copies memory area
   - Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
   - The `_memcpy()` function copies the `n` bytes from memory area `src`
   to memory area `dest`
   - Returns pointer to `dest`

## [2-strchr.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/2-strchr.c)
   A function that locates a character in a string
   - Prototype: `char *_strchr(char *s, char c);`
   - Returns a pointer to the first occurrence of the character `c` in the string `s`,
   or `NULL` if the character is not found

## [3-strspn.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/3-strspn.c)
   A function that gets the length of a prefix substring
   - Prototype: `unsigned int _strspn(char *s, char *accept);`
   - Returns the number of bytes in the initial segment `s` which consist only
   of bytes from `accept`

## [4-strpbrk.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/4-strbrk.c)
   A function that searches for any of a set of bytes
   - Prototype: `char *_strpbrk(char *s, char *accept);`
   - The `_strpbrk() function locates the first occurrence in the string `s`
   of any bytes of the bytes in the string `accept`
   - Returns a pointer to the byte in `s` that matches on of the bytees in
   `accept`, or `NULL` if no such byte is found

## [5-strstr.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/5-strstr.c)
   A functionnthat locates a substring
   - Prototype: `char *_strstr(char *haystack, char *needle);`
   - The `_strstr()` function finds the first occurrence of the substring `needle`
   in the string `haystack`. The terminating null bytes(`\0`) are not compared

## [7-print_chessboard.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/7-print_chessboard.c)
   A function that prints the chessboard
   - Prototype: `void print_chessboard(char (*a)[8]);`

## [8-print_diagsums.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/8-print_diagsums.c)
   A fuction that prints the sum of the two diagonals of a square matrix of integers
   - Prototype: `void print_diagsums(int *a, int size);`

## [100-set_string.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/100-set_string.c)
   A function that sets the value of a pointer to a char
   - Prototype: `void set_string(char **s, char *to);`
