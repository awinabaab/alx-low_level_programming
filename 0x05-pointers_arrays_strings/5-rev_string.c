#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0;
	char *start = s, *end, temp;

	while (s[length] != '\0')
		length++;


	for (end = s + length - 1; start < end; start++, end--)
	{
		temp = *start;
		*start = *end;
		*end = temp;
	}
}
