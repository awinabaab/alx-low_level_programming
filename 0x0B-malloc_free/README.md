# C - Malloc, free
  - What is the difference between automatic and dynamic allocation
  - What is `malloc` and `free` and how to use them
  - Why and when to use `malloc`
  - How to use `valgrind` to check for memory leaks

## 0-create_array.c
   A function that creates and array of chars, and initializes it with a specifc char
   - Prototyype: `char *create_array(unsigned int size, char c);`
   - Returns NULL if `size` is `0`
   - Returns a pointer to the array, or `NULL` if it fails

## 1-strdup.c
   A function that returns a pointer to a newly allocated space in memory,
   which contains a copy of the string given as a parameter
   - Prototype: `char *_strdup(char *str);`
   - Returns pointer to the duplicated sring, or `NULL` if it fails

## 2-str_concat.c
   A function that concatenates two strings
   - Prototype: `char *str_concat(char *s1, char *s2);`
   - Returns a pointer to anewlyu allocated memory containing the contents of `s1`,
   followed by the contents of `s2`, and null terminated or `NULL` if it fails
   - If `NULL` is passed treat it as an empty string.

## 3-alloc_grid.c
   A function that returns a pointer to a 2 dimensional array of integers
   - Prototype: `int **aloc_grid(int width, int height);`
   - Each element should be initialized to `0`;
   - Returns `NULL` on failure
   - Returns `NULL` if `width` or `height` is less than 1

## 4-free_grid.c
   A function that fress a 2 dimensional grid previously created by `alloc_grid` function
   - Prototype: `void free_grid(**grid, int height);`

## 100-argstostr.c
   A function that concatenates all the arguments of your program
   - Prototype: `char *argstostr(int ac, char **av);`
   - Returns `NULL` if `ac == 0` or `av == NULL`
   - Returns a pointer to a new string, or `NULL` if it fails