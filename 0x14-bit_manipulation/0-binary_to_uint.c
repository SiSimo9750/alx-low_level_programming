#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Binary to uninsigned int conversion
 * @b: input to convert
 * Return: the result or 0 if the input is not binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int t, pwr;
	int check;

	if (b == NULL)
		return (0);

	for (check = 0; b[check]; check++)
	{
		if (b[check] != '0' && b[check] != '1')
			return (0);
	}

	for (pwr = 1, t = 0, check--; check >= 0; check--, pwr *= 2)
	{
		if (b[check] == '1')
			t += pwr;
	}

	return (t);
}
