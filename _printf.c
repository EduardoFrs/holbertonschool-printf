#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - function that produce output according to a format
 * @format: character string
 * 
 * Return: the number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == 'c')
			{
				int c = va_arg(args, int);
				_putchar(c);
				i++;
			}
			else if (*format == '%')
			{
				_putchar('%');
				i++;
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				i += 2;
			}
		}
		else
		{
			_putchar(*format);
			i++;
		}
		format++;
	}

	va_end(args);
	return i;
}