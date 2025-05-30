#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;
int capitalize = 1; /* Flag to capitalize the next letter */
int j;

/* List of word separators */
char separators[] = " \t\n,;.!?\"(){}";

while (str[i])
{
/* Capitalize the character if it's a letter and needs capitalization */
if (capitalize && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32; /* Convert lowercase to uppercase */
}

/* Check if the character is a separator */
capitalize = 0;
for (j = 0; separators[j] != '\0'; j++)
{
if (str[i] == separators[j])
{
capitalize = 1; /* Set flag to capitalize the next letter */
break;
}
}

i++;
}

return str;
}
