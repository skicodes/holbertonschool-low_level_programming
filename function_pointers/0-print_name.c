#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name
 * @name: The name to be printed
 * @f: Pointer to a function that takes a string and returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}
