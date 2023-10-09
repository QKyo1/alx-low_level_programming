#include <stdlib.h>
#include <main.h>

/**
* *string_nconcat - task name
* @s1: ko
* @s2: ok
* @n: oko
* Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int x = 0, y = 0, len01 = 0, len02 = 0;
while (s1 && s1[len01])
len01++;
while (s2 && s2[len02])
len02++;
if (n < len02)
ptr = malloc(sizeof(char) * (len01 + n + 1));
else
ptr = malloc(sizeof(char) * (len01 + len02 + 1));
if (!ptr)
return (NULL);
while (x < len01)
{
s[x] = s1[x];
x++;
}
while (n < len02 && x < (len01 + n))
s[x++] = s2[y++];
while (n >= len02 && x < (len01 + len02))
s[x++] = s2[y++];
s[x] = '\0';
return (ptr);
}
