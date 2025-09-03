#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	/* find length */
	while (s[j] != '\0')
	{
		j++;
	}
	j--; /* move to last valid character */

	/* swap from start and end */
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
