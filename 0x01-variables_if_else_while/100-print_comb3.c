#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two digits
 * the two digits must be different
 * 01 and 10 are considered the same combination of two digits 0 and 1
 * print only the smallest combination of two digits
 * putchar is allowed; maximum of five times
 *
 * Return: (0)
 */

int main(void)
{
	int digit_one;
	int digit_two;

	for (digit_one = 48; digit_one <= 57; digit_one++)
	{
		for (digit_two = 48; digit_two <= 57; digit_two++)
		{
			if (digit_two > digit_one)
			{
				putchar(digit_one);
				putchar(digit_two);

				if (digit_one < 56 || digit_two < 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
