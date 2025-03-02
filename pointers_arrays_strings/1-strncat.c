#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes from src
 * @dest: The destination string (must have enough space)
 * @src: The source string
 * @n: The maximum number of bytes to append from src
 *
 * Return: Pointer to the resulting string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;

/* Move ptr to the end of dest */
while (*ptr)
ptr++;

/* Copy at most n bytes from src */
while (*src && n > 0)
{
*ptr++ = *src++;
n--;
}

/* Null terminate the result */
*ptr = '\0';

return dest;
}
