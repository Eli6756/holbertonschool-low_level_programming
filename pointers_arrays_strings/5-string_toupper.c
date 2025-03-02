#include "main.h"

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase
 * @str: The string to modify
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr -= 32; /* Convert lowercase to uppercase */
}
ptr++;
}

return str;
}
