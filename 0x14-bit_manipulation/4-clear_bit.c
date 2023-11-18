#include "main.h"
#include <stdio.h>
/**
 * clear_bit - erase bit
 * @n: long int parametre
 * @index: index input parametre position
 * Return: integer -1 or 1 depends on the result
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int ind = 1;
		unsigned int jind;

				if (index > 64)
					return (-1);
				jind = index;
				while (jind > 0)
				{
					ind = ind * 2;
					jind--;
				}
					if ((*n >> index) & 1)
						*n -= ind;

				return (1);
}

