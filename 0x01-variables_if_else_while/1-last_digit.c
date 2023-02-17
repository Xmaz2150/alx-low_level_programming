#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %i is %i and is ", n,n%10);
	if(n > 5)
	{
		printf("greater than 5");
	}
	else if(n == 0)
	{
		printf("0");
	}
	else if(n < 6 && (n != 0))
	{
		printf("less than 6 and not 0");
	}

	printf("\n");
	return (0);
}
