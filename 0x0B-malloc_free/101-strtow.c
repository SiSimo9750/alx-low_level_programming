#include <stdlib.h>
#include "main.h"

/**
 * word_counter - will counts the number of words in a string
 * @s: input string
 * Return: number of words
 */
int word_counter(char *s)
{
	int wrd_end, a, wrd;

	wrd_end = 0;
	wrd = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			wrd_end = 0;
		else if (wrd_end == 0)
		{
			wrd_end = 1;
			wrd++;
		}
	}

	return (wrd);
}
/**
 * **strtow - will splits the srings into words
 * @str: input string
 *
 * Return: will return pointer to an array of strings, NULL on error
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_counter(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
