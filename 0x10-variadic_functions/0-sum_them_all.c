#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of inputs
 * @n: number of parametrs
 *
 * Return: will be the result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int s = 0;
	va_list l;

	va_start(l, n);

	for (a = 0; a < n; a++)
		s += va_arg(l, int);

	va_end(l);

	return (s);
}
