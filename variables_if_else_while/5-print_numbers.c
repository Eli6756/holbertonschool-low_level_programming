#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
putchar(num + '0');  /* convert int to ASCII digit */

putchar('\n');
return (0);
}
