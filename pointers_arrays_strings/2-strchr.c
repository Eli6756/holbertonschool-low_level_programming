#include "main.h"
#include <stddef.h>  /* for NULL */

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to find
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}

if (c == '\0')  /* handle the case when c is '\0' */
return (s);

return (NULL);
}
