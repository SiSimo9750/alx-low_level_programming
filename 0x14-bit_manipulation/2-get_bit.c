#include <stdio.h>
#include "main.h"
/**
 * get_bit - show a certain bit
 * @n: input value
 * @index: given index
 * Return: the output or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int result, my_bit;

	if (index > 64)
		return (-1);

	result = n >> index;
	my_bit = result & 1;
	return (my_bit);
}

