#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *str = "_putchar";
int i = 0;

while (str[i])
{
_putchar(str[i]); /* print each character */
i++;
}

_putchar('\n'); /* print newline */
return (0);
}
