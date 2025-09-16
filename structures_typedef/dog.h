#ifndef DOG_H
#define DOG_H

#include <stddef.h>	/* for NULL */

/**
 * struct dog - Information about a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Prototype of init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
