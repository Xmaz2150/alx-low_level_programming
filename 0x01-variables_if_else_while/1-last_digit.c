#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %i is %i and is ", n, n % 10);
	if (n % 10 == 0)
	{
		printf("0");
	}
	else if (n % 10 != 0 && n % 10 < 6)
	{
		printf("less than 6 and not 0");
	}
	else if (n % 10 > 5)
	{
		printf("greater than 5");
	}

	printf("\n");
	return (0);
}
