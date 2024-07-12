#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments it receives
 * @argv: Array of command line arguments
 * @argc: Size of @argv or Number of command line arguments
 *
 * Return: (0)
 */

int main(int argc, char **argv)
{
	int sub;

	for (sub = 0; sub < argc; sub++)
		printf("%s\n", argv[sub]);
	return (0);
}
