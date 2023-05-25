#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints diagonal line of:
 * @n: Input, length
 *
 * Return: none
 */

void print_diagonal(int n)
{
	if (n > 1)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i + 1; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
