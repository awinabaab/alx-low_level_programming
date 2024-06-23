#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 * Description: numbers should range from 0 to 99
 * the two numbers should be separated by a space
 * all numbers should be printed with two digits. 1 should be printed as 01
 * the combination of numbers should be separated by comma (,),
 * followed by a space
 *
 * Return: (0)
 */

int main(void)
{
	int digit_one;
	int digit_two;

	for (digit_one = 0; digit_one <= 98; digit_one++)
	{
		for (digit_two = digit_one + 1; digit_two <= 99; digit_two++)
		{
			putchar((digit_one / 10) + 48);
			putchar((digit_one % 10) + 48);
			putchar(' ');
			putchar((digit_two / 10) + 48);
			putchar((digit_two % 10) + 48);

			if (digit_one < 98 && digit_two <= 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
