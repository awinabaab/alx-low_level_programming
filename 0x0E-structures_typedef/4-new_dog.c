#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Dog's owner
 *
 * Return: Pointer to new dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = _strlen(name) + 1;
	int owner_len = _strlen(owner) + 1;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name = malloc(sizeof(char) * name_len);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);

	dog->owner = malloc(sizeof(char) * owner_len);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}

/**
 * _strlen - Finds the length of @s
 * @s: String
 *
 * Return: Length of @s
 */

int _strlen(char *s)
{
	int length = 0;

	for (; *s; s++)
		length++;

	return (length);
}

/**
 * _strcpy - Copies a string pointed to by @src to @dest
 * @dest: Destination
 * @src: Source
 *
 * Return: Pointer to @dest
 */

void _strcpy(char *dest, char *src)
{
	for (; *src; dest++, src++)
		*dest = *src;
	*dest = '\0';
}
