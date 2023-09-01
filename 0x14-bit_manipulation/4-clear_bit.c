#include "main.h"
#include <stdio.h>
/**
 * clear_bit - clear given bit index
 * @n: decimal number parametr
 * @index: input position
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int i = 1;
		unsigned int j;

				if (index > 64)
					return (-1);
				j = index;
				while (j > 0)
				{
					i = i * 2;
					j--;
				}
					if ((*n >> index) & 1)
						*n -= i;

				return (1);
}
