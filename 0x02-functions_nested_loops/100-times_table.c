#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints times table of
 * @n: Input, table num
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;
	else if (n == 0)
	{
		printf("0\n");
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == n)
				printf("%4d", i * j);
			else
			{
				if (j == 0)
					printf("%d,", i * j);
				else
					printf("%4d,", i * j);
			}
		}
		printf("\n");
	}
}
