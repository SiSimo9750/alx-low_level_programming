#include <stdio.h>
#include "main.h"
/**
 * flip_bits - bits flipper
 * @n: input number one
 * @m: input numer two
 * Return: flipped bits number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
		unsigned long int d;
		int c;

		d = n ^ m;
		c = 0;

		while (d)
			{
			c++;
			d &= (d - 1);
			}

		return (c);
}
