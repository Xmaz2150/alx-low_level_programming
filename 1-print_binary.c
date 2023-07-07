#include "main.h"

/**
 * print_binary - prints binary representation of:
 * @n: Input, number
 *
 * Return: (void)
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit_checker;
	int print_zero;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	bit_checker = 1UL << (sizeof(unsigned long int) * 8 - 1);
	print_zero = 1;

	for ( ; bit_checker; )
	{
		if (n & bit_checker)
		{
			_putchar('1');
			print_zero = 0;
		}
		else if (!print_zero)
		{
			_putchar('0');
		}
		bit_checker >>= 1;
	}
}
