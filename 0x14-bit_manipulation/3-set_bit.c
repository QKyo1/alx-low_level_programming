#include "main.h"

/**
 * set_bit - a function to set the byyttss
 * @n: point3r to a numb3r
 * @index: poiint3r for indexing
 * Return: 1 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 0;

	if (index > 63)
		return (-1);

	x = x >> index;
	x = x | 1;
	x = x << index;
	*n = *n | x;
	return (1);
}
