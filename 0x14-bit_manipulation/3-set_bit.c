#include "main.h"

/**
 *  * set_bit - set a bit
 *  * @n: input valaue
 *  * @index: input index
 *  * Return: integer 1 or -1 depends
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int jindx = 1;

		if (index > 64)
			return (-1);
		while (index > 0)
		{
			index--;
			jindx *= 2;
		}
		*n += jindx;
		return (1);
}

