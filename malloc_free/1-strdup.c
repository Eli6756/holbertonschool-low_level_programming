#include <stdlib.h>

/**
 * _strdup - Duplicates a string using malloc
 * @str: The string to duplicate
 *
 * Return: Pointer to duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i = 0, len = 0;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);

for (i = 0; i < len; i++)
dup[i] = str[i];

dup[i] = '\0';

return (dup);
}
