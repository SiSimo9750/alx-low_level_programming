#include <stdio.h>
#include "main.h"
/**
 * get_bit - get bit for given index
 * @n: int parametre
 * @index: input index
 * Return: the wanted bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int rslt;
	unsigned long int W_Bit;

	if (index > 64)
		return (-1);

	rslt = n >> index;
	W_Bit = rslt & 1;
	return (W_Bit);
}
