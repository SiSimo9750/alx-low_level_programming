#include "main.h"

/**
 * _puts_recursion - it will print a string
 * @s: the string to print
 * Return: will be 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	__putchar(*s);
	_puts_recursion(s + 1);

}


