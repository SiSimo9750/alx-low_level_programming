#include <stdio.h>
#include "main.h"
/**
 * print_binary - Display binary
 * @n: input binary
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int a;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (a = n, i = 0; (a >>= 1) > 0; i++)
		;
	while (i >= 0)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
		i--;
	}
}
