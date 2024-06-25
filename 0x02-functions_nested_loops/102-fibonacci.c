#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers, starting with 1 an 2
 *
 * Return: 0
 */

int main(void)
{
	long fibonacci0, fibonacci1, count, temp;

	fibonacci0 = 0;
	fibonacci1 = 1;

	for (count = 2; count <= 50; count++)
	{
		temp = fibonacci1;
		fibonacci1 += fibonacci0;
		fibonacci0 = temp;
		if (count < 50)
			printf("%ld, ", fibonacci1);
	}
		printf("%ld\n", fibonacci1);
}
