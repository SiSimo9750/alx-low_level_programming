#include <stdio.h>
#include "main.h"
/**
 * get_bit - get the bit at index
 * @n: input number
 * @index: index starting from 0, of the bit we want to get
 * Return: the result or -1 in case of erro
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int result;

	if (index > 64)
		return (-1);

	result = n >> index;

	return (result & 1);
}
