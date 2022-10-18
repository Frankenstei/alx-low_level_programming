#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * Return: Always 0
 *
 * @n: an integer
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		return (-n % 10);
	}
	else
	{
		return (n % 10);
	}
}
