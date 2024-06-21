#include <stdio.h>

/**
 * main - Prints alphabets in lowercase except q and e
 *
 * Return: (0)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
			continue;
		else
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
