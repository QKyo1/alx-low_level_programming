#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints numbers
* @separator: filler between nthe numbers
* @n: int
* Return: 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int x;
va_start(nums, n);
for (x = 0; x < n; x++)
{
printf("%d", va_arg(nums, int));
if (x != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(nums);
}
