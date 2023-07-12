#include "main.h"
/**
 * _isdigit - will check if input is a digit
 * @c: what to check
 * Return: 1 if yes and 0 if no
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
