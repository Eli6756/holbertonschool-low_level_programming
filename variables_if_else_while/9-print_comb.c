#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++) /* Print 0-9 with comma and space */
{
putchar(num + '0');
if (num < 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
