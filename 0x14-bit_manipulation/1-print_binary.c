#include <stdio.h>
#include "main.h"
/**
 * print_binary - print in binary form
 * @n: input to print as binary
 */
void print_binary(unsigned long int n)
{
	int sh;
	unsigned long int i;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = n, sh = 0; (i >>= 1) > 0; sh++)
		;
	while (sh >= 0)
	{
		if ((n >> sh) & 1)
			printf("1");
		else
			printf("0");
		sh--;
	}
}

