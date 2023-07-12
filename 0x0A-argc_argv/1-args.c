#include <stdio.h>
#include "main.h"

/**
 * main - will show how many arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: will return 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
