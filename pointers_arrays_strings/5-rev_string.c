#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: the string to reverse
 */
void rev_string(char *s)
{
int i = 0, j = 0;
char temp;

/* Find the length of the string */
while (s[j] != '\0')
{
j++;
}
j--; /* Set j to the index of the last character */

/* Swap characters from both ends moving towards the middle */
while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}
