#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
* main - entry point
* @argc: arguments
* @argv: vector
* Return: 0
*/

int main(int argc, char **argv)
{
int x, y, z;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (((*argv[2] != '+') &&
(*argv[2] != '-') &&
(*argv[2] != '/') &&
(*argv[2] != '*') &&
(*argv[2] != '%')) ||
(strlen(argv[2]) != 1))
{
printf("Error\n");
exit(99);
}
if (*argv[3] == '0' && (*argv[2] == '/' || *argv[2] == '%'))
{
printf("Error\n");
exit(100);
}
x = atoi(argv[1]);
y = atoi(argv[3]);
z = (*get_op_func(argv[2]))(x, y);
printf("%d\n", z);
return (0);
}
