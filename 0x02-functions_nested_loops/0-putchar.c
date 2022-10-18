#include "main.h"
#include <unistd.h>
/**
 * main - print _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}

/*
 * writes to stdout
 */
int _return(char c)
{
	return (write(1, &c, 1));
}
