#include "main.h"

/**
 * print_number - prints a non-negative integer using _putchar
 * @n: the number to print
 */
static void print_number(int n)
{
if (n / 10)
print_number(n / 10);

_putchar((n % 10) + '0');
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: size of the table
 */
void print_times_table(int n)
{
int i, j;

if (n > 15 || n < 0)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
print_number(i * j);
if (j != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
