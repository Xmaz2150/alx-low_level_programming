#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: none
 */
void jack_bauer(void)
{
	int i, j;
	
	for (int i = 0; i <= 23; i++)
	{
		for (int j = 0; j <= 59; j++)
		{
			if (i <= 9)
				putchar('0');
			printf("%d", i);
			
			putchar(':');
			
			if (j <= 9)
				putchar('0');
			printf("%d", j);
			
			if (j != 59)
				putchar('\n');
		}
		putchar('\n');
	}
}
