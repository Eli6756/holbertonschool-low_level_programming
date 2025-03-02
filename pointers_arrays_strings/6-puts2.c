#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 *         starting with the first character.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0') /* Loop through the string */
{
_putchar(str[i]); /* Print the character */
i += 2; /* Move to the next alternate character */
}

_putchar('\n'); /* Print newline at the end */
}
