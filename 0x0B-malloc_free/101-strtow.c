#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * strtow - splits string
 * @str: string
 * Return: value
 */

char **strtow(char *str)
{
int l, x = 0, y = 0, z = 0, w = 1;
char **a;
if (str == NULL || str == 0)
return (NULL);
while (*str != '\0')
{
if (*str == ' ')
x++;
str++;
}
x++;
a = malloc(sizeof(char *) * x + sizeof(char *));
if (a == NULL)
return (NULL);
while (*str != '\0')
{
if (*str == ' ')
{
if (*(str + 1) != ' ')
{
a[y] = malloc(sizeof(char) * w);
if (a[y] == NULL)
{
for (l = 0; l < y; l++)
free(a[l]);
free(a);
}
for (l = 0; l < w; l++)
{
a[y][l] = str[z];
z++;
}
a[y][l] = '\0';
y++;
z++;
w = -1;
}
}
str++;
z++;
}
return (a);
}
