#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the latter:
 * @n: Input, using putchar
 *
 * Return: void
 */

void print_number(int n)
{
	int i;
	char num[15];

	sprintf(num, "%d", n);

	for(i = 0; num[i] != '\0'; i++)
	{
		if(num[i] >= '0' && num[i] <= '9')
			_putchar(num[i]);
		else
			_putchar(num[i]);
	}
	return;
}
