#include "lists.h"
/**
 * _strlen - calculates length of str
 * @s: Input
 * Return: len
 */
size_t _strlen(const char *s)
{
	int len, i;

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

	return (len);
}
