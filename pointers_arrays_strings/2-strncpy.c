#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of bytes to copy
 *
 * Return: Pointer to the resulting string `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

/* Copy characters from src to dest up to n bytes */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

/* If src is smaller than n, fill the rest with null bytes */
for (; i < n; i++)
{
dest[i] = '\0';
}

return dest;
}
