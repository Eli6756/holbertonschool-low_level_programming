#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argv; /* argv is unused */
printf("%d\n", argc - 1);
return (0);
}
