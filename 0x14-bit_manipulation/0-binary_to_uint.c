#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Binary to u_int
 * @b: input parametre
 * Return: the output or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int Bin_rslt;
	unsigned int pwr;
	int l_eng;

	if (!b)
		return (0);

	for (l_eng = 0; b[l_eng]; l_eng++)
	{
		if (b[l_eng] != '0' && b[l_eng] != '1')
			return (0);
	}

	for (pwr = 1, Bin_rslt = 0, l_eng--; l_eng >= 0; l_eng--, pwr *= 2)
	{
		if (b[l_eng] == '1')
			Bin_rslt = Bin_rslt +  pwr;
	}

	return (Bin_rslt);
}
