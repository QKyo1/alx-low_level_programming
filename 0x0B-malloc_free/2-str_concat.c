#include "main.h"
#include <stdlib.h>

/**
* str_concat - wewekeke
* @s1: inpuiuuuttooo
* @s2: in3uto
* Return: 0
*/

char *str_concat(char *s1, char *s2)
{
char *conct;
int f, we;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
f = we = 0;
while (s1[f] != '\0')
f++;
while (s2[we] != '\0')
we++;
conct = malloc(sizeof(char) * (f + we + 1));
if (conct == NULL)
return (NULL);
f = we = 0;
while (s1[f] != '\0')
{
conct[f] = s1[f];
f++;
}
while (s2[we] != '\0')
{
conct[f] = s2[we];
f++, we++;
}
conct[f] = '\0';
return (conct);
}
