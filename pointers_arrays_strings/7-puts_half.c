#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to process
 */
void puts_half(char *str)
{
int len = 0, start;

/* Find the length of the string */
while (str[len] != '\0')
{
len++;
}

/* If odd, start at (len + 1) / 2; if even, start at len / 2 */
start = (len % 2 == 0) ? (len / 2) : ((len + 1) / 2);

while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}

_putchar('\n');
}
