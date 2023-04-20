#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -returns new string with combined str's:
 *
 * @s1: Input and
 * @s2: Input, until
 * @n: Input bytes
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i, j;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	new_str = malloc(s1_len + s2_len + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;

		while (i < s1_len)
		{
			new_str[i] = s1[i];
			i++;
		}

		j = 0;

		if (n < s2_len)
		{
			while (j < n)
			{
				new_str[i + j] = s2[j];
				j++;
			}
		}
		else if (n <= s2_len)
		{
			while (j < s2_len)
			{
				new_str[i + j] = s2[j];
				j++;
			}
		}
		new_str[i + j] = '\0';
		return (new_str);
	}
}
