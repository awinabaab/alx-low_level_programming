#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argv: Array of command line arguments
 * @argc: Size of @argv or Number of command line arguments
 *
 * Return: (0)
 */

int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
