#include "main.h"

/**
 * _strlen_recursion - will returns length of string
 * @s: string
 * Return: On success 1 and -1 on error
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
