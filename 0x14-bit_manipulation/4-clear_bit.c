#include "main.h"

/**
 * clear_bit - a functoi to clear the bytss
 * @n: point3r for numb3r
 * @index: point3r to indexing
 * Return: 1 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 0;

	if (index > 63)
		return (-1);

	x = x >> index;
	x = x | 1;
	x = x << index;
	x = ~x;
	*n = *n & x;
	return (1);
}
