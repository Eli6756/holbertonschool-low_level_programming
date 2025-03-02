#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char s1[98];  /* Buffer large enough to hold the string */
char *ptr;

ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");

printf("%s", s1);   /* Print copied string */
printf("%s", ptr);  /* Print returned pointer (should be same as s1) */

return (0);
}
