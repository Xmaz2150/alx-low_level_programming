#include "main.h"

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
