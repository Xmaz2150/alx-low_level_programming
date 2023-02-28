#include "main.h"

void puts_half(char *str)
{
	int len, i, j;
	
	len = 0;
	
	for (i = 0;;i++)
	{
		if ( str[i] != '\0')
		{
			len++;
		}
		else
		{
			break;
		}
	}
	
	for (j = len/2; j < len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

