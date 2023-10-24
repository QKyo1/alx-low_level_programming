#include <stdlib.h>
#include "main.h"

/**
* *string_nconcat - task name
* @s1: ko
* @s2: ok
* @n: oko
* Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *x;
unsigned int y = 0, z = 0, len1 = 0, len2 = 0;
while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
if (n < len2)
x = malloc(sizeof(char) * (len1 + n + 1));
else
x = malloc(sizeof(char) * (len1 + len2 + 1));
if (!x)
return (NULL);
while (y < len1)
{
s[y] = s1[y];
y++;
}
while (n < len2 && y < (len1 + n))
s[y++] = s2[z++];
while (n >= len2 && y < (len1 + len2))
s[y++] = s2[z++];
s[y] = '\0';
return (x);
}
