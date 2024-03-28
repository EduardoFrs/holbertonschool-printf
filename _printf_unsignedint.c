#include <stdarg.h>
#include "main.h"

/**
 * _printf_unsignedint - print unsigned integers
 * @args: arguments of the function
 * Return: count
 */

int _printf_unsignedint(va_list args)
{
	unsigned int nb = (int)va_arg(args, unsigned int);
	int count = 0;

	if (!nb)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count += __printf_unsignedint(nb, 0);
	}
	return (count);

}

/**
 * __printf_unsignedint - recursion of the first function
 *@nb: number
 *@count: number to count
 *Return: count
 */

int __printf_unsignedint(unsigned int nb, int count)
{
	if (nb <= 0)
		return (count);
	count = __printf_unsignedint(nb / 10, count + 1);
	_putchar((nb % 10) + '0');
	return (count);
}