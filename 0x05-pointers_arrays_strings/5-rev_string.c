#include "main.h"
#include <stdio.h>
/**
 * rev_string - revereses string
 *
 * @s: Input
 * Return: none
 */
void rev_string(char *s)
{
	int len, i, k;
	char c[100];

	len = 0;

	for (i = 0; ; i++)
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

	k = len - 1;
	for (i = 0; i < len; i++)
	{
		c[i] = s[k];
		k--;
	}
	c[i] = '\0';

	for (i = 0; i < len; i++)
	{
		s[i] = c[i];
	}
}
