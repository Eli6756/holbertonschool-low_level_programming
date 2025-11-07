#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: The string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
int length = 0;
int start;

/* Find the length of the string */
while (str[length] != '\0')
{
length++;
}

/* Determine starting point */
if (length % 2 == 0)
start = length / 2;
else
start = (length - 1) / 2 + 1;

/* Print from start to end */
while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}
_putchar('\n');
}
