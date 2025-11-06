#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued Fibonacci terms
 *        not exceeding 4,000,000, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
long a = 1, b = 2, next, sum = 0;

while (b <= 4000000)
{
if (b % 2 == 0)
sum += b;

next = a + b;
a = b;
b = next;
}

printf("%ld\n", sum);
return (0);
}
