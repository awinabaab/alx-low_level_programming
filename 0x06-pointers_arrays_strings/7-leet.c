#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: pointer to @s
 */

char *leet(char *s)
{
	int sub, encoder;

	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	for (sub = 0; s[sub] != '\0'; sub++)
		for (encoder = 0; encoder < 10; encoder++)
			if (s[sub] == letters[encoder])
				s[sub] = numbers[encoder];

	return (s);
}
