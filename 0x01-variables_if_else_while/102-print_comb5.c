#include <stdio.h>

/**
* main - prints comb of two digit
*
* Return: Always 0 (Success)
*/
int main(void)
{
int x, y;
for (x = 0; x < 100; x++)
{
for (y = 0; y < 100; y++)
{
if (x < y)
{
putchar((x / 10) + 48);
putchar((x % 10) + 48);
putchar(' ');
putchar((y / 10) + 48);
putchar((y % 10) + 48);
if (x != 98 || y != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (1);
}
return (0);
}
