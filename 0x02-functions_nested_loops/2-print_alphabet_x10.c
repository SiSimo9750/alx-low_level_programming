#include "main.h"
/**
 * print_alphabet_x10 - will print alphabets x 10
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int New_line = 0;
	char alp = 'a';

	while (New_line < 10)
	{
		while (alp <= 'z')
			{
				_putchar(alp);
				alp++;
			}
	}
	_putchar('\n');
	New_line++;
}
