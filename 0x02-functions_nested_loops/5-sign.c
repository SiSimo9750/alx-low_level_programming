#include "main.h"
/**
 * print_sign - sign verification
 * @n: the input to verify
 * Return: 1 if its positive  and -1 if negative
 *	0 if null
 */
int print_sign(int n)
{
	int result;

	if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else
	{
		result = 0;
		_putchar(48);
	}
		return (result);
}
