#include <stdio.h>
#include <stdlib.h>

/**
 * main - add numbers
 * @argc: argument
 * @argv: array
 * Return: 0-1
 */

int main(int argc, char **argv)
{
int x, y, sum;
sum = 0;
for (x = 1; x < argc; x++)
{
y = atoi(argv[x]);
if (**argv != '0' && y == 0)
{
printf("Error\n");
return (1);
}
sum += y;
}
printf("%d\n", sum);
return (0);
}
