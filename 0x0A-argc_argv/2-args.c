#include <stdio.h>
#include "main.h"

/**
 * main - print all tasks
 * @argc: argument
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
