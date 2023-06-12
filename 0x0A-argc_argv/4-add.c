#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds all positive numbers
 * @argc: argument count
 * @argv: arguments
 *
 * Return: (0) Always success
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
