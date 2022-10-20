#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_chars(va_list c);
int print_str(va_list s);
int print_ints(va_list i);
int print_decimal(va_list d);
int print_Str(va_list S);
int print_r(va_list r);


#endif
