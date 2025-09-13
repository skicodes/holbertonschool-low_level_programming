#include "main.h"
#include <stdio.h>

/**
 * main - prints its own program name
 * @argc: argument count (unused)
 * @argv: argument vector (array of strings)
 * Return: 0
 */
int main(int argc, char *argv[])
{
    (void)argc;            /* mark argc as unused */
    printf("%s\n", argv[0]); /* print program name */
    return 0;
}
