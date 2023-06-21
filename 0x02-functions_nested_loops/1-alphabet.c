#include "main.h"
/**
 * print_alphabet - will show lowercase alphacets
 * Return: equal to 0
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
	_putchar(alp);
	}
	_putchar('\n');
}
