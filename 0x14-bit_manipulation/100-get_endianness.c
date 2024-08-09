#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int sb = 1;
	char *str = (char *)&sb;

	if (*str == 1)
		return (1);

	return (0);
}
