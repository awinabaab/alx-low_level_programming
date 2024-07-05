#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to be capitalized
 *
 * Return: Pointer to @str
 */

char *cap_string(char *str)
{
	int sub, check;
	char delimiter[] = {' ', 10, '\t', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	for (sub = 0; str[sub] != '\0'; sub++)
	{
		for (check = 0; (str[sub] == delimiter[check]) &&
				(str[sub + 1] > 96 && str[sub + 1] < 123); check++)
		{
			str[sub + 1] -= 32;
		}
	}

	return (str);
}
