#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* get_op_func - function
* @s: operator
* Return: type int
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}};
int x = 0;
while (x < 5)
{
if (ops[x].op[0] == *s && strlen(s) == 1)
{
return (ops[x].f);
}
x++;
}
return (NULL);
}
