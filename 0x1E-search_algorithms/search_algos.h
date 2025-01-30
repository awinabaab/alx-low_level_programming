#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int _linear_search(int *array, size_t size, size_t low,
		size_t high, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int _binary_search(int *array, size_t low, size_t high, int value);
int exponential_search(int *array, size_t size, int value);
int _binary_search_(int *array, size_t low, size_t high, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS */
