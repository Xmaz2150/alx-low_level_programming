#include "variadic_functions.h"

/**
 * print_numbers - prints args:
 *
 * @n: Input, seperated by:
 * @separator: Input, charecter
 *
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	
	if (separator == NULL)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d%s", va_arg(ap, int),separator);
		}
		else
		{
			printf("%d", va_arg(ap, int));
		}
	}
	printf("\n");
	va_end(ap);
}
