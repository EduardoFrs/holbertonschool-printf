#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf_char - print character
 * @args: arguments of the function
 * Return: 1
 */

int _printf_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
