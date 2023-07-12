#include "main.h"

/**
 * _strcat - this will concatenates two strings
 * @dest: to append to string
 * @src: to add string
 *
 * Return: will return a  pointer to the resule
 */
char *_strcat(char *dest, char *src)
{
	int n, m;

	n = 0;
	m = 0;

	while (dest[n] != '\0')
		n++;

	while (src[m] != '\0')
	{
		dest[n] = src[m];
		m++;
		n++;
	}

	dest[n] = '\0';

	return (dest);
}
