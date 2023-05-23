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

	if (n < 0)
		n *= -1;

	last_d = n % 10;
	_putchar('0' + last_d);
	return (last_d);
}
