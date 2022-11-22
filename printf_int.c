#include "main.h"

/**
 * printf_int - A function that prints an integer
 * @arg: a character arguement
 * Return: Integer
 */

int printf_int(va_list arg)
{
	int i, n;

	n = va_arg(arg, int);
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	i = _puts(convert(n, 10));
	return (i);
}
/**
 * printf_deci - A function that prints a Decimal
 * @arg: a character arguement
 * Return: integer
 */

int printf_deci(va_list arg)
{
	int i, n;

	n = va_arg(arg, int);
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	i = _puts(convert(n, 10));
	return (i);
}
