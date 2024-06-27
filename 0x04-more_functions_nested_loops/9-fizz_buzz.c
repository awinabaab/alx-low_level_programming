#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Description: Prints the numbers from 1 t0 100
 * but for multiples of 3 print Fizz instead of the number
 * and for multiples of 5 print Buzz instead of the number
 * for numbers which are multiples of both 3 and 5 print FizzBuzz
 * 
 * Return: (0)
 */

int main(void)
{
	int numbers;
	for (numbers = 1; numbers < 101; numbers++)
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
	putchar('\n');

	return (0);
}
