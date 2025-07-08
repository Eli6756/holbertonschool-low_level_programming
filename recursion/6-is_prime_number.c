#include "main.h"

/**
 * is_prime_helper - checks if n is divisible by any number <= i
 * @n: number to check
 * @i: current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
if (n % i == 0)
return (0);
if (i * i > n)
return (1);
return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_helper(n, 2));
}
