#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number to search for bit
 * @index: Index of bit to be returned
 *
 * Return: Value of bit @index of @n
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	if (!(n & (1 << index)))
		return (0);

	return (1);
}
