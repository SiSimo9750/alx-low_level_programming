#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char c;
	int n, a, b;

	a = 0;
	b = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	b = a - 1;

	for (n = 0; n < a / 2; n++)
	{
		c = s[n];
		s[n] = s[b];
		s[b--] = c;
	}
}
