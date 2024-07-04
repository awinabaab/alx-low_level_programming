# C - More pointers, arrays and strings
	- What are pointers and how to use them.
	- What are arrays and how to use them.
	- What are the differences between pointers and arrays.
	- How to use strings and how to manipulate them.
	- Scope variables.

## 0-strcat.c
	- A function that concatenates two strings.
	- Prototype: `char *_strcat(char *dest, char *src);`.
	- The function appends the `src` string to the `dest` string,
	overwriting the terminating null byte (`\0`) at the end of dest,
	and then adds a terminating null byte.
	- Returns a pointer to `dest`.
	- Similar to the C STL `strcat` function.

## 1-strncat.c
	- A function that concatenates two strings.
	- Prototype: `char *_strncat(cat *dest, char *src, int n);`.
	- The function appends at most `n` bytes of the `src` string to the `dest string.
	- `src` does not need to be null-terminated if it contains `n` or more bytes.
	- Returns a pointer to the resulting string `dest`.
	- Similar to the C STL `strncat` function.

## 2-strncpy.c
	- A function that copies a string.
	- Prototype: `char *_strncpy (char *dest, char *src, int n);`.
	- Similar to the C STL `strncpy` function.

## 3-strcmp.c
	- A function that compares two strings.
	- Prototype: int *_strcmp(char *s1, char *s2);`.
	- Similar to C STL `strcmp`.

## 4-rev_array.c
	- A function that reverses the content of an array of integers.
	- Prototype: `void revers_array(int *a, int n);`.
	- Where `n` is the number of elements of the array.

## 5-string_toupper.c
	- A fucntion that changes all lowercase letters of a string to uppercase.
	- Prototype: `char *string_toupper(char *);`.

## 7-leet.c
	- A function that encodes  a string into `1337`.
	- Prototype: `char *leet(char *);`.
	- Letters `a` and `A` will be replaced by `4`.
	- Letters `e` and `E` will be replaces by `3`.
	- Letters `o` and `O` will be replaced by `0`.
	- Letters `t` and `T` will be replaces by `7`.
	- Letters `l` and `L` will be replaced by `1`.
