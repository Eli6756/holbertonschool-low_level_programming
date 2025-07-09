#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - Checks if a string contains only digits
 * @s: The string to check
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit(char *s)
{
int i = 0;

while (s[i])
{
if (!isdigit(s[i]))
return (0);
i++;
}
return (1);
}

/**
 * main - Adds positive numbers from command-line arguments
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int sum = 0, i;

for (i = 1; i < argc; i++)
{
if (!is_digit(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
