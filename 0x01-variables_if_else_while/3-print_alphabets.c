#include <stdio.h>

/**
 * main - Prints alphabets in both lowercase and uppercase
 *
 * Return: (0)
 */

int main(void)
{
	for (char alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (char alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
