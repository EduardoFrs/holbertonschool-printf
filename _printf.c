#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Print and formate a string
 * @format: String to print and to formated
 * Return: (int)
 */
int _printf(const char *format, ...)
{
	int i = 0, inc, count = 0;
	char c1, c2;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		int printed = 0;
		int (*f)(va_list args);

		c1 = format[i];
		inc = 1;

		if (c1 == '%')
		{
			c2 = format[i + 1];
			if (c2 == '\0')
			{
				va_end(args);
				return (-1);
			}
			f = get_format_function(c2);
			if (f)
			{
				count += f(args);
				inc = 2;
				printed = 1;
			}
		}
		if (printed == 0)
		{
			count += 1;
			_putchar(c1);
		}
		i += inc;
	}
	va_end(args);
	return (count);
}

/**
 * get_format_function - function to return the function format
 * @c2: character to check
 * Return: Function or NULL
 */
int (*get_format_function(char c2))(va_list)
{
	int ii;
	format_t ftypes[] = {
		{"c", _printf_char},
		{"s", _printf_string},
		{"i", _printf_integer},
		{"d", _printf_integer},
		{"%", _printf_percent},
		{"u", _printf_unsignedint},
	};

	for (ii = 0; ii < 6; ii++)
	{
		if (ftypes[ii].op[0] == c2)
		{
			return (ftypes[ii].f);
		}
	}
	return (NULL);
}
