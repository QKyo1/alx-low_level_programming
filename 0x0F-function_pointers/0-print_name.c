#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints the name
 * @name: name
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f = NULL)
exit (1);
f(name);
}
