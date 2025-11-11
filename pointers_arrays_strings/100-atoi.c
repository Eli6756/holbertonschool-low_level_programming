#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int started = 0;

while (s[i] != '\0')
{
/* Handle sign changes */
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
started = 1;
result = (result * 10) + (s[i] - '0');
}
else if (started)
break; /* Stop converting once the number ends */
i++;
}

return (result * sign);
}
