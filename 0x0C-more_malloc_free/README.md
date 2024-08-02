# C - More malloc, free
  - How to use the `exit` function.
  - What are the functions `calloc` and `realloc` from the standard library and
  how to use them.

## 0-malloc_checked.c
   A function that allocates memory using `malloc`.
   - Prototype: `void *malloc_checked(unsigned int b);`.
   - Returns a pointer to the allocated memory.
   - If malloc fails, the function teminates with status value of 98.

## 1-string_nconcat.c
   A function that concatenates two strings.
   - Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`.
   - Returns a pointer to a newly allocated memory which contains `s1`,
   followed by the first `n` bytes of `s2`, and null terminated.
   - Retruns `NULL` if function fails.
   - If `n` >= length of `s2` then the entire string of `s2` is used.

## 2-calloc.c
   A function that allocates memory for an array, using malloc.
   - Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`.
   - Allocates memory for an array of `nmemb` elements of `size` bytes each and
   returns a pointer to the allocated memory.
   - The memory is set to zero.
   - If `nmemb` or `size` is `0`, then `_calloc` returns `NULL`.
   - If `malloc` fails, the `_calloc` returns `NULL`.

## 3-array_range.c
   A function that creates an array of integers.
   - Prototype: int *array_range(int min, int max);
   - The array created should contain all the values from min (included)
   to max (included), ordered from min to max
   - Return the pointer to the newly created array
   - If `min > max`, return `NULL`
   - If `malloc` fails, return `NULL`

## 100-realloc.c
   - Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`
   - where `ptr` is a pointer to the memory previously allocated with a call to malloc: `malloc(old_size)`
   - `old_size` is the size, in bytes, of the allocated space for `ptr`
   - `new_size` is the new size, in bytes of the new memory block
   - The contents will be copied to the newly allocated space,
   in the range from the start of ptr up to the minimum of the old and new sizes
   - If `new_size > old_size`, the “added” memory will not be initialized
   - If `new_size == old_size` do not do anything and return `ptr`
   - If `ptr` is `NULL`, then the call is equivalent to `malloc(new_size)`,
   for all values of `old_size` and `new_size`
   - If `new_size == 0`, and `ptr` is not `NULL`,
   then the call is equivalent to `free(ptr)`. Return `NULL`
