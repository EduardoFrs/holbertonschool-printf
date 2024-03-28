#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}