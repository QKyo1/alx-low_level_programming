#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate new memory location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
char *w;
int x, y = 0;
if (str == NULL)
return (NULL);
x = 0;
while (str[x] != '\0')
x++;
w = malloc(sizeof(char) * (x + 1));
if (w == NULL)
return (NULL);
for (y = 0; str[y]; y++)
w[y] = str[y];
return (w);
}
