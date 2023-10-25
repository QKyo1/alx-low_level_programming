#include "main.h"

/**
 * _strlen_recursion - Returns recursion
 * @s: string
 * Return: string
 */

int _strlen_recursion(char *s)
{
int longit = 0;
if (*s)
{
longit++;
longit += _strlen_recursion(s + 1);
}
return (longit);
}
