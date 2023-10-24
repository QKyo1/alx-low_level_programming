#include <stdlib.h>
#include <stdio.h>

/**
* _strlen - calculates the length of a string
* @s: the given string
* Return: a value of type int
*/

int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}

/**
* argstostr - concaenates any number of given strings
* @ac: number of strings
* @av: strings vector
* Return: a value of type char *
*/

char *argstostr(int ac, char **av)
{
int sum = 0;
int i, j, k;
char *a;
k = 0;
if (ac == 0 || av == 0)
return (NULL);
for (i = 0; i < ac; i++)
{
sum += _strlen(av[i]);
sum++;
}
a = malloc(sizeof(char) * sum + 1);
if (a == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
a[k] = av[i][j];
k++;
}
a[k] = '\n';
k++;
}
return (a);
}
