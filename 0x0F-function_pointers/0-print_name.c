#include <function_pointers.h>
#include <stdio.h>
#include <stdlib.h>
/**
* print_name - task name
* @name: bla bla
* @f: n
* Return: 0
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
};
