#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	unsigned int index;

	for (sub = 1; sub < argc; sub++)
	{
		for (index = 0; index < strlen(argv[sub]); index++)
			if (argv[sub][index] < 48 || argv[sub][index] > 57)
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[sub]);
	}
	printf("%d\n", sum);
	return (0);
}
