#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 90; i++)
	{
		if (i < 10)
		{
			putchar('0');
			putchar(i + '0');
		}

		else
		{
			putchar(((i / 10) % 10) + '0');
			putchar((i % 10) + '0');
		}

		if (i < 89)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
