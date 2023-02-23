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
void positive_or_negative(int i)
{
	/* your code goes there */
	printf("%i ", i);
	if (i > 0)
	{
		printf("is positive\n");
	}
	else if (i < 0)
	{
		printf("is negative\n");
	}
	else
	{
		printf("is zero\n");
	}
}
