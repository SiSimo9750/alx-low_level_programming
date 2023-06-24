#include <stdio.h>
/**
 * _isupper - will check if letter is uppercase
 * @c: the letter to check
 * Return: 1 if yes and 0 if no
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
