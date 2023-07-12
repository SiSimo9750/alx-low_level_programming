#include "main.h"
/**
 * _print_rev_recursion - will print a string in reverse
 * @s: the string to print in reverse
 * Return: will be 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);

	}
}
