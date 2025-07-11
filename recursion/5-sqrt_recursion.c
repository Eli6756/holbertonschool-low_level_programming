#include "main.h"

/**
 * sqrt_helper - helps find natural square root recursively
 * @n: the number to find the square root of
 * @i: the current guess
 *
 * Return: natural square root or -1 if none
 */
int sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: natural square root or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_helper(n, 0));
}
