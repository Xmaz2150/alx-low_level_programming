#include "main.h"
#include <stdio.h>
/**
 * times_table - prints 9 times table
 *
 * Return: none
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		printf("%d,", 0);
		for (j = 1; j < 10; j++)
		{
			printf("%3d", j * i);
			if (j < 9)
				printf(",");
		}
		printf("\n");
	}
}
