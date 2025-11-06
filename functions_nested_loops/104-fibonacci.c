#include <stdio.h>

#define BASE 1000000000UL  /* 1e9 */
#define FIRST 1UL
#define SECOND 2UL

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma and a space, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long a_hi = 0UL, a_lo = FIRST;
unsigned long b_hi = 0UL, b_lo = SECOND;
unsigned long next_hi, next_lo;
int i;

/* print first number */
printf("%lu", a_lo);

/* print numbers 2..98 */
for (i = 2; i <= 98; i++)
{
/* print separator */
printf(", ");

/* print current b (either with high part or only low part) */
if (b_hi == 0UL)
printf("%lu", b_lo);
else
/* print high part then low part padded with 9 digits */
printf("%lu%09lu", b_hi, b_lo);

/* compute next = a + b (low + low, carry to high) */
next_lo = a_lo + b_lo;
next_hi = a_hi + b_hi;
if (next_lo >= BASE)
{
next_lo -= BASE;
next_hi += 1UL;
}

/* shift: a <- b, b <- next */
a_hi = b_hi;
a_lo = b_lo;
b_hi = next_hi;
b_lo = next_lo;
}

printf("\n");
return (0);
}
