#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - duplicates a string (malloc + manual copy)
 * @str: string to duplicate
 *
 * Return: pointer to new string or NULL if failed
 */
char *_strdup(char *str)
{
	int i;
	char *copy;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	copy = malloc(i + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		copy[i] = str[i];

	copy[i] = '\0';

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	if (name != NULL && dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _strdup(owner);
	if (owner != NULL && dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
