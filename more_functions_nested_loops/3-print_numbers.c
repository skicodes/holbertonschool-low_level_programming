#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by a new line
 *
 * You can only use _putchar twice in the code.
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
