#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the opcodes of its main function
 * @argv: Array of command line arguments
 * @argc: Size of @argv
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int op_bytes = atoi(argv[1]);
	int sub;
	char *op_code = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (op_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (sub = 0; sub < op_bytes; sub++)
	{
		if (sub == op_bytes - 1)
		{
			printf("%02hhx\n", op_code[sub]);
			break;
		}
		printf("%02hhx ", op_code[sub]);
	}

	return (0);
}
