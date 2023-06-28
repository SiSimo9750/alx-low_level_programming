#include "main.h"

/**
 * swap_int - will swap two integers's values
 * @p1: pointer 1
 * @p2: pointer 2
 */
void swap_int(int *p1, int *p2)
{
	int n;

	n = *p1;
	*p1 = *p2;
	*p2 = n;
}
