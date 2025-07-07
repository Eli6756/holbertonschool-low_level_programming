#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1;

while (str[i] != '\0')
{
/* If current character is a separator, flag next character for capitalization */
if (
str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';'  || str[i] == '.' ||
str[i] == '!' || str[i] == '?'  || str[i] == '"' ||
str[i] == '(' || str[i] == ')'  || str[i] == '{' ||
str[i] == '}'
)
{
capitalize_next = 1;
}
else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;  /* convert to uppercase */
capitalize_next = 0;
}
else
{
capitalize_next = 0;
}

i++;
}

return (str);
}
