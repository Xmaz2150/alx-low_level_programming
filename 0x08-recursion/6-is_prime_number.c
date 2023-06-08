#include "main.h"
/**
 * is_prime_number - checks if:
 * @n: Input is prime no
 *
 * Return: int
 */
int divider(int num, int div)
{
	if (div == 1)
		return (1);
	if (num % div == 0)
		return (0);
	return (divider(num, div - 1));
}
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (divider(n, n - 1));
}
