#include "3-calc.h"

/**
 * op_add - adds
 * @a: number1
 * @b: number2
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract
 *
 * @a: number1
 * @b: number2
 *
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 *
 * @a: number1
 * @b: number2
 *
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div
 *
 * @a: number1
 * @b: number2
 *
 * Return: int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus
 *
 * @a: number1
 * @b: number2
 *
 * Return: int
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
