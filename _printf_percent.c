#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf_percent - print a %
 * @args: args
 * Return: 1
 */

int _printf_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}