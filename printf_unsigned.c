#include "main.h"

/**
 * printf_unsigned - A function that prints an unsigned integer
 * @arg: a character arguement
 * Return: Integer
 */

int printf_unsigned(va_list arg)
{
	int i, n, num, last, digit, exp;

	n = va_arg(arg, int);
	last = n % 10;
	exp = 1;
	i = 1;
	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
