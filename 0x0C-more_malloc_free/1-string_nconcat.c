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
char *g;
unsigned int x = 0, y = 0, len1 = 0, len2 = 0;
while (s1 && s1[len1])
	len1++;
while (len2 && s2[len2])
	len2++;
if (n < len2)
g = malloc(sizeof(char) * (len1 + n + 1));
else
g = malloc(sizeof(char) * (len1 + len2 + 1));
if(!g)
return (NULL);
while (x < len1)
{
g[x] = s1[x];
x++;
}
while (n < len2 && x < (len1 + n))
g[x++] = s2[y++];
while (n >= len2 && x < (len1 + len2))
g[x++] = s2[y++];
g[x] = '\0';
return (g);
}
