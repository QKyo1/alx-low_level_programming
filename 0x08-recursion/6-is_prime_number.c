#include "main.h"

int actual_prime(int x, int y);

/**
* is_prime_number - function
* @n: input
* Return: 1 if x is a prime number, 0 if not
*/

int is_prime_number(int x)
{
if (x <= 1)
return (0);
return (actual_prime(x, x - 1));
}

/**
* actual_prime - function 2
* @x: input 2
* @y: input 3
* Return: 1 if n is prime, 0 if not
*/

int actual_prime(int x, int y)

{
if (y == 1)
return (1);
if (x % y == 0 && y > 0)
return (0);
return (actual_prime(x, y - 1));
}
