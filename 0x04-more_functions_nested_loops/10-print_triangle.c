#include "main.h"

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size ; i++)
	{	for (k = 0; k <size - i; k++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i + 1; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
