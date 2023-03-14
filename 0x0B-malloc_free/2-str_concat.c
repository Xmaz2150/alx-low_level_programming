#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - returns pointer to new string containing :
 * @s1: Input and 
 * @s2: Input
 *
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{	
	int i,j,s1_len,s2_len;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
        {
                s2 = "";
        }
	else
	{
		i = 0;
		j = 0;
		s1_len = strlen(s1);
		s2_len = strlen(s2);

		new_str = malloc(s1_len + s2_len + 1);
		
		for ( ; i < s1_len; i++)
		{
			new_str[i] = s1[i];
		}
		for ( ; j < s2_len; j++)
		{
			new_str[i + j] = s2[j];
		}
		new_str[i + j] = '\0';
	}

	return (new_str);
}
