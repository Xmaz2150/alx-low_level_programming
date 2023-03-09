#include "main.h"
/**
 * is_prime_number - checks if:
 * @n: Input is prime no
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if ((n % 2) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
