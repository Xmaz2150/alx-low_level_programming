#include <math.h>
#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: 0 (Always success)
 **/

int main(void)
{
	long int j, n, sqrt_n, lgst_pf;

	n = 612852475143;
	sqrt_n = sqrt(n) + 1;

		for (j = 3; j <= sqrt_n; j++)
		{
			if (n % j == 0)
			{
				lgst_pf = n / j;
			}
		}

	printf("%ld\n", lgst_pf);

	return (0);
}
