#include <stdio.h>
#include "main.h"
/**
 * flip_bits - flipc
 * @n: input number one
 * @m: input numer two
 * Return: flipped bits number
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

