#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates arraies
 * @size: size of the array
 * @c: char
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
char *z;
if (size == 0)
return (0);
z = malloc(sizeof(char) * size);
if (z == NULL)
return (0);
while (size--)
{
z[size] = c;
}
return (z);
}
