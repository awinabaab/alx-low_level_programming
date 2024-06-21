#include <stdio.h>

/**
 * main - Prints all the number of base 16 in lowercase
 *
 * Return: (0)
 */

int main(void)
{
	for (int num = 48; num <= 57; num++)
		putchar(num);
	for (char alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
