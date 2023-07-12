#include "main.h"
/**
 * _islower - lowercase verification
 * @c: the input to verify
 * Return: will be 1 if its lowercase and 0 if not
 */
int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
		result = 1;
	else
		result = 0;
	return (result);
}
