#include<function_pointers.h>

/**
* print_name - task name
* @name : bla bla
* @f : ok
* return - 0
*/

void print_name(char *name, void (*f)(char *));
{
if (name && f)
f(name);
}
