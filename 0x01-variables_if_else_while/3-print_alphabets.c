#include <stdio.h>

/**
 * main - alphabet in lowercase and uppercase
 * followed by a new line
 * Return: will return 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}	
	putchar('\n');
	return (0);
}
