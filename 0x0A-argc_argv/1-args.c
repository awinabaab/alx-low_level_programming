#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed into it
 * @argv: Array of command line arguments
 * @argc: Size of @argv or Number of command line arguments
 *
 * Return: (0)
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
