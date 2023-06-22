#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int larg_est;

	if (a >= b && a >= c)
	{
	larg_est = a;
	}
	else if (b >= a && b >= c)
	{
	larg_est = b;
	}
	else if (c >= a && c >= b)
	{
	larg_est = c;
	}

	return (larg_est);
}
