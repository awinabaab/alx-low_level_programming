#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the name of the program
 * @argv: Array of command line arguments
 * @argc: Size of @argv or number of command line arguments
 *
 * Return: (0);
 */

int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
