#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Checks if a string is a positive number
 * @s: The string to check
 *
 * Return: 1 if it's a number, 0 otherwise
 */
int is_number(char *s)
{
    while (*s)
    {
        if (!isdigit(*s))
            return (0);
        s++;
    }
    return (1);
}

/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
int sum = 0, i;

for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
