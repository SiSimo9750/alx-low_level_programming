#include "main.h"

/**
 *  * set_bit - turn a givem bit value to 1
 *  * @n: decimal input
 *  * @index: given position
 *  * Return: 1 on success, -1 if error
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int i;

		if (index > 64)
			return (-1);

		for (i = 1; index > 0; index--, i *= 2)

			*n += i;

		return (1);
}
