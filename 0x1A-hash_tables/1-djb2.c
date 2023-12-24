#include "hash_tables.h"

/**
 * hash_djb2 - Function to implement the djb2 algorithm.
 * @str: Input string to hash.
 *
 * Return: The result hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int ha;
	int n;

	ha = 5381;
	while ((n = *str++))
		ha = ((ha << 5) + ha) + n;

	return (ha);
}
