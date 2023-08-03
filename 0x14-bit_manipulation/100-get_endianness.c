#include "main.h"

/**
 * get_endianness - endianness checker
 * Return: 1 little endian and big endian 0
 */
int get_endianness(void)
{
		int num = 1;

		if (*(char *)&num == 1)
			return (1);
		else
			return (0);
}
