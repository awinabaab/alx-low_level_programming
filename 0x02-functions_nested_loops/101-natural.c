#include <stdio.h>

/**
 * main - computes and prints the multiples of 3 or 5 below 1024
 *
 * Return: (0)
 */

int main(void)
{
	int count, sum;

	for (count = 0; count < 1024; count++)
	{
		if (((count % 3) == 0) || ((count % 5) == 0))
			sum += count;
	}
	printf("%d\n", sum);

	return (0);
}
