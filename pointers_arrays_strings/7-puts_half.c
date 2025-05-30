#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
int length = 0, start, i;

/* Find the length of the string */
while (str[length] != '\0')
length++;

/* Calculate the starting index for the second half */
if (length % 2 == 0)
start = length / 2;
else
start = (length + 1) / 2;

/* Print the second half of the string */
for (i = start; str[i] != '\0'; i++)
_putchar(str[i]);

_putchar('\n'); /* Print newline at the end */
}
