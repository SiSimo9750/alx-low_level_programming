#include <stdio.h>

/**
 * main - Display all alphabets in lowercase
 *	except q and e
 * Return: will be 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			{
			putchar (ch);
			}
	}
	putchar('\n');
	return (0);
}
