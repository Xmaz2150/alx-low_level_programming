#include "variadic_functions.h"

/**
 * print_strings - prints string arguments separated by:
 *
 * @separator: Input - charecter or string of charecters
 * @n: Input, number of arguments entered
 *
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%s%s", va_arg(ap, char*), separator);
		}
		else
		{
			 printf("%s", va_arg(ap, char*));
		}
	}
	printf("\n");
	va_end(ap);
}
