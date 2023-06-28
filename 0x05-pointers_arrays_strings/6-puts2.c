#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int leng, n;

	leng = 0;

	while (str[leng] != '\0')
	{
		leng++;
	}

	for (n = 0; n < leng; n += 2)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
