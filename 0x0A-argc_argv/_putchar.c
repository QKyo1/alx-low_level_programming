#include <stdio.h>
#include "main.h"


/**
 * _putchar - writes character
 * @c: character
 * Return: 1, -1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
