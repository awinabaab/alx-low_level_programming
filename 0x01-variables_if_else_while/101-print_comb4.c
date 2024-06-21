#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits
 * numbers must be separated by a comma(,), followed by a space
 * the three digits must be different
 * print the smallest combination of three digits
 * puctchar is allowed; maximum size times
 *
 * Return: (0)
 */

int main(void)
{
	int digit_one;
	int digit_two;
	int digit_three;

	for (digit_one = 48; digit_one <= 57; digit_one++)
	{
		for (digit_two = 48; digit_two <= 57; digit_two++)
		{
			for (digit_three = 48; digit_three <= 57; digit_three++)
			{
				if (digit_three > digit_two && digit_two > digit_one)
				{
					putchar(digit_one);
					putchar(digit_two);
					putchar(digit_three);

					if (digit_one < 55 || digit_two < 56 || digit_three < 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
