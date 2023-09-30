#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Binary to u_int
 * @b: input parametre
 * Return: the output or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int Bin_output;
	unsigned int pwr;
	int l;

	if (!b)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
	}

	for (pwr = 1, Bin_output = 0, l--; l >= 0; l--, pwr *= 2)
	{
		if (b[l] == '1')
			Bin_output += pwr;
	}

	return (Bin_output);
}
