#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('0' + j / 10);  /* tens digit */
_putchar('0' + j % 10);      /* ones digit */
}
_putchar('\n');
}
}
