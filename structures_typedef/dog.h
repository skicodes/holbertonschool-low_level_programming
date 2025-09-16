#ifndef DOG_H
#define DOG_H

#include <stddef.h>  /* for NULL */

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
} dog_t;  /* typedef so we can use dog_t as a type name */

#endif /* DOG_H */
