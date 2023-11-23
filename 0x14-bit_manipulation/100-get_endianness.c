#include "main.h"

/**
 * get_endianness - a function for checking the end of ittttt
 * Return: 1 0
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	if (*byte == 1)
		return (1);
	return (0);
}
