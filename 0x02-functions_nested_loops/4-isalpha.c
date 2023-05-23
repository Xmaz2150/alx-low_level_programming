#include "main.h"
/**
 * _isalpha - returns 1 is char is uppercase
 * @c: Input
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
