#include <stdio.h>

/**
 * main - Fizz-Buzz test for numbers 1 to 100
 *
 * Return: (0)
 */

int main(void)
{
	int numbers, limit = 100;

	for (numbers = 1; numbers < (limit + 1); numbers++)
	{
		if (numbers < limit)
		{
			if (((numbers % 5) == 0) && ((numbers % 3) == 0))
				printf("FizzBuzz ");
			else if ((numbers % 5) == 0)
				printf("Buzz ");
			else if ((numbers % 3) == 0)
				printf("Fizz ");
			else
				printf("%d ", numbers);
		}
		else
		{
			if (((numbers % 5) == 0) && ((numbers % 3) == 0))
				printf("FizzBuzz");
			else if ((numbers % 5) == 0)
				printf("Buzz");
			else if ((numbers % 3) == 0)
				printf("Fizz");
			else
				printf("%d", numbers);
		}
	}
	putchar('\n');
	return (0);
}
