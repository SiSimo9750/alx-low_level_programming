#include "main.h"
/**
 * print_last_digit - to display the last digit
 * @n: the input value
 * Return: the last digit value
 */
int print_last_digit(int n)
{
	int last_d;

	last_d = n % 10;
	if (last_d < 0)
		last_d = last_d * (-1);
	_putchar(last_d + '0');
	return (last_d);
}
