#include "main.h"

/**
 * _strlen - will calculate the string length
 * @s : the pointer to the string
 * Return: the length
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
