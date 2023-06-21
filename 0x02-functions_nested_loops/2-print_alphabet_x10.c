#include "main.h"
/**
 * print_alphabet_x10 - will print alphabets x 10
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int New_line = 0;
	char alp;

	while (New_line < 10)
	{
	for (alp = 'a'; alp <= 'z'; alp++)
		{
		_putchar(alp);
		}
	_putchar('\n');
	New_line++;
	}
}
