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
int x, size;
if (min > max)
return (NULL);
size = (max - min + 1);
c = malloc(sizeof(int) * size);
if (c == NULL)
return (NULL);
for (x = 0; min <= max; x++)
c[x] = min++;
return (c);
}
