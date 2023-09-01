#include "main.h"

/**
 *  * set_bit - set to 1
 *  * @n: input parametr
 *  * @index: index position
 *  * Return: 1 or -1
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int j = 1;

		if (index > 64)
			return (-1);

		while (index > 0)
		{
			index--;
			j *= 2;
		}
			*n += j;

		return (1);
}
