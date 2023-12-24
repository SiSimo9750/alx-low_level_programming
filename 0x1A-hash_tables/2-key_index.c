#include "hash_tables.h"

/**
 * key_index - Get the index
 * @key: The input key.
 * @size: The array size.
 *
 * Return: The founded index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
