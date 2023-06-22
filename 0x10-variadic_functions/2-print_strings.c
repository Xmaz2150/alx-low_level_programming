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
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);

		if (i < n - 1)
		{
			if (str == NULL)
				printf("(nil)%s", separator);
			else
				printf("%s%s", str, separator);
		}
		else
		{
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
	}
	printf("\n");
	va_end(ap);
}
