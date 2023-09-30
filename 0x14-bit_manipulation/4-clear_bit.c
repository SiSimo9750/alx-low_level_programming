#include "main.h"
#include <stdio.h>
/**
 * clear_bit - put 0 in a bit
 * @n: input number parametr
 * @index: given index position
 * Return: if ok 1 or -1 if not ok
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int a;
		unsigned int b;

		a = 1;
				if (index > 64)
					return (-1);
				b = index;
				while (b > 0)
				{
					a = a * 2;
					b--;
				}
					if ((*n >> index) & 1)
						*n -= a;

				return (1);
}
