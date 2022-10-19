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
	int last = n % 10
	if (n < 0)
	{
		_putchar(-last + '0');
		_putchar(-last + '0');
	}
	else
	{
		_putchar(last + '0');
		_putchar(last + '0');
	}
}
