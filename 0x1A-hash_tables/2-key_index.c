#include "hash_tables.h"

/**
 * key_index - a functionn to genetrates keyss
 * @key: key
 * @size: siz3 of the hash tables
 * Return: to the k3y
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
