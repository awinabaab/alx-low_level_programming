#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String to be searched
 * @needle: Substring to be located from @haystack
 *
 * Return: Pointer to the beginning of @needle, otherwise NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int sub, index;

	for (sub = 0; haystack[sub] != '\0'; sub++)
		for (index = 0; needle[index] != '\0'; index++)
			if (haystack[sub + index] != needle[index])
				return (needle + index);

	return (0);
}
