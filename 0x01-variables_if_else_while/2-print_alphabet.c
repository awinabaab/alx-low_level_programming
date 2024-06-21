#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase
 *
 * Return: (0)
 */

int main(void)
{
	for (char alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
