#include "main.h"

/**
* _strpbrk - Main
* @s: input
* @accept: input
* Return: 0
*/
char *_strpbrk(char *s, char *accept)
{
int w;
while (*s)
{
for (w = 0; accept[w]; w++)
{
if (*s == accept[w])
return (s);
}
s++;
}
return ('\0');
}
