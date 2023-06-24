#include "main.h"

/**
 * print_line - draw a line using _
 * @line: number of _
 */
void print_line(int line)
{
	if (line <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= line; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
