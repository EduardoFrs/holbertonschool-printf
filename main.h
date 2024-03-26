#ifndef MAIN_H
#define MAIN_H

typedef struct print_type
{
    char letter;
    int (*f)(va_list);
} print_t

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);
int print_integer(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hexa(va_list args);
int print_adress(va_list args);

#endif
