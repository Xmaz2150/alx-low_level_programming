#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int i = -1; i < 9; i++)
	{
		putchar(i + '1');

		if (i < 8)
		{
			putchar(',');
		}
	}

	putchar('\n');

	return (0);
}
