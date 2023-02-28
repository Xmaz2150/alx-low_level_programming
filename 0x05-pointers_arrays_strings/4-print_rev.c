#include "main.h"

void print_rev(char *s)
{
	int len, i, j;

	len = 0;

	for (i = 0;;i++)
	{
		if (s[i] != '\0')
		{
			len++;
		}
		else
		{
			break;
		}
	}

	for (j = 0; j < len +1; j++)
	{
		_putchar(s[len - j]);
	}
	_putchar('\n');

}	
