#include "main.h"
/**
 * puts_half - prints half of str
 *
 * @str: Input
 * Return: none
 */
void puts_half(char *str)
{
	int len, i, j;
	len = 0;
	for (i = 0; ; i++)
	{
		if (str[i] != '\0')
		{
			len++;
		}
		else
		{
			break;
		}
	}
	
	for (j = (len - 1) / 2; j < len - 1; j++)
	{
		_putchar(str[j + 1]);
	}
	_putchar('\n');
}

