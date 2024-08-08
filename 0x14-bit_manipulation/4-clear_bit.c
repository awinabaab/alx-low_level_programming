#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to number to search for index
 * @index: Index of @n to be set to 0
 *
 * Return: 1 if it worked, -1 if an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
