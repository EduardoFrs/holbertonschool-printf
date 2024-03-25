#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{

    va_list args; 
    va_start args, 

    int count = 0;
    while (*format != '\0')
    {
        putchar(*format);
        count++;
    }
    
}