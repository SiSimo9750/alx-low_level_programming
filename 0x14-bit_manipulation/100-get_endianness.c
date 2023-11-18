#include "main.h"

/**
 * get_endianness - will check endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int i = 1;

	if ((i % 256) == 1)
	{
		return (1);
	}
	else
		return (0);
}

