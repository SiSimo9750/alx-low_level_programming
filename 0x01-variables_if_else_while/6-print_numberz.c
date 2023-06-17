#include <stdio.h>
/**
 * main - print digits from 0 to 9
 *	with putchar command
 * Return: will return value 0
 */
int main(void)
{
		int a;

		for (a = 48; a < 58; a++)
		{
			putchar(a);
		}
	putchar('\n');
	return (0);
}
