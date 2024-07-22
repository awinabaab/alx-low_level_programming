#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Dog structure
 * @name: Dog name to initialize
 * @age: Dog age to initialize
 * @owner: Name of dog's owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
