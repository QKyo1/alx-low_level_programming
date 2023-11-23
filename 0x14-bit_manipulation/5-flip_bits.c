#include "main.h"

/**
 * flip_bits - a function for flipping to bittss
 * @n: point3r for numb33r
 * @m: point3r for th3 second numb3=r
 * Return: j
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, y = 0;

	for (x = 0; x < 64; x++)
	{
		if ((n & 1) != (m & 1))
			y++;
		n = n >> 1;
		m = m >> 1;
	}
	return (y);
}
