#include "main.h"

/**
 * print_binary - prints binary representation of:
 * @n: Input, number
 *
 * Return: (void)
 */

void print_binary(unsigned long int n)
{
	long int i, j, num, int_size;
	char byte, bit;

	num = n;
	int_size = sizeof(int);

	for (i = 0; i < int_size; i++)
	{
		byte = *(((char *)&num) + i);
		for (j = 0; j < 8; j++)
		{
			bit = byte & 1;
			_putchar(bit + '0');

			byte >>= 1;
		}
		_putchar(' ');
	}
	_putchar('\n');
}
