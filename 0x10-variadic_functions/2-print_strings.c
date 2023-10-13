#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - task name
* @separator: fwa9l ya5
* @n: s
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list strings;
char *w;
va_start(strings, n);
for (x = 0; x < n; x++)
{
w = va_arg(strings, char *);
if (w != NULL)
printf("%s", w);
else
printf("(nil)");
if (x < n - 1 && separator)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
