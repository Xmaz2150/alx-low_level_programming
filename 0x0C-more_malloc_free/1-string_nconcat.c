#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char *is_valid(char *s);
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

	s1 = is_valid(s1);
	if (s1 == NULL)
		return (NULL);
	s2 = is_valid(s2);
	if (s2 == NULL)
		return (NULL);

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	new_str = malloc(s1_len + s2_len + 1);

	if (new_str == NULL)
		return (NULL);
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
	if (s1[1] == 'i')
		free(s1);
	if (s2[1] == 'i')
		free(s2);
	return (new_str);
}

/**
 * is_valid - checks if str is NULL
 * @s: Input
 *
 * Return: char*
 */

char *is_valid(char *s)
{
	if (s == NULL)
	{
		s = malloc(3);
		if (s == NULL)
			return (NULL);
		*s = '\0';
		*(s + 1) = 'i';
		*(s + 2) = '\0';
	}
	return (s);
}
