#include "main.h"

/**
* _strstr - Main
* @haystack: input
* @needle: input
* Return: 0
*/
char *_strstr(char *haystack, char *needle)

{
for (; *haystack != '\0'; haystack++)
{
char *e = haystack;
char *j = needle;
while (*e == *j && *j != '\0')
{
e++;
j++;
}
if (*j == '\0')
return (haystack);
}
return (0);
}
