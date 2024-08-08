#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another
 * @n: Number
 * @m: Number to flip to
 *
 * Return: Number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int bit_op = (n ^ m);

	while (bit_op)
	{
		count += (bit_op & 1);
		bit_op >>= 1;
	}

	return (count);
}
