#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input
 * @s1: input
 * @s2: input
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
char *z;
int x, c;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
x = c = 0;
while (s1[x] != '\0')
x++;
while (s2[c] != '\0')
c++;
z = malloc(sizeof(char) * (x + c + 1));
if (z == NULL)
return (NULL);
x = c = 0;
while (s1[x] != '\0')
{
z[x] = s1[x];
x++;
}
while (s2[c] != '\0')
{
z[x] = s2[c];
x++, c++;
}
z[x] = '\0';
return (z);
}
