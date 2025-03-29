#include "main.h"

/**
 * _sqrt_helper - recursively finds the natural square root of a number
 * @n: the number to find the square root of
 * @i: the current guess
 *
 * Return: natural square root or -1 if none exists
 */
int _sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);  /* No natural square root */
if (i * i == n)
return (i);   /* Found the square root */
return (_sqrt_helper(n, i + 1));  /* Try next guess */
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}
