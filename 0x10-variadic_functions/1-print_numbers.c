#include "variadic_functions.h"

/**
 * print_numbers - prints given inputs numbers
 * @separator: to separate numbers
 * @n: passed number to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list l;

	va_start(l, n);

	for (a = 0; a < n; a++)
	{
		if (!separator)
			printf("%d", va_arg(l, int));
		else if (separator && a == 0)
			printf("%d", va_arg(l, int));
		else
			printf("%s%d", separator, va_arg(l, int));
	}

	va_end(l);

	printf("\n");
}
