#include "main.h"
#include <stdio.h>

/**
 * *_strchr - find a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
		int number;

		while (1)
		{
			number = *s++;
			if (number == c)
			{
				return (s - 1);
			}
			if (number == 0)
			{
				return (NULL);
			}
		}
}
