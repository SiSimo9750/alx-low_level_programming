#include <stdio.h>

/**
 * main - will show lowercase alphabets in revers
 * Return: will return 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
