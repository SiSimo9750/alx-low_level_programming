#include "main.h"

/**
 * print_most_numbers - prints 0 1 3 5 6 7 8 9
 * followed by a new line
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		if (number != 2 && number != 4)
		{
			_putchar(number + '0');
		}
	}

	_putchar('\n');
}
