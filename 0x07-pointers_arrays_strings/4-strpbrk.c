#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: string to search
 * @accept: string containing the bytes to look for
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int n, m;

	for (n = 0; *s != '\0'; n++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (*s == accept[m])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
