#include <stdio.h>
#include "main.h"
/**
 * flip_bits - flip two inputed numbers
 * @n: input first number
 * @m: input seconde numer
 * Return: the result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
		unsigned long int a;
		int b = 0;

		a = n ^ m;

		while (a != 0)
			{
			b++;
			a = a & (a - 1);
			}

		return (b);
}
