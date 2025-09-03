#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		/* handle signs before the number */
		if (s[i] == '-' && !started)
			sign *= -1;
		else if (s[i] == '+' && !started)
			;
		/* if digit found */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			result = result * 10 + (s[i] - '0');
		}
		/* stop when digits end */
		else if (started)
			break;

		i++;
	}

	return (sign * result);
}
