#include "main.h"

/**
 * print_binary - converts a number from base 10 to base 2
 * @n: given number
 */

void print_binary(unsigned long int n)
{
	unsigned long h;

if (n == 0)
_putchar('0');
else if (n == 1)
_putchar('1');
else
{
h = n >> 1;
h = h << 1;
if (h != n)
{
print_binary(n >> 1);
_putchar('1');
}
else
{
print_binary(n >> 1);
_putchar('0');
}
}
}
