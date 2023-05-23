#include"main.h"
/**
 * _islower - checks if alphabet is lowercase or not
 * c : char
 * Return : 0 (true) | 1 (false)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
