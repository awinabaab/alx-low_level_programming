#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by a comma (,), followed by a space.
 *
 * Return: (0)
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
