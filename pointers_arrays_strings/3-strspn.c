#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the main string to check
 * @accept: the set of characters to match
 *
 * Return: number of bytes in the initial segment of @s
 * consisting only of characters from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found;

	while (*s != '\0')
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
		s++;
	}

	return (count);
}
