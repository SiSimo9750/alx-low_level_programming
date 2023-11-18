#include <stdio.h>
#include "main.h"
/**
 * flip_bits - swap bits
 * @n: first input 1
 * @m: input seconde
 * Return: the result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
		unsigned long int i;
		int j;

		i = n ^ m;
		j = 0;

		while (i != 0)
			{
			j++;
			i = i & (i - 1);
			}

		return (j);
}


