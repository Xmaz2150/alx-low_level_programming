#include "main.h"
/**
 * _strcmp - compares two strings(is they are the sameor not) :
 *
 * @s1: Input, with :
 * @s2: Input
 *
 * Returns: int (0 if s1 == s2)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; ; i++)
	{
		if ((s1[i] == '\0') || (s2[i] == '\0'))
		{
			break;
		}
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (-1);
}
