#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the number to print
 */
static void print_number(int n)
{
unsigned int num;

if (n < 0)
{
_putchar('-');
num = -(unsigned int)n;
}
else
{
num = (unsigned int)n;
}

if (num / 10)
print_number(num / 10);

_putchar((num % 10) + '0');
}

/**
 * print_to_98 - prints all integers from n to 98, followed by a new line
 * @n: the starting number
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n < 98)
{
print_number(n);
_putchar(',');
_putchar(' ');
n++;
}
print_number(98);
_putchar('\n');
}
else
{
while (n > 98)
{
print_number(n);
_putchar(',');
_putchar(' ');
n--;
}
print_number(98);
_putchar('\n');
}
}
