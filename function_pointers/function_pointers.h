#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * function_pointers.h - Header file for function pointer utilities
 * @f: Function pointer to be used in functions
 */

void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#endif /* FUNCTION_POINTERS_H */
