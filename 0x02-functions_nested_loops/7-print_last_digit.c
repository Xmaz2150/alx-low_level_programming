#include "main.h"
/**
 * print_last_digit - returns and prints last digit of
 * @n: Input
 *
 * Return: las digit
 */
int print_last_digit(int n)
{
	int last_d;

	last_d = n % 10;

	if (n < 0)
	{
		_putchar('0' + (last_d * -1));
		return (last_d * -1);
	}

	_putchar('0' + last_d);
	return (last_d);
}
