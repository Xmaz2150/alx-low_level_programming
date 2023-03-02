#include "main.h"
/**
 * *string_toupper - changes lower case letters to upper case
 *
 * @str: Input
 *
 * Return: char
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				*(str + i)  = str[i] - 32;
			}
			else
			{
				continue;
			}
		}
		else
		{
			break;
		}
	}
	return (str);
}
