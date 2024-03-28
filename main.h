#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct format_types - Struct format
 * @op: Character to recognize the format
 * @f: Function to execute print
 */
typedef struct format_types
{
	char *op;
	int (*f)(va_list args);
} format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_format_function(char c2))(va_list);
int _abs(int c);

int _printf_char(va_list args);
int _printf_integer(va_list args);
int __printf_integer(int nb, int count);
int _printf_string(va_list args);
int _printf_percent(va_list args);
int _printf_unsignedint(va_list args);
int __printf_unsignedint(unsigned int nb, int count);

#endif