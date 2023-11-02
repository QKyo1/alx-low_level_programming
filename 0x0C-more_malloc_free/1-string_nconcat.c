#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - two strings
 * @s1: string one
 * @s2: string two
 * @n: int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *g
unsigned int x = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
g = malloc(sizeof(char) * n + 1);
if (g == NULL)
return (NULL);
while (*s1)
{
g[x] = *s1;
s1++;
x++;
}
while (x < n)
{
g[x] = *s2;
s2++;
x++;
}
g[x] = '\0';
return (g);
}
