#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Binary string to be converted
 *
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conversion = 0;

	if (!b)
		return (conversion);

	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		conversion <<= 1;

		if (*b == '1')
			conversion += 1;
	}

	return (conversion);
}
