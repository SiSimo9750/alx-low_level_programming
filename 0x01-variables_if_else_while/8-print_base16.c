#include <stdio.h>
/**
 * main - will display base 16 numbers
 * Return: will return 0
 */
int main(void)
{
	int a;
	char b;

	for (a = 48; a < 58; a++)
	{
	putchar(a);
	}
	for (b = 'a'; b < 'g'; b++)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
}
