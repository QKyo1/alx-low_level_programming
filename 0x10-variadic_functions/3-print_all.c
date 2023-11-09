#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
* print_all - prints all given arguments
* @format: the desired formats to be printed
*/

void print_all(const char * const format, ...)
{
char *a;
const char *b = format;
va_list args;
va_start(args, format);
while (*b)
{
switch (*b)
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
a = va_arg(args, char *);
if (!strlen(a))
{
printf("(nil)");
break;
}
printf("%s", a);
break;
default:
break;
}
b++;
if (*b && (*b == 'c' || *b == 'f' || *b == 'i' || *b == 's'))
printf(", ");
}
printf("\n");
}
