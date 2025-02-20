#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++) /* Print 0-9 */
{
putchar(num + '0');
}

for (num = 0; num < 6; num++) /* Print a-f */
{
putchar(num + 'a');
}

putchar('\n');

return (0);
}
