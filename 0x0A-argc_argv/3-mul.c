#include <stdio.h>
#include "main.h"

/**
 * main - multi numbers
 * @argc: argum
 * @argv: array
 * Return: 0
 */

int main(int argc, char **argv)
{
int result, x, y;
if (argc < 3)
{
printf("Error\n");
return (1);
}
x = _atoi(argv[1]);
y = _atoi(argv[2]);
result = x *y;
printf("%d\n", result);
return (0);
}
