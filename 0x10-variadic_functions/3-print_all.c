#include "variadic_functions.h"

/**
 * print_all - print all argument
 *
 * @format: constant pointer constant parameter
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	form_t form[] = 
	{
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_charx}
	};
	unsigned int i = 0, j;
	char *separator = "";

	va_start(ap, format);
	while (format != NULL && form[i])
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *form[j].charType)
			{
				form[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

/**
 * print_char - prints char
 * @separator: separator
 * @ap: argument
 *
 * Return: void
 */

void print_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * print_int - print integer
 *
 * @separator: separator
 * @ap: argument
 *
 * Return: void
 */

void print_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * print_float - print float
 *
 * @separator: separator
 * @ap: argument
 *
 * Return: void
 */

void print_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * print_charx
 *
 * @separator: separator
 * @ap: argument
 *
 * Return: void
 */

void print_charx(char *separator, va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("%s(null)", separator);
		return;
	}
	printf("%s%s", separator, s);
}
