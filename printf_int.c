#include "main.h"

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
