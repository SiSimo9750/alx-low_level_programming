#include "main.h"

/**
 *  * set_bit - put 1 to a bit
 *  * @n: int parametre
 *  * @index: given index to set
 *  * Return: 1 on success or -1 on fail
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int a = 1;

		if (index > 64)
			return (-1);

		while (index > 0)
		{
			index--;
			a = a * 2;
		}
			*n += a;

		return (1);
}
