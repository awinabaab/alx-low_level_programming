#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: Data type of variable arguments
 *
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int sub = 0;
	char *string;

	va_start(args, format);
	while (format && format[sub])
	{

		switch (format[sub])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				sub++;
				continue;
		}
		if (format && format[sub + 1])
			printf(", ");
		sub++;
	}
	printf("\n");
	va_end(args);
}
