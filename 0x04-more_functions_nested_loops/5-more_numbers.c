#include "main.h"
/**
 * more_numbers - prints 0 - 14x10
 *
 * Return: none
 */
void more_numbers(void)
{
	int i;

	i = 0;

	while(i <= 10)
	{	
		int j;

		for (j = 0; j <= 14; j++)
		{
			_putchar(j+'0');
		}
		_putchar('\n');
		i++;
	}
}
