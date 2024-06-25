#include <stdio.h>

/**
 * main - finds and prints the sum of even-valued fibonacci numbers !> 4000000
 *
 * Return: 0
 */

int main(void)
{
	long fibonacci0, fibonacci1, count, temp, sum;

	fibonacci0 = 0;
	fibonacci1 = 1;
	sum = 0;

	for (count = 2; count < 51; count++)
	{
		temp = fibonacci1;
		fibonacci1 += fibonacci0;
		fibonacci0 = temp;

		if (fibonacci1 < 4000000)
		{
			if ((fibonacci1 % 2) == 0)
				sum += fibonacci1;
		}
	}
	printf("%ld\n", sum);

	return (0);
}
