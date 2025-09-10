#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case: end of string */
	{
		_putchar('\n');
		return;
	}

	_putchar(*s); /* print current character */
	_puts_recursion(s + 1); /* recurse with next character */
}
