#include "main.h"

/**
 * _strncat - concatenates n bytes (string to string)
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: a pointer to the resulte
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
