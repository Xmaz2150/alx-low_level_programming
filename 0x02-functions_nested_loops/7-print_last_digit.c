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
	
	last_d = (n % 10) + '0';
	_putchar(last_d);
	return (last_d);
}
