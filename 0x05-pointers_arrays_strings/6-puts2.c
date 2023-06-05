#include "main.h"
#include <string.h>
/**
 * puts2- prints every other char of str
 *
 * @str: Input
 * Return: none
 */
void puts2(char *str)
{
	size_t i;

	for (i = 0; i <= strlen(str); i += 2)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
