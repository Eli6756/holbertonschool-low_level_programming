#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer in hex and ASCII
 * @b: buffer to print
 * @size: number of bytes to print
 */
void print_buffer(char *b, int size)
{
int i, j;

if (size <= 0)
{
printf("\n");
return;
}

for (i = 0; i < size; i += 10)
{
/* Print memory address */
printf("%08x: ", i);

/* Print hex part */
for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x", b[i + j]);
else
printf("  ");

/* Add space every two bytes */
if (j % 2 != 0)
printf(" ");
}

/* Print ASCII part */
for (j = 0; j < 10 && (i + j) < size; j++)
{
char c = b[i + j];
if (c >= 32 && c <= 126)
printf("%c", c);
else
printf(".");
}
printf("\n");
}
}
