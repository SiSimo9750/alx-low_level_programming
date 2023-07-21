#include "variadic_functions.h"

/**
 * print_all - print any input
 * @format: list of types of inputed arguments
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *sng, *separ = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", separ, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", separ, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", separ, va_arg(l, double));
					break;
				case 's':
					sng = va_arg(l, char *);
					if (!sng)
						sng = "(nil)";
					printf("%s%s", separ, sng);
					break;
				default:
					a++;
					continue;
			}
			separ = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(l);
}
