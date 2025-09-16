#include <stdlib.h>

/**
 * _strdup - duplicates a string (like strcpy + malloc)
 * @str: string to duplicate
 *
 * Return: pointer to newly allocated string, or NULL if failed
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
