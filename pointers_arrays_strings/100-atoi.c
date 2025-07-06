#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int seen_digit = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0') * sign;
seen_digit = 1;
if (sign < 0 && result > 0)  /* overflow check */
return (result * -1);
if (sign > 0 && result < 0)  /* overflow check */
return (result);
}
else if (seen_digit)
break;
i++;
}

return (result);
}
