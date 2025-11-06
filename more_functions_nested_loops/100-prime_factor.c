#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long n = 612852475143UL;
unsigned long largest = 0, i;

/* Remove factors of 2 */
while (n % 2 == 0)
{
largest = 2;
n /= 2;
}

/* Check odd factors */
for (i = 3; i * i <= n; i += 2)
{
while (n % i == 0)
{
largest = i;
n /= i;
}
}

/* If n is now > 1, it itself is prime */
if (n > 1)
largest = n;

printf("%lu\n", largest);
return (0);
}
