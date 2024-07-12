#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argv: Array of command line arguments
 * @argc: Size of @argv or Number of command line arguments
 *
 * Return: 1 if command line argument is not a number
 */

int main(int argc, char **argv)
{
	int sum = 0, sub;

	for (sub = 1; sub < argc; sub++)
	{
		if (atoi(argv[sub]) < 0 || !atoi(argv[sub]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[sub]);
	}
	printf("%d\n", sum);
	return (0);
}
