#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the integer array.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]); /* Print the number */

if (i < n - 1) /* Print comma and space except for the last element */
printf(", ");
}

printf("\n"); /* Print newline at the end */
}
