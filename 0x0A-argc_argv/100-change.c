#include <stdio.h>
#include <stdlib.h>

/**
 * change - a recursive * operation
 * @x: the given number
 * Return: 0
 */

int change(int x)
{
if (x / 25 > 0)
return (x / 25 + change(x % 25));
else if (x / 10 > 0)
return (x / 10 + change(x % 10));
else if (x / 5 > 0)
return (x / 5 + change(x % 5));
else if (x / 2 > 0)
return (x / 2 + change(x % 2));
else if (x / 1 > 0)
return (x / 1);
return (0);
}

/**
 * main - calculates the amount of change
 * @argc: number of given arguments
 * @argv: arguments vector
 * Return: 0 - 1
 */

int main(int argc, char **argv)
{
int i, j;
if (argc != 2)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
if (i <= 0)
{
printf("0\n");
return (0);
}
j = change(i);
printf("%d\n", j);
return (0);
}
