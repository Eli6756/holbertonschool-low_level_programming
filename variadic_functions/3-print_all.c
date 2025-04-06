#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints any type of argument passed
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str, *sep = "";

va_start(args, format);

while (format && format[i])
{
if (format[i] == 'c')
{
printf("%s%c", sep, va_arg(args, int));
}
else if (format[i] == 'i')
{
printf("%s%d", sep, va_arg(args, int));
}
else if (format[i] == 'f')
{
printf("%s%f", sep, va_arg(args, double));
}
else if (format[i] == 's')
{
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", sep, str);
}
else
{
i++;
continue;
}
sep = ", ";
i++;
}

va_end(args);
printf("\n");
}
