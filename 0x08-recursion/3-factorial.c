#include "main.h"

/**
 * factorial - will calculat the factorial of n
 * @n: input to calculate
 *
 * Return: if succeed 1 if not -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
