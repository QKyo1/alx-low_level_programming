#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - prints strings
* @separator: filler between strings
* @n: int
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list strings;
char *c;
va_start(strings, n);
for (x = 0; x < n; x++)
{
c = va_arg(strings, char *);
if (c != NULL)
printf("%s", c);
else
printf("(nil)");
if (x < n - 1 && separator)
printf("%s", separator);
}
printf("\n");
}
