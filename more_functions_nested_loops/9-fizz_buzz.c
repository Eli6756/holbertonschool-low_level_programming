#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers from 1 to 100 with Fizz, Buzz, and FizzBuzz
 * replacements based on divisibility rules.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);

if (i < 100) /* Print a space after each number except the last one */
printf(" ");
}

printf("\n"); /* Print a new line at the end */
return (0);
}
