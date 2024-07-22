#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * print_dog - Prints a struct dog
 * @d: Struct to be printed
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!(d->name) || strlen(d->name) < 1)
		printf("Name: %s\n", "(nil)");
	else
		printf("Name: %s\n", d->name);

	if (!(d->age))
		printf("Age: %s\n", "(nil)");
	else
		printf("Age: %.6f\n", d->age);

	if (!(d->owner) || strlen(d->owner) < 1)
		printf("Owner: %s\n", "(nil)");
	else
		printf("Owner: %s\n", d->owner);
}
