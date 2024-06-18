#include "main.h"

/**
 * _atoi - converts str to int
 * @s: Input, str to convert
 *
 * Return: int
 */

int _atoi(char *s)
{
	int i, mult, num, started;

	num = 0;
	mult = 1;
	started = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			mult *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			num = num * 10 + (s[i] - '0');
		}
		else if (started)
			break;
	}
	return (num * mult);
}
