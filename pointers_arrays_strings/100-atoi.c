#include "main.h"
#include <limits.h>  /* For INT_MAX and INT_MIN */

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
if (s[i] == '-')  /* Handle negative sign */
sign *= -1;

if (s[i] >= '0' && s[i] <= '9')  /* If it's a digit */
{
/* Check for overflow */
if (num > (INT_MAX / 10) || (num == (INT_MAX / 10) && (s[i] - '0') > 7))
{
return (sign == 1 ? INT_MAX : INT_MIN);
}

num = num * 10 + (s[i] - '0');  /* Convert to integer */
started = 1;
}
else if (started)  /* Stop at first non-digit after a number */
break;

i++;
}

return (num * sign);
}
