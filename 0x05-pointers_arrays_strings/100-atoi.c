#include "main.h"

/**
 * _atoi - converts str to int
 * @s: Input, str to convert
 *
 * Return: int
 */

int _atoi(char *s)
{
	int i, mult, num;

	num = 0;
	mult = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			mult *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
	}
	return (num * mult);
}
