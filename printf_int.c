#include "main.h"

/**
 * printf_int - A function that prints an integer
 * @arg: a character arguement
 * Return: Integer
 */

int printf_int(va_list arg)
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
/**
 * printf_deci - A function that prints a Decimal
 * @arg: a character arguement
 * Return: integer
 */

int printf_deci(va_list arg)
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
