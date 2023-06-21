#include "main.h"
/**
 * print_last_digit - to display the last digit
 * @n: the input value
 * Return: the last digit value
 */
int print_last_digit(int n)
{
	int last_d;

	if (n < 0)
		n = -n;
	last_d = n % 10;
	_putchar(last_d + '0');
	return (last_d);
}
