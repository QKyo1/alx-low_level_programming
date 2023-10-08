#include <stdio.h>
#include "main.h"

/**
* _atoi - koo7
* @s: koo7
* Return: 0
*/

int _atoi(char *s)
{
int x, y, z, len, w, digit;
x = 0;
y = 0;
z = 0;
len = 0;
w = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (x < len && w == 0)
{
if (s[x] == '-')
++d;
if (s[x] >= '0' && s[x] <= '9')
{
digit = s[x] - '0';
if (y % 2)
digit = -digit;
z = z * 10 + digit;
w = 1;
if (s[x + 1] < '0' || s[x + 1] > '9')
break;
w = 0;
}
x++;
}
if (w == 0)
return (0);
return (z);
}

/**
* main - kfaya
* @argc: ok
* @argv: zab6
* Return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])
{
int r, s, t;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
s = _atoi(argv[1]);
t = _atoi(argv[2]);
r = s * t;
printf("%d\n", r);
return (0);
}
}
