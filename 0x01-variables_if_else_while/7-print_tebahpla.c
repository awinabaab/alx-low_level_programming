#include <stdio.h>

/**
 * main - Prints the lowercase alphabets in reverse
 *
 * Return: (0)
 */

int main(void)
{
	for (char alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
