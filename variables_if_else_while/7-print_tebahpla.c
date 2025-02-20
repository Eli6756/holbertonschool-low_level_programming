#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--) /* Loop from 'z' to 'a' */
{
putchar(ch);
}

putchar('\n');

return (0);
}
