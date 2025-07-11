#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to compute factorial for
 *
 * Return: factorial of n, or -1 if n < 0 to indicate an error
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
