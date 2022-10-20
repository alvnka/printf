#include "main.h"
#include <stdlib.h>

/**
 * print_chars - prints a char
 * @c: char to print
 *
 * Return: always 1
 */
int print_chars(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
 * print_str - prints a string
 * @s: string to print
 *
 * Return: number of chars printed
 */
int print_str(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}

/**
 * print_Str - prints a string and nonprintable character ascii values
 * @S: string to print
 *
 * Return: number of chars printed
 */
int print_Str(va_list S)
{
	unsigned int i;
	int count = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;

		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
