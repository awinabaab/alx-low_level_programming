#include <unistd.h>

/**
 * main - Prints a phrase string without using prinf() of puts()
 *
 * Return: 1
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, 59);
	return (1);
}
