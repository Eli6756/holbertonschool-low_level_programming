#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers starting with 1 and 2,
 *        separated by a comma and a space, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
long a = 1, b = 2, next;
int i;

for (i = 1; i <= 50; i++)
{
if (i == 50)
printf("%ld\n", a);
else
printf("%ld, ", a);

next = a + b;
a = b;
b = next;
}

return (0);
}
