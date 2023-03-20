#include "main.h"
/**
 * _puts - prints str
 *
 * @str: Input
 * Return: none
 */
void _puts(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
		}
		else
		{
			_putchar('\n');
			break;
		}
	}
}

