#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long fibonacci0, fibonacci1, temp;

	fibonacci0 = 0;
	fibonacci1 = 1;

	for (count = 2; count < 99; count++)
	{
		temp = fibonacci1;
		fibonacci1 += fibonacci0;
		fibonacci0 = temp;
		if (count < 99)
			printf("%lu, ", fibonacci1);
	}
	printf("%lu\n", fibonacci1);

	return (0);
}
