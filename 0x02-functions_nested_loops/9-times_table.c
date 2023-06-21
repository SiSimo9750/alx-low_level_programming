#include "main.h"
/**
 * times_table - will display 9 times table
 */
void times_table(void)
{
	int n, multiple, product;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (multiple = 1; multiple <= 9; multiple++)
		{
			_putchar(',');
			_putchar(' ');

			product = n * multiple;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
