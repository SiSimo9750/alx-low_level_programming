#include "main.h"

/**
 * _pow_recursion - will raises x to the power of y
 * @x: Number
 * @y: Power
 * Return: On success 1 and -1 on error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
