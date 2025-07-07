#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: the number of rows (and columns) in the square matrix
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];             /* Top-left to bottom-right */
sum2 += a[i * size + (size - 1 - i)];/* Top-right to bottom-left */
}

printf("%d, %d\n", sum1, sum2);
}
