#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long fibonacci1, fibonacci2, temp;
	unsigned long fibonacci01, fibonacci02, fibonacci11, fibonacci12;

	fibonacci1 = 1;
	fibonacci2 = 2;
	printf("%lu, %lu", fibonacci1, fibonacci2);
	for (count = 3; count < 92; count++)
	{
		temp = fibonacci2;
		fibonacci2 += fibonacci1;
		fibonacci1 = temp;
		if (count < 92)
			printf(", %lu", fibonacci2);
	}
	fibonacci01 = fibonacci1 / 1000000000;
	fibonacci02 = fibonacci1 % 1000000000;
	fibonacci11 = fibonacci2 / 1000000000;
	fibonacci12 = fibonacci2 % 1000000000;
	for (count = 92; count < 99; count++)
	{
		fibonacci11 = fibonacci11 + fibonacci01;
		fibonacci01 = fibonacci11 - fibonacci01;
		fibonacci12 = fibonacci12 + fibonacci02;
		fibonacci02 = fibonacci12 - fibonacci02;
		printf(", %lu", fibonacci11 + (fibonacci12 / 1000000000));
		printf("%lu", fibonacci12 % 1000000000);
	}
	printf("\n");
	return (0);
}
