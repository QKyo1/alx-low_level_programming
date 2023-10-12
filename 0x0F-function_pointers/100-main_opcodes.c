#include "function_pointers.h"
#include <stdio.h>

/**
* main - main
* @argc: t
* @argv: a
* Return: 0
*/

int main(int argc, char *argv[])
{
int x;
char *arr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
arr = (char *)main;
for (x = 0; x < bytes; x++)
{
if (x == bytes - 1)
{
printf("%02hhx\n", arr[x]);
break;
}
printf("%02hhx ", arr[x]);
}
return (0);
}
