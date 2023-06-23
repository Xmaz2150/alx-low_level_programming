#include "variadic_functions.h"
#include <string.h>
/**
 * print_all - prints all types
 * @format: Input
 *
 * Return: (void)
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	size_t i;
	char *str;

	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char*);

				if (str != NULL)
					printf("%s", str);
				printf("(nil)");
				break;
		}

		if (i < (strlen(format) - 1) && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}

