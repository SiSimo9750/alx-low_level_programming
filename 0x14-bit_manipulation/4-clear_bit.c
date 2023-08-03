#include <stdio.h>
/**
 * clear_bit - put 0 in a given bit index
 * @n: pointer to input decimal number
 * @index: index position to change
 * Return: on success 1 and -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int m;
			unsigned int i;

				if (index > 64)
					return (-1);
				i = index;
				for (m = 1; i > 0; m *= 2, i--)
					;
					if ((*n >> index) & 1)
						*n -= m;

				return (1);
}
