
#include "main.h"

/**
* factorial - Main Entry
* @x: input
* Return: factorial
*/

int factorial(int x)
{
if (x < 0)
return (-1);
if (x == 0)
return (1);
return (x * factorial(x - 1));
}
