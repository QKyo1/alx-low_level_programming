
#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
* _sqrt_recursion - function 1
* @x: input 1
* Return: square root
*/

int _sqrt_recursion(int x)
{
if (x < 0)
return (-1);
return (actual_sqrt_recursion(x, 0));
}

/**
* actual_sqrt_recursion - function 2
* @y: input 2
* @i: iterator
* Return: square root
*/

int actual_sqrt_recursion(int y, int i)
{
if (i * i > y)
return (-1);
if (i * i == y)
return (i);
return (actual_sqrt_recursion(y, i + 1));
}
