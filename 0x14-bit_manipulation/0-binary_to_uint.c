#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: Input binary string
 *
 * Return: The converted unsigned int or 0 if input is not binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int power_of_two;
	int length = 0;

	if (b == NULL)
		return (0);

	while (!b[length])
	{
	if (b[length] != '0' && b[length] != '1')
		return (0);
		length++;
	}

	for (length--; length >= 0; length--, power_of_two *= 2)
	{
		if (b[length] == '1')
			result += power_of_two;
	}

	return (result);
}
