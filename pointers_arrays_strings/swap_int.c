#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: First integer pointer
 * @b: Second integer pointer
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
