#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - task name
* @separator: r
* @n: n
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list numbers;
va_start(numbers, n);
for (x = 0; x < n; x++)
{
printf("%d", va_arg(numbers, int));
if (x < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}
