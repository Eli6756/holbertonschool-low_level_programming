#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using the '#' character.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
int i, j;

if (size > 0)
{
for (i = 1; i <= size; i++) /* Loop through rows */
{
for (j = 0; j < (size - i); j++) /* Print leading spaces */
_putchar(' ');

for (j = 0; j < i; j++) /* Print '#' */
_putchar('#');

_putchar('\n'); /* Move to the next line */
}
}
else
{
_putchar('\n'); /* Print only a newline if size <= 0 */
}
}
