#include "main.h"

int check(char *s, int start, int end);
int _strlen(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String
 *
 * Return: 1 if @s is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int length = _strlen(s) - 1;

	if (length ==  0 || length == 1)
		return (1);

	return (check(s, 0, length));
}

/**
 * _strlen - Gets the length of a string
 * @s: String
 *
 * Return: Length of @s
 */

int _strlen(char *s)
{
	if (*s)
		return (_strlen(s + 1) + 1);
	return (0);
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
