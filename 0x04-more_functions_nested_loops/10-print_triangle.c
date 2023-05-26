#include "main.h"
/**
 * print_triangle - prints triangle of:
 * @size: Input, size
 * Return: none
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k;

		for (i = 0; i < size ; i++)
		{
			for (k = 1; k < (size - i); k++)
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
	else
	{
		_putchar('\n');
	}
}
