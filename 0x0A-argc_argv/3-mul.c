#include <stdio.h>
#include "main.h"

/**
 * main - multi numbers
 * @argc: argum
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
int x, y;
if (argc < 3)
{
printf("Error\n");
return (1);
}
x = _atoi(argv[1]);
y = _atoi(argv[2]);
printf("%d\n", x * y);
return (0);
}
