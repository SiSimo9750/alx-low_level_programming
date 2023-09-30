#include "main.h"

/**
 * get_endianness - will check endianness
 * Return: it depends 0 or 1
 */
int get_endianness(void)
{
	int a = 1;

	if ((a % 256) == 1)
		return (1);
	else
		return (0);
}
