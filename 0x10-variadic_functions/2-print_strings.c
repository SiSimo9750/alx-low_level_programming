#include "variadic_functions.h"

/**
 * print_strings - will print string inputs
 * @separator: will separate between strings
 * @n: number of inputs
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *sng;

	va_list l;

	va_start(l, n);

	for (a = 0; a < n; a++)
	{
		sng = va_arg(l, char *);
		if (!sng)
			sng = "(nil)";
		if (!separator)
			printf("%s", sng);
		else if (separator && a == 0)
			printf("%s", sng);
		else
			printf("%s%s", separator, sng);
	}

	printf("\n");

	va_end(l);
}
