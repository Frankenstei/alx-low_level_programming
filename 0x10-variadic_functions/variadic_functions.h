#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list ap);
void print_int(char *separator, va_list ap);
void print_float(char *separator, va_list ap);
void print_charx(char *separator, va_list ap);

/**
 * struct format - struct name
 * @charType: specifier
 * @f: function pointer
 */

typedef struct form
{
	char *charType;
	void (*f)(char *separator, va_list ap);
} form_t;

#endif
