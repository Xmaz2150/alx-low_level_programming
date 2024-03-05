#include "main.h"
#include <stdio.h>
/**
 * *cap_string - changes lower case letters to upper case
 *
 * @str: Input
 *
 * Return: char
 */
char *cap_string(char *str)
{
	char *separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		char c = str[i];

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i + 1] -= 32;
		}
		if (is_sep(c, separators))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}

int is_sep(char c, char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == c)
			return (1);
	}
	return (0);
}
