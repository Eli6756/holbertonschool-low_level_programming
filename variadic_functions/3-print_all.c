#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on a format string
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *sep = "", *str;

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
printf("%s%s", sep, str ? str : "(nil)");
break;
}
sep = (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's') ? ", " : sep;
i++;
}
va_end(args);
printf("\n");
}
