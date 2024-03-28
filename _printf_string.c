#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf_string - print a string of characters
 * @args: char
 * Return: count
 */

int _printf_string(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (*str != 0)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
