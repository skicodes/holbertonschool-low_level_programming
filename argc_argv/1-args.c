#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: array of arguments (unused)
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	_putchar((argc - 1) + '0');
	_putchar('\n');

	return (0);
}
