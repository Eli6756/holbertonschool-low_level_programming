#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = _isalpha('H');
_putchar(r + '0');
r = _isalpha('o');
_putchar(r + '0');
r = _isalpha(108); /* ASCII value of 'l' */
_putchar(r + '0');
r = _isalpha(';'); /* Not a letter */
_putchar(r + '0');
_putchar('\n');
return (0);
}
