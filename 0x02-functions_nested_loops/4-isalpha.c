#include "main.h"
/**
 * _isalpha - alphabetic verification
 * @c: the input to verify
 * Return: will be 1 if its lowercase and 0 if not
 */
int _isalpha(int c)
{
	int result;

	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		result = 1;
	else
		result = 0;
	return (result);
}
