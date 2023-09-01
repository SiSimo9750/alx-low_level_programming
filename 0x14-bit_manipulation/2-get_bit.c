#include <stdio.h>
#include "main.h"
/**
 * get_bit - get a bit at certain index
 * @n: input parametre
 * @index: index of the bit we want to get
 * Return: the result or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int res, MyBit;

	if (index > 64)
		return (-1);

	res = n >> index;
	MyBit = res & 1;
	return (MyBit);
}
