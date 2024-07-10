#include "main.h"

int check(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String
 *
 * Return: 1 if @s is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;

	if (length ==  0 || length == 1)
		return (1);

	return check(s, 0 , length - 1);
}

/**
 * check - Checks if a String is a palindrome
 * @s: String
 * @start: Beginning of @s
 * @end: End of @s
 *
 * Return: 1 if @s is a palindrome, otherwise 0
 */

int check(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] == s[end])
		return (check(s, start + 1, end - 1));
	else
		return (0);
}
