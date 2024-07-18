#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Multiplies two positive numbers
 * @argv: Array of command line arguments
 * @argc: Size of argv or Number of command line arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sub;
	unsigned int index;
	unsigned long mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (sub = 1; sub < argc; sub++)
	{
		for (index = 0; index < strlen(argv[sub]); index++)
			if (argv[sub][index] < 48 || argv[sub][index] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		mul *= atoi(argv[sub]);
	}

	printf("%ld\n", mul);
	return (0);
}
