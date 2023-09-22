#include <stdio.h>

int main(void)
{
int x;
int a[5];
int *p;
a[2] = 1024;
p = &x;
*(p + 5) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
