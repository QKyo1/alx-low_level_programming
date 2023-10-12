#include<function_pointers.h>
#include<stdio.h>

/**
* print_name - task name
* @name: bla bla
* @f: ok
* return - 0
*/

void print_name(char *name, void (*f)(char *));
{
if (name == NULL || f == NULL)
return;
f(name);
}
