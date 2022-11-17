 #include "3-calc.h"

/**
 * main - function main
 * 
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (!(op))
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", op(num1, num2));
	return (0);
}


