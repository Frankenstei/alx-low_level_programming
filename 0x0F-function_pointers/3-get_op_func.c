#include "3-calc.h"

/**
 * get_op_func - get the operator
 *
 * @s: operator
 *
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (s = ops->ops[i])
		{
			return (ops->f[i]);
		}
	}
}
