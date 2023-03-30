#include "3-calc.h"

/**
 * main - utilizes all functions and structs to make calc
 * @argc: Input, num of cli args
 * @argv: Input, cli args
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = get_op_func(argv[2]);

	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = calc(num1, num2);

	printf("%d\n", result);
	return (0);
}
