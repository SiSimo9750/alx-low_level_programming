#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int n, m, leng;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	leng = n;

	for (m = leng - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}

	_putchar('\n');
}
