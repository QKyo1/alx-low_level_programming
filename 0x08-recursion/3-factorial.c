#include "main.h"


/**
 * factorial - factorial of the number
 * @n: input
 * Return: number
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
