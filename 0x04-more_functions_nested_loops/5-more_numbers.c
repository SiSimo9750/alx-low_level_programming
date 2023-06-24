#include "main.h"

/**
 * more_numbers - prints 10 (0 to 14)
 * followed by a new line
 */
void more_numbers(void)
{
	int line, number;

	for (line = 0; line < 10; line++)
	{
		for (number = 0; number < 15; number++)
		{
			if (number >= 10)
				_putchar(number / 10 + '0');
			_putchar(number % 10 + '0');
		}
		_putchar('\n');
	}
}
