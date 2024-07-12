#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins
 * to make change for an amount of money
 * @argv: Array of command line arguments
 * @argc: Size of @argc or Number of command line arguments
 *
 * Return: 1 if @argc != 1, otherwise 0
 */

int main(int argc, char **argv)
{
	int sub, change, coins = 0;
	int cents[] = {25, 10, 5, 2, 1};

	change = atoi(argv[argc - 1]);
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (sub = 0; change > 0; sub++)
	{
		if (change < 0)
			printf("0\n");
		if (change >= cents[sub])
		{
			coins += (change / cents[sub]);
			change = (change % cents[sub]);
		}
	}
	printf("%d\n", coins);
	return (0);
}
