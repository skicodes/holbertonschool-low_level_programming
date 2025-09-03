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
		if (s[i] == '-' && !started)
			sign *= -1;
		else if (s[i] == '+' && !started)
			;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;

			/* Build the number carefully */
			if (result > (2147483647 - (s[i] - '0')) / 10)
			{
				/* handle overflow for INT_MAX/INT_MIN */
				if (sign == 1)
					return (2147483647);
				else
					return (-2147483648);
			}

			result = result * 10 + (s[i] - '0');
		}
		else if (started)
			break;

		i++;
	}

	return (sign * result);
}
