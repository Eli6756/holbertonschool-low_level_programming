#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, ten times,
 * followed by a new line.
 */
void more_numbers(void)
{
char numbers[] = "01234567891011121314\n"; /* 0-14 as string with newline */
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; numbers[j] != '\0'; j++)
_putchar(numbers[j]);  /* Use _putchar once per loop iteration */
}
}
