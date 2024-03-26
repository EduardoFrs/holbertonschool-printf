#include "main.h"
#include <stdio.h>
#include <stdarg.h>

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

            if (*format == 'd' || *format == 'i')
            {
                int num = va_arg(args, int);
                _putchar(num);
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
    return i;
}

