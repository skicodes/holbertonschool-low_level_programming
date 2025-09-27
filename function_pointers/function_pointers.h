#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - Calls a function with a given name
 * @name: The name to be used as parameter
 * @f: Pointer to a function that takes a char * as parameter
 *
 * Description: This function passes the name to the function pointed to by f.
 */
void print_name(char *name, void (*f)(char *));

int _putchar(char c);

#endif /* FUNCTION_POINTERS_H */
