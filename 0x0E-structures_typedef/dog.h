#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog structure
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of Dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif /* ifndef DOG_H */
