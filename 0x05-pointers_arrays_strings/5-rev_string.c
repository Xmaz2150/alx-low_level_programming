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
	int len, new_len, i, j;
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

	new_len = len - 1;
	for (j = 0; j < len; j++)
	{
		c[j] = s[new_len - j];
	}

	*s = *c;
	putchar('\n');

}
