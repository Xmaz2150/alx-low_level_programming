#include "variadic_functions.h"

/**
 * print_numbers - prints args:
 *
 * @n: Input, number of arguments:
 * @separator: Input, charecter to separate args
 *
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if ((i < n - 1) && (separator != NULL))
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		else
		{
				printf("%d", va_arg(ap, int));
		}
	}
	printf("\n");
	va_end(ap);
}
