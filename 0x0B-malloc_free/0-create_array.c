#include <stdlib.h>
#include "main.h"

/**
 * *create_array - it will creates an array of chars
 * @size: size of array to create
 * @c: char to initialize the array
 *
 * Return: will return the pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int n = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (n < size)
	{
		*(p + n) = c;
		n++;
	}

	*(p + n) = '\0';

	return (p);
}
