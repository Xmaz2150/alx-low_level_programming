#include "main.h"
/**
 * print_alphabet_x10 - prints a-z x10
 *
 * a-z x10
 */
void print_alphabet_x10(void)
{
	int i, j;

	j = 0;
	while (j < 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
