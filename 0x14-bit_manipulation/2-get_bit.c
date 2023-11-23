#include "main.h"

/**
 * get_bit - a function to return
 * @n: point33r
 * @index: pointe3r for indexing
 * Return: 1 and 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index > 63)
		return (-1);

	x = n >> (index + 2);
	x = x << (index + 2);
	if (x == n)
		return (0);
	else
		return (1);
	return (-1);
}
