#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i + '1') - 1);

		if (i < 9)
		{
			putchar(',');
		}
	}

	putchar('\n');

	return (0);
}
