#include "main.h"

/**
 * string_nconcat - concatenates s1 and first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to use from s2
 *
 * Return: pointer to newly allocated space containing the result,
 *         or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *result;

	/* handle NULL strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calculate lengths */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n < len2)
		len2 = n;

	/* allocate memory */
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

	/* copy s1 */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	/* copy first n bytes of s2 */
	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
