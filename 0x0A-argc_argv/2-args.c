#include <stdio.h>
#include "main.h"

/**
* main - ok
* @argc: t3bta
* @argv: abeet
* Return: zero
*/

int main(int argc, char *argv[])
{
int g;
for (g = 0; g < argc; g++)
{
printf("%s\n", argv[g]);
}
return (0);
}
