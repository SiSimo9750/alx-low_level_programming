#include "main.h"

/**
 * _sqrt_2 - Makes possible to evaluate from 1 to n
 * @a: same  n
 * @b: numiterate number from 1 to n
 *
 * Return: On success 1 and -1 on error
 */
int _sqrt_2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (_sqrt_2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: input number
 *
 * Return: 1 On success and -1 on erro
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_2(n, 1));
}
