#include "main.h"
#include <stdlib.h>

/**
* create_array - first line
* @size: inpuutttoo
* @c: inpuuuutooo
* Return: 0
*/

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int w;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (w = 0; w < size; w++)
str[w] = c;
return (str);
}
