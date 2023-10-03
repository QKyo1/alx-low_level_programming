#include <stdio.h>
#include "main.h"

/**
* main - wai
* @argc - kfaya
* @argv - hh
* Return: 
*/

int main(int argc, char *argv[])
{
int sum;
if(argc == 3)
{
sum = atoi(argv[1]) * atoi (argv[2]);
printf("%d\n", sum);
}
else
{
printf("error\n");
return(1);
}
return(0);
}
