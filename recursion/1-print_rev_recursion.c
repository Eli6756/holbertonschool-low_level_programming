#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be printed
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}

_print_rev_recursion(s + 1);  /* Move to the end of the string first */
_putchar(*s);                 /* Print characters while the stack unwinds */
}
