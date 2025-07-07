#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: pointer to the resulting string
 */
char *rot13(char *str)
{
int i, j;
char *input  = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == input[j])  /* <-- only one if */
{
str[i] = output[j];
break;
}
}
}

return (str);
}
