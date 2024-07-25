#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argv: Array of command line arguments
 * @argc: Size of @argv
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*op_func)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_func(num1, num2));
	return (0);
}
