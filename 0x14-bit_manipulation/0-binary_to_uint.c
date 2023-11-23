#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - a function to convert binary to numb er
 * @b: binary  number
 * Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int temp, value = 0, y = 1;
	int x;

	if (!b)
		return (0);
	for (x = 0; *(b + x); x++)
	{
		if (*(b + x) > '1' || *(b + x) < '0')
			return (0);
	}

	for (x = x; x > 0; x--)
	{
		temp = *(b + x - 1) - '0';
		value += temp * y;
		y *= 2;
	}
	return (value);
}
