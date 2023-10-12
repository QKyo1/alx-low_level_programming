#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_name - task name
* @name: bla bla
* @f: n
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
exit(1);
f(name);
}
