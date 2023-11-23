#include <unistd.h>
#include "main.h"

/**
*_putchar - write the char to stdio out
* @c: charecter
*Return: always 0
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
