#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *str;

str = "0123456789";  /* Length is 10 (even), should print "56789" */
puts_half(str);

str = "123456789";   /* Length is 9 (odd), should print "56789" */
puts_half(str);

return (0);
}
