#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')  /* Iterate until the null terminator */
{
length++;
s++;
}

return (length);
}
