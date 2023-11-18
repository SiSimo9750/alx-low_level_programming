#include <stdio.h>
#include "main.h"
/**
 * print_binary - show in binary
 * @n: input param value
 */
void print_binary(unsigned long int n)
{
	int indx;
	unsigned long int i;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = n, indx = 0; (i >>= 1) > 0; indx++)
		;
	while (indx >= 0)
	{
		if ((n >> indx) & 1)
			printf("1");
		else
			printf("0");
		indx--;
	}
}


