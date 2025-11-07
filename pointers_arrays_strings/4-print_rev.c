#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
int length = 0;

/* Find the length of the string */
while (s[length] != '\0')
{
length++;
}

/* Print characters in reverse */
while (length > 0)
{
_putchar(s[length - 1]);
length--;
}

_putchar('\n');
}
