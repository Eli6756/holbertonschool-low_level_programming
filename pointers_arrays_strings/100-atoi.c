#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int i = 0, sign = 1, num = 0, started = 0;

while (s[i] != '\0')
{
if (s[i] == '-')  /* Count negatives */
sign *= -1;

if (s[i] >= '0' && s[i] <= '9')  /* If it's a number */
{
num = num * 10 + (s[i] - '0');  /* Convert character to integer */
started = 1;  /* Mark that number conversion has started */
}
else if (started)  /* Stop conversion if non-numeric char appears after numbers */
break;

i++;
}

return (num * sign);  /* Apply sign and return result */
}
