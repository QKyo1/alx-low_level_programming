#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates array
 * @min: value
 * @max: value
 * Return: value
 */

int *array_range(int min, int max)
{
int *c;
int x = 0;
if (min > max)
return (NULL);
c = malloc(sizeof(int) * (max - min + 1));
if (c == NULL)
while (min <= max)
{
c[x] = min;
x++;
min++;
}
return ((int *)c);
}
