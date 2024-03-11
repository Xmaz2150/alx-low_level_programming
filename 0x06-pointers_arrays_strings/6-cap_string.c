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
int i;

i = 0;
	while (str[i] != '\0')
	{
		char c = str[i];

		if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' || c == '.' || c == '!' || c == '?' || c == '"' || c == '(' || c == ')' || c == '{' || c == '}')
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
