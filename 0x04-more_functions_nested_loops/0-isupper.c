#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 *
 * Return: 1 if @c is uppercase, else 0
 */

int _isupper(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	return (0);
}
