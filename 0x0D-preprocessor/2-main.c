#include <stdio.h>

/**
 * main - Prints the name of the file it was compiled from,
 * followed by a new line
 *
 * Return: */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
