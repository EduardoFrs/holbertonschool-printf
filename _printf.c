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
			else if (*format == 'd' || *format == 'i')
			{
				int d = va_arg(args, int);

				if (d < 0)
				{
					_putchar('-');
					d = d * -1;
				}
				if (d >= 10)
				{
					char digits[12];
					int index = 0;

					while (d > 0)
					{
						int digit = d % 10;

						digits[index] = digit;
						index++;
						d = d / 10;
					}
					while (index > 0)
					{
						index--;
						_putchar('0' + digits[index]);
					}
					i++;
				} else
				{
					_putchar('0' + d);
					i++;
				}
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);

				while (*s)
				{
					_putchar(*s);
					s++;
					i++;
				}
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
				i++;
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
	return (i);
}
