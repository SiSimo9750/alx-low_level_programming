#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string parametre
 * @str: str to duplicate
 *
 * Return: pointer to the copied string on success
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int n, leng;

	n = 0;
	leng = 0;

	if (str == NULL)
		return (NULL);

	while (str[leng])
		leng++;

	dup = malloc(sizeof(char) * (leng + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[n] = str[n]) != '\0')
		n++;

	return (dup);
}
