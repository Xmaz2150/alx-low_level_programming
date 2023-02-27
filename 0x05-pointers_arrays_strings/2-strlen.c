#include "main.h"

int _strlen(char *s)
{
	int len, i;

	len = 0;

	for (i = 0;;i++)
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

	return len;
}
