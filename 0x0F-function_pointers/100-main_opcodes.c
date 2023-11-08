#include <stdio.h>
#include <stdlib.h>

/**
* main -entry point
* @argc: arguments
* @argv: array
* Return: 0
*/

int main(int argc, char *argv[])
{
int bytes, x;
char *c;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error/2");
exit(2);
}
c = (char *)main;
for (x = 0; x < bytes; x++)
{
if (x == bytes - 1)
{
printf("%02hhx\n", c[x]);
break;
}
printf("%02hhx ", c[x]);
}
return (0);
}
