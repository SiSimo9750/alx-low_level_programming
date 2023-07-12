#include "main.h"

/**
 * *_memset - will fill memory with a constant byte
 * @s: area to be filled
 * @b: char to copy
 * @n: times to copy
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
