#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using the function passed
 * @name: name to print
 * @f: pointer to function that takes a char * and returns void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
