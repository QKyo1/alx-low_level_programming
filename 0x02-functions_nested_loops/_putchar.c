#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the c
 * @c: The charcter to print
 *
 * Return: On Success 1.
 *         On error, -1 is returned and error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
