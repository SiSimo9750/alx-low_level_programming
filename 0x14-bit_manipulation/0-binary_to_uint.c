#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Binary to uninsigned int conversion
 * @b: input to convert
 * Return: the result or 0 if the input is not binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int power2;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (power2 = 1, result = 0, length--; length >= 0; length--, power2 *= 2)
	{
		if (b[length] == '1')
			result += power2;
	}

	return (result);
}
