#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - get unsigneet int from binary
 * @b: input param value
 * Return: the result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r;
	unsigned int pwr_2;
	int leng;

	if (b == NULL)
		return (0);

	for (leng = 0; b[leng]; leng++)
	{
		if (b[leng] != '0' && b[leng] != '1')
			return (0);
	}

	for (pwr_2 = 1, r = 0, leng--; leng >= 0; leng--, pwr_2 *= 2)
	{
		if (b[leng] == '1')
			r += pwr_2;
	}

	return (r);
}

