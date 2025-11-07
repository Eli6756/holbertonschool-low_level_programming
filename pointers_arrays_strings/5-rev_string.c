#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: The string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
int i = 0, j;
char temp;

/* Find length of string */
while (s[i] != '\0')
{
i++;
}

/* Swap characters from start and end */
for (j = 0; j < i / 2; j++)
{
temp = s[j];
s[j] = s[i - j - 1];
s[i - j - 1] = temp;
}
}
