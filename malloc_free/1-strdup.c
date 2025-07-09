#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL or malloc fails
 */
char *_strdup(char *str)
{
char *copy;
int i = 0, len = 0;

if (str == NULL)
return (NULL);

while (str[len])
len++;

copy = malloc(sizeof(char) * (len + 1));
if (copy == NULL)
return (NULL);

while (i < len)
{
copy[i] = str[i];
i++;
}
copy[i] = '\0';

return (copy);
}
