#include <stdarg.h>
#include "variadic_function.h"
/**
* sum_them_all - task name
* @n: int
* Return: 0
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int x;
int y = 0;
va_list args;
if (n == 0)
return (0);
va_start(args, n);
for (x = 0; x < n; x++)
y += va_arg(args, int);
return (y);
}
