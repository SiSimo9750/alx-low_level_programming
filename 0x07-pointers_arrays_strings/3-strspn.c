#include "main.h"

/**
 * *_strspn - will gets the length of a substring
 * @s: string
 * @accept: string containing the list of characters
 *
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, f;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		f = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				f = 1;
			}
		}
		if (f == 0)
		{
			return (c);
		}
	}

	return (0);
}
