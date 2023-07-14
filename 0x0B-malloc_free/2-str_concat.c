#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: seconde string to concatenate
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int n = 0, m = 0, leng1 = 0, leng2 = 0;

	while (s1 && s1[leng1])
		leng1++;
	while (s2 && s2[leng2])
		leng2++;

	s3 = malloc(sizeof(char) * (leng1 + leng2 + 1));
	if (s3 == NULL)
		return (NULL);

	n = 0;
	m = 0;

	if (s1)
	{
		while (n < leng1)
		{
			s3[n] = s1[n];
			n++;
		}
	}

	if (s2)
	{
		while (n < (leng1 + leng2))
		{
			s3[n] = s2[m];
			n++;
			m++;
		}
	}
	s3[n] = '\0';

	return (s3);
}
