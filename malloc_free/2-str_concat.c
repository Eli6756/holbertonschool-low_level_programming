#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, len1 = 0, len2 = 0;
char *result;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;
while (s2[len2])
len2++;

result = malloc(sizeof(char) * (len1 + len2 + 1));
if (result == NULL)
return (NULL);

for (i = 0; i < len1; i++)
result[i] = s1[i];
for (j = 0; j < len2; j++, i++)
result[i] = s2[j];

result[i] = '\0';
return (result);
}
