#include "3-calc.h"

/**
 * op_add - adds arg1 and arg2
 *
 * @a: Input, arg1
 * @b: Input, arg2
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts arg1 and arg2
 *
 * @a: Input, arg1
 * @b: Input, arg2
 *
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies arg1 and arg2
 *
 * @a: Input, arg1
 * @b: Input, arg2
 *
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devides arg1 and arg2
 *
 * @a: Input, arg1
 * @b: Input, arg2
 *
 * Return: int
 */

int op_div(int a, int b)
{
	if (b == 0)
		exit(100);
	return (a / b);
}

/**
 * op_mod - remainder of arg1 and arg2
 *
 * @a: Input, arg1
 * @b: Input, arg2
 *
 * Return: int
 */

int op_mod(int a, int b)
{
	if (b == 0)
		exit(100);
	return (a % b);
}
