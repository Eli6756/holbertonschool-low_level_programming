#include "main.h"

/**
 * check_prime - helper function to check if n is divisible by any number <= i
 * @n: the number to check
 * @i: the divisor being tested
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i)
{
if (i * i > n)
return (1); /* No divisor found, so it's prime */
if (n % i == 0)
return (0); /* Divisible, not a prime */
return (check_prime(n, i + 1)); /* Try next divisor */
}

/**
 * is_prime_number - checks if a number is a prime
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}
