#include "main.h"

/**
 * print_number - will print an integer
 * @n: integer to be print
 */
void print_number(int n)
{
	unsigned int nbr;

	if (n < 0)
	{
		nbr = -n;
		_putchar('-');
	} else
	{
		nbr = n;
	}

	if (nbr / 10)
		print_number(nbr / 10);

	_putchar((nbr % 10) + '0');
}
