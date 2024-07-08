#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: Two-dimensional array to be printed as chessboard
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int index_1d, index_2d;

	for (index_1d = 0; index_1d < 8; index_1d++)
	{
		for (index_2d = 0; index_2d < 8; index_2d++)
			_putchar(a[index_1d][index_2d]);
		_putchar('\n');
	}
}
