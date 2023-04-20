#include "3-calc.h"

/**
 * get_op_func - gets suitable function of a specific:
 *
 * @s: Input, operation
 *
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != ops[5].op)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (0);
}
