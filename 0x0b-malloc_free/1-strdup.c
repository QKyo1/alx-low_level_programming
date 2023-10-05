#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - wewe
* @str: koko
* Return: 0
*/

char *_strdup(char *str)
{
char *hgh;
int h, g = 0;
if (str == NULL)
return (NULL);
h = 0;
while (str[h] != '\0')
h++;
hgh = malloc(sizeof(char) * (h + 1));
if (hgh == NULL)
return (NULL);
for (g = 0; str[g]; g++)
hgh[g] = str[g];
return (hgh);
}
