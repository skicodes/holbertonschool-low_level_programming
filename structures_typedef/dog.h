#ifndef DOG_H
#define DOG_H

#include <stddef.h>  /* for NULL */

/**
 * struct dog - Information about a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: Represents a dog with its basic info.
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
