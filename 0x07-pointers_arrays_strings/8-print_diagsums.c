#include "main.h"
#include <stdio.h>

/**
*print_diagsums - Main
* @a: input
* @size: input
* Return: 0
*/

void print_diagsums(int *a, int size)
{
int sum1, sum2, q;
sum1 = 0;
sum2 = 0;
for (q = 0; q < size; q++)
{
sum1 = sum1 + a[q * size + q];
}
for (q = size - 1; q >= 0; q--)
{
sum2 += a[q * size + (size - q - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
